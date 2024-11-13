void __fastcall ServantStatusListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct ServantStatusListViewItemDrawSkill_StaticFields *static_fields; // x8

  if ( (byte_4B13225 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItemDrawSkill_TypeInfo, v1, v2);
    byte_4B13225 = 1;
  }
  static_fields = ServantStatusListViewItemDrawSkill_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DETAIL_FONT_SIZE = 0x1F400000012LL;
  static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawSkill___ctor(
        ServantStatusListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  BalanceConfig_c *v14; // x0
  struct UnityEngine_GameObject_array *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct SkillIconComponent_array *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct UISprite_array *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct UILabel_array *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct UILabel_array *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct ServantSkillStrengthStatus_array *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct UILabel_array *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7

  if ( (byte_4B13224 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v4, v5);
    sub_1BCA7E0(&ServantSkillStrengthStatus___TypeInfo, v6, v7);
    sub_1BCA7E0(&SkillIconComponent___TypeInfo, v8, v9);
    sub_1BCA7E0(&UILabel___TypeInfo, v10, v11);
    sub_1BCA7E0(&UISprite___TypeInfo, v12, v13);
    byte_4B13224 = 1;
  }
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = (struct UnityEngine_GameObject_array *)sub_1BCA888(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)v14->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.skillBaseList, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (struct SkillIconComponent_array *)sub_1BCA888(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.skillIconList, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = (struct UISprite_array *)sub_1BCA888(
                                   UISprite___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.chargeTitleSpriteList = v29;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.chargeTitleSpriteList,
    (int64_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (struct UILabel_array *)sub_1BCA888(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.chargeDataLabelList = v36;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.chargeDataLabelList,
    (int64_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (struct UILabel_array *)sub_1BCA888(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillNameLabelList = v43;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillNameLabelList,
    (int64_t)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = (struct ServantSkillStrengthStatus_array *)sub_1BCA888(
                                                     ServantSkillStrengthStatus___TypeInfo,
                                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillStrengthStatus = v50;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillStrengthStatus,
    (int64_t)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v57 = (struct UILabel_array *)sub_1BCA888(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v57;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillExplanationLabelList,
    (int64_t)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
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
    sub_1BCAA3C(this, method);
  if ( !v17->max_length )
LABEL_28:
    sub_1BCAA44(this, method);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawSkill__SetItem(
        ServantStatusListViewItemDrawSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 svtEntity; // x0
  UILabel_o *explanationLabel; // x21
  __int64 v25; // x1
  System_String_o **v26; // x8
  System_String_o *v27; // x22
  int32_t SvtId; // w21
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v30; // x24
  __int64 v31; // x23
  __int64 v32; // x9
  unsigned __int64 max_length; // x11
  SkillInfo_o *v34; // x22
  int64_t UserId; // x0
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x21
  int32_t transformNameAddHeight; // w27
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  char v40; // w25
  __int64 v41; // x29
  unsigned __int64 v42; // x23
  struct UILabel_array *skillExplanationLabelList; // x9
  __int64 v44; // x8
  ServantStatusListViewItemDrawSkill_c *v45; // x0
  UILabel_o *v46; // x21
  System_String_o *v47; // x22
  struct UILabel_array *v48; // x8
  __int64 v49; // x8
  int v50; // w10
  int32_t skillPitch; // w8
  int v52; // w21
  int32_t v53; // w9
  int v54; // w21
  UserServantEntity_o *userSvtEntity; // x0
  __int64 v56; // x26
  signed int v57; // w9
  int v58; // w10
  SkillInfo_o *v59; // x11
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  float v64; // s8
  int32_t v65; // w1
  int32_t v66; // w1
  int v67; // w20
  float v68; // s8
  float v69; // s10
  float v70; // s9
  int v71; // w20
  struct UnityEngine_GameObject_array *v72; // x8
  float v73; // s8
  float v74; // s9
  signed int v75; // w25
  float v76; // s10
  unsigned int v77; // w10
  __int64 v78; // x23
  SkillInfo_o *v79; // x26
  struct UnityEngine_GameObject_array *v80; // x8
  float v81; // s11
  struct SkillIconComponent_array *v82; // x8
  struct UISprite_array *v83; // x8
  struct UILabel_array *v84; // x8
  UILabel_o *v85; // x21
  System_String_o *v86; // x1
  struct UISprite_array *chargeTitleSpriteList; // x8
  struct UILabel_array *chargeDataLabelList; // x8
  struct UILabel_array *v89; // x8
  struct UILabel_array *skillNameLabelList; // x8
  struct UILabel_array *v91; // x8
  struct UILabel_array *v92; // x8
  struct ServantSkillStrengthStatus_array *skillStrengthStatus; // x8
  int32_t lv; // w21
  UnityEngine_Object_o *v95; // x20
  struct ServantSkillStrengthStatus_array *v96; // x8
  __int64 v97; // x1
  UnityEngine_Object_o *v98; // x20
  struct UILabel_array *v99; // x8
  UnityEngine_Component_o *v100; // x8
  System_String_o *v101; // x20
  UnityEngine_Transform_o *transform; // x0
  struct ServantSkillStrengthStatus_array *v103; // x21
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  int64_t v110; // x20
  Il2CppClass **v111; // x0
  struct ServantSkillStrengthStatus_array *v112; // x8
  struct UILabel_array *v113; // x9
  struct ServantSkillStrengthStatus_array *v114; // x8
  __int64 v115; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct UILabel_array *v117; // x8
  UILabel_o *v118; // x8
  int32_t mHeight; // w20
  int32_t v120; // w9
  int v121; // w22
  int v122; // w8
  __int64 v123; // x0
  int v124; // [xsp+4h] [xbp-ACh]
  SkillInfo_array *v125; // [xsp+10h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-98h] BYREF
  UnityEngine_Vector2Int_o v127; // 0:x6.8
  UnityEngine_Vector3_o v128; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v130; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v131; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v132; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B13223 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantSkillStrengthStatus_TypeInfo, v13, v14);
    sub_1BCA7E0(&ServantStatusListViewItemDrawSkill_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_12017/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_12015/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    byte_4B13223 = 1;
  }
  v125 = 0LL;
  skillInfoList = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  svtEntity = (__int64)item->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_181;
  explanationLabel = this->fields.explanationLabel;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0LL) )
    v26 = (System_String_o **)&StringLiteral_12017/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
  else
    v26 = (System_String_o **)&StringLiteral_12015/*"SERVANT_STATUS_EXPLANATION_SKILL_ACTIVE"*/;
  v27 = *v26;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
  svtEntity = (__int64)LocalizationManager__Get(v27, 0LL);
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
  v30 = 0LL;
  v31 = 4LL;
  while ( 1 )
  {
    v32 = v31 - 4;
    if ( v31 - 4 >= (int)skillIconList->max_length )
      break;
    if ( skillInfoList )
    {
      max_length = skillInfoList->max_length;
      if ( v32 < (int)max_length )
      {
        if ( v32 >= max_length )
LABEL_192:
          sub_1BCAA44(svtEntity, item);
        v34 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + v31);
        if ( v34 )
        {
          if ( v34->fields.id >= 1 )
          {
            UserId = ServantStatusListViewItem__get_UserId(item, 0LL);
            SkillInfo__OverwriteNextSkill(v34, UserId, SvtId, 0LL);
            skillIconList = this->fields.skillIconList;
            v30 = (unsigned int)(v31 - 3);
          }
        }
      }
      ++v31;
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
    v124 = -transformNameAddHeight;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
    transformNameAddHeight = 0;
    v124 = 0;
  }
  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_181;
  v40 = 0;
  v41 = 4LL;
  while ( 1 )
  {
    v42 = v41 - 4;
    if ( v41 - 4 >= (int)skillBaseList->max_length )
      break;
    if ( (__int64)v42 < (int)v30 )
    {
      if ( !skillInfoList )
        goto LABEL_181;
      if ( v42 >= skillInfoList->max_length )
        goto LABEL_192;
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_181;
      if ( v42 >= skillExplanationLabelList->max_length )
        goto LABEL_192;
      v44 = *((_QWORD *)&skillInfoList->obj.klass + v41);
      if ( !v44 )
        goto LABEL_181;
      v45 = ServantStatusListViewItemDrawSkill_TypeInfo;
      v46 = (UILabel_o *)*((_QWORD *)&skillExplanationLabelList->obj.klass + v41);
      v47 = *(System_String_o **)(v44 + 40);
      if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo, item);
        v45 = ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      svtEntity = WrapControlText__textBBCodeAdjust(
                    v46,
                    v47,
                    v45->static_fields->DETAIL_FONT_SIZE,
                    v45->static_fields->DETAIL_FONT_SIZE,
                    v45->static_fields->MAX_HEIGHT,
                    0LL);
      v48 = this->fields.skillExplanationLabelList;
      if ( !v48 )
        goto LABEL_181;
      if ( v42 >= v48->max_length )
        goto LABEL_192;
      v49 = *((_QWORD *)&v48->obj.klass + v41);
      if ( !v49 )
        goto LABEL_181;
      v50 = *(_DWORD *)(v49 + 172);
      skillPitch = this->fields.skillPitch;
      v52 = v50 + ServantStatusListViewItemDrawSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v52 >= skillPitch )
      {
        svtEntity = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item);
          svtEntity = (__int64)BalanceConfig_TypeInfo;
        }
        transformNameAddHeight += v52;
        if ( v42 == *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 32LL) - 1 )
          v40 |= v52 - this->fields.skillPitch > 10;
      }
      else
      {
        transformNameAddHeight += skillPitch;
      }
    }
    skillBaseList = this->fields.skillBaseList;
    ++v41;
    if ( !skillBaseList )
      goto LABEL_181;
  }
  v53 = transformNameAddHeight >= 0 ? transformNameAddHeight : transformNameAddHeight + 1;
  v54 = transformNameAddHeight - (v53 & 0xFFFFFFFE) + transformNameAddHeight;
  if ( item->fields._IsDisplayCombineButton_k__BackingField )
  {
    userSvtEntity = item->fields.userSvtEntity;
    v56 = v30;
    if ( userSvtEntity && !UserServantEntity__IsLeave(userSvtEntity, 0LL) )
    {
      ServantStatusListViewItem__GetSkillInfo(item, &v125, 0, 0LL);
      if ( !v125 )
        goto LABEL_181;
      v57 = v125->max_length;
      if ( v57 >= 1 )
      {
        v58 = 0;
        while ( 1 )
        {
          if ( v57 == v58 )
            goto LABEL_192;
          v59 = v125->m_Items[v58];
          if ( !v59 )
            goto LABEL_181;
          if ( v59->fields.isUse && v59->fields.lv <= 9 )
            break;
          if ( v57 == ++v58 )
            goto LABEL_68;
        }
        svtEntity = (__int64)this->fields.reinforceObject;
        if ( (v40 & 1) != 0 )
          v121 = 62;
        else
          v121 = 50;
        if ( !svtEntity )
          goto LABEL_181;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        svtEntity = (__int64)this->fields.reinforceButton;
        if ( !svtEntity )
          goto LABEL_181;
        *(_BYTE *)(svtEntity + 97) = 1;
        v54 += v121;
        UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
        if ( v54 >= 0 )
          v122 = v54;
        else
          v122 = v54 + 1;
        GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v122 >> 1), 0LL);
      }
    }
  }
  else
  {
    v56 = v30;
  }
LABEL_68:
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  v64 = y + (float)v54;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    svtEntity = (__int64)this->fields.baseCollider;
    if ( !svtEntity )
      goto LABEL_181;
    v128.fields.x = x;
    v128.fields.y = v64;
    v128.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)svtEntity, v128, 0LL);
  }
  svtEntity = (__int64)this->fields.baseSprite;
  if ( !svtEntity )
    goto LABEL_181;
  v65 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)svtEntity, v65, 0LL);
  svtEntity = (__int64)this->fields.baseSprite;
  if ( !svtEntity )
    goto LABEL_181;
  v66 = v64 == INFINITY ? 0x80000000 : (int)v64;
  UIWidget__set_height((UIWidget_o *)svtEntity, v66, 0LL);
  svtEntity = (__int64)this->fields.titleSprite;
  v67 = v54 >= 0 ? v54 : v54 + 1;
  if ( !svtEntity )
    goto LABEL_181;
  v68 = this->fields.titleBasePosition.fields.x;
  v69 = this->fields.titleBasePosition.fields.y;
  v70 = this->fields.titleBasePosition.fields.z;
  svtEntity = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)svtEntity, 0LL);
  if ( !svtEntity
    || (v71 = v67 >> 1,
        v129.fields.y = v69 + (float)v71,
        v129.fields.x = v68,
        v129.fields.z = v70,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtEntity, v129, 0LL),
        (v72 = this->fields.skillBaseList) == 0LL) )
  {
LABEL_181:
    sub_1BCAA3C(svtEntity, item);
  }
  v73 = this->fields.skillBasePosition.fields.z;
  v74 = this->fields.skillBasePosition.fields.x;
  v75 = 0;
  v76 = this->fields.skillBasePosition.fields.y + (float)(v71 + v124);
  while ( 1 )
  {
    v77 = v72->max_length;
    if ( v75 >= (int)v77 )
      break;
    if ( v75 >= (int)v56 )
    {
      if ( v75 >= v77 )
        goto LABEL_192;
      svtEntity = (__int64)v72->m_Items[v75];
      if ( !svtEntity )
        goto LABEL_181;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_181;
      if ( v75 >= skillInfoList->max_length || v75 >= v77 )
        goto LABEL_192;
      svtEntity = (__int64)v72->m_Items[v75];
      if ( !svtEntity )
        goto LABEL_181;
      v78 = v56;
      v79 = skillInfoList->m_Items[v75];
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
      if ( !v79 )
        goto LABEL_181;
      v80 = this->fields.skillBaseList;
      v81 = v79->fields.lv < 0 ? 0.5 : 1.0;
      if ( !v80 )
        goto LABEL_181;
      if ( v75 >= v80->max_length )
        goto LABEL_192;
      svtEntity = (__int64)v80->m_Items[v75];
      if ( !svtEntity )
        goto LABEL_181;
      svtEntity = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)svtEntity, 0LL);
      if ( !svtEntity )
        goto LABEL_181;
      v130.fields.x = v74;
      v130.fields.y = v76;
      v130.fields.z = v73;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtEntity, v130, 0LL);
      v82 = this->fields.skillIconList;
      if ( !v82 )
        goto LABEL_181;
      if ( v75 >= v82->max_length )
        goto LABEL_192;
      svtEntity = (__int64)v82->m_Items[v75];
      if ( !svtEntity )
        goto LABEL_181;
      SkillIconComponent__Set_38947272((SkillIconComponent_o *)svtEntity, v79->fields.id, v79->fields.lv, 0LL);
      if ( (v79->fields.lv & 0x80000000) != 0 || (v79->fields.charge & 0x80000000) != 0 )
      {
        chargeTitleSpriteList = this->fields.chargeTitleSpriteList;
        if ( !chargeTitleSpriteList )
          goto LABEL_181;
        if ( v75 >= chargeTitleSpriteList->max_length )
          goto LABEL_192;
        svtEntity = (__int64)chargeTitleSpriteList->m_Items[v75];
        if ( !svtEntity )
          goto LABEL_181;
        svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( !svtEntity )
          goto LABEL_181;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
        chargeDataLabelList = this->fields.chargeDataLabelList;
        if ( !chargeDataLabelList )
          goto LABEL_181;
        if ( v75 >= chargeDataLabelList->max_length )
          goto LABEL_192;
        svtEntity = (__int64)chargeDataLabelList->m_Items[v75];
        if ( !svtEntity )
          goto LABEL_181;
        v86 = (System_String_o *)StringLiteral_1/*""*/;
      }
      else
      {
        v83 = this->fields.chargeTitleSpriteList;
        if ( !v83 )
          goto LABEL_181;
        if ( v75 >= v83->max_length )
          goto LABEL_192;
        svtEntity = (__int64)v83->m_Items[v75];
        if ( !svtEntity )
          goto LABEL_181;
        svtEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( !svtEntity )
          goto LABEL_181;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        v84 = this->fields.chargeDataLabelList;
        if ( !v84 )
          goto LABEL_181;
        if ( v75 >= v84->max_length )
          goto LABEL_192;
        v85 = v84->m_Items[v75];
        svtEntity = (__int64)System_Int32__ToString((int)v79 + 24, 0LL);
        if ( !v85 )
          goto LABEL_181;
        v86 = (System_String_o *)svtEntity;
        svtEntity = (__int64)v85;
      }
      UILabel__set_text((UILabel_o *)svtEntity, v86, 0LL);
      v89 = this->fields.skillExplanationLabelList;
      if ( !v89 )
        goto LABEL_181;
      if ( v75 >= v89->max_length )
        goto LABEL_192;
      svtEntity = (__int64)v89->m_Items[v75];
      if ( !svtEntity )
        goto LABEL_181;
      v131.fields.a = 1.0;
      v131.fields.r = v81;
      v131.fields.g = v81;
      v131.fields.b = v81;
      UIWidget__set_color((UIWidget_o *)svtEntity, v131, 0LL);
      skillNameLabelList = this->fields.skillNameLabelList;
      if ( !skillNameLabelList )
        goto LABEL_181;
      if ( v75 >= skillNameLabelList->max_length )
        goto LABEL_192;
      svtEntity = (__int64)skillNameLabelList->m_Items[v75];
      if ( !svtEntity )
        goto LABEL_181;
      UILabel__set_text((UILabel_o *)svtEntity, v79->fields.title, 0LL);
      v91 = this->fields.skillNameLabelList;
      if ( !v91 )
        goto LABEL_181;
      if ( v75 >= v91->max_length )
        goto LABEL_192;
      svtEntity = (__int64)v91->m_Items[v75];
      if ( !svtEntity )
        goto LABEL_181;
      v132.fields.a = 1.0;
      v132.fields.r = v81;
      v132.fields.g = v81;
      v132.fields.b = v81;
      UIWidget__set_color((UIWidget_o *)svtEntity, v132, 0LL);
      v92 = this->fields.skillNameLabelList;
      if ( !v92 )
        goto LABEL_181;
      if ( v75 >= v92->max_length )
        goto LABEL_192;
      svtEntity = (__int64)v92->m_Items[v75];
      if ( !svtEntity )
        goto LABEL_181;
      UILabel__SetCondensedScale((UILabel_o *)svtEntity, 340, 0LL);
      skillStrengthStatus = this->fields.skillStrengthStatus;
      if ( !skillStrengthStatus )
        goto LABEL_181;
      if ( v75 >= skillStrengthStatus->max_length )
        goto LABEL_192;
      lv = v79->fields.lv;
      v95 = (UnityEngine_Object_o *)skillStrengthStatus->m_Items[v75];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      svtEntity = UnityEngine_Object__op_Inequality(v95, 0LL, 0LL);
      if ( (lv & 0x80000000) != 0 )
      {
        v56 = v78;
        if ( (svtEntity & 1) != 0 )
        {
          v114 = this->fields.skillStrengthStatus;
          if ( !v114 )
            goto LABEL_181;
          if ( v75 >= v114->max_length )
            goto LABEL_192;
          svtEntity = (__int64)v114->m_Items[v75];
          if ( !svtEntity )
            goto LABEL_181;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)svtEntity,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v115);
          UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
        }
      }
      else
      {
        if ( (svtEntity & 1) != 0 )
        {
          v96 = this->fields.skillStrengthStatus;
          if ( !v96 )
            goto LABEL_181;
          if ( v75 >= v96->max_length )
            goto LABEL_192;
          svtEntity = (__int64)v96->m_Items[v75];
          if ( !svtEntity )
            goto LABEL_181;
          v98 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v97);
          UnityEngine_Object__Destroy_70154244(v98, 0LL);
        }
        svtEntity = (__int64)ServantSkillStrengthStatus_TypeInfo;
        if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, item);
          svtEntity = (__int64)ServantSkillStrengthStatus_TypeInfo;
        }
        v99 = this->fields.skillNameLabelList;
        if ( !v99 )
          goto LABEL_181;
        if ( v75 >= v99->max_length )
          goto LABEL_192;
        v100 = (UnityEngine_Component_o *)v99->m_Items[v75];
        if ( !v100 )
          goto LABEL_181;
        v101 = **(System_String_o ***)(svtEntity + 184);
        transform = UnityEngine_Component__get_transform(v100, 0LL);
        svtEntity = (__int64)BaseMonoBehaviour__CreateObjectStatic(v101, transform, 0LL, 0LL);
        if ( !svtEntity )
          goto LABEL_181;
        v103 = this->fields.skillStrengthStatus;
        svtEntity = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)svtEntity,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        if ( !v103 )
          goto LABEL_181;
        v110 = svtEntity;
        if ( svtEntity )
        {
          svtEntity = sub_1BCA91C(svtEntity, v103->obj.klass->_1.element_class);
          if ( !svtEntity )
          {
            v123 = sub_1BCAA60();
            sub_1BCA908(v123, 0LL);
          }
        }
        if ( v75 >= v103->max_length )
          goto LABEL_192;
        v111 = &v103->obj.klass + v75;
        v111[4] = (Il2CppClass *)v110;
        sub_1BCA784((PartyOrganizationUtility_o *)(v111 + 4), v110, v104, v105, v106, v107, v108, v109);
        v112 = this->fields.skillStrengthStatus;
        if ( !v112 )
          goto LABEL_181;
        if ( v75 >= v112->max_length )
          goto LABEL_192;
        v113 = this->fields.skillNameLabelList;
        if ( !v113 )
          goto LABEL_181;
        if ( v75 >= v113->max_length )
          goto LABEL_192;
        svtEntity = (__int64)v112->m_Items[v75];
        if ( !svtEntity )
          goto LABEL_181;
        v127 = (UnityEngine_Vector2Int_o)0x1600000018LL;
        ServantSkillStrengthStatus__Set(
          (ServantSkillStrengthStatus_o *)svtEntity,
          v113->m_Items[v75],
          v79->fields.strengthStatus,
          v79->fields.skillRecord,
          24,
          1,
          v127,
          0LL);
        v56 = v78;
      }
    }
    v117 = this->fields.skillExplanationLabelList;
    if ( !v117 )
      goto LABEL_181;
    if ( v75 >= v117->max_length )
      goto LABEL_192;
    v118 = v117->m_Items[v75];
    if ( v118 )
    {
      svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
      mHeight = v118->fields.mHeight;
      if ( !ServantStatusListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawSkill_TypeInfo, item);
        svtEntity = (__int64)ServantStatusListViewItemDrawSkill_TypeInfo;
      }
      ++v75;
      v72 = this->fields.skillBaseList;
      v120 = *(_DWORD *)(*(_QWORD *)(svtEntity + 184) + 8LL) + mHeight;
      if ( v120 < this->fields.skillPitch )
        v120 = this->fields.skillPitch;
      v76 = v76 - (float)v120;
      if ( v72 )
        continue;
    }
    goto LABEL_181;
  }
}