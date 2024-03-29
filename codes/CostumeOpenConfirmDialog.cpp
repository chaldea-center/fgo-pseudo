void __fastcall CostumeOpenConfirmDialog___ctor(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42164EF & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_42164EF = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CostumeOpenConfirmDialog__Init(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x19

  if ( (byte_42164EC & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, v3);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_42164EC = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.message;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.description;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_11:
    sub_B0D97C(titleLabel);
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

  if ( (byte_42164EE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CostumeOpenConfirmDialog_OnClickCloseButton__, v3);
    sub_B0D8A4(&Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__11_0__, v4);
    byte_42164EE = 1;
  }
  v5 = Method_CostumeOpenConfirmDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_CostumeOpenConfirmDialog_OnClickCloseButton__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B0D8AC(Method_CostumeOpenConfirmDialog_OnClickCloseButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_B0D888(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__11_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall CostumeOpenConfirmDialog__Open(
        CostumeOpenConfirmDialog_o *this,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  this->fields.closeAction = closeAction;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeAction,
    (System_Int32_array **)closeAction,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_o *v14; // x0
  UILabel_o *message; // x23
  UILabel_o *description; // x22
  UnityEngine_Transform_o *transform; // x22
  float v18; // s0
  float v19; // s1
  float v20; // s2
  struct ServantFaceIconComponent_o **p_svtFaceIcon; // x19
  struct ServantFaceIconComponent_o *svtFaceIcon; // t1
  UnityEngine_Transform_o *v23; // x22
  float v24; // s0
  float v25; // s1
  float v26; // s2
  System_String_o *v27; // x0
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42164ED & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, userSvtColEntity);
    sub_B0D8A4(&StringLiteral_3414/*"COSTUME_OPEN_MSG"*/, v9);
    sub_B0D8A4(&StringLiteral_3416/*"COSTUME_OPEN_WARNING"*/, v10);
    sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    sub_B0D8A4(&StringLiteral_3415/*"COSTUME_OPEN_TITLE"*/, v12);
    byte_42164ED = 1;
  }
  CostumeOpenConfirmDialog__Init(this, (const MethodInfo *)userSvtColEntity);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3415/*"COSTUME_OPEN_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text(titleLabel, v14, 0LL);
  message = this->fields.message;
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3414/*"COSTUME_OPEN_MSG"*/, 0LL);
  if ( !svtCostumeEntity )
    goto LABEL_25;
  v14 = System_String__Format_43845440(v14, (Il2CppObject *)svtName, (Il2CppObject *)svtCostumeEntity->fields.name, 0LL);
  if ( !message )
    goto LABEL_25;
  UILabel__set_text(message, v14, 0LL);
  v14 = (System_String_o *)ServantCostumeEntity__checkFlag(svtCostumeEntity, 128, 0LL);
  description = this->fields.description;
  if ( ((unsigned __int8)v14 & 1) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3416/*"COSTUME_OPEN_WARNING"*/, 0LL);
    v14 = System_String__Format(v27, (Il2CppObject *)svtCostumeEntity->fields.name, 0LL);
    if ( description )
    {
      UILabel__set_text(description, v14, 0LL);
      p_svtFaceIcon = &this->fields.svtFaceIcon;
      goto LABEL_21;
    }
LABEL_25:
    sub_B0D97C(v14);
  }
  if ( !description )
    goto LABEL_25;
  UILabel__set_text(this->fields.description, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v14 = (System_String_o *)this->fields.message;
  if ( !v14 )
    goto LABEL_25;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0LL);
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_up(0LL);
  if ( !transform )
    goto LABEL_25;
  v28.fields.x = v18 * 130.0;
  v28.fields.y = v19 * 130.0;
  v28.fields.z = v20 * 130.0;
  UnityEngine_Transform__set_localPosition(transform, v28, 0LL);
  svtFaceIcon = this->fields.svtFaceIcon;
  p_svtFaceIcon = &this->fields.svtFaceIcon;
  v14 = (System_String_o *)svtFaceIcon;
  if ( !svtFaceIcon )
    goto LABEL_25;
  v23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0LL);
  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_up(0LL);
  if ( !v23 )
    goto LABEL_25;
  v29.fields.x = v24 * -54.0;
  v29.fields.y = v25 * -54.0;
  v29.fields.z = v26 * -54.0;
  UnityEngine_Transform__set_localPosition(v23, v29, 0LL);
LABEL_21:
  v14 = (System_String_o *)*p_svtFaceIcon;
  if ( !*p_svtFaceIcon )
    goto LABEL_25;
  ServantFaceIconComponent__Set_29630376(
    (ServantFaceIconComponent_o *)v14,
    userSvtColEntity,
    svtCostumeEntity,
    0LL,
    0LL,
    0,
    0LL);
  v14 = (System_String_o *)*p_svtFaceIcon;
  if ( !*p_svtFaceIcon )
    goto LABEL_25;
  ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)v14, 0, 0LL);
  v14 = (System_String_o *)*p_svtFaceIcon;
  if ( !*p_svtFaceIcon )
    goto LABEL_25;
  ServantFaceIconComponent__SetDispLimitCountIcon((ServantFaceIconComponent_o *)v14, 0, 0LL);
}


void __fastcall CostumeOpenConfirmDialog___OnClickCloseButton_b__11_0(
        CostumeOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.closeAction, 0LL);
  CostumeOpenConfirmDialog__Init(this, v3);
}