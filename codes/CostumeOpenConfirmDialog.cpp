void __fastcall CostumeOpenConfirmDialog___ctor(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FBDDF & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FBDDF = 1;
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
  UILabel_o *message; // x0
  UILabel_o *description; // x0
  UILabel_o *closeLabel; // x19
  System_String_o *v9; // x0

  if ( (byte_40FBDDC & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v3);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40FBDDC = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  message = this->fields.message;
  if ( !message )
    goto LABEL_11;
  UILabel__set_text(message, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  description = this->fields.description;
  if ( !description )
    goto LABEL_11;
  UILabel__set_text(description, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_11:
    sub_B170D4();
  UILabel__set_text(closeLabel, v9, 0LL);
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
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x20

  if ( (byte_40FBDDE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CostumeOpenConfirmDialog_OnClickCloseButton__, v3);
    sub_B16FFC(&Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__11_0__, v4);
    byte_40FBDDE = 1;
  }
  v5 = Method_CostumeOpenConfirmDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_CostumeOpenConfirmDialog_OnClickCloseButton__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B17004(Method_CostumeOpenConfirmDialog_OnClickCloseButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__11_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
  sub_B16F98(
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
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  bool v18; // w0
  UILabel_o *description; // x22
  UnityEngine_Component_o *v20; // x0
  UnityEngine_Transform_o *transform; // x22
  float v22; // s0
  float v23; // s1
  float v24; // s2
  UnityEngine_Component_o *v25; // x0
  ServantFaceIconComponent_o **p_svtFaceIcon; // x19
  struct ServantFaceIconComponent_o *svtFaceIcon; // t1
  UnityEngine_Transform_o *v28; // x22
  float v29; // s0
  float v30; // s1
  float v31; // s2
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBDDD & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, userSvtColEntity);
    sub_B16FFC(&StringLiteral_3387/*"COSTUME_OPEN_MSG"*/, v9);
    sub_B16FFC(&StringLiteral_3389/*"COSTUME_OPEN_WARNING"*/, v10);
    sub_B16FFC(&StringLiteral_1/*""*/, v11);
    sub_B16FFC(&StringLiteral_3388/*"COSTUME_OPEN_TITLE"*/, v12);
    byte_40FBDDD = 1;
  }
  CostumeOpenConfirmDialog__Init(this, (const MethodInfo *)userSvtColEntity);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COSTUME_OPEN_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text(titleLabel, v14, 0LL);
  message = this->fields.message;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3387/*"COSTUME_OPEN_MSG"*/, 0LL);
  if ( !svtCostumeEntity )
    goto LABEL_25;
  v17 = System_String__Format_43739268(v16, (Il2CppObject *)svtName, (Il2CppObject *)svtCostumeEntity->fields.name, 0LL);
  if ( !message )
    goto LABEL_25;
  UILabel__set_text(message, v17, 0LL);
  v18 = ServantCostumeEntity__checkFlag(svtCostumeEntity, 128, 0LL);
  description = this->fields.description;
  if ( !v18 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3389/*"COSTUME_OPEN_WARNING"*/, 0LL);
    v33 = System_String__Format(v32, (Il2CppObject *)svtCostumeEntity->fields.name, 0LL);
    if ( description )
    {
      UILabel__set_text(description, v33, 0LL);
      p_svtFaceIcon = &this->fields.svtFaceIcon;
      goto LABEL_21;
    }
LABEL_25:
    sub_B170D4();
  }
  if ( !description )
    goto LABEL_25;
  UILabel__set_text(this->fields.description, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v20 = (UnityEngine_Component_o *)this->fields.message;
  if ( !v20 )
    goto LABEL_25;
  transform = UnityEngine_Component__get_transform(v20, 0LL);
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_up(0LL);
  if ( !transform )
    goto LABEL_25;
  v34.fields.x = v22 * 130.0;
  v34.fields.y = v23 * 130.0;
  v34.fields.z = v24 * 130.0;
  UnityEngine_Transform__set_localPosition(transform, v34, 0LL);
  svtFaceIcon = this->fields.svtFaceIcon;
  p_svtFaceIcon = &this->fields.svtFaceIcon;
  v25 = (UnityEngine_Component_o *)svtFaceIcon;
  if ( !svtFaceIcon )
    goto LABEL_25;
  v28 = UnityEngine_Component__get_transform(v25, 0LL);
  *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_up(0LL);
  if ( !v28 )
    goto LABEL_25;
  v35.fields.x = v29 * -54.0;
  v35.fields.y = v30 * -54.0;
  v35.fields.z = v31 * -54.0;
  UnityEngine_Transform__set_localPosition(v28, v35, 0LL);
LABEL_21:
  if ( !*p_svtFaceIcon )
    goto LABEL_25;
  ServantFaceIconComponent__Set_30709412(*p_svtFaceIcon, userSvtColEntity, svtCostumeEntity, 0LL, 0LL, 0, 0LL);
  if ( !*p_svtFaceIcon )
    goto LABEL_25;
  ServantFaceIconComponent__SetDispRaritySprite(*p_svtFaceIcon, 0, 0LL);
  if ( !*p_svtFaceIcon )
    goto LABEL_25;
  ServantFaceIconComponent__SetDispLimitCountIcon(*p_svtFaceIcon, 0, 0LL);
}


void __fastcall CostumeOpenConfirmDialog___OnClickCloseButton_b__11_0(
        CostumeOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.closeAction, 0LL);
  CostumeOpenConfirmDialog__Init(this, v3);
}