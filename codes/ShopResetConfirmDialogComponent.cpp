void __fastcall ShopResetConfirmDialogComponent___ctor(
        ShopResetConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12788 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B12788 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ShopResetConfirmDialogComponent__CallOnClose(
        ShopResetConfirmDialogComponent_o *this,
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


void __fastcall ShopResetConfirmDialogComponent__CallOnMenuSelect(
        ShopResetConfirmDialogComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_onMenuSelect; // x0
  struct System_Action_bool__o *v9; // x20
  struct System_Action_bool__o *onMenuSelect; // t1

  onMenuSelect = this->fields.onMenuSelect;
  p_onMenuSelect = (PartyOrganizationUtility_o *)&this->fields.onMenuSelect;
  v9 = onMenuSelect;
  if ( onMenuSelect )
  {
    p_onMenuSelect->klass = 0LL;
    sub_1BCA784(p_onMenuSelect, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      isDecide,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ShopResetConfirmDialogComponent__CheckSerializeField(
        ShopResetConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ShopResetConfirmDialogComponent__Close(
        ShopResetConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ShopResetConfirmDialogComponent__Close_33531592(this, 0LL, v2);
}


void __fastcall ShopResetConfirmDialogComponent__Close_33531592(
        ShopResetConfirmDialogComponent_o *this,
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

  if ( (byte_4B12783 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_ShopResetConfirmDialogComponent_EndClose__, v10, v11);
    byte_4B12783 = 1;
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
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ShopResetConfirmDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall ShopResetConfirmDialogComponent__EndClose(
        ShopResetConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ShopResetConfirmDialogComponent__Init(this, method);
  ShopResetConfirmDialogComponent__CallOnClose(this, v3);
}


void __fastcall ShopResetConfirmDialogComponent__EndOpen(
        ShopResetConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall ShopResetConfirmDialogComponent__Init(
        ShopResetConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B12780 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B12780 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.resultMessageLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.beforeNumLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.afterNumLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.beforeNumTextLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.afterNumTextLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.resultAfterNumLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.resultAfterNumTextLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.decideBtnLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.cancelBtnLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.closeBtnLabel;
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.itemNum;
  if ( !titleLabel )
    goto LABEL_21;
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
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_21:
    sub_1BCAA3C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ShopResetConfirmDialogComponent__OnClickCancel(
        ShopResetConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B12785 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ShopResetConfirmDialogComponent_OnClickCancel__, method, v2);
    byte_4B12785 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_ShopResetConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_ShopResetConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ShopResetConfirmDialogComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    ShopResetConfirmDialogComponent__CallOnMenuSelect(this, 0, v6);
  }
}


void __fastcall ShopResetConfirmDialogComponent__OnClickClose(
        ShopResetConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B12786 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ShopResetConfirmDialogComponent_OnClickClose__, method, v2);
    byte_4B12786 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_ShopResetConfirmDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_ShopResetConfirmDialogComponent_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ShopResetConfirmDialogComponent_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    ShopResetConfirmDialogComponent__CallOnMenuSelect(this, 0, v6);
  }
}


void __fastcall ShopResetConfirmDialogComponent__OnClickDecide(
        ShopResetConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B12784 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ShopResetConfirmDialogComponent_OnClickDecide__, method, v2);
    byte_4B12784 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_ShopResetConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_ShopResetConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ShopResetConfirmDialogComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    ShopResetConfirmDialogComponent__CallOnMenuSelect(this, 1, v6);
  }
}


void __fastcall ShopResetConfirmDialogComponent__OnEnable(
        ShopResetConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v7; // x0

  if ( (byte_4B12787 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4752/*"ConfirmWindow/ResultInfo/CloseButton"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_4750/*"ConfirmWindow/ConfirmInfo/CancelButton"*/, v4, v5);
    byte_4B12787 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_4750/*"ConfirmWindow/ConfirmInfo/CancelButton"*/, 0LL);
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(v7, (System_String_o *)StringLiteral_4752/*"ConfirmWindow/ResultInfo/CloseButton"*/, 0LL);
}


void __fastcall ShopResetConfirmDialogComponent__Open(
        ShopResetConfirmDialogComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        System_Action_bool__o *onMenuSelect,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !this->fields.state )
    ShopResetConfirmDialogComponent__Open_33529328(this, 0, item, onMenuSelect, v4);
}


void __fastcall ShopResetConfirmDialogComponent__OpenResultDialog(
        ShopResetConfirmDialogComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        System_Action_bool__o *onMenuSelect,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !this->fields.state )
    ShopResetConfirmDialogComponent__Open_33529328(this, 1, item, onMenuSelect, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopResetConfirmDialogComponent__Open_33529328(
        ShopResetConfirmDialogComponent_o *this,
        int32_t type,
        ShopBuyItemListViewItem_o *item,
        System_Action_bool__o *onMenuSelect,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
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
  char *Master_object; // x0
  __int64 v27; // x1
  ItemEntity_o *EntityByType; // x0
  __int64 v29; // x1
  int32_t imageId; // w22
  UISprite_o *itemImage; // x23
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x1
  Il2CppObject *v40; // x22
  int64_t UserId; // x23
  UILabel_o *itemNum; // x22
  int32_t v43; // w23
  const MethodInfo *v44; // x3
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Action_o *v48; // x20

  if ( (byte_4B12781 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&type, item);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_ShopBuyItemListViewItemDraw___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_ShopResetConfirmDialogComponent_EndOpen__, v23, v24);
    byte_4B12781 = 1;
  }
  ShopResetConfirmDialogComponent__SetObjectsOnInit(this, type, onMenuSelect, (const MethodInfo *)onMenuSelect);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25);
  Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_26;
  EntityByType = ItemMaster__GetEntityByType((ItemMaster_o *)Master_object, 37, 0LL);
  if ( EntityByType )
    imageId = EntityByType->fields.imageId;
  else
    imageId = 0;
  itemImage = this->fields.itemImage;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v29);
  AtlasManager__SetItem(itemImage, imageId, 0LL);
  Master_object = (char *)this->fields.itemInfoPrefab;
  if ( !Master_object )
    goto LABEL_26;
  *((_QWORD *)Master_object + 20) = item;
  sub_1BCA784((PartyOrganizationUtility_o *)(Master_object + 160), (int64_t)item, v32, v33, v34, v35, v36, v37);
  Master_object = (char *)this->fields.itemInfoPrefab;
  if ( !Master_object )
    goto LABEL_26;
  Master_object = (char *)UnityEngine_Component__GetComponentInChildren_object__49322392(
                            (UnityEngine_Component_o *)Master_object,
                            (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_ShopBuyItemListViewItemDraw___);
  if ( !Master_object )
    goto LABEL_26;
  ShopBuyItemListViewItemDraw__SetItem((ShopBuyItemListViewItemDraw_o *)Master_object, item, 2, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v38);
  v40 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v39);
  UserId = NetworkManager__get_UserId(0LL);
  Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_26;
  if ( !v40 )
    goto LABEL_26;
  Master_object = (char *)UserItemMaster__GetEntityDefinitely(
                            (UserItemMaster_o *)v40,
                            UserId,
                            *((_DWORD *)Master_object + 24),
                            0LL);
  if ( !Master_object )
    goto LABEL_26;
  itemNum = this->fields.itemNum;
  v43 = *((_DWORD *)Master_object + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
  Master_object = (char *)LocalizationManager__GetNumberFormat(v43, 0LL);
  if ( !itemNum || (UILabel__set_text(itemNum, (System_String_o *)Master_object, 0LL), !item) )
LABEL_26:
    sub_1BCAA3C(Master_object, v27);
  ShopResetConfirmDialogComponent__SetMessageLabels(this, type, item->fields._Shop_k__BackingField, v44);
  this->fields.state = 1;
  v48 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v45, v46, v47);
  System_Action___ctor(v48, (Il2CppObject *)this, Method_ShopResetConfirmDialogComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v48, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopResetConfirmDialogComponent__SetMessageLabels(
        ShopResetConfirmDialogComponent_o *this,
        int32_t type,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
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
  int64_t UserId; // x0
  __int64 v42; // x1
  Il2CppObject *v43; // x24
  int limitNum; // w22
  __int64 v45; // x1
  Il2CppObject *Master_object; // x23
  int v47; // w23
  UILabel_o *titleLabel; // x25
  int32_t v49; // w23
  __int64 v50; // x1
  UILabel_o *messageLabel; // x21
  System_String_o *v52; // x0
  Il2CppObject *name; // x26
  System_String_o *v54; // x25
  Il2CppObject *v55; // x0
  UILabel_o *beforeNumLabel; // x21
  System_String_o *v57; // x24
  Il2CppObject *NumberFormat; // x0
  UILabel_o *afterNumLabel; // x21
  System_String_o *v60; // x23
  Il2CppObject *v61; // x0
  UILabel_o *beforeNumTextLabel; // x21
  UILabel_o *afterNumTextLabel; // x21
  UILabel_o *decideBtnLabel; // x21
  UILabel_o *cancelBtnLabel; // x21
  __int64 v66; // x1
  Il2CppObject *v67; // x0
  int32_t baseShopId; // w20
  ShopResetMaster_o *v69; // x21
  int resetLimitNum; // w20
  struct UILabel_o *closeBtnLabel; // x19
  System_String_o *mText; // x21
  System_String_o *v73; // x22
  Il2CppObject *v74; // x0
  System_String_o *v75; // x0
  UILabel_o *resultMessageLabel; // x21
  System_String_o *v77; // x0
  UILabel_o *resultAfterNumLabel; // x20
  System_String_o *v79; // x21
  Il2CppObject *v80; // x0
  UILabel_o *resultAfterNumTextLabel; // x20
  int32_t v82; // [xsp+Ch] [xbp-64h] BYREF
  ShopResetEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4B12782 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&type, shopEntity);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopResetMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserShopMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_12223/*"SHOP_RESET_DIALOG_RESULT_MESSAGE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_12225/*"SHOP_RESET_DIALOG_WARNING_MESSAGE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_12219/*"SHOP_RESET_DIALOG_CLOSE"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_12222/*"SHOP_RESET_DIALOG_NUM"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_12226/*"SHOP_RESET_NEED_INFO"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_12216/*"SHOP_RESET_DIALOG_AFTER_NUM_TITLE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_12218/*"SHOP_RESET_DIALOG_CANCEL"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_12224/*"SHOP_RESET_DIALOG_TITLE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_12221/*"SHOP_RESET_DIALOG_MESSAGE"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_12220/*"SHOP_RESET_DIALOG_DECIDE"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_12217/*"SHOP_RESET_DIALOG_BEFORE_NUM_TITLE"*/, v39, v40);
    byte_4B12782 = 1;
  }
  entity = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12226/*"SHOP_RESET_NEED_INFO"*/, 0LL);
  if ( !shopEntity )
    goto LABEL_43;
  v43 = (Il2CppObject *)UserId;
  limitNum = shopEntity->fields.limitNum;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v42);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v45);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_43;
  UserId = (int64_t)UserShopMaster__GetEntityDefinitely(
                      (UserShopMaster_o *)Master_object,
                      UserId,
                      shopEntity->fields.baseShopId,
                      0LL);
  if ( !UserId )
    goto LABEL_43;
  v47 = *(_DWORD *)(UserId + 28);
  titleLabel = this->fields.titleLabel;
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12224/*"SHOP_RESET_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_43;
  v49 = limitNum - v47;
  UILabel__set_text(titleLabel, (System_String_o *)UserId, 0LL);
  if ( type == 1 )
  {
    resultMessageLabel = this->fields.resultMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
    v77 = LocalizationManager__Get((System_String_o *)StringLiteral_12223/*"SHOP_RESET_DIALOG_RESULT_MESSAGE"*/, 0LL);
    UserId = (int64_t)System_String__Format(v77, (Il2CppObject *)shopEntity->fields.name, 0LL);
    if ( resultMessageLabel )
    {
      UILabel__set_text(resultMessageLabel, (System_String_o *)UserId, 0LL);
      resultAfterNumLabel = this->fields.resultAfterNumLabel;
      v79 = LocalizationManager__Get((System_String_o *)StringLiteral_12222/*"SHOP_RESET_DIALOG_NUM"*/, 0LL);
      v82 = v49;
      v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
      UserId = (int64_t)System_String__Format(v79, v80, 0LL);
      if ( resultAfterNumLabel )
      {
        UILabel__set_text(resultAfterNumLabel, (System_String_o *)UserId, 0LL);
        resultAfterNumTextLabel = this->fields.resultAfterNumTextLabel;
        UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12217/*"SHOP_RESET_DIALOG_BEFORE_NUM_TITLE"*/, 0LL);
        if ( resultAfterNumTextLabel )
        {
          UILabel__set_text(resultAfterNumTextLabel, (System_String_o *)UserId, 0LL);
          closeBtnLabel = this->fields.closeBtnLabel;
          UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12219/*"SHOP_RESET_DIALOG_CLOSE"*/, 0LL);
          if ( closeBtnLabel )
            goto LABEL_41;
        }
      }
    }
LABEL_43:
    sub_1BCAA3C(UserId, v42);
  }
  if ( type )
    return;
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12221/*"SHOP_RESET_DIALOG_MESSAGE"*/, 0LL);
  name = (Il2CppObject *)shopEntity->fields.name;
  v54 = v52;
  v82 = limitNum;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
  UserId = (int64_t)System_String__Format_62415660(v54, v43, name, v55, 0LL);
  if ( !messageLabel )
    goto LABEL_43;
  UILabel__set_text(messageLabel, (System_String_o *)UserId, 0LL);
  beforeNumLabel = this->fields.beforeNumLabel;
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_12222/*"SHOP_RESET_DIALOG_NUM"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v49, 0LL);
  UserId = (int64_t)System_String__Format(v57, NumberFormat, 0LL);
  if ( !beforeNumLabel )
    goto LABEL_43;
  UILabel__set_text(beforeNumLabel, (System_String_o *)UserId, 0LL);
  afterNumLabel = this->fields.afterNumLabel;
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12222/*"SHOP_RESET_DIALOG_NUM"*/, 0LL);
  v61 = (Il2CppObject *)LocalizationManager__GetNumberFormat(limitNum, 0LL);
  UserId = (int64_t)System_String__Format(v60, v61, 0LL);
  if ( !afterNumLabel )
    goto LABEL_43;
  UILabel__set_text(afterNumLabel, (System_String_o *)UserId, 0LL);
  beforeNumTextLabel = this->fields.beforeNumTextLabel;
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12217/*"SHOP_RESET_DIALOG_BEFORE_NUM_TITLE"*/, 0LL);
  if ( !beforeNumTextLabel )
    goto LABEL_43;
  UILabel__set_text(beforeNumTextLabel, (System_String_o *)UserId, 0LL);
  afterNumTextLabel = this->fields.afterNumTextLabel;
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12216/*"SHOP_RESET_DIALOG_AFTER_NUM_TITLE"*/, 0LL);
  if ( !afterNumTextLabel )
    goto LABEL_43;
  UILabel__set_text(afterNumTextLabel, (System_String_o *)UserId, 0LL);
  decideBtnLabel = this->fields.decideBtnLabel;
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12220/*"SHOP_RESET_DIALOG_DECIDE"*/, 0LL);
  if ( !decideBtnLabel )
    goto LABEL_43;
  UILabel__set_text(decideBtnLabel, (System_String_o *)UserId, 0LL);
  cancelBtnLabel = this->fields.cancelBtnLabel;
  UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12218/*"SHOP_RESET_DIALOG_CANCEL"*/, 0LL);
  if ( !cancelBtnLabel )
    goto LABEL_43;
  UILabel__set_text(cancelBtnLabel, (System_String_o *)UserId, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v66);
  v67 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopResetMaster___);
  baseShopId = shopEntity->fields.baseShopId;
  v69 = (ShopResetMaster_o *)v67;
  UserId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !UserId || !v69 )
    goto LABEL_43;
  UserId = ShopResetMaster__TryGetEntity(v69, &entity, baseShopId, *(_DWORD *)(UserId + 96), 0LL);
  if ( (UserId & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_43;
  resetLimitNum = entity->fields.resetLimitNum;
  if ( resetLimitNum < 1 )
    return;
  closeBtnLabel = this->fields.messageLabel;
  if ( !closeBtnLabel )
    goto LABEL_43;
  mText = closeBtnLabel->fields.mText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42);
  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_12225/*"SHOP_RESET_DIALOG_WARNING_MESSAGE"*/, 0LL);
  v74 = (Il2CppObject *)LocalizationManager__GetNumberFormat(resetLimitNum, 0LL);
  v75 = System_String__Format(v73, v74, 0LL);
  UserId = (int64_t)System_String__Concat_62401220(mText, v75, 0LL);
LABEL_41:
  UILabel__set_text(closeBtnLabel, (System_String_o *)UserId, 0LL);
}


void __fastcall ShopResetConfirmDialogComponent__SetObjectsOnInit(
        ShopResetConfirmDialogComponent_o *this,
        int32_t type,
        System_Action_bool__o *onMenuSelect,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1

  this->fields.onMenuSelect = onMenuSelect;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onMenuSelect,
    (int64_t)onMenuSelect,
    (int64_t)onMenuSelect,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (gameObject = this->fields.confirmInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, type == 0, 0LL), (gameObject = this->fields.resultInfo) == 0LL) )
  {
    sub_1BCAA3C(gameObject, v11);
  }
  UnityEngine_GameObject__SetActive(gameObject, type == 1, 0LL);
}