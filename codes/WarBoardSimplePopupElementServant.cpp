void WarBoardSimplePopupElementServant___ctor(WarBoardSimplePopupElementServant_o *this, const MethodInfo *method)
{
  this->fields.HpValueLabelMaxWidth = 140;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_D00A30;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_D00240;
  this->fields.positionLevelNpc.fields.z = 0.0;
  this->fields.servantNameLabelWidth = 180;
  *(_OWORD *)&this->fields.positionActionPointDefault.fields.x = xmmword_D00A30;
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

  if ( (byte_4D2E69A & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardSimplePopupElementServant_OnClickDetailButton__);
    byte_4D2E69A = 1;
  }
  v3 = Method_WarBoardSimplePopupElementServant_OnClickDetailButton__;
  if ( (*((_BYTE *)Method_WarBoardSimplePopupElementServant_OnClickDetailButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_WarBoardSimplePopupElementServant_OnClickDetailButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v6);
  WarBoardManager__ShowServantDetailPopup((WarBoardManager_o *)Instance, this->fields.pieceData, 0, 0);
}


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

  if ( (byte_4D2E696 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_15520/*"WARBOARD_SERVANT_INFO_ENEMY_ATK"*/);
    sub_1C93AD4(&StringLiteral_25376/*"{0:#,0}"*/);
    byte_4D2E696 = 1;
  }
  atkValueLabel = this->fields.atkValueLabel;
  if ( isPlayerGroup )
  {
    v11 = atk;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
    v9 = System_String__Format((System_String_o *)StringLiteral_25376/*"{0:#,0}"*/, v8, 0);
    if ( atkValueLabel )
    {
      UILabel__set_text(atkValueLabel, v9, 0);
      return;
    }
LABEL_10:
    sub_1C93D2C(v9, v10);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_15520/*"WARBOARD_SERVANT_INFO_ENEMY_ATK"*/, 0);
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
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x1
  struct UIWidget_o *breakPointParent; // x8
  unsigned int *v12; // x20
  __int64 v13; // x24
  unsigned __int64 v14; // x25
  __int64 v15; // x28
  void **p_monitor; // x29
  float v17; // s9
  float v18; // s8
  int v19; // w26
  __int64 v20; // x27
  bool v21; // w21
  Il2CppObject *breakPointPrefab; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v24; // x23
  WarBoardBreakPointComponent_o *Component_object; // x22
  struct UIWidget_o *v26; // x8
  __int64 v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  float maxSpacing; // s0
  __int64 v35; // x0
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E698 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&WarBoardBreakPointComponent___TypeInfo);
    byte_4D2E698 = 1;
  }
  v9 = (UnityEngine_GameObject_o *)sub_1C93B7C(WarBoardBreakPointComponent___TypeInfo, (unsigned int)breakPointMax);
  breakPointParent = this->fields.breakPointParent;
  if ( !breakPointParent )
    goto LABEL_21;
  if ( breakPointMax >= 1 )
  {
    v12 = (unsigned int *)v9;
    v13 = 0;
    v14 = 0;
    v15 = breakPoint;
    p_monitor = &v9[1].monitor;
    v17 = (float)breakPointParent->fields.mWidth / (float)breakPointMax;
    v18 = 0.0;
    v19 = 2 * breakPointMax - 2;
    v20 = (unsigned int)breakPointMax - 1LL;
    v21 = isEnemyServant;
    do
    {
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)breakPointParent, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__52629400(
                                         breakPointPrefab,
                                         transform,
                                         (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
      if ( !v9 )
        break;
      v24 = v9;
      UnityEngine_GameObject__SetActive(v9, 1, 0);
      Component_object = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            v24,
                                                            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      v9 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v24, 0);
      if ( !v9 )
        break;
      v36.fields.y = 0.0;
      v36.fields.z = 0.0;
      v36.fields.x = v18;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v9, v36, 0);
      v26 = this->fields.breakPointParent;
      if ( !v26 )
        break;
      if ( !Component_object )
        break;
      WarBoardBreakPointComponent__Initialize(Component_object, v19 + v26->fields.mDepth, v14 + 1, 0, v21, 0, 0);
      if ( !v12 )
        break;
      v27 = sub_1C93C10(Component_object, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
      if ( !v27 )
      {
        v35 = sub_1C93D50();
        sub_1C93BFC(v35, 0);
      }
      if ( v14 >= v12[6]
        || (p_monitor[v14] = Component_object,
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&p_monitor[v13],
              (int32_t)Component_object,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33),
            v14 >= v12[6]) )
      {
        sub_1C93D34(v27);
      }
      v9 = (UnityEngine_GameObject_o *)p_monitor[v14];
      if ( !v9 )
        break;
      WarBoardBreakPointComponent__SetActive((WarBoardBreakPointComponent_o *)v9, (__int64)v14 < v15, 0, 0);
      if ( v20 == v14 )
        return;
      maxSpacing = Component_object->fields.maxSpacing;
      breakPointParent = this->fields.breakPointParent;
      v19 -= 2;
      ++v13;
      if ( maxSpacing >= v17 )
        maxSpacing = v17;
      v18 = v18 + maxSpacing;
      ++v14;
    }
    while ( breakPointParent );
LABEL_21:
    sub_1C93D2C(v9, v10);
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

  if ( (byte_4D2E697 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E697 = 1;
  }
  showBuffComponent = (UnityEngine_Object_o *)this->fields.showBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(showBuffComponent, 0, 0);
  if ( buffData && !v6 )
  {
    v7 = this->fields.showBuffComponent;
    ShowServantParam = BattleBuffData__getShowServantParam(buffData, 0);
    if ( !v7 )
      sub_1C93D2C(ShowServantParam, v9);
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
    sub_1C93D2C(hpLabel, *(_QWORD *)&dispType);
  }
  if ( LODWORD(posSkillRoot->max_length) <= dispType )
LABEL_25:
    sub_1C93D34(hpLabel);
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)hpLabel, posSkillRoot->m_Items[dispType], 0);
}


void WarBoardSimplePopupElementServant__SetUp(
        WarBoardSimplePopupElementServant_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  WarBoardPieceData_o *v3; // x20
  WarBoardSimplePopupElementServant_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  BattleServantData_o *battleServant_k__BackingField; // x21
  UILabel_o *atkLabel; // x22
  UILabel_o *hpLabel; // x22
  UILabel_o *detailButtonLabel; // x22
  UILabel_o *servantNameLabel; // x22
  UnityEngine_Object_o *pieceStatusLabelComponent; // x22
  UnityEngine_Object_o *servantLevel; // x22
  UILabel_o *v18; // x22
  System_String_o *v19; // x23
  Il2CppObject *v20; // x0
  float *p_z; // x8
  float *p_x; // x9
  float *p_y; // x10
  char v24; // w22
  UILabel_o *hpValueLabel; // x22
  Il2CppObject *v26; // x23
  Il2CppObject *v27; // x0
  int32_t AttackValue; // w22
  bool isPlayerGroup; // w0
  const MethodInfo *v30; // x3
  bool v31; // w0
  const MethodInfo *v32; // x3
  BattleBuffData_o *BuffData; // x0
  const MethodInfo *v34; // x2
  UnityEngine_GameObject_o *actionCountObj; // x21
  UILabel_o *actValueLabel; // x21
  UISprite_o *frameSprite; // x21
  Il2CppObject *v38; // x0
  UnityEngine_Object_o *actionPountObj; // x21
  UnityEngine_Object_o *actionPointValueLabel; // x21
  UnityEngine_GameObject_o *v41; // x21
  struct WarBoardCost_o *Cost_k__BackingField; // x8
  UILabel_o *v43; // x21
  UISprite_o *v44; // x21
  Il2CppObject *v45; // x0
  UILabel_o *actionPointLabel; // x21
  int32_t v47; // w21
  UILabel_o *currentActionPointDispLabel; // x23
  int v49; // w22
  UILabel_o *costDispLabel; // x23
  System_String_o *v51; // x24
  Il2CppObject *v52; // x21
  Il2CppObject *v53; // x0
  bool HasCost; // w0
  const MethodInfo *v55; // x2
  UnityEngine_GameObject_o *v56; // x21
  bool activeSelf; // w0
  __int64 v58; // x8
  __int64 v59; // x9
  __int64 v60; // x10
  int npcImageSvtId_k__BackingField; // w8
  int32_t npcDispLimitCount_k__BackingField; // w22
  int32_t ServantImageLimitSealAfter; // w23
  UISprite_o *servantIcon; // x24
  int32_t v65; // w25
  bool v66; // w21
  int32_t posAtkValueLabel; // w21
  Il2CppObject *v68; // x23
  Il2CppObject *v69; // x0
  System_String_o *v70; // x0
  UISprite_o *enemyIcon; // x23
  System_String_o *v72; // x22
  UISprite_o *v73; // x22
  System_String_o *v74; // x23
  UISprite_o *enemyIconBg; // x22
  bool v76; // w21
  UnityEngine_Object_o *equipIcon; // x21
  UnityEngine_Object_o *equipIconOnFace; // x21
  UISprite_o *v79; // x21
  int32_t iconEquipId_k__BackingField; // w22
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  int monitor; // w8
  bool v83; // w21
  UISprite_o *flameInClassIcon; // x23
  int32_t IconClassImageId_k__BackingField; // w21
  int32_t iconFrameType_k__BackingField; // w22
  int32_t breakPoint_k__BackingField; // w21
  int32_t breakPointMax_k__BackingField; // w22
  bool isEnemyServant; // w0
  const MethodInfo *v90; // x4
  UIBasicSprite_o *hpBar; // x21
  float CurrentHpProgress; // s0
  float CurrentNpProgress; // s0
  const MethodInfo *v94; // x1
  UnityEngine_Object_o *critecalStarsRoot; // x21
  UILabel_o *critecalStarsLabel; // x21
  UnityEngine_Object_o *supportSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *RoleTypeLabel; // x21
  struct BattleServantData_o *v100; // x8
  int v101; // [xsp+Ch] [xbp-74h] BYREF
  int32_t MaxHp; // [xsp+10h] [xbp-70h] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+14h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF
  int32_t svtId[2]; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4

  v3 = pieceData;
  v4 = this;
  if ( (byte_4D2E693 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_15489/*"WARBOARD_INFO_POPUP_SVT_HP"*/);
    sub_1C93AD4(&StringLiteral_20465/*"icon_strong_enemy"*/);
    sub_1C93AD4(&StringLiteral_23185/*"questinfo_enemyface_bg"*/);
    sub_1C93AD4(&StringLiteral_20245/*"hp_gauge_boss"*/);
    sub_1C93AD4(&StringLiteral_23585/*"servant_base_{0}"*/);
    sub_1C93AD4(&StringLiteral_15488/*"WARBOARD_INFO_POPUP_SVT_DETAIL_BUTTON"*/);
    sub_1C93AD4(&StringLiteral_15487/*"WARBOARD_INFO_POPUP_SVT_ATK"*/);
    sub_1C93AD4(&StringLiteral_15485/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT"*/);
    sub_1C93AD4(&StringLiteral_15490/*"WARBOARD_INFO_POPUP_SVT_LV"*/);
    sub_1C93AD4(&StringLiteral_25379/*"{0:#,0} / {1:#,0}"*/);
    this = (WarBoardSimplePopupElementServant_o *)sub_1C93AD4(&StringLiteral_15486/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT_COST"*/);
    byte_4D2E693 = 1;
  }
  *(_QWORD *)svtId = 0;
  entity = 0;
  if ( !v3 )
    goto LABEL_162;
  if ( WarBoardPieceData__get_isMaster(v3, 0) || !v3->fields._battleServant_k__BackingField )
    return;
  v4->fields.pieceData = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.pieceData, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  battleServant_k__BackingField = v3->fields._battleServant_k__BackingField;
  atkLabel = v4->fields.atkLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15487/*"WARBOARD_INFO_POPUP_SVT_ATK"*/, 0);
  if ( !atkLabel )
    goto LABEL_162;
  UILabel__set_text(atkLabel, (System_String_o *)this, 0);
  hpLabel = v4->fields.hpLabel;
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15489/*"WARBOARD_INFO_POPUP_SVT_HP"*/, 0);
  if ( !hpLabel )
    goto LABEL_162;
  UILabel__set_text(hpLabel, (System_String_o *)this, 0);
  detailButtonLabel = v4->fields.detailButtonLabel;
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15488/*"WARBOARD_INFO_POPUP_SVT_DETAIL_BUTTON"*/, 0);
  if ( !detailButtonLabel )
    goto LABEL_162;
  UILabel__set_text(detailButtonLabel, (System_String_o *)this, 0);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantNameLabel;
  if ( !this )
    goto LABEL_162;
  UILabel__SetDefaultFont((UILabel_o *)this, 0);
  if ( !battleServant_k__BackingField )
    goto LABEL_162;
  servantNameLabel = v4->fields.servantNameLabel;
  this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getServantShortName(battleServant_k__BackingField, 0);
  if ( !servantNameLabel )
    goto LABEL_162;
  UILabel__set_text(servantNameLabel, (System_String_o *)this, 0);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantNameLabel;
  if ( !this )
    goto LABEL_162;
  UILabel__SetCondensedScale((UILabel_o *)this, v4->fields.servantNameLabelWidth, 0, 0);
  pieceStatusLabelComponent = (UnityEngine_Object_o *)v4->fields.pieceStatusLabelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pieceStatusLabelComponent, 0, 0) )
  {
    this = (WarBoardSimplePopupElementServant_o *)v4->fields.pieceStatusLabelComponent;
    if ( !this )
      goto LABEL_162;
    WarBoardPieceStatusLabel__SetupLabel((WarBoardPieceStatusLabel_o *)this, v3, 0);
  }
  ((void (__fastcall *)(WarBoardSimplePopupElementServant_o *, const MethodInfo *))v4->klass->vtable._4_UpdateUiBrightnessByPieceStatus.methodPtr)(
    v4,
    v4->klass->vtable._4_UpdateUiBrightnessByPieceStatus.method);
  servantLevel = (UnityEngine_Object_o *)v4->fields.servantLevel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(servantLevel, 0, 0) )
  {
    v18 = v4->fields.servantLevel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_15490/*"WARBOARD_INFO_POPUP_SVT_LV"*/, 0);
    iconLevel_k__BackingField = v3->fields._iconLevel_k__BackingField;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
    this = (WarBoardSimplePopupElementServant_o *)System_String__Format(v19, v20, 0);
    if ( !v18 )
      goto LABEL_162;
    UILabel__set_text(v18, (System_String_o *)this, 0);
    if ( WarBoardPieceData__get_isEnemyServant(v3, 0) && v3->fields._roleType_k__BackingField == 1 )
    {
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantLevel;
      if ( !this )
        goto LABEL_162;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
      if ( !this )
        goto LABEL_162;
      p_z = &v4->fields.positionLevelDanger.fields.z;
      p_x = &v4->fields.positionLevelDanger.fields.x;
      p_y = &v4->fields.positionLevelDanger.fields.y;
    }
    else
    {
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_IsNpc(v3, 0);
      if ( !v4->fields.servantLevel )
        goto LABEL_162;
      v24 = (char)this;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)v4->fields.servantLevel,
                                                      0);
      if ( (v24 & 1) != 0 )
      {
        if ( !this )
          goto LABEL_162;
        p_z = &v4->fields.positionLevelNpc.fields.z;
        p_x = &v4->fields.positionLevelNpc.fields.x;
        p_y = &v4->fields.positionLevelNpc.fields.y;
      }
      else
      {
        if ( !this )
          goto LABEL_162;
        p_z = &v4->fields.positionLevel.fields.z;
        p_x = &v4->fields.positionLevel.fields.x;
        p_y = &v4->fields.positionLevel.fields.y;
      }
    }
    v106.fields.z = *p_z;
    v106.fields.y = *p_y;
    v106.fields.x = *p_x;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v106, 0);
  }
  hpValueLabel = v4->fields.hpValueLabel;
  iconLevel_k__BackingField = WarBoardPieceData__get_CurrentHp(v3, 0);
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
  MaxHp = WarBoardPieceData__get_MaxHp(v3, 0);
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp);
  this = (WarBoardSimplePopupElementServant_o *)System_String__Format_64467032(
                                                  (System_String_o *)StringLiteral_25379/*"{0:#,0} / {1:#,0}"*/,
                                                  v26,
                                                  v27,
                                                  0);
  if ( !hpValueLabel )
    goto LABEL_162;
  UILabel__set_text(hpValueLabel, (System_String_o *)this, 0);
  AttackValue = WarBoardPieceData__get_AttackValue(v3, 0);
  isPlayerGroup = WarBoardPieceData__get_isPlayerGroup(v3, 0);
  WarBoardSimplePopupElementServant__SetAtkLabel(v4, AttackValue, isPlayerGroup, v30);
  v31 = WarBoardPieceData__get_isPlayerGroup(v3, 0);
  WarBoardSimplePopupElementServant__SetUpSkillIcon(v4, battleServant_k__BackingField, v31, v32);
  BuffData = WarBoardPieceData__get_BuffData(v3, 0);
  WarBoardSimplePopupElementServant__SetBuffIcon(v4, BuffData, v34);
  actionCountObj = v4->fields.actionCountObj;
  this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_isInfinitelyActable(v3, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    pieceData = 0;
  }
  else
  {
    this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_162;
    pieceData = (WarBoardPieceData_o *)(*((_DWORD *)this + 128) == 2);
  }
  if ( !actionCountObj )
    goto LABEL_162;
  UnityEngine_GameObject__SetActive(actionCountObj, (bool)pieceData, 0);
  actValueLabel = v4->fields.actValueLabel;
  svtId[0] = v3->fields._currentActionCount_k__BackingField;
  this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)svtId, 0);
  if ( !actValueLabel )
    goto LABEL_162;
  UILabel__set_text(actValueLabel, (System_String_o *)this, 0);
  frameSprite = v4->fields.frameSprite;
  iconLevel_k__BackingField = v3->fields._forceId_k__BackingField + 1;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
  this = (WarBoardSimplePopupElementServant_o *)System_String__Format((System_String_o *)StringLiteral_23585/*"servant_base_{0}"*/, v38, 0);
  if ( !frameSprite )
    goto LABEL_162;
  UISprite__set_spriteName(frameSprite, (System_String_o *)this, 0);
  actionPountObj = (UnityEngine_Object_o *)v4->fields.actionPountObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(actionPountObj, 0, 0) )
  {
    actionPointValueLabel = (UnityEngine_Object_o *)v4->fields.actionPointValueLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(actionPointValueLabel, 0, 0) )
    {
      v41 = v4->fields.actionPountObj;
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_HasCost(v3, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_162;
        pieceData = (WarBoardPieceData_o *)(*((_DWORD *)this + 128) == 2);
      }
      else
      {
        pieceData = 0;
      }
      if ( !v41 )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive(v41, (bool)pieceData, 0);
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_HasCost(v3, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        Cost_k__BackingField = v3->fields._Cost_k__BackingField;
        if ( !Cost_k__BackingField )
          goto LABEL_162;
        v43 = v4->fields.actionPointValueLabel;
        svtId[0] = Cost_k__BackingField->fields._CurrentActionPoint_k__BackingField;
        this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)svtId, 0);
        if ( !v43 )
          goto LABEL_162;
        UILabel__set_text(v43, (System_String_o *)this, 0);
        v44 = v4->fields.frameSprite;
        iconLevel_k__BackingField = v3->fields._forceId_k__BackingField + 1;
        v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
        this = (WarBoardSimplePopupElementServant_o *)System_String__Format(
                                                        (System_String_o *)StringLiteral_23585/*"servant_base_{0}"*/,
                                                        v45,
                                                        0);
        if ( !v44 )
          goto LABEL_162;
        UISprite__set_spriteName(v44, (System_String_o *)this, 0);
        this = (WarBoardSimplePopupElementServant_o *)v4->fields.actionPountLabelObj;
        if ( !this )
          goto LABEL_162;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        actionPointLabel = v4->fields.actionPointLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_15485/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT"*/,
                                                        0);
        if ( !actionPointLabel )
          goto LABEL_162;
        UILabel__set_text(actionPointLabel, (System_String_o *)this, 0);
        this = (WarBoardSimplePopupElementServant_o *)v3->fields._Cost_k__BackingField;
        if ( !this )
          goto LABEL_162;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__get_Move((WarBoardCost_o *)this, 0);
        if ( !v3->fields._Cost_k__BackingField )
          goto LABEL_162;
        v47 = (int)this;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__get_Attack(v3->fields._Cost_k__BackingField, 0);
        if ( !v3->fields._Cost_k__BackingField )
          goto LABEL_162;
        currentActionPointDispLabel = v4->fields.currentActionPointDispLabel;
        v49 = (int)this;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__CurrentAndMaxPointToString(
                                                        v3->fields._Cost_k__BackingField,
                                                        0);
        if ( !currentActionPointDispLabel )
          goto LABEL_162;
        UILabel__set_text(currentActionPointDispLabel, (System_String_o *)this, 0);
        costDispLabel = v4->fields.costDispLabel;
        v51 = LocalizationManager__Get((System_String_o *)StringLiteral_15486/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT_COST"*/, 0);
        MaxHp = v47;
        v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp);
        v101 = v49;
        v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v101);
        this = (WarBoardSimplePopupElementServant_o *)System_String__Format_64467032(v51, v52, v53, 0);
        if ( !costDispLabel )
          goto LABEL_162;
        UILabel__set_text(costDispLabel, (System_String_o *)this, 0);
      }
      HasCost = WarBoardPieceData__get_HasCost(v3, 0);
      WarBoardSimplePopupElementServant__SetUIPosition(v4, HasCost, v55);
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.actionCountObj;
      if ( !this )
        goto LABEL_162;
      v56 = v4->fields.actionPountObj;
      activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
      v58 = 344;
      if ( activeSelf )
      {
        v58 = 356;
        v59 = 352;
      }
      else
      {
        v59 = 340;
      }
      if ( activeSelf )
        v60 = 348;
      else
        v60 = 336;
      v107.fields.x = *(float *)((char *)&v4->klass + v60);
      v107.fields.y = *(float *)((char *)&v4->klass + v59);
      v107.fields.z = *(float *)((char *)&v4->klass + v58);
      GameObjectExtensions__SetLocalPosition(v56, v107, 0);
    }
  }
  npcImageSvtId_k__BackingField = v3->fields._npcImageSvtId_k__BackingField;
  if ( npcImageSvtId_k__BackingField <= 0 )
    npcImageSvtId_k__BackingField = v3->fields._iconId_k__BackingField;
  svtId[1] = npcImageSvtId_k__BackingField;
  npcDispLimitCount_k__BackingField = v3->fields._npcDispLimitCount_k__BackingField;
  if ( npcDispLimitCount_k__BackingField <= 0 )
    npcDispLimitCount_k__BackingField = v3->fields._iconLimitCount_k__BackingField;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WarBoardSimplePopupElementServant_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_162;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)this,
                                 v3->fields._iconId_k__BackingField,
                                 npcDispLimitCount_k__BackingField,
                                 0);
  if ( WarBoardPieceData__get_IsEnemyMonster(v3, 0) )
    goto LABEL_90;
  servantIcon = v4->fields.servantIcon;
  v65 = svtId[1];
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v66 = 1;
  if ( !AtlasManager__SetFaceImage(servantIcon, v65, ServantImageLimitSealAfter, 1, 0, 0) )
  {
LABEL_90:
    this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_162;
    posAtkValueLabel = (int32_t)this->fields.posAtkValueLabel;
    iconLevel_k__BackingField = svtId[1];
    v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
    MaxHp = npcDispLimitCount_k__BackingField;
    v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp);
    v70 = System_String__Concat(v68, v69, 0);
    enemyIcon = (UISprite_o *)v4->fields.enemyIcon;
    v72 = v70;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( AtlasManager__SetEventUI_41320352(posAtkValueLabel, enemyIcon, v72, 0) )
      goto LABEL_97;
    v73 = (UISprite_o *)v4->fields.enemyIcon;
    v74 = System_Int32__ToString((int32_t)&svtId[1], 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( AtlasManager__SetEventUI_41320352(posAtkValueLabel, v73, v74, 0) )
LABEL_97:
      WarBoardPieceData__ApplyDisplayType(v3, v4->fields.enemyIcon, 0);
    enemyIconBg = v4->fields.enemyIconBg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_41320352(posAtkValueLabel, enemyIconBg, (System_String_o *)StringLiteral_23185/*"questinfo_enemyface_bg"*/, 0);
    v66 = 0;
  }
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantIcon;
  if ( !this )
    goto LABEL_162;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
  if ( !this )
    goto LABEL_162;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v66, 0);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.enemyIcon;
  if ( !this )
    goto LABEL_162;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
  if ( !this )
    goto LABEL_162;
  v76 = !v66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v76, 0);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.enemyIconBg;
  if ( !this )
    goto LABEL_162;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
  if ( !this )
    goto LABEL_162;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v76, 0);
  equipIcon = (UnityEngine_Object_o *)v4->fields.equipIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipIcon, 0, 0) )
  {
    equipIconOnFace = (UnityEngine_Object_o *)v4->fields.equipIconOnFace;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipIconOnFace, 0, 0) )
    {
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.equipIconOnFace;
      if ( !this )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)this,
        v3->fields._iconEquipId_k__BackingField > 0,
        0);
    }
    v79 = v4->fields.equipIcon;
    iconEquipId_k__BackingField = v3->fields._iconEquipId_k__BackingField;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(v79, iconEquipId_k__BackingField, 0, 0);
    equipLimitCountSprite = (UnityEngine_Object_o *)v4->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (WarBoardSimplePopupElementServant_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !this )
        goto LABEL_162;
      this = (WarBoardSimplePopupElementServant_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                      &entity,
                                                      v3->fields._iconEquipId_k__BackingField,
                                                      (const MethodInfo_34632C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_127;
      if ( !entity )
        goto LABEL_162;
      monitor = (int)entity[5].monitor;
      if ( monitor >= 1 )
        v83 = v3->fields._equipLimitCount_k__BackingField >= monitor;
      else
LABEL_127:
        v83 = 0;
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.equipLimitCountSprite;
      if ( !this )
        goto LABEL_162;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
      if ( !this )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v83, 0);
    }
  }
  flameInClassIcon = v4->fields.flameInClassIcon;
  IconClassImageId_k__BackingField = v3->fields._IconClassImageId_k__BackingField;
  iconFrameType_k__BackingField = v3->fields._iconFrameType_k__BackingField;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIcon(flameInClassIcon, IconClassImageId_k__BackingField, iconFrameType_k__BackingField, 0, 0, 0);
  breakPoint_k__BackingField = v3->fields._breakPoint_k__BackingField;
  breakPointMax_k__BackingField = v3->fields._breakPointMax_k__BackingField;
  isEnemyServant = WarBoardPieceData__get_isEnemyServant(v3, 0);
  WarBoardSimplePopupElementServant__SetBreakPoint(
    v4,
    breakPoint_k__BackingField,
    breakPointMax_k__BackingField,
    isEnemyServant,
    v90);
  if ( WarBoardPieceData__get_isEnemyServant(v3, 0) )
  {
    this = (WarBoardSimplePopupElementServant_o *)v4->fields.hpBar;
    if ( !this )
      goto LABEL_162;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20245/*"hp_gauge_boss"*/, 0);
  }
  hpBar = (UIBasicSprite_o *)v4->fields.hpBar;
  CurrentHpProgress = WarBoardPieceData__get_CurrentHpProgress(v3, 0);
  if ( !hpBar )
LABEL_162:
    sub_1C93D2C(this, pieceData);
  UIBasicSprite__set_fillAmount(hpBar, CurrentHpProgress, 0);
  CurrentNpProgress = WarBoardPieceData__get_CurrentNpProgress(v3, 0);
  WarBoardSimplePopupElementServant__UpdateNpBars(v4, CurrentNpProgress, v94);
  critecalStarsRoot = (UnityEngine_Object_o *)v4->fields.critecalStarsRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(critecalStarsRoot, 0, 0) )
  {
    this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_isPlayerGroup(v3, 0);
    if ( !v4->fields.critecalStarsRoot )
      goto LABEL_162;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive(v4->fields.critecalStarsRoot, 1, 0);
      critecalStarsLabel = v4->fields.critecalStarsLabel;
      svtId[0] = WarBoardPieceData__get_CriticalStars(v3, 0);
      this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)svtId, 0);
      if ( !critecalStarsLabel )
        goto LABEL_162;
      UILabel__set_text(critecalStarsLabel, (System_String_o *)this, 0);
    }
    else
    {
      UnityEngine_GameObject__SetActive(v4->fields.critecalStarsRoot, 0, 0);
    }
  }
  supportSprite = (UnityEngine_Object_o *)v4->fields.supportSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(supportSprite, 0, 0) )
  {
    this = (WarBoardSimplePopupElementServant_o *)v4->fields.supportSprite;
    if ( !this )
      goto LABEL_162;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_IsNpc(v3, 0);
    if ( !gameObject )
      goto LABEL_162;
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)this & 1, 0);
  }
  RoleTypeLabel = (UnityEngine_Object_o *)v4->fields.RoleTypeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(RoleTypeLabel, 0, 0) )
  {
    v100 = v3->fields._battleServant_k__BackingField;
    if ( v100 )
    {
      if ( v100->fields.isEnemy && v3->fields._roleType_k__BackingField == 1 )
      {
        this = (WarBoardSimplePopupElementServant_o *)v4->fields.RoleTypeLabel;
        if ( this )
        {
          this = (WarBoardSimplePopupElementServant_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( this )
          {
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20465/*"icon_strong_enemy"*/, 0);
            this = (WarBoardSimplePopupElementServant_o *)v4->fields.RoleTypeLabel;
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              return;
            }
          }
        }
        goto LABEL_162;
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
    sub_1C93D2C(this, data);
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
        sub_1C93D34(this);
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

  if ( (byte_4D2E699 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4D2E699 = 1;
  }
  if ( this->fields.pieceData )
  {
    v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
      v4 = sub_1C69B68(v2);
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
    if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
      v5 = sub_1C69B68(v2);
    pieceData = this->fields.pieceData;
    v7 = **(WarBoardManager_o ***)(v5 + 184);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform || (position = UnityEngine_Transform__get_position(transform, 0), !v7) )
      sub_1C93D2C(transform, v9);
    WarBoardManager__ShowServantEquipSimplePopup(v7, pieceData, position, 0);
  }
}


void WarBoardSimplePopupElementServant__UpdateLabel(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpValueLabel; // x20
  __int64 v4; // x1
  UILabel_o *v5; // x0

  if ( (byte_4D2E695 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E695 = 1;
  }
  hpValueLabel = (UnityEngine_Object_o *)this->fields.hpValueLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpValueLabel, 0, 0) )
  {
    v5 = this->fields.hpValueLabel;
    if ( !v5 )
      sub_1C93D2C(0, v4);
    UILabel__SetCondensedScale(v5, this->fields.HpValueLabelMaxWidth, 0, 0);
  }
}


void WarBoardSimplePopupElementServant__UpdateNpBars(
        WarBoardSimplePopupElementServant_o *this,
        float progress,
        const MethodInfo *method)
{
  struct UISprite_array *npBars; // x8
  il2cpp_array_size_t max_length; // x9
  WarBoardSimplePopupElementServant_o *v5; // x19
  struct UISprite_array *v7; // x8
  struct UISprite_array *v8; // x8
  struct UISprite_array *v9; // x8

  npBars = this->fields.npBars;
  if ( npBars )
  {
    max_length = npBars->max_length;
    v5 = this;
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
        goto LABEL_27;
      this = (WarBoardSimplePopupElementServant_o *)npBars->m_Items[0];
      if ( !this )
        goto LABEL_26;
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress, 0);
      npBars = v5->fields.npBars;
      if ( !npBars )
        goto LABEL_26;
    }
    if ( SLODWORD(npBars->max_length) >= 2 )
    {
      this = (WarBoardSimplePopupElementServant_o *)npBars->m_Items[1];
      if ( !this )
        goto LABEL_26;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
      if ( !this )
        goto LABEL_26;
      if ( progress <= 1.0 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v7 = v5->fields.npBars;
        if ( !v7 )
          goto LABEL_26;
        if ( LODWORD(v7->max_length) <= 1 )
          goto LABEL_27;
        this = (WarBoardSimplePopupElementServant_o *)v7->m_Items[1];
        if ( !this )
          goto LABEL_26;
        UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress + -1.0, 0);
      }
    }
    v8 = v5->fields.npBars;
    if ( !v8 )
      goto LABEL_26;
    if ( SLODWORD(v8->max_length) < 3 )
      return;
    this = (WarBoardSimplePopupElementServant_o *)v8->m_Items[2];
    if ( !this )
      goto LABEL_26;
    this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
    if ( !this )
      goto LABEL_26;
    if ( progress <= 2.0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v9 = v5->fields.npBars;
    if ( !v9 )
LABEL_26:
      sub_1C93D2C(this, method);
    if ( LODWORD(v9->max_length) > 2 )
    {
      this = (WarBoardSimplePopupElementServant_o *)v9->m_Items[2];
      if ( this )
      {
        UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress + -2.0, 0);
        return;
      }
      goto LABEL_26;
    }
LABEL_27:
    sub_1C93D34(this);
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

  if ( (byte_4D2E694 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_UIWidget__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_UIWidget___);
    sub_1C93AD4(&Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__0__);
    sub_1C93AD4(&Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__1__);
    sub_1C93AD4(&WarBoardSimplePopupElementServant___c__DisplayClass55_0_TypeInfo);
    byte_4D2E694 = 1;
  }
  v3 = sub_1C93D20(WarBoardSimplePopupElementServant___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  pieceData = this->fields.pieceData;
  if ( !pieceData || (pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasIconDarkenBuff(pieceData, 0), !v3) )
    sub_1C93D2C(pieceData, v4);
  *(_BYTE *)(v3 + 16) = (unsigned __int8)pieceData & 1;
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v7 = (System_Action_object__o *)sub_1C93D20(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v7,
      (Il2CppObject *)v3,
      Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__0__,
      0);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v7,
      (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_UIWidget___);
  }
  turnDarkUiWidgetsAroundFaceIcon = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundFaceIcon;
  if ( turnDarkUiWidgetsAroundFaceIcon )
  {
    v9 = (System_Action_object__o *)sub_1C93D20(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v9,
      (Il2CppObject *)v3,
      Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__1__,
      0);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundFaceIcon,
      (System_Action_T__o *)v9,
      (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_UIWidget___);
  }
}


void WarBoardSimplePopupElementServant___c__DisplayClass55_0___ctor(
        WarBoardSimplePopupElementServant___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardSimplePopupElementServant___c__DisplayClass55_0___UpdateUiBrightnessByPieceStatus_b__0(
        WarBoardSimplePopupElementServant___c__DisplayClass55_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  UnityEngine_Color_o v3; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3.fields.r = 0.5;
  if ( !this->fields.hasIconDarkenBuff )
    v3.fields.r = 1.0;
  if ( !x )
    sub_1C93D2C(this, 0);
  v3.fields.a = 1.0;
  v3.fields.g = v3.fields.r;
  v3.fields.b = v3.fields.r;
  UIWidget__set_color(x, v3, 0);
}


void WarBoardSimplePopupElementServant___c__DisplayClass55_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardSimplePopupElementServant___c__DisplayClass55_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  UnityEngine_Color_o v3; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3.fields.r = 0.5;
  if ( !this->fields.hasIconDarkenBuff )
    v3.fields.r = 1.0;
  if ( !x )
    sub_1C93D2C(this, 0);
  v3.fields.a = 1.0;
  v3.fields.g = v3.fields.r;
  v3.fields.b = v3.fields.r;
  UIWidget__set_color(x, v3, 0);
}