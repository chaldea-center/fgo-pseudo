void __fastcall WarBoardSimplePopupElementServant___ctor(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  this->fields.HpValueLabelMaxWidth = 140;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_BA3180;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_BA2A30;
  this->fields.positionLevelNpc.fields.z = 0.0;
  this->fields.servantNameLabelWidth = 180;
  *(_OWORD *)&this->fields.positionActionPointDefault.fields.x = xmmword_BA3180;
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
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_49FC48F & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1B64870(&Method_WarBoardSimplePopupElementServant_OnClickDetailButton__, v3);
    byte_49FC48F = 1;
  }
  v4 = Method_WarBoardSimplePopupElementServant_OnClickDetailButton__;
  if ( (*((_BYTE *)Method_WarBoardSimplePopupElementServant_OnClickDetailButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B64888(Method_WarBoardSimplePopupElementServant_OnClickDetailButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B64854(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v7);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UILabel_o *atkValueLabel; // x19
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FC48B & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, *(_QWORD *)&atk);
    sub_1B64870(&LocalizationManager_TypeInfo, v8);
    sub_1B64870(&StringLiteral_15367/*"WARBOARD_SERVANT_INFO_ENEMY_ATK"*/, v9);
    sub_1B64870(&StringLiteral_24838/*"{0:#,0}"*/, v10);
    byte_49FC48B = 1;
  }
  atkValueLabel = this->fields.atkValueLabel;
  if ( isPlayerGroup )
  {
    v15 = atk;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, isPlayerGroup, method, v4);
    v13 = System_String__Format((System_String_o *)StringLiteral_24838/*"{0:#,0}"*/, v12, 0LL);
    if ( atkValueLabel )
    {
      UILabel__set_text(atkValueLabel, v13, 0LL);
      return;
    }
LABEL_10:
    sub_1B64ACC(v13, v14);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_15367/*"WARBOARD_SERVANT_INFO_ENEMY_ATK"*/, 0LL);
  if ( !atkValueLabel )
    goto LABEL_10;
  UILabel__set_text(atkValueLabel, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSimplePopupElementServant__SetBreakPoint(
        WarBoardSimplePopupElementServant_o *this,
        int32_t breakPoint,
        int32_t breakPointMax,
        bool isEnemyServant,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  struct UIWidget_o *breakPointParent; // x8
  unsigned int *v15; // x20
  __int64 v16; // x24
  unsigned __int64 v17; // x25
  __int64 v18; // x28
  void **p_monitor; // x29
  float v20; // s9
  float v21; // s8
  int v22; // w26
  __int64 v23; // x27
  bool v24; // w21
  Il2CppObject *breakPointPrefab; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v27; // x23
  WarBoardBreakPointComponent_o *Component_object; // x22
  struct UIWidget_o *v29; // x8
  __int64 v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  float maxSpacing; // s0
  __int64 v34; // x0
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FC48D & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, *(_QWORD *)&breakPoint);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject____75800320, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    sub_1B64870(&WarBoardBreakPointComponent___TypeInfo, v11);
    byte_49FC48D = 1;
  }
  v12 = (UnityEngine_GameObject_o *)sub_1B64918(WarBoardBreakPointComponent___TypeInfo, (unsigned int)breakPointMax);
  breakPointParent = this->fields.breakPointParent;
  if ( !breakPointParent )
    goto LABEL_21;
  if ( breakPointMax >= 1 )
  {
    v15 = (unsigned int *)v12;
    v16 = 0LL;
    v17 = 0LL;
    v18 = breakPoint;
    p_monitor = &v12[1].monitor;
    v20 = (float)breakPointParent->fields.mWidth / (float)breakPointMax;
    v21 = 0.0;
    v22 = 2 * breakPointMax - 2;
    v23 = (unsigned int)breakPointMax - 1LL;
    v24 = isEnemyServant;
    do
    {
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)breakPointParent, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49012904(
                                          breakPointPrefab,
                                          transform,
                                          (const MethodInfo_2EBE0A8 *)Method_UnityEngine_Object_Instantiate_GameObject____75800320);
      if ( !v12 )
        break;
      v27 = v12;
      UnityEngine_GameObject__SetActive(v12, 1, 0LL);
      Component_object = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            v27,
                                                            (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      v12 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v27, 0LL);
      if ( !v12 )
        break;
      v35.fields.y = 0.0;
      v35.fields.z = 0.0;
      v35.fields.x = v21;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v12, v35, 0LL);
      v29 = this->fields.breakPointParent;
      if ( !v29 )
        break;
      if ( !Component_object )
        break;
      WarBoardBreakPointComponent__Initialize(Component_object, v22 + v29->fields.mDepth, v17 + 1, 0, v24, 0, 0LL);
      if ( !v15 )
        break;
      v30 = sub_1B649AC(Component_object, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
      if ( !v30 )
      {
        v34 = sub_1B64AF0(0LL);
        sub_1B64998(v34, 0LL);
      }
      if ( v17 >= v15[6]
        || (p_monitor[v17] = Component_object,
            sub_1B64814((ServantStatusBattleListViewItem_o *)&p_monitor[v16], (int32_t)Component_object, v31, v32),
            v17 >= v15[6]) )
      {
        sub_1B64AD4(v30, v13);
      }
      v12 = (UnityEngine_GameObject_o *)p_monitor[v17];
      if ( !v12 )
        break;
      WarBoardBreakPointComponent__SetActive((WarBoardBreakPointComponent_o *)v12, (__int64)v17 < v18, 0, 0LL);
      if ( v23 == v17 )
        return;
      maxSpacing = Component_object->fields.maxSpacing;
      breakPointParent = this->fields.breakPointParent;
      v22 -= 2;
      ++v16;
      if ( maxSpacing >= v20 )
        maxSpacing = v20;
      v21 = v21 + maxSpacing;
      ++v17;
    }
    while ( breakPointParent );
LABEL_21:
    sub_1B64ACC(v12, v13);
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

  if ( (byte_49FC48C & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, buffData);
    byte_49FC48C = 1;
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
      sub_1B64ACC(ShowServantParam, v9);
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
    sub_1B64ACC(hpLabel, *(_QWORD *)&dispType);
  }
  if ( posSkillRoot->max_length <= dispType )
LABEL_25:
    sub_1B64AD4(hpLabel, *(_QWORD *)&dispType);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  BattleServantData_o *battleServant_k__BackingField; // x21
  UILabel_o *atkLabel; // x22
  UILabel_o *hpLabel; // x22
  UILabel_o *detailButtonLabel; // x22
  UILabel_o *servantNameLabel; // x22
  UnityEngine_Object_o *pieceStatusLabelComponent; // x22
  UnityEngine_Object_o *servantLevel; // x22
  UILabel_o *v34; // x22
  System_String_o *v35; // x23
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  float *p_z; // x8
  float *p_x; // x9
  float *p_y; // x10
  char v43; // w22
  UILabel_o *hpValueLabel; // x22
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  Il2CppObject *v48; // x23
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  Il2CppObject *v52; // x0
  int32_t AttackValue; // w22
  bool isPlayerGroup; // w0
  const MethodInfo *v55; // x3
  bool v56; // w0
  const MethodInfo *v57; // x3
  BattleBuffData_o *BuffData; // x0
  const MethodInfo *v59; // x2
  UnityEngine_GameObject_o *actionCountObj; // x21
  UILabel_o *actValueLabel; // x21
  UISprite_o *frameSprite; // x21
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x0
  UnityEngine_Object_o *actionPountObj; // x21
  UnityEngine_Object_o *actionPointValueLabel; // x21
  UnityEngine_GameObject_o *v69; // x21
  struct WarBoardCost_o *Cost_k__BackingField; // x8
  UILabel_o *v71; // x21
  UISprite_o *v72; // x21
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  Il2CppObject *v76; // x0
  UILabel_o *actionPointLabel; // x21
  int32_t v78; // w21
  UILabel_o *currentActionPointDispLabel; // x23
  int v80; // w22
  UILabel_o *costDispLabel; // x23
  System_String_o *v82; // x24
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  Il2CppObject *v86; // x21
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  Il2CppObject *v90; // x0
  bool HasCost; // w0
  const MethodInfo *v92; // x2
  UnityEngine_GameObject_o *v93; // x21
  bool activeSelf; // w0
  __int64 v95; // x8
  __int64 v96; // x9
  __int64 v97; // x10
  int npcImageSvtId_k__BackingField; // w8
  int32_t npcDispLimitCount_k__BackingField; // w22
  int32_t ServantImageLimitSealAfter; // w21
  UISprite_o *servantIcon; // x23
  int32_t v102; // w24
  bool v103; // w21
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  int32_t posAtkValueLabel; // w21
  Il2CppObject *v108; // x23
  __int64 v109; // x2
  __int64 v110; // x3
  __int64 v111; // x4
  Il2CppObject *v112; // x0
  System_String_o *v113; // x0
  UISprite_o *enemyIcon; // x23
  System_String_o *v115; // x22
  UISprite_o *v116; // x22
  System_String_o *v117; // x23
  UISprite_o *enemyIconBg; // x22
  bool v119; // w21
  UnityEngine_Object_o *equipIcon; // x21
  UnityEngine_Object_o *equipIconOnFace; // x21
  UISprite_o *v122; // x21
  int32_t iconEquipId_k__BackingField; // w22
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  int monitor; // w8
  bool v126; // w21
  UISprite_o *flameInClassIcon; // x23
  int32_t IconClassImageId_k__BackingField; // w21
  int32_t iconFrameType_k__BackingField; // w22
  int32_t breakPoint_k__BackingField; // w21
  int32_t breakPointMax_k__BackingField; // w22
  bool isEnemyServant; // w0
  const MethodInfo *v133; // x4
  UIBasicSprite_o *hpBar; // x21
  float CurrentHpProgress; // s0
  float CurrentNpProgress; // s0
  const MethodInfo *v137; // x1
  UnityEngine_Object_o *critecalStarsRoot; // x21
  UILabel_o *critecalStarsLabel; // x21
  UnityEngine_Object_o *supportSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *RoleTypeLabel; // x21
  struct BattleServantData_o *v143; // x8
  int v144; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t MaxHp; // [xsp+8h] [xbp-68h] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-60h] BYREF
  __int64 v148; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v149; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v150; // 0:s0.4,4:s1.4,8:s2.4

  v3 = pieceData;
  v4 = this;
  if ( (byte_49FC488 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, pieceData);
    sub_1B64870(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v5);
    sub_1B64870(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1B64870(&DataManager_TypeInfo, v7);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_1B64870(&int_TypeInfo, v10);
    sub_1B64870(&LocalizationManager_TypeInfo, v11);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v12);
    sub_1B64870(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_1B64870(&StringLiteral_15336/*"WARBOARD_INFO_POPUP_SVT_HP"*/, v14);
    sub_1B64870(&StringLiteral_20111/*"icon_strong_enemy"*/, v15);
    sub_1B64870(&StringLiteral_22634/*"questinfo_enemyface_bg"*/, v16);
    sub_1B64870(&StringLiteral_19901/*"hp_gauge_boss"*/, v17);
    sub_1B64870(&StringLiteral_23024/*"servant_base_{0}"*/, v18);
    sub_1B64870(&StringLiteral_15335/*"WARBOARD_INFO_POPUP_SVT_DETAIL_BUTTON"*/, v19);
    sub_1B64870(&StringLiteral_15334/*"WARBOARD_INFO_POPUP_SVT_ATK"*/, v20);
    sub_1B64870(&StringLiteral_15332/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT"*/, v21);
    sub_1B64870(&StringLiteral_15337/*"WARBOARD_INFO_POPUP_SVT_LV"*/, v22);
    sub_1B64870(&StringLiteral_24840/*"{0:#,0} / {1:#,0}"*/, v23);
    this = (WarBoardSimplePopupElementServant_o *)sub_1B64870(&StringLiteral_15333/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT_COST"*/, v24);
    byte_49FC488 = 1;
  }
  entity = 0LL;
  v148 = 0LL;
  if ( !v3 )
    goto LABEL_165;
  if ( WarBoardPieceData__get_isMaster(v3, 0LL) || !v3->fields._battleServant_k__BackingField )
    return;
  v4->fields.pieceData = v3;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields.pieceData, (int32_t)v3, v25, v26);
  battleServant_k__BackingField = v3->fields._battleServant_k__BackingField;
  atkLabel = v4->fields.atkLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15334/*"WARBOARD_INFO_POPUP_SVT_ATK"*/, 0LL);
  if ( !atkLabel )
    goto LABEL_165;
  UILabel__set_text(atkLabel, (System_String_o *)this, 0LL);
  hpLabel = v4->fields.hpLabel;
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15336/*"WARBOARD_INFO_POPUP_SVT_HP"*/, 0LL);
  if ( !hpLabel )
    goto LABEL_165;
  UILabel__set_text(hpLabel, (System_String_o *)this, 0LL);
  detailButtonLabel = v4->fields.detailButtonLabel;
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15335/*"WARBOARD_INFO_POPUP_SVT_DETAIL_BUTTON"*/, 0LL);
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
    v34 = v4->fields.servantLevel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_15337/*"WARBOARD_INFO_POPUP_SVT_LV"*/, 0LL);
    iconLevel_k__BackingField = v3->fields._iconLevel_k__BackingField;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v36, v37, v38);
    this = (WarBoardSimplePopupElementServant_o *)System_String__Format(v35, v39, 0LL);
    if ( !v34 )
      goto LABEL_165;
    UILabel__set_text(v34, (System_String_o *)this, 0LL);
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
      v43 = (char)this;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)v4->fields.servantLevel,
                                                      0LL);
      if ( (v43 & 1) != 0 )
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
    v149.fields.z = *p_z;
    v149.fields.y = *p_y;
    v149.fields.x = *p_x;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v149, 0LL);
  }
  hpValueLabel = v4->fields.hpValueLabel;
  iconLevel_k__BackingField = WarBoardPieceData__get_CurrentHp(v3, 0LL);
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v45, v46, v47);
  MaxHp = WarBoardPieceData__get_MaxHp(v3, 0LL);
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp, v49, v50, v51);
  this = (WarBoardSimplePopupElementServant_o *)System_String__Format_61397948(
                                                  (System_String_o *)StringLiteral_24840/*"{0:#,0} / {1:#,0}"*/,
                                                  v48,
                                                  v52,
                                                  0LL);
  if ( !hpValueLabel )
    goto LABEL_165;
  UILabel__set_text(hpValueLabel, (System_String_o *)this, 0LL);
  AttackValue = WarBoardPieceData__get_AttackValue(v3, 0LL);
  isPlayerGroup = WarBoardPieceData__get_isPlayerGroup(v3, 0LL);
  WarBoardSimplePopupElementServant__SetAtkLabel(v4, AttackValue, isPlayerGroup, v55);
  v56 = WarBoardPieceData__get_isPlayerGroup(v3, 0LL);
  WarBoardSimplePopupElementServant__SetUpSkillIcon(v4, battleServant_k__BackingField, v56, v57);
  BuffData = WarBoardPieceData__get_BuffData(v3, 0LL);
  WarBoardSimplePopupElementServant__SetBuffIcon(v4, BuffData, v59);
  actionCountObj = v4->fields.actionCountObj;
  this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_isInfinitelyActable(v3, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    pieceData = 0LL;
  }
  else
  {
    this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_165;
    pieceData = (WarBoardPieceData_o *)(LODWORD(this[1].fields.hpBar) == 2);
  }
  if ( !actionCountObj )
    goto LABEL_165;
  UnityEngine_GameObject__SetActive(actionCountObj, (bool)pieceData, 0LL);
  actValueLabel = v4->fields.actValueLabel;
  LODWORD(v148) = v3->fields._currentActionCount_k__BackingField;
  this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)&v148, 0LL);
  if ( !actValueLabel )
    goto LABEL_165;
  UILabel__set_text(actValueLabel, (System_String_o *)this, 0LL);
  frameSprite = v4->fields.frameSprite;
  iconLevel_k__BackingField = v3->fields._forceId_k__BackingField + 1;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v63, v64, v65);
  this = (WarBoardSimplePopupElementServant_o *)System_String__Format((System_String_o *)StringLiteral_23024/*"servant_base_{0}"*/, v66, 0LL);
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
      v69 = v4->fields.actionPountObj;
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_HasCost(v3, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_165;
        pieceData = (WarBoardPieceData_o *)(LODWORD(this[1].fields.hpBar) == 2);
      }
      else
      {
        pieceData = 0LL;
      }
      if ( !v69 )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive(v69, (bool)pieceData, 0LL);
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_HasCost(v3, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        Cost_k__BackingField = v3->fields._Cost_k__BackingField;
        if ( !Cost_k__BackingField )
          goto LABEL_165;
        v71 = v4->fields.actionPointValueLabel;
        LODWORD(v148) = Cost_k__BackingField->fields._CurrentActionPoint_k__BackingField;
        this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)&v148, 0LL);
        if ( !v71 )
          goto LABEL_165;
        UILabel__set_text(v71, (System_String_o *)this, 0LL);
        v72 = v4->fields.frameSprite;
        iconLevel_k__BackingField = v3->fields._forceId_k__BackingField + 1;
        v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v73, v74, v75);
        this = (WarBoardSimplePopupElementServant_o *)System_String__Format(
                                                        (System_String_o *)StringLiteral_23024/*"servant_base_{0}"*/,
                                                        v76,
                                                        0LL);
        if ( !v72 )
          goto LABEL_165;
        UISprite__set_spriteName(v72, (System_String_o *)this, 0LL);
        this = (WarBoardSimplePopupElementServant_o *)v4->fields.actionPountLabelObj;
        if ( !this )
          goto LABEL_165;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        actionPointLabel = v4->fields.actionPointLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_15332/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT"*/,
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
        v78 = (int)this;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__get_Attack(v3->fields._Cost_k__BackingField, 0LL);
        if ( !v3->fields._Cost_k__BackingField )
          goto LABEL_165;
        currentActionPointDispLabel = v4->fields.currentActionPointDispLabel;
        v80 = (int)this;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__CurrentAndMaxPointToString(
                                                        v3->fields._Cost_k__BackingField,
                                                        0LL);
        if ( !currentActionPointDispLabel )
          goto LABEL_165;
        UILabel__set_text(currentActionPointDispLabel, (System_String_o *)this, 0LL);
        costDispLabel = v4->fields.costDispLabel;
        v82 = LocalizationManager__Get((System_String_o *)StringLiteral_15333/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT_COST"*/, 0LL);
        MaxHp = v78;
        v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp, v83, v84, v85);
        v144 = v80;
        v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v144, v87, v88, v89);
        this = (WarBoardSimplePopupElementServant_o *)System_String__Format_61397948(v82, v86, v90, 0LL);
        if ( !costDispLabel )
          goto LABEL_165;
        UILabel__set_text(costDispLabel, (System_String_o *)this, 0LL);
      }
      HasCost = WarBoardPieceData__get_HasCost(v3, 0LL);
      WarBoardSimplePopupElementServant__SetUIPosition(v4, HasCost, v92);
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.actionCountObj;
      if ( !this )
        goto LABEL_165;
      v93 = v4->fields.actionPountObj;
      activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      v95 = 344LL;
      if ( activeSelf )
        v95 = 356LL;
      if ( activeSelf )
        v96 = 352LL;
      else
        v96 = 340LL;
      if ( activeSelf )
        v97 = 348LL;
      else
        v97 = 336LL;
      v150.fields.x = *(float *)((char *)&v4->klass + v97);
      v150.fields.y = *(float *)((char *)&v4->klass + v96);
      v150.fields.z = *(float *)((char *)&v4->klass + v95);
      GameObjectExtensions__SetLocalPosition(v93, v150, 0LL);
    }
  }
  npcImageSvtId_k__BackingField = v3->fields._npcImageSvtId_k__BackingField;
  if ( npcImageSvtId_k__BackingField <= 0 )
    npcImageSvtId_k__BackingField = v3->fields._iconId_k__BackingField;
  HIDWORD(v148) = npcImageSvtId_k__BackingField;
  npcDispLimitCount_k__BackingField = v3->fields._npcDispLimitCount_k__BackingField;
  if ( npcDispLimitCount_k__BackingField <= 0 )
    npcDispLimitCount_k__BackingField = v3->fields._iconLimitCount_k__BackingField;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WarBoardSimplePopupElementServant_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  v102 = HIDWORD(v148);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetFaceImage(servantIcon, v102, ServantImageLimitSealAfter, 0LL) )
  {
LABEL_93:
    this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_165;
    posAtkValueLabel = (int32_t)this->fields.posAtkValueLabel;
    iconLevel_k__BackingField = HIDWORD(v148);
    v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v104, v105, v106);
    MaxHp = npcDispLimitCount_k__BackingField;
    v112 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp, v109, v110, v111);
    v113 = System_String__Concat(v108, v112, 0LL);
    enemyIcon = (UISprite_o *)v4->fields.enemyIcon;
    v115 = v113;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( AtlasManager__SetEventUI_37549072(posAtkValueLabel, enemyIcon, v115, 0LL) )
      goto LABEL_100;
    v116 = (UISprite_o *)v4->fields.enemyIcon;
    v117 = System_Int32__ToString((int32_t)&v148 + 4, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( AtlasManager__SetEventUI_37549072(posAtkValueLabel, v116, v117, 0LL) )
LABEL_100:
      WarBoardPieceData__ApplyDisplayType(v3, v4->fields.enemyIcon, 0LL);
    enemyIconBg = v4->fields.enemyIconBg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_37549072(posAtkValueLabel, enemyIconBg, (System_String_o *)StringLiteral_22634/*"questinfo_enemyface_bg"*/, 0LL);
    v103 = 0;
  }
  else
  {
    v103 = 1;
  }
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantIcon;
  if ( !this )
    goto LABEL_165;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_165;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v103, 0LL);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.enemyIcon;
  if ( !this )
    goto LABEL_165;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_165;
  v119 = !v103;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v119, 0LL);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.enemyIconBg;
  if ( !this )
    goto LABEL_165;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_165;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v119, 0LL);
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
    v122 = v4->fields.equipIcon;
    iconEquipId_k__BackingField = v3->fields._iconEquipId_k__BackingField;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(v122, iconEquipId_k__BackingField, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)v4->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (WarBoardSimplePopupElementServant_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !this )
        goto LABEL_165;
      this = (WarBoardSimplePopupElementServant_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                      &entity,
                                                      v3->fields._iconEquipId_k__BackingField,
                                                      (const MethodInfo_30D61D4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_130;
      if ( !entity )
        goto LABEL_165;
      monitor = (int)entity[5].monitor;
      if ( monitor >= 1 )
        v126 = v3->fields._equipLimitCount_k__BackingField >= monitor;
      else
LABEL_130:
        v126 = 0;
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.equipLimitCountSprite;
      if ( !this )
        goto LABEL_165;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
      if ( !this )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v126, 0LL);
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
    v133);
  if ( WarBoardPieceData__get_isEnemyServant(v3, 0LL) )
  {
    this = (WarBoardSimplePopupElementServant_o *)v4->fields.hpBar;
    if ( !this )
      goto LABEL_165;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19901/*"hp_gauge_boss"*/, 0LL);
  }
  hpBar = (UIBasicSprite_o *)v4->fields.hpBar;
  CurrentHpProgress = WarBoardPieceData__get_CurrentHpProgress(v3, 0LL);
  if ( !hpBar )
LABEL_165:
    sub_1B64ACC(this, pieceData);
  UIBasicSprite__set_fillAmount(hpBar, CurrentHpProgress, 0LL);
  CurrentNpProgress = WarBoardPieceData__get_CurrentNpProgress(v3, 0LL);
  WarBoardSimplePopupElementServant__UpdateNpBars(v4, CurrentNpProgress, v137);
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
      LODWORD(v148) = WarBoardPieceData__get_CriticalStars(v3, 0LL);
      this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)&v148, 0LL);
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
    v143 = v3->fields._battleServant_k__BackingField;
    if ( v143 )
    {
      if ( v143->fields.isEnemy && v3->fields._roleType_k__BackingField == 1 )
      {
        this = (WarBoardSimplePopupElementServant_o *)v4->fields.RoleTypeLabel;
        if ( this )
        {
          this = (WarBoardSimplePopupElementServant_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( this )
          {
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20111/*"icon_strong_enemy"*/, 0LL);
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
    sub_1B64ACC(this, data);
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
        sub_1B64AD4(this, data);
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

  if ( (byte_49FC48E & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_49FC48E = 1;
  }
  if ( this->fields.pieceData )
  {
    v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
      v3 = sub_1BB674C(v3);
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
    if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
      v4 = sub_1BB674C(v4);
    pieceData = this->fields.pieceData;
    v6 = **(WarBoardManager_o ***)(v4 + 184);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform || (*(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_position(transform, 0LL), !v6) )
      sub_1B64ACC(transform, v8);
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

  if ( (byte_49FC48A & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FC48A = 1;
  }
  hpValueLabel = (UnityEngine_Object_o *)this->fields.hpValueLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpValueLabel, 0LL, 0LL) )
  {
    v5 = this->fields.hpValueLabel;
    if ( !v5 )
      sub_1B64ACC(0LL, v4);
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
      sub_1B64ACC(this, method);
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
    sub_1B64AD4(this, method);
  }
}


void __fastcall WarBoardSimplePopupElementServant__UpdateUiBrightnessByPieceStatus(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x1
  WarBoardPieceData_o *pieceData; // x0
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundActionCount; // x21
  System_Action_object__o *v11; // x22
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundFaceIcon; // x19
  System_Action_object__o *v13; // x21

  if ( (byte_49FC489 & 1) == 0 )
  {
    sub_1B64870(&System_Action_UIWidget__TypeInfo, method);
    sub_1B64870(&Method_BasicHelper_ForEach_UIWidget___, v3);
    sub_1B64870(
      &Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__0__,
      v4);
    sub_1B64870(
      &Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__1__,
      v5);
    sub_1B64870(&WarBoardSimplePopupElementServant___c__DisplayClass55_0_TypeInfo, v6);
    byte_49FC489 = 1;
  }
  v7 = sub_1B64ABC(WarBoardSimplePopupElementServant___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData || (pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasIconDarkenBuff(pieceData, 0LL), !v7) )
    sub_1B64ACC(pieceData, v8);
  *(_BYTE *)(v7 + 16) = (unsigned __int8)pieceData & 1;
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v11 = (System_Action_object__o *)sub_1B64ABC(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v11,
      (Il2CppObject *)v7,
      Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__0__,
      0LL);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v11,
      (const MethodInfo_2E28B3C *)Method_BasicHelper_ForEach_UIWidget___);
  }
  turnDarkUiWidgetsAroundFaceIcon = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundFaceIcon;
  if ( turnDarkUiWidgetsAroundFaceIcon )
  {
    v13 = (System_Action_object__o *)sub_1B64ABC(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__1__,
      0LL);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundFaceIcon,
      (System_Action_T__o *)v13,
      (const MethodInfo_2E28B3C *)Method_BasicHelper_ForEach_UIWidget___);
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
    sub_1B64ACC(this, 0LL);
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
    sub_1B64ACC(this, 0LL);
  v4 = 1.0;
  v5 = v3;
  v6 = v3;
  UIWidget__set_color(x, *(UnityEngine_Color_o *)&v3, 0LL);
}