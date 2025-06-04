void __fastcall CostumeOpenConfirmDialog___ctor(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4AFE984 & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4AFE984 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CostumeOpenConfirmDialog__Init(CostumeOpenConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x19

  if ( (byte_4AFE981 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_3648/*"COMMON_CONFIRM_CLOSE"*/, v3);
    sub_1BC3008(&StringLiteral_1/*""*/, v4);
    byte_4AFE981 = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3648/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_10:
    sub_1BC3264(titleLabel, v5);
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
  System_Action_o *v7; // x20

  if ( (byte_4AFE983 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_CostumeOpenConfirmDialog_OnClickCloseButton__, v3);
    sub_1BC3008(&Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__15_0__, v4);
    byte_4AFE983 = 1;
  }
  v5 = Method_CostumeOpenConfirmDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_CostumeOpenConfirmDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BC3020(Method_CostumeOpenConfirmDialog_OnClickCloseButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  v7 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CostumeOpenConfirmDialog__OnClickCloseButton_b__15_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall CostumeOpenConfirmDialog__Open(
        CostumeOpenConfirmDialog_o *this,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  this->fields.closeAction = closeAction;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeAction, (int32_t)closeAction, v5, v6);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_o *description; // x0
  __int64 v18; // x1
  int32_t svtId; // w24
  BalanceConfig_c *v20; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t id; // w24
  _BOOL4 v23; // w22
  UILabel_o *titleLabel; // x24
  __int64 v25; // x8
  UILabel_o *v26; // x24
  System_String_o *v27; // x0
  UnityEngine_Transform_o *v28; // x23
  struct UnityEngine_Vector3_StaticFields *v29; // x8
  UnityEngine_Transform_o *v30; // x23
  struct UnityEngine_Vector3_StaticFields *v31; // x8
  __int64 v32; // x23
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x24
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  __int64 v41; // x2
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x3
  int32_t v44; // w1
  System_String_o *IfExists; // x0
  __int64 v46; // x8
  UILabel_o *v47; // x23
  __int64 v48; // x8
  ServantFaceIconComponent_o *v49; // x21
  int32_t v50; // [xsp+8h] [xbp-48h] BYREF
  int32_t v51; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFE982 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, userSvtColEntity);
    sub_1BC3008(&int_TypeInfo, v9);
    sub_1BC3008(&LocalizationManager_TypeInfo, v10);
    sub_1BC3008(&string___TypeInfo, v11);
    sub_1BC3008(&StringLiteral_3811/*"COSTUME_OPEN_MSG"*/, v12);
    sub_1BC3008(&StringLiteral_3814/*"COSTUME_OPEN_WARNING_{0}_{1}"*/, v13);
    sub_1BC3008(&StringLiteral_3813/*"COSTUME_OPEN_WARNING"*/, v14);
    sub_1BC3008(&StringLiteral_1/*""*/, v15);
    sub_1BC3008(&StringLiteral_3812/*"COSTUME_OPEN_TITLE"*/, v16);
    byte_4AFE982 = 1;
  }
  CostumeOpenConfirmDialog__Init(this, (const MethodInfo *)userSvtColEntity);
  if ( !svtCostumeEntity )
    goto LABEL_43;
  svtId = svtCostumeEntity->fields.svtId;
  v20 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  static_fields = v20->static_fields;
  if ( svtId == static_fields->ServantIdMashu1 )
  {
    id = svtCostumeEntity->fields.id;
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v23 = id == static_fields->SpecialLimitCountPLD;
  }
  else
  {
    v23 = 0;
  }
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.message, !v23, 0LL);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.description, !v23, 0LL);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.svtFaceIcon, !v23, 0LL);
  GameObjectHelper__SetActiveSafely(this->fields.specialObj, v23, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  description = LocalizationManager__Get((System_String_o *)StringLiteral_3812/*"COSTUME_OPEN_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_43;
  UILabel__set_text(titleLabel, description, 0LL);
  v25 = 112LL;
  if ( v23 )
    v25 = 152LL;
  v26 = *(UILabel_o **)((char *)&this->klass + v25);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COSTUME_OPEN_MSG"*/, 0LL);
  description = System_String__Format_62389940(
                  v27,
                  (Il2CppObject *)svtName,
                  (Il2CppObject *)svtCostumeEntity->fields.name,
                  0LL);
  if ( !v26 )
    goto LABEL_43;
  UILabel__set_text(v26, description, 0LL);
  if ( ServantCostumeEntity__checkFlag(svtCostumeEntity, 128, 0LL) )
  {
    description = (System_String_o *)this->fields.description;
    if ( description )
    {
      UILabel__set_text((UILabel_o *)description, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      description = (System_String_o *)this->fields.message;
      if ( description )
      {
        description = (System_String_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)description,
                                           0LL);
        v28 = (UnityEngine_Transform_o *)description;
        if ( !byte_4AFBDB9 )
        {
          description = (System_String_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v18);
          byte_4AFBDB9 = 1;
        }
        if ( v28 )
        {
          v29 = UnityEngine_Vector3_TypeInfo->static_fields;
          v52.fields.z = v29->upVector.fields.z * 130.0;
          v52.fields.y = v29->upVector.fields.y * 130.0;
          v52.fields.x = v29->upVector.fields.x * 130.0;
          UnityEngine_Transform__set_localPosition(v28, v52, 0LL);
          description = (System_String_o *)this->fields.svtFaceIcon;
          if ( description )
          {
            description = (System_String_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)description,
                                               0LL);
            v30 = (UnityEngine_Transform_o *)description;
            if ( !byte_4AFBDB9 )
            {
              description = (System_String_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v18);
              byte_4AFBDB9 = 1;
            }
            if ( v30 )
            {
              v31 = UnityEngine_Vector3_TypeInfo->static_fields;
              v53.fields.z = v31->upVector.fields.z * -54.0;
              v53.fields.y = v31->upVector.fields.y * -54.0;
              v53.fields.x = v31->upVector.fields.x * -54.0;
              UnityEngine_Transform__set_localPosition(v30, v53, 0LL);
              goto LABEL_39;
            }
          }
        }
      }
    }
LABEL_43:
    sub_1BC3264(description, v18);
  }
  v32 = sub_1BC30B0(string___TypeInfo, 2LL);
  v51 = svtCostumeEntity->fields.svtId;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v33, v34, v35);
  v50 = svtCostumeEntity->fields.id;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v37, v38, v39);
  description = System_String__Format_62389940((System_String_o *)StringLiteral_3814/*"COSTUME_OPEN_WARNING_{0}_{1}"*/, v36, v40, 0LL);
  if ( !v32 )
    goto LABEL_43;
  if ( !*(_DWORD *)(v32 + 24)
    || (*(_QWORD *)(v32 + 32) = description,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v32 + 32), (int32_t)description, v41, v42),
        *(_DWORD *)(v32 + 24) <= 1u) )
  {
    sub_1BC326C(description, v18, v41);
  }
  v44 = StringLiteral_3813/*"COSTUME_OPEN_WARNING"*/;
  *(_QWORD *)(v32 + 40) = StringLiteral_3813/*"COSTUME_OPEN_WARNING"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v32 + 40), v44, v41, v43);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IfExists = LocalizationManager__GetIfExists((System_String_array *)v32, 0LL);
  v46 = 120LL;
  if ( v23 )
    v46 = 160LL;
  v47 = *(UILabel_o **)((char *)&this->klass + v46);
  description = System_String__Format(IfExists, (Il2CppObject *)svtCostumeEntity->fields.name, 0LL);
  if ( !v47 )
    goto LABEL_43;
  UILabel__set_text(v47, description, 0LL);
LABEL_39:
  v48 = 136LL;
  if ( v23 )
    v48 = 168LL;
  v49 = *(ServantFaceIconComponent_o **)((char *)&this->klass + v48);
  if ( !v49 )
    goto LABEL_43;
  ServantFaceIconComponent__Set_40039296(v49, userSvtColEntity, svtCostumeEntity, 0LL, 0LL, 0, 0LL);
  ServantFaceIconComponent__SetDispRaritySprite(v49, 0, 0LL);
  ServantFaceIconComponent__SetDispLimitCountIcon(v49, 0, 0LL);
}


void __fastcall CostumeOpenConfirmDialog___OnClickCloseButton_b__15_0(
        CostumeOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.closeAction, 0LL);
  CostumeOpenConfirmDialog__Init(this, v3);
}