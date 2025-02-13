void __fastcall ServantStatusListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  if ( (byte_4BD94F8 & 1) == 0 )
  {
    sub_1C21E38(&ServantStatusListViewItemDrawSkill_TypeInfo);
    byte_4BD94F8 = 1;
  }
  *ServantStatusListViewItemDrawSkill_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawSkill_StaticFields)0x2800000012LL;
}


void __fastcall ServantStatusListViewItemDrawSkill___ctor(
        ServantStatusListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct SkillIconComponent_array *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct UISprite_array *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct UILabel_array *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct UILabel_array *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct ServantSkillStrengthStatus_array *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct UILabel_array *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7

  if ( (byte_4BD94F7 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&UnityEngine_GameObject___TypeInfo);
    sub_1C21E38(&ServantSkillStrengthStatus___TypeInfo);
    sub_1C21E38(&SkillIconComponent___TypeInfo);
    sub_1C21E38(&UILabel___TypeInfo);
    sub_1C21E38(&UISprite___TypeInfo);
    byte_4BD94F7 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1C21EE0(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.skillBaseList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct SkillIconComponent_array *)sub_1C21EE0(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.skillIconList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (struct UISprite_array *)sub_1C21EE0(
                                   UISprite___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.chargeTitleSpriteList = v18;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.chargeTitleSpriteList,
    (int64_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UILabel_array *)sub_1C21EE0(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.chargeDataLabelList = v25;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.chargeDataLabelList,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (struct UILabel_array *)sub_1C21EE0(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillNameLabelList = v32;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.skillNameLabelList,
    (int64_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (struct ServantSkillStrengthStatus_array *)sub_1C21EE0(
                                                     ServantSkillStrengthStatus___TypeInfo,
                                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillStrengthStatus = v39;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.skillStrengthStatus,
    (int64_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (struct UILabel_array *)sub_1C21EE0(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v46;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.skillExplanationLabelList,
    (int64_t)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
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
    sub_1C22094(this, method);
  if ( !v17->max_length )
LABEL_28:
    sub_1C2209C(this, method);
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
  __int64 svtEntity; // x0
  UILabel_o *explanationLabel; // x21
  System_String_o **v9; // x8
  System_String_o *v10; // x22
  int32_t SvtId; // w21
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v13; // x24
  __int64 v14; // x23
  __int64 v15; // x9
  unsigned __int64 max_length; // x11
  SkillInfo_o *v17; // x22
  int64_t UserId; // x0
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x21
  int32_t transformNameAddHeight; // w27
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  char v23; // w25
  __int64 v24; // x29
  unsigned __int64 v25; // x23
  struct UILabel_array *skillExplanationLabelList; // x9
  __int64 v27; // x8
  ServantStatusListViewItemDrawSkill_c *v28; // x0
  UILabel_o *v29; // x21
  System_String_o *v30; // x22
  struct UILabel_array *v31; // x8
  __int64 v32; // x8
  int v33; // w10
  int32_t skillPitch; // w8
  int v35; // w21
  int32_t v36; // w9
  int v37; // w21
  UserServantEntity_o *userSvtEntity; // x0
  __int64 v39; // x26
  signed int v40; // w9
  int v41; // w10
  SkillInfo_o *v42; // x11
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  float v47; // s8
  int32_t v48; // w1
  int32_t v49; // w1
  int v50; // w20
  float v51; // s8
  float v52; // s10
  float v53; // s9
  int v54; // w20
  struct UnityEngine_GameObject_array *v55; // x8
  float v56; // s8
  float v57; // s9
  signed int v58; // w25
  float v59; // s10
  unsigned int v60; // w10
  __int64 v61; // x23
  SkillInfo_o *v62; // x26
  struct UnityEngine_GameObject_array *v63; // x8
  float v64; // s11
  struct SkillIconComponent_array *v65; // x8
  struct UISprite_array *v66; // x8
  struct UILabel_array *v67; // x8
  UILabel_o *v68; // x21
  System_String_o *v69; // x1
  struct UISprite_array *chargeTitleSpriteList; // x8
  struct UILabel_array *chargeDataLabelList; // x8
  struct UILabel_array *v72; // x8
  struct UILabel_array *skillNameLabelList; // x8
  struct UILabel_array *v74; // x8
  struct UILabel_array *v75; // x8
  struct ServantSkillStrengthStatus_array *skillStrengthStatus; // x8
  int32_t lv; // w21
  UnityEngine_Object_o *v78; // x20
  struct ServantSkillStrengthStatus_array *v79; // x8
  UnityEngine_Object_o *v80; // x20
  struct UILabel_array *v81; // x8
  UnityEngine_Component_o *v82; // x8
  System_String_o *v83; // x20
  UnityEngine_Transform_o *transform; // x0
  struct ServantSkillStrengthStatus_array *v85; // x21
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x20
  Il2CppClass **v93; // x0
  struct ServantSkillStrengthStatus_array *v94; // x8
  struct UILabel_array *v95; // x9
  struct ServantSkillStrengthStatus_array *v96; // x8
  UnityEngine_Object_o *gameObject; // x20
  struct UILabel_array *v98; // x8
  UILabel_o *v99; // x8
  int32_t mHeight; // w20
  int32_t v101; // w9
  int v102; // w22
  int v103; // w8
  __int64 v104; // x0
  int v105; // [xsp+24h] [xbp-ACh]
  SkillInfo_array *v106; // [xsp+30h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-98h] BYREF
  UnityEngine_Vector2Int_o v108; // 0:x6.8
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v112; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD94F6 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantSkillStrengthStatus_TypeInfo);
    sub_1C21E38(&ServantStatusListViewItemDrawSkill_TypeInfo);
    sub_1C21E38(&StringLiteral_12098/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    sub_1C21E38(&StringLiteral_12096/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD94F6 = 1;
  }
  v106 = 0LL;
  skillInfoList = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  svtEntity = (__int64)item->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_181;
  explanationLabel = this->fields.explanationLabel;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0LL) )
    v9 = (System_String_o **)&StringLiteral_12098/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
  else
    v9 = (System_String_o **)&StringLiteral_12096/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/;
  v10 = *v9;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  svtEntity = (__int64)LocalizationManager__Get(v10, 0LL);
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
  v13 = 0LL;
  v14 = 4LL;
  while ( 1 )
  {
    v15 = v14 - 4;
    if ( v14 - 4 >= (int)skillIconList->max_length )
      break;
    if ( skillInfoList )
    {
      max_length = skillInfoList->max_length;
      if ( v15 < (int)max_length )
      {
        if ( v15 >= max_length )
LABEL_192:
          sub_1C2209C(svtEntity, item);
        v17 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + v14);
        if ( v17 )
        {
          if ( v17->fields.id >= 1 )
          {
            UserId = ServantStatusListViewItem__get_UserId(item, 0LL);
            SkillInfo__OverwriteNextSkill(v17, UserId, SvtId, 0LL);
            skillIconList = this->fields.skillIconList;
            v13 = (unsigned int)(v14 - 3);
          }
        }
      }
      ++v14;
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
    v105 = -transformNameAddHeight;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
    transformNameAddHeight = 0;
    v105 = 0;
  }
  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_181;
  v23 = 0;
  v24 = 4LL;
  while ( 1 )
  {
    v25 = v24 - 4;
    if ( v24 - 4 >= (int)skillBaseList->max_length )
      break;
    if ( (__int64)v25 < (int)v13 )
    {
      if ( !skillInfoList )
        goto LABEL_181;
      if ( v25 >= skillInfoList->max_length )
        goto LABEL_192;
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_181;
      if ( v25 >= skillExplanationLabelList->max_length )
        goto LABEL_192;
      v27 = *((_QWORD *)&skillInfoList->obj.klass + v24);
      if ( !v27 )
        goto LABEL_181;
      v28 = ServantStatusListViewItemDrawSkill_TypeInfo;
      v29 = (UILabel_o *)*((_QWORD *)&skillExplanationLabelList->obj.klass + v24);
      v30 = *(System_String_o **)(v27 + 40);
      if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        v28 = ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      svtEntity = WrapControlText__textBBCodeAdjust(
                    v29,
                    v30,
                    v28->static_fields->DETAIL_FONT_SIZE,
                    v28->static_fields->DETAIL_FONT_SIZE,
                    0LL);
      v31 = this->fields.skillExplanationLabelList;
      if ( !v31 )
        goto LABEL_181;
      if ( v25 >= v31->max_length )
        goto LABEL_192;
      v32 = *((_QWORD *)&v31->obj.klass + v24);
      if ( !v32 )
        goto LABEL_181;
      v33 = *(_DWORD *)(v32 + 172);
      skillPitch = this->fields.skillPitch;
      v35 = v33 + ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v35 >= skillPitch )
      {
        svtEntity = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          svtEntity = (__int64)BalanceConfig_TypeInfo;
        }
        transformNameAddHeight += v35;
        if ( v25 == *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 32LL) - 1 )
          v23 |= v35 - this->fields.skillPitch > 10;
      }
      else
      {
        transformNameAddHeight += skillPitch;
      }
    }
    skillBaseList = this->fields.skillBaseList;
    ++v24;
    if ( !skillBaseList )
      goto LABEL_181;
  }
  v36 = transformNameAddHeight >= 0 ? transformNameAddHeight : transformNameAddHeight + 1;
  v37 = transformNameAddHeight - (v36 & 0xFFFFFFFE) + transformNameAddHeight;
  if ( item->fields._IsDisplayCombineButton_k__BackingField )
  {
    userSvtEntity = item->fields.userSvtEntity;
    v39 = v13;
    if ( userSvtEntity && !UserServantEntity__IsLeave(userSvtEntity, 0LL) )
    {
      ServantStatusListViewItem__GetSkillInfo(item, &v106, 0, 0LL);
      if ( !v106 )
        goto LABEL_181;
      v40 = v106->max_length;
      if ( v40 >= 1 )
      {
        v41 = 0;
        while ( 1 )
        {
          if ( v40 == v41 )
            goto LABEL_192;
          v42 = v106->m_Items[v41];
          if ( !v42 )
            goto LABEL_181;
          if ( v42->fields.isUse && v42->fields.lv <= 9 )
            break;
          if ( v40 == ++v41 )
            goto LABEL_68;
        }
        svtEntity = (__int64)this->fields.reinforceObject;
        if ( (v23 & 1) != 0 )
          v102 = 62;
        else
          v102 = 50;
        if ( !svtEntity )
          goto LABEL_181;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        svtEntity = (__int64)this->fields.reinforceButton;
        if ( !svtEntity )
          goto LABEL_181;
        *(_BYTE *)(svtEntity + 97) = 1;
        v37 += v102;
        UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
        if ( v37 >= 0 )
          v103 = v37;
        else
          v103 = v37 + 1;
        GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v103 >> 1), 0LL);
      }
    }
  }
  else
  {
    v39 = v13;
  }
LABEL_68:
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v47 = y + (float)v37;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    svtEntity = (__int64)this->fields.baseCollider;
    if ( !svtEntity )
      goto LABEL_181;
    v109.fields.x = x;
    v109.fields.y = v47;
    v109.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)svtEntity, v109, 0LL);
  }
  svtEntity = (__int64)this->fields.baseSprite;
  if ( !svtEntity )
    goto LABEL_181;
  v48 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)svtEntity, v48, 0LL);
  svtEntity = (__int64)this->fields.baseSprite;
  if ( !svtEntity )
    goto LABEL_181;
  v49 = v47 == INFINITY ? 0x80000000 : (int)v47;
  UIWidget__set_height((UIWidget_o *)svtEntity, v49, 0LL);
  svtEntity = (__int64)this->fields.titleSprite;
  v50 = v37 >= 0 ? v37 : v37 + 1;
  if ( !svtEntity )
    goto LABEL_181;
  v51 = this->fields.titleBasePosition.fields.x;
  v52 = this->fields.titleBasePosition.fields.y;
  v53 = this->fields.titleBasePosition.fields.z;
  svtEntity = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)svtEntity, 0LL);
  if ( !svtEntity
    || (v54 = v50 >> 1,
        v110.fields.y = v52 + (float)v54,
        v110.fields.x = v51,
        v110.fields.z = v53,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtEntity, v110, 0LL),
        (v55 = this->fields.skillBaseList) == 0LL) )
  {
LABEL_181:
    sub_1C22094(svtEntity, item);
  }
  v56 = this->fields.skillBasePosition.fields.z;
  v57 = this->fields.skillBasePosition.fields.x;
  v58 = 0;
  v59 = this->fields.skillBasePosition.fields.y + (float)(v54 + v105);
  while ( 1 )
  {
    v60 = v55->max_length;
    if ( v58 >= (int)v60 )
      break;
    if ( v58 >= (int)v39 )
    {
      if ( v58 >= v60 )
        goto LABEL_192;
      svtEntity = (__int64)v55->m_Items[v58];
      if ( !svtEntity )
        goto LABEL_181;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_181;
      if ( v58 >= skillInfoList->max_length || v58 >= v60 )
        goto LABEL_192;
      svtEntity = (__int64)v55->m_Items[v58];
      if ( !svtEntity )
        goto LABEL_181;
      v61 = v39;
      v62 = skillInfoList->m_Items[v58];
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
      if ( !v62 )
        goto LABEL_181;
      v63 = this->fields.skillBaseList;
      v64 = v62->fields.lv < 0 ? 0.5 : 1.0;
      if ( !v63 )
        goto LABEL_181;
      if ( v58 >= v63->max_length )
        goto LABEL_192;
      svtEntity = (__int64)v63->m_Items[v58];
      if ( !svtEntity )
        goto LABEL_181;
      svtEntity = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)svtEntity, 0LL);
      if ( !svtEntity )
        goto LABEL_181;
      v111.fields.x = v57;
      v111.fields.y = v59;
      v111.fields.z = v56;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtEntity, v111, 0LL);
      v65 = this->fields.skillIconList;
      if ( !v65 )
        goto LABEL_181;
      if ( v58 >= v65->max_length )
        goto LABEL_192;
      svtEntity = (__int64)v65->m_Items[v58];
      if ( !svtEntity )
        goto LABEL_181;
      SkillIconComponent__Set_39480384((SkillIconComponent_o *)svtEntity, v62->fields.id, v62->fields.lv, 0LL);
      if ( (v62->fields.lv & 0x80000000) != 0 || (v62->fields.charge & 0x80000000) != 0 )
      {
        chargeTitleSpriteList = this->fields.chargeTitleSpriteList;
        if ( !chargeTitleSpriteList )
          goto LABEL_181;
        if ( v58 >= chargeTitleSpriteList->max_length )
          goto LABEL_192;
        svtEntity = (__int64)chargeTitleSpriteList->m_Items[v58];
        if ( !svtEntity )
          goto LABEL_181;
        svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( !svtEntity )
          goto LABEL_181;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
        chargeDataLabelList = this->fields.chargeDataLabelList;
        if ( !chargeDataLabelList )
          goto LABEL_181;
        if ( v58 >= chargeDataLabelList->max_length )
          goto LABEL_192;
        svtEntity = (__int64)chargeDataLabelList->m_Items[v58];
        if ( !svtEntity )
          goto LABEL_181;
        v69 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        v66 = this->fields.chargeTitleSpriteList;
        if ( !v66 )
          goto LABEL_181;
        if ( v58 >= v66->max_length )
          goto LABEL_192;
        svtEntity = (__int64)v66->m_Items[v58];
        if ( !svtEntity )
          goto LABEL_181;
        svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( !svtEntity )
          goto LABEL_181;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        v67 = this->fields.chargeDataLabelList;
        if ( !v67 )
          goto LABEL_181;
        if ( v58 >= v67->max_length )
          goto LABEL_192;
        v68 = v67->m_Items[v58];
        svtEntity = (__int64)System_Int32__ToString((int)v62 + 24, 0LL);
        if ( !v68 )
          goto LABEL_181;
        v69 = (System_String_o *)svtEntity;
        svtEntity = (__int64)v68;
      }
      UILabel__set_text((UILabel_o *)svtEntity, v69, 0LL);
      v72 = this->fields.skillExplanationLabelList;
      if ( !v72 )
        goto LABEL_181;
      if ( v58 >= v72->max_length )
        goto LABEL_192;
      svtEntity = (__int64)v72->m_Items[v58];
      if ( !svtEntity )
        goto LABEL_181;
      v112.fields.a = 1.0;
      v112.fields.r = v64;
      v112.fields.g = v64;
      v112.fields.b = v64;
      UIWidget__set_color((UIWidget_o *)svtEntity, v112, 0LL);
      skillNameLabelList = this->fields.skillNameLabelList;
      if ( !skillNameLabelList )
        goto LABEL_181;
      if ( v58 >= skillNameLabelList->max_length )
        goto LABEL_192;
      svtEntity = (__int64)skillNameLabelList->m_Items[v58];
      if ( !svtEntity )
        goto LABEL_181;
      UILabel__set_text((UILabel_o *)svtEntity, v62->fields.title, 0LL);
      v74 = this->fields.skillNameLabelList;
      if ( !v74 )
        goto LABEL_181;
      if ( v58 >= v74->max_length )
        goto LABEL_192;
      svtEntity = (__int64)v74->m_Items[v58];
      if ( !svtEntity )
        goto LABEL_181;
      v113.fields.a = 1.0;
      v113.fields.r = v64;
      v113.fields.g = v64;
      v113.fields.b = v64;
      UIWidget__set_color((UIWidget_o *)svtEntity, v113, 0LL);
      v75 = this->fields.skillNameLabelList;
      if ( !v75 )
        goto LABEL_181;
      if ( v58 >= v75->max_length )
        goto LABEL_192;
      svtEntity = (__int64)v75->m_Items[v58];
      if ( !svtEntity )
        goto LABEL_181;
      UILabel__SetCondensedScale((UILabel_o *)svtEntity, 340, 0, 0LL);
      skillStrengthStatus = this->fields.skillStrengthStatus;
      if ( !skillStrengthStatus )
        goto LABEL_181;
      if ( v58 >= skillStrengthStatus->max_length )
        goto LABEL_192;
      lv = v62->fields.lv;
      v78 = (UnityEngine_Object_o *)skillStrengthStatus->m_Items[v58];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      svtEntity = UnityEngine_Object__op_Inequality(v78, 0LL, 0LL);
      if ( (lv & 0x80000000) != 0 )
      {
        v39 = v61;
        if ( (svtEntity & 1) != 0 )
        {
          v96 = this->fields.skillStrengthStatus;
          if ( !v96 )
            goto LABEL_181;
          if ( v58 >= v96->max_length )
            goto LABEL_192;
          svtEntity = (__int64)v96->m_Items[v58];
          if ( !svtEntity )
            goto LABEL_181;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)svtEntity,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
        }
      }
      else
      {
        if ( (svtEntity & 1) != 0 )
        {
          v79 = this->fields.skillStrengthStatus;
          if ( !v79 )
            goto LABEL_181;
          if ( v58 >= v79->max_length )
            goto LABEL_192;
          svtEntity = (__int64)v79->m_Items[v58];
          if ( !svtEntity )
            goto LABEL_181;
          v80 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70869612(v80, 0LL);
        }
        svtEntity = (__int64)ServantSkillStrengthStatus_TypeInfo;
        if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
          svtEntity = (__int64)ServantSkillStrengthStatus_TypeInfo;
        }
        v81 = this->fields.skillNameLabelList;
        if ( !v81 )
          goto LABEL_181;
        if ( v58 >= v81->max_length )
          goto LABEL_192;
        v82 = (UnityEngine_Component_o *)v81->m_Items[v58];
        if ( !v82 )
          goto LABEL_181;
        v83 = **(System_String_o ***)(svtEntity + 184);
        transform = UnityEngine_Component__get_transform(v82, 0LL);
        svtEntity = (__int64)BaseMonoBehaviour__CreateObjectStatic(v83, transform, 0LL, 0LL);
        if ( !svtEntity )
          goto LABEL_181;
        v85 = this->fields.skillStrengthStatus;
        svtEntity = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)svtEntity,
                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        if ( !v85 )
          goto LABEL_181;
        v92 = svtEntity;
        if ( svtEntity )
        {
          svtEntity = sub_1C21F74(svtEntity, v85->obj.klass->_1.element_class);
          if ( !svtEntity )
          {
            v104 = sub_1C220B8();
            sub_1C21F60(v104, 0LL);
          }
        }
        if ( v58 >= v85->max_length )
          goto LABEL_192;
        v93 = &v85->obj.klass + v58;
        v93[4] = (Il2CppClass *)v92;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v93 + 4), v92, v86, v87, v88, v89, v90, v91);
        v94 = this->fields.skillStrengthStatus;
        if ( !v94 )
          goto LABEL_181;
        if ( v58 >= v94->max_length )
          goto LABEL_192;
        v95 = this->fields.skillNameLabelList;
        if ( !v95 )
          goto LABEL_181;
        if ( v58 >= v95->max_length )
          goto LABEL_192;
        svtEntity = (__int64)v94->m_Items[v58];
        if ( !svtEntity )
          goto LABEL_181;
        v108 = (UnityEngine_Vector2Int_o)0x1600000018LL;
        ServantSkillStrengthStatus__Set(
          (ServantSkillStrengthStatus_o *)svtEntity,
          v95->m_Items[v58],
          v62->fields.strengthStatus,
          v62->fields.skillRecord,
          24,
          1,
          v108,
          0,
          0LL,
          0,
          0LL);
        v39 = v61;
      }
    }
    v98 = this->fields.skillExplanationLabelList;
    if ( !v98 )
      goto LABEL_181;
    if ( v58 >= v98->max_length )
      goto LABEL_192;
    v99 = v98->m_Items[v58];
    if ( v99 )
    {
      svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
      mHeight = v99->fields.mHeight;
      if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo);
        svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      ++v58;
      v55 = this->fields.skillBaseList;
      v101 = *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 4LL) + mHeight;
      if ( v101 < this->fields.skillPitch )
        v101 = this->fields.skillPitch;
      v59 = v59 - (float)v101;
      if ( v55 )
        continue;
    }
    goto LABEL_181;
  }
}