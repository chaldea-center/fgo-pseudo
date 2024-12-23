void __fastcall ServantStatusListViewItemDrawCommandCodeSkill___ctor(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct UnityEngine_GameObject_array *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct SkillIconComponent_array *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct UIRangeLabel_array *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct UILabel_array *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4B63B6E & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1BE4ACC(&SkillIconComponent___TypeInfo, v4);
    sub_1BE4ACC(&UILabel___TypeInfo, v5);
    sub_1BE4ACC(&UIRangeLabel___TypeInfo, v6);
    byte_4B63B6E = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_1BE4B74(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v7->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v8;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.skillBaseList, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = (struct SkillIconComponent_array *)sub_1BE4B74(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v15;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.skillIconList, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (struct UIRangeLabel_array *)sub_1BE4B74(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v22;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.skillTitleRangeLabelList,
    (int64_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (struct UILabel_array *)sub_1BE4B74(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v29;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.skillExplanationLabelList,
    (int64_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawCommandCodeSkill__Awake(
        ServantStatusListViewItemDrawCommandCodeSkill_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  ServantStatusListViewItemDrawCommandCodeSkill_o *v3; // x19
  float v4; // s1
  struct UnityEngine_GameObject_array *v5; // x8
  float v6; // s8
  float v7; // s1
  unsigned int v8; // w9
  struct UISprite_o *baseSprite; // x9
  int v10; // w20
  float v11; // s1
  float v12; // s0
  float v13; // s1
  float v14; // s2
  struct UnityEngine_GameObject_array *v15; // x8
  int v16; // w9
  float v17; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_24;
  v3 = this;
  if ( (int)skillBaseList->max_length >= 2 )
  {
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)skillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v4 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v5 = v3->fields.skillBaseList;
    if ( !v5 )
      goto LABEL_24;
    if ( v5->max_length <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)v5->m_Items[1];
    if ( !this )
      goto LABEL_24;
    v6 = v4;
    this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v7 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    skillBaseList = v3->fields.skillBaseList;
    v8 = (float)(v6 - v7) == INFINITY ? 0x80000000 : (int)(float)(v6 - v7);
    v3->fields.skillPitch = v8;
    if ( !skillBaseList )
      goto LABEL_24;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)v3->fields.titleSprite;
  v10 = v3->fields.skillPitch * skillBaseList->max_length;
  v11 = (float)(baseSprite->fields.mHeight - v10);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v11;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v15 = v3->fields.skillBaseList;
  v16 = v10 >= 0 ? v10 : v10 + 1;
  v17 = (float)(v16 >> 1);
  v3->fields.titleBasePosition.fields.x = v12;
  v3->fields.titleBasePosition.fields.y = v13 - v17;
  v3->fields.titleBasePosition.fields.z = v14;
  if ( !v15 )
LABEL_24:
    sub_1BE4D28(this, method);
  if ( !v15->max_length )
LABEL_25:
    sub_1BE4D30(this, method);
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)v15->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawCommandCodeSkill_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.skillBasePosition.fields.x = localPosition.fields.x;
  v3->fields.skillBasePosition.fields.y = localPosition.fields.y - v17;
  v3->fields.skillBasePosition.fields.z = localPosition.fields.z;
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
  UILabel_o *explanationLabel; // x21
  UnityEngine_GameObject_o *baseSprite; // x0
  __int64 v11; // x1
  struct SkillIconComponent_array *skillIconList; // x9
  __int64 v13; // x11
  unsigned __int64 max_length; // x10
  signed __int64 v15; // x9
  int v16; // w21
  int v17; // w13
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  int v22; // w22
  float v23; // s8
  int32_t v24; // w1
  int32_t v25; // w1
  int v26; // w20
  float v27; // s8
  float v28; // s11
  float v29; // s9
  float v30; // s10
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  float v32; // s8
  float v33; // s9
  il2cpp_array_size_t v34; // w20
  float v35; // s10
  signed int v36; // w9
  struct UnityEngine_GameObject_array *v37; // x8
  struct SkillIconComponent_array *v38; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  struct UILabel_array *skillExplanationLabelList; // x8
  System_String_array *v41; // [xsp+0h] [xbp-60h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-28h] BYREF
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B63B6D & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, item);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_12048/*"SERVANT_STATUS_EXPLANATION_SKILL_COMMAND_CODE"*/, v8);
    byte_4B63B6D = 1;
  }
  idList = 0LL;
  v41 = 0LL;
  titleList = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseSprite = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12048/*"SERVANT_STATUS_EXPLANATION_SKILL_COMMAND_CODE"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_65;
  UILabel__set_text(explanationLabel, (System_String_o *)baseSprite, 0LL);
  ServantStatusListViewItem__GetPassiveSkillInfo(item, &idList, &titleList, &v41, 0, 0LL);
  if ( !idList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_65;
  v13 = *(_QWORD *)&skillIconList->max_length;
  if ( v13 << 32 < 1 )
  {
    v16 = 1;
  }
  else
  {
    max_length = idList->max_length;
    v15 = 0LL;
    v16 = 1;
    do
    {
      if ( v15 >= (int)max_length )
      {
        ++v15;
      }
      else
      {
        if ( v15 >= max_length )
LABEL_67:
          sub_1BE4D30(baseSprite, v11);
        v17 = idList->m_Items[++v15];
        if ( v17 >= 1 )
          v16 = v15;
      }
    }
    while ( v15 < (int)v13 );
  }
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  v22 = this->fields.skillPitch * v16;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v23 = y + (float)v22;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !baseSprite )
      goto LABEL_65;
    v44.fields.x = x;
    v44.fields.y = v23;
    v44.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)baseSprite, v44, 0LL);
  }
  baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_65;
  v24 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)baseSprite, v24, 0LL);
  baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_65;
  v25 = v23 == INFINITY ? 0x80000000 : (int)v23;
  UIWidget__set_height((UIWidget_o *)baseSprite, v25, 0LL);
  baseSprite = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v26 = v22 >= 0 ? v22 : v22 + 1;
  if ( !baseSprite )
    goto LABEL_65;
  v27 = this->fields.titleBasePosition.fields.x;
  v28 = this->fields.titleBasePosition.fields.y;
  v29 = this->fields.titleBasePosition.fields.z;
  baseSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)baseSprite,
                                             0LL);
  if ( !baseSprite
    || (v30 = (float)(v26 >> 1),
        v45.fields.y = v28 + v30,
        v45.fields.x = v27,
        v45.fields.z = v29,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v45, 0LL),
        (skillBaseList = this->fields.skillBaseList) == 0LL) )
  {
LABEL_65:
    sub_1BE4D28(baseSprite, v11);
  }
  v32 = this->fields.skillBasePosition.fields.z;
  v33 = this->fields.skillBasePosition.fields.x;
  v34 = 0;
  v35 = this->fields.skillBasePosition.fields.y + v30;
  while ( 1 )
  {
    v36 = skillBaseList->max_length;
    if ( (int)v34 >= v36 )
      break;
    if ( v34 >= v36 )
      goto LABEL_67;
    baseSprite = skillBaseList->m_Items[v34];
    if ( !baseSprite )
      goto LABEL_65;
    if ( (int)v34 >= v16 )
    {
      UnityEngine_GameObject__SetActive(baseSprite, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(baseSprite, 1, 0LL);
      v37 = this->fields.skillBaseList;
      if ( !v37 )
        goto LABEL_65;
      if ( v34 >= v37->max_length )
        goto LABEL_67;
      baseSprite = v37->m_Items[v34];
      if ( !baseSprite )
        goto LABEL_65;
      baseSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSprite, 0LL);
      if ( !baseSprite )
        goto LABEL_65;
      v46.fields.x = v33;
      v46.fields.y = v35;
      v46.fields.z = v32;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v46, 0LL);
      v38 = this->fields.skillIconList;
      if ( !v38 )
        goto LABEL_65;
      if ( v34 >= v38->max_length )
        goto LABEL_67;
      if ( !idList )
        goto LABEL_65;
      if ( v34 >= idList->max_length )
        goto LABEL_67;
      baseSprite = (UnityEngine_GameObject_o *)v38->m_Items[v34];
      if ( !baseSprite )
        goto LABEL_65;
      SkillIconComponent__Set((SkillIconComponent_o *)baseSprite, idList->m_Items[v34 + 1], 0LL);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_65;
      if ( v34 >= skillTitleRangeLabelList->max_length )
        goto LABEL_67;
      if ( !titleList )
        goto LABEL_65;
      if ( v34 >= titleList->max_length )
        goto LABEL_67;
      baseSprite = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v34];
      if ( !baseSprite )
        goto LABEL_65;
      UIRangeLabel__Set((UIRangeLabel_o *)baseSprite, titleList->m_Items[v34], 0LL, 1, 0, 0LL);
      skillExplanationLabelList = this->fields.skillExplanationLabelList;
      if ( !skillExplanationLabelList )
        goto LABEL_65;
      if ( v34 >= skillExplanationLabelList->max_length )
        goto LABEL_67;
      if ( !v41 )
        goto LABEL_65;
      if ( v34 >= v41->max_length )
        goto LABEL_67;
      baseSprite = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                 skillExplanationLabelList->m_Items[v34],
                                                 v41->m_Items[v34],
                                                 22,
                                                 0,
                                                 0LL);
    }
    skillBaseList = this->fields.skillBaseList;
    ++v34;
    v35 = v35 - (float)this->fields.skillPitch;
    if ( !skillBaseList )
      goto LABEL_65;
  }
}