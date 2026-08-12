void CostumeOpenConfirmDialog___ctor(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596CEB9 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596CEB9 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CostumeOpenConfirmDialog__Init(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *closeLabel; // x19

  if ( (byte_596CEB6 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CEB6 = 1;
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
LABEL_10:
    sub_2213CDC(titleLabel, v3);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0);
}


void CostumeOpenConfirmDialog__OnClickCloseButton(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_596CEB8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CostumeOpenConfirmDialog_OnClickCloseButton__);
    sub_2213A60(&Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__15_0__);
    byte_596CEB8 = 1;
  }
  v3 = Method_CostumeOpenConfirmDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_CostumeOpenConfirmDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_CostumeOpenConfirmDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__15_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void CostumeOpenConfirmDialog__Open(
        CostumeOpenConfirmDialog_o *this,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
  this->fields.closeAction = closeAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeAction,
    (int32_t)closeAction,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v11; // x2
  int32_t svtId; // w24
  BalanceConfig_c *v13; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t id; // w24
  _BOOL4 v16; // w22
  __int64 v17; // x1
  __int64 v18; // x2
  UILabel_o *titleLabel; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x8
  UILabel_o *v23; // x24
  System_String_o *v24; // x0
  UnityEngine_Transform_o *v25; // x23
  float32x2_t *v26; // x8
  UnityEngine_Transform_o *v27; // x23
  float32x2_t *v28; // x8
  __int64 v29; // x23
  Il2CppObject *v30; // x24
  Il2CppObject *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  int32_t v44; // w1
  __int64 v45; // x1
  __int64 v46; // x2
  System_String_o *IfExists; // x0
  __int64 v48; // x8
  UILabel_o *v49; // x23
  __int64 v50; // x8
  ServantFaceIconComponent_o *v51; // x21
  int32_t v52; // [xsp+8h] [xbp-48h] BYREF
  int32_t v53; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v54; // 0:kr00_12.12
  UnityEngine_Vector3_o v55; // 0:kr14_12.12

  if ( (byte_596CEB7 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_3994/*"COSTUME_OPEN_MSG"*/);
    sub_2213A60(&StringLiteral_3997/*"COSTUME_OPEN_WARNING_{0}_{1}"*/);
    sub_2213A60(&StringLiteral_3996/*"COSTUME_OPEN_WARNING"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_3995/*"COSTUME_OPEN_TITLE"*/);
    byte_596CEB7 = 1;
  }
  CostumeOpenConfirmDialog__Init(this, (const MethodInfo *)userSvtColEntity);
  if ( !svtCostumeEntity )
    goto LABEL_43;
  svtId = svtCostumeEntity->fields.svtId;
  v13 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10, v11);
    v13 = BalanceConfig_TypeInfo;
  }
  static_fields = v13->static_fields;
  if ( svtId == static_fields->ServantIdMashu1 )
  {
    id = svtCostumeEntity->fields.id;
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, v10, v11);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v16 = id == static_fields->SpecialLimitCountPLD;
  }
  else
  {
    v16 = 0;
  }
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.message, !v16, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.description, !v16, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.svtFaceIcon, !v16, 0);
  GameObjectHelper__SetActiveSafely(this->fields.specialObj, v16, 0);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
  description = LocalizationManager__Get((System_String_o *)StringLiteral_3995/*"COSTUME_OPEN_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_43;
  UILabel__set_text(titleLabel, description, 0);
  v22 = 112;
  if ( v16 )
    v22 = 152;
  v23 = *(UILabel_o **)((char *)&this->klass + v22);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3994/*"COSTUME_OPEN_MSG"*/, 0);
  description = System_String__Format_75697880(
                  v24,
                  (Il2CppObject *)svtName,
                  (Il2CppObject *)svtCostumeEntity->fields.name,
                  0);
  if ( !v23 )
    goto LABEL_43;
  UILabel__set_text(v23, description, 0);
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
        v25 = (UnityEngine_Transform_o *)description;
        if ( !byte_5969AE8 )
        {
          description = (System_String_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE8 = 1;
        }
        if ( v25 )
        {
          v26 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
          *(float32x2_t *)&v54.fields.x = vmul_f32(v26[3], vdup_n_s32(0x43020000u));
          v54.fields.z = v26[4].n64_f32[0] * 130.0;
          UnityEngine_Transform__set_localPosition(v25, v54, 0);
          description = (System_String_o *)this->fields.svtFaceIcon;
          if ( description )
          {
            description = (System_String_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)description,
                                               0);
            v27 = (UnityEngine_Transform_o *)description;
            if ( !byte_5969AE8 )
            {
              description = (System_String_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
              byte_5969AE8 = 1;
            }
            if ( v27 )
            {
              v28 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
              *(float32x2_t *)&v55.fields.x = vmul_f32(v28[3], vdup_n_s32(0xC2580000));
              v55.fields.z = v28[4].n64_f32[0] * -54.0;
              UnityEngine_Transform__set_localPosition(v27, v55, 0);
              goto LABEL_39;
            }
          }
        }
      }
    }
LABEL_43:
    sub_2213CDC(description, v10);
  }
  v29 = sub_2213B20(string___TypeInfo, 2);
  v53 = svtCostumeEntity->fields.svtId;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v53);
  v52 = svtCostumeEntity->fields.id;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v52);
  description = System_String__Format_75697880((System_String_o *)StringLiteral_3997/*"COSTUME_OPEN_WARNING_{0}_{1}"*/, v30, v31, 0);
  if ( !v29 )
    goto LABEL_43;
  if ( !*(_DWORD *)(v29 + 24)
    || (*(_QWORD *)(v29 + 32) = description,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 32), (int32_t)description, v32, v33, v34, v35, v36, v37),
        (*(_DWORD *)(v29 + 24) & 0xFFFFFFFE) == 0) )
  {
    sub_2213CE4(description);
  }
  v44 = StringLiteral_3996/*"COSTUME_OPEN_WARNING"*/;
  *(_QWORD *)(v29 + 40) = StringLiteral_3996/*"COSTUME_OPEN_WARNING"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 40), v44, v38, v39, v40, v41, v42, v43);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45, v46);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v29, 0);
  v48 = 120;
  if ( v16 )
    v48 = 160;
  v49 = *(UILabel_o **)((char *)&this->klass + v48);
  description = System_String__Format(IfExists, (Il2CppObject *)svtCostumeEntity->fields.name, 0);
  if ( !v49 )
    goto LABEL_43;
  UILabel__set_text(v49, description, 0);
LABEL_39:
  v50 = 136;
  if ( v16 )
    v50 = 168;
  v51 = *(ServantFaceIconComponent_o **)((char *)&this->klass + v50);
  if ( !v51 )
    goto LABEL_43;
  ServantFaceIconComponent__Set_48053060(v51, userSvtColEntity, svtCostumeEntity, 0, 0, 0, 0);
  ServantFaceIconComponent__SetDispRaritySprite(v51, 0, 0);
  ServantFaceIconComponent__SetDispLimitCountIcon(v51, 0, 0);
}


void CostumeOpenConfirmDialog___OnClickCloseButton_b__15_0(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.closeAction, 0);
  CostumeOpenConfirmDialog__Init(this, v3);
}