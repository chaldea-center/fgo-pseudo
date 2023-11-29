void __fastcall ServantStatusListViewItemDrawClassSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FDE8D & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItemDrawClassSkill_TypeInfo, v1);
    byte_40FDE8D = 1;
  }
  ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->MAX_HEIGHT = 500;
  ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawClassSkill___ctor(
        ServantStatusListViewItemDrawClassSkill_o *this,
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

  if ( (byte_40FDE8C & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v4);
    sub_B16FFC(&SkillIconComponent___TypeInfo, v5);
    sub_B16FFC(&UILabel___TypeInfo, v6);
    sub_B16FFC(&UIRangeLabel___TypeInfo, v7);
    byte_40FDE8C = 1;
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
void __fastcall ServantStatusListViewItemDrawClassSkill__Awake(
        ServantStatusListViewItemDrawClassSkill_o *this,
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
  UILabel_o *skillBaseList; // x21
  System_String_o *v11; // x0
  ServantStatusListViewItemDrawClassSkill_c *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x9
  __int64 v16; // x11
  unsigned __int64 max_length; // x10
  signed __int64 v18; // x9
  int v19; // w22
  int v20; // w13
  struct SkillIconComponent_array *skillIconList; // x8
  int v22; // w24
  __int64 v23; // x26
  unsigned __int64 v24; // x27
  __int64 v25; // x8
  ServantStatusListViewItemDrawClassSkill_c *v26; // x0
  UILabel_o *v27; // x20
  System_String_o *v28; // x21
  __int64 v29; // x8
  __int64 v30; // x8
  int v31; // w10
  float y; // w8
  int v33; // w9
  float x; // s8
  float z; // s9
  float v36; // s10
  UnityEngine_Object_o *baseSprite; // x20
  float v38; // s8
  UnityEngine_BoxCollider_o *v39; // x0
  UIWidget_o *titleSprite; // x0
  double v41; // d0
  UIWidget_o *v42; // x0
  double v43; // d0
  UnityEngine_Component_o *explanationLabel; // x0
  int v45; // w20
  float v46; // s8
  float v47; // s11
  float v48; // s9
  UnityEngine_Transform_o *transform; // x0
  float v50; // s10
  struct SkillIconComponent_array *v51; // x8
  float v52; // s8
  float v53; // s9
  __int64 v54; // x20
  float v55; // s10
  int v56; // w9
  UnityEngine_GameObject_o *v57; // x0
  struct SkillIconComponent_array *v58; // x8
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_Transform_o *v60; // x0
  struct UIRangeLabel_array *v61; // x8
  SkillIconComponent_o *v62; // x0
  struct UILabel_array *skillExplanationLabelList; // x8
  UIRangeLabel_o *v64; // x0
  __int64 v65; // x8
  __int64 v66; // x8
  int v67; // w21
  float v68; // w9
  System_String_array *v69; // [xsp+0h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDE8B & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&ServantStatusListViewItemDrawClassSkill_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_11932, v9);
    byte_40FDE8B = 1;
  }
  idList = 0LL;
  v69 = 0LL;
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11932, 0LL);
  if ( !skillBaseList )
    goto LABEL_88;
  UILabel__set_text(skillBaseList, v11, 0LL);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &v69, 0LL);
  if ( !idList )
    return;
  skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
  if ( !skillTitleRangeLabelList )
    goto LABEL_88;
  v16 = *(_QWORD *)&skillTitleRangeLabelList->max_length;
  if ( v16 << 32 < 1 )
  {
    v19 = 1;
  }
  else
  {
    max_length = idList->max_length;
    v18 = 0LL;
    v19 = 1;
    do
    {
      if ( v18 >= (int)max_length )
      {
        ++v18;
      }
      else
      {
        if ( v18 >= max_length )
        {
LABEL_90:
          sub_B17100(v12, v13, v14);
          sub_B170A0();
        }
        v20 = idList->m_Items[++v18];
        if ( v20 >= 1 )
          v19 = v18;
      }
    }
    while ( v18 < (int)v16 );
  }
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_88;
  v22 = 0;
  v23 = 4LL;
  while ( 1 )
  {
    v24 = v23 - 4;
    if ( v23 - 4 >= (int)skillIconList->max_length )
      break;
    if ( (__int64)v24 < v19 )
    {
      v25 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v25 )
        goto LABEL_88;
      if ( v24 >= *(unsigned int *)(v25 + 24) )
        goto LABEL_90;
      if ( !v69 )
        goto LABEL_88;
      if ( v24 >= v69->max_length )
        goto LABEL_90;
      v26 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      v27 = *(UILabel_o **)(v25 + 8 * v23);
      v28 = (System_String_o *)*((_QWORD *)&v69->obj.klass + v23);
      if ( (BYTE3(ServantStatusListViewItemDrawClassSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        v26 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      v12 = (ServantStatusListViewItemDrawClassSkill_c *)WrapControlText__textAdjust(
                                                           v27,
                                                           v28,
                                                           v26->static_fields->DETAIL_FONT_SIZE,
                                                           v26->static_fields->DETAIL_FONT_SIZE,
                                                           v26->static_fields->MAX_HEIGHT,
                                                           0LL);
      v29 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v29 )
        goto LABEL_88;
      if ( v24 >= *(unsigned int *)(v29 + 24) )
        goto LABEL_90;
      v30 = *(_QWORD *)(v29 + 8 * v23);
      if ( !v30 )
        goto LABEL_88;
      v31 = *(_DWORD *)(v30 + 164);
      y = this->fields.baseSize.fields.y;
      v33 = v31 + ServantStatusListViewItemDrawClassSkill_TypeInfo->static_fields->ADJUST_HEIGHT;
      if ( v33 >= SLODWORD(y) )
        v22 += v33;
      else
        v22 += LODWORD(y);
    }
    skillIconList = this->fields.skillIconList;
    ++v23;
    if ( !skillIconList )
      goto LABEL_88;
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  v36 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v38 = x + (float)v22;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v39 = (UnityEngine_BoxCollider_o *)this->fields.baseSprite;
    if ( !v39 )
      goto LABEL_88;
    v72.fields.x = z;
    v72.fields.y = v38;
    v72.fields.z = v36;
    UnityEngine_BoxCollider__set_size(v39, v72, 0LL);
  }
  titleSprite = (UIWidget_o *)this->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_88;
  v41 = z;
  if ( z == INFINITY )
    v41 = -z;
  UIWidget__set_width(titleSprite, (int)v41, 0LL);
  v42 = (UIWidget_o *)this->fields.titleSprite;
  if ( !v42 )
    goto LABEL_88;
  v43 = v38;
  if ( v38 == INFINITY )
    v43 = -INFINITY;
  UIWidget__set_height(v42, (int)v43, 0LL);
  explanationLabel = (UnityEngine_Component_o *)this->fields.explanationLabel;
  v45 = v22 >= 0 ? v22 : v22 + 1;
  if ( !explanationLabel )
    goto LABEL_88;
  v46 = this->fields.titleBasePosition.fields.z;
  v47 = this->fields.skillBasePosition.fields.x;
  v48 = this->fields.skillBasePosition.fields.y;
  transform = UnityEngine_Component__get_transform(explanationLabel, 0LL);
  if ( !transform
    || (v50 = (float)(v45 >> 1),
        v73.fields.y = v47 + v50,
        v73.fields.x = v46,
        v73.fields.z = v48,
        UnityEngine_Transform__set_localPosition(transform, v73, 0LL),
        (v51 = this->fields.skillIconList) == 0LL) )
  {
LABEL_88:
    sub_B170D4();
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
    v57 = (UnityEngine_GameObject_o *)v51->m_Items[v54];
    if ( !v57 )
      goto LABEL_88;
    if ( (int)v54 >= v19 )
    {
      UnityEngine_GameObject__SetActive(v57, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(v57, 1, 0LL);
      v58 = this->fields.skillIconList;
      if ( !v58 )
        goto LABEL_88;
      if ( (unsigned int)v54 >= v58->max_length )
        goto LABEL_90;
      v59 = (UnityEngine_GameObject_o *)v58->m_Items[v54];
      if ( !v59 )
        goto LABEL_88;
      v60 = UnityEngine_GameObject__get_transform(v59, 0LL);
      if ( !v60 )
        goto LABEL_88;
      v74.fields.x = v52;
      v74.fields.y = v55;
      v74.fields.z = v53;
      UnityEngine_Transform__set_localPosition(v60, v74, 0LL);
      v61 = this->fields.skillTitleRangeLabelList;
      if ( !v61 )
        goto LABEL_88;
      if ( (unsigned int)v54 >= v61->max_length )
        goto LABEL_90;
      if ( !idList )
        goto LABEL_88;
      if ( (unsigned int)v54 >= idList->max_length )
        goto LABEL_90;
      v62 = (SkillIconComponent_o *)v61->m_Items[v54];
      if ( !v62 )
        goto LABEL_88;
      SkillIconComponent__Set(v62, idList->m_Items[v54 + 1], 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_88;
      if ( (unsigned int)v54 >= skillExplanationLabelList->max_length )
        goto LABEL_90;
      if ( !titleList )
        goto LABEL_88;
      if ( (unsigned int)v54 >= titleList->max_length )
        goto LABEL_90;
      v64 = (UIRangeLabel_o *)skillExplanationLabelList->m_Items[v54];
      if ( !v64 )
        goto LABEL_88;
      UIRangeLabel__Set(v64, titleList->m_Items[v54], 0LL, 1, 0, 0LL);
    }
    v65 = *(_QWORD *)&this->fields.skillPitch;
    if ( !v65 )
      goto LABEL_88;
    if ( (unsigned int)v54 >= *(_DWORD *)(v65 + 24) )
      goto LABEL_90;
    v66 = *(_QWORD *)(v65 + 8 * v54 + 32);
    if ( v66 )
    {
      v12 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      v67 = *(_DWORD *)(v66 + 164);
      if ( (BYTE3(ServantStatusListViewItemDrawClassSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawClassSkill_TypeInfo);
        v12 = ServantStatusListViewItemDrawClassSkill_TypeInfo;
      }
      ++v54;
      v51 = this->fields.skillIconList;
      LODWORD(v68) = v12->static_fields->ADJUST_HEIGHT + v67;
      if ( SLODWORD(v68) < SLODWORD(this->fields.baseSize.fields.y) )
        v68 = this->fields.baseSize.fields.y;
      v55 = v55 - (float)SLODWORD(v68);
      if ( v51 )
        continue;
    }
    goto LABEL_88;
  }
}