void WarBoardSimplePopupElementServant___ctor(WarBoardSimplePopupElementServant_o *this, const MethodInfo *method)
{
  this->fields.HpValueLabelMaxWidth = 140;
  this->fields.positionLevelNpc.fields.z = 0.0;
  this->fields.servantNameLabelWidth = 180;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_E93E70;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_E94040;
  *(_OWORD *)&this->fields.positionActionPointDefault.fields.x = xmmword_E93E70;
  *(_QWORD *)&this->fields.positionActionPointNext.fields.y = 1111228416;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardSimplePopupElementServant__Awake(WarBoardSimplePopupElementServant_o *this, const MethodInfo *method)
{
  ;
}


void WarBoardSimplePopupElementServant__OnClickDetailButton(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_59362B5 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardSimplePopupElementServant_OnClickDetailButton__);
    byte_59362B5 = 1;
  }
  v3 = Method_WarBoardSimplePopupElementServant_OnClickDetailButton__;
  if ( (*((_BYTE *)Method_WarBoardSimplePopupElementServant_OnClickDetailButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_WarBoardSimplePopupElementServant_OnClickDetailButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  WarBoardManager__ShowServantDetailPopup((WarBoardManager_o *)Instance, this->fields.pieceData, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardSimplePopupElementServant__SetAtkLabel(
        WarBoardSimplePopupElementServant_o *this,
        int32_t atk,
        bool isPlayerGroup,
        const MethodInfo *method)
{
  UILabel_o *atkValueLabel; // x19
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59362B1 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_16001/*"WARBOARD_SERVANT_INFO_ENEMY_ATK"*/);
    sub_21FFC50(&StringLiteral_26381/*"{0:#,0}"*/);
    byte_59362B1 = 1;
  }
  atkValueLabel = this->fields.atkValueLabel;
  if ( isPlayerGroup )
  {
    v11 = atk;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v11);
    v9 = System_String__Format((System_String_o *)StringLiteral_26381/*"{0:#,0}"*/, v8, 0);
    if ( atkValueLabel )
    {
      UILabel__set_text(atkValueLabel, v9, 0);
      return;
    }
LABEL_10:
    sub_21FFECC(v9, v10);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&atk, isPlayerGroup);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_16001/*"WARBOARD_SERVANT_INFO_ENEMY_ATK"*/, 0);
  if ( !atkValueLabel )
    goto LABEL_10;
  UILabel__set_text(atkValueLabel, v9, 0);
}


void WarBoardSimplePopupElementServant__SetBreakPoint(
        WarBoardSimplePopupElementServant_o *this,
        int32_t breakPoint,
        int32_t breakPointMax,
        bool isEnemyServant,
        const MethodInfo *method)
{
  UnityEngine_Component_o *klass; // x0
  __int64 v10; // x1
  struct UIWidget_o *breakPointParent; // x8
  float v12; // s8
  __int64 v13; // x28
  unsigned int *v14; // x21
  unsigned __int64 v15; // x29
  MissionNaviTransitionBoardItem_o *p_monitor; // x22
  __int64 v17; // x25
  int v18; // w26
  float v19; // s9
  Il2CppObject *breakPointPrefab; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Transform_o *transform; // x24
  UnityEngine_GameObject_o *v24; // x24
  WarBoardBreakPointComponent_o *Component_object; // x23
  struct UIWidget_o *v26; // x8
  unsigned __int64 v27; // x24
  __int64 v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  float maxSpacing; // s0
  __int64 v37; // x0
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59362B3 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&WarBoardBreakPointComponent___TypeInfo);
    byte_59362B3 = 1;
  }
  klass = (UnityEngine_Component_o *)sub_21FFD10(WarBoardBreakPointComponent___TypeInfo, (unsigned int)breakPointMax);
  breakPointParent = this->fields.breakPointParent;
  if ( !breakPointParent )
    goto LABEL_22;
  if ( breakPointMax >= 1 )
  {
    v12 = 0.0;
    v13 = breakPoint;
    v14 = (unsigned int *)klass;
    v15 = 0;
    p_monitor = (MissionNaviTransitionBoardItem_o *)&klass[1].monitor;
    v17 = (unsigned int)breakPointMax;
    v18 = 2 * breakPointMax - 2;
    v19 = (float)breakPointParent->fields.mWidth / (float)breakPointMax;
    while ( 1 )
    {
      klass = (UnityEngine_Component_o *)this->fields.breakPointParent;
      if ( !klass )
        break;
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      transform = UnityEngine_Component__get_transform(klass, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
      klass = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__59506996(
                                           breakPointPrefab,
                                           transform,
                                           (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
      if ( !klass )
        break;
      v24 = (UnityEngine_GameObject_o *)klass;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, 1, 0);
      Component_object = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            v24,
                                                            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      klass = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v24, 0);
      if ( !klass )
        break;
      v38.fields.y = 0.0;
      v38.fields.z = 0.0;
      v38.fields.x = v12;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)klass, v38, 0);
      v26 = this->fields.breakPointParent;
      if ( !v26 )
        break;
      if ( !Component_object )
        break;
      v27 = v15 + 1;
      WarBoardBreakPointComponent__Initialize(
        Component_object,
        v18 + v26->fields.mDepth,
        v15 + 1,
        0,
        isEnemyServant,
        0,
        0);
      if ( !v14 )
        break;
      v28 = sub_21FFDA4(Component_object, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
      if ( !v28 )
      {
        v37 = sub_21FFEF0(0, v29);
        sub_21FFD90(v37, 0);
      }
      if ( v15 >= v14[6]
        || (p_monitor->klass = (MissionNaviTransitionBoardItem_c *)Component_object,
            sub_21FFBF4(p_monitor, (int32_t)Component_object, v30, v31, v32, v33, v34, v35),
            v15 >= v14[6]) )
      {
        sub_21FFED4(v28);
      }
      klass = (UnityEngine_Component_o *)p_monitor->klass;
      if ( !p_monitor->klass )
        break;
      WarBoardBreakPointComponent__SetActive((WarBoardBreakPointComponent_o *)klass, (__int64)v15 < v13, 0, 0);
      maxSpacing = Component_object->fields.maxSpacing;
      v18 -= 2;
      p_monitor = (MissionNaviTransitionBoardItem_o *)((char *)p_monitor + 8);
      ++v15;
      if ( maxSpacing >= v19 )
        maxSpacing = v19;
      v12 = v12 + maxSpacing;
      if ( v17 == v27 )
        return;
    }
LABEL_22:
    sub_21FFECC(klass, v10);
  }
}


void WarBoardSimplePopupElementServant__SetBuffIcon(
        WarBoardSimplePopupElementServant_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *showBuffComponent; // x21
  bool v6; // w0
  BattleServantShowBuffComponent_o *v7; // x20
  BattleBuffData_ShowBuffData_array *ShowServantParam; // x0
  __int64 v9; // x1

  if ( (byte_59362B2 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59362B2 = 1;
  }
  showBuffComponent = (UnityEngine_Object_o *)this->fields.showBuffComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, buffData, method);
  v6 = UnityEngine_Object__op_Equality(showBuffComponent, 0, 0);
  if ( buffData && !v6 )
  {
    v7 = this->fields.showBuffComponent;
    ShowServantParam = BattleBuffData__getShowServantParam(buffData, 0);
    if ( !v7 )
      sub_21FFECC(ShowServantParam, v9);
    BattleServantShowBuffComponent__setBuffList(v7, ShowServantParam, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardSimplePopupElementServant__SetUIPosition(
        WarBoardSimplePopupElementServant_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  UnityEngine_Component_o *hpLabel; // x0
  struct UnityEngine_Vector3_array *posHpLabel; // x8
  struct UnityEngine_Vector3_array *posHpValueLabel; // x8
  struct UnityEngine_Vector3_array *posAtkLabel; // x8
  struct UnityEngine_Vector3_array *posAtkValueLabel; // x8
  struct UnityEngine_Vector3_array *posBuffList; // x8
  struct BattleServantSkillIConComponent_array *skillIconList; // x8
  struct UnityEngine_Vector3_array *posSkillRoot; // x8

  hpLabel = (UnityEngine_Component_o *)this->fields.hpLabel;
  if ( !hpLabel )
    goto LABEL_24;
  hpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hpLabel, 0);
  posHpLabel = this->fields.posHpLabel;
  if ( !posHpLabel )
    goto LABEL_24;
  if ( LODWORD(posHpLabel->max_length) <= dispType )
    goto LABEL_25;
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)hpLabel, posHpLabel->m_Items[dispType], 0);
  hpLabel = (UnityEngine_Component_o *)this->fields.hpValueLabel;
  if ( !hpLabel )
    goto LABEL_24;
  hpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hpLabel, 0);
  posHpValueLabel = this->fields.posHpValueLabel;
  if ( !posHpValueLabel )
    goto LABEL_24;
  if ( LODWORD(posHpValueLabel->max_length) <= dispType )
    goto LABEL_25;
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)hpLabel, posHpValueLabel->m_Items[dispType], 0);
  hpLabel = (UnityEngine_Component_o *)this->fields.atkLabel;
  if ( !hpLabel )
    goto LABEL_24;
  hpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hpLabel, 0);
  posAtkLabel = this->fields.posAtkLabel;
  if ( !posAtkLabel )
    goto LABEL_24;
  if ( LODWORD(posAtkLabel->max_length) <= dispType )
    goto LABEL_25;
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)hpLabel, posAtkLabel->m_Items[dispType], 0);
  hpLabel = (UnityEngine_Component_o *)this->fields.atkValueLabel;
  if ( !hpLabel )
    goto LABEL_24;
  hpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hpLabel, 0);
  posAtkValueLabel = this->fields.posAtkValueLabel;
  if ( !posAtkValueLabel )
    goto LABEL_24;
  if ( LODWORD(posAtkValueLabel->max_length) <= dispType )
    goto LABEL_25;
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)hpLabel, posAtkValueLabel->m_Items[dispType], 0);
  hpLabel = (UnityEngine_Component_o *)this->fields.showBuffComponent;
  if ( !hpLabel )
    goto LABEL_24;
  hpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hpLabel, 0);
  posBuffList = this->fields.posBuffList;
  if ( !posBuffList )
    goto LABEL_24;
  if ( LODWORD(posBuffList->max_length) <= dispType )
    goto LABEL_25;
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)hpLabel, posBuffList->m_Items[dispType], 0);
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_24;
  if ( !LODWORD(skillIconList->max_length) )
    goto LABEL_25;
  hpLabel = (UnityEngine_Component_o *)skillIconList->m_Items[0];
  if ( !hpLabel
    || (hpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(hpLabel, 0)) == 0
    || (hpLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)hpLabel, 0)) == 0
    || (hpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hpLabel, 0),
        (posSkillRoot = this->fields.posSkillRoot) == 0) )
  {
LABEL_24:
    sub_21FFECC(hpLabel, *(_QWORD *)&dispType);
  }
  if ( LODWORD(posSkillRoot->max_length) <= dispType )
LABEL_25:
    sub_21FFED4(hpLabel);
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)hpLabel, posSkillRoot->m_Items[dispType], 0);
}


void WarBoardSimplePopupElementServant__SetUp(
        WarBoardSimplePopupElementServant_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  WarBoardPieceData_o *v3; // x20
  WarBoardSimplePopupElementServant_o *v4; // x19
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  BattleServantData_o *battleServant_k__BackingField; // x21
  UILabel_o *atkLabel; // x22
  UILabel_o *hpLabel; // x22
  UILabel_o *detailButtonLabel; // x22
  UILabel_o *servantNameLabel; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *pieceStatusLabelComponent; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *servantLevel; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  UILabel_o *v26; // x22
  System_String_o *v27; // x23
  Il2CppObject *v28; // x0
  float *p_z; // x8
  float *p_x; // x9
  float *p_y; // x10
  bool IsNpc; // w8
  UILabel_o *hpValueLabel; // x22
  Il2CppObject *v34; // x23
  Il2CppObject *v35; // x0
  int32_t AttackValue; // w22
  bool isPlayerGroup; // w0
  const MethodInfo *v38; // x3
  bool v39; // w0
  const MethodInfo *v40; // x3
  BattleBuffData_o *BuffData; // x0
  const MethodInfo *v42; // x2
  UnityEngine_GameObject_o *actionCountObj; // x21
  UILabel_o *actValueLabel; // x21
  UISprite_o *frameSprite; // x21
  Il2CppObject *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  UnityEngine_Object_o *actionPountObj; // x21
  __int64 v50; // x1
  __int64 v51; // x2
  UnityEngine_Object_o *actionPointValueLabel; // x21
  UnityEngine_GameObject_o *v53; // x21
  struct WarBoardCost_o *Cost_k__BackingField; // x8
  UILabel_o *v55; // x21
  UISprite_o *v56; // x21
  Il2CppObject *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  UILabel_o *actionPointLabel; // x21
  int32_t v61; // w21
  int v62; // w22
  UILabel_o *currentActionPointDispLabel; // x23
  UILabel_o *costDispLabel; // x23
  System_String_o *v65; // x24
  Il2CppObject *v66; // x21
  Il2CppObject *v67; // x0
  bool HasCost; // w0
  const MethodInfo *v69; // x2
  UnityEngine_GameObject_o *v70; // x21
  bool activeSelf; // w0
  __int64 v72; // x8
  __int64 v73; // x9
  __int64 v74; // x10
  int npcImageSvtId_k__BackingField; // w8
  int32_t npcDispLimitCount_k__BackingField; // w22
  int32_t ServantImageLimitSealAfter; // w21
  __int64 v78; // x1
  __int64 v79; // x2
  UISprite_o *servantIcon; // x23
  int32_t v81; // w24
  int32_t v82; // w2
  bool v83; // w21
  int32_t posAtkValueLabel; // w21
  Il2CppObject *v85; // x23
  Il2CppObject *v86; // x0
  __int64 v87; // x1
  __int64 v88; // x2
  System_String_o *v89; // x22
  UISprite_o *enemyIcon; // x23
  bool v91; // w0
  UISprite_o *v92; // x22
  __int64 v93; // x1
  __int64 v94; // x2
  System_String_o *v95; // x23
  __int64 v96; // x1
  __int64 v97; // x2
  UISprite_o *enemyIconBg; // x22
  __int64 v99; // x1
  __int64 v100; // x2
  UnityEngine_Object_o *equipIcon; // x21
  __int64 v102; // x1
  __int64 v103; // x2
  UnityEngine_Object_o *equipIconOnFace; // x21
  __int64 v105; // x2
  UISprite_o *v106; // x21
  int32_t iconEquipId_k__BackingField; // w22
  __int64 v108; // x1
  __int64 v109; // x2
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  int monitor; // w8
  bool v112; // w21
  UISprite_o *flameInClassIcon; // x21
  int32_t IconClassImageId_k__BackingField; // w22
  int32_t iconFrameType_k__BackingField; // w23
  int32_t breakPoint_k__BackingField; // w21
  int32_t breakPointMax_k__BackingField; // w22
  bool isEnemyServant; // w0
  const MethodInfo *v119; // x4
  UIBasicSprite_o *hpBar; // x21
  float CurrentHpProgress; // s0
  float CurrentNpProgress; // s0
  const MethodInfo *v123; // x1
  __int64 v124; // x1
  __int64 v125; // x2
  UnityEngine_Object_o *critecalStarsRoot; // x21
  __int64 v127; // x1
  __int64 v128; // x2
  bool v129; // w8
  UILabel_o *critecalStarsLabel; // x21
  UnityEngine_Object_o *supportSprite; // x21
  __int64 v132; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *RoleTypeLabel; // x21
  struct BattleServantData_o *v135; // x8
  int v136; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t MaxHp; // [xsp+8h] [xbp-68h] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-60h] BYREF
  int32_t svtId[2]; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v141; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v142; // 0:s0.4,4:s1.4,8:s2.4

  v3 = pieceData;
  v4 = this;
  if ( (byte_59362AE & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&StringLiteral_15970/*"WARBOARD_INFO_POPUP_SVT_HP"*/);
    sub_21FFC50(&StringLiteral_21176/*"icon_strong_enemy"*/);
    sub_21FFC50(&StringLiteral_24045/*"questinfo_enemyface_bg"*/);
    sub_21FFC50(&StringLiteral_20947/*"hp_gauge_boss"*/);
    sub_21FFC50(&StringLiteral_24477/*"servant_base_{0}"*/);
    sub_21FFC50(&StringLiteral_15969/*"WARBOARD_INFO_POPUP_SVT_DETAIL_BUTTON"*/);
    sub_21FFC50(&StringLiteral_15968/*"WARBOARD_INFO_POPUP_SVT_ATK"*/);
    sub_21FFC50(&StringLiteral_15966/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT"*/);
    sub_21FFC50(&StringLiteral_15971/*"WARBOARD_INFO_POPUP_SVT_LV"*/);
    sub_21FFC50(&StringLiteral_26384/*"{0:#,0} / {1:#,0}"*/);
    this = (WarBoardSimplePopupElementServant_o *)sub_21FFC50(&StringLiteral_15967/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT_COST"*/);
    byte_59362AE = 1;
  }
  entity = 0;
  *(_QWORD *)svtId = 0;
  if ( !v3 )
    goto LABEL_165;
  if ( WarBoardPieceData__get_isMaster(v3, 0) || !v3->fields._battleServant_k__BackingField )
    return;
  v4->fields.pieceData = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.pieceData, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  battleServant_k__BackingField = v3->fields._battleServant_k__BackingField;
  atkLabel = v4->fields.atkLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15968/*"WARBOARD_INFO_POPUP_SVT_ATK"*/, 0);
  if ( !atkLabel )
    goto LABEL_165;
  UILabel__set_text(atkLabel, (System_String_o *)this, 0);
  hpLabel = v4->fields.hpLabel;
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15970/*"WARBOARD_INFO_POPUP_SVT_HP"*/, 0);
  if ( !hpLabel )
    goto LABEL_165;
  UILabel__set_text(hpLabel, (System_String_o *)this, 0);
  detailButtonLabel = v4->fields.detailButtonLabel;
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15969/*"WARBOARD_INFO_POPUP_SVT_DETAIL_BUTTON"*/, 0);
  if ( !detailButtonLabel )
    goto LABEL_165;
  UILabel__set_text(detailButtonLabel, (System_String_o *)this, 0);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantNameLabel;
  if ( !this )
    goto LABEL_165;
  UILabel__SetDefaultFont((UILabel_o *)this, 0);
  if ( !battleServant_k__BackingField )
    goto LABEL_165;
  servantNameLabel = v4->fields.servantNameLabel;
  this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getServantShortName(battleServant_k__BackingField, 0);
  if ( !servantNameLabel )
    goto LABEL_165;
  UILabel__set_text(servantNameLabel, (System_String_o *)this, 0);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantNameLabel;
  if ( !this )
    goto LABEL_165;
  UILabel__SetCondensedScale((UILabel_o *)this, v4->fields.servantNameLabelWidth, 0, 0);
  pieceStatusLabelComponent = (UnityEngine_Object_o *)v4->fields.pieceStatusLabelComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
  if ( UnityEngine_Object__op_Inequality(pieceStatusLabelComponent, 0, 0) )
  {
    this = (WarBoardSimplePopupElementServant_o *)v4->fields.pieceStatusLabelComponent;
    if ( !this )
      goto LABEL_165;
    WarBoardPieceStatusLabel__SetupLabel((WarBoardPieceStatusLabel_o *)this, v3, 0);
  }
  ((void (__fastcall *)(WarBoardSimplePopupElementServant_o *, const MethodInfo *))v4->klass->vtable._4_UpdateUiBrightnessByPieceStatus.methodPtr)(
    v4,
    v4->klass->vtable._4_UpdateUiBrightnessByPieceStatus.method);
  servantLevel = (UnityEngine_Object_o *)v4->fields.servantLevel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  if ( UnityEngine_Object__op_Inequality(servantLevel, 0, 0) )
  {
    v26 = v4->fields.servantLevel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_15971/*"WARBOARD_INFO_POPUP_SVT_LV"*/, 0);
    iconLevel_k__BackingField = v3->fields._iconLevel_k__BackingField;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &iconLevel_k__BackingField);
    this = (WarBoardSimplePopupElementServant_o *)System_String__Format(v27, v28, 0);
    if ( !v26 )
      goto LABEL_165;
    UILabel__set_text(v26, (System_String_o *)this, 0);
    if ( WarBoardPieceData__get_isEnemyServant(v3, 0) && v3->fields._roleType_k__BackingField == 1 )
    {
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantLevel;
      if ( !this )
        goto LABEL_165;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
      if ( !this )
        goto LABEL_165;
      p_z = &v4->fields.positionLevelDanger.fields.z;
      p_x = &v4->fields.positionLevelDanger.fields.x;
      p_y = &v4->fields.positionLevelDanger.fields.y;
    }
    else
    {
      IsNpc = WarBoardPieceData__get_IsNpc(v3, 0);
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantLevel;
      if ( IsNpc )
      {
        if ( !this )
          goto LABEL_165;
        this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
        if ( !this )
          goto LABEL_165;
        p_z = &v4->fields.positionLevelNpc.fields.z;
        p_x = &v4->fields.positionLevelNpc.fields.x;
        p_y = &v4->fields.positionLevelNpc.fields.y;
      }
      else
      {
        if ( !this )
          goto LABEL_165;
        this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
        if ( !this )
          goto LABEL_165;
        p_z = &v4->fields.positionLevel.fields.z;
        p_x = &v4->fields.positionLevel.fields.x;
        p_y = &v4->fields.positionLevel.fields.y;
      }
    }
    v141.fields.z = *p_z;
    v141.fields.y = *p_y;
    v141.fields.x = *p_x;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v141, 0);
  }
  hpValueLabel = v4->fields.hpValueLabel;
  iconLevel_k__BackingField = WarBoardPieceData__get_CurrentHp(v3, 0);
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &iconLevel_k__BackingField);
  MaxHp = WarBoardPieceData__get_MaxHp(v3, 0);
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &MaxHp);
  this = (WarBoardSimplePopupElementServant_o *)System_String__Format_75484576(
                                                  (System_String_o *)StringLiteral_26384/*"{0:#,0} / {1:#,0}"*/,
                                                  v34,
                                                  v35,
                                                  0);
  if ( !hpValueLabel )
    goto LABEL_165;
  UILabel__set_text(hpValueLabel, (System_String_o *)this, 0);
  AttackValue = WarBoardPieceData__get_AttackValue(v3, 0);
  isPlayerGroup = WarBoardPieceData__get_isPlayerGroup(v3, 0);
  WarBoardSimplePopupElementServant__SetAtkLabel(v4, AttackValue, isPlayerGroup, v38);
  v39 = WarBoardPieceData__get_isPlayerGroup(v3, 0);
  WarBoardSimplePopupElementServant__SetUpSkillIcon(v4, battleServant_k__BackingField, v39, v40);
  BuffData = WarBoardPieceData__get_BuffData(v3, 0);
  WarBoardSimplePopupElementServant__SetBuffIcon(v4, BuffData, v42);
  actionCountObj = v4->fields.actionCountObj;
  this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_isInfinitelyActable(v3, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    pieceData = 0;
  }
  else
  {
    this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_165;
    pieceData = (WarBoardPieceData_o *)(LODWORD(this[1].fields.hpBar) == 2);
  }
  if ( !actionCountObj )
    goto LABEL_165;
  UnityEngine_GameObject__SetActive(actionCountObj, (bool)pieceData, 0);
  actValueLabel = v4->fields.actValueLabel;
  svtId[0] = v3->fields._currentActionCount_k__BackingField;
  this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)svtId, 0);
  if ( !actValueLabel )
    goto LABEL_165;
  UILabel__set_text(actValueLabel, (System_String_o *)this, 0);
  frameSprite = v4->fields.frameSprite;
  iconLevel_k__BackingField = v3->fields._forceId_k__BackingField + 1;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &iconLevel_k__BackingField);
  this = (WarBoardSimplePopupElementServant_o *)System_String__Format((System_String_o *)StringLiteral_24477/*"servant_base_{0}"*/, v46, 0);
  if ( !frameSprite )
    goto LABEL_165;
  UISprite__set_spriteName(frameSprite, (System_String_o *)this, 0);
  actionPountObj = (UnityEngine_Object_o *)v4->fields.actionPountObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47, v48);
  if ( UnityEngine_Object__op_Inequality(actionPountObj, 0, 0) )
  {
    actionPointValueLabel = (UnityEngine_Object_o *)v4->fields.actionPointValueLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50, v51);
    if ( UnityEngine_Object__op_Inequality(actionPointValueLabel, 0, 0) )
    {
      v53 = v4->fields.actionPountObj;
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_HasCost(v3, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_165;
        pieceData = (WarBoardPieceData_o *)(LODWORD(this[1].fields.hpBar) == 2);
      }
      else
      {
        pieceData = 0;
      }
      if ( !v53 )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive(v53, (bool)pieceData, 0);
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_HasCost(v3, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        Cost_k__BackingField = v3->fields._Cost_k__BackingField;
        if ( !Cost_k__BackingField )
          goto LABEL_165;
        v55 = v4->fields.actionPointValueLabel;
        svtId[0] = Cost_k__BackingField->fields._CurrentActionPoint_k__BackingField;
        this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)svtId, 0);
        if ( !v55 )
          goto LABEL_165;
        UILabel__set_text(v55, (System_String_o *)this, 0);
        v56 = v4->fields.frameSprite;
        iconLevel_k__BackingField = v3->fields._forceId_k__BackingField + 1;
        v57 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &iconLevel_k__BackingField);
        this = (WarBoardSimplePopupElementServant_o *)System_String__Format(
                                                        (System_String_o *)StringLiteral_24477/*"servant_base_{0}"*/,
                                                        v57,
                                                        0);
        if ( !v56 )
          goto LABEL_165;
        UISprite__set_spriteName(v56, (System_String_o *)this, 0);
        this = (WarBoardSimplePopupElementServant_o *)v4->fields.actionPountLabelObj;
        if ( !this )
          goto LABEL_165;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        actionPointLabel = v4->fields.actionPointLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58, v59);
        this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_15966/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT"*/,
                                                        0);
        if ( !actionPointLabel )
          goto LABEL_165;
        UILabel__set_text(actionPointLabel, (System_String_o *)this, 0);
        this = (WarBoardSimplePopupElementServant_o *)v3->fields._Cost_k__BackingField;
        if ( !this )
          goto LABEL_165;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__get_Move((WarBoardCost_o *)this, 0);
        if ( !v3->fields._Cost_k__BackingField )
          goto LABEL_165;
        v61 = (int)this;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__get_Attack(v3->fields._Cost_k__BackingField, 0);
        if ( !v3->fields._Cost_k__BackingField )
          goto LABEL_165;
        v62 = (int)this;
        currentActionPointDispLabel = v4->fields.currentActionPointDispLabel;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__CurrentAndMaxPointToString(
                                                        v3->fields._Cost_k__BackingField,
                                                        0);
        if ( !currentActionPointDispLabel )
          goto LABEL_165;
        UILabel__set_text(currentActionPointDispLabel, (System_String_o *)this, 0);
        costDispLabel = v4->fields.costDispLabel;
        v65 = LocalizationManager__Get((System_String_o *)StringLiteral_15967/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT_COST"*/, 0);
        MaxHp = v61;
        v66 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &MaxHp);
        v136 = v62;
        v67 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v136);
        this = (WarBoardSimplePopupElementServant_o *)System_String__Format_75484576(v65, v66, v67, 0);
        if ( !costDispLabel )
          goto LABEL_165;
        UILabel__set_text(costDispLabel, (System_String_o *)this, 0);
      }
      HasCost = WarBoardPieceData__get_HasCost(v3, 0);
      WarBoardSimplePopupElementServant__SetUIPosition(v4, HasCost, v69);
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.actionCountObj;
      if ( !this )
        goto LABEL_165;
      v70 = v4->fields.actionPountObj;
      activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
      v72 = 344;
      if ( activeSelf )
      {
        v72 = 356;
        v73 = 352;
      }
      else
      {
        v73 = 340;
      }
      if ( activeSelf )
        v74 = 348;
      else
        v74 = 336;
      v142.fields.y = *(float *)((char *)&v4->klass + v73);
      v142.fields.z = *(float *)((char *)&v4->klass + v72);
      v142.fields.x = *(float *)((char *)&v4->klass + v74);
      GameObjectExtensions__SetLocalPosition(v70, v142, 0);
    }
  }
  npcImageSvtId_k__BackingField = v3->fields._npcImageSvtId_k__BackingField;
  if ( npcImageSvtId_k__BackingField <= 0 )
    npcImageSvtId_k__BackingField = v3->fields._iconId_k__BackingField;
  npcDispLimitCount_k__BackingField = v3->fields._npcDispLimitCount_k__BackingField;
  svtId[1] = npcImageSvtId_k__BackingField;
  if ( npcDispLimitCount_k__BackingField <= 0 )
    npcDispLimitCount_k__BackingField = v3->fields._iconLimitCount_k__BackingField;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v50, v51);
  this = (WarBoardSimplePopupElementServant_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_165;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)this,
                                 v3->fields._iconId_k__BackingField,
                                 npcDispLimitCount_k__BackingField,
                                 0);
  if ( !WarBoardPieceData__get_IsEnemyMonster(v3, 0) )
  {
    servantIcon = v4->fields.servantIcon;
    v81 = svtId[1];
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v78, v79);
    v82 = ServantImageLimitSealAfter;
    v83 = 1;
    if ( AtlasManager__SetFaceImage(servantIcon, v81, v82, 1, 0, 0, 0) )
      goto LABEL_103;
  }
  this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_165;
  posAtkValueLabel = (int32_t)this->fields.posAtkValueLabel;
  iconLevel_k__BackingField = svtId[1];
  v85 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &iconLevel_k__BackingField);
  MaxHp = npcDispLimitCount_k__BackingField;
  v86 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &MaxHp);
  v89 = System_String__Concat(v85, v86, 0);
  enemyIcon = (UISprite_o *)v4->fields.enemyIcon;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v87, v88);
  v91 = AtlasManager__SetEventUI_47538316(posAtkValueLabel, enemyIcon, v89, 0);
  v92 = (UISprite_o *)v4->fields.enemyIcon;
  if ( !v91 )
  {
    v95 = System_Int32__ToString((int32_t)&svtId[1], 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v93, v94);
    if ( !AtlasManager__SetEventUI_47538316(posAtkValueLabel, v92, v95, 0) )
      goto LABEL_100;
    v92 = (UISprite_o *)v4->fields.enemyIcon;
  }
  WarBoardPieceData__ApplyDisplayType(v3, (UISpriteAltMat_o *)v92, 0);
LABEL_100:
  enemyIconBg = v4->fields.enemyIconBg;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v96, v97);
  AtlasManager__SetEventUI_47538316(posAtkValueLabel, enemyIconBg, (System_String_o *)StringLiteral_24045/*"questinfo_enemyface_bg"*/, 0);
  v83 = 0;
LABEL_103:
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantIcon;
  if ( !this )
    goto LABEL_165;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
  if ( !this )
    goto LABEL_165;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v83, 0);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.enemyIcon;
  if ( !this )
    goto LABEL_165;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
  if ( !this )
    goto LABEL_165;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v83, 0);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.enemyIconBg;
  if ( !this )
    goto LABEL_165;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
  if ( !this )
    goto LABEL_165;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v83, 0);
  equipIcon = (UnityEngine_Object_o *)v4->fields.equipIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v99, v100);
  if ( UnityEngine_Object__op_Inequality(equipIcon, 0, 0) )
  {
    equipIconOnFace = (UnityEngine_Object_o *)v4->fields.equipIconOnFace;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v102, v103);
    if ( UnityEngine_Object__op_Inequality(equipIconOnFace, 0, 0) )
    {
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.equipIconOnFace;
      if ( !this )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)this,
        v3->fields._iconEquipId_k__BackingField > 0,
        0);
    }
    v106 = v4->fields.equipIcon;
    iconEquipId_k__BackingField = v3->fields._iconEquipId_k__BackingField;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, pieceData, v105);
    AtlasManager__SetEquipFace(v106, iconEquipId_k__BackingField, 0, 0);
    equipLimitCountSprite = (UnityEngine_Object_o *)v4->fields.equipLimitCountSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v108, v109);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v102, v103);
      this = (WarBoardSimplePopupElementServant_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !this )
        goto LABEL_165;
      this = (WarBoardSimplePopupElementServant_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                      &entity,
                                                      v3->fields._iconEquipId_k__BackingField,
                                                      (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_129;
      if ( !entity )
        goto LABEL_165;
      monitor = (int)entity[5].monitor;
      if ( monitor >= 1 )
        v112 = v3->fields._equipLimitCount_k__BackingField >= monitor;
      else
LABEL_129:
        v112 = 0;
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.equipLimitCountSprite;
      if ( !this )
        goto LABEL_165;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
      if ( !this )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v112, 0);
    }
  }
  flameInClassIcon = v4->fields.flameInClassIcon;
  IconClassImageId_k__BackingField = v3->fields._IconClassImageId_k__BackingField;
  iconFrameType_k__BackingField = v3->fields._iconFrameType_k__BackingField;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v102, v103);
  AtlasManager__SetClassIcon(flameInClassIcon, IconClassImageId_k__BackingField, iconFrameType_k__BackingField, 0, 0, 0);
  breakPoint_k__BackingField = v3->fields._breakPoint_k__BackingField;
  breakPointMax_k__BackingField = v3->fields._breakPointMax_k__BackingField;
  isEnemyServant = WarBoardPieceData__get_isEnemyServant(v3, 0);
  WarBoardSimplePopupElementServant__SetBreakPoint(
    v4,
    breakPoint_k__BackingField,
    breakPointMax_k__BackingField,
    isEnemyServant,
    v119);
  if ( WarBoardPieceData__get_isEnemyServant(v3, 0) )
  {
    this = (WarBoardSimplePopupElementServant_o *)v4->fields.hpBar;
    if ( !this )
      goto LABEL_165;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20947/*"hp_gauge_boss"*/, 0);
  }
  hpBar = (UIBasicSprite_o *)v4->fields.hpBar;
  CurrentHpProgress = WarBoardPieceData__get_CurrentHpProgress(v3, 0);
  if ( !hpBar )
LABEL_165:
    sub_21FFECC(this, pieceData);
  UIBasicSprite__set_fillAmount(hpBar, CurrentHpProgress, 0);
  CurrentNpProgress = WarBoardPieceData__get_CurrentNpProgress(v3, 0);
  WarBoardSimplePopupElementServant__UpdateNpBars(v4, CurrentNpProgress, v123);
  critecalStarsRoot = (UnityEngine_Object_o *)v4->fields.critecalStarsRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v124, v125);
  if ( UnityEngine_Object__op_Inequality(critecalStarsRoot, 0, 0) )
  {
    v129 = WarBoardPieceData__get_isPlayerGroup(v3, 0);
    this = (WarBoardSimplePopupElementServant_o *)v4->fields.critecalStarsRoot;
    if ( v129 )
    {
      if ( !this )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      critecalStarsLabel = v4->fields.critecalStarsLabel;
      svtId[0] = WarBoardPieceData__get_CriticalStars(v3, 0);
      this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)svtId, 0);
      if ( !critecalStarsLabel )
        goto LABEL_165;
      UILabel__set_text(critecalStarsLabel, (System_String_o *)this, 0);
    }
    else
    {
      if ( !this )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
  }
  supportSprite = (UnityEngine_Object_o *)v4->fields.supportSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v127, v128);
  if ( UnityEngine_Object__op_Inequality(supportSprite, 0, 0) )
  {
    this = (WarBoardSimplePopupElementServant_o *)v4->fields.supportSprite;
    if ( !this )
      goto LABEL_165;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_IsNpc(v3, 0);
    if ( !gameObject )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)this & 1, 0);
  }
  RoleTypeLabel = (UnityEngine_Object_o *)v4->fields.RoleTypeLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, pieceData, v132);
  if ( UnityEngine_Object__op_Inequality(RoleTypeLabel, 0, 0) )
  {
    v135 = v3->fields._battleServant_k__BackingField;
    if ( v135 )
    {
      if ( v135->fields.isEnemy && v3->fields._roleType_k__BackingField == 1 )
      {
        this = (WarBoardSimplePopupElementServant_o *)v4->fields.RoleTypeLabel;
        if ( this )
        {
          this = (WarBoardSimplePopupElementServant_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( this )
          {
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_21176/*"icon_strong_enemy"*/, 0);
            this = (WarBoardSimplePopupElementServant_o *)v4->fields.RoleTypeLabel;
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              return;
            }
          }
        }
        goto LABEL_165;
      }
    }
  }
}


void WarBoardSimplePopupElementServant__SetUpSkillIcon(
        WarBoardSimplePopupElementServant_o *this,
        BattleServantData_o *data,
        bool isPlayerGroup,
        const MethodInfo *method)
{
  WarBoardSimplePopupElementServant_o *v5; // x21
  BattleSkillInfoData_array *ActiveSkillInfos; // x22
  struct BattleServantSkillIConComponent_array *skillIconList; // x8
  WarBoardSimplePopupElementServant_o *v9; // x23
  unsigned __int64 v10; // x24
  struct UnityEngine_GameObject_o **p_breakPointPrefab; // x29
  unsigned __int64 max_length_low; // x9
  struct BattleServantSkillIConComponent_array *v13; // x8
  int32_t v14; // w25
  BattleServantSkillIConComponent_o *v15; // x26
  BattleSkillInfoData_o *v16; // x27
  bool canUseSkill; // w28

  if ( !data
    || (v5 = this,
        ActiveSkillInfos = BattleServantData__getActiveSkillInfos(data, 0),
        this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getSkillSealSelect(data, 0),
        (skillIconList = v5->fields.skillIconList) == 0) )
  {
LABEL_22:
    sub_21FFECC(this, data);
  }
  v9 = this;
  v10 = 0;
  p_breakPointPrefab = &this->fields.breakPointPrefab;
  while ( 1 )
  {
    max_length_low = LODWORD(skillIconList->max_length);
    if ( (__int64)v10 >= (int)max_length_low )
      break;
    if ( !ActiveSkillInfos )
      goto LABEL_22;
    if ( (__int64)v10 < SLODWORD(ActiveSkillInfos->max_length) && isPlayerGroup )
    {
      this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getSkillSealTurn(data, 0);
      if ( !v9 )
        goto LABEL_22;
      if ( v10 >= LODWORD(v9->fields.m_CancellationTokenSource) )
LABEL_24:
        sub_21FFED4(this);
      if ( *((_BYTE *)p_breakPointPrefab + v10) )
        this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getSkillSealSelectTurn(data, v10, 0);
      v13 = v5->fields.skillIconList;
      v14 = (int)this;
      if ( !v13 )
        goto LABEL_22;
      if ( v10 >= LODWORD(v13->max_length) )
        goto LABEL_24;
      if ( v10 >= LODWORD(ActiveSkillInfos->max_length) )
        goto LABEL_24;
      v15 = v13->m_Items[v10];
      v16 = ActiveSkillInfos->m_Items[v10];
      canUseSkill = BattleServantData__canUseSkill(data, v10, 0);
      this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getNotActTurn(data, 0);
      if ( v10 >= LODWORD(v9->fields.m_CancellationTokenSource) )
        goto LABEL_24;
      if ( !v15 )
        goto LABEL_22;
      BattleServantSkillIConComponent__SetSkillInfo(
        v15,
        v16,
        canUseSkill,
        v14,
        (int32_t)this,
        *((_BYTE *)p_breakPointPrefab + v10),
        0);
    }
    else
    {
      if ( v10 >= max_length_low )
        goto LABEL_24;
      this = (WarBoardSimplePopupElementServant_o *)skillIconList->m_Items[v10];
      if ( !this )
        goto LABEL_22;
      BattleServantSkillIConComponent__setNoSkill((BattleServantSkillIConComponent_o *)this, 0, 0);
    }
    skillIconList = v5->fields.skillIconList;
    ++v10;
    if ( !skillIconList )
      goto LABEL_22;
  }
}


void WarBoardSimplePopupElementServant__ShowEquipStatus(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  WarBoardPieceData_o *pieceData; // x21
  WarBoardManager_o *v7; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59362B4 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_59362B4 = 1;
  }
  if ( this->fields.pieceData )
  {
    v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
      v4 = sub_2237AF8(v2);
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
    if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
      v5 = sub_2237AF8(v2);
    pieceData = this->fields.pieceData;
    v7 = **(WarBoardManager_o ***)(v5 + 184);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform || (position = UnityEngine_Transform__get_position(transform, 0), !v7) )
      sub_21FFECC(transform, v9);
    WarBoardManager__ShowServantEquipSimplePopup(v7, pieceData, position, 0);
  }
}


void WarBoardSimplePopupElementServant__UpdateLabel(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *hpValueLabel; // x20
  __int64 v5; // x1
  UILabel_o *v6; // x0

  if ( (byte_59362B0 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59362B0 = 1;
  }
  hpValueLabel = (UnityEngine_Object_o *)this->fields.hpValueLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(hpValueLabel, 0, 0) )
  {
    v6 = this->fields.hpValueLabel;
    if ( !v6 )
      sub_21FFECC(0, v5);
    UILabel__SetCondensedScale(v6, this->fields.HpValueLabelMaxWidth, 0, 0);
  }
}


void WarBoardSimplePopupElementServant__UpdateNpBars(
        WarBoardSimplePopupElementServant_o *this,
        float progress,
        const MethodInfo *method)
{
  struct UISprite_array *npBars; // x8
  il2cpp_array_size_t max_length; // x9
  WarBoardSimplePopupElementServant_o *v6; // x19
  struct UISprite_array *v7; // x8
  struct UISprite_array *v8; // x8
  struct UISprite_array *v9; // x8

  npBars = this->fields.npBars;
  if ( npBars )
  {
    max_length = npBars->max_length;
    v6 = this;
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
        goto LABEL_31;
      this = (WarBoardSimplePopupElementServant_o *)npBars->m_Items[0];
      if ( !this )
        goto LABEL_30;
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress, 0);
      npBars = v6->fields.npBars;
      if ( !npBars )
        goto LABEL_30;
    }
    if ( SLODWORD(npBars->max_length) >= 2 )
    {
      this = (WarBoardSimplePopupElementServant_o *)npBars->m_Items[1];
      if ( progress <= 1.0 )
      {
        if ( !this )
          goto LABEL_30;
        this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
        if ( !this )
          goto LABEL_30;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      else
      {
        if ( !this )
          goto LABEL_30;
        this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
        if ( !this )
          goto LABEL_30;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v7 = v6->fields.npBars;
        if ( !v7 )
          goto LABEL_30;
        if ( (v7->max_length & 0xFFFFFFFE) == 0 )
          goto LABEL_31;
        this = (WarBoardSimplePopupElementServant_o *)v7->m_Items[1];
        if ( !this )
          goto LABEL_30;
        UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress + -1.0, 0);
      }
    }
    v8 = v6->fields.npBars;
    if ( !v8 )
      goto LABEL_30;
    if ( SLODWORD(v8->max_length) < 3 )
      return;
    this = (WarBoardSimplePopupElementServant_o *)v8->m_Items[2];
    if ( progress <= 2.0 )
    {
      if ( this )
      {
        this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          return;
        }
      }
LABEL_30:
      sub_21FFECC(this, method);
    }
    if ( !this )
      goto LABEL_30;
    this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
    if ( !this )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v9 = v6->fields.npBars;
    if ( !v9 )
      goto LABEL_30;
    if ( LODWORD(v9->max_length) > 2 )
    {
      this = (WarBoardSimplePopupElementServant_o *)v9->m_Items[2];
      if ( this )
      {
        UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress + -2.0, 0);
        return;
      }
      goto LABEL_30;
    }
LABEL_31:
    sub_21FFED4(this);
  }
}


void WarBoardSimplePopupElementServant__UpdateUiBrightnessByPieceStatus(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  WarBoardPieceData_o *pieceData; // x0
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundActionCount; // x21
  System_Action_object__o *v7; // x22
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundFaceIcon; // x19
  System_Action_object__o *v9; // x21

  if ( (byte_59362AF & 1) == 0 )
  {
    sub_21FFC50(&System_Action_UIWidget__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_UIWidget___);
    sub_21FFC50(&Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__0__);
    sub_21FFC50(&Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__1__);
    sub_21FFC50(&WarBoardSimplePopupElementServant___c__DisplayClass55_0_TypeInfo);
    byte_59362AF = 1;
  }
  v3 = sub_21FFEBC(WarBoardSimplePopupElementServant___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  pieceData = this->fields.pieceData;
  if ( !pieceData || (pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasIconDarkenBuff(pieceData, 0), !v3) )
    sub_21FFECC(pieceData, v4);
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  *(_BYTE *)(v3 + 16) = (unsigned __int8)pieceData & 1;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v7 = (System_Action_object__o *)sub_21FFEBC(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v7,
      (Il2CppObject *)v3,
      Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__0__,
      0);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v7,
      (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_UIWidget___);
  }
  turnDarkUiWidgetsAroundFaceIcon = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundFaceIcon;
  if ( turnDarkUiWidgetsAroundFaceIcon )
  {
    v9 = (System_Action_object__o *)sub_21FFEBC(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v9,
      (Il2CppObject *)v3,
      Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__1__,
      0);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundFaceIcon,
      (System_Action_T__o *)v9,
      (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_UIWidget___);
  }
}


void WarBoardSimplePopupElementServant___c__DisplayClass55_0___ctor(
        WarBoardSimplePopupElementServant___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardSimplePopupElementServant___c__DisplayClass55_0___UpdateUiBrightnessByPieceStatus_b__0(
        WarBoardSimplePopupElementServant___c__DisplayClass55_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  float v3; // s0 OVERLAPPED
  float v4; // s3
  float v5; // s1
  float v6; // s2

  if ( !x )
    sub_21FFECC(this, 0);
  v3 = 0.5;
  v4 = 1.0;
  if ( !this->fields.hasIconDarkenBuff )
    v3 = 1.0;
  v5 = v3;
  v6 = v3;
  UIWidget__set_color(x, *(UnityEngine_Color_o *)&v3, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardSimplePopupElementServant___c__DisplayClass55_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardSimplePopupElementServant___c__DisplayClass55_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  float v3; // s0 OVERLAPPED
  float v4; // s3
  float v5; // s1
  float v6; // s2

  if ( !x )
    sub_21FFECC(this, 0);
  v3 = 0.5;
  v4 = 1.0;
  if ( !this->fields.hasIconDarkenBuff )
    v3 = 1.0;
  v5 = v3;
  v6 = v3;
  UIWidget__set_color(x, *(UnityEngine_Color_o *)&v3, 0);
}