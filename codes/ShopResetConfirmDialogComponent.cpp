void ShopResetConfirmDialogComponent___ctor(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CEA8AF & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CEA8AF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ShopResetConfirmDialogComponent__CallOnClose(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o *onClose; // x19
  GrandQuestFolderBoardItem_o *p_onClose; // x0

  onClose = this->fields.onClose;
  if ( onClose )
  {
    p_onClose = (GrandQuestFolderBoardItem_o *)&this->fields.onClose;
    p_onClose->klass = 0;
    sub_1C7BA8C(p_onClose, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))onClose->fields.invoke_impl)(
      onClose->fields.method_code,
      onClose->fields.method);
  }
}


void ShopResetConfirmDialogComponent__CallOnMenuSelect(
        ShopResetConfirmDialogComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_onMenuSelect; // x0
  struct System_Action_bool__o *v9; // x20
  struct System_Action_bool__o *onMenuSelect; // t1

  onMenuSelect = this->fields.onMenuSelect;
  p_onMenuSelect = (GrandQuestFolderBoardItem_o *)&this->fields.onMenuSelect;
  v9 = onMenuSelect;
  if ( onMenuSelect )
  {
    p_onMenuSelect->klass = 0;
    sub_1C7BA8C(p_onMenuSelect, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      isDecide,
      v9->fields.method);
  }
}


void ShopResetConfirmDialogComponent__CheckSerializeField(
        ShopResetConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void ShopResetConfirmDialogComponent__Close(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ShopResetConfirmDialogComponent__Close_35742224(this, 0, v2);
}


void ShopResetConfirmDialogComponent__Close_35742224(
        ShopResetConfirmDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CEA8AA & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_ShopResetConfirmDialogComponent_EndClose__);
    byte_4CEA8AA = 1;
  }
  this->fields.onClose = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onClose,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ShopResetConfirmDialogComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void ShopResetConfirmDialogComponent__EndClose(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ShopResetConfirmDialogComponent__Init(this, method);
  ShopResetConfirmDialogComponent__CallOnClose(this, v3);
}


void ShopResetConfirmDialogComponent__EndOpen(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void ShopResetConfirmDialogComponent__Init(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4CEA8A7 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEA8A7 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.resultMessageLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.beforeNumLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.afterNumLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.beforeNumTextLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.afterNumTextLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.resultAfterNumLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.resultAfterNumTextLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.decideBtnLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.cancelBtnLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.closeBtnLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.itemNum;
  if ( !titleLabel )
    goto LABEL_21;
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
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_21:
    sub_1C7BD40(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ShopResetConfirmDialogComponent__OnClickCancel(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CEA8AC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ShopResetConfirmDialogComponent_OnClickCancel__);
    byte_4CEA8AC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopResetConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_ShopResetConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_ShopResetConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ShopResetConfirmDialogComponent__CallOnMenuSelect(this, 0, v5);
  }
}


void ShopResetConfirmDialogComponent__OnClickClose(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CEA8AD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ShopResetConfirmDialogComponent_OnClickClose__);
    byte_4CEA8AD = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopResetConfirmDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_ShopResetConfirmDialogComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_ShopResetConfirmDialogComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ShopResetConfirmDialogComponent__CallOnMenuSelect(this, 0, v5);
  }
}


void ShopResetConfirmDialogComponent__OnClickDecide(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CEA8AB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ShopResetConfirmDialogComponent_OnClickDecide__);
    byte_4CEA8AB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopResetConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_ShopResetConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_ShopResetConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    ShopResetConfirmDialogComponent__CallOnMenuSelect(this, 1, v5);
  }
}


void ShopResetConfirmDialogComponent__OnEnable(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0

  if ( (byte_4CEA8AE & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_4659/*"ConfirmWindow/ResultInfo/CloseButton"*/);
    sub_1C7BAE8(&StringLiteral_4657/*"ConfirmWindow/ConfirmInfo/CancelButton"*/);
    byte_4CEA8AE = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45495228(transform, (System_String_o *)StringLiteral_4657/*"ConfirmWindow/ConfirmInfo/CancelButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45495228(v4, (System_String_o *)StringLiteral_4659/*"ConfirmWindow/ResultInfo/CloseButton"*/, 0);
}


void ShopResetConfirmDialogComponent__Open(
        ShopResetConfirmDialogComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        System_Action_bool__o *onMenuSelect,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !this->fields.state )
    ShopResetConfirmDialogComponent__Open_35739864(this, 0, item, onMenuSelect, v4);
}


void ShopResetConfirmDialogComponent__OpenResultDialog(
        ShopResetConfirmDialogComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        System_Action_bool__o *onMenuSelect,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !this->fields.state )
    ShopResetConfirmDialogComponent__Open_35739864(this, 1, item, onMenuSelect, v4);
}


void ShopResetConfirmDialogComponent__Open_35739864(
        ShopResetConfirmDialogComponent_o *this,
        int32_t type,
        ShopBuyItemListViewItem_o *item,
        System_Action_bool__o *onMenuSelect,
        const MethodInfo *method)
{
  void *Master_object; // x0
  __int64 v10; // x1
  ItemEntity_o *EntityByType; // x0
  int32_t imageId; // w22
  UISprite_o *itemImage; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *v20; // x22
  NetworkManager_c *v21; // x0
  int64_t userIdNumber; // x23
  UILabel_o *itemNum; // x22
  int32_t v24; // w23
  const MethodInfo *v25; // x3
  System_Action_o *v26; // x20

  if ( (byte_4CEA8A8 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_ShopBuyItemListViewItemDraw___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_ShopResetConfirmDialogComponent_EndOpen__);
    byte_4CEA8A8 = 1;
  }
  ShopResetConfirmDialogComponent__SetObjectsOnInit(this, type, onMenuSelect, (const MethodInfo *)onMenuSelect);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_30;
  EntityByType = ItemMaster__GetEntityByType((ItemMaster_o *)Master_object, 37, 0);
  if ( EntityByType )
    imageId = EntityByType->fields.imageId;
  else
    imageId = 0;
  itemImage = this->fields.itemImage;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(itemImage, imageId, 0);
  Master_object = this->fields.itemInfoPrefab;
  if ( !Master_object )
    goto LABEL_30;
  *((_QWORD *)Master_object + 20) = item;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)Master_object + 1, (int32_t)item, v14, v15, v16, v17, v18, v19);
  Master_object = this->fields.itemInfoPrefab;
  if ( !Master_object )
    goto LABEL_30;
  Master_object = UnityEngine_Component__GetComponentInChildren_object__51801640(
                    (UnityEngine_Component_o *)Master_object,
                    (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_ShopBuyItemListViewItemDraw___);
  if ( !Master_object )
    goto LABEL_30;
  ShopBuyItemListViewItemDraw__SetItem((ShopBuyItemListViewItemDraw_o *)Master_object, item, 2, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v20 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  v21 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v21 = NetworkManager_TypeInfo;
  }
  userIdNumber = v21->static_fields->userIdNumber;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_30;
  if ( !v20 )
    goto LABEL_30;
  Master_object = UserItemMaster__GetEntityDefinitely(
                    (UserItemMaster_o *)v20,
                    userIdNumber,
                    *((_DWORD *)Master_object + 25),
                    0);
  if ( !Master_object )
    goto LABEL_30;
  itemNum = this->fields.itemNum;
  v24 = *((_DWORD *)Master_object + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__GetNumberFormat(v24, 0);
  if ( !itemNum || (UILabel__set_text(itemNum, (System_String_o *)Master_object, 0), !item) )
LABEL_30:
    sub_1C7BD40(Master_object, v10);
  ShopResetConfirmDialogComponent__SetMessageLabels(this, type, item->fields._Shop_k__BackingField, v25);
  this->fields.state = 1;
  v26 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_ShopResetConfirmDialogComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0, 0);
}


void ShopResetConfirmDialogComponent__SetMessageLabels(
        ShopResetConfirmDialogComponent_o *this,
        int32_t type,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  void *EntityDefinitely; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x23
  int32_t limitNum; // w22
  Il2CppObject *Master_object; // x24
  int v12; // w24
  UILabel_o *titleLabel; // x25
  int32_t v14; // w24
  UILabel_o *messageLabel; // x21
  System_String_o *v16; // x0
  Il2CppObject *name; // x26
  System_String_o *v18; // x25
  Il2CppObject *v19; // x0
  UILabel_o *beforeNumLabel; // x21
  System_String_o *v21; // x23
  Il2CppObject *NumberFormat; // x0
  UILabel_o *afterNumLabel; // x21
  System_String_o *v24; // x23
  Il2CppObject *v25; // x0
  UILabel_o *beforeNumTextLabel; // x21
  UILabel_o *afterNumTextLabel; // x21
  UILabel_o *decideBtnLabel; // x21
  UILabel_o *cancelBtnLabel; // x21
  Il2CppObject *v30; // x0
  int32_t baseShopId; // w20
  ShopResetMaster_o *v32; // x21
  int resetLimitNum; // w20
  struct UILabel_o *closeBtnLabel; // x19
  System_String_o *mText; // x21
  System_String_o *v36; // x22
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  UILabel_o *resultMessageLabel; // x21
  System_String_o *v40; // x0
  UILabel_o *resultAfterNumLabel; // x20
  System_String_o *v42; // x21
  Il2CppObject *v43; // x0
  UILabel_o *resultAfterNumTextLabel; // x20
  int32_t v45; // [xsp+Ch] [xbp-64h] BYREF
  ShopResetEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4CEA8A9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ShopResetMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_12197/*"SHOP_RESET_DIALOG_RESULT_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_12199/*"SHOP_RESET_DIALOG_WARNING_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_12193/*"SHOP_RESET_DIALOG_CLOSE"*/);
    sub_1C7BAE8(&StringLiteral_12196/*"SHOP_RESET_DIALOG_NUM"*/);
    sub_1C7BAE8(&StringLiteral_12200/*"SHOP_RESET_NEED_INFO"*/);
    sub_1C7BAE8(&StringLiteral_12190/*"SHOP_RESET_DIALOG_AFTER_NUM_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_12192/*"SHOP_RESET_DIALOG_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_12198/*"SHOP_RESET_DIALOG_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_12195/*"SHOP_RESET_DIALOG_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_12194/*"SHOP_RESET_DIALOG_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_12191/*"SHOP_RESET_DIALOG_BEFORE_NUM_TITLE"*/);
    byte_4CEA8A9 = 1;
  }
  entity = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12200/*"SHOP_RESET_NEED_INFO"*/, 0);
  if ( !shopEntity )
    goto LABEL_47;
  v9 = (Il2CppObject *)EntityDefinitely;
  limitNum = shopEntity->fields.limitNum;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  EntityDefinitely = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    EntityDefinitely = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_47;
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)Master_object,
                       *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 64LL),
                       shopEntity->fields.baseShopId,
                       0);
  if ( !EntityDefinitely )
    goto LABEL_47;
  v12 = *((_DWORD *)EntityDefinitely + 7);
  titleLabel = this->fields.titleLabel;
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12198/*"SHOP_RESET_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_47;
  v14 = limitNum - v12;
  UILabel__set_text(titleLabel, (System_String_o *)EntityDefinitely, 0);
  if ( type == 1 )
  {
    resultMessageLabel = this->fields.resultMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12197/*"SHOP_RESET_DIALOG_RESULT_MESSAGE"*/, 0);
    EntityDefinitely = System_String__Format(v40, (Il2CppObject *)shopEntity->fields.name, 0);
    if ( resultMessageLabel )
    {
      UILabel__set_text(resultMessageLabel, (System_String_o *)EntityDefinitely, 0);
      resultAfterNumLabel = this->fields.resultAfterNumLabel;
      v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12196/*"SHOP_RESET_DIALOG_NUM"*/, 0);
      v45 = v14;
      v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
      EntityDefinitely = System_String__Format(v42, v43, 0);
      if ( resultAfterNumLabel )
      {
        UILabel__set_text(resultAfterNumLabel, (System_String_o *)EntityDefinitely, 0);
        resultAfterNumTextLabel = this->fields.resultAfterNumTextLabel;
        EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12191/*"SHOP_RESET_DIALOG_BEFORE_NUM_TITLE"*/, 0);
        if ( resultAfterNumTextLabel )
        {
          UILabel__set_text(resultAfterNumTextLabel, (System_String_o *)EntityDefinitely, 0);
          closeBtnLabel = this->fields.closeBtnLabel;
          EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12193/*"SHOP_RESET_DIALOG_CLOSE"*/, 0);
          if ( closeBtnLabel )
            goto LABEL_45;
        }
      }
    }
LABEL_47:
    sub_1C7BD40(EntityDefinitely, v8);
  }
  if ( type )
    return;
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12195/*"SHOP_RESET_DIALOG_MESSAGE"*/, 0);
  name = (Il2CppObject *)shopEntity->fields.name;
  v18 = v16;
  v45 = limitNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
  EntityDefinitely = System_String__Format_64218288(v18, v9, name, v19, 0);
  if ( !messageLabel )
    goto LABEL_47;
  UILabel__set_text(messageLabel, (System_String_o *)EntityDefinitely, 0);
  beforeNumLabel = this->fields.beforeNumLabel;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12196/*"SHOP_RESET_DIALOG_NUM"*/, 0);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v14, 0);
  EntityDefinitely = System_String__Format(v21, NumberFormat, 0);
  if ( !beforeNumLabel )
    goto LABEL_47;
  UILabel__set_text(beforeNumLabel, (System_String_o *)EntityDefinitely, 0);
  afterNumLabel = this->fields.afterNumLabel;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12196/*"SHOP_RESET_DIALOG_NUM"*/, 0);
  v25 = (Il2CppObject *)LocalizationManager__GetNumberFormat(limitNum, 0);
  EntityDefinitely = System_String__Format(v24, v25, 0);
  if ( !afterNumLabel )
    goto LABEL_47;
  UILabel__set_text(afterNumLabel, (System_String_o *)EntityDefinitely, 0);
  beforeNumTextLabel = this->fields.beforeNumTextLabel;
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12191/*"SHOP_RESET_DIALOG_BEFORE_NUM_TITLE"*/, 0);
  if ( !beforeNumTextLabel )
    goto LABEL_47;
  UILabel__set_text(beforeNumTextLabel, (System_String_o *)EntityDefinitely, 0);
  afterNumTextLabel = this->fields.afterNumTextLabel;
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12190/*"SHOP_RESET_DIALOG_AFTER_NUM_TITLE"*/, 0);
  if ( !afterNumTextLabel )
    goto LABEL_47;
  UILabel__set_text(afterNumTextLabel, (System_String_o *)EntityDefinitely, 0);
  decideBtnLabel = this->fields.decideBtnLabel;
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12194/*"SHOP_RESET_DIALOG_DECIDE"*/, 0);
  if ( !decideBtnLabel )
    goto LABEL_47;
  UILabel__set_text(decideBtnLabel, (System_String_o *)EntityDefinitely, 0);
  cancelBtnLabel = this->fields.cancelBtnLabel;
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12192/*"SHOP_RESET_DIALOG_CANCEL"*/, 0);
  if ( !cancelBtnLabel )
    goto LABEL_47;
  UILabel__set_text(cancelBtnLabel, (System_String_o *)EntityDefinitely, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v30 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ShopResetMaster___);
  baseShopId = shopEntity->fields.baseShopId;
  v32 = (ShopResetMaster_o *)v30;
  EntityDefinitely = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !EntityDefinitely || !v32 )
    goto LABEL_47;
  EntityDefinitely = (void *)ShopResetMaster__TryGetEntity(
                               v32,
                               &entity,
                               baseShopId,
                               *((_DWORD *)EntityDefinitely + 25),
                               0);
  if ( ((unsigned __int8)EntityDefinitely & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_47;
  resetLimitNum = entity->fields.resetLimitNum;
  if ( resetLimitNum < 1 )
    return;
  closeBtnLabel = this->fields.messageLabel;
  if ( !closeBtnLabel )
    goto LABEL_47;
  mText = closeBtnLabel->fields.mText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12199/*"SHOP_RESET_DIALOG_WARNING_MESSAGE"*/, 0);
  v37 = (Il2CppObject *)LocalizationManager__GetNumberFormat(resetLimitNum, 0);
  v38 = System_String__Format(v36, v37, 0);
  EntityDefinitely = System_String__Concat_64176912(mText, v38, 0);
LABEL_45:
  UILabel__set_text(closeBtnLabel, (System_String_o *)EntityDefinitely, 0);
}


void ShopResetConfirmDialogComponent__SetObjectsOnInit(
        ShopResetConfirmDialogComponent_o *this,
        int32_t type,
        System_Action_bool__o *onMenuSelect,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1

  this->fields.onMenuSelect = onMenuSelect;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onMenuSelect,
    (int32_t)onMenuSelect,
    (int32_t)onMenuSelect,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0), (gameObject = this->fields.confirmInfo) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, type == 0, 0), (gameObject = this->fields.resultInfo) == 0) )
  {
    sub_1C7BD40(gameObject, v11);
  }
  UnityEngine_GameObject__SetActive(gameObject, type == 1, 0);
}