void __fastcall CostumeOpenConfirmDialog___ctor(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A57D36 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A57D36 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CostumeOpenConfirmDialog__Init(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x19

  if ( (byte_4A57D33 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57D33 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.message;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.description;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_10:
    sub_1B8880C(titleLabel, v3);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
}


void __fastcall CostumeOpenConfirmDialog__OnClickCloseButton(
        CostumeOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4A57D35 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CostumeOpenConfirmDialog_OnClickCloseButton__);
    sub_1B885B0(&Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__11_0__);
    byte_4A57D35 = 1;
  }
  v3 = Method_CostumeOpenConfirmDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_CostumeOpenConfirmDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CostumeOpenConfirmDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__11_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall CostumeOpenConfirmDialog__Open(
        CostumeOpenConfirmDialog_o *this,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  this->fields.closeAction = closeAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeAction, (int32_t)closeAction, v5, v6);
}


void __fastcall CostumeOpenConfirmDialog__Setup(
        CostumeOpenConfirmDialog_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        ServantCostumeEntity_o *svtCostumeEntity,
        System_String_o *svtName,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x23
  System_String_o *transform; // x0
  __int64 v11; // x1
  UILabel_o *message; // x23
  UILabel_o *description; // x22
  UnityEngine_Transform_o *v14; // x22
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Transform_o *v16; // x22
  struct UnityEngine_Vector3_StaticFields *v17; // x8
  System_String_o *v18; // x0
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57D34 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3898/*"COSTUME_OPEN_MSG"*/);
    sub_1B885B0(&StringLiteral_3900/*"COSTUME_OPEN_WARNING"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_3899/*"COSTUME_OPEN_TITLE"*/);
    byte_4A57D34 = 1;
  }
  CostumeOpenConfirmDialog__Init(this, (const MethodInfo *)userSvtColEntity);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transform = LocalizationManager__Get((System_String_o *)StringLiteral_3899/*"COSTUME_OPEN_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_27;
  UILabel__set_text(titleLabel, transform, 0LL);
  message = this->fields.message;
  transform = LocalizationManager__Get((System_String_o *)StringLiteral_3898/*"COSTUME_OPEN_MSG"*/, 0LL);
  if ( !svtCostumeEntity )
    goto LABEL_27;
  transform = System_String__Format_61721404(
                transform,
                (Il2CppObject *)svtName,
                (Il2CppObject *)svtCostumeEntity->fields.name,
                0LL);
  if ( !message )
    goto LABEL_27;
  UILabel__set_text(message, transform, 0LL);
  transform = (System_String_o *)ServantCostumeEntity__checkFlag(svtCostumeEntity, 128, 0LL);
  description = this->fields.description;
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3900/*"COSTUME_OPEN_WARNING"*/, 0LL);
    transform = System_String__Format(v18, (Il2CppObject *)svtCostumeEntity->fields.name, 0LL);
    if ( description )
    {
      UILabel__set_text(description, transform, 0LL);
      goto LABEL_23;
    }
LABEL_27:
    sub_1B8880C(transform, v11);
  }
  if ( !description )
    goto LABEL_27;
  UILabel__set_text(this->fields.description, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  transform = (System_String_o *)this->fields.message;
  if ( !transform )
    goto LABEL_27;
  transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  v14 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4A55CE9 )
  {
    transform = (System_String_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE9 = 1;
  }
  if ( !v14 )
    goto LABEL_27;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v19.fields.z = static_fields->upVector.fields.z * 130.0;
  v19.fields.y = static_fields->upVector.fields.y * 130.0;
  v19.fields.x = static_fields->upVector.fields.x * 130.0;
  UnityEngine_Transform__set_localPosition(v14, v19, 0LL);
  transform = (System_String_o *)this->fields.svtFaceIcon;
  if ( !transform )
    goto LABEL_27;
  transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  v16 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4A55CE9 )
  {
    transform = (System_String_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE9 = 1;
  }
  if ( !v16 )
    goto LABEL_27;
  v17 = UnityEngine_Vector3_TypeInfo->static_fields;
  v20.fields.z = v17->upVector.fields.z * -54.0;
  v20.fields.y = v17->upVector.fields.y * -54.0;
  v20.fields.x = v17->upVector.fields.x * -54.0;
  UnityEngine_Transform__set_localPosition(v16, v20, 0LL);
LABEL_23:
  transform = (System_String_o *)this->fields.svtFaceIcon;
  if ( !transform )
    goto LABEL_27;
  ServantFaceIconComponent__Set_38224336(
    (ServantFaceIconComponent_o *)transform,
    userSvtColEntity,
    svtCostumeEntity,
    0LL,
    0LL,
    0,
    0LL);
  transform = (System_String_o *)this->fields.svtFaceIcon;
  if ( !transform )
    goto LABEL_27;
  ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)transform, 0, 0LL);
  transform = (System_String_o *)this->fields.svtFaceIcon;
  if ( !transform )
    goto LABEL_27;
  ServantFaceIconComponent__SetDispLimitCountIcon((ServantFaceIconComponent_o *)transform, 0, 0LL);
}


void __fastcall CostumeOpenConfirmDialog___OnClickCloseButton_b__11_0(
        CostumeOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.closeAction, 0LL);
  CostumeOpenConfirmDialog__Init(this, v3);
}