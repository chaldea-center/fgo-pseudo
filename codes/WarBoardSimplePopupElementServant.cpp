void WarBoardSimplePopupElementServant___ctor(WarBoardSimplePopupElementServant_o *this, const MethodInfo *method)
{
  this->fields.HpValueLabelMaxWidth = 140;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_C0E9A0;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_C0E1A0;
  this->fields.positionLevelNpc.fields.z = 0.0;
  this->fields.servantNameLabelWidth = 180;
  *(_OWORD *)&this->fields.positionActionPointDefault.fields.x = xmmword_C0E9A0;
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

  if ( (byte_4C40CA8 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C37058(&Method_WarBoardSimplePopupElementServant_OnClickDetailButton__);
    byte_4C40CA8 = 1;
  }
  v3 = Method_WarBoardSimplePopupElementServant_OnClickDetailButton__;
  if ( (*((_BYTE *)Method_WarBoardSimplePopupElementServant_OnClickDetailButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_WarBoardSimplePopupElementServant_OnClickDetailButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  WarBoardManager__ShowServantDetailPopup((WarBoardManager_o *)Instance, this->fields.pieceData, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardSimplePopupElementServant__SetAtkLabel(
        WarBoardSimplePopupElementServant_o *this,
        int32_t atk,
        bool isPlayerGroup,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  UILabel_o *atkValueLabel; // x19
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C40CA4 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_15421/*"WARBOARD_SERVANT_INFO_ENEMY_ATK"*/);
    sub_1C37058(&StringLiteral_25052/*"{0:#,0}"*/);
    byte_4C40CA4 = 1;
  }
  atkValueLabel = this->fields.atkValueLabel;
  if ( isPlayerGroup )
  {
    v14 = atk;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, isPlayerGroup, method, v4, v5, v6, v7);
    v13 = System_String__Format((System_String_o *)StringLiteral_25052/*"{0:#,0}"*/, v12, 0);
    if ( atkValueLabel )
    {
      UILabel__set_text(atkValueLabel, v13, 0);
      return;
    }
LABEL_10:
    sub_1C372B4(v13);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_15421/*"WARBOARD_SERVANT_INFO_ENEMY_ATK"*/, 0);
  if ( !atkValueLabel )
    goto LABEL_10;
  UILabel__set_text(atkValueLabel, v13, 0);
}


void WarBoardSimplePopupElementServant__SetBreakPoint(
        WarBoardSimplePopupElementServant_o *this,
        int32_t breakPoint,
        int32_t breakPointMax,
        bool isEnemyServant,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v9; // x0
  struct UIWidget_o *breakPointParent; // x8
  unsigned int *v11; // x20
  __int64 v12; // x24
  unsigned __int64 v13; // x25
  __int64 v14; // x28
  void **p_monitor; // x29
  float v16; // s9
  float v17; // s8
  int v18; // w26
  __int64 v19; // x27
  bool v20; // w21
  Il2CppObject *breakPointPrefab; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v23; // x23
  WarBoardBreakPointComponent_o *Component_object; // x22
  struct UIWidget_o *v25; // x8
  __int64 v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  float maxSpacing; // s0
  __int64 v30; // x0
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C40CA6 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&WarBoardBreakPointComponent___TypeInfo);
    byte_4C40CA6 = 1;
  }
  v9 = (UnityEngine_GameObject_o *)sub_1C37100(WarBoardBreakPointComponent___TypeInfo, (unsigned int)breakPointMax);
  breakPointParent = this->fields.breakPointParent;
  if ( !breakPointParent )
    goto LABEL_21;
  if ( breakPointMax >= 1 )
  {
    v11 = (unsigned int *)v9;
    v12 = 0;
    v13 = 0;
    v14 = breakPoint;
    p_monitor = &v9[1].monitor;
    v16 = (float)breakPointParent->fields.mWidth / (float)breakPointMax;
    v17 = 0.0;
    v18 = 2 * breakPointMax - 2;
    v19 = (unsigned int)breakPointMax - 1LL;
    v20 = isEnemyServant;
    do
    {
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)breakPointParent, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51855596(
                                         breakPointPrefab,
                                         transform,
                                         (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
      if ( !v9 )
        break;
      v23 = v9;
      UnityEngine_GameObject__SetActive(v9, 1, 0);
      Component_object = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            v23,
                                                            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      v9 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v23, 0);
      if ( !v9 )
        break;
      v31.fields.y = 0.0;
      v31.fields.z = 0.0;
      v31.fields.x = v17;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v9, v31, 0);
      v25 = this->fields.breakPointParent;
      if ( !v25 )
        break;
      if ( !Component_object )
        break;
      WarBoardBreakPointComponent__Initialize(Component_object, v18 + v25->fields.mDepth, v13 + 1, 0, v20, 0, 0);
      if ( !v11 )
        break;
      v26 = sub_1C37194(Component_object, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
      if ( !v26 )
      {
        v30 = sub_1C372D8();
        sub_1C37180(v30, 0);
      }
      if ( v13 >= v11[6]
        || (p_monitor[v13] = Component_object,
            sub_1C36FFC((CGThumbnailListItem_o *)&p_monitor[v12], (int32_t)Component_object, v27, v28),
            v13 >= v11[6]) )
      {
        sub_1C372BC(v26);
      }
      v9 = (UnityEngine_GameObject_o *)p_monitor[v13];
      if ( !v9 )
        break;
      WarBoardBreakPointComponent__SetActive((WarBoardBreakPointComponent_o *)v9, (__int64)v13 < v14, 0, 0);
      if ( v19 == v13 )
        return;
      maxSpacing = Component_object->fields.maxSpacing;
      breakPointParent = this->fields.breakPointParent;
      v18 -= 2;
      ++v12;
      if ( maxSpacing >= v16 )
        maxSpacing = v16;
      v17 = v17 + maxSpacing;
      ++v13;
    }
    while ( breakPointParent );
LABEL_21:
    sub_1C372B4(v9);
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

  if ( (byte_4C40CA5 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40CA5 = 1;
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
      sub_1C372B4(ShowServantParam);
    BattleServantShowBuffComponent__setBuffList(v7, ShowServantParam, 0);
  }
}


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
    sub_1C372B4(hpLabel);
  }
  if ( LODWORD(posSkillRoot->max_length) <= dispType )
LABEL_25:
    sub_1C372BC(hpLabel);
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)hpLabel, posSkillRoot->m_Items[dispType], 0);
}


void WarBoardSimplePopupElementServant__SetUp(
        WarBoardSimplePopupElementServant_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  WarBoardSimplePopupElementServant_o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  BattleServantData_o *battleServant_k__BackingField; // x21
  UILabel_o *atkLabel; // x22
  UILabel_o *hpLabel; // x22
  UILabel_o *detailButtonLabel; // x22
  UILabel_o *servantNameLabel; // x22
  UnityEngine_Object_o *pieceStatusLabelComponent; // x22
  UnityEngine_Object_o *servantLevel; // x22
  UILabel_o *v14; // x22
  System_String_o *v15; // x23
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  Il2CppObject *v22; // x0
  float *p_z; // x8
  float *p_x; // x9
  float *p_y; // x10
  char v26; // w22
  UILabel_o *hpValueLabel; // x22
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x5
  __int64 v32; // x6
  __int64 v33; // x7
  Il2CppObject *v34; // x23
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  Il2CppObject *v41; // x0
  int32_t AttackValue; // w22
  bool isPlayerGroup; // w0
  const MethodInfo *v44; // x3
  bool v45; // w0
  const MethodInfo *v46; // x3
  BattleBuffData_o *BuffData; // x0
  const MethodInfo *v48; // x2
  UnityEngine_GameObject_o *actionCountObj; // x21
  bool v50; // w1
  UILabel_o *actValueLabel; // x21
  UISprite_o *frameSprite; // x21
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  __int64 v56; // x5
  __int64 v57; // x6
  __int64 v58; // x7
  Il2CppObject *v59; // x0
  UnityEngine_Object_o *actionPountObj; // x21
  UnityEngine_Object_o *actionPointValueLabel; // x21
  UnityEngine_GameObject_o *v62; // x21
  bool v63; // w1
  struct WarBoardCost_o *Cost_k__BackingField; // x8
  UILabel_o *v65; // x21
  UISprite_o *v66; // x21
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  __int64 v70; // x5
  __int64 v71; // x6
  __int64 v72; // x7
  Il2CppObject *v73; // x0
  UILabel_o *actionPointLabel; // x21
  int32_t v75; // w21
  UILabel_o *currentActionPointDispLabel; // x23
  int v77; // w22
  UILabel_o *costDispLabel; // x23
  System_String_o *v79; // x24
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  __int64 v83; // x5
  __int64 v84; // x6
  __int64 v85; // x7
  Il2CppObject *v86; // x21
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  __int64 v90; // x5
  __int64 v91; // x6
  __int64 v92; // x7
  Il2CppObject *v93; // x0
  bool HasCost; // w0
  const MethodInfo *v95; // x2
  UnityEngine_GameObject_o *v96; // x21
  bool activeSelf; // w0
  __int64 v98; // x8
  __int64 v99; // x9
  __int64 v100; // x10
  int32_t npcImageSvtId_k__BackingField; // w8
  int npcDispLimitCount_k__BackingField; // w22
  int32_t ServantImageLimitSealAfter; // w23
  UISprite_o *servantIcon; // x24
  int32_t v105; // w25
  bool v106; // w21
  __int64 v107; // x2
  __int64 v108; // x3
  __int64 v109; // x4
  __int64 v110; // x5
  __int64 v111; // x6
  __int64 v112; // x7
  int32_t posAtkValueLabel; // w21
  Il2CppObject *v114; // x23
  __int64 v115; // x2
  __int64 v116; // x3
  __int64 v117; // x4
  __int64 v118; // x5
  __int64 v119; // x6
  __int64 v120; // x7
  Il2CppObject *v121; // x0
  System_String_o *v122; // x0
  UISprite_o *enemyIcon; // x23
  System_String_o *v124; // x22
  UISprite_o *v125; // x22
  System_String_o *v126; // x23
  UISprite_o *enemyIconBg; // x22
  bool v128; // w21
  UnityEngine_Object_o *equipIcon; // x21
  UnityEngine_Object_o *equipIconOnFace; // x21
  UISprite_o *v131; // x21
  int32_t iconEquipId_k__BackingField; // w22
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  int32_t monitor; // w8
  bool v135; // w21
  UISprite_o *flameInClassIcon; // x23
  int32_t IconClassImageId_k__BackingField; // w21
  int32_t iconFrameType_k__BackingField; // w22
  int32_t breakPoint_k__BackingField; // w21
  int32_t breakPointMax_k__BackingField; // w22
  bool isEnemyServant; // w0
  const MethodInfo *v142; // x4
  UIBasicSprite_o *hpBar; // x21
  float CurrentHpProgress; // s0
  float CurrentNpProgress; // s0
  const MethodInfo *v146; // x1
  UnityEngine_Object_o *critecalStarsRoot; // x21
  UILabel_o *critecalStarsLabel; // x21
  UnityEngine_Object_o *supportSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *RoleTypeLabel; // x21
  struct BattleServantData_o *v152; // x8
  int v153; // [xsp+Ch] [xbp-74h] BYREF
  int32_t MaxHp; // [xsp+10h] [xbp-70h] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+14h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF
  int32_t svtId[2]; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v158; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v159; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C40CA1 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C37058(&StringLiteral_15390/*"WARBOARD_INFO_POPUP_SVT_HP"*/);
    sub_1C37058(&StringLiteral_20240/*"icon_strong_enemy"*/);
    sub_1C37058(&StringLiteral_22900/*"questinfo_enemyface_bg"*/);
    sub_1C37058(&StringLiteral_20027/*"hp_gauge_boss"*/);
    sub_1C37058(&StringLiteral_23287/*"servant_base_{0}"*/);
    sub_1C37058(&StringLiteral_15389/*"WARBOARD_INFO_POPUP_SVT_DETAIL_BUTTON"*/);
    sub_1C37058(&StringLiteral_15388/*"WARBOARD_INFO_POPUP_SVT_ATK"*/);
    sub_1C37058(&StringLiteral_15386/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT"*/);
    sub_1C37058(&StringLiteral_15391/*"WARBOARD_INFO_POPUP_SVT_LV"*/);
    sub_1C37058(&StringLiteral_25055/*"{0:#,0} / {1:#,0}"*/);
    this = (WarBoardSimplePopupElementServant_o *)sub_1C37058(&StringLiteral_15387/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT_COST"*/);
    byte_4C40CA1 = 1;
  }
  *(_QWORD *)svtId = 0;
  entity = 0;
  if ( !pieceData )
    goto LABEL_162;
  if ( WarBoardPieceData__get_isMaster(pieceData, 0) || !pieceData->fields._battleServant_k__BackingField )
    return;
  v4->fields.pieceData = pieceData;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.pieceData, (int32_t)pieceData, v5, v6);
  battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
  atkLabel = v4->fields.atkLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15388/*"WARBOARD_INFO_POPUP_SVT_ATK"*/, 0);
  if ( !atkLabel )
    goto LABEL_162;
  UILabel__set_text(atkLabel, (System_String_o *)this, 0);
  hpLabel = v4->fields.hpLabel;
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15390/*"WARBOARD_INFO_POPUP_SVT_HP"*/, 0);
  if ( !hpLabel )
    goto LABEL_162;
  UILabel__set_text(hpLabel, (System_String_o *)this, 0);
  detailButtonLabel = v4->fields.detailButtonLabel;
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15389/*"WARBOARD_INFO_POPUP_SVT_DETAIL_BUTTON"*/, 0);
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
    WarBoardPieceStatusLabel__SetupLabel((WarBoardPieceStatusLabel_o *)this, pieceData, 0);
  }
  ((void (__fastcall *)(WarBoardSimplePopupElementServant_o *, const MethodInfo *))v4->klass->vtable._4_UpdateUiBrightnessByPieceStatus.methodPtr)(
    v4,
    v4->klass->vtable._4_UpdateUiBrightnessByPieceStatus.method);
  servantLevel = (UnityEngine_Object_o *)v4->fields.servantLevel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(servantLevel, 0, 0) )
  {
    v14 = v4->fields.servantLevel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_15391/*"WARBOARD_INFO_POPUP_SVT_LV"*/, 0);
    iconLevel_k__BackingField = pieceData->fields._iconLevel_k__BackingField;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v16, v17, v18, v19, v20, v21);
    this = (WarBoardSimplePopupElementServant_o *)System_String__Format(v15, v22, 0);
    if ( !v14 )
      goto LABEL_162;
    UILabel__set_text(v14, (System_String_o *)this, 0);
    if ( WarBoardPieceData__get_isEnemyServant(pieceData, 0) && pieceData->fields._roleType_k__BackingField == 1 )
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
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_IsNpc(pieceData, 0);
      if ( !v4->fields.servantLevel )
        goto LABEL_162;
      v26 = (char)this;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)v4->fields.servantLevel,
                                                      0);
      if ( (v26 & 1) != 0 )
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
    v158.fields.z = *p_z;
    v158.fields.y = *p_y;
    v158.fields.x = *p_x;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v158, 0);
  }
  hpValueLabel = v4->fields.hpValueLabel;
  iconLevel_k__BackingField = WarBoardPieceData__get_CurrentHp(pieceData, 0);
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v28, v29, v30, v31, v32, v33);
  MaxHp = WarBoardPieceData__get_MaxHp(pieceData, 0);
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp, v35, v36, v37, v38, v39, v40);
  this = (WarBoardSimplePopupElementServant_o *)System_String__Format_63602948(
                                                  (System_String_o *)StringLiteral_25055/*"{0:#,0} / {1:#,0}"*/,
                                                  v34,
                                                  v41,
                                                  0);
  if ( !hpValueLabel )
    goto LABEL_162;
  UILabel__set_text(hpValueLabel, (System_String_o *)this, 0);
  AttackValue = WarBoardPieceData__get_AttackValue(pieceData, 0);
  isPlayerGroup = WarBoardPieceData__get_isPlayerGroup(pieceData, 0);
  WarBoardSimplePopupElementServant__SetAtkLabel(v4, AttackValue, isPlayerGroup, v44);
  v45 = WarBoardPieceData__get_isPlayerGroup(pieceData, 0);
  WarBoardSimplePopupElementServant__SetUpSkillIcon(v4, battleServant_k__BackingField, v45, v46);
  BuffData = WarBoardPieceData__get_BuffData(pieceData, 0);
  WarBoardSimplePopupElementServant__SetBuffIcon(v4, BuffData, v48);
  actionCountObj = v4->fields.actionCountObj;
  this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_isInfinitelyActable(pieceData, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v50 = 0;
  }
  else
  {
    this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_162;
    v50 = LODWORD(this[1].fields.hpBar) == 2;
  }
  if ( !actionCountObj )
    goto LABEL_162;
  UnityEngine_GameObject__SetActive(actionCountObj, v50, 0);
  actValueLabel = v4->fields.actValueLabel;
  svtId[0] = pieceData->fields._currentActionCount_k__BackingField;
  this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)svtId, 0);
  if ( !actValueLabel )
    goto LABEL_162;
  UILabel__set_text(actValueLabel, (System_String_o *)this, 0);
  frameSprite = v4->fields.frameSprite;
  iconLevel_k__BackingField = pieceData->fields._forceId_k__BackingField + 1;
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v53, v54, v55, v56, v57, v58);
  this = (WarBoardSimplePopupElementServant_o *)System_String__Format((System_String_o *)StringLiteral_23287/*"servant_base_{0}"*/, v59, 0);
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
      v62 = v4->fields.actionPountObj;
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_HasCost(pieceData, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_162;
        v63 = LODWORD(this[1].fields.hpBar) == 2;
      }
      else
      {
        v63 = 0;
      }
      if ( !v62 )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive(v62, v63, 0);
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_HasCost(pieceData, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        Cost_k__BackingField = pieceData->fields._Cost_k__BackingField;
        if ( !Cost_k__BackingField )
          goto LABEL_162;
        v65 = v4->fields.actionPointValueLabel;
        svtId[0] = Cost_k__BackingField->fields._CurrentActionPoint_k__BackingField;
        this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)svtId, 0);
        if ( !v65 )
          goto LABEL_162;
        UILabel__set_text(v65, (System_String_o *)this, 0);
        v66 = v4->fields.frameSprite;
        iconLevel_k__BackingField = pieceData->fields._forceId_k__BackingField + 1;
        v73 = (Il2CppObject *)j_il2cpp_value_box_0(
                                int_TypeInfo,
                                &iconLevel_k__BackingField,
                                v67,
                                v68,
                                v69,
                                v70,
                                v71,
                                v72);
        this = (WarBoardSimplePopupElementServant_o *)System_String__Format(
                                                        (System_String_o *)StringLiteral_23287/*"servant_base_{0}"*/,
                                                        v73,
                                                        0);
        if ( !v66 )
          goto LABEL_162;
        UISprite__set_spriteName(v66, (System_String_o *)this, 0);
        this = (WarBoardSimplePopupElementServant_o *)v4->fields.actionPountLabelObj;
        if ( !this )
          goto LABEL_162;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        actionPointLabel = v4->fields.actionPointLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_15386/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT"*/,
                                                        0);
        if ( !actionPointLabel )
          goto LABEL_162;
        UILabel__set_text(actionPointLabel, (System_String_o *)this, 0);
        this = (WarBoardSimplePopupElementServant_o *)pieceData->fields._Cost_k__BackingField;
        if ( !this )
          goto LABEL_162;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__get_Move((WarBoardCost_o *)this, 0);
        if ( !pieceData->fields._Cost_k__BackingField )
          goto LABEL_162;
        v75 = (int)this;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__get_Attack(
                                                        pieceData->fields._Cost_k__BackingField,
                                                        0);
        if ( !pieceData->fields._Cost_k__BackingField )
          goto LABEL_162;
        currentActionPointDispLabel = v4->fields.currentActionPointDispLabel;
        v77 = (int)this;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__CurrentAndMaxPointToString(
                                                        pieceData->fields._Cost_k__BackingField,
                                                        0);
        if ( !currentActionPointDispLabel )
          goto LABEL_162;
        UILabel__set_text(currentActionPointDispLabel, (System_String_o *)this, 0);
        costDispLabel = v4->fields.costDispLabel;
        v79 = LocalizationManager__Get((System_String_o *)StringLiteral_15387/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT_COST"*/, 0);
        MaxHp = v75;
        v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp, v80, v81, v82, v83, v84, v85);
        v153 = v77;
        v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v153, v87, v88, v89, v90, v91, v92);
        this = (WarBoardSimplePopupElementServant_o *)System_String__Format_63602948(v79, v86, v93, 0);
        if ( !costDispLabel )
          goto LABEL_162;
        UILabel__set_text(costDispLabel, (System_String_o *)this, 0);
      }
      HasCost = WarBoardPieceData__get_HasCost(pieceData, 0);
      WarBoardSimplePopupElementServant__SetUIPosition(v4, HasCost, v95);
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.actionCountObj;
      if ( !this )
        goto LABEL_162;
      v96 = v4->fields.actionPountObj;
      activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
      v98 = 344;
      if ( activeSelf )
      {
        v98 = 356;
        v99 = 352;
      }
      else
      {
        v99 = 340;
      }
      if ( activeSelf )
        v100 = 348;
      else
        v100 = 336;
      v159.fields.x = *(float *)((char *)&v4->klass + v100);
      v159.fields.y = *(float *)((char *)&v4->klass + v99);
      v159.fields.z = *(float *)((char *)&v4->klass + v98);
      GameObjectExtensions__SetLocalPosition(v96, v159, 0);
    }
  }
  npcImageSvtId_k__BackingField = pieceData->fields._npcImageSvtId_k__BackingField;
  if ( npcImageSvtId_k__BackingField <= 0 )
    npcImageSvtId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  svtId[1] = npcImageSvtId_k__BackingField;
  npcDispLimitCount_k__BackingField = pieceData->fields._npcDispLimitCount_k__BackingField;
  if ( npcDispLimitCount_k__BackingField <= 0 )
    npcDispLimitCount_k__BackingField = pieceData->fields._iconLimitCount_k__BackingField;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WarBoardSimplePopupElementServant_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_162;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)this,
                                 pieceData->fields._iconId_k__BackingField,
                                 npcDispLimitCount_k__BackingField,
                                 0);
  if ( WarBoardPieceData__get_IsEnemyMonster(pieceData, 0) )
    goto LABEL_90;
  servantIcon = v4->fields.servantIcon;
  v105 = svtId[1];
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v106 = 1;
  if ( !AtlasManager__SetFaceImage(servantIcon, v105, ServantImageLimitSealAfter, 1, 0, 0) )
  {
LABEL_90:
    this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_162;
    posAtkValueLabel = (int32_t)this->fields.posAtkValueLabel;
    iconLevel_k__BackingField = svtId[1];
    v114 = (Il2CppObject *)j_il2cpp_value_box_0(
                             int_TypeInfo,
                             &iconLevel_k__BackingField,
                             v107,
                             v108,
                             v109,
                             v110,
                             v111,
                             v112);
    MaxHp = npcDispLimitCount_k__BackingField;
    v121 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp, v115, v116, v117, v118, v119, v120);
    v122 = System_String__Concat(v114, v121, 0);
    enemyIcon = (UISprite_o *)v4->fields.enemyIcon;
    v124 = v122;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( AtlasManager__SetEventUI_40606984(posAtkValueLabel, enemyIcon, v124, 0) )
      goto LABEL_97;
    v125 = (UISprite_o *)v4->fields.enemyIcon;
    v126 = System_Int32__ToString((int32_t)&svtId[1], 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( AtlasManager__SetEventUI_40606984(posAtkValueLabel, v125, v126, 0) )
LABEL_97:
      WarBoardPieceData__ApplyDisplayType(pieceData, v4->fields.enemyIcon, 0);
    enemyIconBg = v4->fields.enemyIconBg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_40606984(posAtkValueLabel, enemyIconBg, (System_String_o *)StringLiteral_22900/*"questinfo_enemyface_bg"*/, 0);
    v106 = 0;
  }
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantIcon;
  if ( !this )
    goto LABEL_162;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
  if ( !this )
    goto LABEL_162;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v106, 0);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.enemyIcon;
  if ( !this )
    goto LABEL_162;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
  if ( !this )
    goto LABEL_162;
  v128 = !v106;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v128, 0);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.enemyIconBg;
  if ( !this )
    goto LABEL_162;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
  if ( !this )
    goto LABEL_162;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v128, 0);
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
        pieceData->fields._iconEquipId_k__BackingField > 0,
        0);
    }
    v131 = v4->fields.equipIcon;
    iconEquipId_k__BackingField = pieceData->fields._iconEquipId_k__BackingField;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(v131, iconEquipId_k__BackingField, 0, 0);
    equipLimitCountSprite = (UnityEngine_Object_o *)v4->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (WarBoardSimplePopupElementServant_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !this )
        goto LABEL_162;
      this = (WarBoardSimplePopupElementServant_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                      &entity,
                                                      pieceData->fields._iconEquipId_k__BackingField,
                                                      (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_127;
      if ( !entity )
        goto LABEL_162;
      monitor = (int32_t)entity[5].monitor;
      if ( monitor >= 1 )
        v135 = pieceData->fields._equipLimitCount_k__BackingField >= monitor;
      else
LABEL_127:
        v135 = 0;
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.equipLimitCountSprite;
      if ( !this )
        goto LABEL_162;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
      if ( !this )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v135, 0);
    }
  }
  flameInClassIcon = v4->fields.flameInClassIcon;
  IconClassImageId_k__BackingField = pieceData->fields._IconClassImageId_k__BackingField;
  iconFrameType_k__BackingField = pieceData->fields._iconFrameType_k__BackingField;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIcon(flameInClassIcon, IconClassImageId_k__BackingField, iconFrameType_k__BackingField, 0, 0, 0);
  breakPoint_k__BackingField = pieceData->fields._breakPoint_k__BackingField;
  breakPointMax_k__BackingField = pieceData->fields._breakPointMax_k__BackingField;
  isEnemyServant = WarBoardPieceData__get_isEnemyServant(pieceData, 0);
  WarBoardSimplePopupElementServant__SetBreakPoint(
    v4,
    breakPoint_k__BackingField,
    breakPointMax_k__BackingField,
    isEnemyServant,
    v142);
  if ( WarBoardPieceData__get_isEnemyServant(pieceData, 0) )
  {
    this = (WarBoardSimplePopupElementServant_o *)v4->fields.hpBar;
    if ( !this )
      goto LABEL_162;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20027/*"hp_gauge_boss"*/, 0);
  }
  hpBar = (UIBasicSprite_o *)v4->fields.hpBar;
  CurrentHpProgress = WarBoardPieceData__get_CurrentHpProgress(pieceData, 0);
  if ( !hpBar )
LABEL_162:
    sub_1C372B4(this);
  UIBasicSprite__set_fillAmount(hpBar, CurrentHpProgress, 0);
  CurrentNpProgress = WarBoardPieceData__get_CurrentNpProgress(pieceData, 0);
  WarBoardSimplePopupElementServant__UpdateNpBars(v4, CurrentNpProgress, v146);
  critecalStarsRoot = (UnityEngine_Object_o *)v4->fields.critecalStarsRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(critecalStarsRoot, 0, 0) )
  {
    this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_isPlayerGroup(pieceData, 0);
    if ( !v4->fields.critecalStarsRoot )
      goto LABEL_162;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive(v4->fields.critecalStarsRoot, 1, 0);
      critecalStarsLabel = v4->fields.critecalStarsLabel;
      svtId[0] = WarBoardPieceData__get_CriticalStars(pieceData, 0);
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
    this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_IsNpc(pieceData, 0);
    if ( !gameObject )
      goto LABEL_162;
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)this & 1, 0);
  }
  RoleTypeLabel = (UnityEngine_Object_o *)v4->fields.RoleTypeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(RoleTypeLabel, 0, 0) )
  {
    v152 = pieceData->fields._battleServant_k__BackingField;
    if ( v152 )
    {
      if ( v152->fields.isEnemy && pieceData->fields._roleType_k__BackingField == 1 )
      {
        this = (WarBoardSimplePopupElementServant_o *)v4->fields.RoleTypeLabel;
        if ( this )
        {
          this = (WarBoardSimplePopupElementServant_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( this )
          {
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20240/*"icon_strong_enemy"*/, 0);
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
    sub_1C372B4(this);
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
        sub_1C372BC(this);
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
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C40CA7 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4C40CA7 = 1;
  }
  if ( this->fields.pieceData )
  {
    v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
      v4 = sub_1C8776C(v2);
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
    if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
      v5 = sub_1C8776C(v2);
    pieceData = this->fields.pieceData;
    v7 = **(WarBoardManager_o ***)(v5 + 184);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform || (position = UnityEngine_Transform__get_position(transform, 0), !v7) )
      sub_1C372B4(transform);
    WarBoardManager__ShowServantEquipSimplePopup(v7, pieceData, position, 0);
  }
}


void WarBoardSimplePopupElementServant__UpdateLabel(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpValueLabel; // x20
  UILabel_o *v4; // x0

  if ( (byte_4C40CA3 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40CA3 = 1;
  }
  hpValueLabel = (UnityEngine_Object_o *)this->fields.hpValueLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpValueLabel, 0, 0) )
  {
    v4 = this->fields.hpValueLabel;
    if ( !v4 )
      sub_1C372B4(0);
    UILabel__SetCondensedScale(v4, this->fields.HpValueLabelMaxWidth, 0, 0);
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
      sub_1C372B4(this);
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
    sub_1C372BC(this);
  }
}


void WarBoardSimplePopupElementServant__UpdateUiBrightnessByPieceStatus(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  WarBoardPieceData_o *pieceData; // x0
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundActionCount; // x21
  System_Action_object__o *v6; // x22
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundFaceIcon; // x19
  System_Action_object__o *v8; // x21

  if ( (byte_4C40CA2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_UIWidget__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_UIWidget___);
    sub_1C37058(&Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__0__);
    sub_1C37058(&Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__1__);
    sub_1C37058(&WarBoardSimplePopupElementServant___c__DisplayClass55_0_TypeInfo);
    byte_4C40CA2 = 1;
  }
  v3 = sub_1C372A4(WarBoardSimplePopupElementServant___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  pieceData = this->fields.pieceData;
  if ( !pieceData || (pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasIconDarkenBuff(pieceData, 0), !v3) )
    sub_1C372B4(pieceData);
  *(_BYTE *)(v3 + 16) = (unsigned __int8)pieceData & 1;
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v6 = (System_Action_object__o *)sub_1C372A4(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v6,
      (Il2CppObject *)v3,
      Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__0__,
      0);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v6,
      (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_UIWidget___);
  }
  turnDarkUiWidgetsAroundFaceIcon = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundFaceIcon;
  if ( turnDarkUiWidgetsAroundFaceIcon )
  {
    v8 = (System_Action_object__o *)sub_1C372A4(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v8,
      (Il2CppObject *)v3,
      Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__1__,
      0);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundFaceIcon,
      (System_Action_T__o *)v8,
      (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_UIWidget___);
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

  v3 = 0.5;
  if ( !this->fields.hasIconDarkenBuff )
    v3 = 1.0;
  if ( !x )
    sub_1C372B4(this);
  v4 = 1.0;
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

  v3 = 0.5;
  if ( !this->fields.hasIconDarkenBuff )
    v3 = 1.0;
  if ( !x )
    sub_1C372B4(this);
  v4 = 1.0;
  v5 = v3;
  v6 = v3;
  UIWidget__set_color(x, *(UnityEngine_Color_o *)&v3, 0);
}