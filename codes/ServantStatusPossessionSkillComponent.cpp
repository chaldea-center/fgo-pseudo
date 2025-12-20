void ServantStatusPossessionSkillComponent___cctor(const MethodInfo *method)
{
  struct ServantStatusPossessionSkillComponent_StaticFields *static_fields; // x8

  if ( (byte_4D2A4F4 & 1) == 0 )
  {
    sub_1C94098(&ServantStatusPossessionSkillComponent_TypeInfo);
    byte_4D2A4F4 = 1;
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
  ServantStatusPossessionSkillComponent_c *v3; // x0
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D2A4F3 & 1) == 0 )
  {
    sub_1C94098(&ServantStatusPossessionSkillComponent_EachSkill___TypeInfo);
    sub_1C94098(&ServantStatusPossessionSkillComponent_TypeInfo);
    byte_4D2A4F3 = 1;
  }
  v3 = ServantStatusPossessionSkillComponent_TypeInfo;
  if ( !ServantStatusPossessionSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusPossessionSkillComponent_TypeInfo);
    v3 = ServantStatusPossessionSkillComponent_TypeInfo;
  }
  v4 = (struct ServantStatusPossessionSkillComponent_EachSkill_array *)sub_1C94140(
                                                                         ServantStatusPossessionSkillComponent_EachSkill___TypeInfo,
                                                                         v3->static_fields->SkillListMax);
  this->fields.skillList = v4;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.skillList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
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
  unsigned __int64 v11; // x26
  int32_t v12; // w24
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v13; // x8
  ServantStatusPossessionSkillComponent_EachSkill_o *v14; // x8
  struct ServantStatusPossessionSkillComponent_EachSkill_array *skillList; // x8
  ServantStatusPossessionSkillComponent_EachSkill_o *v16; // x8
  const MethodInfo *v17; // x6
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v18; // x8
  struct System_Int32_array *skillIds; // x9
  struct System_String_array *titles; // x10
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v21; // x8
  ServantStatusPossessionSkillComponent_EachSkill_o *v22; // x23
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v27; // x8
  ServantStatusPossessionSkillComponent_EachSkill_o *v28; // x8
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v29; // x8
  unsigned __int64 max_length_low; // x9
  ServantStatusPossessionSkillComponent_EachSkill_o *v31; // x10
  const MethodInfo *v32; // x6
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v33; // x8
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v34; // x8
  ServantStatusPossessionSkillComponent_EachSkill_o *v35; // x8
  ServantStatusPossessionSkillComponent_EachSkill_o *v36; // x8
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v41; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  v8 = this;
  if ( (byte_4D2A4F2 & 1) == 0 )
  {
    sub_1C94098(&ServantStatusPossessionSkillComponent_TypeInfo);
    this = (ServantStatusPossessionSkillComponent_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2A4F2 = 1;
  }
  if ( !info )
    goto LABEL_62;
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
LABEL_62:
    sub_1C942F0(this, info);
  }
  this = (ServantStatusPossessionSkillComponent_o *)v8->fields.chargeTitleSprite;
  if ( !this )
    goto LABEL_62;
  this = (ServantStatusPossessionSkillComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
  if ( !this )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  chargeDataLabel = (ServantStatusPossessionSkillComponent_o *)v8->fields.chargeDataLabel;
  this = (ServantStatusPossessionSkillComponent_o *)System_Int32__ToString((int)info + 24, 0);
  if ( !chargeDataLabel )
    goto LABEL_62;
  v10 = this;
  this = chargeDataLabel;
LABEL_14:
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v10, 0);
  v11 = 0;
  v12 = 0;
  while ( 1 )
  {
    this = (ServantStatusPossessionSkillComponent_o *)ServantStatusPossessionSkillComponent_TypeInfo;
    if ( !ServantStatusPossessionSkillComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusPossessionSkillComponent_TypeInfo);
      this = (ServantStatusPossessionSkillComponent_o *)ServantStatusPossessionSkillComponent_TypeInfo;
    }
    if ( (__int64)v11 >= (__int64)this[2].fields.chargeTitleSprite->klass )
      break;
    if ( servantSkillAddEntity
      && (this = (ServantStatusPossessionSkillComponent_o *)BasicHelper__IsNullOrEmpty(
                                                              (System_Collections_ICollection_o *)servantSkillAddEntity->fields.skillIds,
                                                              0),
          ((unsigned __int8)this & 1) == 0) )
    {
      skillList = v8->fields.skillList;
      if ( !skillList )
        goto LABEL_62;
      if ( v11 >= LODWORD(skillList->max_length) )
LABEL_63:
        sub_1C942F8(this);
      v16 = skillList->m_Items[v11];
      if ( !v16 )
        goto LABEL_62;
      this = (ServantStatusPossessionSkillComponent_o *)v16->fields.baseObject;
      if ( !this )
        goto LABEL_62;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v18 = v8->fields.skillList;
      if ( !v18 )
        goto LABEL_62;
      if ( v11 >= LODWORD(v18->max_length) )
        goto LABEL_63;
      skillIds = servantSkillAddEntity->fields.skillIds;
      if ( !skillIds )
        goto LABEL_62;
      if ( v11 >= LODWORD(skillIds->max_length) )
        goto LABEL_63;
      titles = servantSkillAddEntity->fields.titles;
      if ( !titles )
        goto LABEL_62;
      if ( v11 >= LODWORD(titles->max_length) )
        goto LABEL_63;
      this = (ServantStatusPossessionSkillComponent_o *)v18->m_Items[v11];
      if ( !this )
        goto LABEL_62;
      ServantStatusPossessionSkillComponent_EachSkill__Set(
        (ServantStatusPossessionSkillComponent_EachSkill_o *)this,
        info,
        skillIds->m_Items[v11],
        servantLimitAddEntity,
        1,
        titles->m_Items[v11],
        v17);
      v21 = v8->fields.skillList;
      if ( !v21 )
        goto LABEL_62;
      if ( v11 >= LODWORD(v21->max_length) )
        goto LABEL_63;
      v22 = v21->m_Items[v11];
      v37.fields.r = 0.0;
      v37.fields.g = 0.0;
      v37.fields.b = 0.0;
      v37.fields.a = 1.0;
      CondLabelColor = ServantSkillAddEntity__GetCondLabelColor(servantSkillAddEntity, v37, 0);
      r = CondLabelColor.fields.r;
      g = CondLabelColor.fields.g;
      b = CondLabelColor.fields.b;
      a = CondLabelColor.fields.a;
      CondLabelColor.fields.r = 1.0;
      CondLabelColor.fields.g = 1.0;
      CondLabelColor.fields.b = 1.0;
      CondLabelColor.fields.a = 1.0;
      CondSpriteColor = ServantSkillAddEntity__GetCondSpriteColor(servantSkillAddEntity, CondLabelColor, 0);
      if ( !v22 )
        goto LABEL_62;
      v41 = CondSpriteColor;
      v40.fields.r = r;
      v40.fields.g = g;
      v40.fields.b = b;
      v40.fields.a = a;
      ServantStatusPossessionSkillComponent_EachSkill__SetCondColor(v22, v40, v41, (const MethodInfo *)info);
      v27 = v8->fields.skillList;
      if ( !v27 )
        goto LABEL_62;
      if ( v11 >= LODWORD(v27->max_length) )
        goto LABEL_63;
      v28 = v27->m_Items[v11];
      if ( !v28 )
        goto LABEL_62;
      GameObjectExtensions__SetLocalPositionY(v28->fields.baseObject, (float)-v12, 0);
      v29 = v8->fields.skillList;
      if ( !v29 )
        goto LABEL_62;
      max_length_low = LODWORD(v29->max_length);
      if ( v11 >= max_length_low )
        goto LABEL_63;
      v31 = v29->m_Items[v11];
      if ( !v31 )
        goto LABEL_62;
    }
    else
    {
      v13 = v8->fields.skillList;
      if ( !v13 )
        goto LABEL_62;
      if ( v11 >= LODWORD(v13->max_length) )
        goto LABEL_63;
      v14 = v13->m_Items[v11];
      if ( !v14 )
        goto LABEL_62;
      this = (ServantStatusPossessionSkillComponent_o *)v14->fields.baseObject;
      if ( v11 )
      {
        if ( !this )
          goto LABEL_62;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        goto LABEL_60;
      }
      if ( !this )
        goto LABEL_62;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v33 = v8->fields.skillList;
      if ( !v33 )
        goto LABEL_62;
      if ( !LODWORD(v33->max_length) )
        goto LABEL_63;
      this = (ServantStatusPossessionSkillComponent_o *)v33->m_Items[0];
      if ( !this )
        goto LABEL_62;
      ServantStatusPossessionSkillComponent_EachSkill__Set(
        (ServantStatusPossessionSkillComponent_EachSkill_o *)this,
        info,
        info->fields.id,
        servantLimitAddEntity,
        0,
        (System_String_o *)StringLiteral_1/*""*/,
        v32);
      v34 = v8->fields.skillList;
      if ( !v34 )
        goto LABEL_62;
      if ( !LODWORD(v34->max_length) )
        goto LABEL_63;
      v35 = v34->m_Items[0];
      if ( !v35 )
        goto LABEL_62;
      GameObjectExtensions__SetLocalPositionY(v35->fields.baseObject, (float)-v12, 0);
      v29 = v8->fields.skillList;
      if ( !v29 )
        goto LABEL_62;
      max_length_low = LODWORD(v29->max_length);
      if ( !LODWORD(v29->max_length) )
        goto LABEL_63;
      v31 = v29->m_Items[0];
      if ( !v31 )
        goto LABEL_62;
    }
    if ( v11 >= max_length_low )
      goto LABEL_63;
    v36 = v29->m_Items[v11];
    if ( !v36 )
      goto LABEL_62;
    v12 += v31->fields._Height_k__BackingField;
    v8->fields._IsNeedAddAdjust_k__BackingField = v36->fields._IsNeedAddAdjust_k__BackingField;
LABEL_60:
    ++v11;
  }
  v8->fields._Height_k__BackingField = v12;
}


void ServantStatusPossessionSkillComponent__SetActive(
        ServantStatusPossessionSkillComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  baseObject = this->fields.baseObject;
  if ( !baseObject )
    sub_1C942F0(0, flag);
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
  int lv; // w2
  float v15; // s8
  System_String_o *OverwriteSkillName_43476768; // x0
  System_String_o *v17; // x0
  System_String_o *v18; // x8
  UILabel_o *explanationLabel; // x23
  System_String_o *v20; // x24
  ServantStatusPossessionSkillComponent_c *v21; // x0
  struct UILabel_o *v22; // x8
  ServantStatusPossessionSkillComponent_c *v23; // x0
  int32_t mHeight; // w10
  struct ServantStatusPossessionSkillComponent_StaticFields *static_fields; // x9
  int32_t SkillPitch; // w8
  int32_t v27; // w23
  struct ServantSkillStrengthStatus_o **p_strengthStatus; // x23
  UnityEngine_Object_o *strengthStatus; // x24
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *PATH; // x24
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  UnityEngine_Vector2Int_o v40; // x6
  UnityEngine_Object_o *v41; // x22
  UnityEngine_Object_o *v42; // x22
  UILabel_o *condLabel; // x20
  int32_t Height_k__BackingField; // w20
  float MultiSkillPosY; // s0
  int v46; // w21
  int v47; // w8
  System_String_o *explanation; // [xsp+10h] [xbp-70h] BYREF
  System_String_o *title; // [xsp+18h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2A4F5 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ServantSkillStrengthStatus_TypeInfo);
    sub_1C94098(&ServantStatusPossessionSkillComponent_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2A4F5 = 1;
  }
  entity = 0;
  explanation = 0;
  title = 0;
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_86;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.explanationLabel;
  if ( !nameLabel )
    goto LABEL_86;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = this->fields.condLabel;
  if ( !nameLabel )
    goto LABEL_86;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  nameLabel = (UILabel_o *)this->fields.condSprite;
  if ( !nameLabel )
    goto LABEL_86;
  nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0);
  if ( !nameLabel )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  nameLabel = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !nameLabel )
    goto LABEL_86;
  nameLabel = (UILabel_o *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)nameLabel,
                             &entity,
                             skillId,
                             (const MethodInfo_345B50C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)nameLabel & 1) == 0 )
    return;
  if ( !info )
    goto LABEL_86;
  lv = info->fields.lv;
  if ( lv < 0 )
    v15 = 0.5;
  else
    v15 = 1.0;
  if ( !servantLimitAddEntity
    || (OverwriteSkillName_43476768 = ServantLimitAddEntity__GetOverwriteSkillName_43476768(
                                        servantLimitAddEntity,
                                        skillId,
                                        lv,
                                        info->fields.title,
                                        0)) == 0 )
  {
    OverwriteSkillName_43476768 = info->fields.title;
  }
  explanation = info->fields.explanation;
  title = OverwriteSkillName_43476768;
  if ( info->fields.id != skillId )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_86;
    SkillEntity__GetEffectExplanation((SkillEntity_o *)entity, &title, &explanation, info->fields.lv, 0, 0);
    if ( servantLimitAddEntity )
      v17 = ServantLimitAddEntity__GetOverwriteSkillName_43476768(
              servantLimitAddEntity,
              skillId,
              info->fields.lv,
              title,
              0);
    else
      v17 = 0;
    v18 = title;
    if ( v17 )
      v18 = v17;
    title = v18;
    if ( !info->fields.isUse )
      explanation = info->fields.explanation;
  }
  nameLabel = (UILabel_o *)this->fields.icon;
  if ( !nameLabel )
    goto LABEL_86;
  SkillIconComponent__Set_41863008((SkillIconComponent_o *)nameLabel, skillId, info->fields.lv, 0);
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_86;
  UILabel__set_text(nameLabel, title, 0);
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_86;
  v51.fields.a = 1.0;
  v51.fields.r = v15;
  v51.fields.g = v15;
  v51.fields.b = v15;
  UIWidget__set_color((UIWidget_o *)nameLabel, v51, 0);
  nameLabel = this->fields.explanationLabel;
  if ( !nameLabel )
    goto LABEL_86;
  v52.fields.a = 1.0;
  v52.fields.r = v15;
  v52.fields.g = v15;
  v52.fields.b = v15;
  UIWidget__set_color((UIWidget_o *)nameLabel, v52, 0);
  explanationLabel = this->fields.explanationLabel;
  v20 = explanation;
  v21 = ServantStatusPossessionSkillComponent_TypeInfo;
  if ( !ServantStatusPossessionSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusPossessionSkillComponent_TypeInfo);
    v21 = ServantStatusPossessionSkillComponent_TypeInfo;
  }
  nameLabel = (UILabel_o *)WrapControlText__textBBCodeAdjust(
                             explanationLabel,
                             v20,
                             v21->static_fields->DetailFontSize,
                             v21->static_fields->DetailFontSize,
                             0);
  v22 = this->fields.explanationLabel;
  if ( !v22 )
    goto LABEL_86;
  v23 = ServantStatusPossessionSkillComponent_TypeInfo;
  mHeight = v22->fields.mHeight;
  static_fields = ServantStatusPossessionSkillComponent_TypeInfo->static_fields;
  SkillPitch = static_fields->SkillPitch;
  v27 = static_fields->ExplanationLabelAdjustHeight + mHeight;
  if ( v27 >= SkillPitch )
  {
    SkillPitch = static_fields->ExplanationLabelAdjustHeight + mHeight;
  }
  else if ( !ServantStatusPossessionSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusPossessionSkillComponent_TypeInfo);
    v23 = ServantStatusPossessionSkillComponent_TypeInfo;
    SkillPitch = ServantStatusPossessionSkillComponent_TypeInfo->static_fields->SkillPitch;
  }
  this->fields._Height_k__BackingField = SkillPitch;
  if ( !v23->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v23);
    v23 = ServantStatusPossessionSkillComponent_TypeInfo;
  }
  if ( v27 - v23->static_fields->SkillPitch >= 11 )
    this->fields._IsNeedAddAdjust_k__BackingField = 1;
  if ( (info->fields.lv & 0x80000000) == 0 )
  {
    p_strengthStatus = &this->fields.strengthStatus;
    strengthStatus = (UnityEngine_Object_o *)this->fields.strengthStatus;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(strengthStatus, 0, 0) )
    {
      nameLabel = (UILabel_o *)*p_strengthStatus;
      if ( !*p_strengthStatus )
        goto LABEL_86;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)nameLabel,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972(gameObject, 0);
    }
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
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
                             (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        *p_strengthStatus = (struct ServantSkillStrengthStatus_o *)Component_object;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.strengthStatus,
          (int32_t)Component_object,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
        nameLabel = (UILabel_o *)*p_strengthStatus;
        if ( *p_strengthStatus )
        {
          v40 = (UnityEngine_Vector2Int_o)0x1600000018LL;
          ServantSkillStrengthStatus__Set(
            (ServantSkillStrengthStatus_o *)nameLabel,
            this->fields.nameLabel,
            info->fields.strengthStatus,
            info->fields.skillRecord,
            24,
            1,
            v40,
            360,
            0,
            0);
          goto LABEL_65;
        }
      }
    }
LABEL_86:
    sub_1C942F0(nameLabel, info);
  }
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_86;
  UILabel__SetCondensedScale(nameLabel, 360, 0, 0);
  v41 = (UnityEngine_Object_o *)this->fields.strengthStatus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v41, 0, 0) )
  {
    nameLabel = (UILabel_o *)this->fields.strengthStatus;
    if ( !nameLabel )
      goto LABEL_86;
    v42 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72110972(v42, 0);
  }
LABEL_65:
  nameLabel = (UILabel_o *)this->fields.condSprite;
  if ( !nameLabel )
    goto LABEL_86;
  nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0);
  if ( !nameLabel )
    goto LABEL_86;
  if ( !multiFlg )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0);
    nameLabel = this->fields.condLabel;
    if ( nameLabel )
    {
      UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      return;
    }
    goto LABEL_86;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 1, 0);
  nameLabel = this->fields.condLabel;
  if ( !nameLabel )
    goto LABEL_86;
  UILabel__set_text(nameLabel, condTitle, 0);
  nameLabel = (UILabel_o *)ServantStatusPossessionSkillComponent_TypeInfo;
  condLabel = this->fields.condLabel;
  if ( !ServantStatusPossessionSkillComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusPossessionSkillComponent_TypeInfo);
  if ( !condLabel )
    goto LABEL_86;
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
    v46 = 0x80000000;
  else
    v46 = (int)MultiSkillPosY;
  if ( !byte_4D277C6 )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D277C6 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v46 >= 0 )
    v47 = v46;
  else
    v47 = -v46;
  this->fields._Height_k__BackingField = v47 + Height_k__BackingField;
}


void ServantStatusPossessionSkillComponent_EachSkill__SetActive(
        ServantStatusPossessionSkillComponent_EachSkill_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  baseObject = this->fields.baseObject;
  if ( !baseObject )
    sub_1C942F0(0, flag);
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
    sub_1C942F0(condSprite, method);
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