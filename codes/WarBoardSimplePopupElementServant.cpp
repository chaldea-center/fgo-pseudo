void __fastcall WarBoardSimplePopupElementServant___ctor(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  this->fields.servantNameLabelWidth = 180;
  this->fields.HpValueLabelMaxWidth = 140;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_327AA70;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_327E080;
  this->fields.positionLevelNpc.fields.z = 0.0;
  *(_OWORD *)&this->fields.positionActionPointDefault.fields.x = xmmword_327AA70;
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
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B2232 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2232 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  WarBoardManager__ShowServantDetailPopup((WarBoardManager_o *)Instance, this->fields.pieceData, 0, 0LL);
}


void __fastcall WarBoardSimplePopupElementServant__SetAtkLabel(
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

  if ( (byte_42B222E & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_15381/*"WARBOARD_SERVANT_INFO_ENEMY_ATK"*/);
    sub_B52984(&StringLiteral_23682/*"{0:#,0}"*/);
    byte_42B222E = 1;
  }
  atkValueLabel = this->fields.atkValueLabel;
  if ( isPlayerGroup )
  {
    v11 = atk;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
    v9 = System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v8, 0LL);
    if ( atkValueLabel )
    {
      UILabel__set_text(atkValueLabel, v9, 0LL);
      return;
    }
LABEL_11:
    sub_B52A5C(v9, v10);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_15381/*"WARBOARD_SERVANT_INFO_ENEMY_ATK"*/, 0LL);
  if ( !atkValueLabel )
    goto LABEL_11;
  UILabel__set_text(atkValueLabel, v9, 0LL);
}


void __fastcall WarBoardSimplePopupElementServant__SetBreakPoint(
        WarBoardSimplePopupElementServant_o *this,
        int32_t breakPoint,
        int32_t breakPointMax,
        bool isEnemyServant,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *klass; // x0
  __int64 v10; // x1
  UnityEngine_Component_o *breakPointParent; // x8
  UnityEngine_GameObject_o *v12; // x22
  int32_t v13; // w26
  float v14; // s8
  float v15; // s9
  bool v16; // w23
  struct UnityEngine_GameObject_o *breakPointPrefab; // x24
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_GameObject_o *v19; // x25
  WarBoardBreakPointComponent_o *Component_srcLineSprite; // x24
  struct UIWidget_o *v21; // x8
  __int64 v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int32_t v29; // w27
  UnityEngine_GameObject_c **v30; // x25
  BattleServantConfConponent_o *v31; // x25
  float maxSpacing; // s0
  __int64 v33; // x0
  __int64 v34; // x0
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B2230 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&WarBoardBreakPointComponent___TypeInfo);
    byte_42B2230 = 1;
  }
  klass = (UnityEngine_GameObject_o *)sub_B5299C(WarBoardBreakPointComponent___TypeInfo, (unsigned int)breakPointMax);
  breakPointParent = (UnityEngine_Component_o *)this->fields.breakPointParent;
  if ( !breakPointParent )
    goto LABEL_22;
  if ( breakPointMax >= 1 )
  {
    v12 = klass;
    v13 = 0;
    v14 = 0.0;
    v15 = (float)breakPointParent[6].fields.m_CachedPtr / (float)breakPointMax;
    v16 = isEnemyServant;
    do
    {
      breakPointPrefab = this->fields.breakPointPrefab;
      transform = UnityEngine_Component__get_transform(breakPointParent, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      klass = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                            (UILabel_o *)breakPointPrefab,
                                            transform,
                                            (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_GameObject____68654656);
      if ( !klass )
        break;
      v19 = klass;
      UnityEngine_GameObject__SetActive(klass, 1, 0LL);
      Component_srcLineSprite = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   v19,
                                                                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      klass = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v19, 0LL);
      if ( !klass )
        break;
      v35.fields.y = 0.0;
      v35.fields.z = 0.0;
      v35.fields.x = v14;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)klass, v35, 0LL);
      v21 = this->fields.breakPointParent;
      if ( !v21 )
        break;
      if ( !Component_srcLineSprite )
        break;
      WarBoardBreakPointComponent__Initialize(
        Component_srcLineSprite,
        v21->fields.mDepth + 2 * (~v13 + breakPointMax),
        v13 + 1,
        0,
        v16,
        0,
        0LL);
      if ( !v12 )
        break;
      v22 = sub_B52A44(Component_srcLineSprite, v12->klass->_1.element_class);
      if ( !v22 )
      {
        v34 = sub_B52A7C(0LL);
        sub_B52A28(v34, 0LL);
      }
      v29 = v13;
      if ( v13 >= LODWORD(v12[1].klass)
        || (v30 = &v12->klass + v13,
            v30[4] = (UnityEngine_GameObject_c *)Component_srcLineSprite,
            v31 = (BattleServantConfConponent_o *)(v30 + 4),
            sub_B52920(v31, (System_Int32_array **)Component_srcLineSprite, v23, v24, v25, v26, v27, v28),
            (unsigned int)v13 >= LODWORD(v12[1].klass)) )
      {
        v33 = sub_B52A88(v22);
        sub_B52A28(v33, 0LL);
      }
      klass = (UnityEngine_GameObject_o *)v31->klass;
      if ( !v31->klass )
        break;
      WarBoardBreakPointComponent__SetActive((WarBoardBreakPointComponent_o *)klass, v13++ < breakPoint, 0, 0LL);
      if ( v29 + 1 >= breakPointMax )
        return;
      maxSpacing = Component_srcLineSprite->fields.maxSpacing;
      breakPointParent = (UnityEngine_Component_o *)this->fields.breakPointParent;
      if ( maxSpacing >= v15 )
        maxSpacing = v15;
      v14 = v14 + maxSpacing;
    }
    while ( breakPointParent );
LABEL_22:
    sub_B52A5C(klass, v10);
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

  if ( (byte_42B222F & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B222F = 1;
  }
  showBuffComponent = (UnityEngine_Object_o *)this->fields.showBuffComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(showBuffComponent, 0LL, 0LL);
  if ( buffData && !v6 )
  {
    v7 = this->fields.showBuffComponent;
    ShowServantParam = BattleBuffData__getShowServantParam(buffData, 0LL);
    if ( !v7 )
      sub_B52A5C(ShowServantParam, v9);
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
  __int64 v13; // x0

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
    sub_B52A5C(hpLabel, *(_QWORD *)&dispType);
  }
  if ( posSkillRoot->max_length <= dispType )
  {
LABEL_25:
    v13 = sub_B52A88(hpLabel);
    sub_B52A28(v13, 0LL);
  }
  GameObjectExtensions__SetLocalPosition(
    (UnityEngine_GameObject_o *)hpLabel,
    *(UnityEngine_Vector3_o *)&posSkillRoot->m_Items[dispType].fields.y,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSimplePopupElementServant__SetUp(
        WarBoardSimplePopupElementServant_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  WarBoardPieceData_o *v3; // x20
  WarBoardSimplePopupElementServant_o *v4; // x19
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantData_o *battleServant_k__BackingField; // x21
  UILabel_o *atkLabel; // x22
  UILabel_o *hpLabel; // x22
  UILabel_o *detailButtonLabel; // x22
  UILabel_o *servantNameLabel; // x22
  UnityEngine_Object_o *pieceStatusLabelComponent; // x22
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *servantLevel; // x22
  UILabel_o *v19; // x22
  System_String_o *v20; // x23
  Il2CppObject *v21; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  char v25; // w22
  UILabel_o *hpValueLabel; // x22
  Il2CppObject *v27; // x23
  Il2CppObject *v28; // x0
  int32_t AttackValue; // w22
  bool isPlayerGroup; // w0
  const MethodInfo *v31; // x3
  bool v32; // w0
  const MethodInfo *v33; // x3
  BattleBuffData_o *BuffData; // x0
  const MethodInfo *v35; // x2
  UnityEngine_GameObject_o *actionCountObj; // x21
  UILabel_o *actValueLabel; // x21
  UISprite_o *frameSprite; // x21
  Il2CppObject *v39; // x0
  UnityEngine_Object_o *actionPountObj; // x21
  UnityEngine_Object_o *actionPointValueLabel; // x21
  UnityEngine_GameObject_o *v42; // x21
  struct WarBoardCost_o *Cost_k__BackingField; // x8
  UILabel_o *v44; // x21
  UISprite_o *v45; // x21
  Il2CppObject *v46; // x0
  UILabel_o *actionPointLabel; // x21
  int32_t v48; // w21
  UILabel_o *currentActionPointDispLabel; // x23
  int v50; // w22
  UILabel_o *costDispLabel; // x23
  System_String_o *v52; // x24
  Il2CppObject *v53; // x21
  Il2CppObject *v54; // x0
  bool HasCost; // w0
  const MethodInfo *v56; // x2
  UnityEngine_GameObject_o *v57; // x21
  bool activeSelf; // w0
  __int64 v59; // x8
  __int64 v60; // x9
  __int64 v61; // x10
  int npcImageSvtId_k__BackingField; // w8
  int32_t npcDispLimitCount_k__BackingField; // w22
  int32_t ServantImageLimitSealAfter; // w21
  UISprite_o *servantIcon; // x23
  WarBoardSimplePopupElementServant_o **p_servantIcon; // x28
  int32_t v67; // w24
  bool v68; // w21
  int32_t posAtkValueLabel; // w21
  Il2CppObject *v70; // x23
  Il2CppObject *v71; // x0
  System_String_o *v72; // x0
  UISprite_o *enemyIcon; // x23
  System_String_o *v74; // x22
  bool v75; // w0
  UISprite_o *v76; // x22
  WarBoardPieceData_o *v77; // x0
  UISpriteAltMat_o *v78; // x1
  System_String_o *v79; // x23
  UISprite_o *enemyIconBg; // x22
  bool v81; // w21
  UnityEngine_Object_o *equipIcon; // x21
  UnityEngine_Object_o *equipIconOnFace; // x21
  int32_t *p_iconEquipId_k__BackingField; // x23
  UISprite_o *v85; // x21
  int32_t v86; // w22
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  int targetId; // w8
  bool v89; // w21
  UISprite_o *flameInClassIcon; // x23
  int32_t iconFrameType_k__BackingField; // w21
  int32_t iconClassId_k__BackingField; // w22
  int32_t breakPoint_k__BackingField; // w21
  int32_t breakPointMax_k__BackingField; // w22
  bool isEnemyServant; // w0
  const MethodInfo *v96; // x4
  UIBasicSprite_o *hpBar; // x21
  float CurrentHpProgress; // s0
  float CurrentNpProgress; // s0
  const MethodInfo *v100; // x1
  UnityEngine_Object_o *critecalStarsRoot; // x21
  UILabel_o *critecalStarsLabel; // x21
  UnityEngine_Object_o *supportSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *RoleTypeLabel; // x21
  struct BattleServantData_o *v106; // x8
  int v107; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t MaxHp; // [xsp+8h] [xbp-68h] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  __int64 v111; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4

  v3 = pieceData;
  v4 = this;
  if ( (byte_42B222B & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&StringLiteral_15350/*"WARBOARD_INFO_POPUP_SVT_HP"*/);
    sub_B52984(&StringLiteral_19520/*"icon_strong_enemy"*/);
    sub_B52984(&StringLiteral_21823/*"questinfo_enemyface_bg"*/);
    sub_B52984(&StringLiteral_19331/*"hp_gauge_boss"*/);
    sub_B52984(&StringLiteral_22167/*"servant_base_{0}"*/);
    sub_B52984(&StringLiteral_15349/*"WARBOARD_INFO_POPUP_SVT_DETAIL_BUTTON"*/);
    sub_B52984(&StringLiteral_15348/*"WARBOARD_INFO_POPUP_SVT_ATK"*/);
    sub_B52984(&StringLiteral_15346/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT"*/);
    sub_B52984(&StringLiteral_15351/*"WARBOARD_INFO_POPUP_SVT_LV"*/);
    sub_B52984(&StringLiteral_23684/*"{0:#,0} / {1:#,0}"*/);
    this = (WarBoardSimplePopupElementServant_o *)sub_B52984(&StringLiteral_15347/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT_COST"*/);
    byte_42B222B = 1;
  }
  entity = 0LL;
  v111 = 0LL;
  if ( !v3 )
    goto LABEL_189;
  if ( WarBoardPieceData__get_isMaster(v3, 0LL) || !v3->fields._battleServant_k__BackingField )
    return;
  v4->fields.pieceData = v3;
  sub_B52920((BattleServantConfConponent_o *)&v4->fields.pieceData, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
  battleServant_k__BackingField = v3->fields._battleServant_k__BackingField;
  atkLabel = v4->fields.atkLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15348/*"WARBOARD_INFO_POPUP_SVT_ATK"*/, 0LL);
  if ( !atkLabel )
    goto LABEL_189;
  UILabel__set_text(atkLabel, (System_String_o *)this, 0LL);
  hpLabel = v4->fields.hpLabel;
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15350/*"WARBOARD_INFO_POPUP_SVT_HP"*/, 0LL);
  if ( !hpLabel )
    goto LABEL_189;
  UILabel__set_text(hpLabel, (System_String_o *)this, 0LL);
  detailButtonLabel = v4->fields.detailButtonLabel;
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15349/*"WARBOARD_INFO_POPUP_SVT_DETAIL_BUTTON"*/, 0LL);
  if ( !detailButtonLabel )
    goto LABEL_189;
  UILabel__set_text(detailButtonLabel, (System_String_o *)this, 0LL);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantNameLabel;
  if ( !this )
    goto LABEL_189;
  UILabel__SetDefaultFont((UILabel_o *)this, 0LL);
  if ( !battleServant_k__BackingField )
    goto LABEL_189;
  servantNameLabel = v4->fields.servantNameLabel;
  this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getServantShortName(
                                                  battleServant_k__BackingField,
                                                  0LL);
  if ( !servantNameLabel )
    goto LABEL_189;
  UILabel__set_text(servantNameLabel, (System_String_o *)this, 0LL);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantNameLabel;
  if ( !this )
    goto LABEL_189;
  UILabel__SetCondensedScale((UILabel_o *)this, v4->fields.servantNameLabelWidth, 0LL);
  pieceStatusLabelComponent = (UnityEngine_Object_o *)v4->fields.pieceStatusLabelComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pieceStatusLabelComponent, 0LL, 0LL) )
  {
    this = (WarBoardSimplePopupElementServant_o *)v4->fields.pieceStatusLabelComponent;
    if ( !this )
      goto LABEL_189;
    WarBoardPieceStatusLabel__SetupLabel((WarBoardPieceStatusLabel_o *)this, v3, v17);
  }
  ((void (__fastcall *)(WarBoardSimplePopupElementServant_o *, void *))v4->klass->vtable._4_UpdateUiBrightnessByPieceStatus.method)(
    v4,
    v4->klass[1]._1.image);
  servantLevel = (UnityEngine_Object_o *)v4->fields.servantLevel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(servantLevel, 0LL, 0LL) )
  {
    v19 = v4->fields.servantLevel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_15351/*"WARBOARD_INFO_POPUP_SVT_LV"*/, 0LL);
    iconLevel_k__BackingField = v3->fields._iconLevel_k__BackingField;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
    this = (WarBoardSimplePopupElementServant_o *)System_String__Format(v20, v21, 0LL);
    if ( !v19 )
      goto LABEL_189;
    UILabel__set_text(v19, (System_String_o *)this, 0LL);
    if ( WarBoardPieceData__get_isEnemyServant(v3, 0LL) && v3->fields._roleType_k__BackingField == 1 )
    {
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantLevel;
      if ( !this )
        goto LABEL_189;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
      if ( !this )
        goto LABEL_189;
      x = v4->fields.positionLevelDanger.fields.x;
      y = v4->fields.positionLevelDanger.fields.y;
      z = v4->fields.positionLevelDanger.fields.z;
    }
    else
    {
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_IsNpc(v3, 0LL);
      if ( !v4->fields.servantLevel )
        goto LABEL_189;
      v25 = (char)this;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)v4->fields.servantLevel,
                                                      0LL);
      if ( (v25 & 1) != 0 )
      {
        if ( !this )
          goto LABEL_189;
        x = v4->fields.positionLevelNpc.fields.x;
        y = v4->fields.positionLevelNpc.fields.y;
        z = v4->fields.positionLevelNpc.fields.z;
      }
      else
      {
        if ( !this )
          goto LABEL_189;
        x = v4->fields.positionLevel.fields.x;
        y = v4->fields.positionLevel.fields.y;
        z = v4->fields.positionLevel.fields.z;
      }
    }
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&x, 0LL);
  }
  hpValueLabel = v4->fields.hpValueLabel;
  iconLevel_k__BackingField = WarBoardPieceData__get_CurrentHp(v3, 0LL);
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
  MaxHp = WarBoardPieceData__get_MaxHp(v3, 0LL);
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp);
  this = (WarBoardSimplePopupElementServant_o *)System_String__Format_44563852(
                                                  (System_String_o *)StringLiteral_23684/*"{0:#,0} / {1:#,0}"*/,
                                                  v27,
                                                  v28,
                                                  0LL);
  if ( !hpValueLabel )
    goto LABEL_189;
  UILabel__set_text(hpValueLabel, (System_String_o *)this, 0LL);
  AttackValue = WarBoardPieceData__get_AttackValue(v3, 0LL);
  isPlayerGroup = WarBoardPieceData__get_isPlayerGroup(v3, 0LL);
  WarBoardSimplePopupElementServant__SetAtkLabel(v4, AttackValue, isPlayerGroup, v31);
  v32 = WarBoardPieceData__get_isPlayerGroup(v3, 0LL);
  WarBoardSimplePopupElementServant__SetUpSkillIcon(v4, battleServant_k__BackingField, v32, v33);
  BuffData = WarBoardPieceData__get_BuffData(v3, 0LL);
  WarBoardSimplePopupElementServant__SetBuffIcon(v4, BuffData, v35);
  actionCountObj = v4->fields.actionCountObj;
  this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_isInfinitelyActable(v3, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    pieceData = 0LL;
    if ( !actionCountObj )
      goto LABEL_189;
  }
  else
  {
    this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_189;
    pieceData = (WarBoardPieceData_o *)(LODWORD(this[1].fields.npBars) == 2);
    if ( !actionCountObj )
      goto LABEL_189;
  }
  UnityEngine_GameObject__SetActive(actionCountObj, (bool)pieceData, 0LL);
  actValueLabel = v4->fields.actValueLabel;
  LODWORD(v111) = v3->fields._currentActionCount_k__BackingField;
  this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)&v111, 0LL);
  if ( !actValueLabel )
    goto LABEL_189;
  UILabel__set_text(actValueLabel, (System_String_o *)this, 0LL);
  frameSprite = v4->fields.frameSprite;
  iconLevel_k__BackingField = v3->fields._forceId_k__BackingField + 1;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
  this = (WarBoardSimplePopupElementServant_o *)System_String__Format((System_String_o *)StringLiteral_22167/*"servant_base_{0}"*/, v39, 0LL);
  if ( !frameSprite )
    goto LABEL_189;
  UISprite__set_spriteName(frameSprite, (System_String_o *)this, 0LL);
  actionPountObj = (UnityEngine_Object_o *)v4->fields.actionPountObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(actionPountObj, 0LL, 0LL) )
  {
    actionPointValueLabel = (UnityEngine_Object_o *)v4->fields.actionPointValueLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(actionPointValueLabel, 0LL, 0LL) )
    {
      v42 = v4->fields.actionPountObj;
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_HasCost(v3, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_189;
        pieceData = (WarBoardPieceData_o *)(LODWORD(this[1].fields.npBars) == 2);
        if ( !v42 )
          goto LABEL_189;
      }
      else
      {
        pieceData = 0LL;
        if ( !v42 )
          goto LABEL_189;
      }
      UnityEngine_GameObject__SetActive(v42, (bool)pieceData, 0LL);
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_HasCost(v3, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        Cost_k__BackingField = v3->fields._Cost_k__BackingField;
        if ( !Cost_k__BackingField )
          goto LABEL_189;
        v44 = v4->fields.actionPointValueLabel;
        LODWORD(v111) = Cost_k__BackingField->fields._CurrentActionPoint_k__BackingField;
        this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)&v111, 0LL);
        if ( !v44 )
          goto LABEL_189;
        UILabel__set_text(v44, (System_String_o *)this, 0LL);
        v45 = v4->fields.frameSprite;
        iconLevel_k__BackingField = v3->fields._forceId_k__BackingField + 1;
        v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
        this = (WarBoardSimplePopupElementServant_o *)System_String__Format(
                                                        (System_String_o *)StringLiteral_22167/*"servant_base_{0}"*/,
                                                        v46,
                                                        0LL);
        if ( !v45 )
          goto LABEL_189;
        UISprite__set_spriteName(v45, (System_String_o *)this, 0LL);
        this = (WarBoardSimplePopupElementServant_o *)v4->fields.actionPountLabelObj;
        if ( !this )
          goto LABEL_189;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        actionPointLabel = v4->fields.actionPointLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_15346/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT"*/,
                                                        0LL);
        if ( !actionPointLabel )
          goto LABEL_189;
        UILabel__set_text(actionPointLabel, (System_String_o *)this, 0LL);
        this = (WarBoardSimplePopupElementServant_o *)v3->fields._Cost_k__BackingField;
        if ( !this )
          goto LABEL_189;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__get_Move((WarBoardCost_o *)this, 0LL);
        if ( !v3->fields._Cost_k__BackingField )
          goto LABEL_189;
        v48 = (int)this;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__get_Attack(v3->fields._Cost_k__BackingField, 0LL);
        if ( !v3->fields._Cost_k__BackingField )
          goto LABEL_189;
        currentActionPointDispLabel = v4->fields.currentActionPointDispLabel;
        v50 = (int)this;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__CurrentAndMaxPointToString(
                                                        v3->fields._Cost_k__BackingField,
                                                        0LL);
        if ( !currentActionPointDispLabel )
          goto LABEL_189;
        UILabel__set_text(currentActionPointDispLabel, (System_String_o *)this, 0LL);
        costDispLabel = v4->fields.costDispLabel;
        v52 = LocalizationManager__Get((System_String_o *)StringLiteral_15347/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT_COST"*/, 0LL);
        MaxHp = v48;
        v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp);
        v107 = v50;
        v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v107);
        this = (WarBoardSimplePopupElementServant_o *)System_String__Format_44563852(v52, v53, v54, 0LL);
        if ( !costDispLabel )
          goto LABEL_189;
        UILabel__set_text(costDispLabel, (System_String_o *)this, 0LL);
      }
      HasCost = WarBoardPieceData__get_HasCost(v3, 0LL);
      WarBoardSimplePopupElementServant__SetUIPosition(v4, HasCost, v56);
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.actionCountObj;
      if ( !this )
        goto LABEL_189;
      v57 = v4->fields.actionPountObj;
      activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      v59 = 328LL;
      if ( activeSelf )
        v59 = 340LL;
      if ( activeSelf )
        v60 = 344LL;
      else
        v60 = 332LL;
      if ( activeSelf )
        v61 = 348LL;
      else
        v61 = 336LL;
      v112.fields.y = *(float *)((char *)&v4->klass + v60);
      v112.fields.x = *(float *)((char *)&v4->klass + v59);
      v112.fields.z = *(float *)((char *)&v4->klass + v61);
      GameObjectExtensions__SetLocalPosition(v57, v112, 0LL);
    }
  }
  npcImageSvtId_k__BackingField = v3->fields._npcImageSvtId_k__BackingField;
  if ( npcImageSvtId_k__BackingField <= 0 )
    npcImageSvtId_k__BackingField = v3->fields._iconId_k__BackingField;
  HIDWORD(v111) = npcImageSvtId_k__BackingField;
  npcDispLimitCount_k__BackingField = v3->fields._npcDispLimitCount_k__BackingField;
  if ( npcDispLimitCount_k__BackingField <= 0 )
    npcDispLimitCount_k__BackingField = v3->fields._iconLimitCount_k__BackingField;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WarBoardSimplePopupElementServant_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_189;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)this,
                                 v3->fields._iconId_k__BackingField,
                                 npcDispLimitCount_k__BackingField,
                                 0LL);
  if ( !WarBoardPieceData__get_IsEnemyMonster(v3, 0LL) )
  {
    p_servantIcon = (WarBoardSimplePopupElementServant_o **)&v4->fields.servantIcon;
    servantIcon = v4->fields.servantIcon;
    v67 = HIDWORD(v111);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( AtlasManager__SetFaceImage(servantIcon, v67, ServantImageLimitSealAfter, 0LL) )
    {
      v68 = 1;
      goto LABEL_118;
    }
  }
  this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_189;
  posAtkValueLabel = (int32_t)this->fields.posAtkValueLabel;
  iconLevel_k__BackingField = HIDWORD(v111);
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
  MaxHp = npcDispLimitCount_k__BackingField;
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp);
  v72 = System_String__Concat(v70, v71, 0LL);
  enemyIcon = (UISprite_o *)v4->fields.enemyIcon;
  v74 = v72;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v75 = AtlasManager__SetEventUI_28377220(posAtkValueLabel, enemyIcon, v74, 0LL);
  v76 = (UISprite_o *)v4->fields.enemyIcon;
  if ( v75 )
  {
    v77 = v3;
    v78 = v4->fields.enemyIcon;
  }
  else
  {
    v79 = System_Int32__ToString((int32_t)&v111 + 4, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( !AtlasManager__SetEventUI_28377220(posAtkValueLabel, v76, v79, 0LL) )
      goto LABEL_114;
    v78 = v4->fields.enemyIcon;
    v77 = v3;
  }
  WarBoardPieceData__ApplyDisplayType(v77, v78, 0LL);
LABEL_114:
  enemyIconBg = v4->fields.enemyIconBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28377220(posAtkValueLabel, enemyIconBg, (System_String_o *)StringLiteral_21823/*"questinfo_enemyface_bg"*/, 0LL);
  v68 = 0;
  p_servantIcon = (WarBoardSimplePopupElementServant_o **)&v4->fields.servantIcon;
LABEL_118:
  this = *p_servantIcon;
  if ( !*p_servantIcon )
    goto LABEL_189;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_189;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v68, 0LL);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.enemyIcon;
  if ( !this )
    goto LABEL_189;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_189;
  v81 = !v68;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v81, 0LL);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.enemyIconBg;
  if ( !this )
    goto LABEL_189;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_189;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v81, 0LL);
  equipIcon = (UnityEngine_Object_o *)v4->fields.equipIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipIcon, 0LL, 0LL) )
  {
    equipIconOnFace = (UnityEngine_Object_o *)v4->fields.equipIconOnFace;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(equipIconOnFace, 0LL, 0LL) )
    {
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.equipIconOnFace;
      if ( !this )
        goto LABEL_189;
      p_iconEquipId_k__BackingField = &v3->fields._iconEquipId_k__BackingField;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)this,
        v3->fields._iconEquipId_k__BackingField > 0,
        0LL);
    }
    else
    {
      p_iconEquipId_k__BackingField = &v3->fields._iconEquipId_k__BackingField;
    }
    v85 = v4->fields.equipIcon;
    v86 = *p_iconEquipId_k__BackingField;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(v85, v86, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)v4->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (WarBoardSimplePopupElementServant_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !this )
        goto LABEL_189;
      this = (WarBoardSimplePopupElementServant_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                      (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                      &entity,
                                                      *p_iconEquipId_k__BackingField,
                                                      (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_150;
      if ( !entity )
        goto LABEL_189;
      targetId = entity->fields.targetId;
      if ( targetId >= 1 )
        v89 = v3->fields._equipLimitCount_k__BackingField >= targetId;
      else
LABEL_150:
        v89 = 0;
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.equipLimitCountSprite;
      if ( !this )
        goto LABEL_189;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
      if ( !this )
        goto LABEL_189;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v89, 0LL);
    }
  }
  flameInClassIcon = v4->fields.flameInClassIcon;
  iconClassId_k__BackingField = v3->fields._iconClassId_k__BackingField;
  iconFrameType_k__BackingField = v3->fields._iconFrameType_k__BackingField;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIcon(flameInClassIcon, iconClassId_k__BackingField, iconFrameType_k__BackingField, 0LL);
  breakPoint_k__BackingField = v3->fields._breakPoint_k__BackingField;
  breakPointMax_k__BackingField = v3->fields._breakPointMax_k__BackingField;
  isEnemyServant = WarBoardPieceData__get_isEnemyServant(v3, 0LL);
  WarBoardSimplePopupElementServant__SetBreakPoint(
    v4,
    breakPoint_k__BackingField,
    breakPointMax_k__BackingField,
    isEnemyServant,
    v96);
  if ( WarBoardPieceData__get_isEnemyServant(v3, 0LL) )
  {
    this = (WarBoardSimplePopupElementServant_o *)v4->fields.hpBar;
    if ( !this )
      goto LABEL_189;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19331/*"hp_gauge_boss"*/, 0LL);
  }
  hpBar = (UIBasicSprite_o *)v4->fields.hpBar;
  CurrentHpProgress = WarBoardPieceData__get_CurrentHpProgress(v3, 0LL);
  if ( !hpBar )
LABEL_189:
    sub_B52A5C(this, pieceData);
  UIBasicSprite__set_fillAmount(hpBar, CurrentHpProgress, 0LL);
  CurrentNpProgress = WarBoardPieceData__get_CurrentNpProgress(v3, 0LL);
  WarBoardSimplePopupElementServant__UpdateNpBars(v4, CurrentNpProgress, v100);
  critecalStarsRoot = (UnityEngine_Object_o *)v4->fields.critecalStarsRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(critecalStarsRoot, 0LL, 0LL) )
  {
    this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_isPlayerGroup(v3, 0LL);
    if ( !v4->fields.critecalStarsRoot )
      goto LABEL_189;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive(v4->fields.critecalStarsRoot, 1, 0LL);
      critecalStarsLabel = v4->fields.critecalStarsLabel;
      LODWORD(v111) = WarBoardPieceData__get_CriticalStars(v3, 0LL);
      this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)&v111, 0LL);
      if ( !critecalStarsLabel )
        goto LABEL_189;
      UILabel__set_text(critecalStarsLabel, (System_String_o *)this, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(v4->fields.critecalStarsRoot, 0, 0LL);
    }
  }
  supportSprite = (UnityEngine_Object_o *)v4->fields.supportSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
  {
    this = (WarBoardSimplePopupElementServant_o *)v4->fields.supportSprite;
    if ( !this )
      goto LABEL_189;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_IsNpc(v3, 0LL);
    if ( !gameObject )
      goto LABEL_189;
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)this & 1, 0LL);
  }
  RoleTypeLabel = (UnityEngine_Object_o *)v4->fields.RoleTypeLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(RoleTypeLabel, 0LL, 0LL) )
  {
    v106 = v3->fields._battleServant_k__BackingField;
    if ( v106 )
    {
      if ( v106->fields.isEnemy && v3->fields._roleType_k__BackingField == 1 )
      {
        this = (WarBoardSimplePopupElementServant_o *)v4->fields.RoleTypeLabel;
        if ( !this )
          goto LABEL_189;
        this = (WarBoardSimplePopupElementServant_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)this,
                                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !this )
          goto LABEL_189;
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19520/*"icon_strong_enemy"*/, 0LL);
        this = (WarBoardSimplePopupElementServant_o *)v4->fields.RoleTypeLabel;
        if ( !this )
          goto LABEL_189;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
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
  WarBoardSimplePopupElementServant_o *v8; // x23
  unsigned __int64 v9; // x24
  struct UIWidget_o **p_breakPointParent; // x19
  unsigned __int64 max_length; // x9
  struct BattleServantSkillIConComponent_array *v12; // x8
  int32_t v13; // w25
  BattleServantSkillIConComponent_o *v14; // x26
  BattleSkillInfoData_o *v15; // x27
  bool canUseSkill; // w28
  __int64 v17; // x0

  if ( !data
    || (v5 = this,
        ActiveSkillInfos = BattleServantData__getActiveSkillInfos(data, 0LL),
        this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getSkillSealSelect(data, 0LL),
        (skillIconList = v5->fields.skillIconList) == 0LL) )
  {
LABEL_22:
    sub_B52A5C(this, data);
  }
  v8 = this;
  v9 = 0LL;
  p_breakPointParent = &this->fields.breakPointParent;
  while ( 1 )
  {
    max_length = skillIconList->max_length;
    if ( (__int64)v9 >= (int)max_length )
      break;
    if ( !ActiveSkillInfos )
      goto LABEL_22;
    if ( (__int64)v9 < (int)ActiveSkillInfos->max_length && isPlayerGroup )
    {
      this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getSkillSealTurn(data, 0LL);
      if ( !v8 )
        goto LABEL_22;
      if ( v9 >= LODWORD(v8->fields.breakPointPrefab) )
      {
LABEL_24:
        v17 = sub_B52A88(this);
        sub_B52A28(v17, 0LL);
      }
      if ( *((_BYTE *)p_breakPointParent + v9) )
        this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getSkillSealSelectTurn(data, v9, 0LL);
      v12 = v5->fields.skillIconList;
      v13 = (int)this;
      if ( !v12 )
        goto LABEL_22;
      if ( v9 >= v12->max_length )
        goto LABEL_24;
      if ( v9 >= ActiveSkillInfos->max_length )
        goto LABEL_24;
      v14 = v12->m_Items[v9];
      v15 = ActiveSkillInfos->m_Items[v9];
      canUseSkill = BattleServantData__canUseSkill(data, v9, 0LL);
      this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getNotActTurn(data, 0LL);
      if ( v9 >= LODWORD(v8->fields.breakPointPrefab) )
        goto LABEL_24;
      if ( !v14 )
        goto LABEL_22;
      BattleServantSkillIConComponent__SetSkillInfo(
        v14,
        v15,
        canUseSkill,
        v13,
        (int32_t)this,
        *((_BYTE *)p_breakPointParent + v9),
        0LL);
    }
    else
    {
      if ( v9 >= max_length )
        goto LABEL_24;
      this = (WarBoardSimplePopupElementServant_o *)skillIconList->m_Items[v9];
      if ( !this )
        goto LABEL_22;
      BattleServantSkillIConComponent__setNoSkill((BattleServantSkillIConComponent_o *)this, 0, 0LL);
    }
    skillIconList = v5->fields.skillIconList;
    ++v9;
    if ( !skillIconList )
      goto LABEL_22;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSimplePopupElementServant__ShowEquipStatus(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x20
  WarBoardPieceData_o *pieceData; // x21
  WarBoardManager_o *v6; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  int v9; // s0

  if ( (byte_42B2231 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_42B2231 = 1;
  }
  if ( this->fields.pieceData )
  {
    v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
      sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
    v4 = **(_QWORD **)(v3 + 192);
    if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
      sub_AEB684(v4);
    pieceData = this->fields.pieceData;
    v6 = **(WarBoardManager_o ***)(v4 + 184);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform || (*(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_position(transform, 0LL), !v6) )
      sub_B52A5C(transform, v8);
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

  if ( (byte_42B222D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B222D = 1;
  }
  hpValueLabel = (UnityEngine_Object_o *)this->fields.hpValueLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(hpValueLabel, 0LL, 0LL) )
  {
    v5 = this->fields.hpValueLabel;
    if ( !v5 )
      sub_B52A5C(0LL, v4);
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
  __int64 v10; // x0

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
    if ( (int)v8->max_length >= 3 )
    {
      this = (WarBoardSimplePopupElementServant_o *)v8->m_Items[2];
      if ( !this )
        goto LABEL_26;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
      if ( !this )
        goto LABEL_26;
      if ( progress > 2.0 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v9 = v5->fields.npBars;
        if ( !v9 )
          goto LABEL_26;
        if ( v9->max_length > 2 )
        {
          this = (WarBoardSimplePopupElementServant_o *)v9->m_Items[2];
          if ( this )
          {
            UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress + -2.0, 0LL);
            return;
          }
LABEL_26:
          sub_B52A5C(this, method);
        }
LABEL_27:
        v10 = sub_B52A88(this);
        sub_B52A28(v10, 0LL);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
  }
}


void __fastcall WarBoardSimplePopupElementServant__UpdateUiBrightnessByPieceStatus(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  WarBoardSimplePopupElementServant___c__DisplayClass55_0_o *v3; // x20
  __int64 v4; // x1
  WarBoardPieceData_o *pieceData; // x0
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundActionCount; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v7; // x22
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundFaceIcon; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x21

  if ( (byte_42B222C & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_UIWidget___ctor__);
    sub_B52984(&System_Action_UIWidget__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_UIWidget___);
    sub_B52984(&Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__0__);
    sub_B52984(&Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__1__);
    sub_B52984(&WarBoardSimplePopupElementServant___c__DisplayClass55_0_TypeInfo);
    byte_42B222C = 1;
  }
  v3 = (WarBoardSimplePopupElementServant___c__DisplayClass55_0_o *)sub_B52A54(WarBoardSimplePopupElementServant___c__DisplayClass55_0_TypeInfo);
  WarBoardSimplePopupElementServant___c__DisplayClass55_0___ctor(v3, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData || (pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasIconDarkenBuff(pieceData, 0LL), !v3) )
    sub_B52A5C(pieceData, v4);
  v3->fields.hasIconDarkenBuff = (unsigned __int8)pieceData & 1;
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v7 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_UIWidget__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v7,
      (Il2CppObject *)v3,
      Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__0__,
      (const MethodInfo_2627780 *)Method_System_Action_UIWidget___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v7,
      (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_UIWidget___);
  }
  turnDarkUiWidgetsAroundFaceIcon = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundFaceIcon;
  if ( turnDarkUiWidgetsAroundFaceIcon )
  {
    v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_UIWidget__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v9,
      (Il2CppObject *)v3,
      Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__1__,
      (const MethodInfo_2627780 *)Method_System_Action_UIWidget___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      turnDarkUiWidgetsAroundFaceIcon,
      (System_Action_T__o *)v9,
      (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_UIWidget___);
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
  __int64 v4; // x0
  __int64 v5; // x1
  int v6; // s0

  if ( !this->fields.hasIconDarkenBuff )
  {
    *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_white(0LL);
    if ( x )
      goto LABEL_3;
LABEL_5:
    sub_B52A5C(v4, v5);
  }
  *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_gray(0LL);
  if ( !x )
    goto LABEL_5;
LABEL_3:
  UIWidget__set_color(x, *(UnityEngine_Color_o *)&v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSimplePopupElementServant___c__DisplayClass55_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardSimplePopupElementServant___c__DisplayClass55_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  int v6; // s0

  if ( !this->fields.hasIconDarkenBuff )
  {
    *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_white(0LL);
    if ( x )
      goto LABEL_3;
LABEL_5:
    sub_B52A5C(v4, v5);
  }
  *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_gray(0LL);
  if ( !x )
    goto LABEL_5;
LABEL_3:
  UIWidget__set_color(x, *(UnityEngine_Color_o *)&v6, 0LL);
}