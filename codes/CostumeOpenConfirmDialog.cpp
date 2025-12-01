void CostumeOpenConfirmDialog___ctor(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CC3C8B & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC3C8B = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CostumeOpenConfirmDialog__Init(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x19

  if ( (byte_4CC3C88 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_3680/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC3C88 = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3680/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
LABEL_10:
    sub_1C71608(titleLabel, v3);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0);
}


void CostumeOpenConfirmDialog__OnClickCloseButton(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CC3C8A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CostumeOpenConfirmDialog_OnClickCloseButton__);
    sub_1C713B0(&Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__15_0__);
    byte_4CC3C8A = 1;
  }
  v3 = Method_CostumeOpenConfirmDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_CostumeOpenConfirmDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_CostumeOpenConfirmDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__15_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void CostumeOpenConfirmDialog__Open(
        CostumeOpenConfirmDialog_o *this,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
  this->fields.closeAction = closeAction;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.closeAction, (int32_t)closeAction, v5, v6, v7, v8, v9, v10);
}


void CostumeOpenConfirmDialog__Setup(
        CostumeOpenConfirmDialog_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        ServantCostumeEntity_o *svtCostumeEntity,
        System_String_o *svtName,
        const MethodInfo *method)
{
  System_String_o *description; // x0
  __int64 v10; // x1
  int32_t svtId; // w24
  BalanceConfig_c *v12; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t id; // w24
  _BOOL4 v15; // w22
  UILabel_o *titleLabel; // x24
  __int64 v17; // x8
  UILabel_o *v18; // x24
  System_String_o *v19; // x0
  UnityEngine_Transform_o *v20; // x23
  struct UnityEngine_Vector3_StaticFields *v21; // x8
  UnityEngine_Transform_o *v22; // x23
  struct UnityEngine_Vector3_StaticFields *v23; // x8
  __int64 v24; // x23
  Il2CppObject *v25; // x24
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  System_String_o *IfExists; // x0
  __int64 v41; // x8
  UILabel_o *v42; // x23
  __int64 v43; // x8
  ServantFaceIconComponent_o *v44; // x21
  int32_t v45; // [xsp+8h] [xbp-48h] BYREF
  int32_t v46; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC3C89 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_3845/*"COSTUME_OPEN_MSG"*/);
    sub_1C713B0(&StringLiteral_3848/*"COSTUME_OPEN_WARNING_{0}_{1}"*/);
    sub_1C713B0(&StringLiteral_3847/*"COSTUME_OPEN_WARNING"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_3846/*"COSTUME_OPEN_TITLE"*/);
    byte_4CC3C89 = 1;
  }
  CostumeOpenConfirmDialog__Init(this, (const MethodInfo *)userSvtColEntity);
  if ( !svtCostumeEntity )
    goto LABEL_43;
  svtId = svtCostumeEntity->fields.svtId;
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  static_fields = v12->static_fields;
  if ( svtId == static_fields->ServantIdMashu1 )
  {
    id = svtCostumeEntity->fields.id;
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v15 = id == static_fields->SpecialLimitCountPLD;
  }
  else
  {
    v15 = 0;
  }
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.message, !v15, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.description, !v15, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.svtFaceIcon, !v15, 0);
  GameObjectHelper__SetActiveSafely(this->fields.specialObj, v15, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  description = LocalizationManager__Get((System_String_o *)StringLiteral_3846/*"COSTUME_OPEN_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_43;
  UILabel__set_text(titleLabel, description, 0);
  v17 = 112;
  if ( v15 )
    v17 = 152;
  v18 = *(UILabel_o **)((char *)&this->klass + v17);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3845/*"COSTUME_OPEN_MSG"*/, 0);
  description = System_String__Format_64073032(
                  v19,
                  (Il2CppObject *)svtName,
                  (Il2CppObject *)svtCostumeEntity->fields.name,
                  0);
  if ( !v18 )
    goto LABEL_43;
  UILabel__set_text(v18, description, 0);
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
        v20 = (UnityEngine_Transform_o *)description;
        if ( !byte_4CC0D11 )
        {
          description = (System_String_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
          byte_4CC0D11 = 1;
        }
        if ( v20 )
        {
          v21 = UnityEngine_Vector3_TypeInfo->static_fields;
          v47.fields.z = v21->upVector.fields.z * 130.0;
          v47.fields.y = v21->upVector.fields.y * 130.0;
          v47.fields.x = v21->upVector.fields.x * 130.0;
          UnityEngine_Transform__set_localPosition(v20, v47, 0);
          description = (System_String_o *)this->fields.svtFaceIcon;
          if ( description )
          {
            description = (System_String_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)description,
                                               0);
            v22 = (UnityEngine_Transform_o *)description;
            if ( !byte_4CC0D11 )
            {
              description = (System_String_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
              byte_4CC0D11 = 1;
            }
            if ( v22 )
            {
              v23 = UnityEngine_Vector3_TypeInfo->static_fields;
              v48.fields.z = v23->upVector.fields.z * -54.0;
              v48.fields.y = v23->upVector.fields.y * -54.0;
              v48.fields.x = v23->upVector.fields.x * -54.0;
              UnityEngine_Transform__set_localPosition(v22, v48, 0);
              goto LABEL_39;
            }
          }
        }
      }
    }
LABEL_43:
    sub_1C71608(description, v10);
  }
  v24 = sub_1C71458(string___TypeInfo, 2);
  v46 = svtCostumeEntity->fields.svtId;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
  v45 = svtCostumeEntity->fields.id;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
  description = System_String__Format_64073032((System_String_o *)StringLiteral_3848/*"COSTUME_OPEN_WARNING_{0}_{1}"*/, v25, v26, 0);
  if ( !v24 )
    goto LABEL_43;
  if ( !*(_DWORD *)(v24 + 24)
    || (*(_QWORD *)(v24 + 32) = description,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v24 + 32), (int32_t)description, v27, v28, v29, v30, v31, v32),
        *(_DWORD *)(v24 + 24) <= 1u) )
  {
    sub_1C71610(description);
  }
  v39 = StringLiteral_3847/*"COSTUME_OPEN_WARNING"*/;
  *(_QWORD *)(v24 + 40) = StringLiteral_3847/*"COSTUME_OPEN_WARNING"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v24 + 40), v39, v33, v34, v35, v36, v37, v38);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v24, 0);
  v41 = 120;
  if ( v15 )
    v41 = 160;
  v42 = *(UILabel_o **)((char *)&this->klass + v41);
  description = System_String__Format(IfExists, (Il2CppObject *)svtCostumeEntity->fields.name, 0);
  if ( !v42 )
    goto LABEL_43;
  UILabel__set_text(v42, description, 0);
LABEL_39:
  v43 = 136;
  if ( v15 )
    v43 = 168;
  v44 = *(ServantFaceIconComponent_o **)((char *)&this->klass + v43);
  if ( !v44 )
    goto LABEL_43;
  ServantFaceIconComponent__Set_41285296(v44, userSvtColEntity, svtCostumeEntity, 0, 0, 0, 0);
  ServantFaceIconComponent__SetDispRaritySprite(v44, 0, 0);
  ServantFaceIconComponent__SetDispLimitCountIcon(v44, 0, 0);
}


void CostumeOpenConfirmDialog___OnClickCloseButton_b__15_0(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.closeAction, 0);
  CostumeOpenConfirmDialog__Init(this, v3);
}