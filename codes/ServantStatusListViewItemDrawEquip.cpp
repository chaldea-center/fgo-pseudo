void ServantStatusListViewItemDrawEquip___cctor(const MethodInfo *method)
{
  if ( (byte_4C3FB74 & 1) == 0 )
  {
    sub_1C37058(&ServantStatusListViewItemDrawEquip_TypeInfo);
    byte_4C3FB74 = 1;
  }
  *ServantStatusListViewItemDrawEquip_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawEquip_StaticFields)0x2800000012LL;
}


void ServantStatusListViewItemDrawEquip___ctor(ServantStatusListViewItemDrawEquip_o *this, const MethodInfo *method)
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

  if ( (byte_4C3FB73 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&UnityEngine_GameObject___TypeInfo);
    sub_1C37058(&SkillIconComponent___TypeInfo);
    sub_1C37058(&UILabel___TypeInfo);
    sub_1C37058(&UIRangeLabel___TypeInfo);
    byte_4C3FB73 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1C37100(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillBaseList = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.equipSkillBaseList, (int32_t)v4, v5, v6);
  v7 = (struct SkillIconComponent_array *)sub_1C37100(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillIcon = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.equipSkillIcon, (int32_t)v7, v8, v9);
  v10 = (struct UIRangeLabel_array *)sub_1C37100(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillTitleRangeLabelList = v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.equipSkillTitleRangeLabelList, (int32_t)v10, v11, v12);
  v13 = (struct UILabel_array *)sub_1C37100(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillExplanationLabelList = v13;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.equipSkillExplanationLabelList, (int32_t)v13, v14, v15);
  this->fields.COLOR_INVALID = (struct UnityEngine_Color_o)xmmword_C0F670;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawEquip__Awake(ServantStatusListViewItemDrawEquip_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *equipSkillBaseList; // x8
  ServantStatusListViewItemDrawEquip_o *v3; // x19
  struct UnityEngine_GameObject_array *v4; // x8
  float y; // s8
  unsigned int v6; // w9
  struct UISprite_o *baseSprite; // x9
  int v8; // w20
  float v9; // s1
  int v10; // w9
  struct UnityEngine_GameObject_array *v11; // x8
  float v12; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  equipSkillBaseList = this->fields.equipSkillBaseList;
  if ( !equipSkillBaseList )
    goto LABEL_24;
  v3 = this;
  if ( SLODWORD(equipSkillBaseList->max_length) >= 2 )
  {
    this = (ServantStatusListViewItemDrawEquip_o *)equipSkillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_24;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    v4 = v3->fields.equipSkillBaseList;
    if ( !v4 )
      goto LABEL_24;
    if ( LODWORD(v4->max_length) <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawEquip_o *)v4->m_Items[1];
    if ( !this )
      goto LABEL_24;
    y = localPosition.fields.y;
    this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_24;
    v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    equipSkillBaseList = v3->fields.equipSkillBaseList;
    v6 = (float)(y - v14.fields.y) == INFINITY ? 0x80000000 : (int)(float)(y - v14.fields.y);
    v3->fields.skillPitch = v6;
    if ( !equipSkillBaseList )
      goto LABEL_24;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquip_o *)v3->fields.titleSprite;
  v8 = v3->fields.skillPitch * LODWORD(equipSkillBaseList->max_length);
  v9 = (float)(baseSprite->fields.mHeight - v8);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v9;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !this )
    goto LABEL_24;
  v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v10 = v8 >= 0 ? v8 : v8 + 1;
  v11 = v3->fields.equipSkillBaseList;
  v12 = (float)(v10 >> 1);
  v3->fields.titleBasePosition.fields.x = v15.fields.x;
  v3->fields.titleBasePosition.fields.z = v15.fields.z;
  v3->fields.titleBasePosition.fields.y = v15.fields.y - v12;
  if ( !v11 )
LABEL_24:
    sub_1C372B4(this);
  if ( !LODWORD(v11->max_length) )
LABEL_25:
    sub_1C372BC(this);
  this = (ServantStatusListViewItemDrawEquip_o *)v11->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0);
  if ( !this )
    goto LABEL_24;
  v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.skillBasePosition.fields.x = v16.fields.x;
  v3->fields.skillBasePosition.fields.z = v16.fields.z;
  v3->fields.skillBasePosition.fields.y = v16.fields.y - v12;
}


int32_t ServantStatusListViewItemDrawEquip__GetKind(
        ServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  return 3;
}


void ServantStatusListViewItemDrawEquip__SetItem(
        ServantStatusListViewItemDrawEquip_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UILabel_o *explanationLabel; // x21
  SkillIconComponent_o *equipIcon; // x0
  __int64 equipTargetId1; // x1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v12; // x21
  __int64 v13; // x22
  struct ServantFaceIconComponent_o *v14; // x8
  struct ServantLeaderInfo_o *v15; // x9
  UIRangeLabel_o *nameRangeLabel; // x21
  System_String_o *v17; // x1
  UIExtrusionLabel_o *levelLabel; // x21
  UILabel_o *maxLevelLabel; // x21
  UILabel_o *costLabel; // x21
  UIIconLabel_o *attackIconLabel; // x21
  UIIconLabel_o *hpIconLabel; // x21
  UILabel_o *lateExpLabel; // x21
  int32_t v24; // w22
  struct ServantStatusLimitCountGauge_o *limitCountGauge; // x21
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t limitMax; // w2
  int32_t v28; // w1
  ServantStatusLimitCountGauge_o *v29; // x0
  struct SkillIconComponent_array *equipSkillIcon; // x8
  il2cpp_array_size_t max_length; // x10
  unsigned __int64 max_length_low; // x9
  int v33; // w22
  signed __int64 v34; // x8
  SkillInfo_o *v35; // x13
  UnityEngine_Object_o *lineSprite; // x21
  struct UnityEngine_GameObject_array *equipSkillBaseList; // x8
  char v38; // w26
  int v39; // w25
  __int64 v40; // x28
  __int64 v41; // x29
  unsigned __int64 v42; // x23
  unsigned __int64 v43; // x9
  __int64 v44; // x8
  struct UILabel_array *equipSkillExplanationLabelList; // x9
  ServantStatusListViewItemDrawEquip_c *v46; // x0
  UILabel_o *v47; // x21
  System_String_o *v48; // x22
  struct UILabel_array *v49; // x8
  __int64 v50; // x8
  int32_t skillPitch; // w9
  int v52; // w10
  int v53; // w8
  il2cpp_array_size_t v54; // x11
  __int64 v55; // x9
  int32_t v56; // w21
  struct ServantEntity_o *v57; // x8
  int v58; // w21
  int v59; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x21
  float v64; // s8
  int32_t v65; // w1
  int32_t v66; // w1
  int v67; // w21
  float v68; // s8
  float v69; // s11
  float v70; // s9
  float v71; // s10
  struct UnityEngine_GameObject_array *v72; // x8
  float v73; // s8
  float v74; // s9
  unsigned int v75; // w25
  float v76; // s10
  unsigned int v77; // w9
  unsigned int v78; // w11
  SkillInfo_o *v79; // x29
  struct SkillIconComponent_array *v80; // x8
  struct UIRangeLabel_array *equipSkillTitleRangeLabelList; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v83; // x21
  __int64 v84; // x22
  int32_t v85; // w21
  int32_t Rarity; // w0
  bool v87; // w1
  struct UnityEngine_GameObject_array *v88; // x8
  struct UILabel_array *v89; // x8
  UILabel_o *v90; // x8
  int32_t mHeight; // w21
  int32_t v92; // w9
  struct ServantLeaderInfo_o *v93; // x8
  __int64 v94; // x21
  __int64 v95; // x22
  int32_t v96; // w22
  struct SkillIconComponent_array *v97; // x8
  struct UIRangeLabel_array *v98; // x8
  struct UILabel_array *v99; // x8
  UnityEngine_Object_o *equipButton; // x21
  __int64 barExp; // [xsp+18h] [xbp-98h] BYREF
  int32_t exp; // [xsp+20h] [xbp-90h] BYREF
  int32_t EquipLevel; // [xsp+24h] [xbp-8Ch] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3FB72 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&ServantStatusListViewItemDrawEquip_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C37058(&StringLiteral_11917/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3FB72 = 1;
  }
  skillInfoList = 0;
  exp = 0;
  barExp = 0;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  equipIcon = (SkillIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11917/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, 0);
  if ( !explanationLabel )
    goto LABEL_189;
  UILabel__set_text(explanationLabel, (System_String_o *)equipIcon, 0);
  if ( item->fields.userSvtEntity )
  {
    equipTargetId1 = item->fields.equipTargetId1;
    equipIcon = (SkillIconComponent_o *)this->fields.equipIcon;
    if ( equipTargetId1 >= 1 )
    {
      if ( !equipIcon )
        goto LABEL_189;
      ServantFaceIconComponent__Set_41005120((ServantFaceIconComponent_o *)equipIcon, equipTargetId1, 0, 0, 0);
      goto LABEL_24;
    }
    if ( !equipIcon )
      goto LABEL_189;
LABEL_23:
    ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)equipIcon, 0);
    goto LABEL_24;
  }
  servantLeaderInfo = item->fields.servantLeaderInfo;
  if ( !servantLeaderInfo || (equipTarget1 = servantLeaderInfo->fields.equipTarget1) == 0 )
  {
    equipIcon = (SkillIconComponent_o *)this->fields.equipIcon;
    if ( !equipIcon )
      goto LABEL_189;
    goto LABEL_23;
  }
  v13 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v105.fields.currentCryptoKey = v13;
  *(_QWORD *)&v105.fields.fakeValue = v12;
  equipIcon = (SkillIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v105, 0);
  v14 = this->fields.equipIcon;
  if ( (int)equipIcon < 1 )
  {
    if ( !v14 )
      goto LABEL_189;
    equipIcon = (SkillIconComponent_o *)this->fields.equipIcon;
    goto LABEL_23;
  }
  v15 = item->fields.servantLeaderInfo;
  if ( !v15 || !v14 )
    goto LABEL_189;
  ServantFaceIconComponent__Set_41011416(this->fields.equipIcon, v15->fields.equipTarget1, 0, 0, 0);
LABEL_24:
  equipIcon = (SkillIconComponent_o *)item->fields.equipServantEntity;
  nameRangeLabel = this->fields.nameRangeLabel;
  if ( equipIcon )
  {
    equipIcon = (SkillIconComponent_o *)ServantEntity__getName((ServantEntity_o *)equipIcon, -1, -1, 0, 0);
    v17 = (System_String_o *)equipIcon;
    if ( !nameRangeLabel )
      goto LABEL_189;
  }
  else
  {
    v17 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !nameRangeLabel )
      goto LABEL_189;
  }
  UIRangeLabel__Set(nameRangeLabel, v17, 0, 1, 0, 0, 0);
  levelLabel = this->fields.levelLabel;
  EquipLevel = ServantStatusListViewItem__get_EquipLevel(item, 0);
  equipIcon = (SkillIconComponent_o *)System_Int32__ToString((int32_t)&EquipLevel, 0);
  if ( !levelLabel )
    goto LABEL_189;
  UIExtrusionLabel__set_text(levelLabel, (System_String_o *)equipIcon, 0);
  maxLevelLabel = this->fields.maxLevelLabel;
  EquipLevel = ServantStatusListViewItem__get_EquipMaxLevel(item, 0);
  equipIcon = (SkillIconComponent_o *)System_Int32__ToString((int32_t)&EquipLevel, 0);
  if ( !maxLevelLabel )
    goto LABEL_189;
  UILabel__set_text(maxLevelLabel, (System_String_o *)equipIcon, 0);
  costLabel = this->fields.costLabel;
  EquipLevel = ServantStatusListViewItem__get_EquipCost(item, 0);
  equipIcon = (SkillIconComponent_o *)System_Int32__ToString((int32_t)&EquipLevel, 0);
  if ( !costLabel )
    goto LABEL_189;
  UILabel__set_text(costLabel, (System_String_o *)equipIcon, 0);
  attackIconLabel = this->fields.attackIconLabel;
  equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipAtk(item, 0);
  if ( !attackIconLabel )
    goto LABEL_189;
  UIIconLabel__Set_41110308(attackIconLabel, 5, (int32_t)equipIcon, 0, 0, 0, 0, 0, 0, 0, 0);
  hpIconLabel = this->fields.hpIconLabel;
  equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipHp(item, 0);
  if ( !hpIconLabel )
    goto LABEL_189;
  UIIconLabel__Set_41110308(hpIconLabel, 3, (int32_t)equipIcon, 0, 0, 0, 0, 0, 0, 0, 0);
  equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__GetEquipExpInfo(
                                        item,
                                        &exp,
                                        (int32_t *)&barExp + 1,
                                        (float *)&barExp,
                                        0);
  if ( !this->fields.expBase )
    goto LABEL_189;
  if ( ((unsigned __int8)equipIcon & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.expBase, 1, 0);
    equipIcon = (SkillIconComponent_o *)this->fields.lateExpBase;
    if ( !equipIcon )
      goto LABEL_189;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, SHIDWORD(barExp) > 0, 0);
    lateExpLabel = this->fields.lateExpLabel;
    v24 = HIDWORD(barExp);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    equipIcon = (SkillIconComponent_o *)LocalizationManager__GetNumberFormat(v24, 0);
    if ( !lateExpLabel )
      goto LABEL_189;
    UILabel__set_text(lateExpLabel, (System_String_o *)equipIcon, 0);
    equipIcon = (SkillIconComponent_o *)this->fields.expBar;
    if ( !equipIcon )
      goto LABEL_189;
    UIProgressBar__set_value((UIProgressBar_o *)equipIcon, *(float *)&barExp, 0);
  }
  else
  {
    UnityEngine_GameObject__SetActive(this->fields.expBase, 0, 0);
  }
  limitCountGauge = this->fields.limitCountGauge;
  if ( item->fields.equipServantEntity )
  {
    equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipLimitCount(item, 0);
    equipServantEntity = item->fields.equipServantEntity;
    if ( !equipServantEntity || !limitCountGauge )
      goto LABEL_189;
    limitMax = equipServantEntity->fields.limitMax;
    v28 = (int)equipIcon;
    v29 = limitCountGauge;
  }
  else
  {
    if ( !limitCountGauge )
      goto LABEL_189;
    v29 = this->fields.limitCountGauge;
    v28 = 0;
    limitMax = 0;
  }
  ServantStatusLimitCountGauge__Set(v29, v28, limitMax, 0);
  ServantStatusListViewItem__GetEquipSkillInfo(item, &skillInfoList, 0);
  if ( !skillInfoList )
    goto LABEL_59;
  equipSkillIcon = this->fields.equipSkillIcon;
  if ( !equipSkillIcon )
    goto LABEL_189;
  max_length = equipSkillIcon->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    max_length_low = LODWORD(skillInfoList->max_length);
    v33 = 0;
    v34 = 0;
    do
    {
      if ( v34 < (int)max_length_low )
      {
        if ( v34 >= max_length_low )
LABEL_190:
          sub_1C372BC(equipIcon);
        v35 = skillInfoList->m_Items[v34];
        if ( v35 && v35->fields.id >= 1 )
          v33 = v34 + 1;
      }
      ++v34;
    }
    while ( v34 < (int)max_length );
  }
  else
  {
LABEL_59:
    v33 = 0;
  }
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  equipIcon = (SkillIconComponent_o *)UnityEngine_Object__op_Inequality(lineSprite, 0, 0);
  if ( ((unsigned __int8)equipIcon & 1) != 0 )
  {
    equipIcon = (SkillIconComponent_o *)this->fields.lineSprite;
    if ( !equipIcon )
      goto LABEL_189;
    equipIcon = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)equipIcon, 0);
    if ( !equipIcon )
      goto LABEL_189;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, v33 > 0, 0);
  }
  equipSkillBaseList = this->fields.equipSkillBaseList;
  if ( !equipSkillBaseList )
    goto LABEL_189;
  v38 = 0;
  v39 = 0;
  v40 = 4;
  v41 = 0x100000000LL;
  while ( 1 )
  {
    v42 = v40 - 4;
    if ( v40 - 4 >= SLODWORD(equipSkillBaseList->max_length) )
      break;
    if ( skillInfoList )
    {
      v43 = LODWORD(skillInfoList->max_length);
      if ( (__int64)v42 < (int)v43 )
      {
        if ( v42 >= v43 )
          goto LABEL_190;
        v44 = *((_QWORD *)&skillInfoList->obj.klass + v40);
        if ( v44 )
        {
          if ( *(int *)(v44 + 16) >= 1 )
          {
            equipSkillExplanationLabelList = this->fields.equipSkillExplanationLabelList;
            if ( !equipSkillExplanationLabelList )
              goto LABEL_189;
            if ( v42 >= LODWORD(equipSkillExplanationLabelList->max_length) )
              goto LABEL_190;
            v46 = ServantStatusListViewItemDrawEquip_TypeInfo;
            v47 = (UILabel_o *)*((_QWORD *)&equipSkillExplanationLabelList->obj.klass + v40);
            v48 = *(System_String_o **)(v44 + 40);
            if ( !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo);
              v46 = ServantStatusListViewItemDrawEquip_TypeInfo;
            }
            equipIcon = (SkillIconComponent_o *)WrapControlText__textAdjust(
                                                  v47,
                                                  v48,
                                                  v46->static_fields->DETAIL_FONT_SIZE,
                                                  v46->static_fields->DETAIL_FONT_SIZE,
                                                  0);
            v49 = this->fields.equipSkillExplanationLabelList;
            if ( !v49 )
              goto LABEL_189;
            if ( v42 >= LODWORD(v49->max_length) )
              goto LABEL_190;
            v50 = *((_QWORD *)&v49->obj.klass + v40);
            if ( !v50 )
              goto LABEL_189;
            skillPitch = this->fields.skillPitch;
            v52 = ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->ADJUST_HEIGHT + *(_DWORD *)(v50 + 172);
            v53 = v52 - skillPitch;
            if ( v52 >= skillPitch )
            {
              if ( !skillInfoList )
                goto LABEL_189;
              v54 = skillInfoList->max_length;
              v39 += v52;
              if ( v42 == (_DWORD)v54 - 1 )
                goto LABEL_88;
              if ( v40 - 3 >= (unsigned __int64)(unsigned int)v54 )
                goto LABEL_190;
              v55 = *(__int64 *)((char *)skillInfoList->m_Items + (v41 >> 29));
              if ( !v55 || *(int *)(v55 + 16) <= 0 )
LABEL_88:
                v38 |= v53 > 10;
            }
            else
            {
              v39 += skillPitch;
            }
          }
        }
      }
    }
    equipSkillBaseList = this->fields.equipSkillBaseList;
    ++v40;
    v41 += 0x100000000LL;
    if ( !equipSkillBaseList )
      goto LABEL_189;
  }
  if ( item->fields._IsDisplayCombineButton_k__BackingField && item->fields.equipServantEntity )
  {
    v56 = ServantStatusListViewItem__get_EquipLevel(item, 0);
    if ( v56 < ServantStatusListViewItem__get_EquipMaxLevel(item, 0) )
      goto LABEL_96;
    equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipLimitCount(item, 0);
    v57 = item->fields.equipServantEntity;
    if ( !v57 )
      goto LABEL_189;
    if ( (int)equipIcon < v57->fields.limitMax )
    {
LABEL_96:
      equipIcon = (SkillIconComponent_o *)this->fields.reinforceObject;
      if ( (v38 & 1) != 0 )
        v58 = 50;
      else
        v58 = 38;
      if ( !equipIcon )
        goto LABEL_189;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, 1, 0);
      equipIcon = (SkillIconComponent_o *)this->fields.reinforceButton;
      if ( !equipIcon )
        goto LABEL_189;
      BYTE1(equipIcon[1].monitor) = 1;
      v39 += v58;
      UICommonButton__SetEnable((UICommonButton_o *)equipIcon, item->fields._CanMoveCombine_k__BackingField, 0);
      if ( v39 >= 0 )
        v59 = v39;
      else
        v59 = v39 + 1;
      GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v59 >> 1), 0);
    }
  }
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v64 = y + (float)v39;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    equipIcon = (SkillIconComponent_o *)this->fields.baseCollider;
    if ( !equipIcon )
      goto LABEL_189;
    v108.fields.x = x;
    v108.fields.y = v64;
    v108.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)equipIcon, v108, 0);
  }
  equipIcon = (SkillIconComponent_o *)this->fields.baseSprite;
  if ( !equipIcon )
    goto LABEL_189;
  v65 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)equipIcon, v65, 0);
  equipIcon = (SkillIconComponent_o *)this->fields.baseSprite;
  if ( !equipIcon )
    goto LABEL_189;
  v66 = v64 == INFINITY ? 0x80000000 : (int)v64;
  UIWidget__set_height((UIWidget_o *)equipIcon, v66, 0);
  equipIcon = (SkillIconComponent_o *)this->fields.titleSprite;
  v67 = v39 >= 0 ? v39 : v39 + 1;
  if ( !equipIcon )
    goto LABEL_189;
  v68 = this->fields.titleBasePosition.fields.x;
  v69 = this->fields.titleBasePosition.fields.y;
  v70 = this->fields.titleBasePosition.fields.z;
  equipIcon = (SkillIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)equipIcon, 0);
  if ( !equipIcon
    || (v71 = (float)(v67 >> 1),
        v109.fields.y = v69 + v71,
        v109.fields.x = v68,
        v109.fields.z = v70,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)equipIcon, v109, 0),
        (v72 = this->fields.equipSkillBaseList) == 0) )
  {
LABEL_189:
    sub_1C372B4(equipIcon);
  }
  v73 = this->fields.skillBasePosition.fields.z;
  v74 = this->fields.skillBasePosition.fields.x;
  v75 = 0;
  v76 = this->fields.skillBasePosition.fields.y + v71;
  while ( 1 )
  {
    v77 = v72->max_length;
    if ( (int)v75 >= (int)v77 )
      break;
    if ( !skillInfoList )
      goto LABEL_145;
    v78 = skillInfoList->max_length;
    if ( (int)v75 >= (int)v78 )
      goto LABEL_145;
    if ( v75 >= v78 )
      goto LABEL_190;
    v79 = skillInfoList->m_Items[v75];
    if ( !v79 || v79->fields.id < 1 )
    {
LABEL_145:
      v87 = 0;
      goto LABEL_146;
    }
    if ( v75 >= v77 )
      goto LABEL_190;
    equipIcon = (SkillIconComponent_o *)v72->m_Items[v75];
    if ( !equipIcon )
      goto LABEL_189;
    equipIcon = (SkillIconComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)equipIcon, 0);
    if ( !equipIcon )
      goto LABEL_189;
    v110.fields.x = v74;
    v110.fields.y = v76;
    v110.fields.z = v73;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)equipIcon, v110, 0);
    v80 = this->fields.equipSkillIcon;
    if ( !v80 )
      goto LABEL_189;
    if ( v75 >= LODWORD(v80->max_length) )
      goto LABEL_190;
    equipIcon = v80->m_Items[v75];
    if ( !equipIcon )
      goto LABEL_189;
    SkillIconComponent__Set(equipIcon, v79->fields.id, 0);
    equipSkillTitleRangeLabelList = this->fields.equipSkillTitleRangeLabelList;
    if ( !equipSkillTitleRangeLabelList )
      goto LABEL_189;
    if ( v75 >= LODWORD(equipSkillTitleRangeLabelList->max_length) )
      goto LABEL_190;
    equipIcon = (SkillIconComponent_o *)equipSkillTitleRangeLabelList->m_Items[v75];
    if ( !equipIcon )
      goto LABEL_189;
    UIRangeLabel__Set((UIRangeLabel_o *)equipIcon, v79->fields.title, 0, 1, 0, 0, 0);
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v84 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v83 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v106.fields.currentCryptoKey = v84;
      *(_QWORD *)&v106.fields.fakeValue = v83;
      equipIcon = (SkillIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v106, 0);
      if ( !item->fields.userSvtEntity )
        goto LABEL_189;
      v85 = (int)equipIcon;
      Rarity = UserServantEntity__getRarity(item->fields.userSvtEntity, 0);
    }
    else
    {
      v93 = item->fields.servantLeaderInfo;
      if ( !v93 )
      {
        v96 = -1;
        v85 = -1;
        goto LABEL_164;
      }
      v95 = *(_QWORD *)&v93->fields.svtId.fields.currentCryptoKey;
      v94 = *(_QWORD *)&v93->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v107.fields.currentCryptoKey = v95;
      *(_QWORD *)&v107.fields.fakeValue = v94;
      equipIcon = (SkillIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v107, 0);
      if ( !item->fields.servantLeaderInfo )
        goto LABEL_189;
      v85 = (int)equipIcon;
      Rarity = ServantLeaderInfo__getRarity(item->fields.servantLeaderInfo, 0);
    }
    v96 = Rarity;
LABEL_164:
    equipIcon = (SkillIconComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !equipIcon )
      goto LABEL_189;
    equipIcon = (SkillIconComponent_o *)PartyOrganizationUtility__IsRarityRestriction_34604572(
                                          (PartyOrganizationUtility_o *)equipIcon,
                                          v85,
                                          v96,
                                          v79->fields.id,
                                          v79->fields.lv,
                                          0);
    if ( ((unsigned __int8)equipIcon & 1) != 0 )
    {
      v97 = this->fields.equipSkillIcon;
      if ( !v97 )
        goto LABEL_189;
      if ( v75 >= LODWORD(v97->max_length) )
        goto LABEL_190;
      equipIcon = v97->m_Items[v75];
      if ( !equipIcon )
        goto LABEL_189;
      SkillIconComponent__SetInvalidColor(equipIcon, this->fields.COLOR_INVALID, 0);
      v98 = this->fields.equipSkillTitleRangeLabelList;
      if ( !v98 )
        goto LABEL_189;
      if ( v75 >= LODWORD(v98->max_length) )
        goto LABEL_190;
      equipIcon = (SkillIconComponent_o *)v98->m_Items[v75];
      if ( !equipIcon )
        goto LABEL_189;
      UIRangeLabel__set_color((UIRangeLabel_o *)equipIcon, this->fields.COLOR_INVALID, 0);
      v99 = this->fields.equipSkillExplanationLabelList;
      if ( !v99 )
        goto LABEL_189;
      if ( v75 >= LODWORD(v99->max_length) )
        goto LABEL_190;
      equipIcon = (SkillIconComponent_o *)v99->m_Items[v75];
      if ( !equipIcon )
        goto LABEL_189;
      UIWidget__set_color((UIWidget_o *)equipIcon, this->fields.COLOR_INVALID, 0);
    }
    v87 = 1;
LABEL_146:
    v88 = this->fields.equipSkillBaseList;
    if ( !v88 )
      goto LABEL_189;
    if ( v75 >= LODWORD(v88->max_length) )
      goto LABEL_190;
    equipIcon = (SkillIconComponent_o *)v88->m_Items[v75];
    if ( equipIcon )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, v87, 0);
      v89 = this->fields.equipSkillExplanationLabelList;
      if ( v89 )
      {
        if ( v75 >= LODWORD(v89->max_length) )
          goto LABEL_190;
        v90 = v89->m_Items[v75];
        if ( v90 )
        {
          equipIcon = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          mHeight = v90->fields.mHeight;
          if ( !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo);
            equipIcon = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          }
          ++v75;
          v72 = this->fields.equipSkillBaseList;
          v92 = *((_DWORD *)equipIcon[2].monitor + 1) + mHeight;
          if ( v92 < this->fields.skillPitch )
            v92 = this->fields.skillPitch;
          v76 = v76 - (float)v92;
          if ( v72 )
            continue;
        }
      }
    }
    goto LABEL_189;
  }
  equipButton = (UnityEngine_Object_o *)this->fields.equipButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipButton, 0, 0) )
  {
    equipIcon = (SkillIconComponent_o *)(item->fields.isEquipChangeMode
                                      || ServantStatusListViewItem__get_IsEquip(item, 0));
    if ( this->fields.equipButton )
    {
      UICommonButton__SetColliderEnable(this->fields.equipButton, (unsigned __int8)equipIcon & 1, 1, 0);
      return;
    }
    goto LABEL_189;
  }
}