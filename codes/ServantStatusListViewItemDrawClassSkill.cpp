void ServantStatusListViewItemDrawClassSkill___cctor(const MethodInfo *method)
{
  if ( (byte_596D336 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItemDrawClassSkill_TypeInfo);
    byte_596D336 = 1;
  }
  *ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawClassSkill_StaticFields)0x2800000012LL;
}


void ServantStatusListViewItemDrawClassSkill___ctor(
        ServantStatusListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct UnityEngine_GameObject_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct SkillIconComponent_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct UIRangeLabel_array *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct UILabel_array *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_596D335 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    sub_2213A60(&SkillIconComponent___TypeInfo);
    sub_2213A60(&UILabel___TypeInfo);
    sub_2213A60(&UIRangeLabel___TypeInfo);
    byte_596D335 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct UnityEngine_GameObject_array *)sub_2213B20(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v4->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.skillBaseList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (struct SkillIconComponent_array *)sub_2213B20(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillIconList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (struct UIRangeLabel_array *)sub_2213B20(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillTitleRangeLabelList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (struct UILabel_array *)sub_2213B20(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v26;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillExplanationLabelList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.transformNameAddHeight = 34;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawClassSkill__Awake(
        ServantStatusListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  ServantStatusListViewItemDrawClassSkill_o *v3; // x19
  struct UnityEngine_GameObject_array *v4; // x8
  float y; // s8
  int v6; // w9
  int v7; // w8
  struct UISprite_o *baseSprite; // x9
  int v9; // w10
  int32_t mHeight; // w11
  int mWidth; // s0
  int v12; // w20
  int v13; // w8
  float v14; // s8
  struct UnityEngine_GameObject_array *v15; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_25;
  v3 = this;
  if ( SLODWORD(skillBaseList->max_length) >= 2 )
  {
    this = (ServantStatusListViewItemDrawClassSkill_o *)skillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0);
    if ( !this )
      goto LABEL_25;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    v4 = v3->fields.skillBaseList;
    if ( !v4 )
      goto LABEL_25;
    if ( (v4->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_26;
    this = (ServantStatusListViewItemDrawClassSkill_o *)v4->m_Items[1];
    if ( !this )
      goto LABEL_25;
    y = localPosition.fields.y;
    this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0);
    if ( !this )
      goto LABEL_25;
    v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    skillBaseList = v3->fields.skillBaseList;
    v6 = (int)(float)(y - v17.fields.y);
    if ( (float)(y - v17.fields.y) == INFINITY )
      v6 = 0x80000000;
    v3->fields.skillPitch = v6;
    if ( !skillBaseList )
      goto LABEL_25;
  }
  v7 = v3->fields.skillPitch * LODWORD(skillBaseList->max_length);
  baseSprite = v3->fields.baseSprite;
  v9 = v7 & 1;
  if ( v7 < 0 )
    v9 = -v9;
  if ( !baseSprite )
    goto LABEL_25;
  mHeight = baseSprite->fields.mHeight;
  mWidth = baseSprite->fields.mWidth;
  v12 = v9 + v7;
  this = (ServantStatusListViewItemDrawClassSkill_o *)v3->fields.titleSprite;
  v3->fields.baseSize.fields.z = 0.0;
  v3->fields.baseSize.fields.x = (float)mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight - (v9 + v7));
  if ( !this )
    goto LABEL_25;
  this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
  if ( !this )
    goto LABEL_25;
  v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.titleBasePosition.fields.x = v18.fields.x;
  v13 = v12 >= 0 ? v12 : v12 + 1;
  v14 = (float)(v13 >> 1);
  v15 = v3->fields.skillBaseList;
  v3->fields.titleBasePosition.fields.y = v18.fields.y - v14;
  v3->fields.titleBasePosition.fields.z = v18.fields.z;
  if ( !v15 )
LABEL_25:
    sub_2213CDC(this, method);
  if ( !LODWORD(v15->max_length) )
LABEL_26:
    sub_2213CE4(this);
  this = (ServantStatusListViewItemDrawClassSkill_o *)v15->m_Items[0];
  if ( !this )
    goto LABEL_25;
  this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)this,
                                                        0);
  if ( !this )
    goto LABEL_25;
  v19 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.skillBasePosition.fields.x = v19.fields.x;
  v3->fields.skillBasePosition.fields.y = v19.fields.y - v14;
  v3->fields.skillBasePosition.fields.z = v19.fields.z;
}


int32_t ServantStatusListViewItemDrawClassSkill__GetKind(
        ServantStatusListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  return 5;
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawClassSkill__SetItem(
        ServantStatusListViewItemDrawClassSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UILabel_o *explanationLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  struct SkillIconComponent_array *skillIconList; // x9
  int max_length; // w11
  unsigned __int64 max_length_low; // x10
  __int64 v13; // x11
  unsigned __int64 v14; // x9
  int v15; // w22
  int *v16; // x13
  __int64 v17; // x2
  int v18; // w24
  int32_t transformNameAddHeight; // w25
  UIWidget_o *transformNameLabel; // x21
  UIWidget_o *transformNameSprite; // x21
  UILabel_o *v22; // x21
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
  int v35; // w8
  float z; // s10
  int v37; // w21
  float x; // s9
  float y; // s11
  UnityEngine_Object_o *baseCollider; // x20
  float v41; // s8
  int32_t v42; // w1
  int32_t v43; // w1
  int v44; // w20
  float v45; // s8
  float v46; // s10
  float v47; // s9
  int v48; // w20
  struct UnityEngine_GameObject_array *v49; // x8
  float v50; // s8
  float v51; // s0
  float v52; // s10
  unsigned int v53; // w20
  float v54; // s9
  unsigned int v55; // w9
  struct UnityEngine_GameObject_array *v56; // x8
  struct SkillIconComponent_array *v57; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  __int64 v59; // x2
  struct UILabel_array *v60; // x8
  UILabel_o *v61; // x8
  int32_t mHeight; // w21
  int32_t v63; // w8
  float v64; // s0
  System_String_array *v65; // [xsp+0h] [xbp-90h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-88h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596D334 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantStatusListViewItemDrawClassSkill_TypeInfo);
    sub_2213A60(&StringLiteral_12446/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    byte_596D334 = 1;
  }
  idList = 0;
  v65 = 0;
  titleList = 0;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, *(_QWORD *)&mode);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12446/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0);
  if ( !explanationLabel )
    goto LABEL_101;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &v65, 1, 0);
  if ( !idList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_101;
  max_length = skillIconList->max_length;
  if ( max_length < 1 )
  {
    v15 = 1;
  }
  else
  {
    max_length_low = LODWORD(idList->max_length);
    v13 = max_length & (unsigned int)~(max_length >> 31);
    v14 = 0;
    v15 = 1;
    do
    {
      if ( (__int64)v14 >= (int)max_length_low )
      {
        ++v14;
      }
      else
      {
        if ( v14 >= max_length_low )
LABEL_103:
          sub_2213CE4(gameObject);
        v16 = (int *)((char *)idList + 4 * v14++);
        if ( v16[8] >= 1 )
          v15 = v14;
      }
    }
    while ( v14 != v13 );
  }
  if ( ServantStatusListViewItem__get_AnyTransformServant(item, 0)
    && !ServantStatusListViewItem__get_TransformIsNotClassSkillChange(item, 0) )
  {
    transformNameLabel = (UIWidget_o *)this->fields.transformNameLabel;
    TransformNameLabelColor = ServantStatusListViewItem__get_TransformNameLabelColor(item, 0);
    if ( !transformNameLabel )
      goto LABEL_101;
    UIWidget__set_color(transformNameLabel, TransformNameLabelColor, 0);
    transformNameSprite = (UIWidget_o *)this->fields.transformNameSprite;
    TransformNameSpriteColor = ServantStatusListViewItem__get_TransformNameSpriteColor(item, 0);
    if ( !transformNameSprite )
      goto LABEL_101;
    UIWidget__set_color(transformNameSprite, TransformNameSpriteColor, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.transformNameSprite;
    if ( !gameObject )
      goto LABEL_101;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_101;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    v22 = this->fields.transformNameLabel;
    gameObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__GetTransformName(item, 0);
    if ( !v22 )
      goto LABEL_101;
    UILabel__set_text(v22, (System_String_o *)gameObject, 0);
    transformNameAddHeight = this->fields.transformNameAddHeight;
    v18 = -transformNameAddHeight;
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.transformNameSprite;
    if ( !gameObject )
      goto LABEL_101;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_101;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    v18 = 0;
    transformNameAddHeight = 0;
  }
  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_101;
  v24 = 4;
  while ( 1 )
  {
    v25 = v24 - 4;
    if ( v24 - 4 >= SLODWORD(skillBaseList->max_length) )
      break;
    if ( (__int64)v25 < v15 )
    {
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_101;
      if ( v25 >= LODWORD(skillExplanationLabelList->max_length) )
        goto LABEL_103;
      if ( !v65 )
        goto LABEL_101;
      if ( v25 >= LODWORD(v65->max_length) )
        goto LABEL_103;
      v27 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      v28 = (UILabel_o *)*((_QWORD *)&skillExplanationLabelList->obj.klass + v24);
      v29 = (System_String_o *)*((_QWORD *)&v65->obj.klass + v24);
      if ( !*(&ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo, v9, v17);
        v27 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      gameObject = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                 v28,
                                                 v29,
                                                 v27->static_fields->DETAIL_FONT_SIZE,
                                                 v27->static_fields->DETAIL_FONT_SIZE,
                                                 0);
      v30 = this->fields.skillExplanationLabelList;
      if ( !v30 )
        goto LABEL_101;
      if ( v25 >= LODWORD(v30->max_length) )
        goto LABEL_103;
      v31 = *((_QWORD *)&v30->obj.klass + v24);
      if ( !v31 )
        goto LABEL_101;
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
      goto LABEL_101;
  }
  v35 = transformNameAddHeight & 1;
  if ( transformNameAddHeight < 0 )
    v35 = -v35;
  z = this->fields.baseSize.fields.z;
  v37 = v35 + transformNameAddHeight;
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v17);
  v41 = y + (float)v37;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !gameObject )
      goto LABEL_101;
    v68.fields.x = x;
    v68.fields.y = y + (float)v37;
    v68.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v68, 0);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !gameObject )
    goto LABEL_101;
  v42 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)gameObject, v42, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !gameObject )
    goto LABEL_101;
  v43 = v41 == INFINITY ? 0x80000000 : (int)v41;
  UIWidget__set_height((UIWidget_o *)gameObject, v43, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v44 = v37 >= 0 ? v37 : v37 + 1;
  if ( !gameObject )
    goto LABEL_101;
  v45 = this->fields.titleBasePosition.fields.x;
  v46 = this->fields.titleBasePosition.fields.y;
  v47 = this->fields.titleBasePosition.fields.z;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
  if ( !gameObject
    || (v48 = v44 >> 1,
        v69.fields.z = v47,
        v69.fields.y = v46 + (float)v48,
        v69.fields.x = v45,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v69, 0),
        (v49 = this->fields.skillBaseList) == 0) )
  {
LABEL_101:
    sub_2213CDC(gameObject, v9);
  }
  v50 = this->fields.skillBasePosition.fields.x;
  v51 = (float)(v48 + v18);
  v52 = this->fields.skillBasePosition.fields.z;
  v53 = 0;
  v54 = this->fields.skillBasePosition.fields.y + v51;
  while ( 1 )
  {
    v55 = v49->max_length;
    if ( (int)v53 >= (int)v55 )
      break;
    if ( (int)v53 >= v15 )
    {
      if ( v53 >= v55 )
        goto LABEL_103;
      gameObject = v49->m_Items[v53];
      if ( !gameObject )
        goto LABEL_101;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    }
    else
    {
      if ( v53 >= v55 )
        goto LABEL_103;
      gameObject = v49->m_Items[v53];
      if ( !gameObject )
        goto LABEL_101;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      v56 = this->fields.skillBaseList;
      if ( !v56 )
        goto LABEL_101;
      if ( v53 >= LODWORD(v56->max_length) )
        goto LABEL_103;
      gameObject = v56->m_Items[v53];
      if ( !gameObject )
        goto LABEL_101;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( !gameObject )
        goto LABEL_101;
      v70.fields.x = v50;
      v70.fields.y = v54;
      v70.fields.z = v52;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v70, 0);
      v57 = this->fields.skillIconList;
      if ( !v57 )
        goto LABEL_101;
      if ( v53 >= LODWORD(v57->max_length) )
        goto LABEL_103;
      if ( !idList )
        goto LABEL_101;
      if ( v53 >= LODWORD(idList->max_length) )
        goto LABEL_103;
      gameObject = (UnityEngine_GameObject_o *)v57->m_Items[v53];
      if ( !gameObject )
        goto LABEL_101;
      SkillIconComponent__Set((SkillIconComponent_o *)gameObject, idList->m_Items[v53], 0);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_101;
      if ( v53 >= LODWORD(skillTitleRangeLabelList->max_length) )
        goto LABEL_103;
      if ( !titleList )
        goto LABEL_101;
      if ( v53 >= LODWORD(titleList->max_length) )
        goto LABEL_103;
      gameObject = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v53];
      if ( !gameObject )
        goto LABEL_101;
      UIRangeLabel__Set((UIRangeLabel_o *)gameObject, titleList->m_Items[v53], 0, 1, 0, 0, 0);
    }
    v60 = this->fields.skillExplanationLabelList;
    if ( !v60 )
      goto LABEL_101;
    if ( v53 >= LODWORD(v60->max_length) )
      goto LABEL_103;
    v61 = v60->m_Items[v53];
    if ( v61 )
    {
      gameObject = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      mHeight = v61->fields.mHeight;
      if ( !*(&ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo, v9, v59);
        gameObject = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      ++v53;
      v63 = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 4) + mHeight;
      if ( v63 <= this->fields.skillPitch )
        v63 = this->fields.skillPitch;
      v64 = (float)v63;
      v49 = this->fields.skillBaseList;
      v54 = v54 - v64;
      if ( v49 )
        continue;
    }
    goto LABEL_101;
  }
}