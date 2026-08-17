void ServantStatusPossessionSkillComponent___cctor(const MethodInfo *method)
{
  struct ServantStatusPossessionSkillComponent_StaticFields *static_fields; // x8

  if ( (byte_596DF97 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusPossessionSkillComponent_TypeInfo);
    byte_596DF97 = 1;
  }
  static_fields = ServantStatusPossessionSkillComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SkillListMax = 0x6900000002LL;
  *(_QWORD *)&static_fields->DetailFontSize = 0xC1E0000000000012LL;
  *(_QWORD *)&static_fields->CondTitleMaxWidth = 0x280000021CLL;
}


void ServantStatusPossessionSkillComponent___ctor(
        ServantStatusPossessionSkillComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusPossessionSkillComponent_c *v4; // x0
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596DF96 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusPossessionSkillComponent_EachSkill___TypeInfo);
    sub_2213A60(&ServantStatusPossessionSkillComponent_TypeInfo);
    byte_596DF96 = 1;
  }
  v4 = ServantStatusPossessionSkillComponent_TypeInfo;
  if ( !*(&ServantStatusPossessionSkillComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusPossessionSkillComponent_TypeInfo, method, v2);
    v4 = ServantStatusPossessionSkillComponent_TypeInfo;
  }
  v5 = (struct ServantStatusPossessionSkillComponent_EachSkill_array *)sub_2213B20(
                                                                         ServantStatusPossessionSkillComponent_EachSkill___TypeInfo,
                                                                         v4->static_fields->SkillListMax);
  this->fields.skillList = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.skillList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ServantStatusPossessionSkillComponent__Awake(
        ServantStatusPossessionSkillComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantStatusPossessionSkillComponent__Set(
        ServantStatusPossessionSkillComponent_o *this,
        SkillInfo_o *info,
        ServantSkillAddEntity_o *servantSkillAddEntity,
        ServantLimitAddEntity_o *servantLimitAddEntity,
        const MethodInfo *method)
{
  ServantStatusPossessionSkillComponent_o *v8; // x22
  ServantStatusPossessionSkillComponent_o *chargeDataLabel; // x24
  ServantStatusPossessionSkillComponent_o *v10; // x1
  __int64 v11; // x2
  unsigned __int64 v12; // x24
  int32_t v13; // w27
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v14; // x8
  ServantStatusPossessionSkillComponent_EachSkill_o *v15; // x8
  struct ServantStatusPossessionSkillComponent_EachSkill_array *skillList; // x8
  ServantStatusPossessionSkillComponent_EachSkill_o *v17; // x8
  const MethodInfo *v18; // x6
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v19; // x8
  struct System_Int32_array *skillIds; // x9
  struct System_String_array *titles; // x10
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v22; // x8
  ServantStatusPossessionSkillComponent_EachSkill_o *v23; // x23
  System_String_o *CondLabelColor; // x0
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  System_String_o *CondSpriteColor; // x0
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v30; // x8
  ServantStatusPossessionSkillComponent_EachSkill_o *v31; // x8
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v32; // x8
  unsigned __int64 max_length_low; // x9
  ServantStatusPossessionSkillComponent_EachSkill_o *v34; // x10
  ServantStatusPossessionSkillComponent_EachSkill_o *v35; // x8
  const MethodInfo *v36; // x6
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v37; // x8
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v38; // x8
  ServantStatusPossessionSkillComponent_EachSkill_o *v39; // x8
  ServantStatusPossessionSkillComponent_EachSkill_o *v40; // x8
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v46; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  v8 = this;
  if ( (byte_596DF95 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusPossessionSkillComponent_TypeInfo);
    this = (ServantStatusPossessionSkillComponent_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DF95 = 1;
  }
  if ( !info )
    goto LABEL_65;
  if ( info->fields.lv < 0 || info->fields.charge < 0 )
  {
    this = (ServantStatusPossessionSkillComponent_o *)v8->fields.chargeTitleSprite;
    if ( this )
    {
      this = (ServantStatusPossessionSkillComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (ServantStatusPossessionSkillComponent_o *)v8->fields.chargeDataLabel;
        if ( this )
        {
          v10 = (ServantStatusPossessionSkillComponent_o *)StringLiteral_1/*""*/;
          goto LABEL_14;
        }
      }
    }
LABEL_65:
    sub_2213CDC(this, info);
  }
  this = (ServantStatusPossessionSkillComponent_o *)v8->fields.chargeTitleSprite;
  if ( !this )
    goto LABEL_65;
  this = (ServantStatusPossessionSkillComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
  if ( !this )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  chargeDataLabel = (ServantStatusPossessionSkillComponent_o *)v8->fields.chargeDataLabel;
  this = (ServantStatusPossessionSkillComponent_o *)System_Int32__ToString((int)info + 24, 0);
  if ( !chargeDataLabel )
    goto LABEL_65;
  v10 = this;
  this = chargeDataLabel;
LABEL_14:
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v10, 0);
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    this = (ServantStatusPossessionSkillComponent_o *)ServantStatusPossessionSkillComponent_TypeInfo;
    if ( !*(&ServantStatusPossessionSkillComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusPossessionSkillComponent_TypeInfo, info, v11);
      this = (ServantStatusPossessionSkillComponent_o *)ServantStatusPossessionSkillComponent_TypeInfo;
    }
    if ( (__int64)v12 >= (__int64)this[2].fields.chargeTitleSprite->klass )
      break;
    if ( servantSkillAddEntity
      && (this = (ServantStatusPossessionSkillComponent_o *)BasicHelper__IsNullOrEmpty(
                                                              (System_Collections_ICollection_o *)servantSkillAddEntity->fields.skillIds,
                                                              0),
          ((unsigned __int8)this & 1) == 0) )
    {
      skillList = v8->fields.skillList;
      if ( !skillList )
        goto LABEL_65;
      if ( v12 >= LODWORD(skillList->max_length) )
        goto LABEL_66;
      v17 = skillList->m_Items[v12];
      if ( !v17 )
        goto LABEL_65;
      this = (ServantStatusPossessionSkillComponent_o *)v17->fields.baseObject;
      if ( !this )
        goto LABEL_65;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v19 = v8->fields.skillList;
      if ( !v19 )
        goto LABEL_65;
      if ( v12 >= LODWORD(v19->max_length) )
        goto LABEL_66;
      skillIds = servantSkillAddEntity->fields.skillIds;
      if ( !skillIds )
        goto LABEL_65;
      if ( v12 >= LODWORD(skillIds->max_length) )
        goto LABEL_66;
      titles = servantSkillAddEntity->fields.titles;
      if ( !titles )
        goto LABEL_65;
      if ( v12 >= LODWORD(titles->max_length) )
        goto LABEL_66;
      this = (ServantStatusPossessionSkillComponent_o *)v19->m_Items[v12];
      if ( !this )
        goto LABEL_65;
      ServantStatusPossessionSkillComponent_EachSkill__Set(
        (ServantStatusPossessionSkillComponent_EachSkill_o *)this,
        info,
        skillIds->m_Items[v12],
        servantLimitAddEntity,
        1,
        titles->m_Items[v12],
        v18);
      v22 = v8->fields.skillList;
      if ( !v22 )
        goto LABEL_65;
      if ( v12 >= LODWORD(v22->max_length) )
        goto LABEL_66;
      v23 = v22->m_Items[v12];
      CondLabelColor = ServantSkillAddEntity__GetCondLabelColor(servantSkillAddEntity, 0);
      v41.fields.r = 0.0;
      v41.fields.g = 0.0;
      v41.fields.b = 0.0;
      v41.fields.a = 1.0;
      v42 = ColorHelper__ParseColorCode_51166816(CondLabelColor, v41, 0);
      r = v42.fields.r;
      g = v42.fields.g;
      b = v42.fields.b;
      a = v42.fields.a;
      CondSpriteColor = ServantSkillAddEntity__GetCondSpriteColor(servantSkillAddEntity, 0);
      v43.fields.r = 1.0;
      v43.fields.g = 1.0;
      v43.fields.b = 1.0;
      v43.fields.a = 1.0;
      v44 = ColorHelper__ParseColorCode_51166816(CondSpriteColor, v43, 0);
      if ( !v23 )
        goto LABEL_65;
      v46 = v44;
      v45.fields.r = r;
      v45.fields.g = g;
      v45.fields.b = b;
      v45.fields.a = a;
      ServantStatusPossessionSkillComponent_EachSkill__SetCondColor(v23, v45, v46, (const MethodInfo *)info);
      v30 = v8->fields.skillList;
      if ( !v30 )
        goto LABEL_65;
      if ( v12 >= LODWORD(v30->max_length) )
        goto LABEL_66;
      v31 = v30->m_Items[v12];
      if ( !v31 )
        goto LABEL_65;
      GameObjectExtensions__SetLocalPositionY(v31->fields.baseObject, (float)-v13, 0);
      v32 = v8->fields.skillList;
      if ( !v32 )
        goto LABEL_65;
      max_length_low = LODWORD(v32->max_length);
      if ( v12 >= max_length_low )
        goto LABEL_66;
      v34 = v32->m_Items[v12];
      if ( !v34 )
        goto LABEL_65;
    }
    else
    {
      v14 = v8->fields.skillList;
      if ( v12 )
      {
        if ( !v14 )
          goto LABEL_65;
        if ( v12 >= LODWORD(v14->max_length) )
          goto LABEL_66;
        v15 = v14->m_Items[v12];
        if ( !v15 )
          goto LABEL_65;
        this = (ServantStatusPossessionSkillComponent_o *)v15->fields.baseObject;
        if ( !this )
          goto LABEL_65;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        goto LABEL_63;
      }
      if ( !v14 )
        goto LABEL_65;
      if ( !LODWORD(v14->max_length) )
LABEL_66:
        sub_2213CE4(this);
      v35 = v14->m_Items[0];
      if ( !v35 )
        goto LABEL_65;
      this = (ServantStatusPossessionSkillComponent_o *)v35->fields.baseObject;
      if ( !this )
        goto LABEL_65;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v37 = v8->fields.skillList;
      if ( !v37 )
        goto LABEL_65;
      if ( !LODWORD(v37->max_length) )
        goto LABEL_66;
      this = (ServantStatusPossessionSkillComponent_o *)v37->m_Items[0];
      if ( !this )
        goto LABEL_65;
      ServantStatusPossessionSkillComponent_EachSkill__Set(
        (ServantStatusPossessionSkillComponent_EachSkill_o *)this,
        info,
        info->fields.id,
        servantLimitAddEntity,
        0,
        (System_String_o *)StringLiteral_1/*""*/,
        v36);
      v38 = v8->fields.skillList;
      if ( !v38 )
        goto LABEL_65;
      if ( !LODWORD(v38->max_length) )
        goto LABEL_66;
      v39 = v38->m_Items[0];
      if ( !v39 )
        goto LABEL_65;
      GameObjectExtensions__SetLocalPositionY(v39->fields.baseObject, (float)-v13, 0);
      v32 = v8->fields.skillList;
      if ( !v32 )
        goto LABEL_65;
      max_length_low = LODWORD(v32->max_length);
      if ( !LODWORD(v32->max_length) )
        goto LABEL_66;
      v34 = v32->m_Items[0];
      if ( !v34 )
        goto LABEL_65;
    }
    if ( v12 >= max_length_low )
      goto LABEL_66;
    v40 = v32->m_Items[v12];
    if ( !v40 )
      goto LABEL_65;
    v13 += v34->fields._Height_k__BackingField;
    v8->fields._IsNeedAddAdjust_k__BackingField = v40->fields._IsNeedAddAdjust_k__BackingField;
LABEL_63:
    ++v12;
  }
  v8->fields._Height_k__BackingField = v13;
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusPossessionSkillComponent__SetActive(
        ServantStatusPossessionSkillComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  baseObject = this->fields.baseObject;
  if ( !baseObject )
    sub_2213CDC(0, flag);
  UnityEngine_GameObject__SetActive(baseObject, flag, 0);
}


int32_t ServantStatusPossessionSkillComponent__get_Height(
        ServantStatusPossessionSkillComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._Height_k__BackingField;
}


bool ServantStatusPossessionSkillComponent__get_IsNeedAddAdjust(
        ServantStatusPossessionSkillComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._IsNeedAddAdjust_k__BackingField;
}


void ServantStatusPossessionSkillComponent__set_Height(
        ServantStatusPossessionSkillComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Height_k__BackingField = value;
}


void ServantStatusPossessionSkillComponent__set_IsNeedAddAdjust(
        ServantStatusPossessionSkillComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNeedAddAdjust_k__BackingField = value;
}


void ServantStatusPossessionSkillComponent_EachSkill___ctor(
        ServantStatusPossessionSkillComponent_EachSkill_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusPossessionSkillComponent_EachSkill__Set(
        ServantStatusPossessionSkillComponent_EachSkill_o *this,
        SkillInfo_o *info,
        int32_t skillId,
        ServantLimitAddEntity_o *servantLimitAddEntity,
        bool multiFlg,
        System_String_o *condTitle,
        const MethodInfo *method)
{
  UILabel_o *nameLabel; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int lv; // w2
  float v17; // s8
  System_String_o *OverwriteSkillName_49725228; // x0
  int32_t id; // w8
  System_String_o *v20; // x0
  System_String_o *v21; // x8
  _BOOL4 isUse; // w9
  __int64 v23; // x1
  __int64 v24; // x2
  UILabel_o *explanationLabel; // x23
  System_String_o *v26; // x24
  ServantStatusPossessionSkillComponent_c *v27; // x0
  __int64 v28; // x2
  struct UILabel_o *v29; // x8
  ServantStatusPossessionSkillComponent_c *v30; // x0
  int32_t mHeight; // w10
  struct ServantStatusPossessionSkillComponent_StaticFields *static_fields; // x9
  int32_t SkillPitch; // w8
  int32_t v34; // w23
  int v35; // w9
  struct ServantSkillStrengthStatus_o **p_strengthStatus; // x23
  UnityEngine_Object_o *strengthStatus; // x24
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *PATH; // x24
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  UnityEngine_Vector2Int_o v51; // x6
  __int64 v52; // x1
  __int64 v53; // x2
  UnityEngine_Object_o *v54; // x22
  __int64 v55; // x1
  __int64 v56; // x2
  UnityEngine_Object_o *v57; // x22
  __int64 v58; // x2
  UILabel_o *condLabel; // x20
  __int64 v60; // x1
  __int64 v61; // x2
  int32_t Height_k__BackingField; // w20
  float MultiSkillPosY; // s0
  int v64; // w21
  int v65; // w8
  System_String_o *explanation; // [xsp+10h] [xbp-70h] BYREF
  System_String_o *title; // [xsp+18h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596DF98 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantSkillStrengthStatus_TypeInfo);
    sub_2213A60(&ServantStatusPossessionSkillComponent_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DF98 = 1;
  }
  nameLabel = this->fields.nameLabel;
  entity = 0;
  explanation = 0;
  title = 0;
  if ( !nameLabel )
    goto LABEL_88;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.explanationLabel;
  if ( !nameLabel )
    goto LABEL_88;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.condLabel;
  if ( !nameLabel )
    goto LABEL_88;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = (UILabel_o *)this->fields.condSprite;
  if ( !nameLabel )
    goto LABEL_88;
  nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0);
  if ( !nameLabel )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
  nameLabel = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !nameLabel )
    goto LABEL_88;
  nameLabel = (UILabel_o *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)nameLabel,
                             &entity,
                             skillId,
                             (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)nameLabel & 1) == 0 )
    return;
  if ( !info )
    goto LABEL_88;
  lv = info->fields.lv;
  if ( lv < 0 )
    v17 = 0.5;
  else
    v17 = 1.0;
  if ( !servantLimitAddEntity
    || (OverwriteSkillName_49725228 = ServantLimitAddEntity__GetOverwriteSkillName_49725228(
                                        servantLimitAddEntity,
                                        skillId,
                                        lv,
                                        info->fields.title,
                                        0)) == 0 )
  {
    OverwriteSkillName_49725228 = info->fields.title;
  }
  id = info->fields.id;
  explanation = info->fields.explanation;
  title = OverwriteSkillName_49725228;
  if ( id != skillId )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_88;
    SkillEntity__GetEffectExplanation((SkillEntity_o *)entity, &title, &explanation, info->fields.lv, 0, 0);
    if ( servantLimitAddEntity )
      v20 = ServantLimitAddEntity__GetOverwriteSkillName_49725228(
              servantLimitAddEntity,
              skillId,
              info->fields.lv,
              title,
              0);
    else
      v20 = 0;
    v21 = title;
    isUse = info->fields.isUse;
    if ( v20 )
      v21 = v20;
    title = v21;
    if ( !isUse )
      explanation = info->fields.explanation;
  }
  nameLabel = (UILabel_o *)this->fields.icon;
  if ( !nameLabel )
    goto LABEL_88;
  SkillIconComponent__Set_48067596((SkillIconComponent_o *)nameLabel, skillId, info->fields.lv, 0);
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_88;
  UILabel__set_text(nameLabel, title, 0);
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_88;
  v69.fields.r = v17;
  v69.fields.g = v17;
  v69.fields.b = v17;
  v69.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)nameLabel, v69, 0);
  nameLabel = this->fields.explanationLabel;
  if ( !nameLabel )
    goto LABEL_88;
  v70.fields.r = v17;
  v70.fields.g = v17;
  v70.fields.b = v17;
  v70.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)nameLabel, v70, 0);
  explanationLabel = this->fields.explanationLabel;
  v26 = explanation;
  v27 = ServantStatusPossessionSkillComponent_TypeInfo;
  if ( !*(&ServantStatusPossessionSkillComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusPossessionSkillComponent_TypeInfo, v23, v24);
    v27 = ServantStatusPossessionSkillComponent_TypeInfo;
  }
  nameLabel = (UILabel_o *)WrapControlText__textBBCodeAdjust(
                             explanationLabel,
                             v26,
                             v27->static_fields->DetailFontSize,
                             v27->static_fields->DetailFontSize,
                             0);
  v29 = this->fields.explanationLabel;
  if ( !v29 )
    goto LABEL_88;
  v30 = ServantStatusPossessionSkillComponent_TypeInfo;
  mHeight = v29->fields.mHeight;
  static_fields = ServantStatusPossessionSkillComponent_TypeInfo->static_fields;
  SkillPitch = static_fields->SkillPitch;
  v34 = static_fields->ExplanationLabelAdjustHeight + mHeight;
  if ( v34 >= SkillPitch )
  {
    SkillPitch = static_fields->ExplanationLabelAdjustHeight + mHeight;
  }
  else if ( !*(&ServantStatusPossessionSkillComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusPossessionSkillComponent_TypeInfo, info, v28);
    v30 = ServantStatusPossessionSkillComponent_TypeInfo;
    SkillPitch = ServantStatusPossessionSkillComponent_TypeInfo->static_fields->SkillPitch;
  }
  v35 = *(&v30->_2.cctor_finished + 1);
  this->fields._Height_k__BackingField = SkillPitch;
  if ( !v35 )
  {
    j_il2cpp_runtime_class_init_0(v30, info, v28);
    v30 = ServantStatusPossessionSkillComponent_TypeInfo;
  }
  if ( v34 - v30->static_fields->SkillPitch >= 11 )
    this->fields._IsNeedAddAdjust_k__BackingField = 1;
  if ( (info->fields.lv & 0x80000000) == 0 )
  {
    p_strengthStatus = &this->fields.strengthStatus;
    strengthStatus = (UnityEngine_Object_o *)this->fields.strengthStatus;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, info, v28);
    if ( UnityEngine_Object__op_Inequality(strengthStatus, 0, 0) )
    {
      nameLabel = (UILabel_o *)*p_strengthStatus;
      if ( !*p_strengthStatus )
        goto LABEL_88;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)nameLabel,
                                             0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39, v40);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
    }
    if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, info, v38);
    nameLabel = this->fields.nameLabel;
    if ( nameLabel )
    {
      PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)nameLabel, 0);
      nameLabel = (UILabel_o *)BaseMonoBehaviour__CreateObjectStatic(PATH, transform, 0, 0);
      if ( nameLabel )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)nameLabel,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        *p_strengthStatus = (struct ServantSkillStrengthStatus_o *)Component_object;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.strengthStatus,
          (int32_t)Component_object,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        nameLabel = (UILabel_o *)*p_strengthStatus;
        if ( *p_strengthStatus )
        {
          v51 = (UnityEngine_Vector2Int_o)0x1600000018LL;
          ServantSkillStrengthStatus__Set(
            (ServantSkillStrengthStatus_o *)nameLabel,
            this->fields.nameLabel,
            info->fields.strengthStatus,
            info->fields.skillRecord,
            24,
            1,
            v51,
            360,
            0,
            0);
          goto LABEL_65;
        }
      }
    }
LABEL_88:
    sub_2213CDC(nameLabel, info);
  }
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_88;
  UILabel__SetCondensedScale(nameLabel, 360, 0, 0);
  v54 = (UnityEngine_Object_o *)this->fields.strengthStatus;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52, v53);
  if ( UnityEngine_Object__op_Inequality(v54, 0, 0) )
  {
    nameLabel = (UILabel_o *)this->fields.strengthStatus;
    if ( !nameLabel )
      goto LABEL_88;
    v57 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55, v56);
    UnityEngine_Object__Destroy_83459800(v57, 0);
  }
LABEL_65:
  nameLabel = (UILabel_o *)this->fields.condSprite;
  if ( !multiFlg )
  {
    if ( nameLabel )
    {
      nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0);
      if ( nameLabel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0);
        nameLabel = this->fields.condLabel;
        if ( nameLabel )
        {
          UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
          return;
        }
      }
    }
    goto LABEL_88;
  }
  if ( !nameLabel )
    goto LABEL_88;
  nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0);
  if ( !nameLabel )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 1, 0);
  nameLabel = this->fields.condLabel;
  if ( !nameLabel )
    goto LABEL_88;
  UILabel__set_text(nameLabel, condTitle, 0);
  nameLabel = (UILabel_o *)ServantStatusPossessionSkillComponent_TypeInfo;
  condLabel = this->fields.condLabel;
  if ( !*(&ServantStatusPossessionSkillComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantStatusPossessionSkillComponent_TypeInfo, info, v58);
  if ( !condLabel )
    goto LABEL_88;
  UILabel__SetCondensedScale(
    condLabel,
    ServantStatusPossessionSkillComponent_TypeInfo->static_fields->CondTitleMaxWidth,
    0,
    0);
  GameObjectExtensions__SetLocalPositionY(
    this->fields.skillObject,
    ServantStatusPossessionSkillComponent_TypeInfo->static_fields->MultiSkillPosY,
    0);
  Height_k__BackingField = this->fields._Height_k__BackingField;
  MultiSkillPosY = ServantStatusPossessionSkillComponent_TypeInfo->static_fields->MultiSkillPosY;
  if ( MultiSkillPosY == INFINITY )
    v64 = 0x80000000;
  else
    v64 = (int)MultiSkillPosY;
  if ( !byte_596AEF6 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596AEF6 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v60, v61);
  if ( v64 >= 0 )
    v65 = v64;
  else
    v65 = -v64;
  this->fields._Height_k__BackingField = v65 + Height_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusPossessionSkillComponent_EachSkill__SetActive(
        ServantStatusPossessionSkillComponent_EachSkill_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  baseObject = this->fields.baseObject;
  if ( !baseObject )
    sub_2213CDC(0, flag);
  UnityEngine_GameObject__SetActive(baseObject, flag, 0);
}


void ServantStatusPossessionSkillComponent_EachSkill__SetCondColor(
        ServantStatusPossessionSkillComponent_EachSkill_o *this,
        UnityEngine_Color_o labelColor,
        UnityEngine_Color_o spriteColor,
        const MethodInfo *method)
{
  UIWidget_o *condSprite; // x0
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  condSprite = (UIWidget_o *)this->fields.condSprite;
  if ( !condSprite
    || (a = labelColor.fields.a,
        b = labelColor.fields.b,
        g = labelColor.fields.g,
        r = labelColor.fields.r,
        UIWidget__set_color(condSprite, spriteColor, 0),
        (condSprite = (UIWidget_o *)this->fields.condLabel) == 0) )
  {
    sub_2213CDC(condSprite, method);
  }
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UIWidget__set_color(condSprite, v10, 0);
}


void ServantStatusPossessionSkillComponent_EachSkill__SetPositionY(
        ServantStatusPossessionSkillComponent_EachSkill_o *this,
        float pos,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPositionY(this->fields.baseObject, pos, 0);
}


int32_t ServantStatusPossessionSkillComponent_EachSkill__get_Height(
        ServantStatusPossessionSkillComponent_EachSkill_o *this,
        const MethodInfo *method)
{
  return this->fields._Height_k__BackingField;
}


bool ServantStatusPossessionSkillComponent_EachSkill__get_IsNeedAddAdjust(
        ServantStatusPossessionSkillComponent_EachSkill_o *this,
        const MethodInfo *method)
{
  return this->fields._IsNeedAddAdjust_k__BackingField;
}


void ServantStatusPossessionSkillComponent_EachSkill__set_Height(
        ServantStatusPossessionSkillComponent_EachSkill_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Height_k__BackingField = value;
}


void ServantStatusPossessionSkillComponent_EachSkill__set_IsNeedAddAdjust(
        ServantStatusPossessionSkillComponent_EachSkill_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNeedAddAdjust_k__BackingField = value;
}