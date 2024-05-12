void __fastcall ServantStatusListViewItemDrawClassSkill___cctor(const MethodInfo *method)
{
  if ( (byte_4392973 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItemDrawClassSkill_TypeInfo);
    byte_4392973 = 1;
  }
  ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->MAX_HEIGHT = 500;
  ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawClassSkill___ctor(
        ServantStatusListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct SkillIconComponent_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct UIRangeLabel_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UILabel_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UISprite_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_4392972 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&UnityEngine_GameObject___TypeInfo);
    sub_B775C4(&SkillIconComponent___TypeInfo);
    sub_B775C4(&UILabel___TypeInfo);
    sub_B775C4(&UIRangeLabel___TypeInfo);
    byte_4392972 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct SkillIconComponent_array *)sub_B775DC(
                                            UnityEngine_GameObject___TypeInfo,
                                            (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (struct UIRangeLabel_array *)sub_B775DC(
                                       SkillIconComponent___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.skillTitleRangeLabelList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (struct UILabel_array *)sub_B775DC(
                                  UIRangeLabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v18;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.skillExplanationLabelList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UISprite_o *)sub_B775DC(
                               UILabel___TypeInfo,
                               (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.transformNameSprite = v25;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.transformNameSprite,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  LODWORD(this->fields.baseSize.fields.x) = 34;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawClassSkill__Awake(
        ServantStatusListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  struct SkillIconComponent_array *skillIconList; // x8
  ServantStatusListViewItemDrawClassSkill_o *v3; // x19
  float v4; // s1
  struct SkillIconComponent_array *v5; // x8
  float v6; // s8
  float v7; // s0
  double v8; // d0
  struct UISprite_o *titleSprite; // x9
  int v10; // w20
  float v11; // s1
  float v12; // s0
  float v13; // s1
  float v14; // s2
  struct SkillIconComponent_array *v15; // x8
  int v16; // w9
  float v17; // s8
  __int64 v18; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_24;
  v3 = this;
  if ( (int)skillIconList->max_length >= 2 )
  {
    this = (ServantStatusListViewItemDrawClassSkill_o *)skillIconList->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v4 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v5 = v3->fields.skillIconList;
    if ( !v5 )
      goto LABEL_24;
    if ( v5->max_length <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawClassSkill_o *)v5->m_Items[1];
    if ( !this )
      goto LABEL_24;
    v6 = v4;
    this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0LL);
    if ( !this )
      goto LABEL_24;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v7 = v6 - localPosition.fields.y;
    skillIconList = v3->fields.skillIconList;
    v8 = (float)(v6 - localPosition.fields.y) == INFINITY ? -v7 : v7;
    LODWORD(v3->fields.baseSize.fields.y) = (int)v8;
    if ( !skillIconList )
      goto LABEL_24;
  }
  titleSprite = v3->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawClassSkill_o *)v3->fields.explanationLabel;
  v10 = LODWORD(v3->fields.baseSize.fields.y) * skillIconList->max_length;
  v11 = (float)(titleSprite->fields.mHeight - v10);
  v3->fields.baseSize.fields.z = (float)titleSprite->fields.mWidth;
  v3->fields.titleBasePosition.fields.x = v11;
  v3->fields.titleBasePosition.fields.y = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v15 = v3->fields.skillIconList;
  v16 = v10 >= 0 ? v10 : v10 + 1;
  v17 = (float)(v16 >> 1);
  v3->fields.titleBasePosition.fields.z = v12;
  v3->fields.skillBasePosition.fields.x = v13 - v17;
  v3->fields.skillBasePosition.fields.y = v14;
  if ( !v15 )
LABEL_24:
    sub_B7769C(this, method);
  if ( !v15->max_length )
  {
LABEL_25:
    v18 = sub_B776C8(this);
    sub_B77668(v18, 0LL);
  }
  this = (ServantStatusListViewItemDrawClassSkill_o *)v15->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawClassSkill_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_24;
  v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.skillBasePosition.fields.z = v20.fields.x;
  *((float *)&v3->fields.skillBasePosition + 3) = v20.fields.y - v17;
  *(float *)&v3[1].klass = v20.fields.z;
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
  UILabel_o *skillBaseList; // x21
  SkillIconComponent_o *transformNameLabel; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x5
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x9
  __int64 v12; // x11
  unsigned __int64 max_length; // x10
  signed __int64 v14; // x9
  int v15; // w22
  int v16; // w13
  _BOOL4 IsTransformServant_k__BackingField; // w21
  __int64 v18; // x8
  float x; // w25
  int v20; // w24
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v22; // x27
  unsigned __int64 v23; // x28
  struct UISprite_o *transformNameSprite; // x8
  ServantStatusListViewItemDrawClassSkill_c *v25; // x0
  UILabel_o *v26; // x20
  System_String_o *v27; // x21
  struct UISprite_o *v28; // x8
  __int64 v29; // x8
  int v30; // w10
  float y; // w8
  int v32; // w9
  float v33; // s8
  float z; // s9
  float v35; // s10
  UnityEngine_Object_o *baseSprite; // x20
  float v37; // s8
  double v38; // d0
  double v39; // d0
  int v40; // w20
  float v41; // s8
  float v42; // s10
  float v43; // s9
  int v44; // w21
  struct SkillIconComponent_array *v45; // x8
  float v46; // s8
  float v47; // s9
  __int64 v48; // x20
  float v49; // s10
  int v50; // w9
  struct SkillIconComponent_array *v51; // x8
  struct UIRangeLabel_array *v52; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  struct UISprite_o *v54; // x8
  __int64 v55; // x8
  int v56; // w21
  float v57; // w9
  __int64 v58; // x0
  System_String_array *explanationList; // [xsp+8h] [xbp-88h] BYREF
  System_String_array *titleList; // [xsp+10h] [xbp-80h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4392971 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantStatusListViewItemDrawClassSkill_TypeInfo);
    sub_B775C4(&StringLiteral_12216/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    byte_4392971 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  LODWORD(this->fields.baseButton) = mode;
  if ( !item || !mode )
    return;
  skillBaseList = (UILabel_o *)this->fields.skillBaseList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  transformNameLabel = (SkillIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12216/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0LL);
  if ( !skillBaseList )
    goto LABEL_96;
  UILabel__set_text(skillBaseList, (System_String_o *)transformNameLabel, 0LL);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &explanationList, 1, v10);
  if ( !idList )
    return;
  skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
  if ( !skillTitleRangeLabelList )
    goto LABEL_96;
  v12 = *(_QWORD *)&skillTitleRangeLabelList->max_length;
  if ( v12 << 32 < 1 )
  {
    v15 = 1;
  }
  else
  {
    max_length = idList->max_length;
    v14 = 0LL;
    v15 = 1;
    do
    {
      if ( v14 >= (int)max_length )
      {
        ++v14;
      }
      else
      {
        if ( v14 >= max_length )
        {
LABEL_98:
          v58 = sub_B776C8(transformNameLabel);
          sub_B77668(v58, 0LL);
        }
        v16 = idList->m_Items[++v14];
        if ( v16 >= 1 )
          v15 = v14;
      }
    }
    while ( v14 < (int)v12 );
  }
  transformNameLabel = (SkillIconComponent_o *)this->fields.transformNameLabel;
  if ( !transformNameLabel )
    goto LABEL_96;
  IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
  transformNameLabel = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)transformNameLabel,
                                                 0LL);
  if ( !transformNameLabel )
    goto LABEL_96;
  if ( IsTransformServant_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameLabel, 1, 0LL);
    transformNameLabel = *(SkillIconComponent_o **)&this->fields.transformNameAddHeight;
    if ( !transformNameLabel )
      goto LABEL_96;
    v18 = 544LL;
    if ( item->fields._IsTransformed_k__BackingField )
      v18 = 552LL;
    UILabel__set_text((UILabel_o *)transformNameLabel, *(System_String_o **)((char *)&item->klass + v18), 0LL);
    x = this->fields.baseSize.fields.x;
    v20 = -LODWORD(x);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameLabel, 0, 0LL);
    v20 = 0;
    x = 0.0;
  }
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_96;
  v22 = 4LL;
  while ( 1 )
  {
    v23 = v22 - 4;
    if ( v22 - 4 >= (int)skillIconList->max_length )
      break;
    if ( (__int64)v23 < v15 )
    {
      transformNameSprite = this->fields.transformNameSprite;
      if ( !transformNameSprite )
        goto LABEL_96;
      if ( v23 >= LODWORD(transformNameSprite->fields.leftAnchor) )
        goto LABEL_98;
      if ( !explanationList )
        goto LABEL_96;
      if ( v23 >= explanationList->max_length )
        goto LABEL_98;
      v25 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      v26 = (UILabel_o *)*((_QWORD *)&transformNameSprite->klass + v22);
      v27 = (System_String_o *)*((_QWORD *)&explanationList->obj.klass + v22);
      if ( (BYTE3(ServantStatusListViewItemDrawClassSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        v25 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      transformNameLabel = (SkillIconComponent_o *)WrapControlText__textAdjust(
                                                     v26,
                                                     v27,
                                                     v25->static_fields->DETAIL_FONT_SIZE,
                                                     v25->static_fields->DETAIL_FONT_SIZE,
                                                     v25->static_fields->MAX_HEIGHT,
                                                     0LL);
      v28 = this->fields.transformNameSprite;
      if ( !v28 )
        goto LABEL_96;
      if ( v23 >= LODWORD(v28->fields.leftAnchor) )
        goto LABEL_98;
      v29 = *((_QWORD *)&v28->klass + v22);
      if ( !v29 )
        goto LABEL_96;
      v30 = *(_DWORD *)(v29 + 164);
      y = this->fields.baseSize.fields.y;
      v32 = v30 + ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v32 >= SLODWORD(y) )
        LODWORD(x) += v32;
      else
        LODWORD(x) += LODWORD(y);
    }
    skillIconList = this->fields.skillIconList;
    ++v22;
    if ( !skillIconList )
      goto LABEL_96;
  }
  z = this->fields.baseSize.fields.z;
  v33 = this->fields.titleBasePosition.fields.x;
  v35 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v37 = v33 + (float)SLODWORD(x);
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    transformNameLabel = (SkillIconComponent_o *)this->fields.baseSprite;
    if ( !transformNameLabel )
      goto LABEL_96;
    v62.fields.x = z;
    v62.fields.y = v37;
    v62.fields.z = v35;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)transformNameLabel, v62, 0LL);
  }
  transformNameLabel = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !transformNameLabel )
    goto LABEL_96;
  v38 = z;
  if ( z == INFINITY )
    v38 = -z;
  UIWidget__set_width((UIWidget_o *)transformNameLabel, (int)v38, 0LL);
  transformNameLabel = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !transformNameLabel )
    goto LABEL_96;
  v39 = v37;
  if ( v37 == INFINITY )
    v39 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)transformNameLabel, (int)v39, 0LL);
  transformNameLabel = (SkillIconComponent_o *)this->fields.explanationLabel;
  v40 = x >= 0.0 ? LODWORD(x) : LODWORD(x) + 1;
  if ( !transformNameLabel )
    goto LABEL_96;
  v41 = this->fields.titleBasePosition.fields.z;
  v42 = this->fields.skillBasePosition.fields.x;
  v43 = this->fields.skillBasePosition.fields.y;
  transformNameLabel = (SkillIconComponent_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)transformNameLabel,
                                                 0LL);
  if ( !transformNameLabel
    || (v44 = v40 >> 1,
        v63.fields.y = v42 + (float)(v40 >> 1),
        v63.fields.x = v41,
        v63.fields.z = v43,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transformNameLabel, v63, 0LL),
        (v45 = this->fields.skillIconList) == 0LL) )
  {
LABEL_96:
    sub_B7769C(transformNameLabel, v9);
  }
  v46 = this->fields.skillBasePosition.fields.z;
  v47 = *(float *)&this[1].klass;
  v48 = 0LL;
  v49 = *((float *)&this->fields.skillBasePosition + 3) + (float)(v44 + v20);
  while ( 1 )
  {
    v50 = v45->max_length;
    if ( (int)v48 >= v50 )
      break;
    if ( (unsigned int)v48 >= v50 )
      goto LABEL_98;
    transformNameLabel = v45->m_Items[v48];
    if ( !transformNameLabel )
      goto LABEL_96;
    if ( (int)v48 >= v15 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameLabel, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameLabel, 1, 0LL);
      v51 = this->fields.skillIconList;
      if ( !v51 )
        goto LABEL_96;
      if ( (unsigned int)v48 >= v51->max_length )
        goto LABEL_98;
      transformNameLabel = v51->m_Items[v48];
      if ( !transformNameLabel )
        goto LABEL_96;
      transformNameLabel = (SkillIconComponent_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)transformNameLabel,
                                                     0LL);
      if ( !transformNameLabel )
        goto LABEL_96;
      v64.fields.x = v46;
      v64.fields.y = v49;
      v64.fields.z = v47;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transformNameLabel, v64, 0LL);
      v52 = this->fields.skillTitleRangeLabelList;
      if ( !v52 )
        goto LABEL_96;
      if ( (unsigned int)v48 >= v52->max_length )
        goto LABEL_98;
      if ( !idList )
        goto LABEL_96;
      if ( (unsigned int)v48 >= idList->max_length )
        goto LABEL_98;
      transformNameLabel = (SkillIconComponent_o *)v52->m_Items[v48];
      if ( !transformNameLabel )
        goto LABEL_96;
      SkillIconComponent__Set(transformNameLabel, idList->m_Items[v48 + 1], 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_96;
      if ( (unsigned int)v48 >= skillExplanationLabelList->max_length )
        goto LABEL_98;
      if ( !titleList )
        goto LABEL_96;
      if ( (unsigned int)v48 >= titleList->max_length )
        goto LABEL_98;
      transformNameLabel = (SkillIconComponent_o *)skillExplanationLabelList->m_Items[v48];
      if ( !transformNameLabel )
        goto LABEL_96;
      UIRangeLabel__Set((UIRangeLabel_o *)transformNameLabel, titleList->m_Items[v48], 0LL, 1, 0, 0LL);
    }
    v54 = this->fields.transformNameSprite;
    if ( !v54 )
      goto LABEL_96;
    if ( (unsigned int)v48 >= LODWORD(v54->fields.leftAnchor) )
      goto LABEL_98;
    v55 = *((_QWORD *)&v54->fields.rightAnchor + v48);
    if ( v55 )
    {
      transformNameLabel = (SkillIconComponent_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      v56 = *(_DWORD *)(v55 + 164);
      if ( (BYTE3(ServantStatusListViewItemDrawClassSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        transformNameLabel = (SkillIconComponent_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      ++v48;
      v45 = this->fields.skillIconList;
      LODWORD(v57) = LODWORD(transformNameLabel[2].fields.baseSprite->monitor) + v56;
      if ( SLODWORD(v57) < SLODWORD(this->fields.baseSize.fields.y) )
        v57 = this->fields.baseSize.fields.y;
      v49 = v49 - (float)SLODWORD(v57);
      if ( v45 )
        continue;
    }
    goto LABEL_96;
  }
}