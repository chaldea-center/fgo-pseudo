void __fastcall ServantStatusListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ServantStatusListViewItemDrawSkill_StaticFields *static_fields; // x8

  if ( (byte_4AB2F26 & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusListViewItemDrawSkill_TypeInfo, v1);
    byte_4AB2F26 = 1;
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

  if ( (byte_4AB2F25 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, method);
    sub_1BAB41C(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1BAB41C(&ServantSkillStrengthStatus___TypeInfo, v4);
    sub_1BAB41C(&SkillIconComponent___TypeInfo, v5);
    sub_1BAB41C(&UILabel___TypeInfo, v6);
    sub_1BAB41C(&UISprite___TypeInfo, v7);
    byte_4AB2F25 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (struct UnityEngine_GameObject_array *)sub_1BAB4C4(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v8->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v9;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.skillBaseList, (int32_t)v9, v10, v11);
  v12 = (struct SkillIconComponent_array *)sub_1BAB4C4(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v12;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.skillIconList, (int32_t)v12, v13, v14);
  v15 = (struct UISprite_array *)sub_1BAB4C4(
                                   UISprite___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.chargeTitleSpriteList = v15;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.chargeTitleSpriteList, (int32_t)v15, v16, v17);
  v18 = (struct UILabel_array *)sub_1BAB4C4(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.chargeDataLabelList = v18;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.chargeDataLabelList, (int32_t)v18, v19, v20);
  v21 = (struct UILabel_array *)sub_1BAB4C4(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillNameLabelList = v21;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.skillNameLabelList, (int32_t)v21, v22, v23);
  v24 = (struct ServantSkillStrengthStatus_array *)sub_1BAB4C4(
                                                     ServantSkillStrengthStatus___TypeInfo,
                                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillStrengthStatus = v24;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.skillStrengthStatus, (int32_t)v24, v25, v26);
  v27 = (struct UILabel_array *)sub_1BAB4C4(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v27;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.skillExplanationLabelList, (int32_t)v27, v28, v29);
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
  float v4; // s1
  struct UnityEngine_GameObject_array *v5; // x8
  float v6; // s8
  float v7; // s1
  unsigned int v8; // w9
  struct UISprite_o *baseSprite; // x9
  int v10; // w8
  int v11; // w10
  int v12; // w20
  float v13; // s1
  float v14; // s0
  float v15; // s1
  float v16; // s2
  struct UnityEngine_GameObject_array *v17; // x8
  int v18; // w9
  float v19; // s8
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
    *(UnityEngine_Vector3_o *)(&v4 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v5 = v3->fields.skillBaseList;
    if ( !v5 )
      goto LABEL_27;
    if ( v5->max_length <= 1 )
      goto LABEL_28;
    this = (ServantStatusListViewItemDrawSkill_o *)v5->m_Items[1];
    if ( !this )
      goto LABEL_27;
    v6 = v4;
    this = (ServantStatusListViewItemDrawSkill_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_27;
    *(UnityEngine_Vector3_o *)(&v7 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    skillBaseList = v3->fields.skillBaseList;
    v8 = (float)(v6 - v7) == INFINITY ? 0x80000000 : (int)(float)(v6 - v7);
    v3->fields.skillPitch = v8;
    if ( !skillBaseList )
      goto LABEL_27;
  }
  baseSprite = v3->fields.baseSprite;
  v10 = v3->fields.skillPitch * skillBaseList->max_length;
  v11 = v10 >= 0 ? v10 : v10 + 1;
  if ( !baseSprite )
    goto LABEL_27;
  this = (ServantStatusListViewItemDrawSkill_o *)v3->fields.titleSprite;
  v12 = v10 - (v11 & 0xFFFFFFFE) + v10;
  v13 = (float)(baseSprite->fields.mHeight - v12);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v13;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_27;
  this = (ServantStatusListViewItemDrawSkill_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_27;
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v17 = v3->fields.skillBaseList;
  v18 = v12 >= 0 ? v12 : v12 + 1;
  v19 = (float)(v18 >> 1);
  v3->fields.titleBasePosition.fields.x = v14;
  v3->fields.titleBasePosition.fields.y = v15 - v19;
  v3->fields.titleBasePosition.fields.z = v16;
  if ( !v17 )
LABEL_27:
    sub_1BAB678(this, method);
  if ( !v17->max_length )
LABEL_28:
    sub_1BAB680(this, method);
  this = (ServantStatusListViewItemDrawSkill_o *)v17->m_Items[0];
  if ( !this )
    goto LABEL_27;
  this = (ServantStatusListViewItemDrawSkill_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_27;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.skillBasePosition.fields.x = localPosition.fields.x;
  v3->fields.skillBasePosition.fields.y = localPosition.fields.y - v19;
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
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v21; // x24
  __int64 v22; // x23
  __int64 v23; // x9
  unsigned __int64 max_length; // x11
  SkillInfo_o *v25; // x22
  int64_t UserId; // x0
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x21
  int32_t transformNameAddHeight; // w27
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  char v31; // w25
  __int64 v32; // x29
  unsigned __int64 v33; // x23
  struct UILabel_array *skillExplanationLabelList; // x9
  __int64 v35; // x8
  ServantStatusListViewItemDrawSkill_c *v36; // x0
  UILabel_o *v37; // x21
  System_String_o *v38; // x22
  struct UILabel_array *v39; // x8
  __int64 v40; // x8
  int v41; // w10
  int32_t skillPitch; // w8
  int v43; // w21
  int32_t v44; // w9
  int v45; // w21
  UserServantEntity_o *userSvtEntity; // x0
  __int64 v47; // x26
  signed int v48; // w9
  int v49; // w10
  SkillInfo_o *v50; // x11
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  float v55; // s8
  int32_t v56; // w1
  int32_t v57; // w1
  int v58; // w20
  float v59; // s8
  float v60; // s10
  float v61; // s9
  int v62; // w20
  struct UnityEngine_GameObject_array *v63; // x8
  float v64; // s8
  float v65; // s9
  signed int v66; // w25
  float v67; // s10
  unsigned int v68; // w10
  __int64 v69; // x23
  SkillInfo_o *v70; // x26
  struct UnityEngine_GameObject_array *v71; // x8
  float v72; // s11
  struct SkillIconComponent_array *v73; // x8
  struct UISprite_array *v74; // x8
  struct UILabel_array *v75; // x8
  UILabel_o *v76; // x21
  System_String_o *v77; // x1
  struct UISprite_array *chargeTitleSpriteList; // x8
  struct UILabel_array *chargeDataLabelList; // x8
  struct UILabel_array *v80; // x8
  struct UILabel_array *skillNameLabelList; // x8
  struct UILabel_array *v82; // x8
  struct UILabel_array *v83; // x8
  struct ServantSkillStrengthStatus_array *skillStrengthStatus; // x8
  int32_t lv; // w21
  UnityEngine_Object_o *v86; // x20
  struct ServantSkillStrengthStatus_array *v87; // x8
  UnityEngine_Object_o *v88; // x20
  struct UILabel_array *v89; // x8
  UnityEngine_Component_o *v90; // x8
  System_String_o *v91; // x20
  UnityEngine_Transform_o *transform; // x0
  struct ServantSkillStrengthStatus_array *v93; // x21
  int32_t v94; // w2
  int32_t v95; // w3
  __int64 v96; // x20
  Il2CppClass **v97; // x0
  struct ServantSkillStrengthStatus_array *v98; // x8
  struct UILabel_array *v99; // x9
  struct ServantSkillStrengthStatus_array *v100; // x8
  UnityEngine_Object_o *gameObject; // x20
  struct UILabel_array *v102; // x8
  UILabel_o *v103; // x8
  int32_t mHeight; // w20
  int32_t v105; // w9
  int v106; // w22
  int v107; // w8
  __int64 v108; // x0
  int v109; // [xsp+4h] [xbp-ACh]
  SkillInfo_array *v110; // [xsp+10h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-98h] BYREF
  UnityEngine_Vector2Int_o v112; // 0:x6.8
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4AB2F24 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, item);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v7);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v8);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v9);
    sub_1BAB41C(&ServantSkillStrengthStatus_TypeInfo, v10);
    sub_1BAB41C(&ServantStatusListViewItemDrawSkill_TypeInfo, v11);
    sub_1BAB41C(&StringLiteral_11888/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v12);
    sub_1BAB41C(&StringLiteral_11886/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/, v13);
    sub_1BAB41C(&StringLiteral_1/*""*/, v14);
    byte_4AB2F24 = 1;
  }
  v110 = 0LL;
  skillInfoList = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  svtEntity = (__int64)item->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_181;
  explanationLabel = this->fields.explanationLabel;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0LL) )
    v17 = (System_String_o **)&StringLiteral_11888/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
  else
    v17 = (System_String_o **)&StringLiteral_11886/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/;
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
  v21 = 0LL;
  v22 = 4LL;
  while ( 1 )
  {
    v23 = v22 - 4;
    if ( v22 - 4 >= (int)skillIconList->max_length )
      break;
    if ( skillInfoList )
    {
      max_length = skillInfoList->max_length;
      if ( v23 < (int)max_length )
      {
        if ( v23 >= max_length )
LABEL_192:
          sub_1BAB680(svtEntity, item);
        v25 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + v22);
        if ( v25 )
        {
          if ( v25->fields.id >= 1 )
          {
            UserId = ServantStatusListViewItem__get_UserId(item, 0LL);
            SkillInfo__OverwriteNextSkill(v25, UserId, SvtId, 0LL);
            skillIconList = this->fields.skillIconList;
            v21 = (unsigned int)(v22 - 3);
          }
        }
      }
      ++v22;
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
    v109 = -transformNameAddHeight;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
    transformNameAddHeight = 0;
    v109 = 0;
  }
  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_181;
  v31 = 0;
  v32 = 4LL;
  while ( 1 )
  {
    v33 = v32 - 4;
    if ( v32 - 4 >= (int)skillBaseList->max_length )
      break;
    if ( (__int64)v33 < (int)v21 )
    {
      if ( !skillInfoList )
        goto LABEL_181;
      if ( v33 >= skillInfoList->max_length )
        goto LABEL_192;
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_181;
      if ( v33 >= skillExplanationLabelList->max_length )
        goto LABEL_192;
      v35 = *((_QWORD *)&skillInfoList->obj.klass + v32);
      if ( !v35 )
        goto LABEL_181;
      v36 = ServantStatusListViewItemDrawSkill_TypeInfo;
      v37 = (UILabel_o *)*((_QWORD *)&skillExplanationLabelList->obj.klass + v32);
      v38 = *(System_String_o **)(v35 + 40);
      if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        v36 = ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      svtEntity = WrapControlText__textBBCodeAdjust(
                    v37,
                    v38,
                    v36->static_fields->DETAIL_FONT_SIZE,
                    v36->static_fields->DETAIL_FONT_SIZE,
                    v36->static_fields->MAX_HEIGHT,
                    0LL);
      v39 = this->fields.skillExplanationLabelList;
      if ( !v39 )
        goto LABEL_181;
      if ( v33 >= v39->max_length )
        goto LABEL_192;
      v40 = *((_QWORD *)&v39->obj.klass + v32);
      if ( !v40 )
        goto LABEL_181;
      v41 = *(_DWORD *)(v40 + 172);
      skillPitch = this->fields.skillPitch;
      v43 = v41 + ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v43 >= skillPitch )
      {
        svtEntity = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          svtEntity = (__int64)BalanceConfig_TypeInfo;
        }
        transformNameAddHeight += v43;
        if ( v33 == *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 32LL) - 1 )
          v31 |= v43 - this->fields.skillPitch > 10;
      }
      else
      {
        transformNameAddHeight += skillPitch;
      }
    }
    skillBaseList = this->fields.skillBaseList;
    ++v32;
    if ( !skillBaseList )
      goto LABEL_181;
  }
  v44 = transformNameAddHeight >= 0 ? transformNameAddHeight : transformNameAddHeight + 1;
  v45 = transformNameAddHeight - (v44 & 0xFFFFFFFE) + transformNameAddHeight;
  if ( item->fields._IsDisplayCombineButton_k__BackingField )
  {
    userSvtEntity = item->fields.userSvtEntity;
    v47 = v21;
    if ( userSvtEntity && !UserServantEntity__IsLeave(userSvtEntity, 0LL) )
    {
      ServantStatusListViewItem__GetSkillInfo(item, &v110, 0, 0LL);
      if ( !v110 )
        goto LABEL_181;
      v48 = v110->max_length;
      if ( v48 >= 1 )
      {
        v49 = 0;
        while ( 1 )
        {
          if ( v48 == v49 )
            goto LABEL_192;
          v50 = v110->m_Items[v49];
          if ( !v50 )
            goto LABEL_181;
          if ( v50->fields.isUse && v50->fields.lv <= 9 )
            break;
          if ( v48 == ++v49 )
            goto LABEL_68;
        }
        svtEntity = (__int64)this->fields.reinforceObject;
        if ( (v31 & 1) != 0 )
          v106 = 62;
        else
          v106 = 50;
        if ( !svtEntity )
          goto LABEL_181;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        svtEntity = (__int64)this->fields.reinforceButton;
        if ( !svtEntity )
          goto LABEL_181;
        *(_BYTE *)(svtEntity + 97) = 1;
        v45 += v106;
        UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
        if ( v45 >= 0 )
          v107 = v45;
        else
          v107 = v45 + 1;
        GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v107 >> 1), 0LL);
      }
    }
  }
  else
  {
    v47 = v21;
  }
LABEL_68:
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v55 = y + (float)v45;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    svtEntity = (__int64)this->fields.baseCollider;
    if ( !svtEntity )
      goto LABEL_181;
    v113.fields.x = x;
    v113.fields.y = v55;
    v113.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)svtEntity, v113, 0LL);
  }
  svtEntity = (__int64)this->fields.baseSprite;
  if ( !svtEntity )
    goto LABEL_181;
  v56 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)svtEntity, v56, 0LL);
  svtEntity = (__int64)this->fields.baseSprite;
  if ( !svtEntity )
    goto LABEL_181;
  v57 = v55 == INFINITY ? 0x80000000 : (int)v55;
  UIWidget__set_height((UIWidget_o *)svtEntity, v57, 0LL);
  svtEntity = (__int64)this->fields.titleSprite;
  v58 = v45 >= 0 ? v45 : v45 + 1;
  if ( !svtEntity )
    goto LABEL_181;
  v59 = this->fields.titleBasePosition.fields.x;
  v60 = this->fields.titleBasePosition.fields.y;
  v61 = this->fields.titleBasePosition.fields.z;
  svtEntity = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)svtEntity, 0LL);
  if ( !svtEntity
    || (v62 = v58 >> 1,
        v114.fields.y = v60 + (float)v62,
        v114.fields.x = v59,
        v114.fields.z = v61,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtEntity, v114, 0LL),
        (v63 = this->fields.skillBaseList) == 0LL) )
  {
LABEL_181:
    sub_1BAB678(svtEntity, item);
  }
  v64 = this->fields.skillBasePosition.fields.z;
  v65 = this->fields.skillBasePosition.fields.x;
  v66 = 0;
  v67 = this->fields.skillBasePosition.fields.y + (float)(v62 + v109);
  while ( 1 )
  {
    v68 = v63->max_length;
    if ( v66 >= (int)v68 )
      break;
    if ( v66 >= (int)v47 )
    {
      if ( v66 >= v68 )
        goto LABEL_192;
      svtEntity = (__int64)v63->m_Items[v66];
      if ( !svtEntity )
        goto LABEL_181;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_181;
      if ( v66 >= skillInfoList->max_length || v66 >= v68 )
        goto LABEL_192;
      svtEntity = (__int64)v63->m_Items[v66];
      if ( !svtEntity )
        goto LABEL_181;
      v69 = v47;
      v70 = skillInfoList->m_Items[v66];
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
      if ( !v70 )
        goto LABEL_181;
      v71 = this->fields.skillBaseList;
      v72 = v70->fields.lv < 0 ? 0.5 : 1.0;
      if ( !v71 )
        goto LABEL_181;
      if ( v66 >= v71->max_length )
        goto LABEL_192;
      svtEntity = (__int64)v71->m_Items[v66];
      if ( !svtEntity )
        goto LABEL_181;
      svtEntity = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)svtEntity, 0LL);
      if ( !svtEntity )
        goto LABEL_181;
      v115.fields.x = v65;
      v115.fields.y = v67;
      v115.fields.z = v64;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtEntity, v115, 0LL);
      v73 = this->fields.skillIconList;
      if ( !v73 )
        goto LABEL_181;
      if ( v66 >= v73->max_length )
        goto LABEL_192;
      svtEntity = (__int64)v73->m_Items[v66];
      if ( !svtEntity )
        goto LABEL_181;
      SkillIconComponent__Set_38616648((SkillIconComponent_o *)svtEntity, v70->fields.id, v70->fields.lv, 0LL);
      if ( (v70->fields.lv & 0x80000000) != 0 || (v70->fields.charge & 0x80000000) != 0 )
      {
        chargeTitleSpriteList = this->fields.chargeTitleSpriteList;
        if ( !chargeTitleSpriteList )
          goto LABEL_181;
        if ( v66 >= chargeTitleSpriteList->max_length )
          goto LABEL_192;
        svtEntity = (__int64)chargeTitleSpriteList->m_Items[v66];
        if ( !svtEntity )
          goto LABEL_181;
        svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( !svtEntity )
          goto LABEL_181;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
        chargeDataLabelList = this->fields.chargeDataLabelList;
        if ( !chargeDataLabelList )
          goto LABEL_181;
        if ( v66 >= chargeDataLabelList->max_length )
          goto LABEL_192;
        svtEntity = (__int64)chargeDataLabelList->m_Items[v66];
        if ( !svtEntity )
          goto LABEL_181;
        v77 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        v74 = this->fields.chargeTitleSpriteList;
        if ( !v74 )
          goto LABEL_181;
        if ( v66 >= v74->max_length )
          goto LABEL_192;
        svtEntity = (__int64)v74->m_Items[v66];
        if ( !svtEntity )
          goto LABEL_181;
        svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( !svtEntity )
          goto LABEL_181;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        v75 = this->fields.chargeDataLabelList;
        if ( !v75 )
          goto LABEL_181;
        if ( v66 >= v75->max_length )
          goto LABEL_192;
        v76 = v75->m_Items[v66];
        svtEntity = (__int64)System_Int32__ToString((int)v70 + 24, 0LL);
        if ( !v76 )
          goto LABEL_181;
        v77 = (System_String_o *)svtEntity;
        svtEntity = (__int64)v76;
      }
      UILabel__set_text((UILabel_o *)svtEntity, v77, 0LL);
      v80 = this->fields.skillExplanationLabelList;
      if ( !v80 )
        goto LABEL_181;
      if ( v66 >= v80->max_length )
        goto LABEL_192;
      svtEntity = (__int64)v80->m_Items[v66];
      if ( !svtEntity )
        goto LABEL_181;
      v116.fields.a = 1.0;
      v116.fields.r = v72;
      v116.fields.g = v72;
      v116.fields.b = v72;
      UIWidget__set_color((UIWidget_o *)svtEntity, v116, 0LL);
      skillNameLabelList = this->fields.skillNameLabelList;
      if ( !skillNameLabelList )
        goto LABEL_181;
      if ( v66 >= skillNameLabelList->max_length )
        goto LABEL_192;
      svtEntity = (__int64)skillNameLabelList->m_Items[v66];
      if ( !svtEntity )
        goto LABEL_181;
      UILabel__set_text((UILabel_o *)svtEntity, v70->fields.title, 0LL);
      v82 = this->fields.skillNameLabelList;
      if ( !v82 )
        goto LABEL_181;
      if ( v66 >= v82->max_length )
        goto LABEL_192;
      svtEntity = (__int64)v82->m_Items[v66];
      if ( !svtEntity )
        goto LABEL_181;
      v117.fields.a = 1.0;
      v117.fields.r = v72;
      v117.fields.g = v72;
      v117.fields.b = v72;
      UIWidget__set_color((UIWidget_o *)svtEntity, v117, 0LL);
      v83 = this->fields.skillNameLabelList;
      if ( !v83 )
        goto LABEL_181;
      if ( v66 >= v83->max_length )
        goto LABEL_192;
      svtEntity = (__int64)v83->m_Items[v66];
      if ( !svtEntity )
        goto LABEL_181;
      UILabel__SetCondensedScale((UILabel_o *)svtEntity, 340, 0LL);
      skillStrengthStatus = this->fields.skillStrengthStatus;
      if ( !skillStrengthStatus )
        goto LABEL_181;
      if ( v66 >= skillStrengthStatus->max_length )
        goto LABEL_192;
      lv = v70->fields.lv;
      v86 = (UnityEngine_Object_o *)skillStrengthStatus->m_Items[v66];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      svtEntity = UnityEngine_Object__op_Inequality(v86, 0LL, 0LL);
      if ( (lv & 0x80000000) != 0 )
      {
        v47 = v69;
        if ( (svtEntity & 1) != 0 )
        {
          v100 = this->fields.skillStrengthStatus;
          if ( !v100 )
            goto LABEL_181;
          if ( v66 >= v100->max_length )
            goto LABEL_192;
          svtEntity = (__int64)v100->m_Items[v66];
          if ( !svtEntity )
            goto LABEL_181;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)svtEntity,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69800620(gameObject, 0LL);
        }
      }
      else
      {
        if ( (svtEntity & 1) != 0 )
        {
          v87 = this->fields.skillStrengthStatus;
          if ( !v87 )
            goto LABEL_181;
          if ( v66 >= v87->max_length )
            goto LABEL_192;
          svtEntity = (__int64)v87->m_Items[v66];
          if ( !svtEntity )
            goto LABEL_181;
          v88 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69800620(v88, 0LL);
        }
        svtEntity = (__int64)ServantSkillStrengthStatus_TypeInfo;
        if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
          svtEntity = (__int64)ServantSkillStrengthStatus_TypeInfo;
        }
        v89 = this->fields.skillNameLabelList;
        if ( !v89 )
          goto LABEL_181;
        if ( v66 >= v89->max_length )
          goto LABEL_192;
        v90 = (UnityEngine_Component_o *)v89->m_Items[v66];
        if ( !v90 )
          goto LABEL_181;
        v91 = **(System_String_o ***)(svtEntity + 184);
        transform = UnityEngine_Component__get_transform(v90, 0LL);
        svtEntity = (__int64)BaseMonoBehaviour__CreateObjectStatic(v91, transform, 0LL, 0LL);
        if ( !svtEntity )
          goto LABEL_181;
        v93 = this->fields.skillStrengthStatus;
        svtEntity = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)svtEntity,
                               (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        if ( !v93 )
          goto LABEL_181;
        v96 = svtEntity;
        if ( svtEntity )
        {
          svtEntity = sub_1BAB558(svtEntity, v93->obj.klass->_1.element_class);
          if ( !svtEntity )
          {
            v108 = sub_1BAB69C();
            sub_1BAB544(v108, 0LL);
          }
        }
        if ( v66 >= v93->max_length )
          goto LABEL_192;
        v97 = &v93->obj.klass + v66;
        v97[4] = (Il2CppClass *)v96;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v97 + 4), v96, v94, v95);
        v98 = this->fields.skillStrengthStatus;
        if ( !v98 )
          goto LABEL_181;
        if ( v66 >= v98->max_length )
          goto LABEL_192;
        v99 = this->fields.skillNameLabelList;
        if ( !v99 )
          goto LABEL_181;
        if ( v66 >= v99->max_length )
          goto LABEL_192;
        svtEntity = (__int64)v98->m_Items[v66];
        if ( !svtEntity )
          goto LABEL_181;
        v112 = (UnityEngine_Vector2Int_o)0x1600000018LL;
        ServantSkillStrengthStatus__Set(
          (ServantSkillStrengthStatus_o *)svtEntity,
          v99->m_Items[v66],
          v70->fields.strengthStatus,
          v70->fields.skillRecord,
          24,
          1,
          v112,
          0LL);
        v47 = v69;
      }
    }
    v102 = this->fields.skillExplanationLabelList;
    if ( !v102 )
      goto LABEL_181;
    if ( v66 >= v102->max_length )
      goto LABEL_192;
    v103 = v102->m_Items[v66];
    if ( v103 )
    {
      svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
      mHeight = v103->fields.mHeight;
      if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      ++v66;
      v63 = this->fields.skillBaseList;
      v105 = *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 8LL) + mHeight;
      if ( v105 < this->fields.skillPitch )
        v105 = this->fields.skillPitch;
      v67 = v67 - (float)v105;
      if ( v63 )
        continue;
    }
    goto LABEL_181;
  }
}