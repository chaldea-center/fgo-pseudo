void __fastcall ServantStatusListViewItemDrawCommandCodeSkill___ctor(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BalanceConfig_c *v8; // x0
  struct SkillIconComponent_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x2
  struct UIRangeLabel_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x2
  struct UILabel_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x2
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_40FDE95 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v4);
    sub_B16FFC(&SkillIconComponent___TypeInfo, v5);
    sub_B16FFC(&UILabel___TypeInfo, v6);
    sub_B16FFC(&UIRangeLabel___TypeInfo, v7);
    byte_40FDE95 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (struct SkillIconComponent_array *)sub_B17014(
                                            UnityEngine_GameObject___TypeInfo,
                                            (unsigned int)v8->static_fields->SvtSkillListMax,
                                            v2);
  this->fields.skillIconList = v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v17 = (struct UIRangeLabel_array *)sub_B17014(
                                       SkillIconComponent___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                       v16);
  this->fields.skillTitleRangeLabelList = v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillTitleRangeLabelList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v25 = (struct UILabel_array *)sub_B17014(
                                  UIRangeLabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                  v24);
  this->fields.skillExplanationLabelList = v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillExplanationLabelList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v33 = (System_Int32_array **)sub_B17014(
                                 UILabel___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                 v32);
  *(_QWORD *)&this->fields.skillPitch = v33;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.skillPitch, v33, v34, v35, v36, v37, v38, v39);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawCommandCodeSkill__Awake(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        const MethodInfo *method)
{
  struct SkillIconComponent_array *skillIconList; // x8
  UnityEngine_GameObject_o *v4; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  float v9; // s1
  struct SkillIconComponent_array *v10; // x8
  UnityEngine_GameObject_o *v11; // x0
  float v12; // s8
  UnityEngine_Transform_o *v13; // x0
  float v14; // s0
  double v15; // d0
  struct UISprite_o *titleSprite; // x9
  UnityEngine_Component_o *explanationLabel; // x0
  int v18; // w20
  float v19; // s1
  UnityEngine_Transform_o *v20; // x0
  float v21; // s0
  float v22; // s1
  float v23; // s2
  struct SkillIconComponent_array *v24; // x8
  int v25; // w9
  float v26; // s8
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_Transform_o *v28; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_24;
  if ( (int)skillIconList->max_length >= 2 )
  {
    v4 = (UnityEngine_GameObject_o *)skillIconList->m_Items[0];
    if ( !v4 )
      goto LABEL_24;
    transform = UnityEngine_GameObject__get_transform(v4, 0LL);
    if ( !transform )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
    v10 = this->fields.skillIconList;
    if ( !v10 )
      goto LABEL_24;
    if ( v10->max_length <= 1 )
      goto LABEL_25;
    v11 = (UnityEngine_GameObject_o *)v10->m_Items[1];
    if ( !v11 )
      goto LABEL_24;
    v12 = v9;
    v13 = UnityEngine_GameObject__get_transform(v11, 0LL);
    if ( !v13 )
      goto LABEL_24;
    localPosition = UnityEngine_Transform__get_localPosition(v13, 0LL);
    v14 = v12 - localPosition.fields.y;
    skillIconList = this->fields.skillIconList;
    v15 = (float)(v12 - localPosition.fields.y) == INFINITY ? -v14 : v14;
    LODWORD(this->fields.baseSize.fields.y) = (int)v15;
    if ( !skillIconList )
      goto LABEL_24;
  }
  titleSprite = this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_24;
  explanationLabel = (UnityEngine_Component_o *)this->fields.explanationLabel;
  v18 = LODWORD(this->fields.baseSize.fields.y) * skillIconList->max_length;
  v19 = (float)(titleSprite->fields.mHeight - v18);
  this->fields.baseSize.fields.z = (float)titleSprite->fields.mWidth;
  this->fields.titleBasePosition.fields.x = v19;
  this->fields.titleBasePosition.fields.y = 0.0;
  if ( !explanationLabel )
    goto LABEL_24;
  v20 = UnityEngine_Component__get_transform(explanationLabel, 0LL);
  if ( !v20 )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_localPosition(v20, 0LL);
  v24 = this->fields.skillIconList;
  v25 = v18 >= 0 ? v18 : v18 + 1;
  v26 = (float)(v25 >> 1);
  this->fields.titleBasePosition.fields.z = v21;
  this->fields.skillBasePosition.fields.x = v22 - v26;
  this->fields.skillBasePosition.fields.y = v23;
  if ( !v24 )
LABEL_24:
    sub_B170D4();
  if ( !v24->max_length )
  {
LABEL_25:
    sub_B17100(v6, v7, v8);
    sub_B170A0();
  }
  v27 = (UnityEngine_GameObject_o *)v24->m_Items[0];
  if ( !v27 )
    goto LABEL_24;
  v28 = UnityEngine_GameObject__get_transform(v27, 0LL);
  if ( !v28 )
    goto LABEL_24;
  v30 = UnityEngine_Transform__get_localPosition(v28, 0LL);
  this->fields.skillBasePosition.fields.z = v30.fields.x;
  *(float *)&this[1].klass = v30.fields.y - v26;
  HIDWORD(this[1].klass) = LODWORD(v30.fields.z);
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
  UILabel_o *skillBaseList; // x21
  System_String_o *v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x9
  __int64 v15; // x11
  unsigned __int64 max_length; // x10
  signed __int64 v17; // x9
  int v18; // w21
  int v19; // w13
  float x; // s8
  float z; // s9
  float y; // s10
  UnityEngine_Object_o *baseSprite; // x20
  int v24; // w22
  float v25; // s8
  UnityEngine_BoxCollider_o *v26; // x0
  UIWidget_o *titleSprite; // x0
  double v28; // d0
  UIWidget_o *v29; // x0
  double v30; // d0
  UnityEngine_Component_o *explanationLabel; // x0
  int v32; // w20
  float v33; // s8
  float v34; // s11
  float v35; // s9
  UnityEngine_Transform_o *transform; // x0
  float v37; // s10
  struct SkillIconComponent_array *skillIconList; // x8
  float v39; // s8
  float v40; // s9
  __int64 v41; // x20
  float v42; // s10
  int v43; // w9
  UnityEngine_GameObject_o *v44; // x0
  struct SkillIconComponent_array *v45; // x8
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Transform_o *v47; // x0
  struct UIRangeLabel_array *v48; // x8
  SkillIconComponent_o *v49; // x0
  struct UILabel_array *skillExplanationLabelList; // x8
  UIRangeLabel_o *v51; // x0
  __int64 v52; // x8
  System_String_array *explanationList; // [xsp+8h] [xbp-58h] BYREF
  System_String_array *titleList; // [xsp+10h] [xbp-50h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDE94 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_11931/*"SERVANT_STATUS_EXPLANATION_SKILL_COMMAND_CODE"*/, v8);
    byte_40FDE94 = 1;
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
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11931/*"SERVANT_STATUS_EXPLANATION_SKILL_COMMAND_CODE"*/, 0LL);
  if ( !skillBaseList )
    goto LABEL_65;
  UILabel__set_text(skillBaseList, v10, 0LL);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &explanationList, 0LL);
  if ( !idList )
    return;
  skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
  if ( !skillTitleRangeLabelList )
    goto LABEL_65;
  v15 = *(_QWORD *)&skillTitleRangeLabelList->max_length;
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
        {
LABEL_67:
          sub_B17100(v11, v12, v13);
          sub_B170A0();
        }
        v19 = idList->m_Items[++v17];
        if ( v19 >= 1 )
          v18 = v17;
      }
    }
    while ( v17 < (int)v15 );
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  y = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  v24 = LODWORD(this->fields.baseSize.fields.y) * v18;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v25 = x + (float)v24;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v26 = (UnityEngine_BoxCollider_o *)this->fields.baseSprite;
    if ( !v26 )
      goto LABEL_65;
    v56.fields.x = z;
    v56.fields.y = v25;
    v56.fields.z = y;
    UnityEngine_BoxCollider__set_size(v26, v56, 0LL);
  }
  titleSprite = (UIWidget_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_65;
  v28 = z;
  if ( z == INFINITY )
    v28 = -z;
  UIWidget__set_width(titleSprite, (int)v28, 0LL);
  v29 = (UIWidget_o *)this->fields.titleSprite;
  if ( !v29 )
    goto LABEL_65;
  v30 = v25;
  if ( v25 == INFINITY )
    v30 = -INFINITY;
  UIWidget__set_height(v29, (int)v30, 0LL);
  explanationLabel = (UnityEngine_Component_o *)this->fields.explanationLabel;
  v32 = v24 >= 0 ? v24 : v24 + 1;
  if ( !explanationLabel )
    goto LABEL_65;
  v33 = this->fields.titleBasePosition.fields.z;
  v34 = this->fields.skillBasePosition.fields.x;
  v35 = this->fields.skillBasePosition.fields.y;
  transform = UnityEngine_Component__get_transform(explanationLabel, 0LL);
  if ( !transform
    || (v37 = (float)(v32 >> 1),
        v57.fields.y = v34 + v37,
        v57.fields.x = v33,
        v57.fields.z = v35,
        UnityEngine_Transform__set_localPosition(transform, v57, 0LL),
        (skillIconList = this->fields.skillIconList) == 0LL) )
  {
LABEL_65:
    sub_B170D4();
  }
  v39 = this->fields.skillBasePosition.fields.z;
  v40 = *((float *)&this[1].klass + 1);
  v41 = 0LL;
  v42 = *(float *)&this[1].klass + v37;
  while ( 1 )
  {
    v43 = skillIconList->max_length;
    if ( (int)v41 >= v43 )
      break;
    if ( (unsigned int)v41 >= v43 )
      goto LABEL_67;
    v44 = (UnityEngine_GameObject_o *)skillIconList->m_Items[v41];
    if ( !v44 )
      goto LABEL_65;
    if ( (int)v41 >= v18 )
    {
      UnityEngine_GameObject__SetActive(v44, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(v44, 1, 0LL);
      v45 = this->fields.skillIconList;
      if ( !v45 )
        goto LABEL_65;
      if ( (unsigned int)v41 >= v45->max_length )
        goto LABEL_67;
      v46 = (UnityEngine_GameObject_o *)v45->m_Items[v41];
      if ( !v46 )
        goto LABEL_65;
      v47 = UnityEngine_GameObject__get_transform(v46, 0LL);
      if ( !v47 )
        goto LABEL_65;
      v58.fields.x = v39;
      v58.fields.y = v42;
      v58.fields.z = v40;
      UnityEngine_Transform__set_localPosition(v47, v58, 0LL);
      v48 = this->fields.skillTitleRangeLabelList;
      if ( !v48 )
        goto LABEL_65;
      if ( (unsigned int)v41 >= v48->max_length )
        goto LABEL_67;
      if ( !idList )
        goto LABEL_65;
      if ( (unsigned int)v41 >= idList->max_length )
        goto LABEL_67;
      v49 = (SkillIconComponent_o *)v48->m_Items[v41];
      if ( !v49 )
        goto LABEL_65;
      SkillIconComponent__Set(v49, idList->m_Items[v41 + 1], 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_65;
      if ( (unsigned int)v41 >= skillExplanationLabelList->max_length )
        goto LABEL_67;
      if ( !titleList )
        goto LABEL_65;
      if ( (unsigned int)v41 >= titleList->max_length )
        goto LABEL_67;
      v51 = (UIRangeLabel_o *)skillExplanationLabelList->m_Items[v41];
      if ( !v51 )
        goto LABEL_65;
      UIRangeLabel__Set(v51, titleList->m_Items[v41], 0LL, 1, 0, 0LL);
      v52 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v52 )
        goto LABEL_65;
      if ( (unsigned int)v41 >= *(_DWORD *)(v52 + 24) )
        goto LABEL_67;
      if ( !explanationList )
        goto LABEL_65;
      if ( (unsigned int)v41 >= explanationList->max_length )
        goto LABEL_67;
      v11 = WrapControlText__textAdjust(
              *(UILabel_o **)(v52 + 8 * v41 + 32),
              explanationList->m_Items[v41],
              22,
              0,
              0,
              0LL);
    }
    skillIconList = this->fields.skillIconList;
    ++v41;
    v42 = v42 - (float)SLODWORD(this->fields.baseSize.fields.y);
    if ( !skillIconList )
      goto LABEL_65;
  }
}