void __fastcall ServantStatusListViewItemDrawEquip___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B193E2 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItemDrawEquip_TypeInfo, v1);
    byte_4B193E2 = 1;
  }
  *ServantStatusListViewItemDrawEquip_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawEquip_StaticFields)0x2800000012LL;
}


void __fastcall ServantStatusListViewItemDrawEquip___ctor(
        ServantStatusListViewItemDrawEquip_o *this,
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

  if ( (byte_4B193E1 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1BCAFF8(&SkillIconComponent___TypeInfo, v4);
    sub_1BCAFF8(&UILabel___TypeInfo, v5);
    sub_1BCAFF8(&UIRangeLabel___TypeInfo, v6);
    byte_4B193E1 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_1BCB0A0(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v7->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillBaseList = v8;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.equipSkillBaseList, (int32_t)v8, v9, v10);
  v11 = (struct SkillIconComponent_array *)sub_1BCB0A0(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillIcon = v11;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.equipSkillIcon, (int32_t)v11, v12, v13);
  v14 = (struct UIRangeLabel_array *)sub_1BCB0A0(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillTitleRangeLabelList = v14;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.equipSkillTitleRangeLabelList, (int32_t)v14, v15, v16);
  v17 = (struct UILabel_array *)sub_1BCB0A0(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillExplanationLabelList = v17;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.equipSkillExplanationLabelList, (int32_t)v17, v18, v19);
  this->fields.COLOR_INVALID = (struct UnityEngine_Color_o)xmmword_BE2C60;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawEquip__Awake(
        ServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *equipSkillBaseList; // x8
  ServantStatusListViewItemDrawEquip_o *v3; // x19
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
  int v16; // w9
  struct UnityEngine_GameObject_array *v17; // x8
  float v18; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  equipSkillBaseList = this->fields.equipSkillBaseList;
  if ( !equipSkillBaseList )
    goto LABEL_24;
  v3 = this;
  if ( (int)equipSkillBaseList->max_length >= 2 )
  {
    this = (ServantStatusListViewItemDrawEquip_o *)equipSkillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v6 = v3->fields.equipSkillBaseList;
    if ( !v6 )
      goto LABEL_24;
    if ( v6->max_length <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawEquip_o *)v6->m_Items[1];
    if ( !this )
      goto LABEL_24;
    v7 = v5;
    this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v8 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    equipSkillBaseList = v3->fields.equipSkillBaseList;
    v9 = (float)(v7 - v8) == INFINITY ? 0x80000000 : (int)(float)(v7 - v8);
    v3->fields.skillPitch = v9;
    if ( !equipSkillBaseList )
      goto LABEL_24;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquip_o *)v3->fields.titleSprite;
  v11 = v3->fields.skillPitch * equipSkillBaseList->max_length;
  v12 = (float)(baseSprite->fields.mHeight - v11);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v12;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v16 = v11 >= 0 ? v11 : v11 + 1;
  v17 = v3->fields.equipSkillBaseList;
  v18 = (float)(v16 >> 1);
  v3->fields.titleBasePosition.fields.x = v13;
  v3->fields.titleBasePosition.fields.z = v15;
  v3->fields.titleBasePosition.fields.y = v14 - v18;
  if ( !v17 )
LABEL_24:
    sub_1BCB254(this, method);
  if ( !v17->max_length )
LABEL_25:
    sub_1BCB25C(this, method, v4);
  this = (ServantStatusListViewItemDrawEquip_o *)v17->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.skillBasePosition.fields.x = localPosition.fields.x;
  v3->fields.skillBasePosition.fields.z = localPosition.fields.z;
  v3->fields.skillBasePosition.fields.y = localPosition.fields.y - v18;
}


int32_t __fastcall ServantStatusListViewItemDrawEquip__GetKind(
        ServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  return 3;
}


void __fastcall ServantStatusListViewItemDrawEquip__SetItem(
        ServantStatusListViewItemDrawEquip_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UILabel_o *explanationLabel; // x21
  SkillIconComponent_o *equipIcon; // x0
  System_String_o *equipTargetId1; // x1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v18; // x21
  __int64 v19; // x22
  struct ServantFaceIconComponent_o *v20; // x8
  struct ServantLeaderInfo_o *v21; // x9
  UIRangeLabel_o *nameRangeLabel; // x21
  UIExtrusionLabel_o *levelLabel; // x21
  UILabel_o *maxLevelLabel; // x21
  UILabel_o *costLabel; // x21
  UIIconLabel_o *attackIconLabel; // x21
  UIIconLabel_o *hpIconLabel; // x21
  UILabel_o *lateExpLabel; // x21
  int32_t v29; // w22
  struct ServantStatusLimitCountGauge_o *limitCountGauge; // x21
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t limitMax; // w2
  int32_t v33; // w1
  ServantStatusLimitCountGauge_o *v34; // x0
  __int64 v35; // x2
  struct SkillIconComponent_array *equipSkillIcon; // x8
  __int64 v37; // x10
  unsigned __int64 max_length; // x9
  int v39; // w22
  signed __int64 v40; // x8
  SkillInfo_o *v41; // x13
  UnityEngine_Object_o *lineSprite; // x21
  struct UnityEngine_GameObject_array *equipSkillBaseList; // x8
  char v44; // w26
  int v45; // w25
  __int64 v46; // x28
  __int64 v47; // x29
  unsigned __int64 v48; // x23
  unsigned __int64 v49; // x9
  __int64 v50; // x8
  struct UILabel_array *equipSkillExplanationLabelList; // x9
  ServantStatusListViewItemDrawEquip_c *v52; // x0
  UILabel_o *v53; // x21
  System_String_o *v54; // x22
  struct UILabel_array *v55; // x8
  __int64 v56; // x8
  int32_t skillPitch; // w9
  int v58; // w10
  int v59; // w8
  __int64 v60; // x11
  __int64 v61; // x9
  int32_t v62; // w21
  struct ServantEntity_o *v63; // x8
  int v64; // w21
  int v65; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x21
  float v70; // s8
  int32_t v71; // w1
  int32_t v72; // w1
  int v73; // w21
  float v74; // s8
  float v75; // s11
  float v76; // s9
  float v77; // s10
  struct UnityEngine_GameObject_array *v78; // x8
  float v79; // s8
  float v80; // s9
  il2cpp_array_size_t v81; // w25
  float v82; // s10
  il2cpp_array_size_t v83; // w9
  il2cpp_array_size_t v84; // w11
  SkillInfo_o *v85; // x29
  struct SkillIconComponent_array *v86; // x8
  struct UIRangeLabel_array *equipSkillTitleRangeLabelList; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v89; // x21
  __int64 v90; // x22
  int32_t v91; // w21
  int32_t Rarity; // w0
  struct UnityEngine_GameObject_array *v93; // x8
  struct UILabel_array *v94; // x8
  UILabel_o *v95; // x8
  int32_t mHeight; // w21
  int32_t v97; // w9
  struct ServantLeaderInfo_o *v98; // x8
  __int64 v99; // x21
  __int64 v100; // x22
  int32_t v101; // w22
  struct SkillIconComponent_array *v102; // x8
  struct UIRangeLabel_array *v103; // x8
  struct UILabel_array *v104; // x8
  UnityEngine_Object_o *equipButton; // x21
  float barExp[2]; // [xsp+18h] [xbp-98h] BYREF
  int32_t exp; // [xsp+20h] [xbp-90h] BYREF
  int32_t EquipLevel; // [xsp+24h] [xbp-8Ch] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B193E0 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, item);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BCAFF8(&ServantStatusListViewItemDrawEquip_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_1BCAFF8(&StringLiteral_11812/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, v11);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v12);
    byte_4B193E0 = 1;
  }
  skillInfoList = 0LL;
  exp = 0;
  *(_QWORD *)barExp = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  equipIcon = (SkillIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11812/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_189;
  UILabel__set_text(explanationLabel, (System_String_o *)equipIcon, 0LL);
  if ( item->fields.userSvtEntity )
  {
    equipTargetId1 = (System_String_o *)item->fields.equipTargetId1;
    equipIcon = (SkillIconComponent_o *)this->fields.equipIcon;
    if ( (__int64)equipTargetId1 >= 1 )
    {
      if ( !equipIcon )
        goto LABEL_189;
      ServantFaceIconComponent__Set_40190024(
        (ServantFaceIconComponent_o *)equipIcon,
        (int64_t)equipTargetId1,
        0LL,
        0LL,
        0LL);
      goto LABEL_24;
    }
    if ( !equipIcon )
      goto LABEL_189;
LABEL_23:
    ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)equipIcon, 0LL);
    goto LABEL_24;
  }
  servantLeaderInfo = item->fields.servantLeaderInfo;
  if ( !servantLeaderInfo || (equipTarget1 = servantLeaderInfo->fields.equipTarget1) == 0LL )
  {
    equipIcon = (SkillIconComponent_o *)this->fields.equipIcon;
    if ( !equipIcon )
      goto LABEL_189;
    goto LABEL_23;
  }
  v19 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v110.fields.currentCryptoKey = v19;
  *(_QWORD *)&v110.fields.fakeValue = v18;
  equipIcon = (SkillIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v110, 0LL);
  v20 = this->fields.equipIcon;
  if ( (int)equipIcon < 1 )
  {
    if ( !v20 )
      goto LABEL_189;
    equipIcon = (SkillIconComponent_o *)this->fields.equipIcon;
    goto LABEL_23;
  }
  v21 = item->fields.servantLeaderInfo;
  if ( !v21 || !v20 )
    goto LABEL_189;
  ServantFaceIconComponent__Set_40196320(this->fields.equipIcon, v21->fields.equipTarget1, 0LL, 0LL, 0LL);
LABEL_24:
  equipIcon = (SkillIconComponent_o *)item->fields.equipServantEntity;
  nameRangeLabel = this->fields.nameRangeLabel;
  if ( equipIcon )
  {
    equipIcon = (SkillIconComponent_o *)ServantEntity__getName((ServantEntity_o *)equipIcon, -1, -1, 0, 0LL);
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
  UIRangeLabel__Set(nameRangeLabel, equipTargetId1, 0LL, 1, 0, 0, 0LL);
  levelLabel = this->fields.levelLabel;
  EquipLevel = ServantStatusListViewItem__get_EquipLevel(item, 0LL);
  equipIcon = (SkillIconComponent_o *)System_Int32__ToString((int32_t)&EquipLevel, 0LL);
  if ( !levelLabel )
    goto LABEL_189;
  UIExtrusionLabel__set_text(levelLabel, (System_String_o *)equipIcon, 0LL);
  maxLevelLabel = this->fields.maxLevelLabel;
  EquipLevel = ServantStatusListViewItem__get_EquipMaxLevel(item, 0LL);
  equipIcon = (SkillIconComponent_o *)System_Int32__ToString((int32_t)&EquipLevel, 0LL);
  if ( !maxLevelLabel )
    goto LABEL_189;
  UILabel__set_text(maxLevelLabel, (System_String_o *)equipIcon, 0LL);
  costLabel = this->fields.costLabel;
  EquipLevel = ServantStatusListViewItem__get_EquipCost(item, 0LL);
  equipIcon = (SkillIconComponent_o *)System_Int32__ToString((int32_t)&EquipLevel, 0LL);
  if ( !costLabel )
    goto LABEL_189;
  UILabel__set_text(costLabel, (System_String_o *)equipIcon, 0LL);
  attackIconLabel = this->fields.attackIconLabel;
  equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipAtk(item, 0LL);
  if ( !attackIconLabel )
    goto LABEL_189;
  UIIconLabel__Set_40290232(attackIconLabel, 5, (int32_t)equipIcon, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  hpIconLabel = this->fields.hpIconLabel;
  equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipHp(item, 0LL);
  if ( !hpIconLabel )
    goto LABEL_189;
  UIIconLabel__Set_40290232(hpIconLabel, 3, (int32_t)equipIcon, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__GetEquipExpInfo(
                                        item,
                                        &exp,
                                        (int32_t *)&barExp[1],
                                        barExp,
                                        0LL);
  if ( !this->fields.expBase )
    goto LABEL_189;
  if ( ((unsigned __int8)equipIcon & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.expBase, 1, 0LL);
    equipIcon = (SkillIconComponent_o *)this->fields.lateExpBase;
    if ( !equipIcon )
      goto LABEL_189;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, SLODWORD(barExp[1]) > 0, 0LL);
    lateExpLabel = this->fields.lateExpLabel;
    v29 = LODWORD(barExp[1]);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    equipIcon = (SkillIconComponent_o *)LocalizationManager__GetNumberFormat(v29, 0LL);
    if ( !lateExpLabel )
      goto LABEL_189;
    UILabel__set_text(lateExpLabel, (System_String_o *)equipIcon, 0LL);
    equipIcon = (SkillIconComponent_o *)this->fields.expBar;
    if ( !equipIcon )
      goto LABEL_189;
    UIProgressBar__set_value((UIProgressBar_o *)equipIcon, barExp[0], 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive(this->fields.expBase, 0, 0LL);
  }
  limitCountGauge = this->fields.limitCountGauge;
  if ( item->fields.equipServantEntity )
  {
    equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipLimitCount(item, 0LL);
    equipServantEntity = item->fields.equipServantEntity;
    if ( !equipServantEntity || !limitCountGauge )
      goto LABEL_189;
    limitMax = equipServantEntity->fields.limitMax;
    v33 = (int)equipIcon;
    v34 = limitCountGauge;
  }
  else
  {
    if ( !limitCountGauge )
      goto LABEL_189;
    v34 = this->fields.limitCountGauge;
    v33 = 0;
    limitMax = 0;
  }
  ServantStatusLimitCountGauge__Set(v34, v33, limitMax, 0LL);
  ServantStatusListViewItem__GetEquipSkillInfo(item, &skillInfoList, 0LL);
  if ( !skillInfoList )
    goto LABEL_59;
  equipSkillIcon = this->fields.equipSkillIcon;
  if ( !equipSkillIcon )
    goto LABEL_189;
  v37 = *(_QWORD *)&equipSkillIcon->max_length;
  if ( v37 << 32 >= 1 )
  {
    max_length = skillInfoList->max_length;
    v39 = 0;
    v40 = 0LL;
    do
    {
      if ( v40 < (int)max_length )
      {
        if ( v40 >= max_length )
LABEL_190:
          sub_1BCB25C(equipIcon, equipTargetId1, v35);
        v41 = skillInfoList->m_Items[v40];
        if ( v41 && v41->fields.id >= 1 )
          v39 = v40 + 1;
      }
      ++v40;
    }
    while ( v40 < (int)v37 );
  }
  else
  {
LABEL_59:
    v39 = 0;
  }
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  equipIcon = (SkillIconComponent_o *)UnityEngine_Object__op_Inequality(lineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)equipIcon & 1) != 0 )
  {
    equipIcon = (SkillIconComponent_o *)this->fields.lineSprite;
    if ( !equipIcon )
      goto LABEL_189;
    equipIcon = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)equipIcon, 0LL);
    if ( !equipIcon )
      goto LABEL_189;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, v39 > 0, 0LL);
  }
  equipSkillBaseList = this->fields.equipSkillBaseList;
  if ( !equipSkillBaseList )
    goto LABEL_189;
  v44 = 0;
  v45 = 0;
  v46 = 4LL;
  v47 = 0x100000000LL;
  while ( 1 )
  {
    v48 = v46 - 4;
    if ( v46 - 4 >= (int)equipSkillBaseList->max_length )
      break;
    if ( skillInfoList )
    {
      v49 = skillInfoList->max_length;
      if ( (__int64)v48 < (int)v49 )
      {
        if ( v48 >= v49 )
          goto LABEL_190;
        v50 = *((_QWORD *)&skillInfoList->obj.klass + v46);
        if ( v50 )
        {
          if ( *(int *)(v50 + 16) >= 1 )
          {
            equipSkillExplanationLabelList = this->fields.equipSkillExplanationLabelList;
            if ( !equipSkillExplanationLabelList )
              goto LABEL_189;
            if ( v48 >= equipSkillExplanationLabelList->max_length )
              goto LABEL_190;
            v52 = ServantStatusListViewItemDrawEquip_TypeInfo;
            v53 = (UILabel_o *)*((_QWORD *)&equipSkillExplanationLabelList->obj.klass + v46);
            v54 = *(System_String_o **)(v50 + 40);
            if ( !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo);
              v52 = ServantStatusListViewItemDrawEquip_TypeInfo;
            }
            equipIcon = (SkillIconComponent_o *)WrapControlText__textAdjust(
                                                  v53,
                                                  v54,
                                                  v52->static_fields->DETAIL_FONT_SIZE,
                                                  v52->static_fields->DETAIL_FONT_SIZE,
                                                  0LL);
            v55 = this->fields.equipSkillExplanationLabelList;
            if ( !v55 )
              goto LABEL_189;
            if ( v48 >= v55->max_length )
              goto LABEL_190;
            v56 = *((_QWORD *)&v55->obj.klass + v46);
            if ( !v56 )
              goto LABEL_189;
            skillPitch = this->fields.skillPitch;
            v58 = ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->ADJUST_HEIGHT + *(_DWORD *)(v56 + 172);
            v59 = v58 - skillPitch;
            if ( v58 >= skillPitch )
            {
              if ( !skillInfoList )
                goto LABEL_189;
              v60 = *(_QWORD *)&skillInfoList->max_length;
              v45 += v58;
              if ( v48 == (_DWORD)v60 - 1 )
                goto LABEL_88;
              if ( v46 - 3 >= (unsigned __int64)(unsigned int)v60 )
                goto LABEL_190;
              v61 = *(__int64 *)((char *)skillInfoList->m_Items + (v47 >> 29));
              if ( !v61 || *(int *)(v61 + 16) <= 0 )
LABEL_88:
                v44 |= v59 > 10;
            }
            else
            {
              v45 += skillPitch;
            }
          }
        }
      }
    }
    equipSkillBaseList = this->fields.equipSkillBaseList;
    ++v46;
    v47 += 0x100000000LL;
    if ( !equipSkillBaseList )
      goto LABEL_189;
  }
  if ( item->fields._IsDisplayCombineButton_k__BackingField && item->fields.equipServantEntity )
  {
    v62 = ServantStatusListViewItem__get_EquipLevel(item, 0LL);
    if ( v62 < ServantStatusListViewItem__get_EquipMaxLevel(item, 0LL) )
      goto LABEL_96;
    equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipLimitCount(item, 0LL);
    v63 = item->fields.equipServantEntity;
    if ( !v63 )
      goto LABEL_189;
    if ( (int)equipIcon < v63->fields.limitMax )
    {
LABEL_96:
      equipIcon = (SkillIconComponent_o *)this->fields.reinforceObject;
      if ( (v44 & 1) != 0 )
        v64 = 50;
      else
        v64 = 38;
      if ( !equipIcon )
        goto LABEL_189;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, 1, 0LL);
      equipIcon = (SkillIconComponent_o *)this->fields.reinforceButton;
      if ( !equipIcon )
        goto LABEL_189;
      BYTE1(equipIcon[1].monitor) = 1;
      v45 += v64;
      UICommonButton__SetEnable((UICommonButton_o *)equipIcon, item->fields._CanMoveCombine_k__BackingField, 0LL);
      if ( v45 >= 0 )
        v65 = v45;
      else
        v65 = v45 + 1;
      GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v65 >> 1), 0LL);
    }
  }
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v70 = y + (float)v45;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    equipIcon = (SkillIconComponent_o *)this->fields.baseCollider;
    if ( !equipIcon )
      goto LABEL_189;
    v113.fields.x = x;
    v113.fields.y = v70;
    v113.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)equipIcon, v113, 0LL);
  }
  equipIcon = (SkillIconComponent_o *)this->fields.baseSprite;
  if ( !equipIcon )
    goto LABEL_189;
  v71 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)equipIcon, v71, 0LL);
  equipIcon = (SkillIconComponent_o *)this->fields.baseSprite;
  if ( !equipIcon )
    goto LABEL_189;
  v72 = v70 == INFINITY ? 0x80000000 : (int)v70;
  UIWidget__set_height((UIWidget_o *)equipIcon, v72, 0LL);
  equipIcon = (SkillIconComponent_o *)this->fields.titleSprite;
  v73 = v45 >= 0 ? v45 : v45 + 1;
  if ( !equipIcon )
    goto LABEL_189;
  v74 = this->fields.titleBasePosition.fields.x;
  v75 = this->fields.titleBasePosition.fields.y;
  v76 = this->fields.titleBasePosition.fields.z;
  equipIcon = (SkillIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)equipIcon, 0LL);
  if ( !equipIcon
    || (v77 = (float)(v73 >> 1),
        v114.fields.y = v75 + v77,
        v114.fields.x = v74,
        v114.fields.z = v76,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)equipIcon, v114, 0LL),
        (v78 = this->fields.equipSkillBaseList) == 0LL) )
  {
LABEL_189:
    sub_1BCB254(equipIcon, equipTargetId1);
  }
  v79 = this->fields.skillBasePosition.fields.z;
  v80 = this->fields.skillBasePosition.fields.x;
  v81 = 0;
  v82 = this->fields.skillBasePosition.fields.y + v77;
  while ( 1 )
  {
    v83 = v78->max_length;
    if ( (int)v81 >= (int)v83 )
      break;
    if ( !skillInfoList )
      goto LABEL_145;
    v84 = skillInfoList->max_length;
    if ( (int)v81 >= (int)v84 )
      goto LABEL_145;
    if ( v81 >= v84 )
      goto LABEL_190;
    v85 = skillInfoList->m_Items[v81];
    if ( !v85 || v85->fields.id < 1 )
    {
LABEL_145:
      equipTargetId1 = 0LL;
      goto LABEL_146;
    }
    if ( v81 >= v83 )
      goto LABEL_190;
    equipIcon = (SkillIconComponent_o *)v78->m_Items[v81];
    if ( !equipIcon )
      goto LABEL_189;
    equipIcon = (SkillIconComponent_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)equipIcon,
                                          0LL);
    if ( !equipIcon )
      goto LABEL_189;
    v115.fields.x = v80;
    v115.fields.y = v82;
    v115.fields.z = v79;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)equipIcon, v115, 0LL);
    v86 = this->fields.equipSkillIcon;
    if ( !v86 )
      goto LABEL_189;
    if ( v81 >= v86->max_length )
      goto LABEL_190;
    equipIcon = v86->m_Items[v81];
    if ( !equipIcon )
      goto LABEL_189;
    SkillIconComponent__Set(equipIcon, v85->fields.id, 0LL);
    equipSkillTitleRangeLabelList = this->fields.equipSkillTitleRangeLabelList;
    if ( !equipSkillTitleRangeLabelList )
      goto LABEL_189;
    if ( v81 >= equipSkillTitleRangeLabelList->max_length )
      goto LABEL_190;
    equipIcon = (SkillIconComponent_o *)equipSkillTitleRangeLabelList->m_Items[v81];
    if ( !equipIcon )
      goto LABEL_189;
    UIRangeLabel__Set((UIRangeLabel_o *)equipIcon, v85->fields.title, 0LL, 1, 0, 0, 0LL);
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v90 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v89 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v111.fields.currentCryptoKey = v90;
      *(_QWORD *)&v111.fields.fakeValue = v89;
      equipIcon = (SkillIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v111, 0LL);
      if ( !item->fields.userSvtEntity )
        goto LABEL_189;
      v91 = (int)equipIcon;
      Rarity = UserServantEntity__getRarity(item->fields.userSvtEntity, 0LL);
    }
    else
    {
      v98 = item->fields.servantLeaderInfo;
      if ( !v98 )
      {
        v101 = -1;
        v91 = -1;
        goto LABEL_164;
      }
      v100 = *(_QWORD *)&v98->fields.svtId.fields.currentCryptoKey;
      v99 = *(_QWORD *)&v98->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v112.fields.currentCryptoKey = v100;
      *(_QWORD *)&v112.fields.fakeValue = v99;
      equipIcon = (SkillIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v112, 0LL);
      if ( !item->fields.servantLeaderInfo )
        goto LABEL_189;
      v91 = (int)equipIcon;
      Rarity = ServantLeaderInfo__getRarity(item->fields.servantLeaderInfo, 0LL);
    }
    v101 = Rarity;
LABEL_164:
    equipIcon = (SkillIconComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !equipIcon )
      goto LABEL_189;
    equipIcon = (SkillIconComponent_o *)PartyOrganizationUtility__IsRarityRestriction_33755820(
                                          (PartyOrganizationUtility_o *)equipIcon,
                                          v91,
                                          v101,
                                          v85->fields.id,
                                          v85->fields.lv,
                                          0LL);
    if ( ((unsigned __int8)equipIcon & 1) != 0 )
    {
      v102 = this->fields.equipSkillIcon;
      if ( !v102 )
        goto LABEL_189;
      if ( v81 >= v102->max_length )
        goto LABEL_190;
      equipIcon = v102->m_Items[v81];
      if ( !equipIcon )
        goto LABEL_189;
      SkillIconComponent__SetInvalidColor(equipIcon, this->fields.COLOR_INVALID, 0LL);
      v103 = this->fields.equipSkillTitleRangeLabelList;
      if ( !v103 )
        goto LABEL_189;
      if ( v81 >= v103->max_length )
        goto LABEL_190;
      equipIcon = (SkillIconComponent_o *)v103->m_Items[v81];
      if ( !equipIcon )
        goto LABEL_189;
      UIRangeLabel__set_color((UIRangeLabel_o *)equipIcon, this->fields.COLOR_INVALID, 0LL);
      v104 = this->fields.equipSkillExplanationLabelList;
      if ( !v104 )
        goto LABEL_189;
      if ( v81 >= v104->max_length )
        goto LABEL_190;
      equipIcon = (SkillIconComponent_o *)v104->m_Items[v81];
      if ( !equipIcon )
        goto LABEL_189;
      UIWidget__set_color((UIWidget_o *)equipIcon, this->fields.COLOR_INVALID, 0LL);
    }
    equipTargetId1 = (System_String_o *)(&dword_0 + 1);
LABEL_146:
    v93 = this->fields.equipSkillBaseList;
    if ( !v93 )
      goto LABEL_189;
    if ( v81 >= v93->max_length )
      goto LABEL_190;
    equipIcon = (SkillIconComponent_o *)v93->m_Items[v81];
    if ( equipIcon )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, (bool)equipTargetId1, 0LL);
      v94 = this->fields.equipSkillExplanationLabelList;
      if ( v94 )
      {
        if ( v81 >= v94->max_length )
          goto LABEL_190;
        v95 = v94->m_Items[v81];
        if ( v95 )
        {
          equipIcon = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          mHeight = v95->fields.mHeight;
          if ( !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo);
            equipIcon = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          }
          ++v81;
          v78 = this->fields.equipSkillBaseList;
          v97 = *((_DWORD *)equipIcon[2].monitor + 1) + mHeight;
          if ( v97 < this->fields.skillPitch )
            v97 = this->fields.skillPitch;
          v82 = v82 - (float)v97;
          if ( v78 )
            continue;
        }
      }
    }
    goto LABEL_189;
  }
  equipButton = (UnityEngine_Object_o *)this->fields.equipButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipButton, 0LL, 0LL) )
  {
    equipIcon = (SkillIconComponent_o *)(item->fields.isEquipChangeMode
                                      || ServantStatusListViewItem__get_IsEquip(item, 0LL));
    if ( this->fields.equipButton )
    {
      UICommonButton__SetColliderEnable(this->fields.equipButton, (unsigned __int8)equipIcon & 1, 1, 0LL);
      return;
    }
    goto LABEL_189;
  }
}