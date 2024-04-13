void __fastcall BuyStorageConfirmDialogComponent___ctor(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA639 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA639 = 1;
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
    sub_B5D560(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_42EA637 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__Invoke__, buyCount, (_DWORD)method, v3);
    byte_42EA637 = 1;
  }
  onMenuSelect = this->fields.onMenuSelect;
  p_onMenuSelect = (BattleServantConfConponent_o *)&this->fields.onMenuSelect;
  v11 = onMenuSelect;
  if ( onMenuSelect )
  {
    p_onMenuSelect->klass = 0LL;
    sub_B5D560(p_onMenuSelect, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action_int___Invoke(v11, buyCount, (const MethodInfo_2589DA4 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__Close(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BuyStorageConfirmDialogComponent__Close_28592436(this, 0LL, v2);
}


void __fastcall BuyStorageConfirmDialogComponent__Close_28592436(
        BuyStorageConfirmDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EA633 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BuyStorageConfirmDialogComponent_EndClose__, v10, v11, v12);
    byte_42EA633 = 1;
  }
  this->fields.onClose = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t result; // w0
  struct System_Int32_array *itemIds; // x8
  __int64 v13; // x0

  if ( (byte_42EA62F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)shopEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5, v6, v7);
    this = (BuyStorageConfirmDialogComponent_o *)sub_B5D5C4(
                                                   &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                   v8,
                                                   v9,
                                                   v10);
    byte_42EA62F = 1;
  }
  if ( !shopEntity )
LABEL_16:
    sub_B5D69C(this, shopEntity);
  result = 18;
  switch ( shopEntity->fields.payType )
  {
    case 4:
      return 7;
    case 6:
    case 0xB:
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_16;
      this = (BuyStorageConfirmDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      itemIds = shopEntity->fields.itemIds;
      if ( !itemIds )
        goto LABEL_16;
      if ( !itemIds->max_length )
      {
        v13 = sub_B5D6C8(this);
        sub_B5D668(v13, 0LL);
      }
      if ( !this )
        goto LABEL_16;
      this = (BuyStorageConfirmDialogComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                     itemIds->m_Items[1],
                                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  struct System_Int32_array *itemIds; // x8
  System_String_o *result; // x0
  __int64 *v31; // x8
  __int64 v32; // x0

  if ( (byte_42EA62E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)shopEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_12525/*"STONE_FRAGMENTS_NEED_INFO"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1704/*"ANONYMOUS_NEED_INFO"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_11145/*"RARE_PRI_NEED_INFO"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_8707/*"MANA_NEED_INFO"*/, v23, v24, v25);
    this = (BuyStorageConfirmDialogComponent_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v26, v27, v28);
    byte_42EA62E = 1;
  }
  if ( !shopEntity )
LABEL_29:
    sub_B5D69C(this, shopEntity);
  switch ( shopEntity->fields.payType )
  {
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v31 = &StringLiteral_8707/*"MANA_NEED_INFO"*/;
      goto LABEL_28;
    case 6:
    case 0xB:
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_29;
      this = (BuyStorageConfirmDialogComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      itemIds = shopEntity->fields.itemIds;
      if ( !itemIds )
        goto LABEL_29;
      if ( !itemIds->max_length )
      {
        v32 = sub_B5D6C8(this);
        sub_B5D668(v32, 0LL);
      }
      if ( !this )
        goto LABEL_29;
      this = (BuyStorageConfirmDialogComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                     itemIds->m_Items[1],
                                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
      v31 = &StringLiteral_12525/*"STONE_FRAGMENTS_NEED_INFO"*/;
      goto LABEL_28;
    case 9:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v31 = &StringLiteral_1704/*"ANONYMOUS_NEED_INFO"*/;
      goto LABEL_28;
    case 0xA:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v31 = &StringLiteral_11145/*"RARE_PRI_NEED_INFO"*/;
LABEL_28:
      result = LocalizationManager__Get((System_String_o *)*v31, 0LL);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  unsigned int payType; // w8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct System_Int32_array *itemIds; // x8
  int32_t basePanel_high; // w19
  LocalizationManager_c *v22; // x0
  __int64 v24; // x0

  if ( (byte_42EA630 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, (_DWORD)shopEntity, (_DWORD)userGameEntity, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    this = (BuyStorageConfirmDialogComponent_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42EA630 = 1;
  }
  if ( !shopEntity )
    goto LABEL_27;
  payType = shopEntity->fields.payType;
  if ( payType <= 0xB )
  {
    if ( ((1 << payType) & 0xB40) != 0 )
    {
      this = (BuyStorageConfirmDialogComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)this,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
            v24 = sub_B5D6C8(this);
            sub_B5D668(v24, 0LL);
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
              v22 = LocalizationManager_TypeInfo;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
                return LocalizationManager__GetNumberFormat(basePanel_high, 0LL);
              goto LABEL_23;
            }
          }
        }
      }
LABEL_27:
      sub_B5D69C(this, shopEntity);
    }
    if ( payType == 4 )
    {
      if ( !userGameEntity )
        goto LABEL_27;
      basePanel_high = userGameEntity->fields.mana;
LABEL_22:
      v22 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        return LocalizationManager__GetNumberFormat(basePanel_high, 0LL);
LABEL_23:
      if ( !v22->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v22);
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
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42EA62C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EA62C = 1;
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
    sub_B5D69C(titleLabel, method);
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
      sub_B5D69C(this, kind);
    BuyStorageConfirmDialogComponent__Open_28588564(
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
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42EA635 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA635 = 1;
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
    BuyStorageConfirmDialogComponent__CallOnMenuSelect(this, 0, v5);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__OnClickClose(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42EA636 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BuyStorageConfirmDialogComponent_OnClickClose__, (_DWORD)method, v2, v3);
    byte_42EA636 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_BuyStorageConfirmDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_BuyStorageConfirmDialogComponent_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_BuyStorageConfirmDialogComponent_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    BuyStorageConfirmDialogComponent__CallOnMenuSelect(this, 0, v7);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__OnClickDecide(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t decideSe; // w20
  const MethodInfo *v6; // x2

  if ( (byte_42EA634 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA634 = 1;
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
    BuyStorageConfirmDialogComponent__CallOnMenuSelect(this, this->fields.buyCount, v6);
  }
}


void __fastcall BuyStorageConfirmDialogComponent__OnEnable(
        BuyStorageConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v15; // x0
  UnityEngine_Transform_o *v16; // x0

  if ( (byte_42EA638 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_4298/*"ConfirmWindow/ResultInfo/CloseButton"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_4297/*"ConfirmWindow/Notification/CloseButton"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_4296/*"ConfirmWindow/ConfirmInfo/CancelButton"*/, v11, v12, v13);
    byte_42EA638 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21237572(transform, (System_String_o *)StringLiteral_4296/*"ConfirmWindow/ConfirmInfo/CancelButton"*/, 0LL);
  v15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_21237572(v15, (System_String_o *)StringLiteral_4298/*"ConfirmWindow/ResultInfo/CloseButton"*/, 0LL);
  v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_21237572(v16, (System_String_o *)StringLiteral_4297/*"ConfirmWindow/Notification/CloseButton"*/, 0LL);
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
      sub_B5D69C(this, kind);
    BuyStorageConfirmDialogComponent__Open_28588564(
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
void __fastcall BuyStorageConfirmDialogComponent__Open_28588564(
        BuyStorageConfirmDialogComponent_o *this,
        int32_t kind,
        int32_t type,
        int32_t notificationType,
        ShopEntity_o *shopEntity,
        System_Action_int__o *onMenuSelect,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UISprite_o *itemImage; // x24
  BuyStorageConfirmDialogComponent_o *v20; // x0
  const MethodInfo *v21; // x2
  int32_t CurrencyImageId; // w25
  UserGameEntity_o *SelfUserGame; // x0
  UILabel_o *itemNum; // x25
  UserGameEntity_o *v25; // x24
  const MethodInfo *v26; // x3
  System_String_o *ItemNumText; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x6
  System_Action_o *v30; // x20

  if ( (byte_42EA62D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, type, *(_QWORD *)&notificationType);
    sub_B5D5C4(&AtlasManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_BuyStorageConfirmDialogComponent_EndOpen__, v16, v17, v18);
    byte_42EA62D = 1;
  }
  BuyStorageConfirmDialogComponent__SetObjectsOnInit(this, kind, type, onMenuSelect, (const MethodInfo *)shopEntity);
  itemImage = this->fields.itemImage;
  CurrencyImageId = BuyStorageConfirmDialogComponent__GetCurrencyImageId(v20, shopEntity, v21);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(itemImage, CurrencyImageId, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  itemNum = this->fields.itemNum;
  v25 = SelfUserGame;
  ItemNumText = BuyStorageConfirmDialogComponent__GetItemNumText(
                  (BuyStorageConfirmDialogComponent_o *)SelfUserGame,
                  shopEntity,
                  SelfUserGame,
                  v26);
  if ( !itemNum )
    sub_B5D69C(ItemNumText, v28);
  UILabel__set_text(itemNum, ItemNumText, 0LL);
  BuyStorageConfirmDialogComponent__SetMessageLabels(this, kind, type, notificationType, shopEntity, v25, v29);
  this->fields.state = 1;
  v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_BuyStorageConfirmDialogComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v30, 0, 0LL);
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
      sub_B5D69C(this, kind);
    BuyStorageConfirmDialogComponent__Open_28588564(
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  System_String_o *CurrencyItemName; // x23
  const MethodInfo *v59; // x6
  System_String_o *v60; // x0
  __int64 v61; // x1
  int32_t v62; // w20
  int32_t setNum; // w27
  int32_t buyCount; // w28
  UILabel_o *titleLabel; // x26
  __int64 *v66; // x8
  int32_t v67; // w22
  UILabel_o *messageLabel; // x24
  __int64 *v69; // x8
  UILabel_o *notificationMessage; // x20
  __int64 *v71; // x8
  int32_t v72; // w8
  UILabel_o *v73; // x21
  __int64 *v74; // x8
  System_String_o *v75; // x25
  int32_t Price; // w0
  Il2CppObject *NumberFormat; // x21
  Il2CppObject *v78; // x0
  UILabel_o *nowNumLabel; // x21
  System_String_o *v80; // x23
  Il2CppObject *v81; // x0
  UILabel_o *afterNumLabel; // x20
  System_String_o *v83; // x21
  Il2CppObject *v84; // x0
  UILabel_o *nowNumTextLabel; // x20
  UILabel_o *afterNumTextLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  UILabel_o *closeBtnLabel; // x19
  __int64 *v89; // x8
  System_String_o *v90; // x22
  Il2CppObject *v91; // x0
  UILabel_o *resultAfterNumLabel; // x21
  System_String_o *v93; // x22
  Il2CppObject *v94; // x0
  UILabel_o *resultAfterNumTextLabel; // x20
  int32_t v96; // [xsp+0h] [xbp-60h] BYREF
  int32_t v97; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t max[2]; // [xsp+8h] [xbp-58h] BYREF

  v12 = this;
  if ( (byte_42EA631 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, kind, type, *(_QWORD *)&notificationType);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_11853/*"SERVANT_EQUIP_STORAGE_PURCHASE_RESULT"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_12547/*"STORAGE_SHOP_NOTIFICATION"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_11854/*"SERVANT_EQUIP_STORAGE_PURCHASE_TITLE"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_12198/*"SERVANT_STORAGE_PURCHASE_RESULT"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_11861/*"SERVANT_FRAME_PURCHASE_INFO1"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_12548/*"STORAGE_SHOP_SOLD_OUT"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_11862/*"SERVANT_FRAME_PURCHASE_INFO2"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_11858/*"SERVANT_FRAME_PURCHASE_CANCEL"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_12199/*"SERVANT_STORAGE_PURCHASE_TITLE"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_12196/*"SERVANT_STORAGE_PURCHASE_MESSAGE"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_11859/*"SERVANT_FRAME_PURCHASE_CLOSE"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_11860/*"SERVANT_FRAME_PURCHASE_DECIDE"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_11852/*"SERVANT_EQUIP_STORAGE_PURCHASE_MESSAGE"*/, v52, v53, v54);
    this = (BuyStorageConfirmDialogComponent_o *)sub_B5D5C4(&StringLiteral_12197/*"SERVANT_STORAGE_PURCHASE_NUM"*/, v55, v56, v57);
    byte_42EA631 = 1;
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
    v59);
  if ( !shopEntity )
    goto LABEL_77;
  v62 = max[1];
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
    v66 = &StringLiteral_11854/*"SERVANT_EQUIP_STORAGE_PURCHASE_TITLE"*/;
  }
  else
  {
    titleLabel = v12->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v66 = &StringLiteral_12199/*"SERVANT_STORAGE_PURCHASE_TITLE"*/;
  }
  v60 = LocalizationManager__Get((System_String_o *)*v66, 0LL);
  if ( !titleLabel )
    goto LABEL_77;
  UILabel__set_text(titleLabel, v60, 0LL);
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
      v71 = &StringLiteral_12547/*"STORAGE_SHOP_NOTIFICATION"*/;
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
      v71 = &StringLiteral_12548/*"STORAGE_SHOP_SOLD_OUT"*/;
    }
    v60 = LocalizationManager__Get((System_String_o *)*v71, 0LL);
    if ( !notificationMessage )
      goto LABEL_77;
    UILabel__set_text(notificationMessage, v60, 0LL);
    goto LABEL_58;
  }
  if ( type != 1 )
  {
    if ( type )
      return;
    v67 = v62 + buyCount * setNum;
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
        v60 = LocalizationManager__Get((System_String_o *)StringLiteral_11861/*"SERVANT_FRAME_PURCHASE_INFO1"*/, 0LL);
        if ( nowNumTextLabel )
        {
          UILabel__set_text(nowNumTextLabel, v60, 0LL);
          afterNumTextLabel = v12->fields.afterNumTextLabel;
          v60 = LocalizationManager__Get((System_String_o *)StringLiteral_11862/*"SERVANT_FRAME_PURCHASE_INFO2"*/, 0LL);
          if ( afterNumTextLabel )
          {
            UILabel__set_text(afterNumTextLabel, v60, 0LL);
            decideBtnLabel = v12->fields.decideBtnLabel;
            v60 = LocalizationManager__Get((System_String_o *)StringLiteral_11860/*"SERVANT_FRAME_PURCHASE_DECIDE"*/, 0LL);
            if ( decideBtnLabel )
            {
              UILabel__set_text(decideBtnLabel, v60, 0LL);
              closeBtnLabel = v12->fields.cancelBtnLabel;
              v89 = &StringLiteral_11858/*"SERVANT_FRAME_PURCHASE_CANCEL"*/;
              goto LABEL_74;
            }
          }
        }
LABEL_77:
        sub_B5D69C(v60, v61);
      }
      messageLabel = v12->fields.messageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v69 = &StringLiteral_11852/*"SERVANT_EQUIP_STORAGE_PURCHASE_MESSAGE"*/;
    }
    else
    {
      messageLabel = v12->fields.messageLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v69 = &StringLiteral_12196/*"SERVANT_STORAGE_PURCHASE_MESSAGE"*/;
    }
    v75 = LocalizationManager__Get((System_String_o *)*v69, 0LL);
    Price = ShopEntity__GetPrice(shopEntity, 0LL);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v12->fields.buyCount * Price, 0LL);
    v97 = max[0];
    v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v97);
    v60 = System_String__Format_44578852(v75, (Il2CppObject *)CurrencyItemName, NumberFormat, v78, 0LL);
    if ( !messageLabel )
      goto LABEL_77;
    UILabel__set_text(messageLabel, v60, 0LL);
    nowNumLabel = v12->fields.nowNumLabel;
    v80 = LocalizationManager__Get((System_String_o *)StringLiteral_12197/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0LL);
    v81 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v62, 0LL);
    v60 = System_String__Format(v80, v81, 0LL);
    if ( !nowNumLabel )
      goto LABEL_77;
    UILabel__set_text(nowNumLabel, v60, 0LL);
    afterNumLabel = v12->fields.afterNumLabel;
    v83 = LocalizationManager__Get((System_String_o *)StringLiteral_12197/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0LL);
    v84 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v67, 0LL);
    v60 = System_String__Format(v83, v84, 0LL);
    if ( !afterNumLabel )
      goto LABEL_77;
    UILabel__set_text(afterNumLabel, v60, 0LL);
    goto LABEL_45;
  }
  v72 = v12->fields.kind;
  if ( v72 == 1 )
  {
    v73 = v12->fields.messageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v74 = &StringLiteral_11853/*"SERVANT_EQUIP_STORAGE_PURCHASE_RESULT"*/;
    goto LABEL_65;
  }
  if ( !v72 )
  {
    v73 = v12->fields.messageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v74 = &StringLiteral_12198/*"SERVANT_STORAGE_PURCHASE_RESULT"*/;
LABEL_65:
    v90 = LocalizationManager__Get((System_String_o *)*v74, 0LL);
    v97 = max[0];
    v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v97);
    v60 = System_String__Format(v90, v91, 0LL);
    if ( !v73 )
      goto LABEL_77;
    UILabel__set_text(v73, v60, 0LL);
    resultAfterNumLabel = v12->fields.resultAfterNumLabel;
    v93 = LocalizationManager__Get((System_String_o *)StringLiteral_12197/*"SERVANT_STORAGE_PURCHASE_NUM"*/, 0LL);
    v96 = v62;
    v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96);
    v60 = System_String__Format(v93, v94, 0LL);
    if ( !resultAfterNumLabel )
      goto LABEL_77;
    UILabel__set_text(resultAfterNumLabel, v60, 0LL);
  }
  resultAfterNumTextLabel = v12->fields.resultAfterNumTextLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_11861/*"SERVANT_FRAME_PURCHASE_INFO1"*/, 0LL);
  if ( !resultAfterNumTextLabel )
    goto LABEL_77;
  UILabel__set_text(resultAfterNumTextLabel, v60, 0LL);
  closeBtnLabel = v12->fields.closeBtnLabel;
LABEL_73:
  v89 = &StringLiteral_11859/*"SERVANT_FRAME_PURCHASE_CLOSE"*/;
LABEL_74:
  v60 = LocalizationManager__Get((System_String_o *)*v89, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_77;
  UILabel__set_text(closeBtnLabel, v60, 0LL);
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
  sub_B5D560(
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
    sub_B5D69C(gameObject, v11);
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

  if ( (byte_42EA632 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, kind, (_DWORD)shopEntity, userGameEntity);
    byte_42EA632 = 1;
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
    sub_B5D69C(v12, *(_QWORD *)&kind);
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