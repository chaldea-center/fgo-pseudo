void __fastcall ServantStatusListViewItemDrawEquip___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ServantStatusListViewItemDrawEquip_StaticFields *static_fields; // x8

  if ( (byte_48DF9A5 & 1) == 0 )
  {
    sub_1B00CCC(&ServantStatusListViewItemDrawEquip_TypeInfo, v1);
    byte_48DF9A5 = 1;
  }
  static_fields = ServantStatusListViewItemDrawEquip_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DETAIL_FONT_SIZE = 0x1F400000012LL;
  static_fields->ADJUST_HEIGHT = 40;
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
  int32_t v10; // w3
  struct SkillIconComponent_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  struct UIRangeLabel_array *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct UILabel_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_48DF9A4 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1B00CCC(&SkillIconComponent___TypeInfo, v4);
    sub_1B00CCC(&UILabel___TypeInfo, v5);
    sub_1B00CCC(&UIRangeLabel___TypeInfo, v6);
    byte_48DF9A4 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_1B00D74(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v7->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillBaseList = v8;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.equipSkillBaseList, (int32_t)v8, v9, v10);
  v11 = (struct SkillIconComponent_array *)sub_1B00D74(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillIcon = v11;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.equipSkillIcon, (int32_t)v11, v12, v13);
  v14 = (struct UIRangeLabel_array *)sub_1B00D74(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillTitleRangeLabelList = v14;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.equipSkillTitleRangeLabelList, (int32_t)v14, v15, v16);
  v17 = (struct UILabel_array *)sub_1B00D74(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillExplanationLabelList = v17;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.equipSkillExplanationLabelList, (int32_t)v17, v18, v19);
  this->fields.COLOR_INVALID = (struct UnityEngine_Color_o)xmmword_B716A0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawEquip__Awake(
        ServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *equipSkillBaseList; // x8
  ServantStatusListViewItemDrawEquip_o *v3; // x19
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
  int v15; // w9
  struct UnityEngine_GameObject_array *v16; // x8
  float v17; // s8
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
    *(UnityEngine_Vector3_o *)(&v4 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v5 = v3->fields.equipSkillBaseList;
    if ( !v5 )
      goto LABEL_24;
    if ( v5->max_length <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawEquip_o *)v5->m_Items[1];
    if ( !this )
      goto LABEL_24;
    v6 = v4;
    this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v7 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    equipSkillBaseList = v3->fields.equipSkillBaseList;
    v8 = (float)(v6 - v7) == INFINITY ? 0x80000000 : (int)(float)(v6 - v7);
    v3->fields.skillPitch = v8;
    if ( !equipSkillBaseList )
      goto LABEL_24;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquip_o *)v3->fields.titleSprite;
  v10 = v3->fields.skillPitch * equipSkillBaseList->max_length;
  v11 = (float)(baseSprite->fields.mHeight - v10);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v11;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v15 = v10 >= 0 ? v10 : v10 + 1;
  v16 = v3->fields.equipSkillBaseList;
  v17 = (float)(v15 >> 1);
  v3->fields.titleBasePosition.fields.x = v12;
  v3->fields.titleBasePosition.fields.z = v14;
  v3->fields.titleBasePosition.fields.y = v13 - v17;
  if ( !v16 )
LABEL_24:
    sub_1B00F28(this, method);
  if ( !v16->max_length )
LABEL_25:
    sub_1B00F30(this, method);
  this = (ServantStatusListViewItemDrawEquip_o *)v16->m_Items[0];
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
  v3->fields.skillBasePosition.fields.y = localPosition.fields.y - v17;
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
  struct SkillIconComponent_array *equipSkillIcon; // x8
  __int64 v36; // x10
  unsigned __int64 max_length; // x9
  int v38; // w22
  signed __int64 v39; // x8
  SkillInfo_o *v40; // x13
  UnityEngine_Object_o *lineSprite; // x21
  struct UnityEngine_GameObject_array *equipSkillBaseList; // x8
  char v43; // w26
  int v44; // w25
  __int64 v45; // x28
  __int64 v46; // x29
  unsigned __int64 v47; // x23
  unsigned __int64 v48; // x9
  __int64 v49; // x8
  struct UILabel_array *equipSkillExplanationLabelList; // x9
  ServantStatusListViewItemDrawEquip_c *v51; // x0
  UILabel_o *v52; // x21
  System_String_o *v53; // x22
  struct UILabel_array *v54; // x8
  __int64 v55; // x8
  int32_t skillPitch; // w9
  int v57; // w10
  int v58; // w8
  __int64 v59; // x11
  __int64 v60; // x9
  int32_t v61; // w21
  struct ServantEntity_o *v62; // x8
  int v63; // w21
  int v64; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x21
  float v69; // s8
  int32_t v70; // w1
  int32_t v71; // w1
  int v72; // w21
  float v73; // s8
  float v74; // s11
  float v75; // s9
  float v76; // s10
  struct UnityEngine_GameObject_array *v77; // x8
  float v78; // s8
  float v79; // s9
  il2cpp_array_size_t v80; // w25
  float v81; // s10
  il2cpp_array_size_t v82; // w9
  il2cpp_array_size_t v83; // w11
  SkillInfo_o *v84; // x29
  struct SkillIconComponent_array *v85; // x8
  struct UIRangeLabel_array *equipSkillTitleRangeLabelList; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v88; // x21
  __int64 v89; // x22
  int32_t v90; // w21
  int32_t Rarity; // w0
  struct UnityEngine_GameObject_array *v92; // x8
  struct UILabel_array *v93; // x8
  UILabel_o *v94; // x8
  int32_t mHeight; // w21
  int32_t v96; // w9
  struct ServantLeaderInfo_o *v97; // x8
  __int64 v98; // x21
  __int64 v99; // x22
  int32_t v100; // w22
  struct SkillIconComponent_array *v101; // x8
  struct UIRangeLabel_array *v102; // x8
  struct UILabel_array *v103; // x8
  UnityEngine_Object_o *equipButton; // x21
  float barExp[2]; // [xsp+18h] [xbp-98h] BYREF
  int32_t exp; // [xsp+20h] [xbp-90h] BYREF
  int32_t EquipLevel; // [xsp+24h] [xbp-8Ch] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48DF9A3 & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, item);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B00CCC(&ServantStatusListViewItemDrawEquip_TypeInfo, v9);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_1B00CCC(&StringLiteral_11673/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, v11);
    sub_1B00CCC(&StringLiteral_1/*""*/, v12);
    byte_48DF9A3 = 1;
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
  equipIcon = (SkillIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11673/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, 0LL);
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
      ServantFaceIconComponent__Set_37007532(
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
  *(_QWORD *)&v109.fields.currentCryptoKey = v19;
  *(_QWORD *)&v109.fields.fakeValue = v18;
  equipIcon = (SkillIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v109, 0LL);
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
  ServantFaceIconComponent__Set_37013412(this->fields.equipIcon, v21->fields.equipTarget1, 0LL, 0LL, 0LL);
LABEL_24:
  equipIcon = (SkillIconComponent_o *)item->fields.equipServantEntity;
  nameRangeLabel = this->fields.nameRangeLabel;
  if ( equipIcon )
  {
    equipIcon = (SkillIconComponent_o *)ServantEntity__getName((ServantEntity_o *)equipIcon, -1, -1, 0LL);
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
  UIRangeLabel__Set(nameRangeLabel, equipTargetId1, 0LL, 1, 0, 0LL);
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
  UIIconLabel__Set_37024000(attackIconLabel, 5, (int32_t)equipIcon, 0, 0, 0LL, 0, 0, 0, 0LL);
  hpIconLabel = this->fields.hpIconLabel;
  equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipHp(item, 0LL);
  if ( !hpIconLabel )
    goto LABEL_189;
  UIIconLabel__Set_37024000(hpIconLabel, 3, (int32_t)equipIcon, 0, 0, 0LL, 0, 0, 0, 0LL);
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
  v36 = *(_QWORD *)&equipSkillIcon->max_length;
  if ( v36 << 32 >= 1 )
  {
    max_length = skillInfoList->max_length;
    v38 = 0;
    v39 = 0LL;
    do
    {
      if ( v39 < (int)max_length )
      {
        if ( v39 >= max_length )
LABEL_190:
          sub_1B00F30(equipIcon, equipTargetId1);
        v40 = skillInfoList->m_Items[v39];
        if ( v40 && v40->fields.id >= 1 )
          v38 = v39 + 1;
      }
      ++v39;
    }
    while ( v39 < (int)v36 );
  }
  else
  {
LABEL_59:
    v38 = 0;
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, v38 > 0, 0LL);
  }
  equipSkillBaseList = this->fields.equipSkillBaseList;
  if ( !equipSkillBaseList )
    goto LABEL_189;
  v43 = 0;
  v44 = 0;
  v45 = 4LL;
  v46 = 0x100000000LL;
  while ( 1 )
  {
    v47 = v45 - 4;
    if ( v45 - 4 >= (int)equipSkillBaseList->max_length )
      break;
    if ( skillInfoList )
    {
      v48 = skillInfoList->max_length;
      if ( (__int64)v47 < (int)v48 )
      {
        if ( v47 >= v48 )
          goto LABEL_190;
        v49 = *((_QWORD *)&skillInfoList->obj.klass + v45);
        if ( v49 )
        {
          if ( *(int *)(v49 + 16) >= 1 )
          {
            equipSkillExplanationLabelList = this->fields.equipSkillExplanationLabelList;
            if ( !equipSkillExplanationLabelList )
              goto LABEL_189;
            if ( v47 >= equipSkillExplanationLabelList->max_length )
              goto LABEL_190;
            v51 = ServantStatusListViewItemDrawEquip_TypeInfo;
            v52 = (UILabel_o *)*((_QWORD *)&equipSkillExplanationLabelList->obj.klass + v45);
            v53 = *(System_String_o **)(v49 + 40);
            if ( !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo);
              v51 = ServantStatusListViewItemDrawEquip_TypeInfo;
            }
            equipIcon = (SkillIconComponent_o *)WrapControlText__textAdjust(
                                                  v52,
                                                  v53,
                                                  v51->static_fields->DETAIL_FONT_SIZE,
                                                  v51->static_fields->DETAIL_FONT_SIZE,
                                                  v51->static_fields->MAX_HEIGHT,
                                                  0LL);
            v54 = this->fields.equipSkillExplanationLabelList;
            if ( !v54 )
              goto LABEL_189;
            if ( v47 >= v54->max_length )
              goto LABEL_190;
            v55 = *((_QWORD *)&v54->obj.klass + v45);
            if ( !v55 )
              goto LABEL_189;
            skillPitch = this->fields.skillPitch;
            v57 = ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->ADJUST_HEIGHT + *(_DWORD *)(v55 + 172);
            v58 = v57 - skillPitch;
            if ( v57 >= skillPitch )
            {
              if ( !skillInfoList )
                goto LABEL_189;
              v59 = *(_QWORD *)&skillInfoList->max_length;
              v44 += v57;
              if ( v47 == (_DWORD)v59 - 1 )
                goto LABEL_88;
              if ( v45 - 3 >= (unsigned __int64)(unsigned int)v59 )
                goto LABEL_190;
              v60 = *(__int64 *)((char *)skillInfoList->m_Items + (v46 >> 29));
              if ( !v60 || *(int *)(v60 + 16) <= 0 )
LABEL_88:
                v43 |= v58 > 10;
            }
            else
            {
              v44 += skillPitch;
            }
          }
        }
      }
    }
    equipSkillBaseList = this->fields.equipSkillBaseList;
    ++v45;
    v46 += 0x100000000LL;
    if ( !equipSkillBaseList )
      goto LABEL_189;
  }
  if ( item->fields._IsDisplayCombineButton_k__BackingField && item->fields.equipServantEntity )
  {
    v61 = ServantStatusListViewItem__get_EquipLevel(item, 0LL);
    if ( v61 < ServantStatusListViewItem__get_EquipMaxLevel(item, 0LL) )
      goto LABEL_96;
    equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipLimitCount(item, 0LL);
    v62 = item->fields.equipServantEntity;
    if ( !v62 )
      goto LABEL_189;
    if ( (int)equipIcon < v62->fields.limitMax )
    {
LABEL_96:
      equipIcon = (SkillIconComponent_o *)this->fields.reinforceObject;
      if ( (v43 & 1) != 0 )
        v63 = 50;
      else
        v63 = 38;
      if ( !equipIcon )
        goto LABEL_189;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, 1, 0LL);
      equipIcon = (SkillIconComponent_o *)this->fields.reinforceButton;
      if ( !equipIcon )
        goto LABEL_189;
      BYTE1(equipIcon[1].monitor) = 1;
      v44 += v63;
      UICommonButton__SetEnable((UICommonButton_o *)equipIcon, item->fields._CanMoveCombine_k__BackingField, 0LL);
      if ( v44 >= 0 )
        v64 = v44;
      else
        v64 = v44 + 1;
      GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v64 >> 1), 0LL);
    }
  }
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v69 = y + (float)v44;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    equipIcon = (SkillIconComponent_o *)this->fields.baseCollider;
    if ( !equipIcon )
      goto LABEL_189;
    v112.fields.x = x;
    v112.fields.y = v69;
    v112.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)equipIcon, v112, 0LL);
  }
  equipIcon = (SkillIconComponent_o *)this->fields.baseSprite;
  if ( !equipIcon )
    goto LABEL_189;
  v70 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)equipIcon, v70, 0LL);
  equipIcon = (SkillIconComponent_o *)this->fields.baseSprite;
  if ( !equipIcon )
    goto LABEL_189;
  v71 = v69 == INFINITY ? 0x80000000 : (int)v69;
  UIWidget__set_height((UIWidget_o *)equipIcon, v71, 0LL);
  equipIcon = (SkillIconComponent_o *)this->fields.titleSprite;
  v72 = v44 >= 0 ? v44 : v44 + 1;
  if ( !equipIcon )
    goto LABEL_189;
  v73 = this->fields.titleBasePosition.fields.x;
  v74 = this->fields.titleBasePosition.fields.y;
  v75 = this->fields.titleBasePosition.fields.z;
  equipIcon = (SkillIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)equipIcon, 0LL);
  if ( !equipIcon
    || (v76 = (float)(v72 >> 1),
        v113.fields.y = v74 + v76,
        v113.fields.x = v73,
        v113.fields.z = v75,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)equipIcon, v113, 0LL),
        (v77 = this->fields.equipSkillBaseList) == 0LL) )
  {
LABEL_189:
    sub_1B00F28(equipIcon, equipTargetId1);
  }
  v78 = this->fields.skillBasePosition.fields.z;
  v79 = this->fields.skillBasePosition.fields.x;
  v80 = 0;
  v81 = this->fields.skillBasePosition.fields.y + v76;
  while ( 1 )
  {
    v82 = v77->max_length;
    if ( (int)v80 >= (int)v82 )
      break;
    if ( !skillInfoList )
      goto LABEL_145;
    v83 = skillInfoList->max_length;
    if ( (int)v80 >= (int)v83 )
      goto LABEL_145;
    if ( v80 >= v83 )
      goto LABEL_190;
    v84 = skillInfoList->m_Items[v80];
    if ( !v84 || v84->fields.id < 1 )
    {
LABEL_145:
      equipTargetId1 = 0LL;
      goto LABEL_146;
    }
    if ( v80 >= v82 )
      goto LABEL_190;
    equipIcon = (SkillIconComponent_o *)v77->m_Items[v80];
    if ( !equipIcon )
      goto LABEL_189;
    equipIcon = (SkillIconComponent_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)equipIcon,
                                          0LL);
    if ( !equipIcon )
      goto LABEL_189;
    v114.fields.x = v79;
    v114.fields.y = v81;
    v114.fields.z = v78;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)equipIcon, v114, 0LL);
    v85 = this->fields.equipSkillIcon;
    if ( !v85 )
      goto LABEL_189;
    if ( v80 >= v85->max_length )
      goto LABEL_190;
    equipIcon = v85->m_Items[v80];
    if ( !equipIcon )
      goto LABEL_189;
    SkillIconComponent__Set(equipIcon, v84->fields.id, 0LL);
    equipSkillTitleRangeLabelList = this->fields.equipSkillTitleRangeLabelList;
    if ( !equipSkillTitleRangeLabelList )
      goto LABEL_189;
    if ( v80 >= equipSkillTitleRangeLabelList->max_length )
      goto LABEL_190;
    equipIcon = (SkillIconComponent_o *)equipSkillTitleRangeLabelList->m_Items[v80];
    if ( !equipIcon )
      goto LABEL_189;
    UIRangeLabel__Set((UIRangeLabel_o *)equipIcon, v84->fields.title, 0LL, 1, 0, 0LL);
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v89 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v88 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v110.fields.currentCryptoKey = v89;
      *(_QWORD *)&v110.fields.fakeValue = v88;
      equipIcon = (SkillIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v110, 0LL);
      if ( !item->fields.userSvtEntity )
        goto LABEL_189;
      v90 = (int)equipIcon;
      Rarity = UserServantEntity__getRarity(item->fields.userSvtEntity, 0LL);
    }
    else
    {
      v97 = item->fields.servantLeaderInfo;
      if ( !v97 )
      {
        v100 = -1;
        v90 = -1;
        goto LABEL_164;
      }
      v99 = *(_QWORD *)&v97->fields.svtId.fields.currentCryptoKey;
      v98 = *(_QWORD *)&v97->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v111.fields.currentCryptoKey = v99;
      *(_QWORD *)&v111.fields.fakeValue = v98;
      equipIcon = (SkillIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v111, 0LL);
      if ( !item->fields.servantLeaderInfo )
        goto LABEL_189;
      v90 = (int)equipIcon;
      Rarity = ServantLeaderInfo__getRarity(item->fields.servantLeaderInfo, 0LL);
    }
    v100 = Rarity;
LABEL_164:
    equipIcon = (SkillIconComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !equipIcon )
      goto LABEL_189;
    equipIcon = (SkillIconComponent_o *)PartyOrganizationUtility__IsRarityRestriction_31356632(
                                          (PartyOrganizationUtility_o *)equipIcon,
                                          v90,
                                          v100,
                                          v84->fields.id,
                                          v84->fields.lv,
                                          0LL);
    if ( ((unsigned __int8)equipIcon & 1) != 0 )
    {
      v101 = this->fields.equipSkillIcon;
      if ( !v101 )
        goto LABEL_189;
      if ( v80 >= v101->max_length )
        goto LABEL_190;
      equipIcon = v101->m_Items[v80];
      if ( !equipIcon )
        goto LABEL_189;
      SkillIconComponent__SetInvalidColor(equipIcon, this->fields.COLOR_INVALID, 0LL);
      v102 = this->fields.equipSkillTitleRangeLabelList;
      if ( !v102 )
        goto LABEL_189;
      if ( v80 >= v102->max_length )
        goto LABEL_190;
      equipIcon = (SkillIconComponent_o *)v102->m_Items[v80];
      if ( !equipIcon )
        goto LABEL_189;
      UIRangeLabel__set_color((UIRangeLabel_o *)equipIcon, this->fields.COLOR_INVALID, 0LL);
      v103 = this->fields.equipSkillExplanationLabelList;
      if ( !v103 )
        goto LABEL_189;
      if ( v80 >= v103->max_length )
        goto LABEL_190;
      equipIcon = (SkillIconComponent_o *)v103->m_Items[v80];
      if ( !equipIcon )
        goto LABEL_189;
      UIWidget__set_color((UIWidget_o *)equipIcon, this->fields.COLOR_INVALID, 0LL);
    }
    equipTargetId1 = (System_String_o *)(&dword_0 + 1);
LABEL_146:
    v92 = this->fields.equipSkillBaseList;
    if ( !v92 )
      goto LABEL_189;
    if ( v80 >= v92->max_length )
      goto LABEL_190;
    equipIcon = (SkillIconComponent_o *)v92->m_Items[v80];
    if ( equipIcon )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, (bool)equipTargetId1, 0LL);
      v93 = this->fields.equipSkillExplanationLabelList;
      if ( v93 )
      {
        if ( v80 >= v93->max_length )
          goto LABEL_190;
        v94 = v93->m_Items[v80];
        if ( v94 )
        {
          equipIcon = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          mHeight = v94->fields.mHeight;
          if ( !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo);
            equipIcon = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          }
          ++v80;
          v77 = this->fields.equipSkillBaseList;
          v96 = *((_DWORD *)equipIcon[2].monitor + 2) + mHeight;
          if ( v96 < this->fields.skillPitch )
            v96 = this->fields.skillPitch;
          v81 = v81 - (float)v96;
          if ( v77 )
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