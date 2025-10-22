void ShopResetConfirmDialogComponent___ctor(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C5301E & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    byte_4C5301E = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ShopResetConfirmDialogComponent__CallOnClose(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
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
    sub_1C3E508(p_onClose, 0, v2, v3);
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
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_onMenuSelect; // x0
  struct System_Action_bool__o *v5; // x20
  struct System_Action_bool__o *onMenuSelect; // t1

  onMenuSelect = this->fields.onMenuSelect;
  p_onMenuSelect = (CGThumbnailListItem_o *)&this->fields.onMenuSelect;
  v5 = onMenuSelect;
  if ( onMenuSelect )
  {
    p_onMenuSelect->klass = 0;
    sub_1C3E508(p_onMenuSelect, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      isDecide,
      v5->fields.method);
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

  ShopResetConfirmDialogComponent__Close_35309328(this, 0, v2);
}


void ShopResetConfirmDialogComponent__Close_35309328(
        ShopResetConfirmDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C53019 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ShopResetConfirmDialogComponent_EndClose__);
    byte_4C53019 = 1;
  }
  this->fields.onClose = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onClose, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ShopResetConfirmDialogComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
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

  if ( (byte_4C53016 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C53016 = 1;
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
    sub_1C3E7C0(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ShopResetConfirmDialogComponent__OnClickCancel(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C5301B & 1) == 0 )
  {
    sub_1C3E564(&Method_ShopResetConfirmDialogComponent_OnClickCancel__);
    byte_4C5301B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopResetConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_ShopResetConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_ShopResetConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ShopResetConfirmDialogComponent__CallOnMenuSelect(this, 0, v5);
  }
}


void ShopResetConfirmDialogComponent__OnClickClose(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C5301C & 1) == 0 )
  {
    sub_1C3E564(&Method_ShopResetConfirmDialogComponent_OnClickClose__);
    byte_4C5301C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopResetConfirmDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_ShopResetConfirmDialogComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_ShopResetConfirmDialogComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ShopResetConfirmDialogComponent__CallOnMenuSelect(this, 0, v5);
  }
}


void ShopResetConfirmDialogComponent__OnClickDecide(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C5301A & 1) == 0 )
  {
    sub_1C3E564(&Method_ShopResetConfirmDialogComponent_OnClickDecide__);
    byte_4C5301A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopResetConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_ShopResetConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_ShopResetConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    ShopResetConfirmDialogComponent__CallOnMenuSelect(this, 1, v5);
  }
}


void ShopResetConfirmDialogComponent__OnEnable(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0

  if ( (byte_4C5301D & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_4655/*"ConfirmWindow/ResultInfo/CloseButton"*/);
    sub_1C3E564(&StringLiteral_4653/*"ConfirmWindow/ConfirmInfo/CancelButton"*/);
    byte_4C5301D = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45015816(transform, (System_String_o *)StringLiteral_4653/*"ConfirmWindow/ConfirmInfo/CancelButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45015816(v4, (System_String_o *)StringLiteral_4655/*"ConfirmWindow/ResultInfo/CloseButton"*/, 0);
}


void ShopResetConfirmDialogComponent__Open(
        ShopResetConfirmDialogComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        System_Action_bool__o *onMenuSelect,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !this->fields.state )
    ShopResetConfirmDialogComponent__Open_35306968(this, 0, item, onMenuSelect, v4);
}


void ShopResetConfirmDialogComponent__OpenResultDialog(
        ShopResetConfirmDialogComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        System_Action_bool__o *onMenuSelect,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !this->fields.state )
    ShopResetConfirmDialogComponent__Open_35306968(this, 1, item, onMenuSelect, v4);
}


void ShopResetConfirmDialogComponent__Open_35306968(
        ShopResetConfirmDialogComponent_o *this,
        int32_t type,
        ShopBuyItemListViewItem_o *item,
        System_Action_bool__o *onMenuSelect,
        const MethodInfo *method)
{
  char *Master_object; // x0
  __int64 v10; // x1
  ItemEntity_o *EntityByType; // x0
  int32_t imageId; // w22
  UISprite_o *itemImage; // x23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x22
  NetworkManager_c *v17; // x0
  int64_t userIdNumber; // x23
  UILabel_o *itemNum; // x22
  int32_t v20; // w23
  const MethodInfo *v21; // x3
  System_Action_o *v22; // x20

  if ( (byte_4C53017 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentInChildren_ShopBuyItemListViewItemDraw___);
    sub_1C3E564(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_ShopResetConfirmDialogComponent_EndOpen__);
    byte_4C53017 = 1;
  }
  ShopResetConfirmDialogComponent__SetObjectsOnInit(this, type, onMenuSelect, (const MethodInfo *)onMenuSelect);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ItemMaster___);
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
  Master_object = (char *)this->fields.itemInfoPrefab;
  if ( !Master_object )
    goto LABEL_30;
  *((_QWORD *)Master_object + 20) = item;
  sub_1C3E508((CGThumbnailListItem_o *)(Master_object + 160), (int32_t)item, v14, v15);
  Master_object = (char *)this->fields.itemInfoPrefab;
  if ( !Master_object )
    goto LABEL_30;
  Master_object = (char *)UnityEngine_Component__GetComponentInChildren_object__51315876(
                            (UnityEngine_Component_o *)Master_object,
                            (const MethodInfo_30F04A4 *)Method_UnityEngine_Component_GetComponentInChildren_ShopBuyItemListViewItemDraw___);
  if ( !Master_object )
    goto LABEL_30;
  ShopBuyItemListViewItemDraw__SetItem((ShopBuyItemListViewItemDraw_o *)Master_object, item, 2, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v16 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  v17 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v17 = NetworkManager_TypeInfo;
  }
  userIdNumber = v17->static_fields->userIdNumber;
  Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_30;
  if ( !v16 )
    goto LABEL_30;
  Master_object = (char *)UserItemMaster__GetEntityDefinitely(
                            (UserItemMaster_o *)v16,
                            userIdNumber,
                            *((_DWORD *)Master_object + 25),
                            0);
  if ( !Master_object )
    goto LABEL_30;
  itemNum = this->fields.itemNum;
  v20 = *((_DWORD *)Master_object + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (char *)LocalizationManager__GetNumberFormat(v20, 0);
  if ( !itemNum || (UILabel__set_text(itemNum, (System_String_o *)Master_object, 0), !item) )
LABEL_30:
    sub_1C3E7C0(Master_object, v10);
  ShopResetConfirmDialogComponent__SetMessageLabels(this, type, item->fields._Shop_k__BackingField, v21);
  this->fields.state = 1;
  v22 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_ShopResetConfirmDialogComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0, 0);
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
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  Il2CppObject *v25; // x0
  UILabel_o *beforeNumLabel; // x21
  System_String_o *v27; // x23
  Il2CppObject *NumberFormat; // x0
  UILabel_o *afterNumLabel; // x21
  System_String_o *v30; // x23
  Il2CppObject *v31; // x0
  UILabel_o *beforeNumTextLabel; // x21
  UILabel_o *afterNumTextLabel; // x21
  UILabel_o *decideBtnLabel; // x21
  UILabel_o *cancelBtnLabel; // x21
  Il2CppObject *v36; // x0
  int32_t baseShopId; // w20
  ShopResetMaster_o *v38; // x21
  int resetLimitNum; // w20
  struct UILabel_o *closeBtnLabel; // x19
  System_String_o *mText; // x21
  System_String_o *v42; // x22
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  UILabel_o *resultMessageLabel; // x21
  System_String_o *v46; // x0
  UILabel_o *resultAfterNumLabel; // x20
  System_String_o *v48; // x21
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x6
  __int64 v54; // x7
  Il2CppObject *v55; // x0
  UILabel_o *resultAfterNumTextLabel; // x20
  int32_t v57; // [xsp+Ch] [xbp-64h] BYREF
  ShopResetEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C53018 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ShopResetMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&StringLiteral_12149/*"SHOP_RESET_DIALOG_RESULT_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_12151/*"SHOP_RESET_DIALOG_WARNING_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_12145/*"SHOP_RESET_DIALOG_CLOSE"*/);
    sub_1C3E564(&StringLiteral_12148/*"SHOP_RESET_DIALOG_NUM"*/);
    sub_1C3E564(&StringLiteral_12152/*"SHOP_RESET_NEED_INFO"*/);
    sub_1C3E564(&StringLiteral_12142/*"SHOP_RESET_DIALOG_AFTER_NUM_TITLE"*/);
    sub_1C3E564(&StringLiteral_12144/*"SHOP_RESET_DIALOG_CANCEL"*/);
    sub_1C3E564(&StringLiteral_12150/*"SHOP_RESET_DIALOG_TITLE"*/);
    sub_1C3E564(&StringLiteral_12147/*"SHOP_RESET_DIALOG_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_12146/*"SHOP_RESET_DIALOG_DECIDE"*/);
    sub_1C3E564(&StringLiteral_12143/*"SHOP_RESET_DIALOG_BEFORE_NUM_TITLE"*/);
    byte_4C53018 = 1;
  }
  entity = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12152/*"SHOP_RESET_NEED_INFO"*/, 0);
  if ( !shopEntity )
    goto LABEL_47;
  v9 = (Il2CppObject *)EntityDefinitely;
  limitNum = shopEntity->fields.limitNum;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12150/*"SHOP_RESET_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_47;
  v14 = limitNum - v12;
  UILabel__set_text(titleLabel, (System_String_o *)EntityDefinitely, 0);
  if ( type == 1 )
  {
    resultMessageLabel = this->fields.resultMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12149/*"SHOP_RESET_DIALOG_RESULT_MESSAGE"*/, 0);
    EntityDefinitely = System_String__Format(v46, (Il2CppObject *)shopEntity->fields.name, 0);
    if ( resultMessageLabel )
    {
      UILabel__set_text(resultMessageLabel, (System_String_o *)EntityDefinitely, 0);
      resultAfterNumLabel = this->fields.resultAfterNumLabel;
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_12148/*"SHOP_RESET_DIALOG_NUM"*/, 0);
      v57 = v14;
      v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v49, v50, v51, v52, v53, v54);
      EntityDefinitely = System_String__Format(v48, v55, 0);
      if ( resultAfterNumLabel )
      {
        UILabel__set_text(resultAfterNumLabel, (System_String_o *)EntityDefinitely, 0);
        resultAfterNumTextLabel = this->fields.resultAfterNumTextLabel;
        EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12143/*"SHOP_RESET_DIALOG_BEFORE_NUM_TITLE"*/, 0);
        if ( resultAfterNumTextLabel )
        {
          UILabel__set_text(resultAfterNumTextLabel, (System_String_o *)EntityDefinitely, 0);
          closeBtnLabel = this->fields.closeBtnLabel;
          EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12145/*"SHOP_RESET_DIALOG_CLOSE"*/, 0);
          if ( closeBtnLabel )
            goto LABEL_45;
        }
      }
    }
LABEL_47:
    sub_1C3E7C0(EntityDefinitely, v8);
  }
  if ( type )
    return;
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12147/*"SHOP_RESET_DIALOG_MESSAGE"*/, 0);
  name = (Il2CppObject *)shopEntity->fields.name;
  v18 = v16;
  v57 = limitNum;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v19, v20, v21, v22, v23, v24);
  EntityDefinitely = System_String__Format_63677828(v18, v9, name, v25, 0);
  if ( !messageLabel )
    goto LABEL_47;
  UILabel__set_text(messageLabel, (System_String_o *)EntityDefinitely, 0);
  beforeNumLabel = this->fields.beforeNumLabel;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12148/*"SHOP_RESET_DIALOG_NUM"*/, 0);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v14, 0);
  EntityDefinitely = System_String__Format(v27, NumberFormat, 0);
  if ( !beforeNumLabel )
    goto LABEL_47;
  UILabel__set_text(beforeNumLabel, (System_String_o *)EntityDefinitely, 0);
  afterNumLabel = this->fields.afterNumLabel;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12148/*"SHOP_RESET_DIALOG_NUM"*/, 0);
  v31 = (Il2CppObject *)LocalizationManager__GetNumberFormat(limitNum, 0);
  EntityDefinitely = System_String__Format(v30, v31, 0);
  if ( !afterNumLabel )
    goto LABEL_47;
  UILabel__set_text(afterNumLabel, (System_String_o *)EntityDefinitely, 0);
  beforeNumTextLabel = this->fields.beforeNumTextLabel;
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12143/*"SHOP_RESET_DIALOG_BEFORE_NUM_TITLE"*/, 0);
  if ( !beforeNumTextLabel )
    goto LABEL_47;
  UILabel__set_text(beforeNumTextLabel, (System_String_o *)EntityDefinitely, 0);
  afterNumTextLabel = this->fields.afterNumTextLabel;
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12142/*"SHOP_RESET_DIALOG_AFTER_NUM_TITLE"*/, 0);
  if ( !afterNumTextLabel )
    goto LABEL_47;
  UILabel__set_text(afterNumTextLabel, (System_String_o *)EntityDefinitely, 0);
  decideBtnLabel = this->fields.decideBtnLabel;
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SHOP_RESET_DIALOG_DECIDE"*/, 0);
  if ( !decideBtnLabel )
    goto LABEL_47;
  UILabel__set_text(decideBtnLabel, (System_String_o *)EntityDefinitely, 0);
  cancelBtnLabel = this->fields.cancelBtnLabel;
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12144/*"SHOP_RESET_DIALOG_CANCEL"*/, 0);
  if ( !cancelBtnLabel )
    goto LABEL_47;
  UILabel__set_text(cancelBtnLabel, (System_String_o *)EntityDefinitely, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v36 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ShopResetMaster___);
  baseShopId = shopEntity->fields.baseShopId;
  v38 = (ShopResetMaster_o *)v36;
  EntityDefinitely = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !EntityDefinitely || !v38 )
    goto LABEL_47;
  EntityDefinitely = (void *)ShopResetMaster__TryGetEntity(
                               v38,
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
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12151/*"SHOP_RESET_DIALOG_WARNING_MESSAGE"*/, 0);
  v43 = (Il2CppObject *)LocalizationManager__GetNumberFormat(resetLimitNum, 0);
  v44 = System_String__Format(v42, v43, 0);
  EntityDefinitely = System_String__Concat_63636468(mText, v44, 0);
LABEL_45:
  UILabel__set_text(closeBtnLabel, (System_String_o *)EntityDefinitely, 0);
}


void ShopResetConfirmDialogComponent__SetObjectsOnInit(
        ShopResetConfirmDialogComponent_o *this,
        int32_t type,
        System_Action_bool__o *onMenuSelect,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  this->fields.onMenuSelect = onMenuSelect;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onMenuSelect, (int32_t)onMenuSelect, (int32_t)onMenuSelect, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0), (gameObject = this->fields.confirmInfo) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, type == 0, 0), (gameObject = this->fields.resultInfo) == 0) )
  {
    sub_1C3E7C0(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive(gameObject, type == 1, 0);
}