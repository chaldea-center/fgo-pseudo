void __fastcall ServantStatusListViewItemDrawClassSkill___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED35F & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItemDrawClassSkill_TypeInfo, v1, v2, v3);
    byte_42ED35F = 1;
  }
  ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->MAX_HEIGHT = 500;
  ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawClassSkill___ctor(
        ServantStatusListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BalanceConfig_c *v17; // x0
  struct SkillIconComponent_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UIRangeLabel_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct UILabel_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_42ED35E & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SkillIconComponent___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UILabel___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UIRangeLabel___TypeInfo, v14, v15, v16);
    byte_42ED35E = 1;
  }
  v17 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  v18 = (struct SkillIconComponent_array *)sub_B5D5DC(
                                             UnityEngine_GameObject___TypeInfo,
                                             (unsigned int)v17->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v18;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UIRangeLabel_array *)sub_B5D5DC(
                                       SkillIconComponent___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillTitleRangeLabelList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (struct UILabel_array *)sub_B5D5DC(
                                  UIRangeLabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillExplanationLabelList,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Int32_array **)sub_B5D5DC(
                                 UILabel___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  *(_QWORD *)&this->fields.skillPitch = v39;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.skillPitch, v39, v40, v41, v42, v43, v44, v45);
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
    sub_B5D69C(this, method);
  if ( !v15->max_length )
  {
LABEL_25:
    v18 = sub_B5D6C8(this);
    sub_B5D668(v18, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  UILabel_o *skillBaseList; // x21
  SkillIconComponent_o *titleSprite; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x4
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x9
  __int64 v21; // x11
  unsigned __int64 max_length; // x10
  signed __int64 v23; // x9
  int v24; // w22
  int v25; // w13
  struct SkillIconComponent_array *skillIconList; // x8
  int v27; // w24
  __int64 v28; // x26
  unsigned __int64 v29; // x27
  __int64 v30; // x8
  ServantStatusListViewItemDrawClassSkill_c *v31; // x0
  UILabel_o *v32; // x20
  System_String_o *v33; // x21
  __int64 v34; // x8
  __int64 v35; // x8
  int v36; // w10
  float y; // w8
  int v38; // w9
  float x; // s8
  float z; // s9
  float v41; // s10
  UnityEngine_Object_o *baseSprite; // x20
  float v43; // s8
  double v44; // d0
  double v45; // d0
  int v46; // w20
  float v47; // s8
  float v48; // s11
  float v49; // s9
  float v50; // s10
  struct SkillIconComponent_array *v51; // x8
  float v52; // s8
  float v53; // s9
  __int64 v54; // x20
  float v55; // s10
  int v56; // w9
  struct SkillIconComponent_array *v57; // x8
  struct UIRangeLabel_array *v58; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  __int64 v60; // x8
  __int64 v61; // x8
  int v62; // w21
  float v63; // w9
  __int64 v64; // x0
  System_String_array *v65; // [xsp+0h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ED35D & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&ServantStatusListViewItemDrawClassSkill_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_12131/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v13, v14, v15);
    byte_42ED35D = 1;
  }
  idList = 0LL;
  v65 = 0LL;
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
  titleSprite = (SkillIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12131/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0LL);
  if ( !skillBaseList )
    goto LABEL_88;
  UILabel__set_text(skillBaseList, (System_String_o *)titleSprite, 0LL);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &v65, v19);
  if ( !idList )
    return;
  skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
  if ( !skillTitleRangeLabelList )
    goto LABEL_88;
  v21 = *(_QWORD *)&skillTitleRangeLabelList->max_length;
  if ( v21 << 32 < 1 )
  {
    v24 = 1;
  }
  else
  {
    max_length = idList->max_length;
    v23 = 0LL;
    v24 = 1;
    do
    {
      if ( v23 >= (int)max_length )
      {
        ++v23;
      }
      else
      {
        if ( v23 >= max_length )
        {
LABEL_90:
          v64 = sub_B5D6C8(titleSprite);
          sub_B5D668(v64, 0LL);
        }
        v25 = idList->m_Items[++v23];
        if ( v25 >= 1 )
          v24 = v23;
      }
    }
    while ( v23 < (int)v21 );
  }
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_88;
  v27 = 0;
  v28 = 4LL;
  while ( 1 )
  {
    v29 = v28 - 4;
    if ( v28 - 4 >= (int)skillIconList->max_length )
      break;
    if ( (__int64)v29 < v24 )
    {
      v30 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v30 )
        goto LABEL_88;
      if ( v29 >= *(unsigned int *)(v30 + 24) )
        goto LABEL_90;
      if ( !v65 )
        goto LABEL_88;
      if ( v29 >= v65->max_length )
        goto LABEL_90;
      v31 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      v32 = *(UILabel_o **)(v30 + 8 * v28);
      v33 = (System_String_o *)*((_QWORD *)&v65->obj.klass + v28);
      if ( (BYTE3(ServantStatusListViewItemDrawClassSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        v31 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      titleSprite = (SkillIconComponent_o *)WrapControlText__textAdjust(
                                              v32,
                                              v33,
                                              v31->static_fields->DETAIL_FONT_SIZE,
                                              v31->static_fields->DETAIL_FONT_SIZE,
                                              v31->static_fields->MAX_HEIGHT,
                                              0LL);
      v34 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v34 )
        goto LABEL_88;
      if ( v29 >= *(unsigned int *)(v34 + 24) )
        goto LABEL_90;
      v35 = *(_QWORD *)(v34 + 8 * v28);
      if ( !v35 )
        goto LABEL_88;
      v36 = *(_DWORD *)(v35 + 164);
      y = this->fields.baseSize.fields.y;
      v38 = v36 + ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v38 >= SLODWORD(y) )
        v27 += v38;
      else
        v27 += LODWORD(y);
    }
    skillIconList = this->fields.skillIconList;
    ++v28;
    if ( !skillIconList )
      goto LABEL_88;
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  v41 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v43 = x + (float)v27;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    titleSprite = (SkillIconComponent_o *)this->fields.baseSprite;
    if ( !titleSprite )
      goto LABEL_88;
    v68.fields.x = z;
    v68.fields.y = v43;
    v68.fields.z = v41;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)titleSprite, v68, 0LL);
  }
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_88;
  v44 = z;
  if ( z == INFINITY )
    v44 = -z;
  UIWidget__set_width((UIWidget_o *)titleSprite, (int)v44, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_88;
  v45 = v43;
  if ( v43 == INFINITY )
    v45 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)titleSprite, (int)v45, 0LL);
  titleSprite = (SkillIconComponent_o *)this->fields.explanationLabel;
  v46 = v27 >= 0 ? v27 : v27 + 1;
  if ( !titleSprite )
    goto LABEL_88;
  v47 = this->fields.titleBasePosition.fields.z;
  v48 = this->fields.skillBasePosition.fields.x;
  v49 = this->fields.skillBasePosition.fields.y;
  titleSprite = (SkillIconComponent_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)titleSprite,
                                          0LL);
  if ( !titleSprite
    || (v50 = (float)(v46 >> 1),
        v69.fields.y = v48 + v50,
        v69.fields.x = v47,
        v69.fields.z = v49,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v69, 0LL),
        (v51 = this->fields.skillIconList) == 0LL) )
  {
LABEL_88:
    sub_B5D69C(titleSprite, v18);
  }
  v52 = this->fields.skillBasePosition.fields.z;
  v53 = *((float *)&this[1].klass + 1);
  v54 = 0LL;
  v55 = *(float *)&this[1].klass + v50;
  while ( 1 )
  {
    v56 = v51->max_length;
    if ( (int)v54 >= v56 )
      break;
    if ( (unsigned int)v54 >= v56 )
      goto LABEL_90;
    titleSprite = v51->m_Items[v54];
    if ( !titleSprite )
      goto LABEL_88;
    if ( (int)v54 >= v24 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleSprite, 1, 0LL);
      v57 = this->fields.skillIconList;
      if ( !v57 )
        goto LABEL_88;
      if ( (unsigned int)v54 >= v57->max_length )
        goto LABEL_90;
      titleSprite = v57->m_Items[v54];
      if ( !titleSprite )
        goto LABEL_88;
      titleSprite = (SkillIconComponent_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)titleSprite,
                                              0LL);
      if ( !titleSprite )
        goto LABEL_88;
      v70.fields.x = v52;
      v70.fields.y = v55;
      v70.fields.z = v53;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)titleSprite, v70, 0LL);
      v58 = this->fields.skillTitleRangeLabelList;
      if ( !v58 )
        goto LABEL_88;
      if ( (unsigned int)v54 >= v58->max_length )
        goto LABEL_90;
      if ( !idList )
        goto LABEL_88;
      if ( (unsigned int)v54 >= idList->max_length )
        goto LABEL_90;
      titleSprite = (SkillIconComponent_o *)v58->m_Items[v54];
      if ( !titleSprite )
        goto LABEL_88;
      SkillIconComponent__Set(titleSprite, idList->m_Items[v54 + 1], 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_88;
      if ( (unsigned int)v54 >= skillExplanationLabelList->max_length )
        goto LABEL_90;
      if ( !titleList )
        goto LABEL_88;
      if ( (unsigned int)v54 >= titleList->max_length )
        goto LABEL_90;
      titleSprite = (SkillIconComponent_o *)skillExplanationLabelList->m_Items[v54];
      if ( !titleSprite )
        goto LABEL_88;
      UIRangeLabel__Set((UIRangeLabel_o *)titleSprite, titleList->m_Items[v54], 0LL, 1, 0, 0LL);
    }
    v60 = *(_QWORD *)&this->fields.skillPitch;
    if ( !v60 )
      goto LABEL_88;
    if ( (unsigned int)v54 >= *(_DWORD *)(v60 + 24) )
      goto LABEL_90;
    v61 = *(_QWORD *)(v60 + 8 * v54 + 32);
    if ( v61 )
    {
      titleSprite = (SkillIconComponent_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      v62 = *(_DWORD *)(v61 + 164);
      if ( (BYTE3(ServantStatusListViewItemDrawClassSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        titleSprite = (SkillIconComponent_o *)ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      ++v54;
      v51 = this->fields.skillIconList;
      LODWORD(v63) = LODWORD(titleSprite[2].fields.baseSprite->monitor) + v62;
      if ( SLODWORD(v63) < SLODWORD(this->fields.baseSize.fields.y) )
        v63 = this->fields.baseSize.fields.y;
      v55 = v55 - (float)SLODWORD(v63);
      if ( v51 )
        continue;
    }
    goto LABEL_88;
  }
}