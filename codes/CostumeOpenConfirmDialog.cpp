void CostumeOpenConfirmDialog___ctor(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C342A3 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C342A3 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CostumeOpenConfirmDialog__Init(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x19

  if ( (byte_4C342A0 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C342A0 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.message;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.description;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
LABEL_10:
    sub_1C32E7C(titleLabel);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0);
}


void CostumeOpenConfirmDialog__OnClickCloseButton(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C342A2 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_CostumeOpenConfirmDialog_OnClickCloseButton__);
    sub_1C32C20(&Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__15_0__);
    byte_4C342A2 = 1;
  }
  v3 = Method_CostumeOpenConfirmDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_CostumeOpenConfirmDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_CostumeOpenConfirmDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__15_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void CostumeOpenConfirmDialog__Open(
        CostumeOpenConfirmDialog_o *this,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
  this->fields.closeAction = closeAction;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeAction, (int32_t)closeAction, v5, v6);
}


void CostumeOpenConfirmDialog__Setup(
        CostumeOpenConfirmDialog_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        ServantCostumeEntity_o *svtCostumeEntity,
        System_String_o *svtName,
        const MethodInfo *method)
{
  System_String_o *description; // x0
  int32_t svtId; // w24
  BalanceConfig_c *v11; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t id; // w24
  _BOOL4 v14; // w22
  UILabel_o *titleLabel; // x24
  __int64 v16; // x8
  UILabel_o *v17; // x24
  System_String_o *v18; // x0
  UnityEngine_Transform_o *v19; // x23
  struct UnityEngine_Vector3_StaticFields *v20; // x8
  UnityEngine_Transform_o *v21; // x23
  struct UnityEngine_Vector3_StaticFields *v22; // x8
  __int64 v23; // x23
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  Il2CppObject *v30; // x24
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  __int64 v35; // x6
  __int64 v36; // x7
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w1
  System_String_o *IfExists; // x0
  __int64 v44; // x8
  UILabel_o *v45; // x23
  __int64 v46; // x8
  ServantFaceIconComponent_o *v47; // x21
  int32_t v48; // [xsp+8h] [xbp-48h] BYREF
  int32_t v49; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C342A1 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_3850/*"COSTUME_OPEN_MSG"*/);
    sub_1C32C20(&StringLiteral_3853/*"COSTUME_OPEN_WARNING_{0}_{1}"*/);
    sub_1C32C20(&StringLiteral_3852/*"COSTUME_OPEN_WARNING"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_3851/*"COSTUME_OPEN_TITLE"*/);
    byte_4C342A1 = 1;
  }
  CostumeOpenConfirmDialog__Init(this, (const MethodInfo *)userSvtColEntity);
  if ( !svtCostumeEntity )
    goto LABEL_43;
  svtId = svtCostumeEntity->fields.svtId;
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  static_fields = v11->static_fields;
  if ( svtId == static_fields->ServantIdMashu1 )
  {
    id = svtCostumeEntity->fields.id;
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v14 = id == static_fields->SpecialLimitCountPLD;
  }
  else
  {
    v14 = 0;
  }
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.message, !v14, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.description, !v14, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.svtFaceIcon, !v14, 0);
  GameObjectHelper__SetActiveSafely(this->fields.specialObj, v14, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  description = LocalizationManager__Get((System_String_o *)StringLiteral_3851/*"COSTUME_OPEN_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_43;
  UILabel__set_text(titleLabel, description, 0);
  v16 = 112;
  if ( v14 )
    v16 = 152;
  v17 = *(UILabel_o **)((char *)&this->klass + v16);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3850/*"COSTUME_OPEN_MSG"*/, 0);
  description = System_String__Format_63559836(
                  v18,
                  (Il2CppObject *)svtName,
                  (Il2CppObject *)svtCostumeEntity->fields.name,
                  0);
  if ( !v17 )
    goto LABEL_43;
  UILabel__set_text(v17, description, 0);
  if ( ServantCostumeEntity__checkFlag(svtCostumeEntity, 128, 0) )
  {
    description = (System_String_o *)this->fields.description;
    if ( description )
    {
      UILabel__set_text((UILabel_o *)description, (System_String_o *)StringLiteral_1/*""*/, 0);
      description = (System_String_o *)this->fields.message;
      if ( description )
      {
        description = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)description, 0);
        v19 = (UnityEngine_Transform_o *)description;
        if ( !byte_4C313D9 )
        {
          description = (System_String_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
          byte_4C313D9 = 1;
        }
        if ( v19 )
        {
          v20 = UnityEngine_Vector3_TypeInfo->static_fields;
          v50.fields.z = v20->upVector.fields.z * 130.0;
          v50.fields.y = v20->upVector.fields.y * 130.0;
          v50.fields.x = v20->upVector.fields.x * 130.0;
          UnityEngine_Transform__set_localPosition(v19, v50, 0);
          description = (System_String_o *)this->fields.svtFaceIcon;
          if ( description )
          {
            description = (System_String_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)description,
                                               0);
            v21 = (UnityEngine_Transform_o *)description;
            if ( !byte_4C313D9 )
            {
              description = (System_String_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
              byte_4C313D9 = 1;
            }
            if ( v21 )
            {
              v22 = UnityEngine_Vector3_TypeInfo->static_fields;
              v51.fields.z = v22->upVector.fields.z * -54.0;
              v51.fields.y = v22->upVector.fields.y * -54.0;
              v51.fields.x = v22->upVector.fields.x * -54.0;
              UnityEngine_Transform__set_localPosition(v21, v51, 0);
              goto LABEL_39;
            }
          }
        }
      }
    }
LABEL_43:
    sub_1C32E7C(description);
  }
  v23 = sub_1C32CC8(string___TypeInfo, 2);
  v49 = svtCostumeEntity->fields.svtId;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v24, v25, v26, v27, v28, v29);
  v48 = svtCostumeEntity->fields.id;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v31, v32, v33, v34, v35, v36);
  description = System_String__Format_63559836((System_String_o *)StringLiteral_3853/*"COSTUME_OPEN_WARNING_{0}_{1}"*/, v30, v37, 0);
  if ( !v23 )
    goto LABEL_43;
  if ( !*(_DWORD *)(v23 + 24)
    || (*(_QWORD *)(v23 + 32) = description,
        sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 32), (int32_t)description, v38, v39),
        *(_DWORD *)(v23 + 24) <= 1u) )
  {
    sub_1C32E84(description);
  }
  v42 = StringLiteral_3852/*"COSTUME_OPEN_WARNING"*/;
  *(_QWORD *)(v23 + 40) = StringLiteral_3852/*"COSTUME_OPEN_WARNING"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 40), v42, v40, v41);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v23, 0);
  v44 = 120;
  if ( v14 )
    v44 = 160;
  v45 = *(UILabel_o **)((char *)&this->klass + v44);
  description = System_String__Format(IfExists, (Il2CppObject *)svtCostumeEntity->fields.name, 0);
  if ( !v45 )
    goto LABEL_43;
  UILabel__set_text(v45, description, 0);
LABEL_39:
  v46 = 136;
  if ( v14 )
    v46 = 168;
  v47 = *(ServantFaceIconComponent_o **)((char *)&this->klass + v46);
  if ( !v47 )
    goto LABEL_43;
  ServantFaceIconComponent__Set_40909284(v47, userSvtColEntity, svtCostumeEntity, 0, 0, 0, 0);
  ServantFaceIconComponent__SetDispRaritySprite(v47, 0, 0);
  ServantFaceIconComponent__SetDispLimitCountIcon(v47, 0, 0);
}


void CostumeOpenConfirmDialog___OnClickCloseButton_b__15_0(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.closeAction, 0);
  CostumeOpenConfirmDialog__Init(this, v3);
}