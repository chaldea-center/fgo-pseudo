void ServantStatusListViewItemDrawEquip___cctor(const MethodInfo *method)
{
  if ( (byte_4D29C33 & 1) == 0 )
  {
    sub_1C94098(&ServantStatusListViewItemDrawEquip_TypeInfo);
    byte_4D29C33 = 1;
  }
  *ServantStatusListViewItemDrawEquip_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawEquip_StaticFields)0x2800000012LL;
}


void ServantStatusListViewItemDrawEquip___ctor(ServantStatusListViewItemDrawEquip_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct SkillIconComponent_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct UIRangeLabel_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct UILabel_array *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4D29C32 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&UnityEngine_GameObject___TypeInfo);
    sub_1C94098(&SkillIconComponent___TypeInfo);
    sub_1C94098(&UILabel___TypeInfo);
    sub_1C94098(&UIRangeLabel___TypeInfo);
    byte_4D29C32 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1C94140(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillBaseList = v4;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.equipSkillBaseList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct SkillIconComponent_array *)sub_1C94140(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillIcon = v11;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.equipSkillIcon, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (struct UIRangeLabel_array *)sub_1C94140(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillTitleRangeLabelList = v18;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipSkillTitleRangeLabelList,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UILabel_array *)sub_1C94140(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillExplanationLabelList = v25;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipSkillExplanationLabelList,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.COLOR_INVALID = (struct UnityEngine_Color_o)xmmword_CFF850;
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
    sub_1C942F0(this, method);
  if ( !LODWORD(v11->max_length) )
LABEL_25:
    sub_1C942F8(this);
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
  System_String_o *equipTargetId1; // x1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v12; // x21
  __int64 v13; // x22
  struct ServantFaceIconComponent_o *v14; // x8
  struct ServantLeaderInfo_o *v15; // x9
  UIRangeLabel_o *nameRangeLabel; // x21
  UIExtrusionLabel_o *levelLabel; // x21
  UILabel_o *maxLevelLabel; // x21
  UILabel_o *costLabel; // x21
  UIIconLabel_o *attackIconLabel; // x21
  UIIconLabel_o *hpIconLabel; // x21
  UILabel_o *lateExpLabel; // x21
  int32_t v23; // w22
  struct ServantStatusLimitCountGauge_o *limitCountGauge; // x21
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t limitMax; // w2
  int32_t v27; // w1
  ServantStatusLimitCountGauge_o *v28; // x0
  struct SkillIconComponent_array *equipSkillIcon; // x8
  il2cpp_array_size_t max_length; // x10
  unsigned __int64 max_length_low; // x9
  int v32; // w22
  signed __int64 v33; // x8
  SkillInfo_o *v34; // x13
  UnityEngine_Object_o *lineSprite; // x21
  struct UnityEngine_GameObject_array *equipSkillBaseList; // x8
  char v37; // w26
  int v38; // w25
  __int64 v39; // x28
  __int64 v40; // x29
  unsigned __int64 v41; // x23
  unsigned __int64 v42; // x9
  __int64 v43; // x8
  struct UILabel_array *equipSkillExplanationLabelList; // x9
  ServantStatusListViewItemDrawEquip_c *v45; // x0
  UILabel_o *v46; // x21
  System_String_o *v47; // x22
  struct UILabel_array *v48; // x8
  __int64 v49; // x8
  int32_t skillPitch; // w9
  int v51; // w10
  int v52; // w8
  il2cpp_array_size_t v53; // x11
  __int64 v54; // x9
  int32_t v55; // w21
  struct ServantEntity_o *v56; // x8
  int v57; // w21
  int v58; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x21
  float v63; // s8
  int32_t v64; // w1
  int32_t v65; // w1
  int v66; // w21
  float v67; // s8
  float v68; // s11
  float v69; // s9
  float v70; // s10
  struct UnityEngine_GameObject_array *v71; // x8
  float v72; // s8
  float v73; // s9
  unsigned int v74; // w25
  float v75; // s10
  unsigned int v76; // w9
  unsigned int v77; // w11
  SkillInfo_o *v78; // x29
  struct SkillIconComponent_array *v79; // x8
  struct UIRangeLabel_array *equipSkillTitleRangeLabelList; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v82; // x21
  __int64 v83; // x22
  int32_t v84; // w21
  int32_t Rarity; // w0
  struct UnityEngine_GameObject_array *v86; // x8
  struct UILabel_array *v87; // x8
  UILabel_o *v88; // x8
  int32_t mHeight; // w21
  int32_t v90; // w9
  struct ServantLeaderInfo_o *v91; // x8
  __int64 v92; // x21
  __int64 v93; // x22
  int32_t v94; // w22
  struct SkillIconComponent_array *v95; // x8
  struct UIRangeLabel_array *v96; // x8
  struct UILabel_array *v97; // x8
  UnityEngine_Object_o *equipButton; // x21
  __int64 barExp; // [xsp+18h] [xbp-98h] BYREF
  int32_t exp; // [xsp+20h] [xbp-90h] BYREF
  int32_t EquipLevel; // [xsp+24h] [xbp-8Ch] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D29C31 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&ServantStatusListViewItemDrawEquip_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C94098(&StringLiteral_11964/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D29C31 = 1;
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
  equipIcon = (SkillIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11964/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, 0);
  if ( !explanationLabel )
    goto LABEL_189;
  UILabel__set_text(explanationLabel, (System_String_o *)equipIcon, 0);
  if ( item->fields.userSvtEntity )
  {
    equipTargetId1 = (System_String_o *)item->fields.equipTargetId1;
    equipIcon = (SkillIconComponent_o *)this->fields.equipIcon;
    if ( (__int64)equipTargetId1 >= 1 )
    {
      if ( !equipIcon )
        goto LABEL_189;
      ServantFaceIconComponent__Set_41844756((ServantFaceIconComponent_o *)equipIcon, (int64_t)equipTargetId1, 0, 0, 0);
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
  *(_QWORD *)&v103.fields.currentCryptoKey = v13;
  *(_QWORD *)&v103.fields.fakeValue = v12;
  equipIcon = (SkillIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v103, 0);
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
  ServantFaceIconComponent__Set_41851076(this->fields.equipIcon, v15->fields.equipTarget1, 0, 0, 0);
LABEL_24:
  equipIcon = (SkillIconComponent_o *)item->fields.equipServantEntity;
  nameRangeLabel = this->fields.nameRangeLabel;
  if ( equipIcon )
  {
    equipIcon = (SkillIconComponent_o *)ServantEntity__getName((ServantEntity_o *)equipIcon, -1, -1, 0, 0);
    equipTargetId1 = (System_String_o *)equipIcon;
    if ( !nameRangeLabel )
      goto LABEL_189;
  }
  else
  {
    equipTargetId1 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !nameRangeLabel )
      goto LABEL_189;
  }
  UIRangeLabel__Set(nameRangeLabel, equipTargetId1, 0, 1, 0, 0, 0);
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
  UIIconLabel__Set_41867060(attackIconLabel, 5, (int32_t)equipIcon, 0, 0, 0, 0, 0, 0, 0, 0);
  hpIconLabel = this->fields.hpIconLabel;
  equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipHp(item, 0);
  if ( !hpIconLabel )
    goto LABEL_189;
  UIIconLabel__Set_41867060(hpIconLabel, 3, (int32_t)equipIcon, 0, 0, 0, 0, 0, 0, 0, 0);
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
    v23 = HIDWORD(barExp);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    equipIcon = (SkillIconComponent_o *)LocalizationManager__GetNumberFormat(v23, 0);
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
    v27 = (int)equipIcon;
    v28 = limitCountGauge;
  }
  else
  {
    if ( !limitCountGauge )
      goto LABEL_189;
    v28 = this->fields.limitCountGauge;
    v27 = 0;
    limitMax = 0;
  }
  ServantStatusLimitCountGauge__Set(v28, v27, limitMax, 0);
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
    v32 = 0;
    v33 = 0;
    do
    {
      if ( v33 < (int)max_length_low )
      {
        if ( v33 >= max_length_low )
LABEL_190:
          sub_1C942F8(equipIcon);
        v34 = skillInfoList->m_Items[v33];
        if ( v34 && v34->fields.id >= 1 )
          v32 = v33 + 1;
      }
      ++v33;
    }
    while ( v33 < (int)max_length );
  }
  else
  {
LABEL_59:
    v32 = 0;
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, v32 > 0, 0);
  }
  equipSkillBaseList = this->fields.equipSkillBaseList;
  if ( !equipSkillBaseList )
    goto LABEL_189;
  v37 = 0;
  v38 = 0;
  v39 = 4;
  v40 = 0x100000000LL;
  while ( 1 )
  {
    v41 = v39 - 4;
    if ( v39 - 4 >= SLODWORD(equipSkillBaseList->max_length) )
      break;
    if ( skillInfoList )
    {
      v42 = LODWORD(skillInfoList->max_length);
      if ( (__int64)v41 < (int)v42 )
      {
        if ( v41 >= v42 )
          goto LABEL_190;
        v43 = *((_QWORD *)&skillInfoList->obj.klass + v39);
        if ( v43 )
        {
          if ( *(int *)(v43 + 16) >= 1 )
          {
            equipSkillExplanationLabelList = this->fields.equipSkillExplanationLabelList;
            if ( !equipSkillExplanationLabelList )
              goto LABEL_189;
            if ( v41 >= LODWORD(equipSkillExplanationLabelList->max_length) )
              goto LABEL_190;
            v45 = ServantStatusListViewItemDrawEquip_TypeInfo;
            v46 = (UILabel_o *)*((_QWORD *)&equipSkillExplanationLabelList->obj.klass + v39);
            v47 = *(System_String_o **)(v43 + 40);
            if ( !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo);
              v45 = ServantStatusListViewItemDrawEquip_TypeInfo;
            }
            equipIcon = (SkillIconComponent_o *)WrapControlText__textAdjust(
                                                  v46,
                                                  v47,
                                                  v45->static_fields->DETAIL_FONT_SIZE,
                                                  v45->static_fields->DETAIL_FONT_SIZE,
                                                  0);
            v48 = this->fields.equipSkillExplanationLabelList;
            if ( !v48 )
              goto LABEL_189;
            if ( v41 >= LODWORD(v48->max_length) )
              goto LABEL_190;
            v49 = *((_QWORD *)&v48->obj.klass + v39);
            if ( !v49 )
              goto LABEL_189;
            skillPitch = this->fields.skillPitch;
            v51 = ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->ADJUST_HEIGHT + *(_DWORD *)(v49 + 172);
            v52 = v51 - skillPitch;
            if ( v51 >= skillPitch )
            {
              if ( !skillInfoList )
                goto LABEL_189;
              v53 = skillInfoList->max_length;
              v38 += v51;
              if ( v41 == (_DWORD)v53 - 1 )
                goto LABEL_88;
              if ( v39 - 3 >= (unsigned __int64)(unsigned int)v53 )
                goto LABEL_190;
              v54 = *(__int64 *)((char *)skillInfoList->m_Items + (v40 >> 29));
              if ( !v54 || *(int *)(v54 + 16) <= 0 )
LABEL_88:
                v37 |= v52 > 10;
            }
            else
            {
              v38 += skillPitch;
            }
          }
        }
      }
    }
    equipSkillBaseList = this->fields.equipSkillBaseList;
    ++v39;
    v40 += 0x100000000LL;
    if ( !equipSkillBaseList )
      goto LABEL_189;
  }
  if ( item->fields._IsDisplayCombineButton_k__BackingField && item->fields.equipServantEntity )
  {
    v55 = ServantStatusListViewItem__get_EquipLevel(item, 0);
    if ( v55 < ServantStatusListViewItem__get_EquipMaxLevel(item, 0) )
      goto LABEL_96;
    equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipLimitCount(item, 0);
    v56 = item->fields.equipServantEntity;
    if ( !v56 )
      goto LABEL_189;
    if ( (int)equipIcon < v56->fields.limitMax )
    {
LABEL_96:
      equipIcon = (SkillIconComponent_o *)this->fields.reinforceObject;
      if ( (v37 & 1) != 0 )
        v57 = 50;
      else
        v57 = 38;
      if ( !equipIcon )
        goto LABEL_189;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, 1, 0);
      equipIcon = (SkillIconComponent_o *)this->fields.reinforceButton;
      if ( !equipIcon )
        goto LABEL_189;
      BYTE1(equipIcon[1].monitor) = 1;
      v38 += v57;
      UICommonButton__SetEnable((UICommonButton_o *)equipIcon, item->fields._CanMoveCombine_k__BackingField, 0);
      if ( v38 >= 0 )
        v58 = v38;
      else
        v58 = v38 + 1;
      GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v58 >> 1), 0);
    }
  }
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v63 = y + (float)v38;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    equipIcon = (SkillIconComponent_o *)this->fields.baseCollider;
    if ( !equipIcon )
      goto LABEL_189;
    v106.fields.x = x;
    v106.fields.y = v63;
    v106.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)equipIcon, v106, 0);
  }
  equipIcon = (SkillIconComponent_o *)this->fields.baseSprite;
  if ( !equipIcon )
    goto LABEL_189;
  v64 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)equipIcon, v64, 0);
  equipIcon = (SkillIconComponent_o *)this->fields.baseSprite;
  if ( !equipIcon )
    goto LABEL_189;
  v65 = v63 == INFINITY ? 0x80000000 : (int)v63;
  UIWidget__set_height((UIWidget_o *)equipIcon, v65, 0);
  equipIcon = (SkillIconComponent_o *)this->fields.titleSprite;
  v66 = v38 >= 0 ? v38 : v38 + 1;
  if ( !equipIcon )
    goto LABEL_189;
  v67 = this->fields.titleBasePosition.fields.x;
  v68 = this->fields.titleBasePosition.fields.y;
  v69 = this->fields.titleBasePosition.fields.z;
  equipIcon = (SkillIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)equipIcon, 0);
  if ( !equipIcon
    || (v70 = (float)(v66 >> 1),
        v107.fields.y = v68 + v70,
        v107.fields.x = v67,
        v107.fields.z = v69,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)equipIcon, v107, 0),
        (v71 = this->fields.equipSkillBaseList) == 0) )
  {
LABEL_189:
    sub_1C942F0(equipIcon, equipTargetId1);
  }
  v72 = this->fields.skillBasePosition.fields.z;
  v73 = this->fields.skillBasePosition.fields.x;
  v74 = 0;
  v75 = this->fields.skillBasePosition.fields.y + v70;
  while ( 1 )
  {
    v76 = v71->max_length;
    if ( (int)v74 >= (int)v76 )
      break;
    if ( !skillInfoList )
      goto LABEL_145;
    v77 = skillInfoList->max_length;
    if ( (int)v74 >= (int)v77 )
      goto LABEL_145;
    if ( v74 >= v77 )
      goto LABEL_190;
    v78 = skillInfoList->m_Items[v74];
    if ( !v78 || v78->fields.id < 1 )
    {
LABEL_145:
      equipTargetId1 = 0;
      goto LABEL_146;
    }
    if ( v74 >= v76 )
      goto LABEL_190;
    equipIcon = (SkillIconComponent_o *)v71->m_Items[v74];
    if ( !equipIcon )
      goto LABEL_189;
    equipIcon = (SkillIconComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)equipIcon, 0);
    if ( !equipIcon )
      goto LABEL_189;
    v108.fields.x = v73;
    v108.fields.y = v75;
    v108.fields.z = v72;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)equipIcon, v108, 0);
    v79 = this->fields.equipSkillIcon;
    if ( !v79 )
      goto LABEL_189;
    if ( v74 >= LODWORD(v79->max_length) )
      goto LABEL_190;
    equipIcon = v79->m_Items[v74];
    if ( !equipIcon )
      goto LABEL_189;
    SkillIconComponent__Set(equipIcon, v78->fields.id, 0);
    equipSkillTitleRangeLabelList = this->fields.equipSkillTitleRangeLabelList;
    if ( !equipSkillTitleRangeLabelList )
      goto LABEL_189;
    if ( v74 >= LODWORD(equipSkillTitleRangeLabelList->max_length) )
      goto LABEL_190;
    equipIcon = (SkillIconComponent_o *)equipSkillTitleRangeLabelList->m_Items[v74];
    if ( !equipIcon )
      goto LABEL_189;
    UIRangeLabel__Set((UIRangeLabel_o *)equipIcon, v78->fields.title, 0, 1, 0, 0, 0);
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v83 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v82 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v104.fields.currentCryptoKey = v83;
      *(_QWORD *)&v104.fields.fakeValue = v82;
      equipIcon = (SkillIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v104, 0);
      if ( !item->fields.userSvtEntity )
        goto LABEL_189;
      v84 = (int)equipIcon;
      Rarity = UserServantEntity__getRarity(item->fields.userSvtEntity, 0);
    }
    else
    {
      v91 = item->fields.servantLeaderInfo;
      if ( !v91 )
      {
        v94 = -1;
        v84 = -1;
        goto LABEL_164;
      }
      v93 = *(_QWORD *)&v91->fields.svtId.fields.currentCryptoKey;
      v92 = *(_QWORD *)&v91->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v105.fields.currentCryptoKey = v93;
      *(_QWORD *)&v105.fields.fakeValue = v92;
      equipIcon = (SkillIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v105, 0);
      if ( !item->fields.servantLeaderInfo )
        goto LABEL_189;
      v84 = (int)equipIcon;
      Rarity = ServantLeaderInfo__getRarity(item->fields.servantLeaderInfo, 0);
    }
    v94 = Rarity;
LABEL_164:
    equipIcon = (SkillIconComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !equipIcon )
      goto LABEL_189;
    equipIcon = (SkillIconComponent_o *)PartyOrganizationUtility__IsRarityRestriction_35180916(
                                          (PartyOrganizationUtility_o *)equipIcon,
                                          v84,
                                          v94,
                                          v78->fields.id,
                                          v78->fields.lv,
                                          0);
    if ( ((unsigned __int8)equipIcon & 1) != 0 )
    {
      v95 = this->fields.equipSkillIcon;
      if ( !v95 )
        goto LABEL_189;
      if ( v74 >= LODWORD(v95->max_length) )
        goto LABEL_190;
      equipIcon = v95->m_Items[v74];
      if ( !equipIcon )
        goto LABEL_189;
      SkillIconComponent__SetInvalidColor(equipIcon, this->fields.COLOR_INVALID, 0);
      v96 = this->fields.equipSkillTitleRangeLabelList;
      if ( !v96 )
        goto LABEL_189;
      if ( v74 >= LODWORD(v96->max_length) )
        goto LABEL_190;
      equipIcon = (SkillIconComponent_o *)v96->m_Items[v74];
      if ( !equipIcon )
        goto LABEL_189;
      UIRangeLabel__set_color((UIRangeLabel_o *)equipIcon, this->fields.COLOR_INVALID, 0);
      v97 = this->fields.equipSkillExplanationLabelList;
      if ( !v97 )
        goto LABEL_189;
      if ( v74 >= LODWORD(v97->max_length) )
        goto LABEL_190;
      equipIcon = (SkillIconComponent_o *)v97->m_Items[v74];
      if ( !equipIcon )
        goto LABEL_189;
      UIWidget__set_color((UIWidget_o *)equipIcon, this->fields.COLOR_INVALID, 0);
    }
    equipTargetId1 = (System_String_o *)(&dword_0 + 1);
LABEL_146:
    v86 = this->fields.equipSkillBaseList;
    if ( !v86 )
      goto LABEL_189;
    if ( v74 >= LODWORD(v86->max_length) )
      goto LABEL_190;
    equipIcon = (SkillIconComponent_o *)v86->m_Items[v74];
    if ( equipIcon )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, (bool)equipTargetId1, 0);
      v87 = this->fields.equipSkillExplanationLabelList;
      if ( v87 )
      {
        if ( v74 >= LODWORD(v87->max_length) )
          goto LABEL_190;
        v88 = v87->m_Items[v74];
        if ( v88 )
        {
          equipIcon = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          mHeight = v88->fields.mHeight;
          if ( !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo);
            equipIcon = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          }
          ++v74;
          v71 = this->fields.equipSkillBaseList;
          v90 = *((_DWORD *)equipIcon[2].monitor + 1) + mHeight;
          if ( v90 < this->fields.skillPitch )
            v90 = this->fields.skillPitch;
          v75 = v75 - (float)v90;
          if ( v71 )
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