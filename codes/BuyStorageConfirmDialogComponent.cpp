void __fastcall BuyStorageConfirmDialogComponent___ctor(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_42163EE & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_42163EE = 1;
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
    sub_B0D840(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_42163EC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int__Invoke__, *(_QWORD *)&buyCount);
    byte_42163EC = 1;
  }
  onMenuSelect = this->fields.onMenuSelect;
  p_onMenuSelect = (BattleServantConfConponent_o *)&this->fields.onMenuSelect;
  v11 = onMenuSelect;
  if ( onMenuSelect )
  {
    p_onMenuSelect->klass = 0LL;
    sub_B0D840(p_onMenuSelect, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action_int___Invoke(v11, buyCount, (const MethodInfo_246D4C0 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__Close(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BuyStorageConfirmDialogComponent__Close_27665780(this, 0LL, v2);
}


void __fastcall BuyStorageConfirmDialogComponent__Close_27665780(
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
  System_Action_o *v13; // x20

  if ( (byte_42163E8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_BuyStorageConfirmDialogComponent_EndClose__, v10);
    byte_42163E8 = 1;
  }
  this->fields.onClose = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_BuyStorageConfirmDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
  __int64 v8; // x0

  if ( (byte_42163E4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4);
    this = (BuyStorageConfirmDialogComponent_o *)sub_B0D8A4(
                                                   &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                   v5);
    byte_42163E4 = 1;
  }
  if ( !shopEntity )
LABEL_16:
    sub_B0D97C(this);
  result = 18;
  switch ( shopEntity->fields.payType )
  {
    case 4:
      return 7;
    case 6:
    case 0xB:
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_16;
      this = (BuyStorageConfirmDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
      itemIds = shopEntity->fields.itemIds;
      if ( !itemIds )
        goto LABEL_16;
      if ( !itemIds->max_length )
      {
        v8 = sub_B0D9A8(this);
        sub_B0D948(v8, 0LL);
      }
      if ( !this )
        goto LABEL_16;
      this = (BuyStorageConfirmDialogComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                     itemIds->m_Items[1],
                                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  __int64 v15; // x0

  if ( (byte_42163E3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, shopEntity);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&StringLiteral_12415/*"STONE_FRAGMENTS_NEED_INFO"*/, v7);
    sub_B0D8A4(&StringLiteral_1687/*"ANONYMOUS_NEED_INFO"*/, v8);
    sub_B0D8A4(&StringLiteral_11039/*"RARE_PRI_NEED_INFO"*/, v9);
    sub_B0D8A4(&StringLiteral_8642/*"MANA_NEED_INFO"*/, v10);
    this = (BuyStorageConfirmDialogComponent_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    byte_42163E3 = 1;
  }
  if ( !shopEntity )
LABEL_29:
    sub_B0D97C(this);
  switch ( shopEntity->fields.payType )
  {
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = &StringLiteral_8642/*"MANA_NEED_INFO"*/;
      goto LABEL_28;
    case 6:
    case 0xB:
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_29;
      this = (BuyStorageConfirmDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
      itemIds = shopEntity->fields.itemIds;
      if ( !itemIds )
        goto LABEL_29;
      if ( !itemIds->max_length )
      {
        v15 = sub_B0D9A8(this);
        sub_B0D948(v15, 0LL);
      }
      if ( !this )
        goto LABEL_29;
      this = (BuyStorageConfirmDialogComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                     itemIds->m_Items[1],
                                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
      v14 = &StringLiteral_12415/*"STONE_FRAGMENTS_NEED_INFO"*/;
      goto LABEL_28;
    case 9:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = &StringLiteral_1687/*"ANONYMOUS_NEED_INFO"*/;
      goto LABEL_28;
    case 0xA:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = &StringLiteral_11039/*"RARE_PRI_NEED_INFO"*/;
LABEL_28:
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
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct System_Int32_array *itemIds; // x8
  int32_t basePanel_high; // w19
  LocalizationManager_c *v14; // x0
  __int64 v16; // x0

  if ( (byte_42163E5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, shopEntity);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    this = (BuyStorageConfirmDialogComponent_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_42163E5 = 1;
  }
  if ( !shopEntity )
    goto LABEL_27;
  payType = shopEntity->fields.payType;
  if ( payType <= 0xB )
  {
    if ( ((1 << payType) & 0xB40) != 0 )
    {
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)this,
                                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
            v16 = sub_B0D9A8(this);
            sub_B0D948(v16, 0LL);
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
              v14 = LocalizationManager_TypeInfo;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
                return LocalizationManager__GetNumberFormat(basePanel_high, 0LL);
              goto LABEL_23;
            }
          }
        }
      }
LABEL_27:
      sub_B0D97C(this);
    }
    if ( payType == 4 )
    {
      if ( !userGameEntity )
        goto LABEL_27;
      basePanel_high = userGameEntity->fields.mana;
LABEL_22:
      v14 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        return LocalizationManager__GetNumberFormat(basePanel_high, 0LL);
LABEL_23:
      if ( !v14->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v14);
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

  if ( (byte_42163E1 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_42163E1 = 1;
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
    sub_B0D97C(titleLabel);
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
      sub_B0D97C(this);
    BuyStorageConfirmDialogComponent__Open_27661908(
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

  if ( (byte_42163EA & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42163EA = 1;
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

  if ( (byte_42163EB & 1) == 0 )
  {
    sub_B0D8A4(&Method_BuyStorageConfirmDialogComponent_OnClickClose__, method);
    byte_42163EB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_BuyStorageConfirmDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_BuyStorageConfirmDialogComponent_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_BuyStorageConfirmDialogComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
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

  if ( (byte_42163E9 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42163E9 = 1;
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

  if ( (byte_42163ED & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_4242/*"ConfirmWindow/ResultInfo/CloseButton"*/, v3);
    sub_B0D8A4(&StringLiteral_4241/*"ConfirmWindow/Notification/CloseButton"*/, v4);
    sub_B0D8A4(&StringLiteral_4240/*"ConfirmWindow/ConfirmInfo/CancelButton"*/, v5);
    byte_42163ED = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_20833784(transform, (System_String_o *)StringLiteral_4240/*"ConfirmWindow/ConfirmInfo/CancelButton"*/, 0LL);
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_20833784(v7, (System_String_o *)StringLiteral_4242/*"ConfirmWindow/ResultInfo/CloseButton"*/, 0LL);
  v8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_20833784(v8, (System_String_o *)StringLiteral_4241/*"ConfirmWindow/Notification/CloseButton"*/, 0LL);
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
      sub_B0D97C(this);
    BuyStorageConfirmDialogComponent__Open_27661908(
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
void __fastcall BuyStorageConfirmDialogComponent__Open_27661908(
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
  System_Action_o *v27; // x20

  if ( (byte_42163E2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&AtlasManager_TypeInfo, v13);
    sub_B0D8A4(&Method_BuyStorageConfirmDialogComponent_EndOpen__, v14);
    byte_42163E2 = 1;
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
    sub_B0D97C(ItemNumText);
  UILabel__set_text(itemNum, ItemNumText, 0LL);
  BuyStorageConfirmDialogComponent__SetMessageLabels(this, kind, type, notificationType, shopEntity, v21, v24);
  this->fields.state = 1;
  v27 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v25, v26);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_BuyStorageConfirmDialogComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
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
      sub_B0D97C(this);
    BuyStorageConfirmDialogComponent__Open_27661908(
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
  System_String_o *v30; // x0
  int32_t v31; // w20
  int32_t setNum; // w27
  int32_t buyCount; // w28
  UILabel_o *titleLabel; // x26
  __int64 *v35; // x8
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
  UILabel_o *nowNumLabel; // x21
  System_String_o *v49; // x23
  Il2CppObject *v50; // x0
  UILabel_o *afterNumLabel; // x20
  System_String_o *v52; // x21
  Il2CppObject *v53; // x0
  UILabel_o *nowNumTextLabel; // x20
  UILabel_o *afterNumTextLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  UILabel_o *closeBtnLabel; // x19
  __int64 *v58; // x8
  System_String_o *v59; // x22
  Il2CppObject *v60; // x0
  UILabel_o *resultAfterNumLabel; // x21
  System_String_o *v62; // x22
  Il2CppObject *v63; // x0
  UILabel_o *resultAfterNumTextLabel; // x20
  int32_t v65; // [xsp+0h] [xbp-60h] BYREF
  int32_t v66; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t max[2]; // [xsp+8h] [xbp-58h] BYREF

  v12 = this;
  if ( (byte_42163E6 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_11742/*"SERVANT_EQUIP_STORAGE_PURCHASE_RESULT"*/, v14);
    sub_B0D8A4(&StringLiteral_12437/*"STORAGE_SHOP_NOTIFICATION"*/, v15);
    sub_B0D8A4(&StringLiteral_11743/*"SERVANT_EQUIP_STORAGE_PURCHASE_TITLE"*/, v16);
    sub_B0D8A4(&StringLiteral_12089/*"SERVANT_STORAGE_PURCHASE_RESULT"*/, v17);
    sub_B0D8A4(&StringLiteral_11750/*"SERVANT_FRAME_PURCHASE_INFO1"*/, v18);
    sub_B0D8A4(&StringLiteral_12438/*"STORAGE_SHOP_SOLD_OUT"*/, v19);
    sub_B0D8A4(&StringLiteral_11751/*"SERVANT_FRAME_PURCHASE_INFO2"*/, v20);
    sub_B0D8A4(&StringLiteral_11747/*"SERVANT_FRAME_PURCHASE_CANCEL"*/, v21);
    sub_B0D8A4(&StringLiteral_12090/*"SERVANT_STORAGE_PURCHASE_TITLE"*/, v22);
    sub_B0D8A4(&StringLiteral_12087/*"SERVANT_STORAGE_PURCHASE_MESSAGE"*/, v23);
    sub_B0D8A4(&StringLiteral_11748/*"SERVANT_FRAME_PURCHASE_CLOSE"*/, v24);
    sub_B0D8A4(&StringLiteral_11749/*"SERVANT_FRAME_PURCHASE_DECIDE"*/, v25);
    sub_B0D8A4(&StringLiteral_11741/*"SERVANT_EQUIP_STORAGE_PURCHASE_MESSAGE"*/, v26);
    this = (BuyStorageConfirmDialogComponent_o *)sub_B0D8A4(&StringLiteral_12088/*"SERVANT_STORAGE_PURCHASE_NUM"*/, v27);
    byte_42163E6 = 1;
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
  v31 = max[1];
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
    v35 = &StringLiteral_11743/*"SERVANT_EQUIP_STORAGE_PURCHASE_TITLE"*/;
  }
  else
  {
    titleLabel = v12->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v35 = &StringLiteral_12090/*"SERVANT_STORAGE_PURCHASE_TITLE"*/;
  }
  v30 = LocalizationManager__Get((System_String_o *)*v35, 0LL);
  if ( !titleLabel )
    goto LABEL_77;
  UILabel__set_text(titleLabel, v30, 0LL);
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
      v40 = &StringLiteral_12437/*"STORAGE_SHOP_NOTIFICATION"*/;
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
      v40 = &StringLiteral_12438/*"STORAGE_SHOP_SOLD_OUT"*/;
    }
    v30 = LocalizationManager__Get((System_String_o *)*v40, 0LL);
    if ( !notificationMessage )
      goto LABEL_77;
    UILabel__set_text(notificationMessage, v30, 0LL);
    goto LABEL_58;
  }
  if ( type != 1 )
  {
    if ( type )
      return;
    v36 = v31 + buyCount * setNum;
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
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11750/*"SERVANT_FRAME_PURCHASE_INFO1"*/, 0LL);
        if ( nowNumTextLabel )
        {
          UILabel__set_text(nowNumTextLabel, v30, 0LL);
          afterNumTextLabel = v12->fields.afterNumTextLabel;
          v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11751/*"SERVANT_FRAME_PURCHASE_INFO2"*/, 0LL);
          if ( afterNumTextLabel )
          {
            UILabel__set_text(afterNumTextLabel, v30, 0LL);
            decideBtnLabel = v12->fields.decideBtnLabel;
            v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11749/*"SERVANT_FRAME_PURCHASE_DECIDE"*/, 0LL);
            if ( decideBtnLabel )
            {
              UILabel__set_text(decideBtnLabel, v30, 0LL);
              closeBtnLabel = v12->fields.cancelBtnLabel;
              v58 = &StringLiteral_11747/*"SERVANT_FRAME_PURCHASE_CANCEL"*/;
              goto LABEL_74;
            }
          }
        }
LABEL_77:
        sub_B0D97C(v30);
      }
      messageLabel = v12->fields.messageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v38 = &StringLiteral_11741/*"SERVANT_EQUIP_STORAGE_PURCHASE_MESSAGE"*/;
    }
    else
    {
      messageLabel = v12->fields.messageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v38 = &StringLiteral_12087/*"SERVANT_STORAGE_PURCHASE_MESSAGE"*/;
    }
    v44 = LocalizationManager__Get((System_String_o *)*v38, 0LL);
    Price = ShopEntity__GetPrice(shopEntity, 0LL);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v12->fields.buyCount * Price, 0LL);
    v66 = max[0];
    v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
    v30 = System_String__Format_43850968(v44, (Il2CppObject *)CurrencyItemName, NumberFormat, v47, 0LL);
    if ( !messageLabel )
      goto LABEL_77;
    UILabel__set_text(messageLabel, v30, 0LL);
    nowNumLabel = v12->fields.nowNumLabel;
    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12088/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0LL);
    v50 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v31, 0LL);
    v30 = System_String__Format(v49, v50, 0LL);
    if ( !nowNumLabel )
      goto LABEL_77;
    UILabel__set_text(nowNumLabel, v30, 0LL);
    afterNumLabel = v12->fields.afterNumLabel;
    v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12088/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0LL);
    v53 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v36, 0LL);
    v30 = System_String__Format(v52, v53, 0LL);
    if ( !afterNumLabel )
      goto LABEL_77;
    UILabel__set_text(afterNumLabel, v30, 0LL);
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
    v43 = &StringLiteral_11742/*"SERVANT_EQUIP_STORAGE_PURCHASE_RESULT"*/;
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
    v43 = &StringLiteral_12089/*"SERVANT_STORAGE_PURCHASE_RESULT"*/;
LABEL_65:
    v59 = LocalizationManager__Get((System_String_o *)*v43, 0LL);
    v66 = max[0];
    v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
    v30 = System_String__Format(v59, v60, 0LL);
    if ( !v42 )
      goto LABEL_77;
    UILabel__set_text(v42, v30, 0LL);
    resultAfterNumLabel = v12->fields.resultAfterNumLabel;
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12088/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0LL);
    v65 = v31;
    v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65);
    v30 = System_String__Format(v62, v63, 0LL);
    if ( !resultAfterNumLabel )
      goto LABEL_77;
    UILabel__set_text(resultAfterNumLabel, v30, 0LL);
  }
  resultAfterNumTextLabel = v12->fields.resultAfterNumTextLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11750/*"SERVANT_FRAME_PURCHASE_INFO1"*/, 0LL);
  if ( !resultAfterNumTextLabel )
    goto LABEL_77;
  UILabel__set_text(resultAfterNumTextLabel, v30, 0LL);
  closeBtnLabel = v12->fields.closeBtnLabel;
LABEL_73:
  v58 = &StringLiteral_11748/*"SERVANT_FRAME_PURCHASE_CLOSE"*/;
LABEL_74:
  v30 = LocalizationManager__Get((System_String_o *)*v58, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_77;
  UILabel__set_text(closeBtnLabel, v30, 0LL);
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

  this->fields.kind = kind;
  this->fields.onMenuSelect = onMenuSelect;
  sub_B0D840(
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
    sub_B0D97C(gameObject);
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

  if ( (byte_42163E7 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    byte_42163E7 = 1;
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
    sub_B0D97C(v12);
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