void __fastcall ShopResetConfirmDialogComponent___ctor(
        ShopResetConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C1E431 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C1E431 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
  struct System_Action_o *onClose; // x19
  PartyOrganizationUtility_o *p_onClose; // x0

  onClose = this->fields.onClose;
  if ( onClose )
  {
    p_onClose = (PartyOrganizationUtility_o *)&this->fields.onClose;
    p_onClose->klass = 0LL;
    sub_1C3B708(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClose->fields.m_target)(
      onClose->fields.original_method_info,
      *(_QWORD *)&onClose->fields.extra_arg);
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
    sub_1C3B708(p_onMenuSelect, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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

  ShopResetConfirmDialogComponent__Close_34143496(this, 0LL, v2);
}


void __fastcall ShopResetConfirmDialogComponent__Close_34143496(
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
  System_Action_o *v11; // x20

  if ( (byte_4C1E42C & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_ShopResetConfirmDialogComponent_EndClose__, v10);
    byte_4C1E42C = 1;
  }
  this->fields.onClose = callback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.onClose,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ShopResetConfirmDialogComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
  UILabel_o *titleLabel; // x0

  if ( (byte_4C1E429 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C1E429 = 1;
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
    sub_1C3B9C0(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ShopResetConfirmDialogComponent__OnClickCancel(
        ShopResetConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C1E42E & 1) == 0 )
  {
    sub_1C3B764(&Method_ShopResetConfirmDialogComponent_OnClickCancel__, method);
    byte_4C1E42E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopResetConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_ShopResetConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_ShopResetConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    ShopResetConfirmDialogComponent__CallOnMenuSelect(this, 0, v5);
  }
}


void __fastcall ShopResetConfirmDialogComponent__OnClickClose(
        ShopResetConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C1E42F & 1) == 0 )
  {
    sub_1C3B764(&Method_ShopResetConfirmDialogComponent_OnClickClose__, method);
    byte_4C1E42F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopResetConfirmDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_ShopResetConfirmDialogComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_ShopResetConfirmDialogComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    ShopResetConfirmDialogComponent__CallOnMenuSelect(this, 0, v5);
  }
}


void __fastcall ShopResetConfirmDialogComponent__OnClickDecide(
        ShopResetConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C1E42D & 1) == 0 )
  {
    sub_1C3B764(&Method_ShopResetConfirmDialogComponent_OnClickDecide__, method);
    byte_4C1E42D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ShopResetConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_ShopResetConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_ShopResetConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    ShopResetConfirmDialogComponent__CallOnMenuSelect(this, 1, v5);
  }
}


void __fastcall ShopResetConfirmDialogComponent__OnEnable(
        ShopResetConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v5; // x0

  if ( (byte_4C1E430 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_4767/*"CraftNotification"*/, method);
    sub_1C3B764(&StringLiteral_4765/*"Cpk数 : "*/, v3);
    byte_4C1E430 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43310944(transform, (System_String_o *)StringLiteral_4765/*"Cpk数 : "*/, 0LL);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43310944(v5, (System_String_o *)StringLiteral_4767/*"CraftNotification"*/, 0LL);
}


void __fastcall ShopResetConfirmDialogComponent__Open(
        ShopResetConfirmDialogComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        System_Action_bool__o *onMenuSelect,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !this->fields.state )
    ShopResetConfirmDialogComponent__Open_34141140(this, 0, item, onMenuSelect, v4);
}


void __fastcall ShopResetConfirmDialogComponent__OpenResultDialog(
        ShopResetConfirmDialogComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        System_Action_bool__o *onMenuSelect,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !this->fields.state )
    ShopResetConfirmDialogComponent__Open_34141140(this, 1, item, onMenuSelect, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopResetConfirmDialogComponent__Open_34141140(
        ShopResetConfirmDialogComponent_o *this,
        int32_t type,
        ShopBuyItemListViewItem_o *item,
        System_Action_bool__o *onMenuSelect,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  char *Master_object; // x0
  __int64 v18; // x1
  ItemEntity_o *EntityByType; // x0
  int32_t imageId; // w22
  UISprite_o *itemImage; // x23
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  Il2CppObject *v29; // x22
  NetworkManager_c *v30; // x0
  int64_t userIdNumber; // x23
  UILabel_o *itemNum; // x22
  int32_t v33; // w23
  const MethodInfo *v34; // x3
  System_Action_o *v35; // x20

  if ( (byte_4C1E42A & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_1C3B764(&AtlasManager_TypeInfo, v9);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponentInChildren_ShopBuyItemListViewItemDraw___, v10);
    sub_1C3B764(&Method_DataManager_GetMaster_ItemMaster___, v11);
    sub_1C3B764(&Method_DataManager_GetMaster_UserItemMaster___, v12);
    sub_1C3B764(&DataManager_TypeInfo, v13);
    sub_1C3B764(&LocalizationManager_TypeInfo, v14);
    sub_1C3B764(&NetworkManager_TypeInfo, v15);
    sub_1C3B764(&Method_ShopResetConfirmDialogComponent_EndOpen__, v16);
    byte_4C1E42A = 1;
  }
  ShopResetConfirmDialogComponent__SetObjectsOnInit(this, type, onMenuSelect, (const MethodInfo *)onMenuSelect);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_30;
  EntityByType = ItemMaster__GetEntityByType((ItemMaster_o *)Master_object, 37, 0LL);
  if ( EntityByType )
    imageId = EntityByType->fields.imageId;
  else
    imageId = 0;
  itemImage = this->fields.itemImage;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(itemImage, imageId, 0LL);
  Master_object = (char *)this->fields.itemInfoPrefab;
  if ( !Master_object )
    goto LABEL_30;
  *((_QWORD *)Master_object + 20) = item;
  sub_1C3B708((PartyOrganizationUtility_o *)(Master_object + 160), (int64_t)item, v22, v23, v24, v25, v26, v27);
  Master_object = (char *)this->fields.itemInfoPrefab;
  if ( !Master_object )
    goto LABEL_30;
  Master_object = (char *)UnityEngine_Component__GetComponentInChildren_object__50228848(
                            (UnityEngine_Component_o *)Master_object,
                            (const MethodInfo_2FE6E70 *)Method_UnityEngine_Component_GetComponentInChildren_ShopBuyItemListViewItemDraw___);
  if ( !Master_object )
    goto LABEL_30;
  ShopBuyItemListViewItemDraw__SetItem((ShopBuyItemListViewItemDraw_o *)Master_object, item, 2, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v29 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v28);
    byte_4C1C955 = 1;
  }
  v30 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v30 = NetworkManager_TypeInfo;
  }
  userIdNumber = v30->static_fields->userIdNumber;
  Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_30;
  if ( !v29 )
    goto LABEL_30;
  Master_object = (char *)UserItemMaster__GetEntityDefinitely(
                            (UserItemMaster_o *)v29,
                            userIdNumber,
                            *((_DWORD *)Master_object + 25),
                            0LL);
  if ( !Master_object )
    goto LABEL_30;
  itemNum = this->fields.itemNum;
  v33 = *((_DWORD *)Master_object + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (char *)LocalizationManager__GetNumberFormat(v33, 0LL);
  if ( !itemNum || (UILabel__set_text(itemNum, (System_String_o *)Master_object, 0LL), !item) )
LABEL_30:
    sub_1C3B9C0(Master_object, v18);
  ShopResetConfirmDialogComponent__SetMessageLabels(this, type, item->fields._Shop_k__BackingField, v34);
  this->fields.state = 1;
  v35 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_ShopResetConfirmDialogComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopResetConfirmDialogComponent__SetMessageLabels(
        ShopResetConfirmDialogComponent_o *this,
        int32_t type,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
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
  void *EntityDefinitely; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x23
  int limitNum; // w22
  Il2CppObject *Master_object; // x24
  int v29; // w24
  UILabel_o *titleLabel; // x25
  int32_t v31; // w24
  UILabel_o *messageLabel; // x21
  System_String_o *v33; // x0
  Il2CppObject *name; // x26
  System_String_o *v35; // x25
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  UILabel_o *beforeNumLabel; // x21
  System_String_o *v41; // x23
  Il2CppObject *NumberFormat; // x0
  UILabel_o *afterNumLabel; // x21
  System_String_o *v44; // x23
  Il2CppObject *v45; // x0
  UILabel_o *beforeNumTextLabel; // x21
  UILabel_o *afterNumTextLabel; // x21
  UILabel_o *decideBtnLabel; // x21
  UILabel_o *cancelBtnLabel; // x21
  Il2CppObject *v50; // x0
  int32_t baseShopId; // w20
  ShopResetMaster_o *v52; // x21
  int resetLimitNum; // w20
  struct UILabel_o *closeBtnLabel; // x19
  System_String_o *mText; // x21
  System_String_o *v56; // x22
  Il2CppObject *v57; // x0
  System_String_o *v58; // x0
  UILabel_o *resultMessageLabel; // x21
  System_String_o *v60; // x0
  UILabel_o *resultAfterNumLabel; // x20
  System_String_o *v62; // x21
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x0
  UILabel_o *resultAfterNumTextLabel; // x20
  int32_t v68; // [xsp+Ch] [xbp-64h] BYREF
  ShopResetEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C1E42B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&type);
    sub_1C3B764(&Method_DataManager_GetMaster_ShopResetMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMaster_UserShopMaster___, v8);
    sub_1C3B764(&DataManager_TypeInfo, v9);
    sub_1C3B764(&int_TypeInfo, v10);
    sub_1C3B764(&LocalizationManager_TypeInfo, v11);
    sub_1C3B764(&NetworkManager_TypeInfo, v12);
    sub_1C3B764(&StringLiteral_12336/*"SecureString"*/, v13);
    sub_1C3B764(&StringLiteral_12338/*"Seed"*/, v14);
    sub_1C3B764(&StringLiteral_12332/*"SeaShell"*/, v15);
    sub_1C3B764(&StringLiteral_12335/*"Secure"*/, v16);
    sub_1C3B764(&StringLiteral_12339/*"Seek"*/, v17);
    sub_1C3B764(&StringLiteral_12329/*"SePlayerObject"*/, v18);
    sub_1C3B764(&StringLiteral_12331/*"SeaGreen"*/, v19);
    sub_1C3B764(&StringLiteral_12337/*"See Other"*/, v20);
    sub_1C3B764(&StringLiteral_12334/*"Second path fragment must not be a drive or UNC name."*/, v21);
    sub_1C3B764(&StringLiteral_12333/*"SecItemNodeName"*/, v22);
    sub_1C3B764(&StringLiteral_12330/*"SeSetting"*/, v23);
    byte_4C1E42B = 1;
  }
  entity = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12339/*"Seek"*/, 0LL);
  if ( !shopEntity )
    goto LABEL_47;
  v26 = (Il2CppObject *)EntityDefinitely;
  limitNum = shopEntity->fields.limitNum;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v25);
    byte_4C1C955 = 1;
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
                       0LL);
  if ( !EntityDefinitely )
    goto LABEL_47;
  v29 = *((_DWORD *)EntityDefinitely + 7);
  titleLabel = this->fields.titleLabel;
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12337/*"See Other"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_47;
  v31 = limitNum - v29;
  UILabel__set_text(titleLabel, (System_String_o *)EntityDefinitely, 0LL);
  if ( type == 1 )
  {
    resultMessageLabel = this->fields.resultMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12336/*"SecureString"*/, 0LL);
    EntityDefinitely = System_String__Format(v60, (Il2CppObject *)shopEntity->fields.name, 0LL);
    if ( resultMessageLabel )
    {
      UILabel__set_text(resultMessageLabel, (System_String_o *)EntityDefinitely, 0LL);
      resultAfterNumLabel = this->fields.resultAfterNumLabel;
      v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12335/*"Secure"*/, 0LL);
      v68 = v31;
      v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68, v63, v64, v65);
      EntityDefinitely = System_String__Format(v62, v66, 0LL);
      if ( resultAfterNumLabel )
      {
        UILabel__set_text(resultAfterNumLabel, (System_String_o *)EntityDefinitely, 0LL);
        resultAfterNumTextLabel = this->fields.resultAfterNumTextLabel;
        EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12330/*"SeSetting"*/, 0LL);
        if ( resultAfterNumTextLabel )
        {
          UILabel__set_text(resultAfterNumTextLabel, (System_String_o *)EntityDefinitely, 0LL);
          closeBtnLabel = this->fields.closeBtnLabel;
          EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12332/*"SeaShell"*/, 0LL);
          if ( closeBtnLabel )
            goto LABEL_45;
        }
      }
    }
LABEL_47:
    sub_1C3B9C0(EntityDefinitely, v25);
  }
  if ( type )
    return;
  messageLabel = this->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12334/*"Second path fragment must not be a drive or UNC name."*/, 0LL);
  name = (Il2CppObject *)shopEntity->fields.name;
  v35 = v33;
  v68 = limitNum;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68, v36, v37, v38);
  EntityDefinitely = System_String__Format_63383052(v35, v26, name, v39, 0LL);
  if ( !messageLabel )
    goto LABEL_47;
  UILabel__set_text(messageLabel, (System_String_o *)EntityDefinitely, 0LL);
  beforeNumLabel = this->fields.beforeNumLabel;
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12335/*"Secure"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v31, 0LL);
  EntityDefinitely = System_String__Format(v41, NumberFormat, 0LL);
  if ( !beforeNumLabel )
    goto LABEL_47;
  UILabel__set_text(beforeNumLabel, (System_String_o *)EntityDefinitely, 0LL);
  afterNumLabel = this->fields.afterNumLabel;
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12335/*"Secure"*/, 0LL);
  v45 = (Il2CppObject *)LocalizationManager__GetNumberFormat(limitNum, 0LL);
  EntityDefinitely = System_String__Format(v44, v45, 0LL);
  if ( !afterNumLabel )
    goto LABEL_47;
  UILabel__set_text(afterNumLabel, (System_String_o *)EntityDefinitely, 0LL);
  beforeNumTextLabel = this->fields.beforeNumTextLabel;
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12330/*"SeSetting"*/, 0LL);
  if ( !beforeNumTextLabel )
    goto LABEL_47;
  UILabel__set_text(beforeNumTextLabel, (System_String_o *)EntityDefinitely, 0LL);
  afterNumTextLabel = this->fields.afterNumTextLabel;
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12329/*"SePlayerObject"*/, 0LL);
  if ( !afterNumTextLabel )
    goto LABEL_47;
  UILabel__set_text(afterNumTextLabel, (System_String_o *)EntityDefinitely, 0LL);
  decideBtnLabel = this->fields.decideBtnLabel;
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12333/*"SecItemNodeName"*/, 0LL);
  if ( !decideBtnLabel )
    goto LABEL_47;
  UILabel__set_text(decideBtnLabel, (System_String_o *)EntityDefinitely, 0LL);
  cancelBtnLabel = this->fields.cancelBtnLabel;
  EntityDefinitely = LocalizationManager__Get((System_String_o *)StringLiteral_12331/*"SeaGreen"*/, 0LL);
  if ( !cancelBtnLabel )
    goto LABEL_47;
  UILabel__set_text(cancelBtnLabel, (System_String_o *)EntityDefinitely, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v50 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ShopResetMaster___);
  baseShopId = shopEntity->fields.baseShopId;
  v52 = (ShopResetMaster_o *)v50;
  EntityDefinitely = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !EntityDefinitely || !v52 )
    goto LABEL_47;
  EntityDefinitely = (void *)ShopResetMaster__TryGetEntity(
                               v52,
                               &entity,
                               baseShopId,
                               *((_DWORD *)EntityDefinitely + 25),
                               0LL);
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
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12338/*"Seed"*/, 0LL);
  v57 = (Il2CppObject *)LocalizationManager__GetNumberFormat(resetLimitNum, 0LL);
  v58 = System_String__Format(v56, v57, 0LL);
  EntityDefinitely = System_String__Concat_63368612(mText, v58, 0LL);
LABEL_45:
  UILabel__set_text(closeBtnLabel, (System_String_o *)EntityDefinitely, 0LL);
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
  sub_1C3B708(
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
    sub_1C3B9C0(gameObject, v11);
  }
  UnityEngine_GameObject__SetActive(gameObject, type == 1, 0LL);
}