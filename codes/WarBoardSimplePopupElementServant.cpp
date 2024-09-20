void __fastcall WarBoardSimplePopupElementServant___ctor(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  this->fields.HpValueLabelMaxWidth = 140;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_BB4610;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_BB3EB0;
  this->fields.positionLevelNpc.fields.z = 0.0;
  this->fields.servantNameLabelWidth = 180;
  *(_OWORD *)&this->fields.positionActionPointDefault.fields.x = xmmword_BB4610;
  *(_QWORD *)&this->fields.positionActionPointNext.fields.y = 1111228416LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardSimplePopupElementServant__Awake(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardSimplePopupElementServant__OnClickDetailButton(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A59158 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardSimplePopupElementServant_OnClickDetailButton__);
    byte_4A59158 = 1;
  }
  v3 = Method_WarBoardSimplePopupElementServant_OnClickDetailButton__;
  if ( (*((_BYTE *)Method_WarBoardSimplePopupElementServant_OnClickDetailButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_WarBoardSimplePopupElementServant_OnClickDetailButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  WarBoardManager__ShowServantDetailPopup((WarBoardManager_o *)Instance, this->fields.pieceData, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSimplePopupElementServant__SetAtkLabel(
        WarBoardSimplePopupElementServant_o *this,
        int32_t atk,
        bool isPlayerGroup,
        const MethodInfo *method)
{
  __int64 v4; // x4
  UILabel_o *atkValueLabel; // x19
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A59154 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_15433/*"WARBOARD_SERVANT_INFO_ENEMY_ATK"*/);
    sub_1B885B0(&StringLiteral_24933/*"{0:#,0}"*/);
    byte_4A59154 = 1;
  }
  atkValueLabel = this->fields.atkValueLabel;
  if ( isPlayerGroup )
  {
    v12 = atk;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, isPlayerGroup, method, v4);
    v10 = System_String__Format((System_String_o *)StringLiteral_24933/*"{0:#,0}"*/, v9, 0LL);
    if ( atkValueLabel )
    {
      UILabel__set_text(atkValueLabel, v10, 0LL);
      return;
    }
LABEL_10:
    sub_1B8880C(v10, v11);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_15433/*"WARBOARD_SERVANT_INFO_ENEMY_ATK"*/, 0LL);
  if ( !atkValueLabel )
    goto LABEL_10;
  UILabel__set_text(atkValueLabel, v10, 0LL);
}


void __fastcall WarBoardSimplePopupElementServant__SetBreakPoint(
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
  float maxSpacing; // s0
  __int64 v31; // x0
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A59156 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&WarBoardBreakPointComponent___TypeInfo);
    byte_4A59156 = 1;
  }
  v9 = (UnityEngine_GameObject_o *)sub_1B88658(WarBoardBreakPointComponent___TypeInfo, (unsigned int)breakPointMax);
  breakPointParent = this->fields.breakPointParent;
  if ( !breakPointParent )
    goto LABEL_21;
  if ( breakPointMax >= 1 )
  {
    v12 = (unsigned int *)v9;
    v13 = 0LL;
    v14 = 0LL;
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
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)breakPointParent, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49297800(
                                         breakPointPrefab,
                                         transform,
                                         (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
      if ( !v9 )
        break;
      v24 = v9;
      UnityEngine_GameObject__SetActive(v9, 1, 0LL);
      Component_object = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            v24,
                                                            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      v9 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v24, 0LL);
      if ( !v9 )
        break;
      v32.fields.y = 0.0;
      v32.fields.z = 0.0;
      v32.fields.x = v18;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v9, v32, 0LL);
      v26 = this->fields.breakPointParent;
      if ( !v26 )
        break;
      if ( !Component_object )
        break;
      WarBoardBreakPointComponent__Initialize(Component_object, v19 + v26->fields.mDepth, v14 + 1, 0, v21, 0, 0LL);
      if ( !v12 )
        break;
      v27 = sub_1B886EC(Component_object, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
      if ( !v27 )
      {
        v31 = sub_1B88830(0LL);
        sub_1B886D8(v31, 0LL);
      }
      if ( v14 >= v12[6]
        || (p_monitor[v14] = Component_object,
            sub_1B88554((ServantStatusBattleListViewItem_o *)&p_monitor[v13], (int32_t)Component_object, v28, v29),
            v14 >= v12[6]) )
      {
        sub_1B88814(v27, v10);
      }
      v9 = (UnityEngine_GameObject_o *)p_monitor[v14];
      if ( !v9 )
        break;
      WarBoardBreakPointComponent__SetActive((WarBoardBreakPointComponent_o *)v9, (__int64)v14 < v15, 0, 0LL);
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
    sub_1B8880C(v9, v10);
  }
}


void __fastcall WarBoardSimplePopupElementServant__SetBuffIcon(
        WarBoardSimplePopupElementServant_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *showBuffComponent; // x21
  bool v6; // w0
  BattleServantShowBuffComponent_o *v7; // x20
  BattleBuffData_ShowBuffData_array *ShowServantParam; // x0
  __int64 v9; // x1

  if ( (byte_4A59155 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59155 = 1;
  }
  showBuffComponent = (UnityEngine_Object_o *)this->fields.showBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(showBuffComponent, 0LL, 0LL);
  if ( buffData && !v6 )
  {
    v7 = this->fields.showBuffComponent;
    ShowServantParam = BattleBuffData__getShowServantParam(buffData, 0LL);
    if ( !v7 )
      sub_1B8880C(ShowServantParam, v9);
    BattleServantShowBuffComponent__setBuffList(v7, ShowServantParam, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSimplePopupElementServant__SetUIPosition(
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
  hpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hpLabel, 0LL);
  posHpLabel = this->fields.posHpLabel;
  if ( !posHpLabel )
    goto LABEL_24;
  if ( posHpLabel->max_length <= dispType )
    goto LABEL_25;
  GameObjectExtensions__SetLocalPosition(
    (UnityEngine_GameObject_o *)hpLabel,
    *(UnityEngine_Vector3_o *)&posHpLabel->m_Items[dispType].fields.y,
    0LL);
  hpLabel = (UnityEngine_Component_o *)this->fields.hpValueLabel;
  if ( !hpLabel )
    goto LABEL_24;
  hpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hpLabel, 0LL);
  posHpValueLabel = this->fields.posHpValueLabel;
  if ( !posHpValueLabel )
    goto LABEL_24;
  if ( posHpValueLabel->max_length <= dispType )
    goto LABEL_25;
  GameObjectExtensions__SetLocalPosition(
    (UnityEngine_GameObject_o *)hpLabel,
    *(UnityEngine_Vector3_o *)&posHpValueLabel->m_Items[dispType].fields.y,
    0LL);
  hpLabel = (UnityEngine_Component_o *)this->fields.atkLabel;
  if ( !hpLabel )
    goto LABEL_24;
  hpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hpLabel, 0LL);
  posAtkLabel = this->fields.posAtkLabel;
  if ( !posAtkLabel )
    goto LABEL_24;
  if ( posAtkLabel->max_length <= dispType )
    goto LABEL_25;
  GameObjectExtensions__SetLocalPosition(
    (UnityEngine_GameObject_o *)hpLabel,
    *(UnityEngine_Vector3_o *)&posAtkLabel->m_Items[dispType].fields.y,
    0LL);
  hpLabel = (UnityEngine_Component_o *)this->fields.atkValueLabel;
  if ( !hpLabel )
    goto LABEL_24;
  hpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hpLabel, 0LL);
  posAtkValueLabel = this->fields.posAtkValueLabel;
  if ( !posAtkValueLabel )
    goto LABEL_24;
  if ( posAtkValueLabel->max_length <= dispType )
    goto LABEL_25;
  GameObjectExtensions__SetLocalPosition(
    (UnityEngine_GameObject_o *)hpLabel,
    *(UnityEngine_Vector3_o *)&posAtkValueLabel->m_Items[dispType].fields.y,
    0LL);
  hpLabel = (UnityEngine_Component_o *)this->fields.showBuffComponent;
  if ( !hpLabel )
    goto LABEL_24;
  hpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hpLabel, 0LL);
  posBuffList = this->fields.posBuffList;
  if ( !posBuffList )
    goto LABEL_24;
  if ( posBuffList->max_length <= dispType )
    goto LABEL_25;
  GameObjectExtensions__SetLocalPosition(
    (UnityEngine_GameObject_o *)hpLabel,
    *(UnityEngine_Vector3_o *)&posBuffList->m_Items[dispType].fields.y,
    0LL);
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_24;
  if ( !skillIconList->max_length )
    goto LABEL_25;
  hpLabel = (UnityEngine_Component_o *)skillIconList->m_Items[0];
  if ( !hpLabel
    || (hpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(hpLabel, 0LL)) == 0LL
    || (hpLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)hpLabel, 0LL)) == 0LL
    || (hpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hpLabel, 0LL),
        (posSkillRoot = this->fields.posSkillRoot) == 0LL) )
  {
LABEL_24:
    sub_1B8880C(hpLabel, *(_QWORD *)&dispType);
  }
  if ( posSkillRoot->max_length <= dispType )
LABEL_25:
    sub_1B88814(hpLabel, *(_QWORD *)&dispType);
  GameObjectExtensions__SetLocalPosition(
    (UnityEngine_GameObject_o *)hpLabel,
    *(UnityEngine_Vector3_o *)&posSkillRoot->m_Items[dispType].fields.y,
    0LL);
}


void __fastcall WarBoardSimplePopupElementServant__SetUp(
        WarBoardSimplePopupElementServant_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  WarBoardPieceData_o *v3; // x20
  WarBoardSimplePopupElementServant_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3
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
  Il2CppObject *v19; // x0
  float *p_z; // x8
  float *p_x; // x9
  float *p_y; // x10
  char v23; // w22
  UILabel_o *hpValueLabel; // x22
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x23
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x0
  int32_t AttackValue; // w22
  bool isPlayerGroup; // w0
  const MethodInfo *v35; // x3
  bool v36; // w0
  const MethodInfo *v37; // x3
  BattleBuffData_o *BuffData; // x0
  const MethodInfo *v39; // x2
  UnityEngine_GameObject_o *actionCountObj; // x21
  UILabel_o *actValueLabel; // x21
  UISprite_o *frameSprite; // x21
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x0
  UnityEngine_Object_o *actionPountObj; // x21
  UnityEngine_Object_o *actionPointValueLabel; // x21
  UnityEngine_GameObject_o *v49; // x21
  struct WarBoardCost_o *Cost_k__BackingField; // x8
  UILabel_o *v51; // x21
  UISprite_o *v52; // x21
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  Il2CppObject *v56; // x0
  UILabel_o *actionPointLabel; // x21
  int32_t v58; // w21
  UILabel_o *currentActionPointDispLabel; // x23
  int v60; // w22
  UILabel_o *costDispLabel; // x23
  System_String_o *v62; // x24
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x21
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  Il2CppObject *v70; // x0
  bool HasCost; // w0
  const MethodInfo *v72; // x2
  UnityEngine_GameObject_o *v73; // x21
  bool activeSelf; // w0
  __int64 v75; // x8
  __int64 v76; // x9
  __int64 v77; // x10
  int npcImageSvtId_k__BackingField; // w8
  int32_t npcDispLimitCount_k__BackingField; // w22
  int32_t ServantImageLimitSealAfter; // w21
  UISprite_o *servantIcon; // x23
  int32_t v82; // w24
  bool v83; // w21
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  int32_t posAtkValueLabel; // w21
  Il2CppObject *v88; // x23
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  Il2CppObject *v92; // x0
  System_String_o *v93; // x0
  UISprite_o *enemyIcon; // x23
  System_String_o *v95; // x22
  UISprite_o *v96; // x22
  System_String_o *v97; // x23
  UISprite_o *enemyIconBg; // x22
  bool v99; // w21
  UnityEngine_Object_o *equipIcon; // x21
  UnityEngine_Object_o *equipIconOnFace; // x21
  UISprite_o *v102; // x21
  int32_t iconEquipId_k__BackingField; // w22
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  int monitor; // w8
  bool v106; // w21
  UISprite_o *flameInClassIcon; // x23
  int32_t IconClassImageId_k__BackingField; // w21
  int32_t iconFrameType_k__BackingField; // w22
  int32_t breakPoint_k__BackingField; // w21
  int32_t breakPointMax_k__BackingField; // w22
  bool isEnemyServant; // w0
  const MethodInfo *v113; // x4
  UIBasicSprite_o *hpBar; // x21
  float CurrentHpProgress; // s0
  float CurrentNpProgress; // s0
  const MethodInfo *v117; // x1
  UnityEngine_Object_o *critecalStarsRoot; // x21
  UILabel_o *critecalStarsLabel; // x21
  UnityEngine_Object_o *supportSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *RoleTypeLabel; // x21
  struct BattleServantData_o *v123; // x8
  int v124; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t MaxHp; // [xsp+8h] [xbp-68h] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-60h] BYREF
  __int64 v128; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v130; // 0:s0.4,4:s1.4,8:s2.4

  v3 = pieceData;
  v4 = this;
  if ( (byte_4A59151 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&StringLiteral_15402/*"WARBOARD_INFO_POPUP_SVT_HP"*/);
    sub_1B885B0(&StringLiteral_20188/*"icon_strong_enemy"*/);
    sub_1B885B0(&StringLiteral_22724/*"questinfo_enemyface_bg"*/);
    sub_1B885B0(&StringLiteral_19977/*"hp_gauge_boss"*/);
    sub_1B885B0(&StringLiteral_23117/*"servant_base_{0}"*/);
    sub_1B885B0(&StringLiteral_15401/*"WARBOARD_INFO_POPUP_SVT_DETAIL_BUTTON"*/);
    sub_1B885B0(&StringLiteral_15400/*"WARBOARD_INFO_POPUP_SVT_ATK"*/);
    sub_1B885B0(&StringLiteral_15398/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT"*/);
    sub_1B885B0(&StringLiteral_15403/*"WARBOARD_INFO_POPUP_SVT_LV"*/);
    sub_1B885B0(&StringLiteral_24935/*"{0:#,0} / {1:#,0}"*/);
    this = (WarBoardSimplePopupElementServant_o *)sub_1B885B0(&StringLiteral_15399/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT_COST"*/);
    byte_4A59151 = 1;
  }
  entity = 0LL;
  v128 = 0LL;
  if ( !v3 )
    goto LABEL_165;
  if ( WarBoardPieceData__get_isMaster(v3, 0LL) || !v3->fields._battleServant_k__BackingField )
    return;
  v4->fields.pieceData = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.pieceData, (int32_t)v3, v5, v6);
  battleServant_k__BackingField = v3->fields._battleServant_k__BackingField;
  atkLabel = v4->fields.atkLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15400/*"WARBOARD_INFO_POPUP_SVT_ATK"*/, 0LL);
  if ( !atkLabel )
    goto LABEL_165;
  UILabel__set_text(atkLabel, (System_String_o *)this, 0LL);
  hpLabel = v4->fields.hpLabel;
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15402/*"WARBOARD_INFO_POPUP_SVT_HP"*/, 0LL);
  if ( !hpLabel )
    goto LABEL_165;
  UILabel__set_text(hpLabel, (System_String_o *)this, 0LL);
  detailButtonLabel = v4->fields.detailButtonLabel;
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15401/*"WARBOARD_INFO_POPUP_SVT_DETAIL_BUTTON"*/, 0LL);
  if ( !detailButtonLabel )
    goto LABEL_165;
  UILabel__set_text(detailButtonLabel, (System_String_o *)this, 0LL);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantNameLabel;
  if ( !this )
    goto LABEL_165;
  UILabel__SetDefaultFont((UILabel_o *)this, 0LL);
  if ( !battleServant_k__BackingField )
    goto LABEL_165;
  servantNameLabel = v4->fields.servantNameLabel;
  this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getServantShortName(
                                                  battleServant_k__BackingField,
                                                  0LL);
  if ( !servantNameLabel )
    goto LABEL_165;
  UILabel__set_text(servantNameLabel, (System_String_o *)this, 0LL);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantNameLabel;
  if ( !this )
    goto LABEL_165;
  UILabel__SetCondensedScale((UILabel_o *)this, v4->fields.servantNameLabelWidth, 0LL);
  pieceStatusLabelComponent = (UnityEngine_Object_o *)v4->fields.pieceStatusLabelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pieceStatusLabelComponent, 0LL, 0LL) )
  {
    this = (WarBoardSimplePopupElementServant_o *)v4->fields.pieceStatusLabelComponent;
    if ( !this )
      goto LABEL_165;
    WarBoardPieceStatusLabel__SetupLabel((WarBoardPieceStatusLabel_o *)this, v3, 0LL);
  }
  ((void (__fastcall *)(WarBoardSimplePopupElementServant_o *, void *))v4->klass->vtable._4_UpdateUiBrightnessByPieceStatus.method)(
    v4,
    v4->klass[1]._1.image);
  servantLevel = (UnityEngine_Object_o *)v4->fields.servantLevel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(servantLevel, 0LL, 0LL) )
  {
    v14 = v4->fields.servantLevel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_15403/*"WARBOARD_INFO_POPUP_SVT_LV"*/, 0LL);
    iconLevel_k__BackingField = v3->fields._iconLevel_k__BackingField;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v16, v17, v18);
    this = (WarBoardSimplePopupElementServant_o *)System_String__Format(v15, v19, 0LL);
    if ( !v14 )
      goto LABEL_165;
    UILabel__set_text(v14, (System_String_o *)this, 0LL);
    if ( WarBoardPieceData__get_isEnemyServant(v3, 0LL) && v3->fields._roleType_k__BackingField == 1 )
    {
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantLevel;
      if ( !this )
        goto LABEL_165;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
      if ( !this )
        goto LABEL_165;
      p_z = &v4->fields.positionLevelDanger.fields.z;
      p_x = &v4->fields.positionLevelDanger.fields.x;
      p_y = &v4->fields.positionLevelDanger.fields.y;
    }
    else
    {
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_IsNpc(v3, 0LL);
      if ( !v4->fields.servantLevel )
        goto LABEL_165;
      v23 = (char)this;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)v4->fields.servantLevel,
                                                      0LL);
      if ( (v23 & 1) != 0 )
      {
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
        p_z = &v4->fields.positionLevel.fields.z;
        p_x = &v4->fields.positionLevel.fields.x;
        p_y = &v4->fields.positionLevel.fields.y;
      }
    }
    v129.fields.z = *p_z;
    v129.fields.y = *p_y;
    v129.fields.x = *p_x;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v129, 0LL);
  }
  hpValueLabel = v4->fields.hpValueLabel;
  iconLevel_k__BackingField = WarBoardPieceData__get_CurrentHp(v3, 0LL);
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v25, v26, v27);
  MaxHp = WarBoardPieceData__get_MaxHp(v3, 0LL);
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp, v29, v30, v31);
  this = (WarBoardSimplePopupElementServant_o *)System_String__Format_61721404(
                                                  (System_String_o *)StringLiteral_24935/*"{0:#,0} / {1:#,0}"*/,
                                                  v28,
                                                  v32,
                                                  0LL);
  if ( !hpValueLabel )
    goto LABEL_165;
  UILabel__set_text(hpValueLabel, (System_String_o *)this, 0LL);
  AttackValue = WarBoardPieceData__get_AttackValue(v3, 0LL);
  isPlayerGroup = WarBoardPieceData__get_isPlayerGroup(v3, 0LL);
  WarBoardSimplePopupElementServant__SetAtkLabel(v4, AttackValue, isPlayerGroup, v35);
  v36 = WarBoardPieceData__get_isPlayerGroup(v3, 0LL);
  WarBoardSimplePopupElementServant__SetUpSkillIcon(v4, battleServant_k__BackingField, v36, v37);
  BuffData = WarBoardPieceData__get_BuffData(v3, 0LL);
  WarBoardSimplePopupElementServant__SetBuffIcon(v4, BuffData, v39);
  actionCountObj = v4->fields.actionCountObj;
  this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_isInfinitelyActable(v3, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    pieceData = 0LL;
  }
  else
  {
    this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_165;
    pieceData = (WarBoardPieceData_o *)(LODWORD(this[1].fields.hpBar) == 2);
  }
  if ( !actionCountObj )
    goto LABEL_165;
  UnityEngine_GameObject__SetActive(actionCountObj, (bool)pieceData, 0LL);
  actValueLabel = v4->fields.actValueLabel;
  LODWORD(v128) = v3->fields._currentActionCount_k__BackingField;
  this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)&v128, 0LL);
  if ( !actValueLabel )
    goto LABEL_165;
  UILabel__set_text(actValueLabel, (System_String_o *)this, 0LL);
  frameSprite = v4->fields.frameSprite;
  iconLevel_k__BackingField = v3->fields._forceId_k__BackingField + 1;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v43, v44, v45);
  this = (WarBoardSimplePopupElementServant_o *)System_String__Format((System_String_o *)StringLiteral_23117/*"servant_base_{0}"*/, v46, 0LL);
  if ( !frameSprite )
    goto LABEL_165;
  UISprite__set_spriteName(frameSprite, (System_String_o *)this, 0LL);
  actionPountObj = (UnityEngine_Object_o *)v4->fields.actionPountObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(actionPountObj, 0LL, 0LL) )
  {
    actionPointValueLabel = (UnityEngine_Object_o *)v4->fields.actionPointValueLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(actionPointValueLabel, 0LL, 0LL) )
    {
      v49 = v4->fields.actionPountObj;
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_HasCost(v3, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_165;
        pieceData = (WarBoardPieceData_o *)(LODWORD(this[1].fields.hpBar) == 2);
      }
      else
      {
        pieceData = 0LL;
      }
      if ( !v49 )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive(v49, (bool)pieceData, 0LL);
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_HasCost(v3, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        Cost_k__BackingField = v3->fields._Cost_k__BackingField;
        if ( !Cost_k__BackingField )
          goto LABEL_165;
        v51 = v4->fields.actionPointValueLabel;
        LODWORD(v128) = Cost_k__BackingField->fields._CurrentActionPoint_k__BackingField;
        this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)&v128, 0LL);
        if ( !v51 )
          goto LABEL_165;
        UILabel__set_text(v51, (System_String_o *)this, 0LL);
        v52 = v4->fields.frameSprite;
        iconLevel_k__BackingField = v3->fields._forceId_k__BackingField + 1;
        v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v53, v54, v55);
        this = (WarBoardSimplePopupElementServant_o *)System_String__Format(
                                                        (System_String_o *)StringLiteral_23117/*"servant_base_{0}"*/,
                                                        v56,
                                                        0LL);
        if ( !v52 )
          goto LABEL_165;
        UISprite__set_spriteName(v52, (System_String_o *)this, 0LL);
        this = (WarBoardSimplePopupElementServant_o *)v4->fields.actionPountLabelObj;
        if ( !this )
          goto LABEL_165;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        actionPointLabel = v4->fields.actionPointLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_15398/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT"*/,
                                                        0LL);
        if ( !actionPointLabel )
          goto LABEL_165;
        UILabel__set_text(actionPointLabel, (System_String_o *)this, 0LL);
        this = (WarBoardSimplePopupElementServant_o *)v3->fields._Cost_k__BackingField;
        if ( !this )
          goto LABEL_165;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__get_Move((WarBoardCost_o *)this, 0LL);
        if ( !v3->fields._Cost_k__BackingField )
          goto LABEL_165;
        v58 = (int)this;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__get_Attack(v3->fields._Cost_k__BackingField, 0LL);
        if ( !v3->fields._Cost_k__BackingField )
          goto LABEL_165;
        currentActionPointDispLabel = v4->fields.currentActionPointDispLabel;
        v60 = (int)this;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__CurrentAndMaxPointToString(
                                                        v3->fields._Cost_k__BackingField,
                                                        0LL);
        if ( !currentActionPointDispLabel )
          goto LABEL_165;
        UILabel__set_text(currentActionPointDispLabel, (System_String_o *)this, 0LL);
        costDispLabel = v4->fields.costDispLabel;
        v62 = LocalizationManager__Get((System_String_o *)StringLiteral_15399/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT_COST"*/, 0LL);
        MaxHp = v58;
        v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp, v63, v64, v65);
        v124 = v60;
        v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v124, v67, v68, v69);
        this = (WarBoardSimplePopupElementServant_o *)System_String__Format_61721404(v62, v66, v70, 0LL);
        if ( !costDispLabel )
          goto LABEL_165;
        UILabel__set_text(costDispLabel, (System_String_o *)this, 0LL);
      }
      HasCost = WarBoardPieceData__get_HasCost(v3, 0LL);
      WarBoardSimplePopupElementServant__SetUIPosition(v4, HasCost, v72);
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.actionCountObj;
      if ( !this )
        goto LABEL_165;
      v73 = v4->fields.actionPountObj;
      activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      v75 = 344LL;
      if ( activeSelf )
        v75 = 356LL;
      if ( activeSelf )
        v76 = 352LL;
      else
        v76 = 340LL;
      if ( activeSelf )
        v77 = 348LL;
      else
        v77 = 336LL;
      v130.fields.x = *(float *)((char *)&v4->klass + v77);
      v130.fields.y = *(float *)((char *)&v4->klass + v76);
      v130.fields.z = *(float *)((char *)&v4->klass + v75);
      GameObjectExtensions__SetLocalPosition(v73, v130, 0LL);
    }
  }
  npcImageSvtId_k__BackingField = v3->fields._npcImageSvtId_k__BackingField;
  if ( npcImageSvtId_k__BackingField <= 0 )
    npcImageSvtId_k__BackingField = v3->fields._iconId_k__BackingField;
  HIDWORD(v128) = npcImageSvtId_k__BackingField;
  npcDispLimitCount_k__BackingField = v3->fields._npcDispLimitCount_k__BackingField;
  if ( npcDispLimitCount_k__BackingField <= 0 )
    npcDispLimitCount_k__BackingField = v3->fields._iconLimitCount_k__BackingField;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WarBoardSimplePopupElementServant_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_165;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)this,
                                 v3->fields._iconId_k__BackingField,
                                 npcDispLimitCount_k__BackingField,
                                 0LL);
  if ( WarBoardPieceData__get_IsEnemyMonster(v3, 0LL) )
    goto LABEL_93;
  servantIcon = v4->fields.servantIcon;
  v82 = HIDWORD(v128);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetFaceImage(servantIcon, v82, ServantImageLimitSealAfter, 0LL) )
  {
LABEL_93:
    this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_165;
    posAtkValueLabel = (int32_t)this->fields.posAtkValueLabel;
    iconLevel_k__BackingField = HIDWORD(v128);
    v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v84, v85, v86);
    MaxHp = npcDispLimitCount_k__BackingField;
    v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp, v89, v90, v91);
    v93 = System_String__Concat(v88, v92, 0LL);
    enemyIcon = (UISprite_o *)v4->fields.enemyIcon;
    v95 = v93;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( AtlasManager__SetEventUI_37859364(posAtkValueLabel, enemyIcon, v95, 0LL) )
      goto LABEL_100;
    v96 = (UISprite_o *)v4->fields.enemyIcon;
    v97 = System_Int32__ToString((int32_t)&v128 + 4, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( AtlasManager__SetEventUI_37859364(posAtkValueLabel, v96, v97, 0LL) )
LABEL_100:
      WarBoardPieceData__ApplyDisplayType(v3, v4->fields.enemyIcon, 0LL);
    enemyIconBg = v4->fields.enemyIconBg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_37859364(posAtkValueLabel, enemyIconBg, (System_String_o *)StringLiteral_22724/*"questinfo_enemyface_bg"*/, 0LL);
    v83 = 0;
  }
  else
  {
    v83 = 1;
  }
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantIcon;
  if ( !this )
    goto LABEL_165;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_165;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v83, 0LL);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.enemyIcon;
  if ( !this )
    goto LABEL_165;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_165;
  v99 = !v83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v99, 0LL);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.enemyIconBg;
  if ( !this )
    goto LABEL_165;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_165;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v99, 0LL);
  equipIcon = (UnityEngine_Object_o *)v4->fields.equipIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipIcon, 0LL, 0LL) )
  {
    equipIconOnFace = (UnityEngine_Object_o *)v4->fields.equipIconOnFace;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipIconOnFace, 0LL, 0LL) )
    {
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.equipIconOnFace;
      if ( !this )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)this,
        v3->fields._iconEquipId_k__BackingField > 0,
        0LL);
    }
    v102 = v4->fields.equipIcon;
    iconEquipId_k__BackingField = v3->fields._iconEquipId_k__BackingField;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(v102, iconEquipId_k__BackingField, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)v4->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (WarBoardSimplePopupElementServant_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !this )
        goto LABEL_165;
      this = (WarBoardSimplePopupElementServant_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                      &entity,
                                                      v3->fields._iconEquipId_k__BackingField,
                                                      (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_130;
      if ( !entity )
        goto LABEL_165;
      monitor = (int)entity[5].monitor;
      if ( monitor >= 1 )
        v106 = v3->fields._equipLimitCount_k__BackingField >= monitor;
      else
LABEL_130:
        v106 = 0;
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.equipLimitCountSprite;
      if ( !this )
        goto LABEL_165;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
      if ( !this )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v106, 0LL);
    }
  }
  flameInClassIcon = v4->fields.flameInClassIcon;
  IconClassImageId_k__BackingField = v3->fields._IconClassImageId_k__BackingField;
  iconFrameType_k__BackingField = v3->fields._iconFrameType_k__BackingField;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIcon(flameInClassIcon, IconClassImageId_k__BackingField, iconFrameType_k__BackingField, 0LL);
  breakPoint_k__BackingField = v3->fields._breakPoint_k__BackingField;
  breakPointMax_k__BackingField = v3->fields._breakPointMax_k__BackingField;
  isEnemyServant = WarBoardPieceData__get_isEnemyServant(v3, 0LL);
  WarBoardSimplePopupElementServant__SetBreakPoint(
    v4,
    breakPoint_k__BackingField,
    breakPointMax_k__BackingField,
    isEnemyServant,
    v113);
  if ( WarBoardPieceData__get_isEnemyServant(v3, 0LL) )
  {
    this = (WarBoardSimplePopupElementServant_o *)v4->fields.hpBar;
    if ( !this )
      goto LABEL_165;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19977/*"hp_gauge_boss"*/, 0LL);
  }
  hpBar = (UIBasicSprite_o *)v4->fields.hpBar;
  CurrentHpProgress = WarBoardPieceData__get_CurrentHpProgress(v3, 0LL);
  if ( !hpBar )
LABEL_165:
    sub_1B8880C(this, pieceData);
  UIBasicSprite__set_fillAmount(hpBar, CurrentHpProgress, 0LL);
  CurrentNpProgress = WarBoardPieceData__get_CurrentNpProgress(v3, 0LL);
  WarBoardSimplePopupElementServant__UpdateNpBars(v4, CurrentNpProgress, v117);
  critecalStarsRoot = (UnityEngine_Object_o *)v4->fields.critecalStarsRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(critecalStarsRoot, 0LL, 0LL) )
  {
    this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_isPlayerGroup(v3, 0LL);
    if ( !v4->fields.critecalStarsRoot )
      goto LABEL_165;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive(v4->fields.critecalStarsRoot, 1, 0LL);
      critecalStarsLabel = v4->fields.critecalStarsLabel;
      LODWORD(v128) = WarBoardPieceData__get_CriticalStars(v3, 0LL);
      this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)&v128, 0LL);
      if ( !critecalStarsLabel )
        goto LABEL_165;
      UILabel__set_text(critecalStarsLabel, (System_String_o *)this, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(v4->fields.critecalStarsRoot, 0, 0LL);
    }
  }
  supportSprite = (UnityEngine_Object_o *)v4->fields.supportSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
  {
    this = (WarBoardSimplePopupElementServant_o *)v4->fields.supportSprite;
    if ( !this )
      goto LABEL_165;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_IsNpc(v3, 0LL);
    if ( !gameObject )
      goto LABEL_165;
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)this & 1, 0LL);
  }
  RoleTypeLabel = (UnityEngine_Object_o *)v4->fields.RoleTypeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(RoleTypeLabel, 0LL, 0LL) )
  {
    v123 = v3->fields._battleServant_k__BackingField;
    if ( v123 )
    {
      if ( v123->fields.isEnemy && v3->fields._roleType_k__BackingField == 1 )
      {
        this = (WarBoardSimplePopupElementServant_o *)v4->fields.RoleTypeLabel;
        if ( this )
        {
          this = (WarBoardSimplePopupElementServant_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( this )
          {
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20188/*"icon_strong_enemy"*/, 0LL);
            this = (WarBoardSimplePopupElementServant_o *)v4->fields.RoleTypeLabel;
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              return;
            }
          }
        }
        goto LABEL_165;
      }
    }
  }
}


void __fastcall WarBoardSimplePopupElementServant__SetUpSkillIcon(
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
  unsigned __int64 max_length; // x9
  struct BattleServantSkillIConComponent_array *v13; // x8
  int32_t v14; // w25
  BattleServantSkillIConComponent_o *v15; // x26
  BattleSkillInfoData_o *v16; // x27
  bool canUseSkill; // w28

  if ( !data
    || (v5 = this,
        ActiveSkillInfos = BattleServantData__getActiveSkillInfos(data, 0LL),
        this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getSkillSealSelect(data, 0LL),
        (skillIconList = v5->fields.skillIconList) == 0LL) )
  {
LABEL_22:
    sub_1B8880C(this, data);
  }
  v9 = this;
  v10 = 0LL;
  p_breakPointPrefab = &this->fields.breakPointPrefab;
  while ( 1 )
  {
    max_length = skillIconList->max_length;
    if ( (__int64)v10 >= (int)max_length )
      break;
    if ( !ActiveSkillInfos )
      goto LABEL_22;
    if ( (__int64)v10 < (int)ActiveSkillInfos->max_length && isPlayerGroup )
    {
      this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getSkillSealTurn(data, 0LL);
      if ( !v9 )
        goto LABEL_22;
      if ( v10 >= LODWORD(v9->fields.m_CancellationTokenSource) )
LABEL_24:
        sub_1B88814(this, data);
      if ( *((_BYTE *)p_breakPointPrefab + v10) )
        this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getSkillSealSelectTurn(data, v10, 0LL);
      v13 = v5->fields.skillIconList;
      v14 = (int)this;
      if ( !v13 )
        goto LABEL_22;
      if ( v10 >= v13->max_length )
        goto LABEL_24;
      if ( v10 >= ActiveSkillInfos->max_length )
        goto LABEL_24;
      v15 = v13->m_Items[v10];
      v16 = ActiveSkillInfos->m_Items[v10];
      canUseSkill = BattleServantData__canUseSkill(data, v10, 0LL);
      this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getNotActTurn(data, 0LL);
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
        0LL);
    }
    else
    {
      if ( v10 >= max_length )
        goto LABEL_24;
      this = (WarBoardSimplePopupElementServant_o *)skillIconList->m_Items[v10];
      if ( !this )
        goto LABEL_22;
      BattleServantSkillIConComponent__setNoSkill((BattleServantSkillIConComponent_o *)this, 0, 0LL);
    }
    skillIconList = v5->fields.skillIconList;
    ++v10;
    if ( !skillIconList )
      goto LABEL_22;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSimplePopupElementServant__ShowEquipStatus(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x0
  WarBoardPieceData_o *pieceData; // x21
  WarBoardManager_o *v6; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  int v9; // s0

  if ( (byte_4A59157 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4A59157 = 1;
  }
  if ( this->fields.pieceData )
  {
    v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
      v3 = sub_1BDA48C(v3);
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
    if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
      v4 = sub_1BDA48C(v4);
    pieceData = this->fields.pieceData;
    v6 = **(WarBoardManager_o ***)(v4 + 184);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform || (*(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_position(transform, 0LL), !v6) )
      sub_1B8880C(transform, v8);
    WarBoardManager__ShowServantEquipSimplePopup(v6, pieceData, *(UnityEngine_Vector3_o *)&v9, 0LL);
  }
}


void __fastcall WarBoardSimplePopupElementServant__UpdateLabel(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpValueLabel; // x20
  __int64 v4; // x1
  UILabel_o *v5; // x0

  if ( (byte_4A59153 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59153 = 1;
  }
  hpValueLabel = (UnityEngine_Object_o *)this->fields.hpValueLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpValueLabel, 0LL, 0LL) )
  {
    v5 = this->fields.hpValueLabel;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
    UILabel__SetCondensedScale(v5, this->fields.HpValueLabelMaxWidth, 0LL);
  }
}


void __fastcall WarBoardSimplePopupElementServant__UpdateNpBars(
        WarBoardSimplePopupElementServant_o *this,
        float progress,
        const MethodInfo *method)
{
  struct UISprite_array *npBars; // x8
  __int64 v4; // x9
  WarBoardSimplePopupElementServant_o *v5; // x19
  struct UISprite_array *v7; // x8
  struct UISprite_array *v8; // x8
  struct UISprite_array *v9; // x8

  npBars = this->fields.npBars;
  if ( npBars )
  {
    v4 = *(_QWORD *)&npBars->max_length;
    v5 = this;
    if ( v4 )
    {
      if ( !(_DWORD)v4 )
        goto LABEL_27;
      this = (WarBoardSimplePopupElementServant_o *)npBars->m_Items[0];
      if ( !this )
        goto LABEL_26;
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress, 0LL);
      npBars = v5->fields.npBars;
      if ( !npBars )
        goto LABEL_26;
    }
    if ( (int)npBars->max_length >= 2 )
    {
      this = (WarBoardSimplePopupElementServant_o *)npBars->m_Items[1];
      if ( !this )
        goto LABEL_26;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
      if ( !this )
        goto LABEL_26;
      if ( progress <= 1.0 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v7 = v5->fields.npBars;
        if ( !v7 )
          goto LABEL_26;
        if ( v7->max_length <= 1 )
          goto LABEL_27;
        this = (WarBoardSimplePopupElementServant_o *)v7->m_Items[1];
        if ( !this )
          goto LABEL_26;
        UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress + -1.0, 0LL);
      }
    }
    v8 = v5->fields.npBars;
    if ( !v8 )
      goto LABEL_26;
    if ( (int)v8->max_length < 3 )
      return;
    this = (WarBoardSimplePopupElementServant_o *)v8->m_Items[2];
    if ( !this )
      goto LABEL_26;
    this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
    if ( !this )
      goto LABEL_26;
    if ( progress <= 2.0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v9 = v5->fields.npBars;
    if ( !v9 )
LABEL_26:
      sub_1B8880C(this, method);
    if ( v9->max_length > 2 )
    {
      this = (WarBoardSimplePopupElementServant_o *)v9->m_Items[2];
      if ( this )
      {
        UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress + -2.0, 0LL);
        return;
      }
      goto LABEL_26;
    }
LABEL_27:
    sub_1B88814(this, method);
  }
}


void __fastcall WarBoardSimplePopupElementServant__UpdateUiBrightnessByPieceStatus(
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

  if ( (byte_4A59152 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_UIWidget__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_UIWidget___);
    sub_1B885B0(&Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__0__);
    sub_1B885B0(&Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__1__);
    sub_1B885B0(&WarBoardSimplePopupElementServant___c__DisplayClass55_0_TypeInfo);
    byte_4A59152 = 1;
  }
  v3 = sub_1B887FC(WarBoardSimplePopupElementServant___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData || (pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasIconDarkenBuff(pieceData, 0LL), !v3) )
    sub_1B8880C(pieceData, v4);
  *(_BYTE *)(v3 + 16) = (unsigned __int8)pieceData & 1;
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v7 = (System_Action_object__o *)sub_1B887FC(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v7,
      (Il2CppObject *)v3,
      Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__0__,
      0LL);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v7,
      (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_UIWidget___);
  }
  turnDarkUiWidgetsAroundFaceIcon = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundFaceIcon;
  if ( turnDarkUiWidgetsAroundFaceIcon )
  {
    v9 = (System_Action_object__o *)sub_1B887FC(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v9,
      (Il2CppObject *)v3,
      Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__1__,
      0LL);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundFaceIcon,
      (System_Action_T__o *)v9,
      (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_UIWidget___);
  }
}


void __fastcall WarBoardSimplePopupElementServant___c__DisplayClass55_0___ctor(
        WarBoardSimplePopupElementServant___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSimplePopupElementServant___c__DisplayClass55_0___UpdateUiBrightnessByPieceStatus_b__0(
        WarBoardSimplePopupElementServant___c__DisplayClass55_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  float v3; // s0
  float v4; // s3
  float v5; // s1
  float v6; // s2

  v3 = 0.5;
  if ( !this->fields.hasIconDarkenBuff )
    v3 = 1.0;
  if ( !x )
    sub_1B8880C(this, 0LL);
  v4 = 1.0;
  v5 = v3;
  v6 = v3;
  UIWidget__set_color(x, *(UnityEngine_Color_o *)&v3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSimplePopupElementServant___c__DisplayClass55_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardSimplePopupElementServant___c__DisplayClass55_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  float v3; // s0
  float v4; // s3
  float v5; // s1
  float v6; // s2

  v3 = 0.5;
  if ( !this->fields.hasIconDarkenBuff )
    v3 = 1.0;
  if ( !x )
    sub_1B8880C(this, 0LL);
  v4 = 1.0;
  v5 = v3;
  v6 = v3;
  UIWidget__set_color(x, *(UnityEngine_Color_o *)&v3, 0LL);
}