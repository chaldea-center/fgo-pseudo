void __fastcall ServantStatusListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ServantStatusListViewItemDrawSkill_StaticFields *static_fields; // x8

  if ( (byte_49F929B & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItemDrawSkill_TypeInfo, v1);
    byte_49F929B = 1;
  }
  static_fields = ServantStatusListViewItemDrawSkill_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DETAIL_FONT_SIZE = 0x1F400000012LL;
  static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawSkill___ctor(
        ServantStatusListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BalanceConfig_c *v8; // x0
  struct UnityEngine_GameObject_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  struct SkillIconComponent_array *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct UISprite_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct UILabel_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct UILabel_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  struct ServantSkillStrengthStatus_array *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  struct UILabel_array *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_49F929A & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1B640C8(&ServantSkillStrengthStatus___TypeInfo, v4);
    sub_1B640C8(&SkillIconComponent___TypeInfo, v5);
    sub_1B640C8(&UILabel___TypeInfo, v6);
    sub_1B640C8(&UISprite___TypeInfo, v7);
    byte_49F929A = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (struct UnityEngine_GameObject_array *)sub_1B64170(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v8->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skillBaseList, (int32_t)v9, v10, v11);
  v12 = (struct SkillIconComponent_array *)sub_1B64170(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skillIconList, (int32_t)v12, v13, v14);
  v15 = (struct UISprite_array *)sub_1B64170(
                                   UISprite___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.chargeTitleSpriteList = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.chargeTitleSpriteList, (int32_t)v15, v16, v17);
  v18 = (struct UILabel_array *)sub_1B64170(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.chargeDataLabelList = v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.chargeDataLabelList, (int32_t)v18, v19, v20);
  v21 = (struct UILabel_array *)sub_1B64170(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillNameLabelList = v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skillNameLabelList, (int32_t)v21, v22, v23);
  v24 = (struct ServantSkillStrengthStatus_array *)sub_1B64170(
                                                     ServantSkillStrengthStatus___TypeInfo,
                                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillStrengthStatus = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skillStrengthStatus, (int32_t)v24, v25, v26);
  v27 = (struct UILabel_array *)sub_1B64170(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skillExplanationLabelList, (int32_t)v27, v28, v29);
  this->fields.transformNameAddHeight = 34;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawSkill__Awake(
        ServantStatusListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  ServantStatusListViewItemDrawSkill_o *v3; // x19
  __int64 v4; // x1
  float v5; // s1
  struct UnityEngine_GameObject_array *v6; // x8
  float v7; // s8
  float v8; // s1
  unsigned int v9; // w9
  struct UISprite_o *baseSprite; // x9
  int v11; // w8
  int v12; // w10
  int v13; // w20
  float v14; // s1
  float v15; // s0
  float v16; // s1
  float v17; // s2
  struct UnityEngine_GameObject_array *v18; // x8
  int v19; // w9
  float v20; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_27;
  v3 = this;
  if ( (int)skillBaseList->max_length >= 2 )
  {
    this = (ServantStatusListViewItemDrawSkill_o *)skillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_27;
    this = (ServantStatusListViewItemDrawSkill_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_27;
    *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v6 = v3->fields.skillBaseList;
    if ( !v6 )
      goto LABEL_27;
    if ( v6->max_length <= 1 )
      goto LABEL_28;
    this = (ServantStatusListViewItemDrawSkill_o *)v6->m_Items[1];
    if ( !this )
      goto LABEL_27;
    v7 = v5;
    this = (ServantStatusListViewItemDrawSkill_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_27;
    *(UnityEngine_Vector3_o *)(&v8 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    skillBaseList = v3->fields.skillBaseList;
    v9 = (float)(v7 - v8) == INFINITY ? 0x80000000 : (int)(float)(v7 - v8);
    v3->fields.skillPitch = v9;
    if ( !skillBaseList )
      goto LABEL_27;
  }
  baseSprite = v3->fields.baseSprite;
  v11 = v3->fields.skillPitch * skillBaseList->max_length;
  v12 = v11 >= 0 ? v11 : v11 + 1;
  if ( !baseSprite )
    goto LABEL_27;
  this = (ServantStatusListViewItemDrawSkill_o *)v3->fields.titleSprite;
  v13 = v11 - (v12 & 0xFFFFFFFE) + v11;
  v14 = (float)(baseSprite->fields.mHeight - v13);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v14;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_27;
  this = (ServantStatusListViewItemDrawSkill_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_27;
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v18 = v3->fields.skillBaseList;
  v19 = v13 >= 0 ? v13 : v13 + 1;
  v20 = (float)(v19 >> 1);
  v3->fields.titleBasePosition.fields.x = v15;
  v3->fields.titleBasePosition.fields.y = v16 - v20;
  v3->fields.titleBasePosition.fields.z = v17;
  if ( !v18 )
LABEL_27:
    sub_1B64324(this);
  if ( !v18->max_length )
LABEL_28:
    sub_1B6432C(this, v4);
  this = (ServantStatusListViewItemDrawSkill_o *)v18->m_Items[0];
  if ( !this )
    goto LABEL_27;
  this = (ServantStatusListViewItemDrawSkill_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_27;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.skillBasePosition.fields.x = localPosition.fields.x;
  v3->fields.skillBasePosition.fields.y = localPosition.fields.y - v20;
  v3->fields.skillBasePosition.fields.z = localPosition.fields.z;
}


int32_t __fastcall ServantStatusListViewItemDrawSkill__GetKind(
        ServantStatusListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  return 4;
}


void __fastcall ServantStatusListViewItemDrawSkill__SetItem(
        ServantStatusListViewItemDrawSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 svtEntity; // x0
  UILabel_o *explanationLabel; // x21
  System_String_o **v17; // x8
  System_String_o *v18; // x22
  int32_t SvtId; // w21
  __int64 v20; // x1
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v22; // x24
  __int64 v23; // x23
  __int64 v24; // x9
  unsigned __int64 max_length; // x11
  SkillInfo_o *v26; // x22
  int64_t UserId; // x0
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x21
  int32_t transformNameAddHeight; // w27
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  char v32; // w25
  __int64 v33; // x29
  unsigned __int64 v34; // x23
  struct UILabel_array *skillExplanationLabelList; // x9
  __int64 v36; // x8
  ServantStatusListViewItemDrawSkill_c *v37; // x0
  UILabel_o *v38; // x21
  System_String_o *v39; // x22
  struct UILabel_array *v40; // x8
  __int64 v41; // x8
  int v42; // w10
  int32_t skillPitch; // w8
  int v44; // w21
  int32_t v45; // w9
  int v46; // w21
  UserServantEntity_o *userSvtEntity; // x0
  __int64 v48; // x26
  signed int v49; // w9
  int v50; // w10
  SkillInfo_o *v51; // x11
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  float v56; // s8
  int32_t v57; // w1
  int32_t v58; // w1
  int v59; // w20
  float v60; // s8
  float v61; // s10
  float v62; // s9
  int v63; // w20
  struct UnityEngine_GameObject_array *v64; // x8
  float v65; // s8
  float v66; // s9
  signed int v67; // w25
  float v68; // s10
  unsigned int v69; // w10
  __int64 v70; // x23
  SkillInfo_o *v71; // x26
  struct UnityEngine_GameObject_array *v72; // x8
  float v73; // s11
  struct SkillIconComponent_array *v74; // x8
  struct UISprite_array *v75; // x8
  struct UILabel_array *v76; // x8
  UILabel_o *v77; // x21
  System_String_o *v78; // x1
  struct UISprite_array *chargeTitleSpriteList; // x8
  struct UILabel_array *chargeDataLabelList; // x8
  struct UILabel_array *v81; // x8
  struct UILabel_array *skillNameLabelList; // x8
  struct UILabel_array *v83; // x8
  struct UILabel_array *v84; // x8
  struct ServantSkillStrengthStatus_array *skillStrengthStatus; // x8
  int32_t lv; // w21
  UnityEngine_Object_o *v87; // x20
  struct ServantSkillStrengthStatus_array *v88; // x8
  UnityEngine_Object_o *v89; // x20
  struct UILabel_array *v90; // x8
  UnityEngine_Component_o *v91; // x8
  System_String_o *v92; // x20
  UnityEngine_Transform_o *transform; // x0
  struct ServantSkillStrengthStatus_array *v94; // x21
  int32_t v95; // w2
  int32_t v96; // w3
  __int64 v97; // x20
  Il2CppClass **v98; // x0
  struct ServantSkillStrengthStatus_array *v99; // x8
  struct UILabel_array *v100; // x9
  struct ServantSkillStrengthStatus_array *v101; // x8
  UnityEngine_Object_o *gameObject; // x20
  struct UILabel_array *v103; // x8
  UILabel_o *v104; // x8
  int32_t mHeight; // w20
  int32_t v106; // w9
  int v107; // w22
  int v108; // w8
  __int64 v109; // x0
  int v110; // [xsp+4h] [xbp-ACh]
  SkillInfo_array *v111; // [xsp+10h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-98h] BYREF
  UnityEngine_Vector2Int_o v113; // 0:x6.8
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F9299 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, item);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&ServantSkillStrengthStatus_TypeInfo, v10);
    sub_1B640C8(&ServantStatusListViewItemDrawSkill_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_11824/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v12);
    sub_1B640C8(&StringLiteral_11822/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/, v13);
    sub_1B640C8(&StringLiteral_1/*""*/, v14);
    byte_49F9299 = 1;
  }
  v111 = 0LL;
  skillInfoList = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  svtEntity = (__int64)item->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_181;
  explanationLabel = this->fields.explanationLabel;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0LL) )
    v17 = (System_String_o **)&StringLiteral_11824/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
  else
    v17 = (System_String_o **)&StringLiteral_11822/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/;
  v18 = *v17;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  svtEntity = (__int64)LocalizationManager__Get(v18, 0LL);
  if ( !explanationLabel )
    goto LABEL_181;
  UILabel__set_text(explanationLabel, (System_String_o *)svtEntity, 0LL);
  SvtId = ServantStatusListViewItem__GetSvtId(item, 1, 0LL);
  ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 1, 0LL);
  if ( !skillInfoList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_181;
  v22 = 0LL;
  v23 = 4LL;
  while ( 1 )
  {
    v24 = v23 - 4;
    if ( v23 - 4 >= (int)skillIconList->max_length )
      break;
    if ( skillInfoList )
    {
      max_length = skillInfoList->max_length;
      if ( v24 < (int)max_length )
      {
        if ( v24 >= max_length )
LABEL_192:
          sub_1B6432C(svtEntity, v20);
        v26 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + v23);
        if ( v26 )
        {
          if ( v26->fields.id >= 1 )
          {
            UserId = ServantStatusListViewItem__get_UserId(item, 0LL);
            SkillInfo__OverwriteNextSkill(v26, UserId, SvtId, 0LL);
            skillIconList = this->fields.skillIconList;
            v22 = (unsigned int)(v23 - 3);
          }
        }
      }
      ++v23;
      if ( skillIconList )
        continue;
    }
    goto LABEL_181;
  }
  svtEntity = (__int64)this->fields.transformNameSprite;
  if ( !svtEntity )
    goto LABEL_181;
  IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
  svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
  if ( !svtEntity )
    goto LABEL_181;
  if ( IsTransformServant_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
    transformNameLabel = this->fields.transformNameLabel;
    svtEntity = (__int64)ServantStatusListViewItem__GetTransformName(item, 0LL);
    if ( !transformNameLabel )
      goto LABEL_181;
    UILabel__set_text(transformNameLabel, (System_String_o *)svtEntity, 0LL);
    transformNameAddHeight = this->fields.transformNameAddHeight;
    v110 = -transformNameAddHeight;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
    transformNameAddHeight = 0;
    v110 = 0;
  }
  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_181;
  v32 = 0;
  v33 = 4LL;
  while ( 1 )
  {
    v34 = v33 - 4;
    if ( v33 - 4 >= (int)skillBaseList->max_length )
      break;
    if ( (__int64)v34 < (int)v22 )
    {
      if ( !skillInfoList )
        goto LABEL_181;
      if ( v34 >= skillInfoList->max_length )
        goto LABEL_192;
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_181;
      if ( v34 >= skillExplanationLabelList->max_length )
        goto LABEL_192;
      v36 = *((_QWORD *)&skillInfoList->obj.klass + v33);
      if ( !v36 )
        goto LABEL_181;
      v37 = ServantStatusListViewItemDrawSkill_TypeInfo;
      v38 = (UILabel_o *)*((_QWORD *)&skillExplanationLabelList->obj.klass + v33);
      v39 = *(System_String_o **)(v36 + 40);
      if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        v37 = ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      svtEntity = WrapControlText__textBBCodeAdjust(
                    v38,
                    v39,
                    v37->static_fields->DETAIL_FONT_SIZE,
                    v37->static_fields->DETAIL_FONT_SIZE,
                    v37->static_fields->MAX_HEIGHT,
                    0LL);
      v40 = this->fields.skillExplanationLabelList;
      if ( !v40 )
        goto LABEL_181;
      if ( v34 >= v40->max_length )
        goto LABEL_192;
      v41 = *((_QWORD *)&v40->obj.klass + v33);
      if ( !v41 )
        goto LABEL_181;
      v42 = *(_DWORD *)(v41 + 172);
      skillPitch = this->fields.skillPitch;
      v44 = v42 + ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v44 >= skillPitch )
      {
        svtEntity = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          svtEntity = (__int64)BalanceConfig_TypeInfo;
        }
        transformNameAddHeight += v44;
        if ( v34 == *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 32LL) - 1 )
          v32 |= v44 - this->fields.skillPitch > 10;
      }
      else
      {
        transformNameAddHeight += skillPitch;
      }
    }
    skillBaseList = this->fields.skillBaseList;
    ++v33;
    if ( !skillBaseList )
      goto LABEL_181;
  }
  v45 = transformNameAddHeight >= 0 ? transformNameAddHeight : transformNameAddHeight + 1;
  v46 = transformNameAddHeight - (v45 & 0xFFFFFFFE) + transformNameAddHeight;
  if ( item->fields._IsDisplayCombineButton_k__BackingField )
  {
    userSvtEntity = item->fields.userSvtEntity;
    v48 = v22;
    if ( userSvtEntity && !UserServantEntity__IsLeave(userSvtEntity, 0LL) )
    {
      ServantStatusListViewItem__GetSkillInfo(item, &v111, 0, 0LL);
      if ( !v111 )
        goto LABEL_181;
      v49 = v111->max_length;
      if ( v49 >= 1 )
      {
        v50 = 0;
        while ( 1 )
        {
          if ( v49 == v50 )
            goto LABEL_192;
          v51 = v111->m_Items[v50];
          if ( !v51 )
            goto LABEL_181;
          if ( v51->fields.isUse && v51->fields.lv <= 9 )
            break;
          if ( v49 == ++v50 )
            goto LABEL_68;
        }
        svtEntity = (__int64)this->fields.reinforceObject;
        if ( (v32 & 1) != 0 )
          v107 = 62;
        else
          v107 = 50;
        if ( !svtEntity )
          goto LABEL_181;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        svtEntity = (__int64)this->fields.reinforceButton;
        if ( !svtEntity )
          goto LABEL_181;
        *(_BYTE *)(svtEntity + 97) = 1;
        v46 += v107;
        UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
        if ( v46 >= 0 )
          v108 = v46;
        else
          v108 = v46 + 1;
        GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v108 >> 1), 0LL);
      }
    }
  }
  else
  {
    v48 = v22;
  }
LABEL_68:
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v56 = y + (float)v46;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    svtEntity = (__int64)this->fields.baseCollider;
    if ( !svtEntity )
      goto LABEL_181;
    v114.fields.x = x;
    v114.fields.y = v56;
    v114.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)svtEntity, v114, 0LL);
  }
  svtEntity = (__int64)this->fields.baseSprite;
  if ( !svtEntity )
    goto LABEL_181;
  v57 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)svtEntity, v57, 0LL);
  svtEntity = (__int64)this->fields.baseSprite;
  if ( !svtEntity )
    goto LABEL_181;
  v58 = v56 == INFINITY ? 0x80000000 : (int)v56;
  UIWidget__set_height((UIWidget_o *)svtEntity, v58, 0LL);
  svtEntity = (__int64)this->fields.titleSprite;
  v59 = v46 >= 0 ? v46 : v46 + 1;
  if ( !svtEntity )
    goto LABEL_181;
  v60 = this->fields.titleBasePosition.fields.x;
  v61 = this->fields.titleBasePosition.fields.y;
  v62 = this->fields.titleBasePosition.fields.z;
  svtEntity = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)svtEntity, 0LL);
  if ( !svtEntity
    || (v63 = v59 >> 1,
        v115.fields.y = v61 + (float)v63,
        v115.fields.x = v60,
        v115.fields.z = v62,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtEntity, v115, 0LL),
        (v64 = this->fields.skillBaseList) == 0LL) )
  {
LABEL_181:
    sub_1B64324(svtEntity);
  }
  v65 = this->fields.skillBasePosition.fields.z;
  v66 = this->fields.skillBasePosition.fields.x;
  v67 = 0;
  v68 = this->fields.skillBasePosition.fields.y + (float)(v63 + v110);
  while ( 1 )
  {
    v69 = v64->max_length;
    if ( v67 >= (int)v69 )
      break;
    if ( v67 >= (int)v48 )
    {
      if ( v67 >= v69 )
        goto LABEL_192;
      svtEntity = (__int64)v64->m_Items[v67];
      if ( !svtEntity )
        goto LABEL_181;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_181;
      if ( v67 >= skillInfoList->max_length || v67 >= v69 )
        goto LABEL_192;
      svtEntity = (__int64)v64->m_Items[v67];
      if ( !svtEntity )
        goto LABEL_181;
      v70 = v48;
      v71 = skillInfoList->m_Items[v67];
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
      if ( !v71 )
        goto LABEL_181;
      v72 = this->fields.skillBaseList;
      v73 = v71->fields.lv < 0 ? 0.5 : 1.0;
      if ( !v72 )
        goto LABEL_181;
      if ( v67 >= v72->max_length )
        goto LABEL_192;
      svtEntity = (__int64)v72->m_Items[v67];
      if ( !svtEntity )
        goto LABEL_181;
      svtEntity = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)svtEntity, 0LL);
      if ( !svtEntity )
        goto LABEL_181;
      v116.fields.x = v66;
      v116.fields.y = v68;
      v116.fields.z = v65;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtEntity, v116, 0LL);
      v74 = this->fields.skillIconList;
      if ( !v74 )
        goto LABEL_181;
      if ( v67 >= v74->max_length )
        goto LABEL_192;
      svtEntity = (__int64)v74->m_Items[v67];
      if ( !svtEntity )
        goto LABEL_181;
      SkillIconComponent__Set_37921136((SkillIconComponent_o *)svtEntity, v71->fields.id, v71->fields.lv, 0LL);
      if ( (v71->fields.lv & 0x80000000) != 0 || (v71->fields.charge & 0x80000000) != 0 )
      {
        chargeTitleSpriteList = this->fields.chargeTitleSpriteList;
        if ( !chargeTitleSpriteList )
          goto LABEL_181;
        if ( v67 >= chargeTitleSpriteList->max_length )
          goto LABEL_192;
        svtEntity = (__int64)chargeTitleSpriteList->m_Items[v67];
        if ( !svtEntity )
          goto LABEL_181;
        svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( !svtEntity )
          goto LABEL_181;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
        chargeDataLabelList = this->fields.chargeDataLabelList;
        if ( !chargeDataLabelList )
          goto LABEL_181;
        if ( v67 >= chargeDataLabelList->max_length )
          goto LABEL_192;
        svtEntity = (__int64)chargeDataLabelList->m_Items[v67];
        if ( !svtEntity )
          goto LABEL_181;
        v78 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        v75 = this->fields.chargeTitleSpriteList;
        if ( !v75 )
          goto LABEL_181;
        if ( v67 >= v75->max_length )
          goto LABEL_192;
        svtEntity = (__int64)v75->m_Items[v67];
        if ( !svtEntity )
          goto LABEL_181;
        svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( !svtEntity )
          goto LABEL_181;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        v76 = this->fields.chargeDataLabelList;
        if ( !v76 )
          goto LABEL_181;
        if ( v67 >= v76->max_length )
          goto LABEL_192;
        v77 = v76->m_Items[v67];
        svtEntity = (__int64)System_Int32__ToString((int)v71 + 24, 0LL);
        if ( !v77 )
          goto LABEL_181;
        v78 = (System_String_o *)svtEntity;
        svtEntity = (__int64)v77;
      }
      UILabel__set_text((UILabel_o *)svtEntity, v78, 0LL);
      v81 = this->fields.skillExplanationLabelList;
      if ( !v81 )
        goto LABEL_181;
      if ( v67 >= v81->max_length )
        goto LABEL_192;
      svtEntity = (__int64)v81->m_Items[v67];
      if ( !svtEntity )
        goto LABEL_181;
      v117.fields.a = 1.0;
      v117.fields.r = v73;
      v117.fields.g = v73;
      v117.fields.b = v73;
      UIWidget__set_color((UIWidget_o *)svtEntity, v117, 0LL);
      skillNameLabelList = this->fields.skillNameLabelList;
      if ( !skillNameLabelList )
        goto LABEL_181;
      if ( v67 >= skillNameLabelList->max_length )
        goto LABEL_192;
      svtEntity = (__int64)skillNameLabelList->m_Items[v67];
      if ( !svtEntity )
        goto LABEL_181;
      UILabel__set_text((UILabel_o *)svtEntity, v71->fields.title, 0LL);
      v83 = this->fields.skillNameLabelList;
      if ( !v83 )
        goto LABEL_181;
      if ( v67 >= v83->max_length )
        goto LABEL_192;
      svtEntity = (__int64)v83->m_Items[v67];
      if ( !svtEntity )
        goto LABEL_181;
      v118.fields.a = 1.0;
      v118.fields.r = v73;
      v118.fields.g = v73;
      v118.fields.b = v73;
      UIWidget__set_color((UIWidget_o *)svtEntity, v118, 0LL);
      v84 = this->fields.skillNameLabelList;
      if ( !v84 )
        goto LABEL_181;
      if ( v67 >= v84->max_length )
        goto LABEL_192;
      svtEntity = (__int64)v84->m_Items[v67];
      if ( !svtEntity )
        goto LABEL_181;
      UILabel__SetCondensedScale((UILabel_o *)svtEntity, 340, 0LL);
      skillStrengthStatus = this->fields.skillStrengthStatus;
      if ( !skillStrengthStatus )
        goto LABEL_181;
      if ( v67 >= skillStrengthStatus->max_length )
        goto LABEL_192;
      lv = v71->fields.lv;
      v87 = (UnityEngine_Object_o *)skillStrengthStatus->m_Items[v67];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      svtEntity = UnityEngine_Object__op_Inequality(v87, 0LL, 0LL);
      if ( (lv & 0x80000000) != 0 )
      {
        v48 = v70;
        if ( (svtEntity & 1) != 0 )
        {
          v101 = this->fields.skillStrengthStatus;
          if ( !v101 )
            goto LABEL_181;
          if ( v67 >= v101->max_length )
            goto LABEL_192;
          svtEntity = (__int64)v101->m_Items[v67];
          if ( !svtEntity )
            goto LABEL_181;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)svtEntity,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
        }
      }
      else
      {
        if ( (svtEntity & 1) != 0 )
        {
          v88 = this->fields.skillStrengthStatus;
          if ( !v88 )
            goto LABEL_181;
          if ( v67 >= v88->max_length )
            goto LABEL_192;
          svtEntity = (__int64)v88->m_Items[v67];
          if ( !svtEntity )
            goto LABEL_181;
          v89 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69127736(v89, 0LL);
        }
        svtEntity = (__int64)ServantSkillStrengthStatus_TypeInfo;
        if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
          svtEntity = (__int64)ServantSkillStrengthStatus_TypeInfo;
        }
        v90 = this->fields.skillNameLabelList;
        if ( !v90 )
          goto LABEL_181;
        if ( v67 >= v90->max_length )
          goto LABEL_192;
        v91 = (UnityEngine_Component_o *)v90->m_Items[v67];
        if ( !v91 )
          goto LABEL_181;
        v92 = **(System_String_o ***)(svtEntity + 184);
        transform = UnityEngine_Component__get_transform(v91, 0LL);
        svtEntity = (__int64)BaseMonoBehaviour__CreateObjectStatic(v92, transform, 0LL, 0LL);
        if ( !svtEntity )
          goto LABEL_181;
        v94 = this->fields.skillStrengthStatus;
        svtEntity = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)svtEntity,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        if ( !v94 )
          goto LABEL_181;
        v97 = svtEntity;
        if ( svtEntity )
        {
          svtEntity = sub_1B64204(svtEntity, v94->obj.klass->_1.element_class);
          if ( !svtEntity )
          {
            v109 = sub_1B64348();
            sub_1B641F0(v109, 0LL);
          }
        }
        if ( v67 >= v94->max_length )
          goto LABEL_192;
        v98 = &v94->obj.klass + v67;
        v98[4] = (Il2CppClass *)v97;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v98 + 4), v97, v95, v96);
        v99 = this->fields.skillStrengthStatus;
        if ( !v99 )
          goto LABEL_181;
        if ( v67 >= v99->max_length )
          goto LABEL_192;
        v100 = this->fields.skillNameLabelList;
        if ( !v100 )
          goto LABEL_181;
        if ( v67 >= v100->max_length )
          goto LABEL_192;
        svtEntity = (__int64)v99->m_Items[v67];
        if ( !svtEntity )
          goto LABEL_181;
        v113 = (UnityEngine_Vector2Int_o)0x1600000018LL;
        ServantSkillStrengthStatus__Set(
          (ServantSkillStrengthStatus_o *)svtEntity,
          v100->m_Items[v67],
          v71->fields.strengthStatus,
          v71->fields.skillRecord,
          24,
          1,
          v113,
          0LL);
        v48 = v70;
      }
    }
    v103 = this->fields.skillExplanationLabelList;
    if ( !v103 )
      goto LABEL_181;
    if ( v67 >= v103->max_length )
      goto LABEL_192;
    v104 = v103->m_Items[v67];
    if ( v104 )
    {
      svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
      mHeight = v104->fields.mHeight;
      if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      ++v67;
      v64 = this->fields.skillBaseList;
      v106 = *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 8LL) + mHeight;
      if ( v106 < this->fields.skillPitch )
        v106 = this->fields.skillPitch;
      v68 = v68 - (float)v106;
      if ( v64 )
        continue;
    }
    goto LABEL_181;
  }
}