void __fastcall ServantStatusListViewItemDrawClassSkill___cctor(const MethodInfo *method)
{
  if ( (byte_4BD94C5 & 1) == 0 )
  {
    sub_1C21E38(&ServantStatusListViewItemDrawClassSkill_TypeInfo);
    byte_4BD94C5 = 1;
  }
  *ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawClassSkill_StaticFields)0x2800000012LL;
}


void __fastcall ServantStatusListViewItemDrawClassSkill___ctor(
        ServantStatusListViewItemDrawClassSkill_o *this,
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

  if ( (byte_4BD94C4 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&UnityEngine_GameObject___TypeInfo);
    sub_1C21E38(&SkillIconComponent___TypeInfo);
    sub_1C21E38(&UILabel___TypeInfo);
    sub_1C21E38(&UIRangeLabel___TypeInfo);
    byte_4BD94C4 = 1;
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
    this = (ServantStatusListViewItemDrawClassSkill_o *)skillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_27;
    this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
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
    this = (ServantStatusListViewItemDrawClassSkill_o *)v5->m_Items[1];
    if ( !this )
      goto LABEL_27;
    v6 = v4;
    this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
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
  this = (ServantStatusListViewItemDrawClassSkill_o *)v3->fields.titleSprite;
  v12 = v10 - (v11 & 0xFFFFFFFE) + v10;
  v13 = (float)(baseSprite->fields.mHeight - v12);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v13;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_27;
  this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_Component__get_transform(
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
  this = (ServantStatusListViewItemDrawClassSkill_o *)v17->m_Items[0];
  if ( !this )
    goto LABEL_27;
  this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_27;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.skillBasePosition.fields.x = localPosition.fields.x;
  v3->fields.skillBasePosition.fields.y = localPosition.fields.y - v19;
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
  UILabel_o *explanationLabel; // x21
  UnityEngine_GameObject_o *transformNameSprite; // x0
  __int64 v9; // x1
  struct SkillIconComponent_array *skillIconList; // x9
  __int64 v11; // x11
  unsigned __int64 max_length; // x10
  signed __int64 v13; // x9
  int v14; // w22
  int v15; // w13
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x21
  int32_t transformNameAddHeight; // w25
  int v19; // w24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  __int64 v21; // x27
  unsigned __int64 v22; // x28
  struct UILabel_array *skillExplanationLabelList; // x8
  ServantStatusListViewItemDrawClassSkill_c *v24; // x0
  UILabel_o *v25; // x20
  System_String_o *v26; // x21
  struct UILabel_array *v27; // x8
  __int64 v28; // x8
  int v29; // w10
  int32_t skillPitch; // w8
  int32_t v31; // w9
  int32_t v32; // w9
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  int v37; // w21
  float v38; // s8
  int32_t v39; // w1
  int32_t v40; // w1
  int v41; // w20
  float v42; // s8
  float v43; // s10
  float v44; // s9
  int v45; // w21
  struct UnityEngine_GameObject_array *v46; // x8
  float v47; // s8
  float v48; // s9
  il2cpp_array_size_t v49; // w20
  float v50; // s10
  signed int v51; // w9
  struct UnityEngine_GameObject_array *v52; // x8
  struct SkillIconComponent_array *v53; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  struct UILabel_array *v55; // x8
  UILabel_o *v56; // x8
  int32_t mHeight; // w21
  int32_t v58; // w9
  System_String_array *v59; // [xsp+0h] [xbp-90h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-88h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD94C3 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantStatusListViewItemDrawClassSkill_TypeInfo);
    sub_1C21E38(&StringLiteral_12098/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    byte_4BD94C3 = 1;
  }
  idList = 0LL;
  v59 = 0LL;
  titleList = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transformNameSprite = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_12098/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/,
                                                      0LL);
  if ( !explanationLabel )
    goto LABEL_95;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameSprite, 0LL);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &v59, 1, 0LL);
  if ( !idList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_95;
  v11 = *(_QWORD *)&skillIconList->max_length;
  if ( v11 << 32 < 1 )
  {
    v14 = 1;
  }
  else
  {
    max_length = idList->max_length;
    v13 = 0LL;
    v14 = 1;
    do
    {
      if ( v13 >= (int)max_length )
      {
        ++v13;
      }
      else
      {
        if ( v13 >= max_length )
LABEL_97:
          sub_1C2209C(transformNameSprite, v9);
        v15 = idList->m_Items[++v13];
        if ( v15 >= 1 )
          v14 = v13;
      }
    }
    while ( v13 < (int)v11 );
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
    v19 = -transformNameAddHeight;
  }
  else
  {
    UnityEngine_GameObject__SetActive(transformNameSprite, 0, 0LL);
    v19 = 0;
    transformNameAddHeight = 0;
  }
  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_95;
  v21 = 4LL;
  while ( 1 )
  {
    v22 = v21 - 4;
    if ( v21 - 4 >= (int)skillBaseList->max_length )
      break;
    if ( (__int64)v22 < v14 )
    {
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_95;
      if ( v22 >= skillExplanationLabelList->max_length )
        goto LABEL_97;
      if ( !v59 )
        goto LABEL_95;
      if ( v22 >= v59->max_length )
        goto LABEL_97;
      v24 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      v25 = (UILabel_o *)*((_QWORD *)&skillExplanationLabelList->obj.klass + v21);
      v26 = (System_String_o *)*((_QWORD *)&v59->obj.klass + v21);
      if ( !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        v24 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      transformNameSprite = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                          v25,
                                                          v26,
                                                          v24->static_fields->DETAIL_FONT_SIZE,
                                                          v24->static_fields->DETAIL_FONT_SIZE,
                                                          0LL);
      v27 = this->fields.skillExplanationLabelList;
      if ( !v27 )
        goto LABEL_95;
      if ( v22 >= v27->max_length )
        goto LABEL_97;
      v28 = *((_QWORD *)&v27->obj.klass + v21);
      if ( !v28 )
        goto LABEL_95;
      v29 = *(_DWORD *)(v28 + 172);
      skillPitch = this->fields.skillPitch;
      v31 = v29 + ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v31 >= skillPitch )
        transformNameAddHeight += v31;
      else
        transformNameAddHeight += skillPitch;
    }
    skillBaseList = this->fields.skillBaseList;
    ++v21;
    if ( !skillBaseList )
      goto LABEL_95;
  }
  if ( transformNameAddHeight >= 0 )
    v32 = transformNameAddHeight;
  else
    v32 = transformNameAddHeight + 1;
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  v37 = transformNameAddHeight - (v32 & 0xFFFFFFFE) + transformNameAddHeight;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v38 = y + (float)v37;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    transformNameSprite = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !transformNameSprite )
      goto LABEL_95;
    v62.fields.x = x;
    v62.fields.y = v38;
    v62.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)transformNameSprite, v62, 0LL);
  }
  transformNameSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !transformNameSprite )
    goto LABEL_95;
  v39 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)transformNameSprite, v39, 0LL);
  transformNameSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !transformNameSprite )
    goto LABEL_95;
  v40 = v38 == INFINITY ? 0x80000000 : (int)v38;
  UIWidget__set_height((UIWidget_o *)transformNameSprite, v40, 0LL);
  transformNameSprite = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v41 = v37 >= 0 ? v37 : v37 + 1;
  if ( !transformNameSprite )
    goto LABEL_95;
  v42 = this->fields.titleBasePosition.fields.x;
  v43 = this->fields.titleBasePosition.fields.y;
  v44 = this->fields.titleBasePosition.fields.z;
  transformNameSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)transformNameSprite,
                                                      0LL);
  if ( !transformNameSprite
    || (v45 = v41 >> 1,
        v63.fields.y = v43 + (float)(v41 >> 1),
        v63.fields.x = v42,
        v63.fields.z = v44,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transformNameSprite, v63, 0LL),
        (v46 = this->fields.skillBaseList) == 0LL) )
  {
LABEL_95:
    sub_1C22094(transformNameSprite, v9);
  }
  v47 = this->fields.skillBasePosition.fields.z;
  v48 = this->fields.skillBasePosition.fields.x;
  v49 = 0;
  v50 = this->fields.skillBasePosition.fields.y + (float)(v45 + v19);
  while ( 1 )
  {
    v51 = v46->max_length;
    if ( (int)v49 >= v51 )
      break;
    if ( v49 >= v51 )
      goto LABEL_97;
    transformNameSprite = v46->m_Items[v49];
    if ( !transformNameSprite )
      goto LABEL_95;
    if ( (int)v49 >= v14 )
    {
      UnityEngine_GameObject__SetActive(transformNameSprite, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(transformNameSprite, 1, 0LL);
      v52 = this->fields.skillBaseList;
      if ( !v52 )
        goto LABEL_95;
      if ( v49 >= v52->max_length )
        goto LABEL_97;
      transformNameSprite = v52->m_Items[v49];
      if ( !transformNameSprite )
        goto LABEL_95;
      transformNameSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transformNameSprite, 0LL);
      if ( !transformNameSprite )
        goto LABEL_95;
      v64.fields.x = v48;
      v64.fields.y = v50;
      v64.fields.z = v47;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transformNameSprite, v64, 0LL);
      v53 = this->fields.skillIconList;
      if ( !v53 )
        goto LABEL_95;
      if ( v49 >= v53->max_length )
        goto LABEL_97;
      if ( !idList )
        goto LABEL_95;
      if ( v49 >= idList->max_length )
        goto LABEL_97;
      transformNameSprite = (UnityEngine_GameObject_o *)v53->m_Items[v49];
      if ( !transformNameSprite )
        goto LABEL_95;
      SkillIconComponent__Set((SkillIconComponent_o *)transformNameSprite, idList->m_Items[v49 + 1], 0LL);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_95;
      if ( v49 >= skillTitleRangeLabelList->max_length )
        goto LABEL_97;
      if ( !titleList )
        goto LABEL_95;
      if ( v49 >= titleList->max_length )
        goto LABEL_97;
      transformNameSprite = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v49];
      if ( !transformNameSprite )
        goto LABEL_95;
      UIRangeLabel__Set((UIRangeLabel_o *)transformNameSprite, titleList->m_Items[v49], 0LL, 1, 0, 0LL);
    }
    v55 = this->fields.skillExplanationLabelList;
    if ( !v55 )
      goto LABEL_95;
    if ( v49 >= v55->max_length )
      goto LABEL_97;
    v56 = v55->m_Items[v49];
    if ( v56 )
    {
      transformNameSprite = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      mHeight = v56->fields.mHeight;
      if ( !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        transformNameSprite = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      ++v49;
      v46 = this->fields.skillBaseList;
      v58 = *(_DWORD *)(*(_QWORD *)&transformNameSprite[7].fields.m_CachedPtr + 4LL) + mHeight;
      if ( v58 < this->fields.skillPitch )
        v58 = this->fields.skillPitch;
      v50 = v50 - (float)v58;
      if ( v46 )
        continue;
    }
    goto LABEL_95;
  }
}