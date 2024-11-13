void __fastcall ServantStatusListViewItemDrawClassSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct ServantStatusListViewItemDrawClassSkill_StaticFields *static_fields; // x8

  if ( (byte_4B131F2 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItemDrawClassSkill_TypeInfo, v1, v2);
    byte_4B131F2 = 1;
  }
  static_fields = ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DETAIL_FONT_SIZE = 0x1F400000012LL;
  static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawClassSkill___ctor(
        ServantStatusListViewItemDrawClassSkill_o *this,
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

  if ( (byte_4B131F1 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v4, v5);
    sub_1BCA7E0(&SkillIconComponent___TypeInfo, v6, v7);
    sub_1BCA7E0(&UILabel___TypeInfo, v8, v9);
    sub_1BCA7E0(&UIRangeLabel___TypeInfo, v10, v11);
    byte_4B131F1 = 1;
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
    sub_1BCAA3C(this, method);
  if ( !v17->max_length )
LABEL_28:
    sub_1BCAA44(this, method);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawClassSkill__SetItem(
        ServantStatusListViewItemDrawClassSkill_o *this,
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
  UnityEngine_GameObject_o *transformNameSprite; // x0
  __int64 v15; // x1
  struct SkillIconComponent_array *skillIconList; // x9
  __int64 v17; // x11
  unsigned __int64 max_length; // x10
  signed __int64 v19; // x9
  int v20; // w22
  int v21; // w13
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x21
  int32_t transformNameAddHeight; // w25
  int v25; // w24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  __int64 v27; // x27
  unsigned __int64 v28; // x28
  struct UILabel_array *skillExplanationLabelList; // x8
  ServantStatusListViewItemDrawClassSkill_c *v30; // x0
  UILabel_o *v31; // x20
  System_String_o *v32; // x21
  struct UILabel_array *v33; // x8
  __int64 v34; // x8
  int v35; // w10
  int32_t skillPitch; // w8
  int32_t v37; // w9
  int32_t v38; // w9
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  int v43; // w21
  float v44; // s8
  int32_t v45; // w1
  int32_t v46; // w1
  int v47; // w20
  float v48; // s8
  float v49; // s10
  float v50; // s9
  int v51; // w21
  struct UnityEngine_GameObject_array *v52; // x8
  float v53; // s8
  float v54; // s9
  il2cpp_array_size_t v55; // w20
  float v56; // s10
  signed int v57; // w9
  struct UnityEngine_GameObject_array *v58; // x8
  struct SkillIconComponent_array *v59; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  struct UILabel_array *v61; // x8
  UILabel_o *v62; // x8
  int32_t mHeight; // w21
  int32_t v64; // w9
  System_String_array *v65; // [xsp+0h] [xbp-90h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-88h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B131F0 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantStatusListViewItemDrawClassSkill_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_12017/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v11, v12);
    byte_4B131F0 = 1;
  }
  idList = 0LL;
  v65 = 0LL;
  titleList = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
  transformNameSprite = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_12017/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/,
                                                      0LL);
  if ( !explanationLabel )
    goto LABEL_95;
  UILabel__set_text(explanationLabel, (System_String_o *)transformNameSprite, 0LL);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &v65, 1, 0LL);
  if ( !idList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_95;
  v17 = *(_QWORD *)&skillIconList->max_length;
  if ( v17 << 32 < 1 )
  {
    v20 = 1;
  }
  else
  {
    max_length = idList->max_length;
    v19 = 0LL;
    v20 = 1;
    do
    {
      if ( v19 >= (int)max_length )
      {
        ++v19;
      }
      else
      {
        if ( v19 >= max_length )
LABEL_97:
          sub_1BCAA44(transformNameSprite, v15);
        v21 = idList->m_Items[++v19];
        if ( v21 >= 1 )
          v20 = v19;
      }
    }
    while ( v19 < (int)v17 );
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
    v25 = -transformNameAddHeight;
  }
  else
  {
    UnityEngine_GameObject__SetActive(transformNameSprite, 0, 0LL);
    v25 = 0;
    transformNameAddHeight = 0;
  }
  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_95;
  v27 = 4LL;
  while ( 1 )
  {
    v28 = v27 - 4;
    if ( v27 - 4 >= (int)skillBaseList->max_length )
      break;
    if ( (__int64)v28 < v20 )
    {
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_95;
      if ( v28 >= skillExplanationLabelList->max_length )
        goto LABEL_97;
      if ( !v65 )
        goto LABEL_95;
      if ( v28 >= v65->max_length )
        goto LABEL_97;
      v30 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      v31 = (UILabel_o *)*((_QWORD *)&skillExplanationLabelList->obj.klass + v27);
      v32 = (System_String_o *)*((_QWORD *)&v65->obj.klass + v27);
      if ( !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo, v15);
        v30 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      transformNameSprite = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                          v31,
                                                          v32,
                                                          v30->static_fields->DETAIL_FONT_SIZE,
                                                          v30->static_fields->DETAIL_FONT_SIZE,
                                                          v30->static_fields->MAX_HEIGHT,
                                                          0LL);
      v33 = this->fields.skillExplanationLabelList;
      if ( !v33 )
        goto LABEL_95;
      if ( v28 >= v33->max_length )
        goto LABEL_97;
      v34 = *((_QWORD *)&v33->obj.klass + v27);
      if ( !v34 )
        goto LABEL_95;
      v35 = *(_DWORD *)(v34 + 172);
      skillPitch = this->fields.skillPitch;
      v37 = v35 + ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v37 >= skillPitch )
        transformNameAddHeight += v37;
      else
        transformNameAddHeight += skillPitch;
    }
    skillBaseList = this->fields.skillBaseList;
    ++v27;
    if ( !skillBaseList )
      goto LABEL_95;
  }
  if ( transformNameAddHeight >= 0 )
    v38 = transformNameAddHeight;
  else
    v38 = transformNameAddHeight + 1;
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  v43 = transformNameAddHeight - (v38 & 0xFFFFFFFE) + transformNameAddHeight;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  v44 = y + (float)v43;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    transformNameSprite = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !transformNameSprite )
      goto LABEL_95;
    v68.fields.x = x;
    v68.fields.y = v44;
    v68.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)transformNameSprite, v68, 0LL);
  }
  transformNameSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !transformNameSprite )
    goto LABEL_95;
  v45 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)transformNameSprite, v45, 0LL);
  transformNameSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !transformNameSprite )
    goto LABEL_95;
  v46 = v44 == INFINITY ? 0x80000000 : (int)v44;
  UIWidget__set_height((UIWidget_o *)transformNameSprite, v46, 0LL);
  transformNameSprite = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v47 = v43 >= 0 ? v43 : v43 + 1;
  if ( !transformNameSprite )
    goto LABEL_95;
  v48 = this->fields.titleBasePosition.fields.x;
  v49 = this->fields.titleBasePosition.fields.y;
  v50 = this->fields.titleBasePosition.fields.z;
  transformNameSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)transformNameSprite,
                                                      0LL);
  if ( !transformNameSprite
    || (v51 = v47 >> 1,
        v69.fields.y = v49 + (float)(v47 >> 1),
        v69.fields.x = v48,
        v69.fields.z = v50,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transformNameSprite, v69, 0LL),
        (v52 = this->fields.skillBaseList) == 0LL) )
  {
LABEL_95:
    sub_1BCAA3C(transformNameSprite, v15);
  }
  v53 = this->fields.skillBasePosition.fields.z;
  v54 = this->fields.skillBasePosition.fields.x;
  v55 = 0;
  v56 = this->fields.skillBasePosition.fields.y + (float)(v51 + v25);
  while ( 1 )
  {
    v57 = v52->max_length;
    if ( (int)v55 >= v57 )
      break;
    if ( v55 >= v57 )
      goto LABEL_97;
    transformNameSprite = v52->m_Items[v55];
    if ( !transformNameSprite )
      goto LABEL_95;
    if ( (int)v55 >= v20 )
    {
      UnityEngine_GameObject__SetActive(transformNameSprite, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(transformNameSprite, 1, 0LL);
      v58 = this->fields.skillBaseList;
      if ( !v58 )
        goto LABEL_95;
      if ( v55 >= v58->max_length )
        goto LABEL_97;
      transformNameSprite = v58->m_Items[v55];
      if ( !transformNameSprite )
        goto LABEL_95;
      transformNameSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transformNameSprite, 0LL);
      if ( !transformNameSprite )
        goto LABEL_95;
      v70.fields.x = v54;
      v70.fields.y = v56;
      v70.fields.z = v53;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transformNameSprite, v70, 0LL);
      v59 = this->fields.skillIconList;
      if ( !v59 )
        goto LABEL_95;
      if ( v55 >= v59->max_length )
        goto LABEL_97;
      if ( !idList )
        goto LABEL_95;
      if ( v55 >= idList->max_length )
        goto LABEL_97;
      transformNameSprite = (UnityEngine_GameObject_o *)v59->m_Items[v55];
      if ( !transformNameSprite )
        goto LABEL_95;
      SkillIconComponent__Set((SkillIconComponent_o *)transformNameSprite, idList->m_Items[v55 + 1], 0LL);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_95;
      if ( v55 >= skillTitleRangeLabelList->max_length )
        goto LABEL_97;
      if ( !titleList )
        goto LABEL_95;
      if ( v55 >= titleList->max_length )
        goto LABEL_97;
      transformNameSprite = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v55];
      if ( !transformNameSprite )
        goto LABEL_95;
      UIRangeLabel__Set((UIRangeLabel_o *)transformNameSprite, titleList->m_Items[v55], 0LL, 1, 0, 0LL);
    }
    v61 = this->fields.skillExplanationLabelList;
    if ( !v61 )
      goto LABEL_95;
    if ( v55 >= v61->max_length )
      goto LABEL_97;
    v62 = v61->m_Items[v55];
    if ( v62 )
    {
      transformNameSprite = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      mHeight = v62->fields.mHeight;
      if ( !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo, v15);
        transformNameSprite = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      ++v55;
      v52 = this->fields.skillBaseList;
      v64 = *(_DWORD *)(*(_QWORD *)&transformNameSprite[7].fields.m_CachedPtr + 8LL) + mHeight;
      if ( v64 < this->fields.skillPitch )
        v64 = this->fields.skillPitch;
      v56 = v56 - (float)v64;
      if ( v52 )
        continue;
    }
    goto LABEL_95;
  }
}