void __fastcall ServantStatusListViewItemDrawCommandCodeSkill___ctor(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
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

  if ( (byte_4B193DF & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1BCAFF8(&SkillIconComponent___TypeInfo, v4);
    sub_1BCAFF8(&UILabel___TypeInfo, v5);
    sub_1BCAFF8(&UIRangeLabel___TypeInfo, v6);
    byte_4B193DF = 1;
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
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawCommandCodeSkill__Awake(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  ServantStatusListViewItemDrawCommandCodeSkill_o *v3; // x19
  __int64 v4; // x2
  float v5; // s1
  struct UnityEngine_GameObject_array *v6; // x8
  float v7; // s8
  float v8; // s1
  unsigned int v9; // w9
  struct UISprite_o *baseSprite; // x9
  int v11; // w20
  float v12; // s1
  float v13; // s0
  float v14; // s1
  float v15; // s2
  struct UnityEngine_GameObject_array *v16; // x8
  int v17; // w9
  float v18; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_24;
  v3 = this;
  if ( (int)skillBaseList->max_length >= 2 )
  {
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)skillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v6 = v3->fields.skillBaseList;
    if ( !v6 )
      goto LABEL_24;
    if ( v6->max_length <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)v6->m_Items[1];
    if ( !this )
      goto LABEL_24;
    v7 = v5;
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v8 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    skillBaseList = v3->fields.skillBaseList;
    v9 = (float)(v7 - v8) == INFINITY ? 0x80000000 : (int)(float)(v7 - v8);
    v3->fields.skillPitch = v9;
    if ( !skillBaseList )
      goto LABEL_24;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)v3->fields.titleSprite;
  v11 = v3->fields.skillPitch * skillBaseList->max_length;
  v12 = (float)(baseSprite->fields.mHeight - v11);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v12;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v16 = v3->fields.skillBaseList;
  v17 = v11 >= 0 ? v11 : v11 + 1;
  v18 = (float)(v17 >> 1);
  v3->fields.titleBasePosition.fields.x = v13;
  v3->fields.titleBasePosition.fields.y = v14 - v18;
  v3->fields.titleBasePosition.fields.z = v15;
  if ( !v16 )
LABEL_24:
    sub_1BCB254(this, method);
  if ( !v16->max_length )
LABEL_25:
    sub_1BCB25C(this, method, v4);
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)v16->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.skillBasePosition.fields.x = localPosition.fields.x;
  v3->fields.skillBasePosition.fields.y = localPosition.fields.y - v18;
  v3->fields.skillBasePosition.fields.z = localPosition.fields.z;
}


int32_t __fastcall ServantStatusListViewItemDrawCommandCodeSkill__GetKind(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        const MethodInfo *method)
{
  return 14;
}


void __fastcall ServantStatusListViewItemDrawCommandCodeSkill__SetItem(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UILabel_o *explanationLabel; // x21
  UnityEngine_GameObject_o *baseSprite; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct SkillIconComponent_array *skillIconList; // x9
  __int64 v14; // x11
  unsigned __int64 max_length; // x10
  signed __int64 v16; // x9
  int v17; // w21
  int v18; // w13
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  int v23; // w22
  float v24; // s8
  int32_t v25; // w1
  int32_t v26; // w1
  int v27; // w20
  float v28; // s8
  float v29; // s11
  float v30; // s9
  float v31; // s10
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  float v33; // s8
  float v34; // s9
  il2cpp_array_size_t v35; // w20
  float v36; // s10
  signed int v37; // w9
  struct UnityEngine_GameObject_array *v38; // x8
  struct SkillIconComponent_array *v39; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  System_String_array *v42; // [xsp+0h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-28h] BYREF
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B193DE & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, item);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_11828/*"SERVANT_STATUS_EXPLANATION_SKILL_COMMAND_CODE"*/, v8);
    byte_4B193DE = 1;
  }
  idList = 0LL;
  v42 = 0LL;
  titleList = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseSprite = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11828/*"SERVANT_STATUS_EXPLANATION_SKILL_COMMAND_CODE"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_65;
  UILabel__set_text(explanationLabel, (System_String_o *)baseSprite, 0LL);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &v42, 0, 0LL);
  if ( !idList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_65;
  v14 = *(_QWORD *)&skillIconList->max_length;
  if ( v14 << 32 < 1 )
  {
    v17 = 1;
  }
  else
  {
    max_length = idList->max_length;
    v16 = 0LL;
    v17 = 1;
    do
    {
      if ( v16 >= (int)max_length )
      {
        ++v16;
      }
      else
      {
        if ( v16 >= max_length )
LABEL_67:
          sub_1BCB25C(baseSprite, v11, v12);
        v18 = idList->m_Items[++v16];
        if ( v18 >= 1 )
          v17 = v16;
      }
    }
    while ( v16 < (int)v14 );
  }
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  v23 = this->fields.skillPitch * v17;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v24 = y + (float)v23;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !baseSprite )
      goto LABEL_65;
    v45.fields.x = x;
    v45.fields.y = v24;
    v45.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)baseSprite, v45, 0LL);
  }
  baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_65;
  v25 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)baseSprite, v25, 0LL);
  baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_65;
  v26 = v24 == INFINITY ? 0x80000000 : (int)v24;
  UIWidget__set_height((UIWidget_o *)baseSprite, v26, 0LL);
  baseSprite = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v27 = v23 >= 0 ? v23 : v23 + 1;
  if ( !baseSprite )
    goto LABEL_65;
  v28 = this->fields.titleBasePosition.fields.x;
  v29 = this->fields.titleBasePosition.fields.y;
  v30 = this->fields.titleBasePosition.fields.z;
  baseSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)baseSprite,
                                             0LL);
  if ( !baseSprite
    || (v31 = (float)(v27 >> 1),
        v46.fields.y = v29 + v31,
        v46.fields.x = v28,
        v46.fields.z = v30,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v46, 0LL),
        (skillBaseList = this->fields.skillBaseList) == 0LL) )
  {
LABEL_65:
    sub_1BCB254(baseSprite, v11);
  }
  v33 = this->fields.skillBasePosition.fields.z;
  v34 = this->fields.skillBasePosition.fields.x;
  v35 = 0;
  v36 = this->fields.skillBasePosition.fields.y + v31;
  while ( 1 )
  {
    v37 = skillBaseList->max_length;
    if ( (int)v35 >= v37 )
      break;
    if ( v35 >= v37 )
      goto LABEL_67;
    baseSprite = skillBaseList->m_Items[v35];
    if ( !baseSprite )
      goto LABEL_65;
    if ( (int)v35 >= v17 )
    {
      UnityEngine_GameObject__SetActive(baseSprite, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(baseSprite, 1, 0LL);
      v38 = this->fields.skillBaseList;
      if ( !v38 )
        goto LABEL_65;
      if ( v35 >= v38->max_length )
        goto LABEL_67;
      baseSprite = v38->m_Items[v35];
      if ( !baseSprite )
        goto LABEL_65;
      baseSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSprite, 0LL);
      if ( !baseSprite )
        goto LABEL_65;
      v47.fields.x = v34;
      v47.fields.y = v36;
      v47.fields.z = v33;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v47, 0LL);
      v39 = this->fields.skillIconList;
      if ( !v39 )
        goto LABEL_65;
      if ( v35 >= v39->max_length )
        goto LABEL_67;
      if ( !idList )
        goto LABEL_65;
      if ( v35 >= idList->max_length )
        goto LABEL_67;
      baseSprite = (UnityEngine_GameObject_o *)v39->m_Items[v35];
      if ( !baseSprite )
        goto LABEL_65;
      SkillIconComponent__Set((SkillIconComponent_o *)baseSprite, idList->m_Items[v35 + 1], 0LL);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_65;
      if ( v35 >= skillTitleRangeLabelList->max_length )
        goto LABEL_67;
      if ( !titleList )
        goto LABEL_65;
      if ( v35 >= titleList->max_length )
        goto LABEL_67;
      baseSprite = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v35];
      if ( !baseSprite )
        goto LABEL_65;
      UIRangeLabel__Set((UIRangeLabel_o *)baseSprite, titleList->m_Items[v35], 0LL, 1, 0, 0, 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_65;
      if ( v35 >= skillExplanationLabelList->max_length )
        goto LABEL_67;
      if ( !v42 )
        goto LABEL_65;
      if ( v35 >= v42->max_length )
        goto LABEL_67;
      baseSprite = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                 skillExplanationLabelList->m_Items[v35],
                                                 v42->m_Items[v35],
                                                 22,
                                                 0,
                                                 0LL);
    }
    skillBaseList = this->fields.skillBaseList;
    ++v35;
    v36 = v36 - (float)this->fields.skillPitch;
    if ( !skillBaseList )
      goto LABEL_65;
  }
}