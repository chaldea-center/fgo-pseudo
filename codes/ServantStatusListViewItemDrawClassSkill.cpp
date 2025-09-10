void ServantStatusListViewItemDrawClassSkill___cctor(const MethodInfo *method)
{
  if ( (byte_4C23FBB & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItemDrawClassSkill_TypeInfo);
    byte_4C23FBB = 1;
  }
  *ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawClassSkill_StaticFields)0x2800000012LL;
}


void ServantStatusListViewItemDrawClassSkill___ctor(
        ServantStatusListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct SkillIconComponent_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIRangeLabel_array *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UILabel_array *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C23FBA & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&UnityEngine_GameObject___TypeInfo);
    sub_1C2D490(&SkillIconComponent___TypeInfo);
    sub_1C2D490(&UILabel___TypeInfo);
    sub_1C2D490(&UIRangeLabel___TypeInfo);
    byte_4C23FBA = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1C2D538(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillBaseList, (int32_t)v4, v5, v6);
  v7 = (struct SkillIconComponent_array *)sub_1C2D538(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillIconList, (int32_t)v7, v8, v9);
  v10 = (struct UIRangeLabel_array *)sub_1C2D538(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v10;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillTitleRangeLabelList, (int32_t)v10, v11, v12);
  v13 = (struct UILabel_array *)sub_1C2D538(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v13;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillExplanationLabelList, (int32_t)v13, v14, v15);
  this->fields.transformNameAddHeight = 34;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawClassSkill__Awake(
        ServantStatusListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  ServantStatusListViewItemDrawClassSkill_o *v3; // x19
  __int64 v4; // x2
  struct UnityEngine_GameObject_array *v5; // x8
  float y; // s8
  unsigned int v7; // w9
  struct UISprite_o *baseSprite; // x9
  int v9; // w8
  int v10; // w10
  int v11; // w20
  float v12; // s1
  struct UnityEngine_GameObject_array *v13; // x8
  int v14; // w9
  float v15; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_27;
  v3 = this;
  if ( SLODWORD(skillBaseList->max_length) >= 2 )
  {
    this = (ServantStatusListViewItemDrawClassSkill_o *)skillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_27;
    this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0);
    if ( !this )
      goto LABEL_27;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    v5 = v3->fields.skillBaseList;
    if ( !v5 )
      goto LABEL_27;
    if ( LODWORD(v5->max_length) <= 1 )
      goto LABEL_28;
    this = (ServantStatusListViewItemDrawClassSkill_o *)v5->m_Items[1];
    if ( !this )
      goto LABEL_27;
    y = localPosition.fields.y;
    this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0);
    if ( !this )
      goto LABEL_27;
    v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    skillBaseList = v3->fields.skillBaseList;
    v7 = (float)(y - v17.fields.y) == INFINITY ? 0x80000000 : (int)(float)(y - v17.fields.y);
    v3->fields.skillPitch = v7;
    if ( !skillBaseList )
      goto LABEL_27;
  }
  baseSprite = v3->fields.baseSprite;
  v9 = v3->fields.skillPitch * LODWORD(skillBaseList->max_length);
  v10 = v9 >= 0 ? v9 : v9 + 1;
  if ( !baseSprite )
    goto LABEL_27;
  this = (ServantStatusListViewItemDrawClassSkill_o *)v3->fields.titleSprite;
  v11 = v9 - (v10 & 0xFFFFFFFE) + v9;
  v12 = (float)(baseSprite->fields.mHeight - v11);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v12;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_27;
  this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
  if ( !this )
    goto LABEL_27;
  v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v13 = v3->fields.skillBaseList;
  v14 = v11 >= 0 ? v11 : v11 + 1;
  v15 = (float)(v14 >> 1);
  v3->fields.titleBasePosition.fields.x = v18.fields.x;
  v3->fields.titleBasePosition.fields.y = v18.fields.y - v15;
  v3->fields.titleBasePosition.fields.z = v18.fields.z;
  if ( !v13 )
LABEL_27:
    sub_1C2D6EC(this, method);
  if ( !LODWORD(v13->max_length) )
LABEL_28:
    sub_1C2D6F4(this, method, v4);
  this = (ServantStatusListViewItemDrawClassSkill_o *)v13->m_Items[0];
  if ( !this )
    goto LABEL_27;
  this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)this,
                                                        0);
  if ( !this )
    goto LABEL_27;
  v19 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.skillBasePosition.fields.x = v19.fields.x;
  v3->fields.skillBasePosition.fields.y = v19.fields.y - v15;
  v3->fields.skillBasePosition.fields.z = v19.fields.z;
}


int32_t ServantStatusListViewItemDrawClassSkill__GetKind(
        ServantStatusListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  return 5;
}


void ServantStatusListViewItemDrawClassSkill__SetItem(
        ServantStatusListViewItemDrawClassSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UILabel_o *explanationLabel; // x21
  UnityEngine_GameObject_o *transformNameSprite; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct SkillIconComponent_array *skillIconList; // x9
  il2cpp_array_size_t max_length; // x11
  unsigned __int64 max_length_low; // x10
  signed __int64 v14; // x9
  int v15; // w22
  int v16; // w13
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x21
  int32_t transformNameAddHeight; // w25
  int v20; // w24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  __int64 v22; // x27
  unsigned __int64 v23; // x28
  struct UILabel_array *skillExplanationLabelList; // x8
  ServantStatusListViewItemDrawClassSkill_c *v25; // x0
  UILabel_o *v26; // x20
  System_String_o *v27; // x21
  struct UILabel_array *v28; // x8
  __int64 v29; // x8
  int v30; // w10
  int32_t skillPitch; // w8
  int32_t v32; // w9
  int32_t v33; // w9
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  int v38; // w21
  float v39; // s8
  int32_t v40; // w1
  int32_t v41; // w1
  int v42; // w20
  float v43; // s8
  float v44; // s10
  float v45; // s9
  int v46; // w21
  struct UnityEngine_GameObject_array *v47; // x8
  float v48; // s8
  float v49; // s9
  unsigned int v50; // w20
  float v51; // s10
  unsigned int v52; // w9
  struct UnityEngine_GameObject_array *v53; // x8
  struct SkillIconComponent_array *v54; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  struct UILabel_array *v56; // x8
  UILabel_o *v57; // x8
  int32_t mHeight; // w21
  int32_t v59; // w9
  System_String_array *v60; // [xsp+0h] [xbp-90h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-88h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23FB9 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantStatusListViewItemDrawClassSkill_TypeInfo);
    sub_1C2D490(&StringLiteral_11927/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    byte_4C23FB9 = 1;
  }
  idList = 0;
  v60 = 0;
  titleList = 0;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transformNameSprite = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11927/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0);
  if ( !explanationLabel )
    goto LABEL_95;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameSprite, 0);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &v60, 1, 0);
  if ( !idList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_95;
  max_length = skillIconList->max_length;
  if ( (__int64)(max_length << 32) < 1 )
  {
    v15 = 1;
  }
  else
  {
    max_length_low = LODWORD(idList->max_length);
    v14 = 0;
    v15 = 1;
    do
    {
      if ( v14 >= (int)max_length_low )
      {
        ++v14;
      }
      else
      {
        if ( v14 >= max_length_low )
LABEL_97:
          sub_1C2D6F4(transformNameSprite, v9, v10);
        v16 = idList->m_Items[v14++];
        if ( v16 >= 1 )
          v15 = v14;
      }
    }
    while ( v14 < (int)max_length );
  }
  transformNameSprite = (UnityEngine_GameObject_o *)this->fields.transformNameSprite;
  if ( !transformNameSprite )
    goto LABEL_95;
  IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
  transformNameSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transformNameSprite, 0);
  if ( !transformNameSprite )
    goto LABEL_95;
  if ( IsTransformServant_k__BackingField )
  {
    UnityEngine_GameObject__SetActive(transformNameSprite, 1, 0);
    transformNameLabel = this->fields.transformNameLabel;
    transformNameSprite = (UnityEngine_GameObject_o *)ServantStatusListViewItem__GetTransformName(item, 0);
    if ( !transformNameLabel )
      goto LABEL_95;
    UILabel__set_text(transformNameLabel, (System_String_o *)transformNameSprite, 0);
    transformNameAddHeight = this->fields.transformNameAddHeight;
    v20 = -transformNameAddHeight;
  }
  else
  {
    UnityEngine_GameObject__SetActive(transformNameSprite, 0, 0);
    v20 = 0;
    transformNameAddHeight = 0;
  }
  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_95;
  v22 = 4;
  while ( 1 )
  {
    v23 = v22 - 4;
    if ( v22 - 4 >= SLODWORD(skillBaseList->max_length) )
      break;
    if ( (__int64)v23 < v15 )
    {
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_95;
      if ( v23 >= LODWORD(skillExplanationLabelList->max_length) )
        goto LABEL_97;
      if ( !v60 )
        goto LABEL_95;
      if ( v23 >= LODWORD(v60->max_length) )
        goto LABEL_97;
      v25 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      v26 = (UILabel_o *)*((_QWORD *)&skillExplanationLabelList->obj.klass + v22);
      v27 = (System_String_o *)*((_QWORD *)&v60->obj.klass + v22);
      if ( !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        v25 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      transformNameSprite = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                          v26,
                                                          v27,
                                                          v25->static_fields->DETAIL_FONT_SIZE,
                                                          v25->static_fields->DETAIL_FONT_SIZE,
                                                          0);
      v28 = this->fields.skillExplanationLabelList;
      if ( !v28 )
        goto LABEL_95;
      if ( v23 >= LODWORD(v28->max_length) )
        goto LABEL_97;
      v29 = *((_QWORD *)&v28->obj.klass + v22);
      if ( !v29 )
        goto LABEL_95;
      v30 = *(_DWORD *)(v29 + 172);
      skillPitch = this->fields.skillPitch;
      v32 = v30 + ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v32 >= skillPitch )
        transformNameAddHeight += v32;
      else
        transformNameAddHeight += skillPitch;
    }
    skillBaseList = this->fields.skillBaseList;
    ++v22;
    if ( !skillBaseList )
      goto LABEL_95;
  }
  if ( transformNameAddHeight >= 0 )
    v33 = transformNameAddHeight;
  else
    v33 = transformNameAddHeight + 1;
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  v38 = transformNameAddHeight - (v33 & 0xFFFFFFFE) + transformNameAddHeight;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v39 = y + (float)v38;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    transformNameSprite = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !transformNameSprite )
      goto LABEL_95;
    v63.fields.x = x;
    v63.fields.y = v39;
    v63.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)transformNameSprite, v63, 0);
  }
  transformNameSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !transformNameSprite )
    goto LABEL_95;
  v40 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)transformNameSprite, v40, 0);
  transformNameSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !transformNameSprite )
    goto LABEL_95;
  v41 = v39 == INFINITY ? 0x80000000 : (int)v39;
  UIWidget__set_height((UIWidget_o *)transformNameSprite, v41, 0);
  transformNameSprite = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v42 = v38 >= 0 ? v38 : v38 + 1;
  if ( !transformNameSprite )
    goto LABEL_95;
  v43 = this->fields.titleBasePosition.fields.x;
  v44 = this->fields.titleBasePosition.fields.y;
  v45 = this->fields.titleBasePosition.fields.z;
  transformNameSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)transformNameSprite,
                                                      0);
  if ( !transformNameSprite
    || (v46 = v42 >> 1,
        v64.fields.y = v44 + (float)(v42 >> 1),
        v64.fields.x = v43,
        v64.fields.z = v45,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transformNameSprite, v64, 0),
        (v47 = this->fields.skillBaseList) == 0) )
  {
LABEL_95:
    sub_1C2D6EC(transformNameSprite, v9);
  }
  v48 = this->fields.skillBasePosition.fields.z;
  v49 = this->fields.skillBasePosition.fields.x;
  v50 = 0;
  v51 = this->fields.skillBasePosition.fields.y + (float)(v46 + v20);
  while ( 1 )
  {
    v52 = v47->max_length;
    if ( (int)v50 >= (int)v52 )
      break;
    if ( v50 >= v52 )
      goto LABEL_97;
    transformNameSprite = v47->m_Items[v50];
    if ( !transformNameSprite )
      goto LABEL_95;
    if ( (int)v50 >= v15 )
    {
      UnityEngine_GameObject__SetActive(transformNameSprite, 0, 0);
    }
    else
    {
      UnityEngine_GameObject__SetActive(transformNameSprite, 1, 0);
      v53 = this->fields.skillBaseList;
      if ( !v53 )
        goto LABEL_95;
      if ( v50 >= LODWORD(v53->max_length) )
        goto LABEL_97;
      transformNameSprite = v53->m_Items[v50];
      if ( !transformNameSprite )
        goto LABEL_95;
      transformNameSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transformNameSprite, 0);
      if ( !transformNameSprite )
        goto LABEL_95;
      v65.fields.x = v49;
      v65.fields.y = v51;
      v65.fields.z = v48;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transformNameSprite, v65, 0);
      v54 = this->fields.skillIconList;
      if ( !v54 )
        goto LABEL_95;
      if ( v50 >= LODWORD(v54->max_length) )
        goto LABEL_97;
      if ( !idList )
        goto LABEL_95;
      if ( v50 >= LODWORD(idList->max_length) )
        goto LABEL_97;
      transformNameSprite = (UnityEngine_GameObject_o *)v54->m_Items[v50];
      if ( !transformNameSprite )
        goto LABEL_95;
      SkillIconComponent__Set((SkillIconComponent_o *)transformNameSprite, idList->m_Items[v50], 0);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_95;
      if ( v50 >= LODWORD(skillTitleRangeLabelList->max_length) )
        goto LABEL_97;
      if ( !titleList )
        goto LABEL_95;
      if ( v50 >= LODWORD(titleList->max_length) )
        goto LABEL_97;
      transformNameSprite = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v50];
      if ( !transformNameSprite )
        goto LABEL_95;
      UIRangeLabel__Set((UIRangeLabel_o *)transformNameSprite, titleList->m_Items[v50], 0, 1, 0, 0, 0);
    }
    v56 = this->fields.skillExplanationLabelList;
    if ( !v56 )
      goto LABEL_95;
    if ( v50 >= LODWORD(v56->max_length) )
      goto LABEL_97;
    v57 = v56->m_Items[v50];
    if ( v57 )
    {
      transformNameSprite = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      mHeight = v57->fields.mHeight;
      if ( !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        transformNameSprite = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      ++v50;
      v47 = this->fields.skillBaseList;
      v59 = *(_DWORD *)(transformNameSprite[7].fields.m_CachedPtr + 4) + mHeight;
      if ( v59 < this->fields.skillPitch )
        v59 = this->fields.skillPitch;
      v51 = v51 - (float)v59;
      if ( v47 )
        continue;
    }
    goto LABEL_95;
  }
}