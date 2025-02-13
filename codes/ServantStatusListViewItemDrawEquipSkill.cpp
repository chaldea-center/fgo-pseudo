void __fastcall ServantStatusListViewItemDrawEquipSkill___cctor(const MethodInfo *method)
{
  if ( (byte_4BD94D4 & 1) == 0 )
  {
    sub_1C21E38(&ServantStatusListViewItemDrawEquipSkill_TypeInfo);
    byte_4BD94D4 = 1;
  }
  *ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawEquipSkill_StaticFields)0x2800000012LL;
}


void __fastcall ServantStatusListViewItemDrawEquipSkill___ctor(
        ServantStatusListViewItemDrawEquipSkill_o *this,
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
  struct UIRangeLabel_array *v18; // x0
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

  if ( (byte_4BD94D3 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&UnityEngine_GameObject___TypeInfo);
    sub_1C21E38(&SkillIconComponent___TypeInfo);
    sub_1C21E38(&UILabel___TypeInfo);
    sub_1C21E38(&UIRangeLabel___TypeInfo);
    byte_4BD94D3 = 1;
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
  v18 = (struct UIRangeLabel_array *)sub_1C21EE0(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v18;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.skillTitleRangeLabelList,
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
  this->fields.skillExplanationLabelList = v25;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.skillExplanationLabelList,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
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
    sub_1C22094(this, method);
  if ( !v15->max_length )
LABEL_25:
    sub_1C2209C(this, method);
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


void __fastcall ServantStatusListViewItemDrawEquipSkill__SetItem(
        ServantStatusListViewItemDrawEquipSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UILabel_o *explanationLabel; // x21
  UnityEngine_GameObject_o *baseSprite; // x0
  __int64 v9; // x1
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v11; // x10
  unsigned __int64 max_length; // x9
  signed int v13; // w22
  signed __int64 v14; // x8
  SkillInfo_o *v15; // x13
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  int v17; // w24
  __int64 v18; // x25
  unsigned __int64 v19; // x26
  unsigned __int64 v20; // x9
  __int64 v21; // x8
  struct UILabel_array *skillExplanationLabelList; // x9
  ServantStatusListViewItemDrawEquipSkill_c *v23; // x0
  UILabel_o *v24; // x20
  System_String_o *v25; // x21
  struct UILabel_array *v26; // x8
  __int64 v27; // x8
  int v28; // w10
  int32_t skillPitch; // w8
  int32_t v30; // w9
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  float v35; // s8
  int32_t v36; // w1
  int32_t v37; // w1
  int v38; // w20
  float v39; // s8
  float v40; // s11
  float v41; // s9
  float v42; // s10
  struct UnityEngine_GameObject_array *v43; // x8
  float v44; // s8
  float v45; // s9
  signed int v46; // w20
  float v47; // s10
  unsigned int v48; // w10
  SkillInfo_o *v49; // x24
  struct UnityEngine_GameObject_array *v50; // x8
  struct SkillIconComponent_array *v51; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  struct UILabel_array *v53; // x8
  UILabel_o *v54; // x8
  int32_t mHeight; // w21
  int32_t v56; // w9
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD94D2 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantStatusListViewItemDrawEquipSkill_TypeInfo);
    sub_1C21E38(&StringLiteral_12098/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    byte_4BD94D2 = 1;
  }
  skillInfoList = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseSprite = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12098/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_89;
  UILabel__set_text(explanationLabel, (System_String_o *)baseSprite, 0LL);
  ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0, 0LL);
  if ( !skillInfoList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_89;
  v11 = *(_QWORD *)&skillIconList->max_length;
  if ( v11 << 32 < 1 )
  {
    v13 = 0;
  }
  else
  {
    max_length = skillInfoList->max_length;
    v13 = 0;
    v14 = 0LL;
    do
    {
      if ( v14 < (int)max_length )
      {
        if ( v14 >= max_length )
LABEL_91:
          sub_1C2209C(baseSprite, v9);
        v15 = skillInfoList->m_Items[v14];
        if ( v15 && v15->fields.id >= 1 )
          v13 = v14 + 1;
      }
      ++v14;
    }
    while ( v14 < (int)v11 );
  }
  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_89;
  v17 = 0;
  v18 = 4LL;
  while ( 1 )
  {
    v19 = v18 - 4;
    if ( v18 - 4 >= (int)skillBaseList->max_length )
      break;
    if ( skillInfoList )
    {
      v20 = skillInfoList->max_length;
      if ( (__int64)v19 < (int)v20 )
      {
        if ( v19 >= v20 )
          goto LABEL_91;
        v21 = *((_QWORD *)&skillInfoList->obj.klass + v18);
        if ( v21 )
        {
          if ( *(int *)(v21 + 16) >= 1 )
          {
            skillExplanationLabelList = this->fields.skillExplanationLabelList;
            if ( !skillExplanationLabelList )
              goto LABEL_89;
            if ( v19 >= skillExplanationLabelList->max_length )
              goto LABEL_91;
            v23 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            v24 = (UILabel_o *)*((_QWORD *)&skillExplanationLabelList->obj.klass + v18);
            v25 = *(System_String_o **)(v21 + 40);
            if ( !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
              v23 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            }
            baseSprite = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                       v24,
                                                       v25,
                                                       v23->static_fields->DETAIL_FONT_SIZE,
                                                       v23->static_fields->DETAIL_FONT_SIZE,
                                                       0LL);
            v26 = this->fields.skillExplanationLabelList;
            if ( !v26 )
              goto LABEL_89;
            if ( v19 >= v26->max_length )
              goto LABEL_91;
            v27 = *((_QWORD *)&v26->obj.klass + v18);
            if ( !v27 )
              goto LABEL_89;
            v28 = *(_DWORD *)(v27 + 172);
            skillPitch = this->fields.skillPitch;
            v30 = ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->ADJUST_HEIGHT + v28;
            if ( v30 >= skillPitch )
              v17 += v30;
            else
              v17 += skillPitch;
          }
        }
      }
    }
    skillBaseList = this->fields.skillBaseList;
    ++v18;
    if ( !skillBaseList )
      goto LABEL_89;
  }
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v35 = y + (float)v17;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !baseSprite )
      goto LABEL_89;
    v58.fields.x = x;
    v58.fields.y = v35;
    v58.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)baseSprite, v58, 0LL);
  }
  baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_89;
  v36 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)baseSprite, v36, 0LL);
  baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_89;
  v37 = v35 == INFINITY ? 0x80000000 : (int)v35;
  UIWidget__set_height((UIWidget_o *)baseSprite, v37, 0LL);
  baseSprite = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v38 = v17 >= 0 ? v17 : v17 + 1;
  if ( !baseSprite )
    goto LABEL_89;
  v39 = this->fields.titleBasePosition.fields.x;
  v40 = this->fields.titleBasePosition.fields.y;
  v41 = this->fields.titleBasePosition.fields.z;
  baseSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)baseSprite,
                                             0LL);
  if ( !baseSprite
    || (v42 = (float)(v38 >> 1),
        v59.fields.y = v40 + v42,
        v59.fields.x = v39,
        v59.fields.z = v41,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v59, 0LL),
        (v43 = this->fields.skillBaseList) == 0LL) )
  {
LABEL_89:
    sub_1C22094(baseSprite, v9);
  }
  v44 = this->fields.skillBasePosition.fields.z;
  v45 = this->fields.skillBasePosition.fields.x;
  v46 = 0;
  v47 = this->fields.skillBasePosition.fields.y + v42;
  while ( 1 )
  {
    v48 = v43->max_length;
    if ( v46 >= (int)v48 )
      break;
    if ( v46 >= v13 )
    {
      if ( v46 >= v48 )
        goto LABEL_91;
      baseSprite = v43->m_Items[v46];
      if ( !baseSprite )
        goto LABEL_89;
      UnityEngine_GameObject__SetActive(baseSprite, 0, 0LL);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_89;
      if ( v46 >= skillInfoList->max_length || v46 >= v48 )
        goto LABEL_91;
      baseSprite = v43->m_Items[v46];
      if ( !baseSprite )
        goto LABEL_89;
      v49 = skillInfoList->m_Items[v46];
      UnityEngine_GameObject__SetActive(baseSprite, 1, 0LL);
      v50 = this->fields.skillBaseList;
      if ( !v50 )
        goto LABEL_89;
      if ( v46 >= v50->max_length )
        goto LABEL_91;
      baseSprite = v50->m_Items[v46];
      if ( !baseSprite )
        goto LABEL_89;
      baseSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSprite, 0LL);
      if ( !baseSprite )
        goto LABEL_89;
      v60.fields.x = v45;
      v60.fields.y = v47;
      v60.fields.z = v44;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v60, 0LL);
      v51 = this->fields.skillIconList;
      if ( !v51 )
        goto LABEL_89;
      if ( v46 >= v51->max_length )
        goto LABEL_91;
      if ( !v49 )
        goto LABEL_89;
      baseSprite = (UnityEngine_GameObject_o *)v51->m_Items[v46];
      if ( !baseSprite )
        goto LABEL_89;
      SkillIconComponent__Set((SkillIconComponent_o *)baseSprite, v49->fields.id, 0LL);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_89;
      if ( v46 >= skillTitleRangeLabelList->max_length )
        goto LABEL_91;
      baseSprite = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v46];
      if ( !baseSprite )
        goto LABEL_89;
      UIRangeLabel__Set((UIRangeLabel_o *)baseSprite, v49->fields.title, 0LL, 1, 0, 0LL);
    }
    v53 = this->fields.skillExplanationLabelList;
    if ( !v53 )
      goto LABEL_89;
    if ( v46 >= v53->max_length )
      goto LABEL_91;
    v54 = v53->m_Items[v46];
    if ( v54 )
    {
      baseSprite = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      mHeight = v54->fields.mHeight;
      if ( !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
        baseSprite = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      }
      ++v46;
      v43 = this->fields.skillBaseList;
      v56 = *(_DWORD *)(*(_QWORD *)&baseSprite[7].fields.m_CachedPtr + 4LL) + mHeight;
      if ( v56 < this->fields.skillPitch )
        v56 = this->fields.skillPitch;
      v47 = v47 - (float)v56;
      if ( v43 )
        continue;
    }
    goto LABEL_89;
  }
}