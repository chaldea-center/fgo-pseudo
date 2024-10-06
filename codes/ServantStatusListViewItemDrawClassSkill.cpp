void __fastcall ServantStatusListViewItemDrawClassSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ServantStatusListViewItemDrawClassSkill_StaticFields *static_fields; // x8

  if ( (byte_4A6C9E8 & 1) == 0 )
  {
    sub_1B90010(&ServantStatusListViewItemDrawClassSkill_TypeInfo, v1);
    byte_4A6C9E8 = 1;
  }
  static_fields = ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DETAIL_FONT_SIZE = 0x1F400000012LL;
  static_fields->ADJUST_HEIGHT = 40;
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

  if ( (byte_4A6C9E7 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, method);
    sub_1B90010(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1B90010(&SkillIconComponent___TypeInfo, v4);
    sub_1B90010(&UILabel___TypeInfo, v5);
    sub_1B90010(&UIRangeLabel___TypeInfo, v6);
    byte_4A6C9E7 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_1B900B8(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v7->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v8;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.skillBaseList, (int32_t)v8, v9, v10);
  v11 = (struct SkillIconComponent_array *)sub_1B900B8(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v11;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.skillIconList, (int32_t)v11, v12, v13);
  v14 = (struct UIRangeLabel_array *)sub_1B900B8(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v14;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.skillTitleRangeLabelList, (int32_t)v14, v15, v16);
  v17 = (struct UILabel_array *)sub_1B900B8(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v17;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.skillExplanationLabelList, (int32_t)v17, v18, v19);
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
    sub_1B9026C(this, method);
  if ( !v17->max_length )
LABEL_28:
    sub_1B90274(this, method);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *explanationLabel; // x21
  UnityEngine_GameObject_o *transformNameSprite; // x0
  __int64 v12; // x1
  struct SkillIconComponent_array *skillIconList; // x9
  __int64 v14; // x11
  unsigned __int64 max_length; // x10
  signed __int64 v16; // x9
  int v17; // w22
  int v18; // w13
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x21
  int32_t transformNameAddHeight; // w25
  int v22; // w24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  __int64 v24; // x27
  unsigned __int64 v25; // x28
  struct UILabel_array *skillExplanationLabelList; // x8
  ServantStatusListViewItemDrawClassSkill_c *v27; // x0
  UILabel_o *v28; // x20
  System_String_o *v29; // x21
  struct UILabel_array *v30; // x8
  __int64 v31; // x8
  int v32; // w10
  int32_t skillPitch; // w8
  int32_t v34; // w9
  int32_t v35; // w9
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  int v40; // w21
  float v41; // s8
  int32_t v42; // w1
  int32_t v43; // w1
  int v44; // w20
  float v45; // s8
  float v46; // s10
  float v47; // s9
  int v48; // w21
  struct UnityEngine_GameObject_array *v49; // x8
  float v50; // s8
  float v51; // s9
  il2cpp_array_size_t v52; // w20
  float v53; // s10
  signed int v54; // w9
  struct UnityEngine_GameObject_array *v55; // x8
  struct SkillIconComponent_array *v56; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  struct UILabel_array *v58; // x8
  UILabel_o *v59; // x8
  int32_t mHeight; // w21
  int32_t v61; // w9
  System_String_array *v62; // [xsp+0h] [xbp-90h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-88h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A6C9E6 & 1) == 0 )
  {
    sub_1B90010(&LocalizationManager_TypeInfo, item);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v7);
    sub_1B90010(&ServantStatusListViewItemDrawClassSkill_TypeInfo, v8);
    sub_1B90010(&StringLiteral_11886/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v9);
    byte_4A6C9E6 = 1;
  }
  idList = 0LL;
  v62 = 0LL;
  titleList = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  transformNameSprite = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_11886/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/,
                                                      0LL);
  if ( !explanationLabel )
    goto LABEL_95;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameSprite, 0LL);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &v62, 1, 0LL);
  if ( !idList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_95;
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
LABEL_97:
          sub_1B90274(transformNameSprite, v12);
        v18 = idList->m_Items[++v16];
        if ( v18 >= 1 )
          v17 = v16;
      }
    }
    while ( v16 < (int)v14 );
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
    v22 = -transformNameAddHeight;
  }
  else
  {
    UnityEngine_GameObject__SetActive(transformNameSprite, 0, 0LL);
    v22 = 0;
    transformNameAddHeight = 0;
  }
  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_95;
  v24 = 4LL;
  while ( 1 )
  {
    v25 = v24 - 4;
    if ( v24 - 4 >= (int)skillBaseList->max_length )
      break;
    if ( (__int64)v25 < v17 )
    {
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_95;
      if ( v25 >= skillExplanationLabelList->max_length )
        goto LABEL_97;
      if ( !v62 )
        goto LABEL_95;
      if ( v25 >= v62->max_length )
        goto LABEL_97;
      v27 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      v28 = (UILabel_o *)*((_QWORD *)&skillExplanationLabelList->obj.klass + v24);
      v29 = (System_String_o *)*((_QWORD *)&v62->obj.klass + v24);
      if ( !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        v27 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      transformNameSprite = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                          v28,
                                                          v29,
                                                          v27->static_fields->DETAIL_FONT_SIZE,
                                                          v27->static_fields->DETAIL_FONT_SIZE,
                                                          v27->static_fields->MAX_HEIGHT,
                                                          0LL);
      v30 = this->fields.skillExplanationLabelList;
      if ( !v30 )
        goto LABEL_95;
      if ( v25 >= v30->max_length )
        goto LABEL_97;
      v31 = *((_QWORD *)&v30->obj.klass + v24);
      if ( !v31 )
        goto LABEL_95;
      v32 = *(_DWORD *)(v31 + 172);
      skillPitch = this->fields.skillPitch;
      v34 = v32 + ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v34 >= skillPitch )
        transformNameAddHeight += v34;
      else
        transformNameAddHeight += skillPitch;
    }
    skillBaseList = this->fields.skillBaseList;
    ++v24;
    if ( !skillBaseList )
      goto LABEL_95;
  }
  if ( transformNameAddHeight >= 0 )
    v35 = transformNameAddHeight;
  else
    v35 = transformNameAddHeight + 1;
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  v40 = transformNameAddHeight - (v35 & 0xFFFFFFFE) + transformNameAddHeight;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v41 = y + (float)v40;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    transformNameSprite = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !transformNameSprite )
      goto LABEL_95;
    v65.fields.x = x;
    v65.fields.y = v41;
    v65.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)transformNameSprite, v65, 0LL);
  }
  transformNameSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !transformNameSprite )
    goto LABEL_95;
  v42 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)transformNameSprite, v42, 0LL);
  transformNameSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !transformNameSprite )
    goto LABEL_95;
  v43 = v41 == INFINITY ? 0x80000000 : (int)v41;
  UIWidget__set_height((UIWidget_o *)transformNameSprite, v43, 0LL);
  transformNameSprite = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v44 = v40 >= 0 ? v40 : v40 + 1;
  if ( !transformNameSprite )
    goto LABEL_95;
  v45 = this->fields.titleBasePosition.fields.x;
  v46 = this->fields.titleBasePosition.fields.y;
  v47 = this->fields.titleBasePosition.fields.z;
  transformNameSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)transformNameSprite,
                                                      0LL);
  if ( !transformNameSprite
    || (v48 = v44 >> 1,
        v66.fields.y = v46 + (float)(v44 >> 1),
        v66.fields.x = v45,
        v66.fields.z = v47,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transformNameSprite, v66, 0LL),
        (v49 = this->fields.skillBaseList) == 0LL) )
  {
LABEL_95:
    sub_1B9026C(transformNameSprite, v12);
  }
  v50 = this->fields.skillBasePosition.fields.z;
  v51 = this->fields.skillBasePosition.fields.x;
  v52 = 0;
  v53 = this->fields.skillBasePosition.fields.y + (float)(v48 + v22);
  while ( 1 )
  {
    v54 = v49->max_length;
    if ( (int)v52 >= v54 )
      break;
    if ( v52 >= v54 )
      goto LABEL_97;
    transformNameSprite = v49->m_Items[v52];
    if ( !transformNameSprite )
      goto LABEL_95;
    if ( (int)v52 >= v17 )
    {
      UnityEngine_GameObject__SetActive(transformNameSprite, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(transformNameSprite, 1, 0LL);
      v55 = this->fields.skillBaseList;
      if ( !v55 )
        goto LABEL_95;
      if ( v52 >= v55->max_length )
        goto LABEL_97;
      transformNameSprite = v55->m_Items[v52];
      if ( !transformNameSprite )
        goto LABEL_95;
      transformNameSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transformNameSprite, 0LL);
      if ( !transformNameSprite )
        goto LABEL_95;
      v67.fields.x = v51;
      v67.fields.y = v53;
      v67.fields.z = v50;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transformNameSprite, v67, 0LL);
      v56 = this->fields.skillIconList;
      if ( !v56 )
        goto LABEL_95;
      if ( v52 >= v56->max_length )
        goto LABEL_97;
      if ( !idList )
        goto LABEL_95;
      if ( v52 >= idList->max_length )
        goto LABEL_97;
      transformNameSprite = (UnityEngine_GameObject_o *)v56->m_Items[v52];
      if ( !transformNameSprite )
        goto LABEL_95;
      SkillIconComponent__Set((SkillIconComponent_o *)transformNameSprite, idList->m_Items[v52 + 1], 0LL);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_95;
      if ( v52 >= skillTitleRangeLabelList->max_length )
        goto LABEL_97;
      if ( !titleList )
        goto LABEL_95;
      if ( v52 >= titleList->max_length )
        goto LABEL_97;
      transformNameSprite = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v52];
      if ( !transformNameSprite )
        goto LABEL_95;
      UIRangeLabel__Set((UIRangeLabel_o *)transformNameSprite, titleList->m_Items[v52], 0LL, 1, 0, 0LL);
    }
    v58 = this->fields.skillExplanationLabelList;
    if ( !v58 )
      goto LABEL_95;
    if ( v52 >= v58->max_length )
      goto LABEL_97;
    v59 = v58->m_Items[v52];
    if ( v59 )
    {
      transformNameSprite = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      mHeight = v59->fields.mHeight;
      if ( !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        transformNameSprite = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      ++v52;
      v49 = this->fields.skillBaseList;
      v61 = *(_DWORD *)(*(_QWORD *)&transformNameSprite[7].fields.m_CachedPtr + 8LL) + mHeight;
      if ( v61 < this->fields.skillPitch )
        v61 = this->fields.skillPitch;
      v53 = v53 - (float)v61;
      if ( v49 )
        continue;
    }
    goto LABEL_95;
  }
}