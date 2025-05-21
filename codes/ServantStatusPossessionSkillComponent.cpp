void __fastcall ServantStatusPossessionSkillComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ServantStatusPossessionSkillComponent_StaticFields *static_fields; // x8

  if ( (byte_4B4268A & 1) == 0 )
  {
    sub_1BDB878(&ServantStatusPossessionSkillComponent_TypeInfo, v1);
    byte_4B4268A = 1;
  }
  static_fields = ServantStatusPossessionSkillComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SkillListMax = 0x6900000002LL;
  *(_QWORD *)&static_fields->DetailFontSize = 0xC1E0000000000012LL;
  *(_QWORD *)&static_fields->CondTitleMaxWidth = 0x280000021CLL;
}


void __fastcall ServantStatusPossessionSkillComponent___ctor(
        ServantStatusPossessionSkillComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusPossessionSkillComponent_c *v4; // x0
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B42689 & 1) == 0 )
  {
    sub_1BDB878(&ServantStatusPossessionSkillComponent_EachSkill___TypeInfo, method);
    sub_1BDB878(&ServantStatusPossessionSkillComponent_TypeInfo, v3);
    byte_4B42689 = 1;
  }
  v4 = ServantStatusPossessionSkillComponent_TypeInfo;
  if ( !ServantStatusPossessionSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusPossessionSkillComponent_TypeInfo);
    v4 = ServantStatusPossessionSkillComponent_TypeInfo;
  }
  v5 = (struct ServantStatusPossessionSkillComponent_EachSkill_array *)sub_1BDB920(
                                                                         ServantStatusPossessionSkillComponent_EachSkill___TypeInfo,
                                                                         v4->static_fields->SkillListMax);
  this->fields.skillList = v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.skillList, (int32_t)v5, v6, v7);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusPossessionSkillComponent__Awake(
        ServantStatusPossessionSkillComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusPossessionSkillComponent__Set(
        ServantStatusPossessionSkillComponent_o *this,
        SkillInfo_o *info,
        ServantSkillAddEntity_o *servantSkillAddEntity,
        const MethodInfo *method)
{
  ServantStatusPossessionSkillComponent_o *v6; // x21
  __int64 v7; // x1
  ServantStatusPossessionSkillComponent_o *chargeDataLabel; // x23
  ServantStatusPossessionSkillComponent_o *v9; // x1
  __int64 v10; // x2
  unsigned __int64 v11; // x25
  int32_t v12; // w23
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v13; // x8
  ServantStatusPossessionSkillComponent_EachSkill_o *v14; // x8
  struct ServantStatusPossessionSkillComponent_EachSkill_array *skillList; // x8
  ServantStatusPossessionSkillComponent_EachSkill_o *v16; // x8
  const MethodInfo *v17; // x5
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v18; // x8
  struct System_Int32_array *skillIds; // x9
  struct System_String_array *titles; // x10
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v21; // x8
  ServantStatusPossessionSkillComponent_EachSkill_o *v22; // x22
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v27; // s0
  float v28; // s1
  float v29; // s2
  float v30; // s3
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v31; // x8
  ServantStatusPossessionSkillComponent_EachSkill_o *v32; // x8
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v33; // x8
  unsigned __int64 max_length; // x9
  ServantStatusPossessionSkillComponent_EachSkill_o *v35; // x10
  const MethodInfo *v36; // x5
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v37; // x8
  struct ServantStatusPossessionSkillComponent_EachSkill_array *v38; // x8
  ServantStatusPossessionSkillComponent_EachSkill_o *v39; // x8
  ServantStatusPossessionSkillComponent_EachSkill_o *v40; // x8
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o CondLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v44; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  v6 = this;
  if ( (byte_4B42688 & 1) == 0 )
  {
    sub_1BDB878(&ServantStatusPossessionSkillComponent_TypeInfo, info);
    this = (ServantStatusPossessionSkillComponent_o *)sub_1BDB878(&StringLiteral_1/*""*/, v7);
    byte_4B42688 = 1;
  }
  if ( !info )
    goto LABEL_62;
  if ( (info->fields.lv & 0x80000000) != 0 || (info->fields.charge & 0x80000000) != 0 )
  {
    this = (ServantStatusPossessionSkillComponent_o *)v6->fields.chargeTitleSprite;
    if ( this )
    {
      this = (ServantStatusPossessionSkillComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (ServantStatusPossessionSkillComponent_o *)v6->fields.chargeDataLabel;
        if ( this )
        {
          v9 = (ServantStatusPossessionSkillComponent_o *)StringLiteral_1/*""*/;
          goto LABEL_14;
        }
      }
    }
LABEL_62:
    sub_1BDBAD4(this, info);
  }
  this = (ServantStatusPossessionSkillComponent_o *)v6->fields.chargeTitleSprite;
  if ( !this )
    goto LABEL_62;
  this = (ServantStatusPossessionSkillComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
  if ( !this )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  chargeDataLabel = (ServantStatusPossessionSkillComponent_o *)v6->fields.chargeDataLabel;
  this = (ServantStatusPossessionSkillComponent_o *)System_Int32__ToString((int)info + 24, 0LL);
  if ( !chargeDataLabel )
    goto LABEL_62;
  v9 = this;
  this = chargeDataLabel;
LABEL_14:
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v9, 0LL);
  v11 = 0LL;
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
                                                              0LL),
          ((unsigned __int8)this & 1) == 0) )
    {
      skillList = v6->fields.skillList;
      if ( !skillList )
        goto LABEL_62;
      if ( v11 >= skillList->max_length )
LABEL_63:
        sub_1BDBADC(this, info, v10);
      v16 = skillList->m_Items[v11];
      if ( !v16 )
        goto LABEL_62;
      this = (ServantStatusPossessionSkillComponent_o *)v16->fields.baseObject;
      if ( !this )
        goto LABEL_62;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v18 = v6->fields.skillList;
      if ( !v18 )
        goto LABEL_62;
      if ( v11 >= v18->max_length )
        goto LABEL_63;
      skillIds = servantSkillAddEntity->fields.skillIds;
      if ( !skillIds )
        goto LABEL_62;
      if ( v11 >= skillIds->max_length )
        goto LABEL_63;
      titles = servantSkillAddEntity->fields.titles;
      if ( !titles )
        goto LABEL_62;
      if ( v11 >= titles->max_length )
        goto LABEL_63;
      this = (ServantStatusPossessionSkillComponent_o *)v18->m_Items[v11];
      if ( !this )
        goto LABEL_62;
      ServantStatusPossessionSkillComponent_EachSkill__Set(
        (ServantStatusPossessionSkillComponent_EachSkill_o *)this,
        info,
        skillIds->m_Items[v11 + 1],
        1,
        titles->m_Items[v11],
        v17);
      v21 = v6->fields.skillList;
      if ( !v21 )
        goto LABEL_62;
      if ( v11 >= v21->max_length )
        goto LABEL_63;
      v22 = v21->m_Items[v11];
      v41.fields.r = 0.0;
      v41.fields.g = 0.0;
      v41.fields.b = 0.0;
      v41.fields.a = 1.0;
      CondLabelColor = ServantSkillAddEntity__GetCondLabelColor(servantSkillAddEntity, v41, 0LL);
      r = CondLabelColor.fields.r;
      g = CondLabelColor.fields.g;
      b = CondLabelColor.fields.b;
      a = CondLabelColor.fields.a;
      CondLabelColor.fields.r = 1.0;
      CondLabelColor.fields.g = 1.0;
      CondLabelColor.fields.b = 1.0;
      CondLabelColor.fields.a = 1.0;
      *(UnityEngine_Color_o *)&v27 = ServantSkillAddEntity__GetCondSpriteColor(
                                       servantSkillAddEntity,
                                       CondLabelColor,
                                       0LL);
      if ( !v22 )
        goto LABEL_62;
      v44.fields.r = v27;
      v44.fields.g = v28;
      v44.fields.b = v29;
      v44.fields.a = v30;
      v43.fields.r = r;
      v43.fields.g = g;
      v43.fields.b = b;
      v43.fields.a = a;
      ServantStatusPossessionSkillComponent_EachSkill__SetCondColor(v22, v43, v44, (const MethodInfo *)info);
      v31 = v6->fields.skillList;
      if ( !v31 )
        goto LABEL_62;
      if ( v11 >= v31->max_length )
        goto LABEL_63;
      v32 = v31->m_Items[v11];
      if ( !v32 )
        goto LABEL_62;
      GameObjectExtensions__SetLocalPositionY(v32->fields.baseObject, (float)-v12, 0LL);
      v33 = v6->fields.skillList;
      if ( !v33 )
        goto LABEL_62;
      max_length = v33->max_length;
      if ( v11 >= max_length )
        goto LABEL_63;
      v35 = v33->m_Items[v11];
      if ( !v35 )
        goto LABEL_62;
    }
    else
    {
      v13 = v6->fields.skillList;
      if ( !v13 )
        goto LABEL_62;
      if ( v11 >= v13->max_length )
        goto LABEL_63;
      v14 = v13->m_Items[v11];
      if ( !v14 )
        goto LABEL_62;
      this = (ServantStatusPossessionSkillComponent_o *)v14->fields.baseObject;
      if ( v11 )
      {
        if ( !this )
          goto LABEL_62;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        goto LABEL_60;
      }
      if ( !this )
        goto LABEL_62;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v37 = v6->fields.skillList;
      if ( !v37 )
        goto LABEL_62;
      if ( !v37->max_length )
        goto LABEL_63;
      this = (ServantStatusPossessionSkillComponent_o *)v37->m_Items[0];
      if ( !this )
        goto LABEL_62;
      ServantStatusPossessionSkillComponent_EachSkill__Set(
        (ServantStatusPossessionSkillComponent_EachSkill_o *)this,
        info,
        info->fields.id,
        0,
        (System_String_o *)StringLiteral_1/*""*/,
        v36);
      v38 = v6->fields.skillList;
      if ( !v38 )
        goto LABEL_62;
      if ( !v38->max_length )
        goto LABEL_63;
      v39 = v38->m_Items[0];
      if ( !v39 )
        goto LABEL_62;
      GameObjectExtensions__SetLocalPositionY(v39->fields.baseObject, (float)-v12, 0LL);
      v33 = v6->fields.skillList;
      if ( !v33 )
        goto LABEL_62;
      max_length = v33->max_length;
      if ( !v33->max_length )
        goto LABEL_63;
      v35 = v33->m_Items[0];
      if ( !v35 )
        goto LABEL_62;
    }
    if ( v11 >= max_length )
      goto LABEL_63;
    v40 = v33->m_Items[v11];
    if ( !v40 )
      goto LABEL_62;
    v12 += v35->fields._Height_k__BackingField;
    v6->fields._IsNeedAddAdjust_k__BackingField = v40->fields._IsNeedAddAdjust_k__BackingField;
LABEL_60:
    ++v11;
  }
  v6->fields._Height_k__BackingField = v12;
}


void __fastcall ServantStatusPossessionSkillComponent__SetActive(
        ServantStatusPossessionSkillComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  baseObject = this->fields.baseObject;
  if ( !baseObject )
    sub_1BDBAD4(0LL, flag);
  UnityEngine_GameObject__SetActive(baseObject, flag, 0LL);
}


int32_t __fastcall ServantStatusPossessionSkillComponent__get_Height(
        ServantStatusPossessionSkillComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._Height_k__BackingField;
}


bool __fastcall ServantStatusPossessionSkillComponent__get_IsNeedAddAdjust(
        ServantStatusPossessionSkillComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._IsNeedAddAdjust_k__BackingField;
}


void __fastcall ServantStatusPossessionSkillComponent__set_Height(
        ServantStatusPossessionSkillComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Height_k__BackingField = value;
}


void __fastcall ServantStatusPossessionSkillComponent__set_IsNeedAddAdjust(
        ServantStatusPossessionSkillComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNeedAddAdjust_k__BackingField = value;
}


void __fastcall ServantStatusPossessionSkillComponent_EachSkill___ctor(
        ServantStatusPossessionSkillComponent_EachSkill_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusPossessionSkillComponent_EachSkill__Set(
        ServantStatusPossessionSkillComponent_EachSkill_o *this,
        SkillInfo_o *info,
        int32_t skillId,
        bool multiFlg,
        System_String_o *condTitle,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UILabel_o *nameLabel; // x0
  System_String_o *v19; // x9
  int lv; // w3
  float v21; // s8
  UILabel_o *explanationLabel; // x23
  System_String_o *v23; // x24
  ServantStatusPossessionSkillComponent_c *v24; // x0
  struct UILabel_o *v25; // x8
  ServantStatusPossessionSkillComponent_c *v26; // x0
  int32_t mHeight; // w10
  struct ServantStatusPossessionSkillComponent_StaticFields *static_fields; // x9
  int32_t SkillPitch; // w8
  int32_t v30; // w23
  struct ServantSkillStrengthStatus_o **p_strengthStatus; // x23
  UnityEngine_Object_o *strengthStatus; // x24
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *PATH; // x24
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  UnityEngine_Object_o *v39; // x22
  UnityEngine_Object_o *v40; // x22
  UILabel_o *condLabel; // x20
  __int64 v42; // x1
  int32_t Height_k__BackingField; // w20
  float MultiSkillPosY; // s0
  int v45; // w21
  int v46; // w8
  System_String_o *explanation; // [xsp+10h] [xbp-70h] BYREF
  System_String_o *title; // [xsp+18h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector2Int_o v50; // 0:x6.8
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B4268B & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_SkillMaster___, info);
    sub_1BDB878(&DataManager_TypeInfo, v11);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v12);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v13);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v14);
    sub_1BDB878(&ServantSkillStrengthStatus_TypeInfo, v15);
    sub_1BDB878(&ServantStatusPossessionSkillComponent_TypeInfo, v16);
    sub_1BDB878(&StringLiteral_1/*""*/, v17);
    byte_4B4268B = 1;
  }
  entity = 0LL;
  explanation = 0LL;
  title = 0LL;
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_78;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.explanationLabel;
  if ( !nameLabel )
    goto LABEL_78;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.condLabel;
  if ( !nameLabel )
    goto LABEL_78;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = (UILabel_o *)this->fields.condSprite;
  if ( !nameLabel )
    goto LABEL_78;
  nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
  if ( !nameLabel )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  nameLabel = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !nameLabel )
    goto LABEL_78;
  nameLabel = (UILabel_o *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)nameLabel,
                             &entity,
                             skillId,
                             (const MethodInfo_32E1E88 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)nameLabel & 1) == 0 )
    return;
  if ( !info )
    goto LABEL_78;
  v19 = info->fields.title;
  lv = info->fields.lv;
  explanation = info->fields.explanation;
  title = v19;
  if ( lv < 0 )
    v21 = 0.5;
  else
    v21 = 1.0;
  if ( info->fields.id != skillId )
  {
    nameLabel = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_78;
    SkillEntity__GetEffectExplanation((SkillEntity_o *)entity, &title, &explanation, lv, 0, 0LL);
    if ( !info->fields.isUse )
      explanation = info->fields.explanation;
  }
  nameLabel = (UILabel_o *)this->fields.icon;
  if ( !nameLabel )
    goto LABEL_78;
  SkillIconComponent__Set_40036740((SkillIconComponent_o *)nameLabel, skillId, info->fields.lv, 0LL);
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_78;
  UILabel__set_text(nameLabel, title, 0LL);
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_78;
  v51.fields.a = 1.0;
  v51.fields.r = v21;
  v51.fields.g = v21;
  v51.fields.b = v21;
  UIWidget__set_color((UIWidget_o *)nameLabel, v51, 0LL);
  nameLabel = this->fields.explanationLabel;
  if ( !nameLabel )
    goto LABEL_78;
  v52.fields.a = 1.0;
  v52.fields.r = v21;
  v52.fields.g = v21;
  v52.fields.b = v21;
  UIWidget__set_color((UIWidget_o *)nameLabel, v52, 0LL);
  explanationLabel = this->fields.explanationLabel;
  v23 = explanation;
  v24 = ServantStatusPossessionSkillComponent_TypeInfo;
  if ( !ServantStatusPossessionSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusPossessionSkillComponent_TypeInfo);
    v24 = ServantStatusPossessionSkillComponent_TypeInfo;
  }
  nameLabel = (UILabel_o *)WrapControlText__textBBCodeAdjust(
                             explanationLabel,
                             v23,
                             v24->static_fields->DetailFontSize,
                             v24->static_fields->DetailFontSize,
                             0LL);
  v25 = this->fields.explanationLabel;
  if ( !v25 )
    goto LABEL_78;
  v26 = ServantStatusPossessionSkillComponent_TypeInfo;
  mHeight = v25->fields.mHeight;
  static_fields = ServantStatusPossessionSkillComponent_TypeInfo->static_fields;
  SkillPitch = static_fields->SkillPitch;
  v30 = static_fields->ExplanationLabelAdjustHeight + mHeight;
  if ( v30 >= SkillPitch )
  {
    SkillPitch = static_fields->ExplanationLabelAdjustHeight + mHeight;
  }
  else if ( !ServantStatusPossessionSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusPossessionSkillComponent_TypeInfo);
    v26 = ServantStatusPossessionSkillComponent_TypeInfo;
    SkillPitch = ServantStatusPossessionSkillComponent_TypeInfo->static_fields->SkillPitch;
  }
  this->fields._Height_k__BackingField = SkillPitch;
  if ( !v26->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v26);
    v26 = ServantStatusPossessionSkillComponent_TypeInfo;
  }
  if ( v30 - v26->static_fields->SkillPitch >= 11 )
    this->fields._IsNeedAddAdjust_k__BackingField = 1;
  if ( (info->fields.lv & 0x80000000) == 0 )
  {
    p_strengthStatus = &this->fields.strengthStatus;
    strengthStatus = (UnityEngine_Object_o *)this->fields.strengthStatus;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(strengthStatus, 0LL, 0LL) )
    {
      nameLabel = (UILabel_o *)*p_strengthStatus;
      if ( !*p_strengthStatus )
        goto LABEL_78;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)nameLabel,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
    }
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
    nameLabel = this->fields.nameLabel;
    if ( nameLabel )
    {
      PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)nameLabel, 0LL);
      nameLabel = (UILabel_o *)BaseMonoBehaviour__CreateObjectStatic(PATH, transform, 0LL, 0LL);
      if ( nameLabel )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)nameLabel,
                             (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        *p_strengthStatus = (struct ServantSkillStrengthStatus_o *)Component_object;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.strengthStatus, (int32_t)Component_object, v37, v38);
        nameLabel = (UILabel_o *)*p_strengthStatus;
        if ( *p_strengthStatus )
        {
          v50 = (UnityEngine_Vector2Int_o)0x1600000018LL;
          ServantSkillStrengthStatus__Set(
            (ServantSkillStrengthStatus_o *)nameLabel,
            this->fields.nameLabel,
            info->fields.strengthStatus,
            info->fields.skillRecord,
            24,
            1,
            v50,
            360,
            0LL,
            0LL);
          goto LABEL_57;
        }
      }
    }
LABEL_78:
    sub_1BDBAD4(nameLabel, info);
  }
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_78;
  UILabel__SetCondensedScale(nameLabel, 360, 0, 0LL);
  v39 = (UnityEngine_Object_o *)this->fields.strengthStatus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
  {
    nameLabel = (UILabel_o *)this->fields.strengthStatus;
    if ( !nameLabel )
      goto LABEL_78;
    v40 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(v40, 0LL);
  }
LABEL_57:
  nameLabel = (UILabel_o *)this->fields.condSprite;
  if ( !nameLabel )
    goto LABEL_78;
  nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
  if ( !nameLabel )
    goto LABEL_78;
  if ( !multiFlg )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 0, 0LL);
    nameLabel = this->fields.condLabel;
    if ( nameLabel )
    {
      UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
    goto LABEL_78;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, 1, 0LL);
  nameLabel = this->fields.condLabel;
  if ( !nameLabel )
    goto LABEL_78;
  UILabel__set_text(nameLabel, condTitle, 0LL);
  nameLabel = (UILabel_o *)ServantStatusPossessionSkillComponent_TypeInfo;
  condLabel = this->fields.condLabel;
  if ( !ServantStatusPossessionSkillComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusPossessionSkillComponent_TypeInfo);
  if ( !condLabel )
    goto LABEL_78;
  UILabel__SetCondensedScale(
    condLabel,
    ServantStatusPossessionSkillComponent_TypeInfo->static_fields->CondTitleMaxWidth,
    0,
    0LL);
  GameObjectExtensions__SetLocalPositionY(
    this->fields.skillObject,
    ServantStatusPossessionSkillComponent_TypeInfo->static_fields->MultiSkillPosY,
    0LL);
  Height_k__BackingField = this->fields._Height_k__BackingField;
  MultiSkillPosY = ServantStatusPossessionSkillComponent_TypeInfo->static_fields->MultiSkillPosY;
  if ( MultiSkillPosY == INFINITY )
    v45 = 0x80000000;
  else
    v45 = (int)MultiSkillPosY;
  if ( !byte_4B3F91D )
  {
    sub_1BDB878(&System_Math_TypeInfo, v42);
    byte_4B3F91D = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v45 >= 0 )
    v46 = v45;
  else
    v46 = -v45;
  this->fields._Height_k__BackingField = v46 + Height_k__BackingField;
}


void __fastcall ServantStatusPossessionSkillComponent_EachSkill__SetActive(
        ServantStatusPossessionSkillComponent_EachSkill_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  baseObject = this->fields.baseObject;
  if ( !baseObject )
    sub_1BDBAD4(0LL, flag);
  UnityEngine_GameObject__SetActive(baseObject, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusPossessionSkillComponent_EachSkill__SetCondColor(
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
        UIWidget__set_color(condSprite, spriteColor, 0LL),
        (condSprite = (UIWidget_o *)this->fields.condLabel) == 0LL) )
  {
    sub_1BDBAD4(condSprite, method);
  }
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UIWidget__set_color(condSprite, v10, 0LL);
}


void __fastcall ServantStatusPossessionSkillComponent_EachSkill__SetPositionY(
        ServantStatusPossessionSkillComponent_EachSkill_o *this,
        float pos,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPositionY(this->fields.baseObject, pos, 0LL);
}


int32_t __fastcall ServantStatusPossessionSkillComponent_EachSkill__get_Height(
        ServantStatusPossessionSkillComponent_EachSkill_o *this,
        const MethodInfo *method)
{
  return this->fields._Height_k__BackingField;
}


bool __fastcall ServantStatusPossessionSkillComponent_EachSkill__get_IsNeedAddAdjust(
        ServantStatusPossessionSkillComponent_EachSkill_o *this,
        const MethodInfo *method)
{
  return this->fields._IsNeedAddAdjust_k__BackingField;
}


void __fastcall ServantStatusPossessionSkillComponent_EachSkill__set_Height(
        ServantStatusPossessionSkillComponent_EachSkill_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Height_k__BackingField = value;
}


void __fastcall ServantStatusPossessionSkillComponent_EachSkill__set_IsNeedAddAdjust(
        ServantStatusPossessionSkillComponent_EachSkill_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNeedAddAdjust_k__BackingField = value;
}