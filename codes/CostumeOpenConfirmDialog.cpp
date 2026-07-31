void CostumeOpenConfirmDialog___ctor(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5934D8A & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5934D8A = 1;
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

  if ( (byte_5934D87 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934D87 = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
LABEL_10:
    sub_21FFECC(titleLabel, v3);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0);
}


void CostumeOpenConfirmDialog__OnClickCloseButton(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_5934D89 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CostumeOpenConfirmDialog_OnClickCloseButton__);
    sub_21FFC50(&Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__15_0__);
    byte_5934D89 = 1;
  }
  v3 = Method_CostumeOpenConfirmDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_CostumeOpenConfirmDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_CostumeOpenConfirmDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeAction,
    (int32_t)closeAction,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


// local variable allocation has failed, the output may be wrong!
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
  unsigned __int64 v27; // d0 OVERLAPPED
  float v28; // s2
  int v29; // s1
  UnityEngine_Transform_o *v30; // x23
  float32x2_t *v31; // x8
  unsigned __int64 v32; // d0 OVERLAPPED
  float v33; // s2
  int v34; // s1
  __int64 v35; // x23
  Il2CppObject *v36; // x24
  Il2CppObject *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  int32_t v50; // w1
  __int64 v51; // x1
  __int64 v52; // x2
  System_String_o *IfExists; // x0
  __int64 v54; // x8
  UILabel_o *v55; // x23
  __int64 v56; // x8
  ServantFaceIconComponent_o *v57; // x21
  int32_t v58; // [xsp+8h] [xbp-48h] BYREF
  int32_t v59; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5934D88 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_3989/*"COSTUME_OPEN_MSG"*/);
    sub_21FFC50(&StringLiteral_3992/*"COSTUME_OPEN_WARNING_{0}_{1}"*/);
    sub_21FFC50(&StringLiteral_3991/*"COSTUME_OPEN_WARNING"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_3990/*"COSTUME_OPEN_TITLE"*/);
    byte_5934D88 = 1;
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
  description = LocalizationManager__Get((System_String_o *)StringLiteral_3990/*"COSTUME_OPEN_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_43;
  UILabel__set_text(titleLabel, description, 0);
  v22 = 112;
  if ( v16 )
    v22 = 152;
  v23 = *(UILabel_o **)((char *)&this->klass + v22);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3989/*"COSTUME_OPEN_MSG"*/, 0);
  description = System_String__Format_75484576(
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
        if ( !byte_5931948 )
        {
          description = (System_String_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931948 = 1;
        }
        if ( v25 )
        {
          v26 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
          v27 = vmul_f32(v26[3], vdup_n_s32(0x43020000u)).n64_u64[0];
          v28 = v26[4].n64_f32[0] * 130.0;
          v29 = HIDWORD(v27);
          UnityEngine_Transform__set_localPosition(v25, *(UnityEngine_Vector3_o *)&v27, 0);
          description = (System_String_o *)this->fields.svtFaceIcon;
          if ( description )
          {
            description = (System_String_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)description,
                                               0);
            v30 = (UnityEngine_Transform_o *)description;
            if ( !byte_5931948 )
            {
              description = (System_String_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
              byte_5931948 = 1;
            }
            if ( v30 )
            {
              v31 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
              v32 = vmul_f32(v31[3], vdup_n_s32(0xC2580000)).n64_u64[0];
              v33 = v31[4].n64_f32[0] * -54.0;
              v34 = HIDWORD(v32);
              UnityEngine_Transform__set_localPosition(v30, *(UnityEngine_Vector3_o *)&v32, 0);
              goto LABEL_39;
            }
          }
        }
      }
    }
LABEL_43:
    sub_21FFECC(description, v10);
  }
  v35 = sub_21FFD10(string___TypeInfo, 2);
  v59 = svtCostumeEntity->fields.svtId;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v59);
  v58 = svtCostumeEntity->fields.id;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v58);
  description = System_String__Format_75484576((System_String_o *)StringLiteral_3992/*"COSTUME_OPEN_WARNING_{0}_{1}"*/, v36, v37, 0);
  if ( !v35 )
    goto LABEL_43;
  if ( !*(_DWORD *)(v35 + 24)
    || (*(_QWORD *)(v35 + 32) = description,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v35 + 32), (int32_t)description, v38, v39, v40, v41, v42, v43),
        (*(_DWORD *)(v35 + 24) & 0xFFFFFFFE) == 0) )
  {
    sub_21FFED4(description);
  }
  v50 = StringLiteral_3991/*"COSTUME_OPEN_WARNING"*/;
  *(_QWORD *)(v35 + 40) = StringLiteral_3991/*"COSTUME_OPEN_WARNING"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v35 + 40), v50, v44, v45, v46, v47, v48, v49);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51, v52);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v35, 0);
  v54 = 120;
  if ( v16 )
    v54 = 160;
  v55 = *(UILabel_o **)((char *)&this->klass + v54);
  description = System_String__Format(IfExists, (Il2CppObject *)svtCostumeEntity->fields.name, 0);
  if ( !v55 )
    goto LABEL_43;
  UILabel__set_text(v55, description, 0);
LABEL_39:
  v56 = 136;
  if ( v16 )
    v56 = 168;
  v57 = *(ServantFaceIconComponent_o **)((char *)&this->klass + v56);
  if ( !v57 )
    goto LABEL_43;
  ServantFaceIconComponent__Set_48021764(v57, userSvtColEntity, svtCostumeEntity, 0, 0, 0, 0);
  ServantFaceIconComponent__SetDispRaritySprite(v57, 0, 0);
  ServantFaceIconComponent__SetDispLimitCountIcon(v57, 0, 0);
}


void CostumeOpenConfirmDialog___OnClickCloseButton_b__15_0(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.closeAction, 0);
  CostumeOpenConfirmDialog__Init(this, v3);
}