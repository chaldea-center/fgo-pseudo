void ServantStatusListViewItemDrawEquipSkill___cctor(const MethodInfo *method)
{
  if ( (byte_4C23FCA & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItemDrawEquipSkill_TypeInfo);
    byte_4C23FCA = 1;
  }
  *ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawEquipSkill_StaticFields)0x2800000012LL;
}


void ServantStatusListViewItemDrawEquipSkill___ctor(
        ServantStatusListViewItemDrawEquipSkill_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct SkillIconComponent_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIRangeLabel_array *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UILabel_array *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C23FC9 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&UnityEngine_GameObject___TypeInfo);
    sub_1C2D490(&SkillIconComponent___TypeInfo);
    sub_1C2D490(&UILabel___TypeInfo);
    sub_1C2D490(&UIRangeLabel___TypeInfo);
    byte_4C23FC9 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1C2D538(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillBaseList, (int32_t)v4, v5, v6);
  v7 = (struct SkillIconComponent_array *)sub_1C2D538(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillIconList, (int32_t)v7, v8, v9);
  v10 = (struct UIRangeLabel_array *)sub_1C2D538(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillTitleRangeLabelList = v10;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillTitleRangeLabelList, (int32_t)v10, v11, v12);
  v13 = (struct UILabel_array *)sub_1C2D538(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillExplanationLabelList = v13;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillExplanationLabelList, (int32_t)v13, v14, v15);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawEquipSkill__Awake(
        ServantStatusListViewItemDrawEquipSkill_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  ServantStatusListViewItemDrawEquipSkill_o *v3; // x19
  __int64 v4; // x2
  struct UnityEngine_GameObject_array *v5; // x8
  float y; // s8
  unsigned int v7; // w9
  struct UISprite_o *baseSprite; // x9
  int v9; // w20
  float v10; // s1
  struct UnityEngine_GameObject_array *v11; // x8
  int v12; // w9
  float v13; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_24;
  v3 = this;
  if ( SLODWORD(skillBaseList->max_length) >= 2 )
  {
    this = (ServantStatusListViewItemDrawEquipSkill_o *)skillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0);
    if ( !this )
      goto LABEL_24;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    v5 = v3->fields.skillBaseList;
    if ( !v5 )
      goto LABEL_24;
    if ( LODWORD(v5->max_length) <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawEquipSkill_o *)v5->m_Items[1];
    if ( !this )
      goto LABEL_24;
    y = localPosition.fields.y;
    this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)this,
                                                          0);
    if ( !this )
      goto LABEL_24;
    v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    skillBaseList = v3->fields.skillBaseList;
    v7 = (float)(y - v15.fields.y) == INFINITY ? 0x80000000 : (int)(float)(y - v15.fields.y);
    v3->fields.skillPitch = v7;
    if ( !skillBaseList )
      goto LABEL_24;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquipSkill_o *)v3->fields.titleSprite;
  v9 = v3->fields.skillPitch * LODWORD(skillBaseList->max_length);
  v10 = (float)(baseSprite->fields.mHeight - v9);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v10;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
  if ( !this )
    goto LABEL_24;
  v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v11 = v3->fields.skillBaseList;
  v12 = v9 >= 0 ? v9 : v9 + 1;
  v13 = (float)(v12 >> 1);
  v3->fields.titleBasePosition.fields.x = v16.fields.x;
  v3->fields.titleBasePosition.fields.y = v16.fields.y - v13;
  v3->fields.titleBasePosition.fields.z = v16.fields.z;
  if ( !v11 )
LABEL_24:
    sub_1C2D6EC(this, method);
  if ( !LODWORD(v11->max_length) )
LABEL_25:
    sub_1C2D6F4(this, method, v4);
  this = (ServantStatusListViewItemDrawEquipSkill_o *)v11->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquipSkill_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)this,
                                                        0);
  if ( !this )
    goto LABEL_24;
  v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.skillBasePosition.fields.x = v17.fields.x;
  v3->fields.skillBasePosition.fields.y = v17.fields.y - v13;
  v3->fields.skillBasePosition.fields.z = v17.fields.z;
}


int32_t ServantStatusListViewItemDrawEquipSkill__GetKind(
        ServantStatusListViewItemDrawEquipSkill_o *this,
        const MethodInfo *method)
{
  return 12;
}


void ServantStatusListViewItemDrawEquipSkill__SetItem(
        ServantStatusListViewItemDrawEquipSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  System_String_o **v6; // x8
  System_String_o *v7; // x22
  UILabel_o *explanationLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *changeSkillBase; // x21
  __int64 v12; // x2
  struct SkillIconComponent_array *skillIconList; // x8
  il2cpp_array_size_t max_length; // x10
  unsigned __int64 max_length_low; // x9
  int v16; // w28
  signed __int64 v17; // x8
  SkillInfo_o *v18; // x13
  SkillInfo_o *v19; // x21
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  int v21; // w22
  CGThumbnailListItem_o *p_explanation; // x26
  __int64 v23; // x24
  unsigned __int64 v24; // x19
  unsigned __int64 v25; // x9
  __int64 v26; // x8
  struct UILabel_array *skillExplanationLabelList; // x9
  ServantStatusListViewItemDrawEquipSkill_c *v28; // x0
  SkillInfo_o *v29; // x23
  CGThumbnailListItem_o *v30; // x21
  UILabel_o *v31; // x25
  System_String_o *v32; // x26
  struct UILabel_array *v33; // x8
  __int64 v34; // x8
  int v35; // w26
  int v36; // w19
  UnityEngine_Object_o *equipSkillMask; // x25
  struct UILabel_array *v38; // x8
  UILabel_o *v39; // x8
  UnityEngine_Object_o *equipSkillMaskLabel; // x25
  struct UILabel_array *v41; // x8
  UILabel_o *v42; // x8
  int v43; // w8
  int v44; // w25
  UnityEngine_Transform_o *transform; // x0
  System_String_o **v46; // x9
  UILabel_o *v47; // x25
  System_String_o *v48; // x26
  UnityEngine_Object_o *changeSkillExplanationLabel; // x25
  int32_t Value; // w25
  System_String_o *EffectExplanation; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  System_String_o *Name; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  ServantStatusListViewItemDrawEquipSkill_c *v57; // x0
  UILabel_o *v58; // x25
  System_String_o *klass; // x26
  struct UILabel_o *v60; // x8
  struct UILabel_array *v61; // x9
  UILabel_o *v62; // x9
  int v63; // w8
  UnityEngine_Object_o *changeSkillTypeLabel; // x25
  UILabel_o *v65; // x25
  int32_t skillPitch; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x23
  float v71; // s8
  int32_t v72; // w1
  int32_t v73; // w1
  int v74; // w19
  float v75; // s8
  float v76; // s11
  float v77; // s9
  float v78; // s10
  struct UnityEngine_GameObject_array *v79; // x8
  float v80; // s8
  float v81; // s9
  unsigned int v82; // w22
  float v83; // s10
  unsigned int v84; // w10
  SkillInfo_o *v85; // x23
  struct UnityEngine_GameObject_array *v86; // x8
  struct SkillIconComponent_array *v87; // x8
  struct UIRangeLabel_array *skillTitleRangeLabelList; // x8
  _BOOL4 v89; // w23
  struct UILabel_array *v90; // x8
  UILabel_o *v91; // x8
  int32_t v92; // w23
  int32_t v93; // w9
  UnityEngine_Object_o *changeSkillIcon; // x24
  UnityEngine_Object_o *changeSkillTitleRangeLabel; // x24
  UnityEngine_Object_o *v96; // x23
  struct UILabel_array *v97; // x8
  UILabel_o *v98; // x8
  int mHeight; // w8
  int v100; // w9
  int v101; // w23
  UnityEngine_Transform_o *v102; // x0
  struct UILabel_o *v103; // x8
  int32_t v104; // w24
  UnityEngine_Object_o *v105; // x23
  UnityEngine_Object_o *v106; // x23
  CGThumbnailListItem_o *p_title; // [xsp+8h] [xbp-A8h]
  bool v108; // [xsp+14h] [xbp-9Ch]
  Il2CppObject *entity; // [xsp+20h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23FC8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantStatusListViewItemDrawEquipSkill_TypeInfo);
    sub_1C2D490(&SkillInfo_TypeInfo);
    sub_1C2D490(&StringLiteral_11915/*"SERVANT_STATUS_EXPLANATION_GRAND_CHANGE_SKILL_PASSIVE"*/);
    sub_1C2D490(&StringLiteral_6983/*"GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_11927/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    sub_1C2D490(&StringLiteral_6430/*"FOLLOWER_GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_6995/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/);
    sub_1C2D490(&StringLiteral_6984/*"GRAND_BOND_EQUIP_SKILL_INFO_ANOTHER_SKILL_HEADER"*/);
    byte_4C23FC8 = 1;
  }
  entity = 0;
  skillInfoList = 0;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  v108 = ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill(item, 0);
  if ( v108 && item->fields._IsMyEquip_k__BackingField )
    v6 = (System_String_o **)&StringLiteral_11915/*"SERVANT_STATUS_EXPLANATION_GRAND_CHANGE_SKILL_PASSIVE"*/;
  else
    v6 = (System_String_o **)&StringLiteral_11927/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/;
  v7 = *v6;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v7, 0);
  if ( !explanationLabel )
    goto LABEL_205;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0);
  ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0, 0);
  changeSkillBase = (UnityEngine_Object_o *)this->fields.changeSkillBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(changeSkillBase, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = this->fields.changeSkillBase;
    if ( !gameObject )
      goto LABEL_205;
    UnityEngine_GameObject__SetActive(gameObject, v108, 0);
  }
  if ( !skillInfoList )
    return;
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_205;
  max_length = skillIconList->max_length;
  if ( (__int64)(max_length << 32) < 1 )
  {
    v16 = 0;
  }
  else
  {
    max_length_low = LODWORD(skillInfoList->max_length);
    v16 = 0;
    v17 = 0;
    do
    {
      if ( v17 < (int)max_length_low )
      {
        if ( v17 >= max_length_low )
LABEL_206:
          sub_1C2D6F4(gameObject, v10, v12);
        v18 = skillInfoList->m_Items[v17];
        if ( v18 && v18->fields.id >= 1 )
          v16 = v17 + 1;
      }
      ++v17;
    }
    while ( v17 < (int)max_length );
  }
  v19 = (SkillInfo_o *)sub_1C2D6DC(SkillInfo_TypeInfo);
  SkillInfo___ctor(v19, 0);
  skillBaseList = this->fields.skillBaseList;
  if ( !skillBaseList )
    goto LABEL_205;
  p_title = (CGThumbnailListItem_o *)&v19->fields.title;
  v21 = 0;
  p_explanation = (CGThumbnailListItem_o *)&v19->fields.explanation;
  v23 = 4;
  while ( 1 )
  {
    v24 = v23 - 4;
    if ( v23 - 4 >= SLODWORD(skillBaseList->max_length) )
      break;
    if ( skillInfoList )
    {
      v25 = LODWORD(skillInfoList->max_length);
      if ( (__int64)v24 < (int)v25 )
      {
        if ( v24 >= v25 )
          goto LABEL_206;
        v26 = *((_QWORD *)&skillInfoList->obj.klass + v23);
        if ( v26 )
        {
          if ( *(int *)(v26 + 16) >= 1 )
          {
            skillExplanationLabelList = this->fields.skillExplanationLabelList;
            if ( !skillExplanationLabelList )
              goto LABEL_205;
            if ( v24 >= LODWORD(skillExplanationLabelList->max_length) )
              goto LABEL_206;
            v28 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            v29 = v19;
            v30 = p_explanation;
            v31 = (UILabel_o *)*((_QWORD *)&skillExplanationLabelList->obj.klass + v23);
            v32 = *(System_String_o **)(v26 + 40);
            if ( !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
              v28 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
            }
            gameObject = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                       v31,
                                                       v32,
                                                       v28->static_fields->DETAIL_FONT_SIZE,
                                                       v28->static_fields->DETAIL_FONT_SIZE,
                                                       0);
            v33 = this->fields.skillExplanationLabelList;
            if ( !v33 )
              goto LABEL_205;
            if ( v24 >= LODWORD(v33->max_length) )
              goto LABEL_206;
            v34 = *((_QWORD *)&v33->obj.klass + v23);
            if ( !v34 )
              goto LABEL_205;
            v35 = *(_DWORD *)(v34 + 172);
            v36 = ServantStatusListViewItemDrawEquipSkill_TypeInfo->static_fields->ADJUST_HEIGHT + v35;
            if ( v23 == 4 )
            {
              equipSkillMask = (UnityEngine_Object_o *)this->fields.equipSkillMask;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(equipSkillMask, 0, 0) )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.equipSkillMask;
                if ( !gameObject )
                  goto LABEL_205;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( !gameObject )
                  goto LABEL_205;
                UnityEngine_GameObject__SetActive(gameObject, v108, 0);
                if ( v108 )
                {
                  v38 = this->fields.skillExplanationLabelList;
                  if ( !v38 )
                    goto LABEL_205;
                  if ( !LODWORD(v38->max_length) )
                    goto LABEL_206;
                  v39 = v38->m_Items[0];
                  if ( !v39 )
                    goto LABEL_205;
                  if ( v39->fields.mHeight >= 71 )
                  {
                    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSkillMask;
                    if ( !gameObject )
                      goto LABEL_205;
                    UIWidget__set_height((UIWidget_o *)gameObject, v35 + 39, 0);
                  }
                }
              }
              equipSkillMaskLabel = (UnityEngine_Object_o *)this->fields.equipSkillMaskLabel;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(equipSkillMaskLabel, 0, 0) )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.equipSkillMaskLabel;
                if ( !gameObject )
                  goto LABEL_205;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( !gameObject )
                  goto LABEL_205;
                UnityEngine_GameObject__SetActive(gameObject, v108, 0);
                if ( v108 )
                {
                  v41 = this->fields.skillExplanationLabelList;
                  if ( !v41 )
                    goto LABEL_205;
                  if ( !LODWORD(v41->max_length) )
                    goto LABEL_206;
                  v42 = v41->m_Items[0];
                  if ( !v42 )
                    goto LABEL_205;
                  if ( v42->fields.mHeight >= 71 )
                  {
                    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSkillMaskLabel;
                    if ( !gameObject )
                      goto LABEL_205;
                    v43 = -39 - v35;
                    if ( -39 - v35 < 0 )
                      v43 = -38 - v35;
                    v44 = v43 >> 1;
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
                    TransformHelper__SetLocalPositionY(transform, (float)v44, 0);
                  }
                  v46 = (System_String_o **)&StringLiteral_6430/*"FOLLOWER_GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/;
                  v47 = this->fields.equipSkillMaskLabel;
                  if ( item->fields._IsMyEquip_k__BackingField )
                    v46 = (System_String_o **)&StringLiteral_6983/*"GRAND_BOND_EQUIP_INFO_NORMAL_SKILL_MASK_MESSAGE"*/;
                  v48 = *v46;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v48, 0);
                  if ( !v47 )
                    goto LABEL_205;
                  UILabel__set_text(v47, (System_String_o *)gameObject, 0);
                }
              }
              changeSkillExplanationLabel = (UnityEngine_Object_o *)this->fields.changeSkillExplanationLabel;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              p_explanation = v30;
              if ( UnityEngine_Object__op_Inequality(changeSkillExplanationLabel, 0, 0) )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillExplanationLabel;
                if ( !gameObject )
                  goto LABEL_205;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( !gameObject )
                  goto LABEL_205;
                UnityEngine_GameObject__SetActive(gameObject, v108, 0);
                if ( v108 )
                {
                  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_6995/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/, 0);
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillMaster___);
                  if ( !gameObject )
                    goto LABEL_205;
                  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                             &entity,
                                                             Value,
                                                             (const MethodInfo_3387DE4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)gameObject & 1) != 0 )
                  {
                    if ( !v29 )
                      goto LABEL_205;
                    v29->fields.id = Value;
                    gameObject = (UnityEngine_GameObject_o *)entity;
                    if ( !entity )
                      goto LABEL_205;
                    EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0);
                    v30->klass = (CGThumbnailListItem_c *)EffectExplanation;
                    sub_1C2D434(v30, (int32_t)EffectExplanation, v52, v53);
                    gameObject = (UnityEngine_GameObject_o *)entity;
                    if ( !entity )
                      goto LABEL_205;
                    Name = SkillEntity__getName((SkillEntity_o *)entity, 0);
                    p_title->klass = (CGThumbnailListItem_c *)Name;
                    sub_1C2D434(p_title, (int32_t)Name, v55, v56);
                    v57 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
                    v58 = this->fields.changeSkillExplanationLabel;
                    klass = (System_String_o *)v30->klass;
                    if ( !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
                      v57 = ServantStatusListViewItemDrawEquipSkill_TypeInfo;
                    }
                    gameObject = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                                               v58,
                                                               klass,
                                                               v57->static_fields->DETAIL_FONT_SIZE,
                                                               v57->static_fields->DETAIL_FONT_SIZE,
                                                               0);
                    v60 = this->fields.changeSkillExplanationLabel;
                    if ( !v60 )
                      goto LABEL_205;
                    v61 = this->fields.skillExplanationLabelList;
                    if ( !v61 )
                      goto LABEL_205;
                    if ( !LODWORD(v61->max_length) )
                      goto LABEL_206;
                    v62 = v61->m_Items[0];
                    if ( !v62 )
                      goto LABEL_205;
                    p_explanation = v30;
                    v63 = v36 + v60->fields.mHeight + 64;
                    if ( v62->fields.mHeight >= 71 )
                      v36 = v63 + 13;
                    else
                      v36 = v63;
                  }
                }
              }
              changeSkillTypeLabel = (UnityEngine_Object_o *)this->fields.changeSkillTypeLabel;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(changeSkillTypeLabel, 0, 0);
              v19 = v29;
              if ( ((unsigned __int8)gameObject & 1) != 0 )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillTypeLabel;
                if ( !gameObject )
                  goto LABEL_205;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( !gameObject )
                  goto LABEL_205;
                UnityEngine_GameObject__SetActive(gameObject, v108, 0);
                v65 = this->fields.changeSkillTypeLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_6984/*"GRAND_BOND_EQUIP_SKILL_INFO_ANOTHER_SKILL_HEADER"*/,
                                                           0);
                if ( !v65 )
                  goto LABEL_205;
                UILabel__set_text(v65, (System_String_o *)gameObject, 0);
              }
            }
            else
            {
              p_explanation = v30;
              v19 = v29;
            }
            skillPitch = this->fields.skillPitch;
            if ( v36 >= skillPitch )
              v21 += v36;
            else
              v21 += skillPitch;
          }
        }
      }
    }
    skillBaseList = this->fields.skillBaseList;
    ++v23;
    if ( !skillBaseList )
      goto LABEL_205;
  }
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v71 = y + (float)v21;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !gameObject )
      goto LABEL_205;
    v112.fields.x = x;
    v112.fields.y = v71;
    v112.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v112, 0);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !gameObject )
    goto LABEL_205;
  v72 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)gameObject, v72, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !gameObject )
    goto LABEL_205;
  v73 = v71 == INFINITY ? 0x80000000 : (int)v71;
  UIWidget__set_height((UIWidget_o *)gameObject, v73, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  v74 = v21 >= 0 ? v21 : v21 + 1;
  if ( !gameObject )
    goto LABEL_205;
  v75 = this->fields.titleBasePosition.fields.x;
  v76 = this->fields.titleBasePosition.fields.y;
  v77 = this->fields.titleBasePosition.fields.z;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
  if ( !gameObject
    || (v78 = (float)(v74 >> 1),
        v113.fields.y = v76 + v78,
        v113.fields.x = v75,
        v113.fields.z = v77,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v113, 0),
        (v79 = this->fields.skillBaseList) == 0) )
  {
LABEL_205:
    sub_1C2D6EC(gameObject, v10);
  }
  v80 = this->fields.skillBasePosition.fields.z;
  v81 = this->fields.skillBasePosition.fields.x;
  v82 = 0;
  v83 = this->fields.skillBasePosition.fields.y + v78;
  while ( 1 )
  {
    v84 = v79->max_length;
    if ( (int)v82 >= (int)v84 )
      break;
    if ( (int)v82 >= v16 )
    {
      if ( v82 >= v84 )
        goto LABEL_206;
      gameObject = v79->m_Items[v82];
      if ( !gameObject )
        goto LABEL_205;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    }
    else
    {
      if ( !skillInfoList )
        goto LABEL_205;
      if ( v82 >= LODWORD(skillInfoList->max_length) || v82 >= v84 )
        goto LABEL_206;
      gameObject = v79->m_Items[v82];
      if ( !gameObject )
        goto LABEL_205;
      v85 = skillInfoList->m_Items[v82];
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      v86 = this->fields.skillBaseList;
      if ( !v86 )
        goto LABEL_205;
      if ( v82 >= LODWORD(v86->max_length) )
        goto LABEL_206;
      gameObject = v86->m_Items[v82];
      if ( !gameObject )
        goto LABEL_205;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( !gameObject )
        goto LABEL_205;
      v114.fields.x = v81;
      v114.fields.y = v83;
      v114.fields.z = v80;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v114, 0);
      v87 = this->fields.skillIconList;
      if ( !v87 )
        goto LABEL_205;
      if ( v82 >= LODWORD(v87->max_length) )
        goto LABEL_206;
      if ( !v85 )
        goto LABEL_205;
      gameObject = (UnityEngine_GameObject_o *)v87->m_Items[v82];
      if ( !gameObject )
        goto LABEL_205;
      SkillIconComponent__Set((SkillIconComponent_o *)gameObject, v85->fields.id, 0);
      skillTitleRangeLabelList = this->fields.skillTitleRangeLabelList;
      if ( !skillTitleRangeLabelList )
        goto LABEL_205;
      if ( v82 >= LODWORD(skillTitleRangeLabelList->max_length) )
        goto LABEL_206;
      gameObject = (UnityEngine_GameObject_o *)skillTitleRangeLabelList->m_Items[v82];
      if ( !gameObject )
        goto LABEL_205;
      UIRangeLabel__Set((UIRangeLabel_o *)gameObject, v85->fields.title, 0, 1, 0, 0, 0);
      if ( !v82 )
      {
        gameObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill(item, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v19 )
            goto LABEL_205;
          v89 = v19->fields.id > 0;
        }
        else
        {
          v89 = 0;
        }
        changeSkillIcon = (UnityEngine_Object_o *)this->fields.changeSkillIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(changeSkillIcon, 0, 0) )
        {
          gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillIcon;
          if ( !gameObject )
            goto LABEL_205;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_205;
          UnityEngine_GameObject__SetActive(gameObject, v89, 0);
        }
        changeSkillTitleRangeLabel = (UnityEngine_Object_o *)this->fields.changeSkillTitleRangeLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(changeSkillTitleRangeLabel, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillTitleRangeLabel;
          if ( !gameObject )
            goto LABEL_205;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_205;
          UnityEngine_GameObject__SetActive(gameObject, v89, 0);
        }
        if ( v89 )
        {
          v96 = (UnityEngine_Object_o *)this->fields.changeSkillBase;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v96, 0, 0);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            v97 = this->fields.skillExplanationLabelList;
            if ( !v97 )
              goto LABEL_205;
            if ( !LODWORD(v97->max_length) )
              goto LABEL_206;
            v98 = v97->m_Items[0];
            if ( !v98 )
              goto LABEL_205;
            gameObject = this->fields.changeSkillBase;
            if ( !gameObject )
              goto LABEL_205;
            mHeight = v98->fields.mHeight;
            if ( mHeight >= 71 )
              v100 = -77;
            else
              v100 = -64;
            v101 = v100 - mHeight;
            v102 = UnityEngine_GameObject__get_transform(gameObject, 0);
            TransformHelper__SetLocalPositionY(v102, (float)v101, 0);
          }
          v103 = this->fields.changeSkillExplanationLabel;
          if ( !v103 )
            goto LABEL_205;
          v104 = v103->fields.mHeight;
          v105 = (UnityEngine_Object_o *)this->fields.changeSkillIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v105, 0, 0);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !v19 )
              goto LABEL_205;
            gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillIcon;
            if ( !gameObject )
              goto LABEL_205;
            SkillIconComponent__Set((SkillIconComponent_o *)gameObject, v19->fields.id, 0);
          }
          v106 = (UnityEngine_Object_o *)this->fields.changeSkillTitleRangeLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v83 = v83 - (float)(v104 + 64);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v106, 0, 0);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !v19 )
              goto LABEL_205;
            gameObject = (UnityEngine_GameObject_o *)this->fields.changeSkillTitleRangeLabel;
            if ( !gameObject )
              goto LABEL_205;
            UIRangeLabel__Set((UIRangeLabel_o *)gameObject, (System_String_o *)p_title->klass, 0, 1, 0, 0, 0);
          }
        }
      }
    }
    v90 = this->fields.skillExplanationLabelList;
    if ( !v90 )
      goto LABEL_205;
    if ( v82 >= LODWORD(v90->max_length) )
      goto LABEL_206;
    v91 = v90->m_Items[v82];
    if ( v91 )
    {
      gameObject = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      v92 = v91->fields.mHeight;
      if ( !ServantStatusListViewItemDrawEquipSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquipSkill_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)ServantStatusListViewItemDrawEquipSkill_TypeInfo;
      }
      ++v82;
      v79 = this->fields.skillBaseList;
      v93 = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 4) + v92;
      if ( v93 < this->fields.skillPitch )
        v93 = this->fields.skillPitch;
      v83 = v83 - (float)v93;
      if ( v79 )
        continue;
    }
    goto LABEL_205;
  }
}