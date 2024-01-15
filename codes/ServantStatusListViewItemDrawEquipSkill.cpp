void __fastcall ServantStatusListViewItemDrawEquipSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FDE9C & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItemDrawEquipSkill_TypeInfo, v1);
    byte_40FDE9C = 1;
  }
  ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->MAX_HEIGHT = 500;
  ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawEquipSkill___ctor(
        ServantStatusListViewItemDrawEquipSkill_o *this,
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

  if ( (byte_40FDE9B & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v4);
    sub_B16FFC(&SkillIconComponent___TypeInfo, v5);
    sub_B16FFC(&UILabel___TypeInfo, v6);
    sub_B16FFC(&UIRangeLabel___TypeInfo, v7);
    byte_40FDE9B = 1;
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
void __fastcall ServantStatusListViewItemDrawEquipSkill__Awake(
        ServantStatusListViewItemDrawEquipSkill_o *this,
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


int32_t __fastcall ServantStatusListViewItemDrawEquipSkill__GetKind(
        ServantStatusListViewItemDrawEquipSkill_o *this,
        const MethodInfo *method)
{
  return 12;
}


void __fastcall ServantStatusListViewItemDrawEquipSkill__SetItem(
        ServantStatusListViewItemDrawEquipSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *skillBaseList; // x21
  System_String_o *v11; // x0
  ServantStatusListViewItemDrawEquipSkill_c *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  __int64 v16; // x10
  unsigned __int64 max_length; // x9
  int v18; // w22
  signed __int64 v19; // x8
  SkillInfo_o *v20; // x13
  struct SkillIconComponent_array *skillIconList; // x8
  int v22; // w24
  __int64 v23; // x25
  unsigned __int64 v24; // x26
  unsigned __int64 v25; // x9
  __int64 v26; // x8
  __int64 v27; // x9
  ServantStatusListViewItemDrawEquipSkill_c *v28; // x0
  UILabel_o *v29; // x20
  System_String_o *v30; // x21
  __int64 v31; // x8
  __int64 v32; // x8
  int v33; // w10
  float y; // w8
  int v35; // w9
  float x; // s8
  float z; // s9
  float v38; // s10
  UnityEngine_Object_o *baseSprite; // x20
  float v40; // s8
  UnityEngine_BoxCollider_o *v41; // x0
  UIWidget_o *titleSprite; // x0
  double v43; // d0
  UIWidget_o *v44; // x0
  double v45; // d0
  UnityEngine_Component_o *explanationLabel; // x0
  int v47; // w20
  float v48; // s8
  float v49; // s11
  float v50; // s9
  UnityEngine_Transform_o *transform; // x0
  float v52; // s10
  struct SkillIconComponent_array *v53; // x8
  float v54; // s8
  float v55; // s9
  __int64 v56; // x20
  float v57; // s10
  unsigned int v58; // w9
  UnityEngine_GameObject_o *v59; // x0
  SkillInfo_o *v60; // x24
  struct SkillIconComponent_array *v61; // x8
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_Transform_o *v63; // x0
  struct UIRangeLabel_array *v64; // x8
  SkillIconComponent_o *v65; // x0
  struct UILabel_array *skillExplanationLabelList; // x8
  UIRangeLabel_o *v67; // x0
  UnityEngine_GameObject_o *v68; // x0
  __int64 v69; // x8
  __int64 v70; // x8
  int v71; // w21
  float v72; // w9
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDE9A & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&ServantStatusListViewItemDrawEquipSkill_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_11932/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v9);
    byte_40FDE9A = 1;
  }
  skillInfoList = 0LL;
  LODWORD(this->fields.baseButton) = mode;
  if ( !item || !mode )
    return;
  skillBaseList = (UILabel_o *)this->fields.skillBaseList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11932/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0LL);
  if ( !skillBaseList )
    goto LABEL_91;
  UILabel__set_text(skillBaseList, v11, 0LL);
  ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0LL);
  if ( !skillInfoList )
    return;
  skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
  if ( !skillTitleRangeLabelList )
    goto LABEL_91;
  v16 = *(_QWORD *)&skillTitleRangeLabelList->max_length;
  if ( v16 << 32 < 1 )
  {
    v18 = 0;
  }
  else
  {
    max_length = skillInfoList->max_length;
    v18 = 0;
    v19 = 0LL;
    do
    {
      if ( v19 < (int)max_length )
      {
        if ( v19 >= max_length )
        {
LABEL_93:
          sub_B17100(v12, v13, v14);
          sub_B170A0();
        }
        v20 = skillInfoList->m_Items[v19];
        if ( v20 && v20->fields.id >= 1 )
          v18 = v19 + 1;
      }
      ++v19;
    }
    while ( v19 < (int)v16 );
  }
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_91;
  v22 = 0;
  v23 = 4LL;
  while ( 1 )
  {
    v24 = v23 - 4;
    if ( v23 - 4 >= (int)skillIconList->max_length )
      break;
    if ( skillInfoList )
    {
      v25 = skillInfoList->max_length;
      if ( (__int64)v24 < (int)v25 )
      {
        if ( v24 >= v25 )
          goto LABEL_93;
        v26 = *((_QWORD *)&skillInfoList->obj.klass + v23);
        if ( v26 )
        {
          if ( *(int *)(v26 + 16) >= 1 )
          {
            v27 = *(_QWORD *)&this->fields.skillPitch;
            if ( !v27 )
              goto LABEL_91;
            if ( v24 >= *(unsigned int *)(v27 + 24) )
              goto LABEL_93;
            v28 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            v29 = *(UILabel_o **)(v27 + 8 * v23);
            v30 = *(System_String_o **)(v26 + 40);
            if ( (BYTE3(ServantStatusListViewItemDrawEquipSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
              v28 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            }
            v12 = (ServantStatusListViewItemDrawEquipSkill_c *)WrapControlText__textAdjust(
                                                                 v29,
                                                                 v30,
                                                                 v28->static_fields->DETAIL_FONT_SIZE,
                                                                 v28->static_fields->DETAIL_FONT_SIZE,
                                                                 v28->static_fields->MAX_HEIGHT,
                                                                 0LL);
            v31 = *(_QWORD *)&this->fields.skillPitch;
            if ( !v31 )
              goto LABEL_91;
            if ( v24 >= *(unsigned int *)(v31 + 24) )
              goto LABEL_93;
            v32 = *(_QWORD *)(v31 + 8 * v23);
            if ( !v32 )
              goto LABEL_91;
            v33 = *(_DWORD *)(v32 + 164);
            y = this->fields.baseSize.fields.y;
            v35 = ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->ADJUST_HEIGHT + v33;
            if ( v35 >= SLODWORD(y) )
              v22 += v35;
            else
              v22 += LODWORD(y);
          }
        }
      }
    }
    skillIconList = this->fields.skillIconList;
    ++v23;
    if ( !skillIconList )
      goto LABEL_91;
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  v38 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v40 = x + (float)v22;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v41 = (UnityEngine_BoxCollider_o *)this->fields.baseSprite;
    if ( !v41 )
      goto LABEL_91;
    v74.fields.x = z;
    v74.fields.y = v40;
    v74.fields.z = v38;
    UnityEngine_BoxCollider__set_size(v41, v74, 0LL);
  }
  titleSprite = (UIWidget_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_91;
  v43 = z;
  if ( z == INFINITY )
    v43 = -z;
  UIWidget__set_width(titleSprite, (int)v43, 0LL);
  v44 = (UIWidget_o *)this->fields.titleSprite;
  if ( !v44 )
    goto LABEL_91;
  v45 = v40;
  if ( v40 == INFINITY )
    v45 = -INFINITY;
  UIWidget__set_height(v44, (int)v45, 0LL);
  explanationLabel = (UnityEngine_Component_o *)this->fields.explanationLabel;
  v47 = v22 >= 0 ? v22 : v22 + 1;
  if ( !explanationLabel )
    goto LABEL_91;
  v48 = this->fields.titleBasePosition.fields.z;
  v49 = this->fields.skillBasePosition.fields.x;
  v50 = this->fields.skillBasePosition.fields.y;
  transform = UnityEngine_Component__get_transform(explanationLabel, 0LL);
  if ( !transform
    || (v52 = (float)(v47 >> 1),
        v75.fields.y = v49 + v52,
        v75.fields.x = v48,
        v75.fields.z = v50,
        UnityEngine_Transform__set_localPosition(transform, v75, 0LL),
        (v53 = this->fields.skillIconList) == 0LL) )
  {
LABEL_91:
    sub_B170D4();
  }
  v54 = this->fields.skillBasePosition.fields.z;
  v55 = *((float *)&this[1].klass + 1);
  v56 = 0LL;
  v57 = *(float *)&this[1].klass + v52;
  while ( 1 )
  {
    v58 = v53->max_length;
    if ( (int)v56 >= (int)v58 )
      break;
    if ( (int)v56 >= v18 )
    {
      if ( (unsigned int)v56 >= v58 )
        goto LABEL_93;
      v68 = (UnityEngine_GameObject_o *)v53->m_Items[v56];
      if ( !v68 )
        goto LABEL_91;
      UnityEngine_GameObject__SetActive(v68, 0, 0LL);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_91;
      if ( (unsigned int)v56 >= skillInfoList->max_length || (unsigned int)v56 >= v58 )
        goto LABEL_93;
      v59 = (UnityEngine_GameObject_o *)v53->m_Items[(int)v56];
      if ( !v59 )
        goto LABEL_91;
      v60 = skillInfoList->m_Items[(int)v56];
      UnityEngine_GameObject__SetActive(v59, 1, 0LL);
      v61 = this->fields.skillIconList;
      if ( !v61 )
        goto LABEL_91;
      if ( (unsigned int)v56 >= v61->max_length )
        goto LABEL_93;
      v62 = (UnityEngine_GameObject_o *)v61->m_Items[(int)v56];
      if ( !v62 )
        goto LABEL_91;
      v63 = UnityEngine_GameObject__get_transform(v62, 0LL);
      if ( !v63 )
        goto LABEL_91;
      v76.fields.x = v54;
      v76.fields.y = v57;
      v76.fields.z = v55;
      UnityEngine_Transform__set_localPosition(v63, v76, 0LL);
      v64 = this->fields.skillTitleRangeLabelList;
      if ( !v64 )
        goto LABEL_91;
      if ( (unsigned int)v56 >= v64->max_length )
        goto LABEL_93;
      if ( !v60 )
        goto LABEL_91;
      v65 = (SkillIconComponent_o *)v64->m_Items[(int)v56];
      if ( !v65 )
        goto LABEL_91;
      SkillIconComponent__Set(v65, v60->fields.id, 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_91;
      if ( (unsigned int)v56 >= skillExplanationLabelList->max_length )
        goto LABEL_93;
      v67 = (UIRangeLabel_o *)skillExplanationLabelList->m_Items[(int)v56];
      if ( !v67 )
        goto LABEL_91;
      UIRangeLabel__Set(v67, v60->fields.title, 0LL, 1, 0, 0LL);
    }
    v69 = *(_QWORD *)&this->fields.skillPitch;
    if ( !v69 )
      goto LABEL_91;
    if ( (unsigned int)v56 >= *(_DWORD *)(v69 + 24) )
      goto LABEL_93;
    v70 = *(_QWORD *)(v69 + 8LL * (int)v56 + 32);
    if ( v70 )
    {
      v12 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      v71 = *(_DWORD *)(v70 + 164);
      if ( (BYTE3(ServantStatusListViewItemDrawEquipSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
        v12 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      }
      ++v56;
      v53 = this->fields.skillIconList;
      LODWORD(v72) = v12->static_fields->ADJUST_HEIGHT + v71;
      if ( SLODWORD(v72) < SLODWORD(this->fields.baseSize.fields.y) )
        v72 = this->fields.baseSize.fields.y;
      v57 = v57 - (float)SLODWORD(v72);
      if ( v53 )
        continue;
    }
    goto LABEL_91;
  }
}