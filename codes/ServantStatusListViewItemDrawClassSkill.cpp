void __fastcall ServantStatusListViewItemDrawClassSkill___cctor(const MethodInfo *method)
{
  if ( (byte_42B58A3 & 1) == 0 )
  {
    sub_B52984(&ServantStatusListViewItemDrawClassSkill_TypeInfo);
    byte_42B58A3 = 1;
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
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42B58A2 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&UnityEngine_GameObject___TypeInfo);
    sub_B52984(&SkillIconComponent___TypeInfo);
    sub_B52984(&UILabel___TypeInfo);
    sub_B52984(&UIRangeLabel___TypeInfo);
    byte_42B58A2 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct SkillIconComponent_array *)sub_B5299C(
                                            UnityEngine_GameObject___TypeInfo,
                                            (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (struct UIRangeLabel_array *)sub_B5299C(
                                       SkillIconComponent___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v11;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.skillTitleRangeLabelList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (struct UILabel_array *)sub_B5299C(
                                  UIRangeLabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v18;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.skillExplanationLabelList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Int32_array **)sub_B5299C(
                                 UILabel___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  *(_QWORD *)&this->fields.skillPitch = v25;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.skillPitch, v25, v26, v27, v28, v29, v30, v31);
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
    sub_B52A5C(this, method);
  if ( !v15->max_length )
  {
LABEL_25:
    v18 = sub_B52A88(this);
    sub_B52A28(v18, 0LL);
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
  *(float *)&v3[1].klass = v20.fields.y - v17;
  HIDWORD(v3[1].klass) = LODWORD(v20.fields.z);
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
  SkillIconComponent_o *titleSprite; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x9
  __int64 v12; // x11
  unsigned __int64 max_length; // x10
  signed __int64 v14; // x9
  int v15; // w22
  int v16; // w13
  struct SkillIconComponent_array *skillIconList; // x8
  int v18; // w24
  __int64 v19; // x26
  unsigned __int64 v20; // x27
  __int64 v21; // x8
  ServantStatusListViewItemDrawClassSkill_c *v22; // x0
  UILabel_o *v23; // x20
  System_String_o *v24; // x21
  __int64 v25; // x8
  __int64 v26; // x8
  int v27; // w10
  float y; // w8
  int v29; // w9
  float x; // s8
  float z; // s9
  float v32; // s10
  UnityEngine_Object_o *baseSprite; // x20
  float v34; // s8
  double v35; // d0
  double v36; // d0
  int v37; // w20
  float v38; // s8
  float v39; // s11
  float v40; // s9
  float v41; // s10
  struct SkillIconComponent_array *v42; // x8
  float v43; // s8
  float v44; // s9
  __int64 v45; // x20
  float v46; // s10
  int v47; // w9
  struct SkillIconComponent_array *v48; // x8
  struct UIRangeLabel_array *v49; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  __int64 v51; // x8
  __int64 v52; // x8
  int v53; // w21
  float v54; // w9
  __int64 v55; // x0
  System_String_array *v56; // [xsp+0h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B58A1 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantStatusListViewItemDrawClassSkill_TypeInfo);
    sub_B52984(&StringLiteral_12074/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    byte_42B58A1 = 1;
  }
  idList = 0LL;
  v56 = 0LL;
  titleList = 0LL;
  LODWORD(this->fields.baseButton) = mode;
  if ( !item || !mode )
    return;
  skillBaseList = (UILabel_o *)this->fields.skillBaseList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  titleSprite = (SkillIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12074/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0LL);
  if ( !skillBaseList )
    goto LABEL_88;
  UILabel__set_text(skillBaseList, (System_String_o *)titleSprite, 0LL);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &v56, v10);
  if ( !idList )
    return;
  skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
  if ( !skillTitleRangeLabelList )
    goto LABEL_88;
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
LABEL_90:
          v55 = sub_B52A88(titleSprite);
          sub_B52A28(v55, 0LL);
        }
        v16 = idList->m_Items[++v14];
        if ( v16 >= 1 )
          v15 = v14;
      }
    }
    while ( v14 < (int)v12 );
  }
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_88;
  v18 = 0;
  v19 = 4LL;
  while ( 1 )
  {
    v20 = v19 - 4;
    if ( v19 - 4 >= (int)skillIconList->max_length )
      break;
    if ( (__int64)v20 < v15 )
    {
      v21 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v21 )
        goto LABEL_88;
      if ( v20 >= *(unsigned int *)(v21 + 24) )
        goto LABEL_90;
      if ( !v56 )
        goto LABEL_88;
      if ( v20 >= v56->max_length )
        goto LABEL_90;
      v22 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      v23 = *(UILabel_o **)(v21 + 8 * v19);
      v24 = (System_String_o *)*((_QWORD *)&v56->obj.klass + v19);
      if ( (BYTE3(ServantStatusListViewItemDrawClassSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        v22 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      titleSprite = (SkillIconComponent_o *)WrapControlText__textAdjust(
                                              v23,
                                              v24,
                                              v22->static_fields->DETAIL_FONT_SIZE,
                                              v22->static_fields->DETAIL_FONT_SIZE,
                                              v22->static_fields->MAX_HEIGHT,
                                              0LL);
      v25 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v25 )
        goto LABEL_88;
      if ( v20 >= *(unsigned int *)(v25 + 24) )
        goto LABEL_90;
      v26 = *(_QWORD *)(v25 + 8 * v19);
      if ( !v26 )
        goto LABEL_88;
      v27 = *(_DWORD *)(v26 + 164);
      y = this->fields.baseSize.fields.y;
      v29 = v27 + ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v29 >= SLODWORD(y) )
        v18 += v29;
      else
        v18 += LODWORD(y);
    }
    skillIconList = this->fields.skillIconList;
    ++v19;
    if ( !skillIconList )
      goto LABEL_88;
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  v32 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v34 = x + (float)v18;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    titleSprite = (SkillIconComponent_o *)this->fields.baseSprite;
    if ( !titleSprite )
      goto LABEL_88;
    v59.fields.x = z;
    v59.fields.y = v34;
    v59.fields.z = v32;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)titleSprite, v59, 0LL);
  }
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_88;
  v35 = z;
  if ( z == INFINITY )
    v35 = -z;
  UIWidget__set_width((UIWidget_o *)titleSprite, (int)v35, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_88;
  v36 = v34;
  if ( v34 == INFINITY )
    v36 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)titleSprite, (int)v36, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.explanationLabel;
  v37 = v18 >= 0 ? v18 : v18 + 1;
  if ( !titleSprite )
    goto LABEL_88;
  v38 = this->fields.titleBasePosition.fields.z;
  v39 = this->fields.skillBasePosition.fields.x;
  v40 = this->fields.skillBasePosition.fields.y;
  titleSprite = (SkillIconComponent_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)titleSprite,
                                          0LL);
  if ( !titleSprite
    || (v41 = (float)(v37 >> 1),
        v60.fields.y = v39 + v41,
        v60.fields.x = v38,
        v60.fields.z = v40,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v60, 0LL),
        (v42 = this->fields.skillIconList) == 0LL) )
  {
LABEL_88:
    sub_B52A5C(titleSprite, v9);
  }
  v43 = this->fields.skillBasePosition.fields.z;
  v44 = *((float *)&this[1].klass + 1);
  v45 = 0LL;
  v46 = *(float *)&this[1].klass + v41;
  while ( 1 )
  {
    v47 = v42->max_length;
    if ( (int)v45 >= v47 )
      break;
    if ( (unsigned int)v45 >= v47 )
      goto LABEL_90;
    titleSprite = v42->m_Items[v45];
    if ( !titleSprite )
      goto LABEL_88;
    if ( (int)v45 >= v15 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 1, 0LL);
      v48 = this->fields.skillIconList;
      if ( !v48 )
        goto LABEL_88;
      if ( (unsigned int)v45 >= v48->max_length )
        goto LABEL_90;
      titleSprite = v48->m_Items[v45];
      if ( !titleSprite )
        goto LABEL_88;
      titleSprite = (SkillIconComponent_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)titleSprite,
                                              0LL);
      if ( !titleSprite )
        goto LABEL_88;
      v61.fields.x = v43;
      v61.fields.y = v46;
      v61.fields.z = v44;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v61, 0LL);
      v49 = this->fields.skillTitleRangeLabelList;
      if ( !v49 )
        goto LABEL_88;
      if ( (unsigned int)v45 >= v49->max_length )
        goto LABEL_90;
      if ( !idList )
        goto LABEL_88;
      if ( (unsigned int)v45 >= idList->max_length )
        goto LABEL_90;
      titleSprite = (SkillIconComponent_o *)v49->m_Items[v45];
      if ( !titleSprite )
        goto LABEL_88;
      SkillIconComponent__Set(titleSprite, idList->m_Items[v45 + 1], 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_88;
      if ( (unsigned int)v45 >= skillExplanationLabelList->max_length )
        goto LABEL_90;
      if ( !titleList )
        goto LABEL_88;
      if ( (unsigned int)v45 >= titleList->max_length )
        goto LABEL_90;
      titleSprite = (SkillIconComponent_o *)skillExplanationLabelList->m_Items[v45];
      if ( !titleSprite )
        goto LABEL_88;
      UIRangeLabel__Set((UIRangeLabel_o *)titleSprite, titleList->m_Items[v45], 0LL, 1, 0, 0LL);
    }
    v51 = *(_QWORD *)&this->fields.skillPitch;
    if ( !v51 )
      goto LABEL_88;
    if ( (unsigned int)v45 >= *(_DWORD *)(v51 + 24) )
      goto LABEL_90;
    v52 = *(_QWORD *)(v51 + 8 * v45 + 32);
    if ( v52 )
    {
      titleSprite = (SkillIconComponent_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      v53 = *(_DWORD *)(v52 + 164);
      if ( (BYTE3(ServantStatusListViewItemDrawClassSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        titleSprite = (SkillIconComponent_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      ++v45;
      v42 = this->fields.skillIconList;
      LODWORD(v54) = LODWORD(titleSprite[2].fields.baseSprite->monitor) + v53;
      if ( SLODWORD(v54) < SLODWORD(this->fields.baseSize.fields.y) )
        v54 = this->fields.baseSize.fields.y;
      v46 = v46 - (float)SLODWORD(v54);
      if ( v42 )
        continue;
    }
    goto LABEL_88;
  }
}