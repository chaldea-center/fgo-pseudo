void __fastcall Shop17ConfirmDialog___ctor(Shop17ConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11C58 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B11C58 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall Shop17ConfirmDialog__Awake(Shop17ConfirmDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall Shop17ConfirmDialog__Close(Shop17ConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  Shop17ConfirmDialog__Close_32278132(this, 0LL, v2);
}


void __fastcall Shop17ConfirmDialog__Close_32278132(
        Shop17ConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B11C54 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_Shop17ConfirmDialog_EndClose__, v5, v6);
    byte_4B11C54 = 1;
  }
  this->fields.onClose = callback;
  sub_1BCA784(&this->fields.onClose, callback);
  this->fields.state = 2;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_Shop17ConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_1BCA784(p_onClose, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall Shop17ConfirmDialog__Init(Shop17ConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.onDecide = 0LL;
  sub_1BCA784(&this->fields.onDecide, 0LL);
  this->fields.onCancel = 0LL;
  sub_1BCA784(&this->fields.onCancel, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall Shop17ConfirmDialog__OnClickCancel(Shop17ConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  struct System_Action_o *onCancel; // x20
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4B11C56 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_Shop17ConfirmDialog_OnClickCancel__, method, v2);
    byte_4B11C56 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v4 = Method_Shop17ConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_Shop17ConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_Shop17ConfirmDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    Shop17ConfirmDialog__Close_32278132(this, 0LL, v6);
    onCancel = this->fields.onCancel;
    this->fields.onCancel = 0LL;
    v8 = sub_1BCA784(&this->fields.onCancel, 0LL);
    if ( !onCancel )
      sub_1BCAA3C(v8, v9);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onCancel->fields.m_target)(
      onCancel->fields.original_method_info,
      *(_QWORD *)&onCancel->fields.extra_arg);
  }
}


void __fastcall Shop17ConfirmDialog__OnClickDecide(Shop17ConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  struct System_Action_o *onDecide; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4B11C55 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_Shop17ConfirmDialog_OnClickDecide__, method, v2);
    byte_4B11C55 = 1;
  }
  if ( this->fields.state == 1 && this->fields.onDecide )
  {
    v4 = Method_Shop17ConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_Shop17ConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_Shop17ConfirmDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    Shop17ConfirmDialog__Close_32278132(this, 0LL, v6);
    onDecide = this->fields.onDecide;
    this->fields.onDecide = 0LL;
    v8 = sub_1BCA784(&this->fields.onDecide, 0LL);
    if ( !onDecide )
      sub_1BCAA3C(v8, v9);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall Shop17ConfirmDialog__OnEnable(Shop17ConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B11C57 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15817/*"Window/Objects/CancelButton"*/, method, v2);
    byte_4B11C57 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_15817/*"Window/Objects/CancelButton"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Shop17ConfirmDialog__Open(
        Shop17ConfirmDialog_o *this,
        int32_t buyCount,
        ShopEntity_o *shopEntity,
        System_Action_o *onDecideFunc,
        System_Action_o *onCancelFunc,
        const MethodInfo *method)
{
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
  UILabel_o *titleLabel; // x22
  int64_t UserId; // x0
  __int64 v30; // x1
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  System_String_o *v33; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *v35; // x23
  Il2CppObject *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x1
  Il2CppObject *Master_object; // x21
  int64_t v40; // x22
  UserItemEntity_o *EntityDefinitely; // x0
  ItemIconComponent_o *itemIcon; // x21
  UserItemEntity_o *v43; // x22
  int32_t v44; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B11C53 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, *(_QWORD *)&buyCount, shopEntity);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_5835/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DECIDE_BUTTON"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_5837/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_TITLE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_5836/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DETAIL"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v25, v26);
    byte_4B11C53 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecideFunc;
    sub_1BCA784(&this->fields.onDecide, onDecideFunc);
    this->fields.onCancel = onCancelFunc;
    sub_1BCA784(&this->fields.onCancel, onCancelFunc);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5837/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_20;
    UILabel__set_text(titleLabel, (System_String_o *)UserId, 0LL);
    decideButtonLabel = this->fields.decideButtonLabel;
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5835/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DECIDE_BUTTON"*/, 0LL);
    if ( !decideButtonLabel )
      goto LABEL_20;
    UILabel__set_text(decideButtonLabel, (System_String_o *)UserId, 0LL);
    cancelButtonLabel = this->fields.cancelButtonLabel;
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelButtonLabel )
      goto LABEL_20;
    UILabel__set_text(cancelButtonLabel, (System_String_o *)UserId, 0LL);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_5836/*"EXCHANGE_SVT_COIN_CONFIRM_DIALOG_DETAIL"*/, 0LL);
    detailLabel = this->fields.detailLabel;
    v35 = v33;
    v44 = buyCount;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
    UserId = (int64_t)System_String__Format(v35, v36, 0LL);
    if ( !detailLabel )
      goto LABEL_20;
    UILabel__set_text(detailLabel, (System_String_o *)UserId, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v37);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v38);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !shopEntity
      || (v40 = UserId, UserId = ShopEntity__get_TargetId(shopEntity, 0LL), !Master_object)
      || (EntityDefinitely = UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)Master_object, v40, UserId, 0LL),
          itemIcon = this->fields.itemIcon,
          v43 = EntityDefinitely,
          UserId = ShopEntity__get_TargetId(shopEntity, 0LL),
          !v43)
      || !itemIcon )
    {
LABEL_20:
      sub_1BCAA3C(UserId, v30);
    }
    ItemIconComponent__SetCombineItem(itemIcon, UserId, v43->fields.num, 0LL);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  }
}