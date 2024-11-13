void __fastcall ServantStatusListViewItemDrawEquipSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct ServantStatusListViewItemDrawEquipSkill_StaticFields *static_fields; // x8

  if ( (byte_4B13201 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItemDrawEquipSkill_TypeInfo, v1, v2);
    byte_4B13201 = 1;
  }
  static_fields = ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DETAIL_FONT_SIZE = 0x1F400000012LL;
  static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawEquipSkill___ctor(
        ServantStatusListViewItemDrawEquipSkill_o *this,
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
  BalanceConfig_c *v12; // x0
  struct UnityEngine_GameObject_array *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct SkillIconComponent_array *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct UIRangeLabel_array *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct UILabel_array *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4B13200 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v4, v5);
    sub_1BCA7E0(&SkillIconComponent___TypeInfo, v6, v7);
    sub_1BCA7E0(&UILabel___TypeInfo, v8, v9);
    sub_1BCA7E0(&UIRangeLabel___TypeInfo, v10, v11);
    byte_4B13200 = 1;
  }
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v12 = BalanceConfig_TypeInfo;
  }
  v13 = (struct UnityEngine_GameObject_array *)sub_1BCA888(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)v12->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v13;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.skillBaseList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  v20 = (struct SkillIconComponent_array *)sub_1BCA888(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.skillIconList, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  v27 = (struct UIRangeLabel_array *)sub_1BCA888(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v27;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillTitleRangeLabelList,
    (int64_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (struct UILabel_array *)sub_1BCA888(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v34;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillExplanationLabelList,
    (int64_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawEquipSkill__Awake(
        ServantStatusListViewItemDrawEquipSkill_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  ServantStatusListViewItemDrawEquipSkill_o *v3; // x19
  float v4; // s1
  struct UnityEngine_GameObject_array *v5; // x8
  float v6; // s8
  float v7; // s1
  unsigned int v8; // w9
  struct UISprite_o *baseSprite; // x9
  int v10; // w20
  float v11; // s1
  float v12; // s0
  float v13; // s1
  float v14; // s2
  struct UnityEngine_GameObject_array *v15; // x8
  int v16; // w9
  float v17; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_24;
  v3 = this;
  if ( (int)skillBaseList->max_length >= 2 )
  {
    this = (ServantStatusListViewItemDrawEquipSkill_o *)skillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v4 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v5 = v3->fields.skillBaseList;
    if ( !v5 )
      goto LABEL_24;
    if ( v5->max_length <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawEquipSkill_o *)v5->m_Items[1];
    if ( !this )
      goto LABEL_24;
    v6 = v4;
    this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v7 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    skillBaseList = v3->fields.skillBaseList;
    v8 = (float)(v6 - v7) == INFINITY ? 0x80000000 : (int)(float)(v6 - v7);
    v3->fields.skillPitch = v8;
    if ( !skillBaseList )
      goto LABEL_24;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquipSkill_o *)v3->fields.titleSprite;
  v10 = v3->fields.skillPitch * skillBaseList->max_length;
  v11 = (float)(baseSprite->fields.mHeight - v10);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v11;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v15 = v3->fields.skillBaseList;
  v16 = v10 >= 0 ? v10 : v10 + 1;
  v17 = (float)(v16 >> 1);
  v3->fields.titleBasePosition.fields.x = v12;
  v3->fields.titleBasePosition.fields.y = v13 - v17;
  v3->fields.titleBasePosition.fields.z = v14;
  if ( !v15 )
LABEL_24:
    sub_1BCAA3C(this, method);
  if ( !v15->max_length )
LABEL_25:
    sub_1BCAA44(this, method);
  this = (ServantStatusListViewItemDrawEquipSkill_o *)v15->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.skillBasePosition.fields.x = localPosition.fields.x;
  v3->fields.skillBasePosition.fields.y = localPosition.fields.y - v17;
  v3->fields.skillBasePosition.fields.z = localPosition.fields.z;
}


int32_t __fastcall ServantStatusListViewItemDrawEquipSkill__GetKind(
        ServantStatusListViewItemDrawEquipSkill_o *this,
        const MethodInfo *method)
{
  return 12;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawEquipSkill__SetItem(
        ServantStatusListViewItemDrawEquipSkill_o *this,
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
  UILabel_o *explanationLabel; // x21
  UnityEngine_GameObject_o *baseSprite; // x0
  __int64 v15; // x1
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v17; // x10
  unsigned __int64 max_length; // x9
  signed int v19; // w22
  signed __int64 v20; // x8
  SkillInfo_o *v21; // x13
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  int v23; // w24
  __int64 v24; // x25
  unsigned __int64 v25; // x26
  unsigned __int64 v26; // x9
  __int64 v27; // x8
  struct UILabel_array *skillExplanationLabelList; // x9
  ServantStatusListViewItemDrawEquipSkill_c *v29; // x0
  UILabel_o *v30; // x20
  System_String_o *v31; // x21
  struct UILabel_array *v32; // x8
  __int64 v33; // x8
  int v34; // w10
  int32_t skillPitch; // w8
  int32_t v36; // w9
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  float v41; // s8
  int32_t v42; // w1
  int32_t v43; // w1
  int v44; // w20
  float v45; // s8
  float v46; // s11
  float v47; // s9
  float v48; // s10
  struct UnityEngine_GameObject_array *v49; // x8
  float v50; // s8
  float v51; // s9
  signed int v52; // w20
  float v53; // s10
  unsigned int v54; // w10
  SkillInfo_o *v55; // x24
  struct UnityEngine_GameObject_array *v56; // x8
  struct SkillIconComponent_array *v57; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  struct UILabel_array *v59; // x8
  UILabel_o *v60; // x8
  int32_t mHeight; // w21
  int32_t v62; // w9
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B131FF & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantStatusListViewItemDrawEquipSkill_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_12017/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v11, v12);
    byte_4B131FF = 1;
  }
  skillInfoList = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
  baseSprite = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12017/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_89;
  UILabel__set_text(explanationLabel, (System_String_o *)baseSprite, 0LL);
  ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0, 0LL);
  if ( !skillInfoList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_89;
  v17 = *(_QWORD *)&skillIconList->max_length;
  if ( v17 << 32 < 1 )
  {
    v19 = 0;
  }
  else
  {
    max_length = skillInfoList->max_length;
    v19 = 0;
    v20 = 0LL;
    do
    {
      if ( v20 < (int)max_length )
      {
        if ( v20 >= max_length )
LABEL_91:
          sub_1BCAA44(baseSprite, v15);
        v21 = skillInfoList->m_Items[v20];
        if ( v21 && v21->fields.id >= 1 )
          v19 = v20 + 1;
      }
      ++v20;
    }
    while ( v20 < (int)v17 );
  }
  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_89;
  v23 = 0;
  v24 = 4LL;
  while ( 1 )
  {
    v25 = v24 - 4;
    if ( v24 - 4 >= (int)skillBaseList->max_length )
      break;
    if ( skillInfoList )
    {
      v26 = skillInfoList->max_length;
      if ( (__int64)v25 < (int)v26 )
      {
        if ( v25 >= v26 )
          goto LABEL_91;
        v27 = *((_QWORD *)&skillInfoList->obj.klass + v24);
        if ( v27 )
        {
          if ( *(int *)(v27 + 16) >= 1 )
          {
            skillExplanationLabelList = this->fields.skillExplanationLabelList;
            if ( !skillExplanationLabelList )
              goto LABEL_89;
            if ( v25 >= skillExplanationLabelList->max_length )
              goto LABEL_91;
            v29 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            v30 = (UILabel_o *)*((_QWORD *)&skillExplanationLabelList->obj.klass + v24);
            v31 = *(System_String_o **)(v27 + 40);
            if ( !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo, v15);
              v29 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            }
            baseSprite = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                       v30,
                                                       v31,
                                                       v29->static_fields->DETAIL_FONT_SIZE,
                                                       v29->static_fields->DETAIL_FONT_SIZE,
                                                       v29->static_fields->MAX_HEIGHT,
                                                       0LL);
            v32 = this->fields.skillExplanationLabelList;
            if ( !v32 )
              goto LABEL_89;
            if ( v25 >= v32->max_length )
              goto LABEL_91;
            v33 = *((_QWORD *)&v32->obj.klass + v24);
            if ( !v33 )
              goto LABEL_89;
            v34 = *(_DWORD *)(v33 + 172);
            skillPitch = this->fields.skillPitch;
            v36 = ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->ADJUST_HEIGHT + v34;
            if ( v36 >= skillPitch )
              v23 += v36;
            else
              v23 += skillPitch;
          }
        }
      }
    }
    skillBaseList = this->fields.skillBaseList;
    ++v24;
    if ( !skillBaseList )
      goto LABEL_89;
  }
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  v41 = y + (float)v23;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !baseSprite )
      goto LABEL_89;
    v64.fields.x = x;
    v64.fields.y = v41;
    v64.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)baseSprite, v64, 0LL);
  }
  baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_89;
  v42 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)baseSprite, v42, 0LL);
  baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_89;
  v43 = v41 == INFINITY ? 0x80000000 : (int)v41;
  UIWidget__set_height((UIWidget_o *)baseSprite, v43, 0LL);
  baseSprite = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v44 = v23 >= 0 ? v23 : v23 + 1;
  if ( !baseSprite )
    goto LABEL_89;
  v45 = this->fields.titleBasePosition.fields.x;
  v46 = this->fields.titleBasePosition.fields.y;
  v47 = this->fields.titleBasePosition.fields.z;
  baseSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)baseSprite,
                                             0LL);
  if ( !baseSprite
    || (v48 = (float)(v44 >> 1),
        v65.fields.y = v46 + v48,
        v65.fields.x = v45,
        v65.fields.z = v47,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v65, 0LL),
        (v49 = this->fields.skillBaseList) == 0LL) )
  {
LABEL_89:
    sub_1BCAA3C(baseSprite, v15);
  }
  v50 = this->fields.skillBasePosition.fields.z;
  v51 = this->fields.skillBasePosition.fields.x;
  v52 = 0;
  v53 = this->fields.skillBasePosition.fields.y + v48;
  while ( 1 )
  {
    v54 = v49->max_length;
    if ( v52 >= (int)v54 )
      break;
    if ( v52 >= v19 )
    {
      if ( v52 >= v54 )
        goto LABEL_91;
      baseSprite = v49->m_Items[v52];
      if ( !baseSprite )
        goto LABEL_89;
      UnityEngine_GameObject__SetActive(baseSprite, 0, 0LL);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_89;
      if ( v52 >= skillInfoList->max_length || v52 >= v54 )
        goto LABEL_91;
      baseSprite = v49->m_Items[v52];
      if ( !baseSprite )
        goto LABEL_89;
      v55 = skillInfoList->m_Items[v52];
      UnityEngine_GameObject__SetActive(baseSprite, 1, 0LL);
      v56 = this->fields.skillBaseList;
      if ( !v56 )
        goto LABEL_89;
      if ( v52 >= v56->max_length )
        goto LABEL_91;
      baseSprite = v56->m_Items[v52];
      if ( !baseSprite )
        goto LABEL_89;
      baseSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSprite, 0LL);
      if ( !baseSprite )
        goto LABEL_89;
      v66.fields.x = v51;
      v66.fields.y = v53;
      v66.fields.z = v50;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v66, 0LL);
      v57 = this->fields.skillIconList;
      if ( !v57 )
        goto LABEL_89;
      if ( v52 >= v57->max_length )
        goto LABEL_91;
      if ( !v55 )
        goto LABEL_89;
      baseSprite = (UnityEngine_GameObject_o *)v57->m_Items[v52];
      if ( !baseSprite )
        goto LABEL_89;
      SkillIconComponent__Set((SkillIconComponent_o *)baseSprite, v55->fields.id, 0LL);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_89;
      if ( v52 >= skillTitleRangeLabelList->max_length )
        goto LABEL_91;
      baseSprite = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v52];
      if ( !baseSprite )
        goto LABEL_89;
      UIRangeLabel__Set((UIRangeLabel_o *)baseSprite, v55->fields.title, 0LL, 1, 0, 0LL);
    }
    v59 = this->fields.skillExplanationLabelList;
    if ( !v59 )
      goto LABEL_89;
    if ( v52 >= v59->max_length )
      goto LABEL_91;
    v60 = v59->m_Items[v52];
    if ( v60 )
    {
      baseSprite = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      mHeight = v60->fields.mHeight;
      if ( !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo, v15);
        baseSprite = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      }
      ++v52;
      v49 = this->fields.skillBaseList;
      v62 = *(_DWORD *)(*(_QWORD *)&baseSprite[7].fields.m_CachedPtr + 8LL) + mHeight;
      if ( v62 < this->fields.skillPitch )
        v62 = this->fields.skillPitch;
      v53 = v53 - (float)v62;
      if ( v49 )
        continue;
    }
    goto LABEL_89;
  }
}