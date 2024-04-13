void __fastcall CostumeOpenConfirmDialog___ctor(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA7D2 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA7D2 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CostumeOpenConfirmDialog__Init(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x19

  if ( (byte_42EA7CF & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EA7CF = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_11:
    sub_B5D69C(titleLabel, v11);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
}


void __fastcall CostumeOpenConfirmDialog__OnClickCloseButton(
        CostumeOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  System_Action_o *v13; // x20

  if ( (byte_42EA7D1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CostumeOpenConfirmDialog_OnClickCloseButton__, v5, v6, v7);
    sub_B5D5C4(&Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__11_0__, v8, v9, v10);
    byte_42EA7D1 = 1;
  }
  v11 = Method_CostumeOpenConfirmDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_CostumeOpenConfirmDialog_OnClickCloseButton__ + 75) & 2) != 0 )
    v11 = (_QWORD *)sub_B5D5CC(Method_CostumeOpenConfirmDialog_OnClickCloseButton__);
  v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__11_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
  sub_B5D560(
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UILabel_o *titleLabel; // x23
  System_String_o *v22; // x0
  __int64 v23; // x1
  UILabel_o *message; // x23
  UILabel_o *description; // x22
  UnityEngine_Transform_o *transform; // x22
  float v27; // s0
  float v28; // s1
  float v29; // s2
  struct ServantFaceIconComponent_o **p_svtFaceIcon; // x19
  struct ServantFaceIconComponent_o *svtFaceIcon; // t1
  UnityEngine_Transform_o *v32; // x22
  float v33; // s0
  float v34; // s1
  float v35; // s2
  System_String_o *v36; // x0
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EA7D0 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)userSvtColEntity, (_DWORD)svtCostumeEntity, svtName);
    sub_B5D5C4(&StringLiteral_3467/*"COSTUME_OPEN_MSG"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_3469/*"COSTUME_OPEN_WARNING"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_3468/*"COSTUME_OPEN_TITLE"*/, v18, v19, v20);
    byte_42EA7D0 = 1;
  }
  CostumeOpenConfirmDialog__Init(this, (const MethodInfo *)userSvtColEntity);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3468/*"COSTUME_OPEN_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text(titleLabel, v22, 0LL);
  message = this->fields.message;
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3467/*"COSTUME_OPEN_MSG"*/, 0LL);
  if ( !svtCostumeEntity )
    goto LABEL_25;
  v22 = System_String__Format_44573324(v22, (Il2CppObject *)svtName, (Il2CppObject *)svtCostumeEntity->fields.name, 0LL);
  if ( !message )
    goto LABEL_25;
  UILabel__set_text(message, v22, 0LL);
  v22 = (System_String_o *)ServantCostumeEntity__checkFlag(svtCostumeEntity, 128, 0LL);
  description = this->fields.description;
  if ( ((unsigned __int8)v22 & 1) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3469/*"COSTUME_OPEN_WARNING"*/, 0LL);
    v22 = System_String__Format(v36, (Il2CppObject *)svtCostumeEntity->fields.name, 0LL);
    if ( description )
    {
      UILabel__set_text(description, v22, 0LL);
      p_svtFaceIcon = &this->fields.svtFaceIcon;
      goto LABEL_21;
    }
LABEL_25:
    sub_B5D69C(v22, v23);
  }
  if ( !description )
    goto LABEL_25;
  UILabel__set_text(this->fields.description, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v22 = (System_String_o *)this->fields.message;
  if ( !v22 )
    goto LABEL_25;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v22, 0LL);
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_up(0LL);
  if ( !transform )
    goto LABEL_25;
  v37.fields.x = v27 * 130.0;
  v37.fields.y = v28 * 130.0;
  v37.fields.z = v29 * 130.0;
  UnityEngine_Transform__set_localPosition(transform, v37, 0LL);
  svtFaceIcon = this->fields.svtFaceIcon;
  p_svtFaceIcon = &this->fields.svtFaceIcon;
  v22 = (System_String_o *)svtFaceIcon;
  if ( !svtFaceIcon )
    goto LABEL_25;
  v32 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v22, 0LL);
  *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Vector3__get_up(0LL);
  if ( !v32 )
    goto LABEL_25;
  v38.fields.x = v33 * -54.0;
  v38.fields.y = v34 * -54.0;
  v38.fields.z = v35 * -54.0;
  UnityEngine_Transform__set_localPosition(v32, v38, 0LL);
LABEL_21:
  v22 = (System_String_o *)*p_svtFaceIcon;
  if ( !*p_svtFaceIcon )
    goto LABEL_25;
  ServantFaceIconComponent__Set_30853344(
    (ServantFaceIconComponent_o *)v22,
    userSvtColEntity,
    svtCostumeEntity,
    0LL,
    0LL,
    0,
    0LL);
  v22 = (System_String_o *)*p_svtFaceIcon;
  if ( !*p_svtFaceIcon )
    goto LABEL_25;
  ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)v22, 0, 0LL);
  v22 = (System_String_o *)*p_svtFaceIcon;
  if ( !*p_svtFaceIcon )
    goto LABEL_25;
  ServantFaceIconComponent__SetDispLimitCountIcon((ServantFaceIconComponent_o *)v22, 0, 0LL);
}


void __fastcall CostumeOpenConfirmDialog___OnClickCloseButton_b__11_0(
        CostumeOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.closeAction, 0LL);
  CostumeOpenConfirmDialog__Init(this, v3);
}