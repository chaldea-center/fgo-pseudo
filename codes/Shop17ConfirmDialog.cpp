void __fastcall Shop17ConfirmDialog___ctor(Shop17ConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B2779C & 1) == 0 )
  {
    sub_1BCE82C(&BaseDialog_TypeInfo);
    byte_4B2779C = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall Shop17ConfirmDialog__Awake(Shop17ConfirmDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall Shop17ConfirmDialog__Close(Shop17ConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  Shop17ConfirmDialog__Close_32298520(this, 0LL, v2);
}


void __fastcall Shop17ConfirmDialog__Close_32298520(
        Shop17ConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4B27798 & 1) == 0 )
  {
    sub_1BCE82C(&System_Action_TypeInfo);
    sub_1BCE82C(&Method_Shop17ConfirmDialog_EndClose__);
    byte_4B27798 = 1;
  }
  this->fields.onClose = callback;
  sub_1BCE7D0(&this->fields.onClose);
  this->fields.state = 2;
  v5 = (System_Action_o *)sub_1BCEA78(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_Shop17ConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall Shop17ConfirmDialog__EndClose(Shop17ConfirmDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_onClose; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *onClose; // t1

  Shop17ConfirmDialog__Init(this, method);
  onClose = this->fields.onClose;
  p_onClose = &this->fields.onClose;
  v4 = onClose;
  if ( onClose )
  {
    *p_onClose = 0LL;
    sub_1BCE7D0(p_onClose);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall Shop17ConfirmDialog__Init(Shop17ConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.onDecide = 0LL;
  sub_1BCE7D0(&this->fields.onDecide);
  this->fields.onCancel = 0LL;
  sub_1BCE7D0(&this->fields.onCancel);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall Shop17ConfirmDialog__OnClickCancel(Shop17ConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  struct System_Action_o *onCancel; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B2779A & 1) == 0 )
  {
    sub_1BCE82C(&Method_Shop17ConfirmDialog_OnClickCancel__);
    byte_4B2779A = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_Shop17ConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_Shop17ConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCE844(Method_Shop17ConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCE810(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    Shop17ConfirmDialog__Close_32298520(this, 0LL, v5);
    onCancel = this->fields.onCancel;
    this->fields.onCancel = 0LL;
    v7 = sub_1BCE7D0(&this->fields.onCancel);
    if ( !onCancel )
      sub_1BCEA88(v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onCancel->fields.m_target)(
      onCancel->fields.original_method_info,
      *(_QWORD *)&onCancel->fields.extra_arg);
  }
}


void __fastcall Shop17ConfirmDialog__OnClickDecide(Shop17ConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  struct System_Action_o *onDecide; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B27799 & 1) == 0 )
  {
    sub_1BCE82C(&Method_Shop17ConfirmDialog_OnClickDecide__);
    byte_4B27799 = 1;
  }
  if ( this->fields.state == 1 && this->fields.onDecide )
  {
    v3 = Method_Shop17ConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_Shop17ConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCE844(Method_Shop17ConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCE810(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    Shop17ConfirmDialog__Close_32298520(this, 0LL, v5);
    onDecide = this->fields.onDecide;
    this->fields.onDecide = 0LL;
    v7 = sub_1BCE7D0(&this->fields.onDecide);
    if ( !onDecide )
      sub_1BCEA88(v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall Shop17ConfirmDialog__OnEnable(Shop17ConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B2779B & 1) == 0 )
  {
    sub_1BCE82C(&StringLiteral_15825/*"Window/Objects/CancelButton"*/);
    byte_4B2779B = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42600724(transform, (System_String_o *)StringLiteral_15825/*"Window/Objects/CancelButton"*/, 0LL);
}


void __fastcall Shop17ConfirmDialog__Open(
        Shop17ConfirmDialog_o *this,
        int32_t buyCount,
        ShopEntity_o *shopEntity,
        System_Action_o *onDecideFunc,
        System_Action_o *onCancelFunc,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x22
  System_String_o *TargetId; // x0
  __int64 v13; // x1
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  System_String_o *v16; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *v18; // x23
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  Il2CppObject *Master_object; // x21
  int64_t v24; // x22
  UserItemEntity_o *EntityDefinitely; // x0
  ItemIconComponent_o *itemIcon; // x21
  UserItemEntity_o *v27; // x22
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B27797 & 1) == 0 )
  {
    sub_1BCE82C(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1BCE82C(&DataManager_TypeInfo);
    sub_1BCE82C(&int_TypeInfo);
    sub_1BCE82C(&LocalizationManager_TypeInfo);
    sub_1BCE82C(&NetworkManager_TypeInfo);
    sub_1BCE82C(&StringLiteral_5841/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DECIDE_BUTTON"*/);
    sub_1BCE82C(&StringLiteral_5843/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_TITLE"*/);
    sub_1BCE82C(&StringLiteral_5842/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DETAIL"*/);
    sub_1BCE82C(&StringLiteral_3791/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4B27797 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecideFunc;
    sub_1BCE7D0(&this->fields.onDecide);
    this->fields.onCancel = onCancelFunc;
    sub_1BCE7D0(&this->fields.onCancel);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    TargetId = LocalizationManager__Get((System_String_o *)StringLiteral_5843/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_24;
    UILabel__set_text(titleLabel, TargetId, 0LL);
    decideButtonLabel = this->fields.decideButtonLabel;
    TargetId = LocalizationManager__Get((System_String_o *)StringLiteral_5841/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DECIDE_BUTTON"*/, 0LL);
    if ( !decideButtonLabel )
      goto LABEL_24;
    UILabel__set_text(decideButtonLabel, TargetId, 0LL);
    cancelButtonLabel = this->fields.cancelButtonLabel;
    TargetId = LocalizationManager__Get((System_String_o *)StringLiteral_3791/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelButtonLabel )
      goto LABEL_24;
    UILabel__set_text(cancelButtonLabel, TargetId, 0LL);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5842/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DETAIL"*/, 0LL);
    detailLabel = this->fields.detailLabel;
    v18 = v16;
    v28 = buyCount;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v19, v20, v21);
    TargetId = System_String__Format(v18, v22, 0LL);
    if ( !detailLabel )
      goto LABEL_24;
    UILabel__set_text(detailLabel, TargetId, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F26330 *)Method_DataManager_GetMaster_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B26937 )
    {
      sub_1BCE82C(&NetworkManager_TypeInfo);
      byte_4B26937 = 1;
    }
    TargetId = (System_String_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      TargetId = (System_String_o *)NetworkManager_TypeInfo;
    }
    if ( !shopEntity
      || (v24 = *(_QWORD *)(*(_QWORD *)&TargetId[7].fields + 64LL),
          TargetId = (System_String_o *)ShopEntity__get_TargetId(shopEntity, 0LL),
          !Master_object)
      || (EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                               (UserItemMaster_o *)Master_object,
                               v24,
                               (int32_t)TargetId,
                               0LL),
          itemIcon = this->fields.itemIcon,
          v27 = EntityDefinitely,
          TargetId = (System_String_o *)ShopEntity__get_TargetId(shopEntity, 0LL),
          !v27)
      || !itemIcon )
    {
LABEL_24:
      sub_1BCEA88(TargetId, v13);
    }
    ItemIconComponent__SetItem(itemIcon, (int32_t)TargetId, v27->fields.num, 0, 0LL);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  }
}