void __fastcall ServantStatusListViewItemDrawEquipSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ServantStatusListViewItemDrawEquipSkill_StaticFields *static_fields; // x8

  if ( (byte_49FB986 & 1) == 0 )
  {
    sub_1B64A00(&ServantStatusListViewItemDrawEquipSkill_TypeInfo, v1);
    byte_49FB986 = 1;
  }
  static_fields = ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DETAIL_FONT_SIZE = 0x1F400000012LL;
  static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawEquipSkill___ctor(
        ServantStatusListViewItemDrawEquipSkill_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct UnityEngine_GameObject_array *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  struct SkillIconComponent_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  struct UIRangeLabel_array *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct UILabel_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FB985 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, method);
    sub_1B64A00(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1B64A00(&SkillIconComponent___TypeInfo, v4);
    sub_1B64A00(&UILabel___TypeInfo, v5);
    sub_1B64A00(&UIRangeLabel___TypeInfo, v6);
    byte_49FB985 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_1B64AA8(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v7->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v8;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.skillBaseList, (int32_t)v8, v9, v10);
  v11 = (struct SkillIconComponent_array *)sub_1B64AA8(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v11;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.skillIconList, (int32_t)v11, v12, v13);
  v14 = (struct UIRangeLabel_array *)sub_1B64AA8(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v14;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.skillTitleRangeLabelList, (int32_t)v14, v15, v16);
  v17 = (struct UILabel_array *)sub_1B64AA8(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v17;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.skillExplanationLabelList, (int32_t)v17, v18, v19);
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
    sub_1B64C5C(this, method);
  if ( !v15->max_length )
LABEL_25:
    sub_1B64C64(this, method);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *explanationLabel; // x21
  UnityEngine_GameObject_o *baseSprite; // x0
  __int64 v12; // x1
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v14; // x10
  unsigned __int64 max_length; // x9
  signed int v16; // w22
  signed __int64 v17; // x8
  SkillInfo_o *v18; // x13
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  int v20; // w24
  __int64 v21; // x25
  unsigned __int64 v22; // x26
  unsigned __int64 v23; // x9
  __int64 v24; // x8
  struct UILabel_array *skillExplanationLabelList; // x9
  ServantStatusListViewItemDrawEquipSkill_c *v26; // x0
  UILabel_o *v27; // x20
  System_String_o *v28; // x21
  struct UILabel_array *v29; // x8
  __int64 v30; // x8
  int v31; // w10
  int32_t skillPitch; // w8
  int32_t v33; // w9
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  float v38; // s8
  int32_t v39; // w1
  int32_t v40; // w1
  int v41; // w20
  float v42; // s8
  float v43; // s11
  float v44; // s9
  float v45; // s10
  struct UnityEngine_GameObject_array *v46; // x8
  float v47; // s8
  float v48; // s9
  signed int v49; // w20
  float v50; // s10
  unsigned int v51; // w10
  SkillInfo_o *v52; // x24
  struct UnityEngine_GameObject_array *v53; // x8
  struct SkillIconComponent_array *v54; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  struct UILabel_array *v56; // x8
  UILabel_o *v57; // x8
  int32_t mHeight; // w21
  int32_t v59; // w9
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FB984 & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, item);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64A00(&ServantStatusListViewItemDrawEquipSkill_TypeInfo, v8);
    sub_1B64A00(&StringLiteral_11828/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v9);
    byte_49FB984 = 1;
  }
  skillInfoList = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseSprite = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11828/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_89;
  UILabel__set_text(explanationLabel, (System_String_o *)baseSprite, 0LL);
  ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0, 0LL);
  if ( !skillInfoList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_89;
  v14 = *(_QWORD *)&skillIconList->max_length;
  if ( v14 << 32 < 1 )
  {
    v16 = 0;
  }
  else
  {
    max_length = skillInfoList->max_length;
    v16 = 0;
    v17 = 0LL;
    do
    {
      if ( v17 < (int)max_length )
      {
        if ( v17 >= max_length )
LABEL_91:
          sub_1B64C64(baseSprite, v12);
        v18 = skillInfoList->m_Items[v17];
        if ( v18 && v18->fields.id >= 1 )
          v16 = v17 + 1;
      }
      ++v17;
    }
    while ( v17 < (int)v14 );
  }
  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_89;
  v20 = 0;
  v21 = 4LL;
  while ( 1 )
  {
    v22 = v21 - 4;
    if ( v21 - 4 >= (int)skillBaseList->max_length )
      break;
    if ( skillInfoList )
    {
      v23 = skillInfoList->max_length;
      if ( (__int64)v22 < (int)v23 )
      {
        if ( v22 >= v23 )
          goto LABEL_91;
        v24 = *((_QWORD *)&skillInfoList->obj.klass + v21);
        if ( v24 )
        {
          if ( *(int *)(v24 + 16) >= 1 )
          {
            skillExplanationLabelList = this->fields.skillExplanationLabelList;
            if ( !skillExplanationLabelList )
              goto LABEL_89;
            if ( v22 >= skillExplanationLabelList->max_length )
              goto LABEL_91;
            v26 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            v27 = (UILabel_o *)*((_QWORD *)&skillExplanationLabelList->obj.klass + v21);
            v28 = *(System_String_o **)(v24 + 40);
            if ( !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
              v26 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            }
            baseSprite = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                       v27,
                                                       v28,
                                                       v26->static_fields->DETAIL_FONT_SIZE,
                                                       v26->static_fields->DETAIL_FONT_SIZE,
                                                       v26->static_fields->MAX_HEIGHT,
                                                       0LL);
            v29 = this->fields.skillExplanationLabelList;
            if ( !v29 )
              goto LABEL_89;
            if ( v22 >= v29->max_length )
              goto LABEL_91;
            v30 = *((_QWORD *)&v29->obj.klass + v21);
            if ( !v30 )
              goto LABEL_89;
            v31 = *(_DWORD *)(v30 + 172);
            skillPitch = this->fields.skillPitch;
            v33 = ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->ADJUST_HEIGHT + v31;
            if ( v33 >= skillPitch )
              v20 += v33;
            else
              v20 += skillPitch;
          }
        }
      }
    }
    skillBaseList = this->fields.skillBaseList;
    ++v21;
    if ( !skillBaseList )
      goto LABEL_89;
  }
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v38 = y + (float)v20;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !baseSprite )
      goto LABEL_89;
    v61.fields.x = x;
    v61.fields.y = v38;
    v61.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)baseSprite, v61, 0LL);
  }
  baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_89;
  v39 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)baseSprite, v39, 0LL);
  baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_89;
  v40 = v38 == INFINITY ? 0x80000000 : (int)v38;
  UIWidget__set_height((UIWidget_o *)baseSprite, v40, 0LL);
  baseSprite = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v41 = v20 >= 0 ? v20 : v20 + 1;
  if ( !baseSprite )
    goto LABEL_89;
  v42 = this->fields.titleBasePosition.fields.x;
  v43 = this->fields.titleBasePosition.fields.y;
  v44 = this->fields.titleBasePosition.fields.z;
  baseSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)baseSprite,
                                             0LL);
  if ( !baseSprite
    || (v45 = (float)(v41 >> 1),
        v62.fields.y = v43 + v45,
        v62.fields.x = v42,
        v62.fields.z = v44,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v62, 0LL),
        (v46 = this->fields.skillBaseList) == 0LL) )
  {
LABEL_89:
    sub_1B64C5C(baseSprite, v12);
  }
  v47 = this->fields.skillBasePosition.fields.z;
  v48 = this->fields.skillBasePosition.fields.x;
  v49 = 0;
  v50 = this->fields.skillBasePosition.fields.y + v45;
  while ( 1 )
  {
    v51 = v46->max_length;
    if ( v49 >= (int)v51 )
      break;
    if ( v49 >= v16 )
    {
      if ( v49 >= v51 )
        goto LABEL_91;
      baseSprite = v46->m_Items[v49];
      if ( !baseSprite )
        goto LABEL_89;
      UnityEngine_GameObject__SetActive(baseSprite, 0, 0LL);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_89;
      if ( v49 >= skillInfoList->max_length || v49 >= v51 )
        goto LABEL_91;
      baseSprite = v46->m_Items[v49];
      if ( !baseSprite )
        goto LABEL_89;
      v52 = skillInfoList->m_Items[v49];
      UnityEngine_GameObject__SetActive(baseSprite, 1, 0LL);
      v53 = this->fields.skillBaseList;
      if ( !v53 )
        goto LABEL_89;
      if ( v49 >= v53->max_length )
        goto LABEL_91;
      baseSprite = v53->m_Items[v49];
      if ( !baseSprite )
        goto LABEL_89;
      baseSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSprite, 0LL);
      if ( !baseSprite )
        goto LABEL_89;
      v63.fields.x = v48;
      v63.fields.y = v50;
      v63.fields.z = v47;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v63, 0LL);
      v54 = this->fields.skillIconList;
      if ( !v54 )
        goto LABEL_89;
      if ( v49 >= v54->max_length )
        goto LABEL_91;
      if ( !v52 )
        goto LABEL_89;
      baseSprite = (UnityEngine_GameObject_o *)v54->m_Items[v49];
      if ( !baseSprite )
        goto LABEL_89;
      SkillIconComponent__Set((SkillIconComponent_o *)baseSprite, v52->fields.id, 0LL);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_89;
      if ( v49 >= skillTitleRangeLabelList->max_length )
        goto LABEL_91;
      baseSprite = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v49];
      if ( !baseSprite )
        goto LABEL_89;
      UIRangeLabel__Set((UIRangeLabel_o *)baseSprite, v52->fields.title, 0LL, 1, 0, 0LL);
    }
    v56 = this->fields.skillExplanationLabelList;
    if ( !v56 )
      goto LABEL_89;
    if ( v49 >= v56->max_length )
      goto LABEL_91;
    v57 = v56->m_Items[v49];
    if ( v57 )
    {
      baseSprite = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      mHeight = v57->fields.mHeight;
      if ( !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
        baseSprite = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      }
      ++v49;
      v46 = this->fields.skillBaseList;
      v59 = *(_DWORD *)(*(_QWORD *)&baseSprite[7].fields.m_CachedPtr + 8LL) + mHeight;
      if ( v59 < this->fields.skillPitch )
        v59 = this->fields.skillPitch;
      v50 = v50 - (float)v59;
      if ( v46 )
        continue;
    }
    goto LABEL_89;
  }
}