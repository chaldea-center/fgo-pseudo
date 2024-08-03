void __fastcall CostumeOpenConfirmDialog___ctor(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49F905F & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49F905F = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CostumeOpenConfirmDialog__Init(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x19

  if ( (byte_49F905C & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v3);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49F905C = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_10:
    sub_1B64324(titleLabel);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
}


void __fastcall CostumeOpenConfirmDialog__OnClickCloseButton(
        CostumeOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49F905E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CostumeOpenConfirmDialog_OnClickCloseButton__, v3);
    sub_1B640C8(&Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__11_0__, v4);
    byte_49F905E = 1;
  }
  v5 = Method_CostumeOpenConfirmDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_CostumeOpenConfirmDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_CostumeOpenConfirmDialog_OnClickCloseButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__11_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeAction, (int32_t)closeAction, v5, v6);
}


void __fastcall CostumeOpenConfirmDialog__Setup(
        CostumeOpenConfirmDialog_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        ServantCostumeEntity_o *svtCostumeEntity,
        System_String_o *svtName,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UILabel_o *titleLabel; // x23
  __int64 transform; // x0
  UILabel_o *message; // x23
  UILabel_o *description; // x22
  __int64 v17; // x1
  UnityEngine_Transform_o *v18; // x22
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v20; // x1
  UnityEngine_Transform_o *v21; // x22
  struct UnityEngine_Vector3_StaticFields *v22; // x8
  System_String_o *v23; // x0
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F905D & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, userSvtColEntity);
    sub_1B640C8(&StringLiteral_3875/*"COSTUME_OPEN_MSG"*/, v9);
    sub_1B640C8(&StringLiteral_3877/*"COSTUME_OPEN_WARNING"*/, v10);
    sub_1B640C8(&StringLiteral_1/*""*/, v11);
    sub_1B640C8(&StringLiteral_3876/*"COSTUME_OPEN_TITLE"*/, v12);
    byte_49F905D = 1;
  }
  CostumeOpenConfirmDialog__Init(this, (const MethodInfo *)userSvtColEntity);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3876/*"COSTUME_OPEN_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_27;
  UILabel__set_text(titleLabel, (System_String_o *)transform, 0LL);
  message = this->fields.message;
  transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3875/*"COSTUME_OPEN_MSG"*/, 0LL);
  if ( !svtCostumeEntity )
    goto LABEL_27;
  transform = (__int64)System_String__Format_61389768(
                         (System_String_o *)transform,
                         (Il2CppObject *)svtName,
                         (Il2CppObject *)svtCostumeEntity->fields.name,
                         0LL);
  if ( !message )
    goto LABEL_27;
  UILabel__set_text(message, (System_String_o *)transform, 0LL);
  transform = ServantCostumeEntity__checkFlag(svtCostumeEntity, 128, 0LL);
  description = this->fields.description;
  if ( (transform & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3877/*"COSTUME_OPEN_WARNING"*/, 0LL);
    transform = (__int64)System_String__Format(v23, (Il2CppObject *)svtCostumeEntity->fields.name, 0LL);
    if ( description )
    {
      UILabel__set_text(description, (System_String_o *)transform, 0LL);
      goto LABEL_23;
    }
LABEL_27:
    sub_1B64324(transform);
  }
  if ( !description )
    goto LABEL_27;
  UILabel__set_text(this->fields.description, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  transform = (__int64)this->fields.message;
  if ( !transform )
    goto LABEL_27;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  v18 = (UnityEngine_Transform_o *)transform;
  if ( !byte_49F7119 )
  {
    transform = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v17);
    byte_49F7119 = 1;
  }
  if ( !v18 )
    goto LABEL_27;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v24.fields.z = static_fields->upVector.fields.z * 130.0;
  v24.fields.y = static_fields->upVector.fields.y * 130.0;
  v24.fields.x = static_fields->upVector.fields.x * 130.0;
  UnityEngine_Transform__set_localPosition(v18, v24, 0LL);
  transform = (__int64)this->fields.svtFaceIcon;
  if ( !transform )
    goto LABEL_27;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  v21 = (UnityEngine_Transform_o *)transform;
  if ( !byte_49F7119 )
  {
    transform = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v20);
    byte_49F7119 = 1;
  }
  if ( !v21 )
    goto LABEL_27;
  v22 = UnityEngine_Vector3_TypeInfo->static_fields;
  v25.fields.z = v22->upVector.fields.z * -54.0;
  v25.fields.y = v22->upVector.fields.y * -54.0;
  v25.fields.x = v22->upVector.fields.x * -54.0;
  UnityEngine_Transform__set_localPosition(v21, v25, 0LL);
LABEL_23:
  transform = (__int64)this->fields.svtFaceIcon;
  if ( !transform )
    goto LABEL_27;
  ServantFaceIconComponent__Set_37908976(
    (ServantFaceIconComponent_o *)transform,
    userSvtColEntity,
    svtCostumeEntity,
    0LL,
    0LL,
    0,
    0LL);
  transform = (__int64)this->fields.svtFaceIcon;
  if ( !transform )
    goto LABEL_27;
  ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)transform, 0, 0LL);
  transform = (__int64)this->fields.svtFaceIcon;
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