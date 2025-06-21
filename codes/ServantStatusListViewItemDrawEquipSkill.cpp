void __fastcall ServantStatusListViewItemDrawEquipSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B193E6 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItemDrawEquipSkill_TypeInfo, v1);
    byte_4B193E6 = 1;
  }
  *ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawEquipSkill_StaticFields)0x2800000012LL;
}


void __fastcall ServantStatusListViewItemDrawEquipSkill___ctor(
        ServantStatusListViewItemDrawEquipSkill_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct UnityEngine_GameObject_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct SkillIconComponent_array *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UIRangeLabel_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UILabel_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4B193E5 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1BCAFF8(&SkillIconComponent___TypeInfo, v4);
    sub_1BCAFF8(&UILabel___TypeInfo, v5);
    sub_1BCAFF8(&UIRangeLabel___TypeInfo, v6);
    byte_4B193E5 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_1BCB0A0(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v7->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v8;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillBaseList, (int32_t)v8, v9, v10);
  v11 = (struct SkillIconComponent_array *)sub_1BCB0A0(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v11;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillIconList, (int32_t)v11, v12, v13);
  v14 = (struct UIRangeLabel_array *)sub_1BCB0A0(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v14;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillTitleRangeLabelList, (int32_t)v14, v15, v16);
  v17 = (struct UILabel_array *)sub_1BCB0A0(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v17;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillExplanationLabelList, (int32_t)v17, v18, v19);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawEquipSkill__Awake(
        ServantStatusListViewItemDrawEquipSkill_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  ServantStatusListViewItemDrawEquipSkill_o *v3; // x19
  __int64 v4; // x2
  float v5; // s1
  struct UnityEngine_GameObject_array *v6; // x8
  float v7; // s8
  float v8; // s1
  unsigned int v9; // w9
  struct UISprite_o *baseSprite; // x9
  int v11; // w20
  float v12; // s1
  float v13; // s0
  float v14; // s1
  float v15; // s2
  struct UnityEngine_GameObject_array *v16; // x8
  int v17; // w9
  float v18; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_24;
  v3 = this;
  if ( (int)skillBaseList->max_length >= 2 )
  {
    this = (ServantStatusListViewItemDrawEquipSkill_o *)skillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v6 = v3->fields.skillBaseList;
    if ( !v6 )
      goto LABEL_24;
    if ( v6->max_length <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawEquipSkill_o *)v6->m_Items[1];
    if ( !this )
      goto LABEL_24;
    v7 = v5;
    this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v8 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    skillBaseList = v3->fields.skillBaseList;
    v9 = (float)(v7 - v8) == INFINITY ? 0x80000000 : (int)(float)(v7 - v8);
    v3->fields.skillPitch = v9;
    if ( !skillBaseList )
      goto LABEL_24;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquipSkill_o *)v3->fields.titleSprite;
  v11 = v3->fields.skillPitch * skillBaseList->max_length;
  v12 = (float)(baseSprite->fields.mHeight - v11);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v12;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v16 = v3->fields.skillBaseList;
  v17 = v11 >= 0 ? v11 : v11 + 1;
  v18 = (float)(v17 >> 1);
  v3->fields.titleBasePosition.fields.x = v13;
  v3->fields.titleBasePosition.fields.y = v14 - v18;
  v3->fields.titleBasePosition.fields.z = v15;
  if ( !v16 )
LABEL_24:
    sub_1BCB254(this, method);
  if ( !v16->max_length )
LABEL_25:
    sub_1BCB25C(this, method, v4);
  this = (ServantStatusListViewItemDrawEquipSkill_o *)v16->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)this,
                                                        0LL);
  if ( !this )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.skillBasePosition.fields.x = localPosition.fields.x;
  v3->fields.skillBasePosition.fields.y = localPosition.fields.y - v18;
  v3->fields.skillBasePosition.fields.z = localPosition.fields.z;
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_String_o **v18; // x8
  System_String_o *v19; // x22
  UILabel_o *explanationLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  UnityEngine_Object_o *changeSkillBase; // x21
  __int64 v24; // x2
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v26; // x10
  unsigned __int64 max_length; // x9
  signed int v28; // w28
  signed __int64 v29; // x8
  SkillInfo_o *v30; // x13
  SkillInfo_o *v31; // x21
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  int v33; // w22
  CGThumbnailListItem_o *p_explanation; // x26
  __int64 v35; // x24
  unsigned __int64 v36; // x19
  unsigned __int64 v37; // x9
  __int64 v38; // x8
  struct UILabel_array *skillExplanationLabelList; // x9
  ServantStatusListViewItemDrawEquipSkill_c *v40; // x0
  SkillInfo_o *v41; // x23
  CGThumbnailListItem_o *v42; // x21
  UILabel_o *v43; // x25
  System_String_o *v44; // x26
  struct UILabel_array *v45; // x8
  __int64 v46; // x8
  int v47; // w26
  int v48; // w19
  UnityEngine_Object_o *equipSkillMask; // x25
  struct UILabel_array *v50; // x8
  UILabel_o *v51; // x8
  UnityEngine_Object_o *equipSkillMaskLabel; // x25
  struct UILabel_array *v53; // x8
  UILabel_o *v54; // x8
  int v55; // w8
  int v56; // w25
  UnityEngine_Transform_o *transform; // x0
  System_String_o **v58; // x9
  UILabel_o *v59; // x25
  System_String_o *v60; // x26
  UnityEngine_Object_o *changeSkillExplanationLabel; // x25
  int32_t Value; // w25
  System_String_o *EffectExplanation; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  System_String_o *Name; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  ServantStatusListViewItemDrawEquipSkill_c *v69; // x0
  UILabel_o *v70; // x25
  System_String_o *klass; // x26
  struct UILabel_o *v72; // x8
  struct UILabel_array *v73; // x9
  UILabel_o *v74; // x9
  int v75; // w8
  UnityEngine_Object_o *changeSkillTypeLabel; // x25
  UILabel_o *v77; // x25
  int32_t skillPitch; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x23
  float v83; // s8
  int32_t v84; // w1
  int32_t v85; // w1
  int v86; // w19
  float v87; // s8
  float v88; // s11
  float v89; // s9
  float v90; // s10
  struct UnityEngine_GameObject_array *v91; // x8
  float v92; // s8
  float v93; // s9
  signed int v94; // w22
  float v95; // s10
  unsigned int v96; // w10
  SkillInfo_o *v97; // x23
  struct UnityEngine_GameObject_array *v98; // x8
  struct SkillIconComponent_array *v99; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  _BOOL4 v101; // w23
  struct UILabel_array *v102; // x8
  UILabel_o *v103; // x8
  int32_t v104; // w23
  int32_t v105; // w9
  UnityEngine_Object_o *changeSkillIcon; // x24
  UnityEngine_Object_o *changeSkillTitleRangeLabel; // x24
  UnityEngine_Object_o *v108; // x23
  struct UILabel_array *v109; // x8
  UILabel_o *v110; // x8
  int mHeight; // w8
  int v112; // w9
  int v113; // w23
  UnityEngine_Transform_o *v114; // x0
  struct UILabel_o *v115; // x8
  int32_t v116; // w24
  UnityEngine_Object_o *v117; // x23
  UnityEngine_Object_o *v118; // x23
  CGThumbnailListItem_o *p_title; // [xsp+8h] [xbp-A8h]
  bool v120; // [xsp+14h] [xbp-9Ch]
  Il2CppObject *entity; // [xsp+20h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v125; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B193E4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillMaster___, item);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v7);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    sub_1BCAFF8(&ServantStatusListViewItemDrawEquipSkill_TypeInfo, v10);
    sub_1BCAFF8(&SkillInfo_TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_11817/*"SERVANT_STATUS_EXPLANATION_GRAND_CHANGE_SKILL_PASSIVE"*/, v12);
    sub_1BCAFF8(&StringLiteral_6936/*"GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/, v13);
    sub_1BCAFF8(&StringLiteral_11829/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v14);
    sub_1BCAFF8(&StringLiteral_6387/*"FOLLOWER_GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/, v15);
    sub_1BCAFF8(&StringLiteral_6944/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/, v16);
    sub_1BCAFF8(&StringLiteral_6937/*"GRAND_BOND_EQUIP_SKILL_INFO_ANOTHER_SKILL_HEADER"*/, v17);
    byte_4B193E4 = 1;
  }
  entity = 0LL;
  skillInfoList = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  v120 = ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill(item, 0LL);
  if ( v120 && item->fields._IsMyEquip_k__BackingField )
    v18 = (System_String_o **)&StringLiteral_11817/*"SERVANT_STATUS_EXPLANATION_GRAND_CHANGE_SKILL_PASSIVE"*/;
  else
    v18 = (System_String_o **)&StringLiteral_11829/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
  v19 = *v18;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v19, 0LL);
  if ( !explanationLabel )
    goto LABEL_205;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
  ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0, 0LL);
  changeSkillBase = (UnityEngine_Object_o *)this->fields.changeSkillBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(changeSkillBase, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = this->fields.changeSkillBase;
    if ( !gameObject )
      goto LABEL_205;
    UnityEngine_GameObject__SetActive(gameObject, v120, 0LL);
  }
  if ( !skillInfoList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_205;
  v26 = *(_QWORD *)&skillIconList->max_length;
  if ( v26 << 32 < 1 )
  {
    v28 = 0;
  }
  else
  {
    max_length = skillInfoList->max_length;
    v28 = 0;
    v29 = 0LL;
    do
    {
      if ( v29 < (int)max_length )
      {
        if ( v29 >= max_length )
LABEL_206:
          sub_1BCB25C(gameObject, v22, v24);
        v30 = skillInfoList->m_Items[v29];
        if ( v30 && v30->fields.id >= 1 )
          v28 = v29 + 1;
      }
      ++v29;
    }
    while ( v29 < (int)v26 );
  }
  v31 = (SkillInfo_o *)sub_1BCB244(SkillInfo_TypeInfo);
  SkillInfo___ctor(v31, 0LL);
  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_205;
  p_title = (CGThumbnailListItem_o *)&v31->fields.title;
  v33 = 0;
  p_explanation = (CGThumbnailListItem_o *)&v31->fields.explanation;
  v35 = 4LL;
  while ( 1 )
  {
    v36 = v35 - 4;
    if ( v35 - 4 >= (int)skillBaseList->max_length )
      break;
    if ( skillInfoList )
    {
      v37 = skillInfoList->max_length;
      if ( (__int64)v36 < (int)v37 )
      {
        if ( v36 >= v37 )
          goto LABEL_206;
        v38 = *((_QWORD *)&skillInfoList->obj.klass + v35);
        if ( v38 )
        {
          if ( *(int *)(v38 + 16) >= 1 )
          {
            skillExplanationLabelList = this->fields.skillExplanationLabelList;
            if ( !skillExplanationLabelList )
              goto LABEL_205;
            if ( v36 >= skillExplanationLabelList->max_length )
              goto LABEL_206;
            v40 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            v41 = v31;
            v42 = p_explanation;
            v43 = (UILabel_o *)*((_QWORD *)&skillExplanationLabelList->obj.klass + v35);
            v44 = *(System_String_o **)(v38 + 40);
            if ( !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
              v40 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            }
            gameObject = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                       v43,
                                                       v44,
                                                       v40->static_fields->DETAIL_FONT_SIZE,
                                                       v40->static_fields->DETAIL_FONT_SIZE,
                                                       0LL);
            v45 = this->fields.skillExplanationLabelList;
            if ( !v45 )
              goto LABEL_205;
            if ( v36 >= v45->max_length )
              goto LABEL_206;
            v46 = *((_QWORD *)&v45->obj.klass + v35);
            if ( !v46 )
              goto LABEL_205;
            v47 = *(_DWORD *)(v46 + 172);
            v48 = ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->ADJUST_HEIGHT + v47;
            if ( v35 == 4 )
            {
              equipSkillMask = (UnityEngine_Object_o *)this->fields.equipSkillMask;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(equipSkillMask, 0LL, 0LL) )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.equipSkillMask;
                if ( !gameObject )
                  goto LABEL_205;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_205;
                UnityEngine_GameObject__SetActive(gameObject, v120, 0LL);
                if ( v120 )
                {
                  v50 = this->fields.skillExplanationLabelList;
                  if ( !v50 )
                    goto LABEL_205;
                  if ( !v50->max_length )
                    goto LABEL_206;
                  v51 = v50->m_Items[0];
                  if ( !v51 )
                    goto LABEL_205;
                  if ( v51->fields.mHeight >= 71 )
                  {
                    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSkillMask;
                    if ( !gameObject )
                      goto LABEL_205;
                    UIWidget__set_height((UIWidget_o *)gameObject, v47 + 39, 0LL);
                  }
                }
              }
              equipSkillMaskLabel = (UnityEngine_Object_o *)this->fields.equipSkillMaskLabel;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(equipSkillMaskLabel, 0LL, 0LL) )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.equipSkillMaskLabel;
                if ( !gameObject )
                  goto LABEL_205;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_205;
                UnityEngine_GameObject__SetActive(gameObject, v120, 0LL);
                if ( v120 )
                {
                  v53 = this->fields.skillExplanationLabelList;
                  if ( !v53 )
                    goto LABEL_205;
                  if ( !v53->max_length )
                    goto LABEL_206;
                  v54 = v53->m_Items[0];
                  if ( !v54 )
                    goto LABEL_205;
                  if ( v54->fields.mHeight >= 71 )
                  {
                    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSkillMaskLabel;
                    if ( !gameObject )
                      goto LABEL_205;
                    v55 = -39 - v47;
                    if ( -39 - v47 < 0 )
                      v55 = -38 - v47;
                    v56 = v55 >> 1;
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
                    TransformHelper__SetLocalPositionY(transform, (float)v56, 0LL);
                  }
                  v58 = (System_String_o **)&StringLiteral_6387/*"FOLLOWER_GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/;
                  v59 = this->fields.equipSkillMaskLabel;
                  if ( item->fields._IsMyEquip_k__BackingField )
                    v58 = (System_String_o **)&StringLiteral_6936/*"GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/;
                  v60 = *v58;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v60, 0LL);
                  if ( !v59 )
                    goto LABEL_205;
                  UILabel__set_text(v59, (System_String_o *)gameObject, 0LL);
                }
              }
              changeSkillExplanationLabel = (UnityEngine_Object_o *)this->fields.changeSkillExplanationLabel;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              p_explanation = v42;
              if ( UnityEngine_Object__op_Inequality(changeSkillExplanationLabel, 0LL, 0LL) )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillExplanationLabel;
                if ( !gameObject )
                  goto LABEL_205;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_205;
                UnityEngine_GameObject__SetActive(gameObject, v120, 0LL);
                if ( v120 )
                {
                  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_6944/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/, 0LL);
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
                  if ( !gameObject )
                    goto LABEL_205;
                  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                             &entity,
                                                             Value,
                                                             (const MethodInfo_32C7E4C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)gameObject & 1) != 0 )
                  {
                    if ( !v41 )
                      goto LABEL_205;
                    v41->fields.id = Value;
                    gameObject = (UnityEngine_GameObject_o *)entity;
                    if ( !entity )
                      goto LABEL_205;
                    EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                    v42->klass = (CGThumbnailListItem_c *)EffectExplanation;
                    sub_1BCAF9C(v42, (int32_t)EffectExplanation, v64, v65);
                    gameObject = (UnityEngine_GameObject_o *)entity;
                    if ( !entity )
                      goto LABEL_205;
                    Name = SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                    p_title->klass = (CGThumbnailListItem_c *)Name;
                    sub_1BCAF9C(p_title, (int32_t)Name, v67, v68);
                    v69 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
                    v70 = this->fields.changeSkillExplanationLabel;
                    klass = (System_String_o *)v42->klass;
                    if ( !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
                      v69 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
                    }
                    gameObject = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                               v70,
                                                               klass,
                                                               v69->static_fields->DETAIL_FONT_SIZE,
                                                               v69->static_fields->DETAIL_FONT_SIZE,
                                                               0LL);
                    v72 = this->fields.changeSkillExplanationLabel;
                    if ( !v72 )
                      goto LABEL_205;
                    v73 = this->fields.skillExplanationLabelList;
                    if ( !v73 )
                      goto LABEL_205;
                    if ( !v73->max_length )
                      goto LABEL_206;
                    v74 = v73->m_Items[0];
                    if ( !v74 )
                      goto LABEL_205;
                    p_explanation = v42;
                    v75 = v48 + v72->fields.mHeight + 64;
                    if ( v74->fields.mHeight >= 71 )
                      v48 = v75 + 13;
                    else
                      v48 = v75;
                  }
                }
              }
              changeSkillTypeLabel = (UnityEngine_Object_o *)this->fields.changeSkillTypeLabel;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(changeSkillTypeLabel, 0LL, 0LL);
              v31 = v41;
              if ( ((unsigned __int8)gameObject & 1) != 0 )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillTypeLabel;
                if ( !gameObject )
                  goto LABEL_205;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_205;
                UnityEngine_GameObject__SetActive(gameObject, v120, 0LL);
                v77 = this->fields.changeSkillTypeLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_6937/*"GRAND_BOND_EQUIP_SKILL_INFO_ANOTHER_SKILL_HEADER"*/,
                                                           0LL);
                if ( !v77 )
                  goto LABEL_205;
                UILabel__set_text(v77, (System_String_o *)gameObject, 0LL);
              }
            }
            else
            {
              p_explanation = v42;
              v31 = v41;
            }
            skillPitch = this->fields.skillPitch;
            if ( v48 >= skillPitch )
              v33 += v48;
            else
              v33 += skillPitch;
          }
        }
      }
    }
    skillBaseList = this->fields.skillBaseList;
    ++v35;
    if ( !skillBaseList )
      goto LABEL_205;
  }
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v83 = y + (float)v33;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !gameObject )
      goto LABEL_205;
    v124.fields.x = x;
    v124.fields.y = v83;
    v124.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v124, 0LL);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !gameObject )
    goto LABEL_205;
  v84 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)gameObject, v84, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !gameObject )
    goto LABEL_205;
  v85 = v83 == INFINITY ? 0x80000000 : (int)v83;
  UIWidget__set_height((UIWidget_o *)gameObject, v85, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v86 = v33 >= 0 ? v33 : v33 + 1;
  if ( !gameObject )
    goto LABEL_205;
  v87 = this->fields.titleBasePosition.fields.x;
  v88 = this->fields.titleBasePosition.fields.y;
  v89 = this->fields.titleBasePosition.fields.z;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
  if ( !gameObject
    || (v90 = (float)(v86 >> 1),
        v125.fields.y = v88 + v90,
        v125.fields.x = v87,
        v125.fields.z = v89,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v125, 0LL),
        (v91 = this->fields.skillBaseList) == 0LL) )
  {
LABEL_205:
    sub_1BCB254(gameObject, v22);
  }
  v92 = this->fields.skillBasePosition.fields.z;
  v93 = this->fields.skillBasePosition.fields.x;
  v94 = 0;
  v95 = this->fields.skillBasePosition.fields.y + v90;
  while ( 1 )
  {
    v96 = v91->max_length;
    if ( v94 >= (int)v96 )
      break;
    if ( v94 >= v28 )
    {
      if ( v94 >= v96 )
        goto LABEL_206;
      gameObject = v91->m_Items[v94];
      if ( !gameObject )
        goto LABEL_205;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_205;
      if ( v94 >= skillInfoList->max_length || v94 >= v96 )
        goto LABEL_206;
      gameObject = v91->m_Items[v94];
      if ( !gameObject )
        goto LABEL_205;
      v97 = skillInfoList->m_Items[v94];
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v98 = this->fields.skillBaseList;
      if ( !v98 )
        goto LABEL_205;
      if ( v94 >= v98->max_length )
        goto LABEL_206;
      gameObject = v98->m_Items[v94];
      if ( !gameObject )
        goto LABEL_205;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_205;
      v126.fields.x = v93;
      v126.fields.y = v95;
      v126.fields.z = v92;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v126, 0LL);
      v99 = this->fields.skillIconList;
      if ( !v99 )
        goto LABEL_205;
      if ( v94 >= v99->max_length )
        goto LABEL_206;
      if ( !v97 )
        goto LABEL_205;
      gameObject = (UnityEngine_GameObject_o *)v99->m_Items[v94];
      if ( !gameObject )
        goto LABEL_205;
      SkillIconComponent__Set((SkillIconComponent_o *)gameObject, v97->fields.id, 0LL);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_205;
      if ( v94 >= skillTitleRangeLabelList->max_length )
        goto LABEL_206;
      gameObject = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v94];
      if ( !gameObject )
        goto LABEL_205;
      UIRangeLabel__Set((UIRangeLabel_o *)gameObject, v97->fields.title, 0LL, 1, 0, 0, 0LL);
      if ( !v94 )
      {
        gameObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill(item, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v31 )
            goto LABEL_205;
          v101 = v31->fields.id > 0;
        }
        else
        {
          v101 = 0;
        }
        changeSkillIcon = (UnityEngine_Object_o *)this->fields.changeSkillIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(changeSkillIcon, 0LL, 0LL) )
        {
          gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillIcon;
          if ( !gameObject )
            goto LABEL_205;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_205;
          UnityEngine_GameObject__SetActive(gameObject, v101, 0LL);
        }
        changeSkillTitleRangeLabel = (UnityEngine_Object_o *)this->fields.changeSkillTitleRangeLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(changeSkillTitleRangeLabel, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillTitleRangeLabel;
          if ( !gameObject )
            goto LABEL_205;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_205;
          UnityEngine_GameObject__SetActive(gameObject, v101, 0LL);
        }
        if ( v101 )
        {
          v108 = (UnityEngine_Object_o *)this->fields.changeSkillBase;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v108, 0LL, 0LL);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            v109 = this->fields.skillExplanationLabelList;
            if ( !v109 )
              goto LABEL_205;
            if ( !v109->max_length )
              goto LABEL_206;
            v110 = v109->m_Items[0];
            if ( !v110 )
              goto LABEL_205;
            gameObject = this->fields.changeSkillBase;
            if ( !gameObject )
              goto LABEL_205;
            mHeight = v110->fields.mHeight;
            if ( mHeight >= 71 )
              v112 = -77;
            else
              v112 = -64;
            v113 = v112 - mHeight;
            v114 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
            TransformHelper__SetLocalPositionY(v114, (float)v113, 0LL);
          }
          v115 = this->fields.changeSkillExplanationLabel;
          if ( !v115 )
            goto LABEL_205;
          v116 = v115->fields.mHeight;
          v117 = (UnityEngine_Object_o *)this->fields.changeSkillIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v117, 0LL, 0LL);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !v31 )
              goto LABEL_205;
            gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillIcon;
            if ( !gameObject )
              goto LABEL_205;
            SkillIconComponent__Set((SkillIconComponent_o *)gameObject, v31->fields.id, 0LL);
          }
          v118 = (UnityEngine_Object_o *)this->fields.changeSkillTitleRangeLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v95 = v95 - (float)(v116 + 64);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v118, 0LL, 0LL);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !v31 )
              goto LABEL_205;
            gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillTitleRangeLabel;
            if ( !gameObject )
              goto LABEL_205;
            UIRangeLabel__Set((UIRangeLabel_o *)gameObject, (System_String_o *)p_title->klass, 0LL, 1, 0, 0, 0LL);
          }
        }
      }
    }
    v102 = this->fields.skillExplanationLabelList;
    if ( !v102 )
      goto LABEL_205;
    if ( v94 >= v102->max_length )
      goto LABEL_206;
    v103 = v102->m_Items[v94];
    if ( v103 )
    {
      gameObject = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      v104 = v103->fields.mHeight;
      if ( !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      }
      ++v94;
      v91 = this->fields.skillBaseList;
      v105 = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 4LL) + v104;
      if ( v105 < this->fields.skillPitch )
        v105 = this->fields.skillPitch;
      v95 = v95 - (float)v105;
      if ( v91 )
        continue;
    }
    goto LABEL_205;
  }
}