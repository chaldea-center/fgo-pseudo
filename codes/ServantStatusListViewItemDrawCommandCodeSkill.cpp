void ServantStatusListViewItemDrawCommandCodeSkill___ctor(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
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

  if ( (byte_4C23FC3 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&UnityEngine_GameObject___TypeInfo);
    sub_1C2D490(&SkillIconComponent___TypeInfo);
    sub_1C2D490(&UILabel___TypeInfo);
    sub_1C2D490(&UIRangeLabel___TypeInfo);
    byte_4C23FC3 = 1;
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
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawCommandCodeSkill__Awake(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  ServantStatusListViewItemDrawCommandCodeSkill_o *v3; // x19
  __int64 v4; // x2
  struct UnityEngine_GameObject_array *v5; // x8
  float y; // s8
  unsigned int v7; // w9
  struct UISprite_o *baseSprite; // x9
  int v9; // w20
  float v10; // s1
  struct UnityEngine_GameObject_array *v11; // x8
  int v12; // w9
  float v13; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_24;
  v3 = this;
  if ( SLODWORD(skillBaseList->max_length) >= 2 )
  {
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)skillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0);
    if ( !this )
      goto LABEL_24;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    v5 = v3->fields.skillBaseList;
    if ( !v5 )
      goto LABEL_24;
    if ( LODWORD(v5->max_length) <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)v5->m_Items[1];
    if ( !this )
      goto LABEL_24;
    y = localPosition.fields.y;
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0);
    if ( !this )
      goto LABEL_24;
    v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    skillBaseList = v3->fields.skillBaseList;
    v7 = (float)(y - v15.fields.y) == INFINITY ? 0x80000000 : (int)(float)(y - v15.fields.y);
    v3->fields.skillPitch = v7;
    if ( !skillBaseList )
      goto LABEL_24;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)v3->fields.titleSprite;
  v9 = v3->fields.skillPitch * LODWORD(skillBaseList->max_length);
  v10 = (float)(baseSprite->fields.mHeight - v9);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v10;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
  if ( !this )
    goto LABEL_24;
  v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v11 = v3->fields.skillBaseList;
  v12 = v9 >= 0 ? v9 : v9 + 1;
  v13 = (float)(v12 >> 1);
  v3->fields.titleBasePosition.fields.x = v16.fields.x;
  v3->fields.titleBasePosition.fields.y = v16.fields.y - v13;
  v3->fields.titleBasePosition.fields.z = v16.fields.z;
  if ( !v11 )
LABEL_24:
    sub_1C2D6EC(this, method);
  if ( !LODWORD(v11->max_length) )
LABEL_25:
    sub_1C2D6F4(this, method, v4);
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)v11->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0);
  if ( !this )
    goto LABEL_24;
  v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.skillBasePosition.fields.x = v17.fields.x;
  v3->fields.skillBasePosition.fields.y = v17.fields.y - v13;
  v3->fields.skillBasePosition.fields.z = v17.fields.z;
}


int32_t ServantStatusListViewItemDrawCommandCodeSkill__GetKind(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        const MethodInfo *method)
{
  return 14;
}


void ServantStatusListViewItemDrawCommandCodeSkill__SetItem(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UILabel_o *explanationLabel; // x21
  UnityEngine_GameObject_o *baseSprite; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct SkillIconComponent_array *skillIconList; // x9
  il2cpp_array_size_t max_length; // x11
  unsigned __int64 max_length_low; // x10
  signed __int64 v14; // x9
  int v15; // w21
  int v16; // w13
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  int v21; // w22
  float v22; // s8
  int32_t v23; // w1
  int32_t v24; // w1
  int v25; // w20
  float v26; // s8
  float v27; // s11
  float v28; // s9
  float v29; // s10
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  float v31; // s8
  float v32; // s9
  unsigned int v33; // w20
  float v34; // s10
  unsigned int v35; // w9
  struct UnityEngine_GameObject_array *v36; // x8
  struct SkillIconComponent_array *v37; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  System_String_array *v40; // [xsp+0h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-28h] BYREF
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23FC2 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_11926/*"SERVANT_STATUS_EXPLANATION_SKILL_COMMAND_CODE"*/);
    byte_4C23FC2 = 1;
  }
  idList = 0;
  v40 = 0;
  titleList = 0;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseSprite = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11926/*"SERVANT_STATUS_EXPLANATION_SKILL_COMMAND_CODE"*/, 0);
  if ( !explanationLabel )
    goto LABEL_65;
  UILabel__set_text(explanationLabel, (System_String_o *)baseSprite, 0);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &v40, 0, 0);
  if ( !idList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_65;
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
LABEL_67:
          sub_1C2D6F4(baseSprite, v9, v10);
        v16 = idList->m_Items[v14++];
        if ( v16 >= 1 )
          v15 = v14;
      }
    }
    while ( v14 < (int)max_length );
  }
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  v21 = this->fields.skillPitch * v15;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v22 = y + (float)v21;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    baseSprite = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !baseSprite )
      goto LABEL_65;
    v43.fields.x = x;
    v43.fields.y = v22;
    v43.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)baseSprite, v43, 0);
  }
  baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_65;
  v23 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)baseSprite, v23, 0);
  baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_65;
  v24 = v22 == INFINITY ? 0x80000000 : (int)v22;
  UIWidget__set_height((UIWidget_o *)baseSprite, v24, 0);
  baseSprite = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v25 = v21 >= 0 ? v21 : v21 + 1;
  if ( !baseSprite )
    goto LABEL_65;
  v26 = this->fields.titleBasePosition.fields.x;
  v27 = this->fields.titleBasePosition.fields.y;
  v28 = this->fields.titleBasePosition.fields.z;
  baseSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)baseSprite,
                                             0);
  if ( !baseSprite
    || (v29 = (float)(v25 >> 1),
        v44.fields.y = v27 + v29,
        v44.fields.x = v26,
        v44.fields.z = v28,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v44, 0),
        (skillBaseList = this->fields.skillBaseList) == 0) )
  {
LABEL_65:
    sub_1C2D6EC(baseSprite, v9);
  }
  v31 = this->fields.skillBasePosition.fields.z;
  v32 = this->fields.skillBasePosition.fields.x;
  v33 = 0;
  v34 = this->fields.skillBasePosition.fields.y + v29;
  while ( 1 )
  {
    v35 = skillBaseList->max_length;
    if ( (int)v33 >= (int)v35 )
      break;
    if ( v33 >= v35 )
      goto LABEL_67;
    baseSprite = skillBaseList->m_Items[v33];
    if ( !baseSprite )
      goto LABEL_65;
    if ( (int)v33 >= v15 )
    {
      UnityEngine_GameObject__SetActive(baseSprite, 0, 0);
    }
    else
    {
      UnityEngine_GameObject__SetActive(baseSprite, 1, 0);
      v36 = this->fields.skillBaseList;
      if ( !v36 )
        goto LABEL_65;
      if ( v33 >= LODWORD(v36->max_length) )
        goto LABEL_67;
      baseSprite = v36->m_Items[v33];
      if ( !baseSprite )
        goto LABEL_65;
      baseSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSprite, 0);
      if ( !baseSprite )
        goto LABEL_65;
      v45.fields.x = v32;
      v45.fields.y = v34;
      v45.fields.z = v31;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v45, 0);
      v37 = this->fields.skillIconList;
      if ( !v37 )
        goto LABEL_65;
      if ( v33 >= LODWORD(v37->max_length) )
        goto LABEL_67;
      if ( !idList )
        goto LABEL_65;
      if ( v33 >= LODWORD(idList->max_length) )
        goto LABEL_67;
      baseSprite = (UnityEngine_GameObject_o *)v37->m_Items[v33];
      if ( !baseSprite )
        goto LABEL_65;
      SkillIconComponent__Set((SkillIconComponent_o *)baseSprite, idList->m_Items[v33], 0);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_65;
      if ( v33 >= LODWORD(skillTitleRangeLabelList->max_length) )
        goto LABEL_67;
      if ( !titleList )
        goto LABEL_65;
      if ( v33 >= LODWORD(titleList->max_length) )
        goto LABEL_67;
      baseSprite = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v33];
      if ( !baseSprite )
        goto LABEL_65;
      UIRangeLabel__Set((UIRangeLabel_o *)baseSprite, titleList->m_Items[v33], 0, 1, 0, 0, 0);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_65;
      if ( v33 >= LODWORD(skillExplanationLabelList->max_length) )
        goto LABEL_67;
      if ( !v40 )
        goto LABEL_65;
      if ( v33 >= LODWORD(v40->max_length) )
        goto LABEL_67;
      baseSprite = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                 skillExplanationLabelList->m_Items[v33],
                                                 v40->m_Items[v33],
                                                 22,
                                                 0,
                                                 0);
    }
    skillBaseList = this->fields.skillBaseList;
    ++v33;
    v34 = v34 - (float)this->fields.skillPitch;
    if ( !skillBaseList )
      goto LABEL_65;
  }
}