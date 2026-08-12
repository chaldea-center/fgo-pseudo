void ShopResetConfirmDialogComponent___ctor(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596C8AD & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596C8AD = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ShopResetConfirmDialogComponent__CallOnClose(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
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


void ShopResetConfirmDialogComponent__CallOnMenuSelect(
        ShopResetConfirmDialogComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_onMenuSelect; // x0
  struct System_Action_bool__o *v9; // x20
  struct System_Action_bool__o *onMenuSelect; // t1

  onMenuSelect = this->fields.onMenuSelect;
  p_onMenuSelect = (MissionNaviTransitionBoardItem_o *)&this->fields.onMenuSelect;
  v9 = onMenuSelect;
  if ( onMenuSelect )
  {
    p_onMenuSelect->klass = 0;
    sub_2213A04(p_onMenuSelect, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
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

  ShopResetConfirmDialogComponent__Close_42025464(this, 0, v2);
}


void ShopResetConfirmDialogComponent__Close_42025464(
        ShopResetConfirmDialogComponent_o *this,
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

  if ( (byte_596C8A8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ShopResetConfirmDialogComponent_EndClose__);
    byte_596C8A8 = 1;
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
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ShopResetConfirmDialogComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
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

  if ( (byte_596C8A5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C8A5 = 1;
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
    sub_2213CDC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ShopResetConfirmDialogComponent__OnClickCancel(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596C8AA & 1) == 0 )
  {
    sub_2213A60(&Method_ShopResetConfirmDialogComponent_OnClickCancel__);
    byte_596C8AA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopResetConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_ShopResetConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ShopResetConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ShopResetConfirmDialogComponent__CallOnMenuSelect(this, 0, v5);
  }
}


void ShopResetConfirmDialogComponent__OnClickClose(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596C8AB & 1) == 0 )
  {
    sub_2213A60(&Method_ShopResetConfirmDialogComponent_OnClickClose__);
    byte_596C8AB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopResetConfirmDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_ShopResetConfirmDialogComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ShopResetConfirmDialogComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ShopResetConfirmDialogComponent__CallOnMenuSelect(this, 0, v5);
  }
}


void ShopResetConfirmDialogComponent__OnClickDecide(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596C8A9 & 1) == 0 )
  {
    sub_2213A60(&Method_ShopResetConfirmDialogComponent_OnClickDecide__);
    byte_596C8A9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopResetConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_ShopResetConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ShopResetConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    ShopResetConfirmDialogComponent__CallOnMenuSelect(this, 1, v5);
  }
}


void ShopResetConfirmDialogComponent__OnEnable(ShopResetConfirmDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0

  if ( (byte_596C8AC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4833/*"ConfirmWindow/ResultInfo/CloseButton"*/);
    sub_2213A60(&StringLiteral_4831/*"ConfirmWindow/ConfirmInfo/CancelButton"*/);
    byte_596C8AC = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_4831/*"ConfirmWindow/ConfirmInfo/CancelButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(v4, (System_String_o *)StringLiteral_4833/*"ConfirmWindow/ResultInfo/CloseButton"*/, 0);
}


void ShopResetConfirmDialogComponent__Open(
        ShopResetConfirmDialogComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        System_Action_bool__o *onMenuSelect,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !this->fields.state )
    ShopResetConfirmDialogComponent__Open_42023116(this, 0, item, onMenuSelect, v4);
}


void ShopResetConfirmDialogComponent__OpenResultDialog(
        ShopResetConfirmDialogComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        System_Action_bool__o *onMenuSelect,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !this->fields.state )
    ShopResetConfirmDialogComponent__Open_42023116(this, 1, item, onMenuSelect, v4);
}


void ShopResetConfirmDialogComponent__Open_42023116(
        ShopResetConfirmDialogComponent_o *this,
        int32_t type,
        ShopBuyItemListViewItem_o *item,
        System_Action_bool__o *onMenuSelect,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  char *Master_object; // x0
  __int64 v12; // x1
  ItemEntity_o *EntityByType; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t imageId; // w22
  UISprite_o *itemImage; // x23
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  Il2CppObject *v28; // x22
  NetworkManager_c *v29; // x0
  int64_t userIdNumber; // x23
  __int64 v31; // x2
  UILabel_o *itemNum; // x22
  int32_t v33; // w23
  const MethodInfo *v34; // x3
  System_Action_c *v35; // x0
  System_Action_o *v36; // x20

  if ( (byte_596C8A6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_ShopBuyItemListViewItemDraw___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_ShopResetConfirmDialogComponent_EndOpen__);
    byte_596C8A6 = 1;
  }
  ShopResetConfirmDialogComponent__SetObjectsOnInit(this, type, onMenuSelect, (const MethodInfo *)onMenuSelect);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
  Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_30;
  EntityByType = ItemMaster__GetEntityByType((ItemMaster_o *)Master_object, 37, 0);
  if ( EntityByType )
    imageId = EntityByType->fields.imageId;
  else
    imageId = 0;
  itemImage = this->fields.itemImage;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14, v15);
  AtlasManager__SetItem(itemImage, imageId, 0);
  Master_object = (char *)this->fields.itemInfoPrefab;
  if ( !Master_object )
    goto LABEL_30;
  *((_QWORD *)Master_object + 20) = item;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(Master_object + 160), (int32_t)item, v18, v19, v20, v21, v22, v23);
  Master_object = (char *)this->fields.itemInfoPrefab;
  if ( !Master_object )
    goto LABEL_30;
  Master_object = (char *)UnityEngine_Component__GetComponentInChildren_object__58855044(
                            (UnityEngine_Component_o *)Master_object,
                            (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_ShopBuyItemListViewItemDraw___);
  if ( !Master_object )
    goto LABEL_30;
  ShopBuyItemListViewItemDraw__SetItem((ShopBuyItemListViewItemDraw_o *)Master_object, item, 2, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24, v25);
  v28 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v26, v27);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v29 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v26, v27);
    v29 = NetworkManager_TypeInfo;
  }
  userIdNumber = v29->static_fields->userIdNumber;
  Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_30;
  if ( !v28 )
    goto LABEL_30;
  Master_object = (char *)UserItemMaster__GetEntityDefinitely(
                            (UserItemMaster_o *)v28,
                            userIdNumber,
                            *((_DWORD *)Master_object + 25),
                            0);
  if ( !Master_object )
    goto LABEL_30;
  itemNum = this->fields.itemNum;
  v33 = *((_DWORD *)Master_object + 7);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v31);
  Master_object = (char *)LocalizationManager__GetNumberFormat(v33, 0);
  if ( !itemNum || (UILabel__set_text(itemNum, (System_String_o *)Master_object, 0), !item) )
LABEL_30:
    sub_2213CDC(Master_object, v12);
  ShopResetConfirmDialogComponent__SetMessageLabels(this, type, item->fields._Shop_k__BackingField, v34);
  v35 = System_Action_TypeInfo;
  this->fields.state = 1;
  v36 = (System_Action_o *)sub_2213CCC(v35);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_ShopResetConfirmDialogComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v36, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ShopResetConfirmDialogComponent__SetMessageLabels(
        ShopResetConfirmDialogComponent_o *this,
        int32_t type,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  int v7; // w8
  void *EntityDefinitely; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v11; // x23
  int32_t limitNum; // w22
  __int64 v13; // x2
  Il2CppObject *Master_object; // x24
  int v15; // w24
  UILabel_o *titleLabel; // x25
  int32_t v17; // w24
  __int64 v18; // x1
  __int64 v19; // x2
  UILabel_o *messageLabel; // x21
  System_String_o *v21; // x25
  Il2CppObject *name; // x26
  Il2CppObject *v23; // x0
  UILabel_o *beforeNumLabel; // x21
  System_String_o *v25; // x23
  Il2CppObject *NumberFormat; // x0
  UILabel_o *afterNumLabel; // x21
  System_String_o *v28; // x23
  Il2CppObject *v29; // x0
  UILabel_o *beforeNumTextLabel; // x21
  UILabel_o *afterNumTextLabel; // x21
  UILabel_o *decideBtnLabel; // x21
  UILabel_o *cancelBtnLabel; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  Il2CppObject *v36; // x21
  int32_t baseShopId; // w20
  __int64 v38; // x2
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
  Il2CppObject *v49; // x0
  UILabel_o *resultAfterNumTextLabel; // x20
  int32_t v51; // [xsp+Ch] [xbp-64h] BYREF
  ShopResetEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_596C8A7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ShopResetMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_12663/*"SHOP_RESET_DIALOG_RESULT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12665/*"SHOP_RESET_DIALOG_WARNING_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12659/*"SHOP_RESET_DIALOG_CLOSE"*/);
    sub_2213A60(&StringLiteral_12662/*"SHOP_RESET_DIALOG_NUM"*/);
    sub_2213A60(&StringLiteral_12666/*"SHOP_RESET_NEED_INFO"*/);
    sub_2213A60(&StringLiteral_12656/*"SHOP_RESET_DIALOG_AFTER_NUM_TITLE"*/);
    sub_2213A60(&StringLiteral_12658/*"SHOP_RESET_DIALOG_CANCEL"*/);
    sub_2213A60(&StringLiteral_12664/*"SHOP_RESET_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_12661/*"SHOP_RESET_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12660/*"SHOP_RESET_DIALOG_DECIDE"*/);
    sub_2213A60(&StringLiteral_12657/*"SHOP_RESET_DIALOG_BEFORE_NUM_TITLE"*/);
    byte_596C8A7 = 1;
  }
  v7 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type, shopEntity);
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12666/*"SHOP_RESET_NEED_INFO"*/, 0);
  if ( !shopEntity )
    goto LABEL_47;
  v11 = (Il2CppObject *)EntityDefinitely;
  limitNum = shopEntity->fields.limitNum;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v13);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  EntityDefinitely = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v13);
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
  v15 = *((_DWORD *)EntityDefinitely + 7);
  titleLabel = this->fields.titleLabel;
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12664/*"SHOP_RESET_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_47;
  v17 = limitNum - v15;
  UILabel__set_text(titleLabel, (System_String_o *)EntityDefinitely, 0);
  if ( type == 1 )
  {
    resultMessageLabel = this->fields.resultMessageLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12663/*"SHOP_RESET_DIALOG_RESULT_MESSAGE"*/, 0);
    EntityDefinitely = System_String__Format(v46, (Il2CppObject *)shopEntity->fields.name, 0);
    if ( resultMessageLabel )
    {
      UILabel__set_text(resultMessageLabel, (System_String_o *)EntityDefinitely, 0);
      resultAfterNumLabel = this->fields.resultAfterNumLabel;
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_12662/*"SHOP_RESET_DIALOG_NUM"*/, 0);
      v51 = v17;
      v49 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v51);
      EntityDefinitely = System_String__Format(v48, v49, 0);
      if ( resultAfterNumLabel )
      {
        UILabel__set_text(resultAfterNumLabel, (System_String_o *)EntityDefinitely, 0);
        resultAfterNumTextLabel = this->fields.resultAfterNumTextLabel;
        EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12657/*"SHOP_RESET_DIALOG_BEFORE_NUM_TITLE"*/, 0);
        if ( resultAfterNumTextLabel )
        {
          UILabel__set_text(resultAfterNumTextLabel, (System_String_o *)EntityDefinitely, 0);
          closeBtnLabel = this->fields.closeBtnLabel;
          EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12659/*"SHOP_RESET_DIALOG_CLOSE"*/, 0);
          if ( closeBtnLabel )
            goto LABEL_45;
        }
      }
    }
LABEL_47:
    sub_2213CDC(EntityDefinitely, v9);
  }
  if ( type )
    return;
  messageLabel = this->fields.messageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12661/*"SHOP_RESET_DIALOG_MESSAGE"*/, 0);
  name = (Il2CppObject *)shopEntity->fields.name;
  v51 = limitNum;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v51);
  EntityDefinitely = System_String__Format_75697948(v21, v11, name, v23, 0);
  if ( !messageLabel )
    goto LABEL_47;
  UILabel__set_text(messageLabel, (System_String_o *)EntityDefinitely, 0);
  beforeNumLabel = this->fields.beforeNumLabel;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12662/*"SHOP_RESET_DIALOG_NUM"*/, 0);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v17, 0);
  EntityDefinitely = System_String__Format(v25, NumberFormat, 0);
  if ( !beforeNumLabel )
    goto LABEL_47;
  UILabel__set_text(beforeNumLabel, (System_String_o *)EntityDefinitely, 0);
  afterNumLabel = this->fields.afterNumLabel;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12662/*"SHOP_RESET_DIALOG_NUM"*/, 0);
  v29 = (Il2CppObject *)LocalizationManager__GetNumberFormat(limitNum, 0);
  EntityDefinitely = System_String__Format(v28, v29, 0);
  if ( !afterNumLabel )
    goto LABEL_47;
  UILabel__set_text(afterNumLabel, (System_String_o *)EntityDefinitely, 0);
  beforeNumTextLabel = this->fields.beforeNumTextLabel;
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12657/*"SHOP_RESET_DIALOG_BEFORE_NUM_TITLE"*/, 0);
  if ( !beforeNumTextLabel )
    goto LABEL_47;
  UILabel__set_text(beforeNumTextLabel, (System_String_o *)EntityDefinitely, 0);
  afterNumTextLabel = this->fields.afterNumTextLabel;
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12656/*"SHOP_RESET_DIALOG_AFTER_NUM_TITLE"*/, 0);
  if ( !afterNumTextLabel )
    goto LABEL_47;
  UILabel__set_text(afterNumTextLabel, (System_String_o *)EntityDefinitely, 0);
  decideBtnLabel = this->fields.decideBtnLabel;
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12660/*"SHOP_RESET_DIALOG_DECIDE"*/, 0);
  if ( !decideBtnLabel )
    goto LABEL_47;
  UILabel__set_text(decideBtnLabel, (System_String_o *)EntityDefinitely, 0);
  cancelBtnLabel = this->fields.cancelBtnLabel;
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12658/*"SHOP_RESET_DIALOG_CANCEL"*/, 0);
  if ( !cancelBtnLabel )
    goto LABEL_47;
  UILabel__set_text(cancelBtnLabel, (System_String_o *)EntityDefinitely, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v34, v35);
  v36 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopResetMaster___);
  baseShopId = shopEntity->fields.baseShopId;
  EntityDefinitely = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !EntityDefinitely || !v36 )
    goto LABEL_47;
  EntityDefinitely = (void *)ShopResetMaster__TryGetEntity(
                               (ShopResetMaster_o *)v36,
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v38);
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12665/*"SHOP_RESET_DIALOG_WARNING_MESSAGE"*/, 0);
  v43 = (Il2CppObject *)LocalizationManager__GetNumberFormat(resetLimitNum, 0);
  v44 = System_String__Format(v42, v43, 0);
  EntityDefinitely = System_String__Concat_75651716(mText, v44, 0);
LABEL_45:
  UILabel__set_text(closeBtnLabel, (System_String_o *)EntityDefinitely, 0);
}


void ShopResetConfirmDialogComponent__SetObjectsOnInit(
        ShopResetConfirmDialogComponent_o *this,
        int32_t type,
        System_Action_bool__o *onMenuSelect,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1

  this->fields.onMenuSelect = onMenuSelect;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onMenuSelect,
    (int32_t)onMenuSelect,
    (System_String_o *)onMenuSelect,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0), (gameObject = this->fields.confirmInfo) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, type == 0, 0), (gameObject = this->fields.resultInfo) == 0) )
  {
    sub_2213CDC(gameObject, v11);
  }
  UnityEngine_GameObject__SetActive(gameObject, type == 1, 0);
}