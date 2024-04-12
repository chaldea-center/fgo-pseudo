void __fastcall CostumeOpenConfirmDialog___ctor(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42B1F2D & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B1F2D = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CostumeOpenConfirmDialog__Init(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x19

  if ( (byte_42B1F2A & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1F2A = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_11:
    sub_B52A5C(titleLabel, v3);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
}


void __fastcall CostumeOpenConfirmDialog__OnClickCloseButton(
        CostumeOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_42B1F2C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CostumeOpenConfirmDialog_OnClickCloseButton__);
    sub_B52984(&Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__11_0__);
    byte_42B1F2C = 1;
  }
  v3 = Method_CostumeOpenConfirmDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_CostumeOpenConfirmDialog_OnClickCloseButton__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B5298C(Method_CostumeOpenConfirmDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__11_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
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
  sub_B52920(
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
  UILabel_o *titleLabel; // x23
  System_String_o *v10; // x0
  __int64 v11; // x1
  UILabel_o *message; // x23
  UILabel_o *description; // x22
  UnityEngine_Transform_o *transform; // x22
  float v15; // s0
  float v16; // s1
  float v17; // s2
  struct ServantFaceIconComponent_o **p_svtFaceIcon; // x19
  struct ServantFaceIconComponent_o *svtFaceIcon; // t1
  UnityEngine_Transform_o *v20; // x22
  float v21; // s0
  float v22; // s1
  float v23; // s2
  System_String_o *v24; // x0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B1F2B & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3434/*"COSTUME_OPEN_MSG"*/);
    sub_B52984(&StringLiteral_3436/*"COSTUME_OPEN_WARNING"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_3435/*"COSTUME_OPEN_TITLE"*/);
    byte_42B1F2B = 1;
  }
  CostumeOpenConfirmDialog__Init(this, (const MethodInfo *)userSvtColEntity);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3435/*"COSTUME_OPEN_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text(titleLabel, v10, 0LL);
  message = this->fields.message;
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3434/*"COSTUME_OPEN_MSG"*/, 0LL);
  if ( !svtCostumeEntity )
    goto LABEL_25;
  v10 = System_String__Format_44563852(v10, (Il2CppObject *)svtName, (Il2CppObject *)svtCostumeEntity->fields.name, 0LL);
  if ( !message )
    goto LABEL_25;
  UILabel__set_text(message, v10, 0LL);
  v10 = (System_String_o *)ServantCostumeEntity__checkFlag(svtCostumeEntity, 128, 0LL);
  description = this->fields.description;
  if ( ((unsigned __int8)v10 & 1) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3436/*"COSTUME_OPEN_WARNING"*/, 0LL);
    v10 = System_String__Format(v24, (Il2CppObject *)svtCostumeEntity->fields.name, 0LL);
    if ( description )
    {
      UILabel__set_text(description, v10, 0LL);
      p_svtFaceIcon = &this->fields.svtFaceIcon;
      goto LABEL_21;
    }
LABEL_25:
    sub_B52A5C(v10, v11);
  }
  if ( !description )
    goto LABEL_25;
  UILabel__set_text(this->fields.description, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v10 = (System_String_o *)this->fields.message;
  if ( !v10 )
    goto LABEL_25;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v10, 0LL);
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_up(0LL);
  if ( !transform )
    goto LABEL_25;
  v25.fields.x = v15 * 130.0;
  v25.fields.y = v16 * 130.0;
  v25.fields.z = v17 * 130.0;
  UnityEngine_Transform__set_localPosition(transform, v25, 0LL);
  svtFaceIcon = this->fields.svtFaceIcon;
  p_svtFaceIcon = &this->fields.svtFaceIcon;
  v10 = (System_String_o *)svtFaceIcon;
  if ( !svtFaceIcon )
    goto LABEL_25;
  v20 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v10, 0LL);
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_up(0LL);
  if ( !v20 )
    goto LABEL_25;
  v26.fields.x = v21 * -54.0;
  v26.fields.y = v22 * -54.0;
  v26.fields.z = v23 * -54.0;
  UnityEngine_Transform__set_localPosition(v20, v26, 0LL);
LABEL_21:
  v10 = (System_String_o *)*p_svtFaceIcon;
  if ( !*p_svtFaceIcon )
    goto LABEL_25;
  ServantFaceIconComponent__Set_30473984(
    (ServantFaceIconComponent_o *)v10,
    userSvtColEntity,
    svtCostumeEntity,
    0LL,
    0LL,
    0,
    0LL);
  v10 = (System_String_o *)*p_svtFaceIcon;
  if ( !*p_svtFaceIcon )
    goto LABEL_25;
  ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)v10, 0, 0LL);
  v10 = (System_String_o *)*p_svtFaceIcon;
  if ( !*p_svtFaceIcon )
    goto LABEL_25;
  ServantFaceIconComponent__SetDispLimitCountIcon((ServantFaceIconComponent_o *)v10, 0, 0LL);
}


void __fastcall CostumeOpenConfirmDialog___OnClickCloseButton_b__11_0(
        CostumeOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.closeAction, 0LL);
  CostumeOpenConfirmDialog__Init(this, v3);
}