void __fastcall ServantStatusListViewItemDrawClassSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B193D7 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItemDrawClassSkill_TypeInfo, v1);
    byte_4B193D7 = 1;
  }
  *ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawClassSkill_StaticFields)0x2800000012LL;
}


void __fastcall ServantStatusListViewItemDrawClassSkill___ctor(
        ServantStatusListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct UnityEngine_GameObject_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct SkillIconComponent_array *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UIRangeLabel_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UILabel_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4B193D6 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1BCAFF8(&SkillIconComponent___TypeInfo, v4);
    sub_1BCAFF8(&UILabel___TypeInfo, v5);
    sub_1BCAFF8(&UIRangeLabel___TypeInfo, v6);
    byte_4B193D6 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_1BCB0A0(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v7->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v8;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillBaseList, (int32_t)v8, v9, v10);
  v11 = (struct SkillIconComponent_array *)sub_1BCB0A0(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v11;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillIconList, (int32_t)v11, v12, v13);
  v14 = (struct UIRangeLabel_array *)sub_1BCB0A0(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v14;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillTitleRangeLabelList, (int32_t)v14, v15, v16);
  v17 = (struct UILabel_array *)sub_1BCB0A0(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v17;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillExplanationLabelList, (int32_t)v17, v18, v19);
  this->fields.transformNameAddHeight = 34;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawClassSkill__Awake(
        ServantStatusListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  ServantStatusListViewItemDrawClassSkill_o *v3; // x19
  __int64 v4; // x2
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
    this = (ServantStatusListViewItemDrawClassSkill_o *)skillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_27;
    this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
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
    this = (ServantStatusListViewItemDrawClassSkill_o *)v6->m_Items[1];
    if ( !this )
      goto LABEL_27;
    v7 = v5;
    this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
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
  this = (ServantStatusListViewItemDrawClassSkill_o *)v3->fields.titleSprite;
  v13 = v11 - (v12 & 0xFFFFFFFE) + v11;
  v14 = (float)(baseSprite->fields.mHeight - v13);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v14;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_27;
  this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_Component__get_transform(
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
    sub_1BCB254(this, method);
  if ( !v18->max_length )
LABEL_28:
    sub_1BCB25C(this, method, v4);
  this = (ServantStatusListViewItemDrawClassSkill_o *)v18->m_Items[0];
  if ( !this )
    goto LABEL_27;
  this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_27;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.skillBasePosition.fields.x = localPosition.fields.x;
  v3->fields.skillBasePosition.fields.y = localPosition.fields.y - v20;
  v3->fields.skillBasePosition.fields.z = localPosition.fields.z;
}


int32_t __fastcall ServantStatusListViewItemDrawClassSkill__GetKind(
        ServantStatusListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  return 5;
}


void __fastcall ServantStatusListViewItemDrawClassSkill__SetItem(
        ServantStatusListViewItemDrawClassSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *explanationLabel; // x21
  UnityEngine_GameObject_o *transformNameSprite; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct SkillIconComponent_array *skillIconList; // x9
  __int64 v15; // x11
  unsigned __int64 max_length; // x10
  signed __int64 v17; // x9
  int v18; // w22
  int v19; // w13
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x21
  int32_t transformNameAddHeight; // w25
  int v23; // w24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  __int64 v25; // x27
  unsigned __int64 v26; // x28
  struct UILabel_array *skillExplanationLabelList; // x8
  ServantStatusListViewItemDrawClassSkill_c *v28; // x0
  UILabel_o *v29; // x20
  System_String_o *v30; // x21
  struct UILabel_array *v31; // x8
  __int64 v32; // x8
  int v33; // w10
  int32_t skillPitch; // w8
  int32_t v35; // w9
  int32_t v36; // w9
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  int v41; // w21
  float v42; // s8
  int32_t v43; // w1
  int32_t v44; // w1
  int v45; // w20
  float v46; // s8
  float v47; // s10
  float v48; // s9
  int v49; // w21
  struct UnityEngine_GameObject_array *v50; // x8
  float v51; // s8
  float v52; // s9
  il2cpp_array_size_t v53; // w20
  float v54; // s10
  signed int v55; // w9
  struct UnityEngine_GameObject_array *v56; // x8
  struct SkillIconComponent_array *v57; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  struct UILabel_array *v59; // x8
  UILabel_o *v60; // x8
  int32_t mHeight; // w21
  int32_t v62; // w9
  System_String_array *v63; // [xsp+0h] [xbp-90h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-88h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B193D5 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, item);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&ServantStatusListViewItemDrawClassSkill_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_11829/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v9);
    byte_4B193D5 = 1;
  }
  idList = 0LL;
  v63 = 0LL;
  titleList = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transformNameSprite = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_11829/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/,
                                                      0LL);
  if ( !explanationLabel )
    goto LABEL_95;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameSprite, 0LL);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &v63, 1, 0LL);
  if ( !idList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_95;
  v15 = *(_QWORD *)&skillIconList->max_length;
  if ( v15 << 32 < 1 )
  {
    v18 = 1;
  }
  else
  {
    max_length = idList->max_length;
    v17 = 0LL;
    v18 = 1;
    do
    {
      if ( v17 >= (int)max_length )
      {
        ++v17;
      }
      else
      {
        if ( v17 >= max_length )
LABEL_97:
          sub_1BCB25C(transformNameSprite, v12, v13);
        v19 = idList->m_Items[++v17];
        if ( v19 >= 1 )
          v18 = v17;
      }
    }
    while ( v17 < (int)v15 );
  }
  transformNameSprite = (UnityEngine_GameObject_o *)this->fields.transformNameSprite;
  if ( !transformNameSprite )
    goto LABEL_95;
  IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
  transformNameSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transformNameSprite, 0LL);
  if ( !transformNameSprite )
    goto LABEL_95;
  if ( IsTransformServant_k__BackingField )
  {
    UnityEngine_GameObject__SetActive(transformNameSprite, 1, 0LL);
    transformNameLabel = this->fields.transformNameLabel;
    transformNameSprite = (UnityEngine_GameObject_o *)ServantStatusListViewItem__GetTransformName(item, 0LL);
    if ( !transformNameLabel )
      goto LABEL_95;
    UILabel__set_text(transformNameLabel, (System_String_o *)transformNameSprite, 0LL);
    transformNameAddHeight = this->fields.transformNameAddHeight;
    v23 = -transformNameAddHeight;
  }
  else
  {
    UnityEngine_GameObject__SetActive(transformNameSprite, 0, 0LL);
    v23 = 0;
    transformNameAddHeight = 0;
  }
  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_95;
  v25 = 4LL;
  while ( 1 )
  {
    v26 = v25 - 4;
    if ( v25 - 4 >= (int)skillBaseList->max_length )
      break;
    if ( (__int64)v26 < v18 )
    {
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_95;
      if ( v26 >= skillExplanationLabelList->max_length )
        goto LABEL_97;
      if ( !v63 )
        goto LABEL_95;
      if ( v26 >= v63->max_length )
        goto LABEL_97;
      v28 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      v29 = (UILabel_o *)*((_QWORD *)&skillExplanationLabelList->obj.klass + v25);
      v30 = (System_String_o *)*((_QWORD *)&v63->obj.klass + v25);
      if ( !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        v28 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      transformNameSprite = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                          v29,
                                                          v30,
                                                          v28->static_fields->DETAIL_FONT_SIZE,
                                                          v28->static_fields->DETAIL_FONT_SIZE,
                                                          0LL);
      v31 = this->fields.skillExplanationLabelList;
      if ( !v31 )
        goto LABEL_95;
      if ( v26 >= v31->max_length )
        goto LABEL_97;
      v32 = *((_QWORD *)&v31->obj.klass + v25);
      if ( !v32 )
        goto LABEL_95;
      v33 = *(_DWORD *)(v32 + 172);
      skillPitch = this->fields.skillPitch;
      v35 = v33 + ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v35 >= skillPitch )
        transformNameAddHeight += v35;
      else
        transformNameAddHeight += skillPitch;
    }
    skillBaseList = this->fields.skillBaseList;
    ++v25;
    if ( !skillBaseList )
      goto LABEL_95;
  }
  if ( transformNameAddHeight >= 0 )
    v36 = transformNameAddHeight;
  else
    v36 = transformNameAddHeight + 1;
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  v41 = transformNameAddHeight - (v36 & 0xFFFFFFFE) + transformNameAddHeight;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v42 = y + (float)v41;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    transformNameSprite = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !transformNameSprite )
      goto LABEL_95;
    v66.fields.x = x;
    v66.fields.y = v42;
    v66.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)transformNameSprite, v66, 0LL);
  }
  transformNameSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !transformNameSprite )
    goto LABEL_95;
  v43 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)transformNameSprite, v43, 0LL);
  transformNameSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !transformNameSprite )
    goto LABEL_95;
  v44 = v42 == INFINITY ? 0x80000000 : (int)v42;
  UIWidget__set_height((UIWidget_o *)transformNameSprite, v44, 0LL);
  transformNameSprite = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v45 = v41 >= 0 ? v41 : v41 + 1;
  if ( !transformNameSprite )
    goto LABEL_95;
  v46 = this->fields.titleBasePosition.fields.x;
  v47 = this->fields.titleBasePosition.fields.y;
  v48 = this->fields.titleBasePosition.fields.z;
  transformNameSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)transformNameSprite,
                                                      0LL);
  if ( !transformNameSprite
    || (v49 = v45 >> 1,
        v67.fields.y = v47 + (float)(v45 >> 1),
        v67.fields.x = v46,
        v67.fields.z = v48,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transformNameSprite, v67, 0LL),
        (v50 = this->fields.skillBaseList) == 0LL) )
  {
LABEL_95:
    sub_1BCB254(transformNameSprite, v12);
  }
  v51 = this->fields.skillBasePosition.fields.z;
  v52 = this->fields.skillBasePosition.fields.x;
  v53 = 0;
  v54 = this->fields.skillBasePosition.fields.y + (float)(v49 + v23);
  while ( 1 )
  {
    v55 = v50->max_length;
    if ( (int)v53 >= v55 )
      break;
    if ( v53 >= v55 )
      goto LABEL_97;
    transformNameSprite = v50->m_Items[v53];
    if ( !transformNameSprite )
      goto LABEL_95;
    if ( (int)v53 >= v18 )
    {
      UnityEngine_GameObject__SetActive(transformNameSprite, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(transformNameSprite, 1, 0LL);
      v56 = this->fields.skillBaseList;
      if ( !v56 )
        goto LABEL_95;
      if ( v53 >= v56->max_length )
        goto LABEL_97;
      transformNameSprite = v56->m_Items[v53];
      if ( !transformNameSprite )
        goto LABEL_95;
      transformNameSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transformNameSprite, 0LL);
      if ( !transformNameSprite )
        goto LABEL_95;
      v68.fields.x = v52;
      v68.fields.y = v54;
      v68.fields.z = v51;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transformNameSprite, v68, 0LL);
      v57 = this->fields.skillIconList;
      if ( !v57 )
        goto LABEL_95;
      if ( v53 >= v57->max_length )
        goto LABEL_97;
      if ( !idList )
        goto LABEL_95;
      if ( v53 >= idList->max_length )
        goto LABEL_97;
      transformNameSprite = (UnityEngine_GameObject_o *)v57->m_Items[v53];
      if ( !transformNameSprite )
        goto LABEL_95;
      SkillIconComponent__Set((SkillIconComponent_o *)transformNameSprite, idList->m_Items[v53 + 1], 0LL);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_95;
      if ( v53 >= skillTitleRangeLabelList->max_length )
        goto LABEL_97;
      if ( !titleList )
        goto LABEL_95;
      if ( v53 >= titleList->max_length )
        goto LABEL_97;
      transformNameSprite = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v53];
      if ( !transformNameSprite )
        goto LABEL_95;
      UIRangeLabel__Set((UIRangeLabel_o *)transformNameSprite, titleList->m_Items[v53], 0LL, 1, 0, 0, 0LL);
    }
    v59 = this->fields.skillExplanationLabelList;
    if ( !v59 )
      goto LABEL_95;
    if ( v53 >= v59->max_length )
      goto LABEL_97;
    v60 = v59->m_Items[v53];
    if ( v60 )
    {
      transformNameSprite = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      mHeight = v60->fields.mHeight;
      if ( !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        transformNameSprite = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      ++v53;
      v50 = this->fields.skillBaseList;
      v62 = *(_DWORD *)(*(_QWORD *)&transformNameSprite[7].fields.m_CachedPtr + 4LL) + mHeight;
      if ( v62 < this->fields.skillPitch )
        v62 = this->fields.skillPitch;
      v54 = v54 - (float)v62;
      if ( v50 )
        continue;
    }
    goto LABEL_95;
  }
}