void __fastcall WarBoardSimplePopupElementServant___ctor(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  this->fields.servantNameLabelWidth = 180;
  this->fields.HpValueLabelMaxWidth = 140;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_3134090;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_3137720;
  this->fields.positionLevelNpc.fields.z = 0.0;
  *(_OWORD *)&this->fields.positionActionPointDefault.fields.x = xmmword_3134090;
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
  WebViewManager_o *Instance; // x0

  if ( (byte_40FBAC4 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FBAC4 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  WarBoardManager__ShowServantDetailPopup((WarBoardManager_o *)Instance, this->fields.pieceData, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSimplePopupElementServant__SetAtkLabel(
        WarBoardSimplePopupElementServant_o *this,
        int32_t atk,
        bool isPlayerGroup,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *atkValueLabel; // x19
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FBAC0 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&atk);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_15221/*"WARBOARD_SERVANT_INFO_ENEMY_ATK"*/, v8);
    sub_B16FFC(&StringLiteral_23395/*"{0:#,0}"*/, v9);
    byte_40FBAC0 = 1;
  }
  atkValueLabel = this->fields.atkValueLabel;
  if ( isPlayerGroup )
  {
    v14 = atk;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
    v12 = System_String__Format((System_String_o *)StringLiteral_23395/*"{0:#,0}"*/, v11, 0LL);
    if ( atkValueLabel )
    {
      UILabel__set_text(atkValueLabel, v12, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_15221/*"WARBOARD_SERVANT_INFO_ENEMY_ATK"*/, 0LL);
  if ( !atkValueLabel )
    goto LABEL_11;
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
  __int64 v12; // x0
  UnityEngine_Component_o *breakPointParent; // x8
  _DWORD *v14; // x22
  int32_t v15; // w26
  float v16; // s8
  float v17; // s9
  bool v18; // w23
  struct UnityEngine_GameObject_o *breakPointPrefab; // x24
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x25
  WarBoardBreakPointComponent_o *Component_srcLineSprite; // x24
  UnityEngine_Transform_o *v24; // x0
  struct UIWidget_o *v25; // x8
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int32_t v34; // w27
  _DWORD *v35; // x25
  BattleServantConfConponent_o *v36; // x25
  float maxSpacing; // s0
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBAC2 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, *(_QWORD *)&breakPoint);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&WarBoardBreakPointComponent___TypeInfo, v11);
    byte_40FBAC2 = 1;
  }
  v12 = sub_B17014(WarBoardBreakPointComponent___TypeInfo, (unsigned int)breakPointMax, *(_QWORD *)&breakPointMax);
  breakPointParent = (UnityEngine_Component_o *)this->fields.breakPointParent;
  if ( !breakPointParent )
    goto LABEL_22;
  if ( breakPointMax >= 1 )
  {
    v14 = (_DWORD *)v12;
    v15 = 0;
    v16 = 0.0;
    v17 = (float)breakPointParent[6].fields.m_CachedPtr / (float)breakPointMax;
    v18 = isEnemyServant;
    do
    {
      breakPointPrefab = this->fields.breakPointPrefab;
      transform = UnityEngine_Component__get_transform(breakPointParent, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v21 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                          (UILabel_o *)breakPointPrefab,
                                          transform,
                                          (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
      if ( !v21 )
        break;
      v22 = v21;
      UnityEngine_GameObject__SetActive(v21, 1, 0LL);
      Component_srcLineSprite = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   v22,
                                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      v24 = UnityEngine_GameObject__get_transform(v22, 0LL);
      if ( !v24 )
        break;
      v38.fields.y = 0.0;
      v38.fields.z = 0.0;
      v38.fields.x = v16;
      UnityEngine_Transform__set_localPosition(v24, v38, 0LL);
      v25 = this->fields.breakPointParent;
      if ( !v25 )
        break;
      if ( !Component_srcLineSprite )
        break;
      WarBoardBreakPointComponent__Initialize(
        Component_srcLineSprite,
        v25->fields.mDepth + 2 * (~v15 + breakPointMax),
        v15 + 1,
        0,
        v18,
        0,
        0LL);
      if ( !v14 )
        break;
      v26 = sub_B170BC(Component_srcLineSprite, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
      if ( !v26 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
      v34 = v15;
      if ( (unsigned int)v15 >= v14[6]
        || (v35 = &v14[2 * v15],
            *((_QWORD *)v35 + 4) = Component_srcLineSprite,
            v36 = (BattleServantConfConponent_o *)(v35 + 8),
            sub_B16F98(v36, (System_Int32_array **)Component_srcLineSprite, v28, v29, v30, v31, v32, v33),
            (unsigned int)v15 >= v14[6]) )
      {
        sub_B17100(v26, v27, v28);
        sub_B170A0();
      }
      if ( !v36->klass )
        break;
      WarBoardBreakPointComponent__SetActive((WarBoardBreakPointComponent_o *)v36->klass, v15++ < breakPoint, 0, 0LL);
      if ( v34 + 1 >= breakPointMax )
        return;
      maxSpacing = Component_srcLineSprite->fields.maxSpacing;
      breakPointParent = (UnityEngine_Component_o *)this->fields.breakPointParent;
      if ( maxSpacing >= v17 )
        maxSpacing = v17;
      v16 = v16 + maxSpacing;
    }
    while ( breakPointParent );
LABEL_22:
    sub_B170D4();
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

  if ( (byte_40FBAC1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, buffData);
    byte_40FBAC1 = 1;
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
      sub_B170D4();
    BattleServantShowBuffComponent__setBuffList(v7, ShowServantParam, 0LL);
  }
}


void __fastcall WarBoardSimplePopupElementServant__SetUIPosition(
        WarBoardSimplePopupElementServant_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  UnityEngine_Component_o *hpLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct UnityEngine_Vector3_array *posHpLabel; // x8
  UnityEngine_Component_o *hpValueLabel; // x0
  struct UnityEngine_Vector3_array *posHpValueLabel; // x8
  UnityEngine_Component_o *atkLabel; // x0
  struct UnityEngine_Vector3_array *posAtkLabel; // x8
  UnityEngine_Component_o *atkValueLabel; // x0
  struct UnityEngine_Vector3_array *posAtkValueLabel; // x8
  UnityEngine_Component_o *showBuffComponent; // x0
  struct UnityEngine_Vector3_array *posBuffList; // x8
  struct BattleServantSkillIConComponent_array *skillIconList; // x8
  UnityEngine_Component_o *v19; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  struct UnityEngine_Vector3_array *posSkillRoot; // x8

  hpLabel = (UnityEngine_Component_o *)this->fields.hpLabel;
  if ( !hpLabel )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(hpLabel, 0LL);
  posHpLabel = this->fields.posHpLabel;
  if ( !posHpLabel )
    goto LABEL_24;
  if ( posHpLabel->max_length <= dispType )
    goto LABEL_25;
  GameObjectExtensions__SetLocalPosition(
    gameObject,
    *(UnityEngine_Vector3_o *)&posHpLabel->m_Items[dispType].fields.y,
    0LL);
  hpValueLabel = (UnityEngine_Component_o *)this->fields.hpValueLabel;
  if ( !hpValueLabel )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(hpValueLabel, 0LL);
  posHpValueLabel = this->fields.posHpValueLabel;
  if ( !posHpValueLabel )
    goto LABEL_24;
  if ( posHpValueLabel->max_length <= dispType )
    goto LABEL_25;
  GameObjectExtensions__SetLocalPosition(
    gameObject,
    *(UnityEngine_Vector3_o *)&posHpValueLabel->m_Items[dispType].fields.y,
    0LL);
  atkLabel = (UnityEngine_Component_o *)this->fields.atkLabel;
  if ( !atkLabel )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(atkLabel, 0LL);
  posAtkLabel = this->fields.posAtkLabel;
  if ( !posAtkLabel )
    goto LABEL_24;
  if ( posAtkLabel->max_length <= dispType )
    goto LABEL_25;
  GameObjectExtensions__SetLocalPosition(
    gameObject,
    *(UnityEngine_Vector3_o *)&posAtkLabel->m_Items[dispType].fields.y,
    0LL);
  atkValueLabel = (UnityEngine_Component_o *)this->fields.atkValueLabel;
  if ( !atkValueLabel )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(atkValueLabel, 0LL);
  posAtkValueLabel = this->fields.posAtkValueLabel;
  if ( !posAtkValueLabel )
    goto LABEL_24;
  if ( posAtkValueLabel->max_length <= dispType )
    goto LABEL_25;
  GameObjectExtensions__SetLocalPosition(
    gameObject,
    *(UnityEngine_Vector3_o *)&posAtkValueLabel->m_Items[dispType].fields.y,
    0LL);
  showBuffComponent = (UnityEngine_Component_o *)this->fields.showBuffComponent;
  if ( !showBuffComponent )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(showBuffComponent, 0LL);
  posBuffList = this->fields.posBuffList;
  if ( !posBuffList )
    goto LABEL_24;
  if ( posBuffList->max_length <= dispType )
    goto LABEL_25;
  GameObjectExtensions__SetLocalPosition(
    gameObject,
    *(UnityEngine_Vector3_o *)&posBuffList->m_Items[dispType].fields.y,
    0LL);
  skillIconList = this->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_24;
  if ( !skillIconList->max_length )
    goto LABEL_25;
  v19 = (UnityEngine_Component_o *)skillIconList->m_Items[0];
  if ( !v19
    || (transform = UnityEngine_Component__get_transform(v19, 0LL)) == 0LL
    || (parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(parent, 0LL),
        (posSkillRoot = this->fields.posSkillRoot) == 0LL) )
  {
LABEL_24:
    sub_B170D4();
  }
  if ( posSkillRoot->max_length <= dispType )
  {
LABEL_25:
    sub_B17100(gameObject, v7, v8);
    sub_B170A0();
  }
  GameObjectExtensions__SetLocalPosition(
    gameObject,
    *(UnityEngine_Vector3_o *)&posSkillRoot->m_Items[dispType].fields.y,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSimplePopupElementServant__SetUp(
        WarBoardSimplePopupElementServant_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
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
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  BattleServantData_o *battleServant_k__BackingField; // x21
  UILabel_o *atkLabel; // x22
  System_String_o *v33; // x0
  UILabel_o *hpLabel; // x22
  System_String_o *v35; // x0
  UILabel_o *detailButtonLabel; // x22
  System_String_o *v37; // x0
  UILabel_o *servantNameLabel; // x0
  UILabel_o *v39; // x22
  System_String_o *ServantShortName; // x0
  UILabel_o *v41; // x0
  UnityEngine_Object_o *pieceStatusLabelComponent; // x22
  const MethodInfo *v43; // x2
  WarBoardPieceStatusLabel_o *v44; // x0
  UnityEngine_Object_o *servantLevel; // x22
  UILabel_o *v46; // x22
  System_String_o *v47; // x23
  Il2CppObject *v48; // x0
  System_String_o *v49; // x0
  UnityEngine_Component_o *v50; // x0
  UnityEngine_Transform_o *transform; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  bool IsNpc; // w0
  bool v56; // w22
  UILabel_o *hpValueLabel; // x22
  Il2CppObject *v58; // x23
  Il2CppObject *v59; // x0
  System_String_o *v60; // x0
  int32_t AttackValue; // w22
  bool isPlayerGroup; // w0
  const MethodInfo *v63; // x3
  bool v64; // w0
  const MethodInfo *v65; // x3
  BattleBuffData_o *BuffData; // x0
  const MethodInfo *v67; // x2
  UnityEngine_GameObject_o *actionCountObj; // x21
  bool v69; // w1
  WebViewManager_o *Instance; // x0
  UILabel_o *actValueLabel; // x21
  System_String_o *v72; // x0
  UISprite_o *frameSprite; // x21
  Il2CppObject *v74; // x0
  System_String_o *v75; // x0
  UnityEngine_Object_o *actionPountObj; // x21
  UnityEngine_Object_o *actionPointValueLabel; // x21
  UnityEngine_GameObject_o *v78; // x21
  WebViewManager_o *v79; // x0
  bool v80; // w1
  struct WarBoardCost_o *Cost_k__BackingField; // x8
  UILabel_o *v82; // x21
  System_String_o *v83; // x0
  UISprite_o *v84; // x21
  Il2CppObject *v85; // x0
  System_String_o *v86; // x0
  UnityEngine_GameObject_o *actionPountLabelObj; // x0
  UILabel_o *actionPointLabel; // x21
  System_String_o *v89; // x0
  WarBoardCost_o *v90; // x0
  int32_t Move; // w0
  int32_t v92; // w21
  int32_t Attack; // w0
  UILabel_o *currentActionPointDispLabel; // x23
  int v95; // w22
  System_String_o *v96; // x0
  UILabel_o *costDispLabel; // x23
  System_String_o *v98; // x24
  Il2CppObject *v99; // x21
  Il2CppObject *v100; // x0
  System_String_o *v101; // x0
  bool HasCost; // w0
  const MethodInfo *v103; // x2
  UnityEngine_GameObject_o *v104; // x0
  UnityEngine_GameObject_o *v105; // x21
  bool activeSelf; // w0
  __int64 v107; // x8
  __int64 v108; // x9
  __int64 v109; // x10
  int32_t npcImageSvtId_k__BackingField; // w8
  int npcDispLimitCount_k__BackingField; // w22
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t ServantImageLimitSealAfter; // w21
  UISprite_o *servantIcon; // x23
  UnityEngine_Component_o **p_servantIcon; // x28
  int32_t v116; // w24
  bool v117; // w21
  WebViewManager_o *v118; // x0
  int32_t webView; // w21
  Il2CppObject *v120; // x23
  Il2CppObject *v121; // x0
  System_String_o *v122; // x0
  UISprite_o *enemyIcon; // x23
  System_String_o *v124; // x22
  bool v125; // w0
  UISprite_o *v126; // x22
  WarBoardPieceData_o *v127; // x0
  UISpriteAltMat_o *v128; // x1
  System_String_o *v129; // x23
  UISprite_o *enemyIconBg; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v132; // x0
  UnityEngine_GameObject_o *v133; // x0
  bool v134; // w21
  UnityEngine_Component_o *v135; // x0
  UnityEngine_GameObject_o *v136; // x0
  UnityEngine_Object_o *equipIcon; // x21
  UnityEngine_Object_o *equipIconOnFace; // x21
  UnityEngine_GameObject_o *v139; // x0
  int32_t *p_iconEquipId_k__BackingField; // x23
  UISprite_o *v141; // x21
  int32_t v142; // w22
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v144; // x0
  int32_t targetId; // w8
  bool v146; // w21
  UnityEngine_Component_o *v147; // x0
  UnityEngine_GameObject_o *v148; // x0
  UISprite_o *flameInClassIcon; // x23
  int32_t iconFrameType_k__BackingField; // w21
  int32_t iconClassId_k__BackingField; // w22
  int32_t breakPoint_k__BackingField; // w21
  int32_t breakPointMax_k__BackingField; // w22
  bool isEnemyServant; // w0
  const MethodInfo *v155; // x4
  UISprite_o *hpBar; // x0
  UIBasicSprite_o *v157; // x21
  float CurrentHpProgress; // s0
  float CurrentNpProgress; // s0
  const MethodInfo *v160; // x1
  UnityEngine_Object_o *critecalStarsRoot; // x21
  bool v162; // w0
  UILabel_o *critecalStarsLabel; // x21
  System_String_o *v164; // x0
  UnityEngine_Object_o *supportSprite; // x21
  UnityEngine_Component_o *v166; // x0
  UnityEngine_GameObject_o *v167; // x21
  bool v168; // w0
  UnityEngine_Object_o *RoleTypeLabel; // x21
  struct BattleServantData_o *v170; // x8
  UnityEngine_GameObject_o *v171; // x0
  UISprite_o *Component_srcLineSprite; // x0
  UnityEngine_GameObject_o *v173; // x0
  int v174; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t MaxHp; // [xsp+8h] [xbp-68h] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  __int64 v178; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v179; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBABD & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, pieceData);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_B16FFC(&int_TypeInfo, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_B16FFC(&StringLiteral_15190/*"WARBOARD_INFO_POPUP_SVT_HP"*/, v14);
    sub_B16FFC(&StringLiteral_19300/*"icon_strong_enemy"*/, v15);
    sub_B16FFC(&StringLiteral_21552/*"questinfo_enemyface_bg"*/, v16);
    sub_B16FFC(&StringLiteral_19111/*"hp_gauge_boss"*/, v17);
    sub_B16FFC(&StringLiteral_21890/*"servant_base_{0}"*/, v18);
    sub_B16FFC(&StringLiteral_15189/*"WARBOARD_INFO_POPUP_SVT_DETAIL_BUTTON"*/, v19);
    sub_B16FFC(&StringLiteral_15188/*"WARBOARD_INFO_POPUP_SVT_ATK"*/, v20);
    sub_B16FFC(&StringLiteral_15186/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT"*/, v21);
    sub_B16FFC(&StringLiteral_15191/*"WARBOARD_INFO_POPUP_SVT_LV"*/, v22);
    sub_B16FFC(&StringLiteral_23397/*"{0:#,0} / {1:#,0}"*/, v23);
    sub_B16FFC(&StringLiteral_15187/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT_COST"*/, v24);
    byte_40FBABD = 1;
  }
  entity = 0LL;
  v178 = 0LL;
  if ( !pieceData )
    goto LABEL_189;
  if ( WarBoardPieceData__get_isMaster(pieceData, 0LL) || !pieceData->fields._battleServant_k__BackingField )
    return;
  this->fields.pieceData = pieceData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.pieceData,
    (System_Int32_array **)pieceData,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  battleServant_k__BackingField = pieceData->fields._battleServant_k__BackingField;
  atkLabel = this->fields.atkLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_15188/*"WARBOARD_INFO_POPUP_SVT_ATK"*/, 0LL);
  if ( !atkLabel )
    goto LABEL_189;
  UILabel__set_text(atkLabel, v33, 0LL);
  hpLabel = this->fields.hpLabel;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_15190/*"WARBOARD_INFO_POPUP_SVT_HP"*/, 0LL);
  if ( !hpLabel )
    goto LABEL_189;
  UILabel__set_text(hpLabel, v35, 0LL);
  detailButtonLabel = this->fields.detailButtonLabel;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_15189/*"WARBOARD_INFO_POPUP_SVT_DETAIL_BUTTON"*/, 0LL);
  if ( !detailButtonLabel )
    goto LABEL_189;
  UILabel__set_text(detailButtonLabel, v37, 0LL);
  servantNameLabel = this->fields.servantNameLabel;
  if ( !servantNameLabel )
    goto LABEL_189;
  UILabel__SetDefaultFont(servantNameLabel, 0LL);
  if ( !battleServant_k__BackingField )
    goto LABEL_189;
  v39 = this->fields.servantNameLabel;
  ServantShortName = BattleServantData__getServantShortName(battleServant_k__BackingField, 0LL);
  if ( !v39 )
    goto LABEL_189;
  UILabel__set_text(v39, ServantShortName, 0LL);
  v41 = this->fields.servantNameLabel;
  if ( !v41 )
    goto LABEL_189;
  UILabel__SetCondensedScale(v41, this->fields.servantNameLabelWidth, 0LL);
  pieceStatusLabelComponent = (UnityEngine_Object_o *)this->fields.pieceStatusLabelComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pieceStatusLabelComponent, 0LL, 0LL) )
  {
    v44 = this->fields.pieceStatusLabelComponent;
    if ( !v44 )
      goto LABEL_189;
    WarBoardPieceStatusLabel__SetupLabel(v44, pieceData, v43);
  }
  ((void (__fastcall *)(WarBoardSimplePopupElementServant_o *, void *))this->klass->vtable._4_UpdateUiBrightnessByPieceStatus.method)(
    this,
    this->klass[1]._1.image);
  servantLevel = (UnityEngine_Object_o *)this->fields.servantLevel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(servantLevel, 0LL, 0LL) )
  {
    v46 = this->fields.servantLevel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_15191/*"WARBOARD_INFO_POPUP_SVT_LV"*/, 0LL);
    iconLevel_k__BackingField = pieceData->fields._iconLevel_k__BackingField;
    v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
    v49 = System_String__Format(v47, v48, 0LL);
    if ( !v46 )
      goto LABEL_189;
    UILabel__set_text(v46, v49, 0LL);
    if ( WarBoardPieceData__get_isEnemyServant(pieceData, 0LL) && pieceData->fields._roleType_k__BackingField == 1 )
    {
      v50 = (UnityEngine_Component_o *)this->fields.servantLevel;
      if ( !v50 )
        goto LABEL_189;
      transform = UnityEngine_Component__get_transform(v50, 0LL);
      if ( !transform )
        goto LABEL_189;
      x = this->fields.positionLevelDanger.fields.x;
      y = this->fields.positionLevelDanger.fields.y;
      z = this->fields.positionLevelDanger.fields.z;
    }
    else
    {
      IsNpc = WarBoardPieceData__get_IsNpc(pieceData, 0LL);
      if ( !this->fields.servantLevel )
        goto LABEL_189;
      v56 = IsNpc;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.servantLevel, 0LL);
      if ( v56 )
      {
        if ( !transform )
          goto LABEL_189;
        x = this->fields.positionLevelNpc.fields.x;
        y = this->fields.positionLevelNpc.fields.y;
        z = this->fields.positionLevelNpc.fields.z;
      }
      else
      {
        if ( !transform )
          goto LABEL_189;
        x = this->fields.positionLevel.fields.x;
        y = this->fields.positionLevel.fields.y;
        z = this->fields.positionLevel.fields.z;
      }
    }
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&x, 0LL);
  }
  hpValueLabel = this->fields.hpValueLabel;
  iconLevel_k__BackingField = WarBoardPieceData__get_CurrentHp(pieceData, 0LL);
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
  MaxHp = WarBoardPieceData__get_MaxHp(pieceData, 0LL);
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp);
  v60 = System_String__Format_43739268((System_String_o *)StringLiteral_23397/*"{0:#,0} / {1:#,0}"*/, v58, v59, 0LL);
  if ( !hpValueLabel )
    goto LABEL_189;
  UILabel__set_text(hpValueLabel, v60, 0LL);
  AttackValue = WarBoardPieceData__get_AttackValue(pieceData, 0LL);
  isPlayerGroup = WarBoardPieceData__get_isPlayerGroup(pieceData, 0LL);
  WarBoardSimplePopupElementServant__SetAtkLabel(this, AttackValue, isPlayerGroup, v63);
  v64 = WarBoardPieceData__get_isPlayerGroup(pieceData, 0LL);
  WarBoardSimplePopupElementServant__SetUpSkillIcon(this, battleServant_k__BackingField, v64, v65);
  BuffData = WarBoardPieceData__get_BuffData(pieceData, 0LL);
  WarBoardSimplePopupElementServant__SetBuffIcon(this, BuffData, v67);
  actionCountObj = this->fields.actionCountObj;
  if ( WarBoardPieceData__get_isInfinitelyActable(pieceData, 0LL) )
  {
    v69 = 0;
    if ( !actionCountObj )
      goto LABEL_189;
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_189;
    v69 = *(_DWORD *)&Instance[4].fields.isButtonEnable == 2;
    if ( !actionCountObj )
      goto LABEL_189;
  }
  UnityEngine_GameObject__SetActive(actionCountObj, v69, 0LL);
  actValueLabel = this->fields.actValueLabel;
  LODWORD(v178) = pieceData->fields._currentActionCount_k__BackingField;
  v72 = System_Int32__ToString((int32_t)&v178, 0LL);
  if ( !actValueLabel )
    goto LABEL_189;
  UILabel__set_text(actValueLabel, v72, 0LL);
  frameSprite = this->fields.frameSprite;
  iconLevel_k__BackingField = pieceData->fields._forceId_k__BackingField + 1;
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
  v75 = System_String__Format((System_String_o *)StringLiteral_21890/*"servant_base_{0}"*/, v74, 0LL);
  if ( !frameSprite )
    goto LABEL_189;
  UISprite__set_spriteName(frameSprite, v75, 0LL);
  actionPountObj = (UnityEngine_Object_o *)this->fields.actionPountObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(actionPountObj, 0LL, 0LL) )
  {
    actionPointValueLabel = (UnityEngine_Object_o *)this->fields.actionPointValueLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(actionPointValueLabel, 0LL, 0LL) )
    {
      v78 = this->fields.actionPountObj;
      if ( WarBoardPieceData__get_HasCost(pieceData, 0LL) )
      {
        v79 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !v79 )
          goto LABEL_189;
        v80 = *(_DWORD *)&v79[4].fields.isButtonEnable == 2;
        if ( !v78 )
          goto LABEL_189;
      }
      else
      {
        v80 = 0;
        if ( !v78 )
          goto LABEL_189;
      }
      UnityEngine_GameObject__SetActive(v78, v80, 0LL);
      if ( WarBoardPieceData__get_HasCost(pieceData, 0LL) )
      {
        Cost_k__BackingField = pieceData->fields._Cost_k__BackingField;
        if ( !Cost_k__BackingField )
          goto LABEL_189;
        v82 = this->fields.actionPointValueLabel;
        LODWORD(v178) = Cost_k__BackingField->fields._CurrentActionPoint_k__BackingField;
        v83 = System_Int32__ToString((int32_t)&v178, 0LL);
        if ( !v82 )
          goto LABEL_189;
        UILabel__set_text(v82, v83, 0LL);
        v84 = this->fields.frameSprite;
        iconLevel_k__BackingField = pieceData->fields._forceId_k__BackingField + 1;
        v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
        v86 = System_String__Format((System_String_o *)StringLiteral_21890/*"servant_base_{0}"*/, v85, 0LL);
        if ( !v84 )
          goto LABEL_189;
        UISprite__set_spriteName(v84, v86, 0LL);
        actionPountLabelObj = this->fields.actionPountLabelObj;
        if ( !actionPountLabelObj )
          goto LABEL_189;
        UnityEngine_GameObject__SetActive(actionPountLabelObj, 1, 0LL);
        actionPointLabel = this->fields.actionPointLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v89 = LocalizationManager__Get((System_String_o *)StringLiteral_15186/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT"*/, 0LL);
        if ( !actionPointLabel )
          goto LABEL_189;
        UILabel__set_text(actionPointLabel, v89, 0LL);
        v90 = pieceData->fields._Cost_k__BackingField;
        if ( !v90 )
          goto LABEL_189;
        Move = WarBoardCost__get_Move(v90, 0LL);
        if ( !pieceData->fields._Cost_k__BackingField )
          goto LABEL_189;
        v92 = Move;
        Attack = WarBoardCost__get_Attack(pieceData->fields._Cost_k__BackingField, 0LL);
        if ( !pieceData->fields._Cost_k__BackingField )
          goto LABEL_189;
        currentActionPointDispLabel = this->fields.currentActionPointDispLabel;
        v95 = Attack;
        v96 = WarBoardCost__CurrentAndMaxPointToString(pieceData->fields._Cost_k__BackingField, 0LL);
        if ( !currentActionPointDispLabel )
          goto LABEL_189;
        UILabel__set_text(currentActionPointDispLabel, v96, 0LL);
        costDispLabel = this->fields.costDispLabel;
        v98 = LocalizationManager__Get((System_String_o *)StringLiteral_15187/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT_COST"*/, 0LL);
        MaxHp = v92;
        v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp);
        v174 = v95;
        v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v174);
        v101 = System_String__Format_43739268(v98, v99, v100, 0LL);
        if ( !costDispLabel )
          goto LABEL_189;
        UILabel__set_text(costDispLabel, v101, 0LL);
      }
      HasCost = WarBoardPieceData__get_HasCost(pieceData, 0LL);
      WarBoardSimplePopupElementServant__SetUIPosition(this, HasCost, v103);
      v104 = this->fields.actionCountObj;
      if ( !v104 )
        goto LABEL_189;
      v105 = this->fields.actionPountObj;
      activeSelf = UnityEngine_GameObject__get_activeSelf(v104, 0LL);
      v107 = 328LL;
      if ( activeSelf )
        v107 = 340LL;
      if ( activeSelf )
        v108 = 344LL;
      else
        v108 = 332LL;
      if ( activeSelf )
        v109 = 348LL;
      else
        v109 = 336LL;
      v179.fields.y = *(float *)((char *)&this->klass + v108);
      v179.fields.x = *(float *)((char *)&this->klass + v107);
      v179.fields.z = *(float *)((char *)&this->klass + v109);
      GameObjectExtensions__SetLocalPosition(v105, v179, 0LL);
    }
  }
  npcImageSvtId_k__BackingField = pieceData->fields._npcImageSvtId_k__BackingField;
  if ( npcImageSvtId_k__BackingField <= 0 )
    npcImageSvtId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  HIDWORD(v178) = npcImageSvtId_k__BackingField;
  npcDispLimitCount_k__BackingField = pieceData->fields._npcDispLimitCount_k__BackingField;
  if ( npcDispLimitCount_k__BackingField <= 0 )
    npcDispLimitCount_k__BackingField = pieceData->fields._iconLimitCount_k__BackingField;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_189;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 pieceData->fields._iconId_k__BackingField,
                                 npcDispLimitCount_k__BackingField,
                                 0LL);
  if ( !WarBoardPieceData__get_IsEnemyMonster(pieceData, 0LL) )
  {
    p_servantIcon = (UnityEngine_Component_o **)&this->fields.servantIcon;
    servantIcon = this->fields.servantIcon;
    v116 = HIDWORD(v178);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( AtlasManager__SetFaceImage(servantIcon, v116, ServantImageLimitSealAfter, 0LL) )
    {
      v117 = 1;
      goto LABEL_118;
    }
  }
  v118 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v118 )
    goto LABEL_189;
  webView = (int32_t)v118[3].fields.webView;
  iconLevel_k__BackingField = HIDWORD(v178);
  v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
  MaxHp = npcDispLimitCount_k__BackingField;
  v121 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp);
  v122 = System_String__Concat(v120, v121, 0LL);
  enemyIcon = (UISprite_o *)this->fields.enemyIcon;
  v124 = v122;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v125 = AtlasManager__SetEventUI_28584872(webView, enemyIcon, v124, 0LL);
  v126 = (UISprite_o *)this->fields.enemyIcon;
  if ( v125 )
  {
    v127 = pieceData;
    v128 = this->fields.enemyIcon;
  }
  else
  {
    v129 = System_Int32__ToString((int32_t)&v178 + 4, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( !AtlasManager__SetEventUI_28584872(webView, v126, v129, 0LL) )
      goto LABEL_114;
    v128 = this->fields.enemyIcon;
    v127 = pieceData;
  }
  WarBoardPieceData__ApplyDisplayType(v127, v128, 0LL);
LABEL_114:
  enemyIconBg = this->fields.enemyIconBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28584872(webView, enemyIconBg, (System_String_o *)StringLiteral_21552/*"questinfo_enemyface_bg"*/, 0LL);
  v117 = 0;
  p_servantIcon = (UnityEngine_Component_o **)&this->fields.servantIcon;
LABEL_118:
  if ( !*p_servantIcon )
    goto LABEL_189;
  gameObject = UnityEngine_Component__get_gameObject(*p_servantIcon, 0LL);
  if ( !gameObject )
    goto LABEL_189;
  UnityEngine_GameObject__SetActive(gameObject, v117, 0LL);
  v132 = (UnityEngine_Component_o *)this->fields.enemyIcon;
  if ( !v132 )
    goto LABEL_189;
  v133 = UnityEngine_Component__get_gameObject(v132, 0LL);
  if ( !v133 )
    goto LABEL_189;
  v134 = !v117;
  UnityEngine_GameObject__SetActive(v133, v134, 0LL);
  v135 = (UnityEngine_Component_o *)this->fields.enemyIconBg;
  if ( !v135 )
    goto LABEL_189;
  v136 = UnityEngine_Component__get_gameObject(v135, 0LL);
  if ( !v136 )
    goto LABEL_189;
  UnityEngine_GameObject__SetActive(v136, v134, 0LL);
  equipIcon = (UnityEngine_Object_o *)this->fields.equipIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipIcon, 0LL, 0LL) )
  {
    equipIconOnFace = (UnityEngine_Object_o *)this->fields.equipIconOnFace;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(equipIconOnFace, 0LL, 0LL) )
    {
      v139 = this->fields.equipIconOnFace;
      if ( !v139 )
        goto LABEL_189;
      p_iconEquipId_k__BackingField = &pieceData->fields._iconEquipId_k__BackingField;
      UnityEngine_GameObject__SetActive(v139, pieceData->fields._iconEquipId_k__BackingField > 0, 0LL);
    }
    else
    {
      p_iconEquipId_k__BackingField = &pieceData->fields._iconEquipId_k__BackingField;
    }
    v141 = this->fields.equipIcon;
    v142 = *p_iconEquipId_k__BackingField;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(v141, v142, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
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
      v144 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !v144 )
        goto LABEL_189;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v144,
              &entity,
              *p_iconEquipId_k__BackingField,
              (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        goto LABEL_150;
      if ( !entity )
        goto LABEL_189;
      targetId = entity->fields.targetId;
      if ( targetId >= 1 )
        v146 = pieceData->fields._equipLimitCount_k__BackingField >= targetId;
      else
LABEL_150:
        v146 = 0;
      v147 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( !v147 )
        goto LABEL_189;
      v148 = UnityEngine_Component__get_gameObject(v147, 0LL);
      if ( !v148 )
        goto LABEL_189;
      UnityEngine_GameObject__SetActive(v148, v146, 0LL);
    }
  }
  flameInClassIcon = this->fields.flameInClassIcon;
  iconClassId_k__BackingField = pieceData->fields._iconClassId_k__BackingField;
  iconFrameType_k__BackingField = pieceData->fields._iconFrameType_k__BackingField;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIcon(flameInClassIcon, iconClassId_k__BackingField, iconFrameType_k__BackingField, 0LL);
  breakPoint_k__BackingField = pieceData->fields._breakPoint_k__BackingField;
  breakPointMax_k__BackingField = pieceData->fields._breakPointMax_k__BackingField;
  isEnemyServant = WarBoardPieceData__get_isEnemyServant(pieceData, 0LL);
  WarBoardSimplePopupElementServant__SetBreakPoint(
    this,
    breakPoint_k__BackingField,
    breakPointMax_k__BackingField,
    isEnemyServant,
    v155);
  if ( WarBoardPieceData__get_isEnemyServant(pieceData, 0LL) )
  {
    hpBar = this->fields.hpBar;
    if ( !hpBar )
      goto LABEL_189;
    UISprite__set_spriteName(hpBar, (System_String_o *)StringLiteral_19111/*"hp_gauge_boss"*/, 0LL);
  }
  v157 = (UIBasicSprite_o *)this->fields.hpBar;
  CurrentHpProgress = WarBoardPieceData__get_CurrentHpProgress(pieceData, 0LL);
  if ( !v157 )
LABEL_189:
    sub_B170D4();
  UIBasicSprite__set_fillAmount(v157, CurrentHpProgress, 0LL);
  CurrentNpProgress = WarBoardPieceData__get_CurrentNpProgress(pieceData, 0LL);
  WarBoardSimplePopupElementServant__UpdateNpBars(this, CurrentNpProgress, v160);
  critecalStarsRoot = (UnityEngine_Object_o *)this->fields.critecalStarsRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(critecalStarsRoot, 0LL, 0LL) )
  {
    v162 = WarBoardPieceData__get_isPlayerGroup(pieceData, 0LL);
    if ( !this->fields.critecalStarsRoot )
      goto LABEL_189;
    if ( v162 )
    {
      UnityEngine_GameObject__SetActive(this->fields.critecalStarsRoot, 1, 0LL);
      critecalStarsLabel = this->fields.critecalStarsLabel;
      LODWORD(v178) = WarBoardPieceData__get_CriticalStars(pieceData, 0LL);
      v164 = System_Int32__ToString((int32_t)&v178, 0LL);
      if ( !critecalStarsLabel )
        goto LABEL_189;
      UILabel__set_text(critecalStarsLabel, v164, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(this->fields.critecalStarsRoot, 0, 0LL);
    }
  }
  supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
  {
    v166 = (UnityEngine_Component_o *)this->fields.supportSprite;
    if ( !v166 )
      goto LABEL_189;
    v167 = UnityEngine_Component__get_gameObject(v166, 0LL);
    v168 = WarBoardPieceData__get_IsNpc(pieceData, 0LL);
    if ( !v167 )
      goto LABEL_189;
    UnityEngine_GameObject__SetActive(v167, v168, 0LL);
  }
  RoleTypeLabel = (UnityEngine_Object_o *)this->fields.RoleTypeLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(RoleTypeLabel, 0LL, 0LL) )
  {
    v170 = pieceData->fields._battleServant_k__BackingField;
    if ( v170 )
    {
      if ( v170->fields.isEnemy && pieceData->fields._roleType_k__BackingField == 1 )
      {
        v171 = this->fields.RoleTypeLabel;
        if ( !v171 )
          goto LABEL_189;
        Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  v171,
                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !Component_srcLineSprite )
          goto LABEL_189;
        UISprite__set_spriteName(Component_srcLineSprite, (System_String_o *)StringLiteral_19300/*"icon_strong_enemy"*/, 0LL);
        v173 = this->fields.RoleTypeLabel;
        if ( !v173 )
          goto LABEL_189;
        UnityEngine_GameObject__SetActive(v173, 1, 0LL);
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
  BattleSkillInfoData_array *ActiveSkillInfos; // x22
  System_Boolean_array *SkillSealSelect; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct BattleServantSkillIConComponent_array *skillIconList; // x8
  System_Boolean_array *v11; // x23
  unsigned __int64 v12; // x24
  bool *v13; // x19
  unsigned __int64 max_length; // x9
  struct BattleServantSkillIConComponent_array *v15; // x8
  int32_t v16; // w25
  BattleServantSkillIConComponent_o *v17; // x26
  BattleSkillInfoData_o *v18; // x27
  bool canUseSkill; // w28
  BattleServantSkillIConComponent_o *v20; // x0

  if ( !data
    || (ActiveSkillInfos = BattleServantData__getActiveSkillInfos(data, 0LL),
        SkillSealSelect = BattleServantData__getSkillSealSelect(data, 0LL),
        (skillIconList = this->fields.skillIconList) == 0LL) )
  {
LABEL_22:
    sub_B170D4();
  }
  v11 = SkillSealSelect;
  v12 = 0LL;
  v13 = &SkillSealSelect->m_Items[4];
  while ( 1 )
  {
    max_length = skillIconList->max_length;
    if ( (__int64)v12 >= (int)max_length )
      break;
    if ( !ActiveSkillInfos )
      goto LABEL_22;
    if ( (__int64)v12 < (int)ActiveSkillInfos->max_length && isPlayerGroup )
    {
      SkillSealSelect = (System_Boolean_array *)BattleServantData__getSkillSealTurn(data, 0LL);
      if ( !v11 )
        goto LABEL_22;
      if ( v12 >= v11->max_length )
      {
LABEL_24:
        sub_B17100(SkillSealSelect, v8, v9);
        sub_B170A0();
      }
      if ( v13[v12] )
        SkillSealSelect = (System_Boolean_array *)BattleServantData__getSkillSealSelectTurn(data, v12, 0LL);
      v15 = this->fields.skillIconList;
      v16 = (int)SkillSealSelect;
      if ( !v15 )
        goto LABEL_22;
      if ( v12 >= v15->max_length )
        goto LABEL_24;
      if ( v12 >= ActiveSkillInfos->max_length )
        goto LABEL_24;
      v17 = v15->m_Items[v12];
      v18 = ActiveSkillInfos->m_Items[v12];
      canUseSkill = BattleServantData__canUseSkill(data, v12, 0LL);
      SkillSealSelect = (System_Boolean_array *)BattleServantData__getNotActTurn(data, 0LL);
      if ( v12 >= v11->max_length )
        goto LABEL_24;
      if ( !v17 )
        goto LABEL_22;
      BattleServantSkillIConComponent__SetSkillInfo(v17, v18, canUseSkill, v16, (int32_t)SkillSealSelect, v13[v12], 0LL);
    }
    else
    {
      if ( v12 >= max_length )
        goto LABEL_24;
      v20 = skillIconList->m_Items[v12];
      if ( !v20 )
        goto LABEL_22;
      BattleServantSkillIConComponent__setNoSkill(v20, 0, 0LL);
    }
    skillIconList = this->fields.skillIconList;
    ++v12;
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
  int v8; // s0

  if ( (byte_40FBAC3 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_40FBAC3 = 1;
  }
  if ( this->fields.pieceData )
  {
    v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
    v4 = **(_QWORD **)(v3 + 192);
    if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
      sub_AAFCFC(v4);
    pieceData = this->fields.pieceData;
    v6 = **(WarBoardManager_o ***)(v4 + 184);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform || (*(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position(transform, 0LL), !v6) )
      sub_B170D4();
    WarBoardManager__ShowServantEquipSimplePopup(v6, pieceData, *(UnityEngine_Vector3_o *)&v8, 0LL);
  }
}


void __fastcall WarBoardSimplePopupElementServant__UpdateLabel(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpValueLabel; // x20
  UILabel_o *v4; // x0

  if ( (byte_40FBABF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBABF = 1;
  }
  hpValueLabel = (UnityEngine_Object_o *)this->fields.hpValueLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(hpValueLabel, 0LL, 0LL) )
  {
    v4 = this->fields.hpValueLabel;
    if ( !v4 )
      sub_B170D4();
    UILabel__SetCondensedScale(v4, this->fields.HpValueLabelMaxWidth, 0LL);
  }
}


void __fastcall WarBoardSimplePopupElementServant__UpdateNpBars(
        WarBoardSimplePopupElementServant_o *this,
        float progress,
        const MethodInfo *method)
{
  __int64 v3; // x2
  struct UISprite_array *npBars; // x8
  __int64 v5; // x9
  UIBasicSprite_o *v8; // x0
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v11; // x8
  UIBasicSprite_o *v12; // x0
  struct UISprite_array *v13; // x8
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  struct UISprite_array *v16; // x8
  UIBasicSprite_o *v17; // x0

  npBars = this->fields.npBars;
  if ( npBars )
  {
    v5 = *(_QWORD *)&npBars->max_length;
    if ( v5 )
    {
      if ( !(_DWORD)v5 )
        goto LABEL_27;
      v8 = (UIBasicSprite_o *)npBars->m_Items[0];
      if ( !v8 )
        goto LABEL_26;
      UIBasicSprite__set_fillAmount(v8, progress, 0LL);
      npBars = this->fields.npBars;
      if ( !npBars )
        goto LABEL_26;
    }
    if ( (int)npBars->max_length >= 2 )
    {
      v9 = (UnityEngine_Component_o *)npBars->m_Items[1];
      if ( !v9 )
        goto LABEL_26;
      gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
      if ( !gameObject )
        goto LABEL_26;
      if ( progress <= 1.0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v11 = this->fields.npBars;
        if ( !v11 )
          goto LABEL_26;
        if ( v11->max_length <= 1 )
          goto LABEL_27;
        v12 = (UIBasicSprite_o *)v11->m_Items[1];
        if ( !v12 )
          goto LABEL_26;
        UIBasicSprite__set_fillAmount(v12, progress + -1.0, 0LL);
      }
    }
    v13 = this->fields.npBars;
    if ( !v13 )
      goto LABEL_26;
    if ( (int)v13->max_length >= 3 )
    {
      v14 = (UnityEngine_Component_o *)v13->m_Items[2];
      if ( !v14 )
        goto LABEL_26;
      v15 = UnityEngine_Component__get_gameObject(v14, 0LL);
      if ( !v15 )
        goto LABEL_26;
      if ( progress > 2.0 )
      {
        UnityEngine_GameObject__SetActive(v15, 1, 0LL);
        v16 = this->fields.npBars;
        if ( !v16 )
          goto LABEL_26;
        if ( v16->max_length > 2 )
        {
          v17 = (UIBasicSprite_o *)v16->m_Items[2];
          if ( v17 )
          {
            UIBasicSprite__set_fillAmount(v17, progress + -2.0, 0LL);
            return;
          }
LABEL_26:
          sub_B170D4();
        }
LABEL_27:
        sub_B17100(this, method, v3);
        sub_B170A0();
      }
      UnityEngine_GameObject__SetActive(v15, 0, 0LL);
    }
  }
}


void __fastcall WarBoardSimplePopupElementServant__UpdateUiBrightnessByPieceStatus(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardSimplePopupElementServant___c__DisplayClass55_0_o *v11; // x20
  WarBoardPieceData_o *pieceData; // x0
  bool HasIconDarkenBuff; // w0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundActionCount; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v19; // x22
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundFaceIcon; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x21

  if ( (byte_40FBABE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_UIWidget___ctor__, method);
    sub_B16FFC(&System_Action_UIWidget__TypeInfo, v6);
    sub_B16FFC(&Method_BasicHelper_ForEach_UIWidget___, v7);
    sub_B16FFC(
      &Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__0__,
      v8);
    sub_B16FFC(
      &Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__1__,
      v9);
    sub_B16FFC(&WarBoardSimplePopupElementServant___c__DisplayClass55_0_TypeInfo, v10);
    byte_40FBABE = 1;
  }
  v11 = (WarBoardSimplePopupElementServant___c__DisplayClass55_0_o *)sub_B170CC(
                                                                       WarBoardSimplePopupElementServant___c__DisplayClass55_0_TypeInfo,
                                                                       method,
                                                                       v2,
                                                                       v3,
                                                                       v4);
  WarBoardSimplePopupElementServant___c__DisplayClass55_0___ctor(v11, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData || (HasIconDarkenBuff = WarBoardPieceData__HasIconDarkenBuff(pieceData, 0LL), !v11) )
    sub_B170D4();
  v11->fields.hasIconDarkenBuff = HasIconDarkenBuff;
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v19 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_UIWidget__TypeInfo,
                                                                                 v14,
                                                                                 v15,
                                                                                 v16,
                                                                                 v17);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v19,
      (Il2CppObject *)v11,
      Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__0__,
      (const MethodInfo_24B7310 *)Method_System_Action_UIWidget___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v19,
      (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_UIWidget___);
  }
  turnDarkUiWidgetsAroundFaceIcon = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundFaceIcon;
  if ( turnDarkUiWidgetsAroundFaceIcon )
  {
    v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_UIWidget__TypeInfo,
                                                                                 v14,
                                                                                 v15,
                                                                                 v16,
                                                                                 v17);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v21,
      (Il2CppObject *)v11,
      Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__1__,
      (const MethodInfo_24B7310 *)Method_System_Action_UIWidget___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      turnDarkUiWidgetsAroundFaceIcon,
      (System_Action_T__o *)v21,
      (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_UIWidget___);
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
  int v4; // s0

  if ( !this->fields.hasIconDarkenBuff )
  {
    *(UnityEngine_Color_o *)&v4 = UnityEngine_Color__get_white(0LL);
    if ( x )
      goto LABEL_3;
LABEL_5:
    sub_B170D4();
  }
  *(UnityEngine_Color_o *)&v4 = UnityEngine_Color__get_gray(0LL);
  if ( !x )
    goto LABEL_5;
LABEL_3:
  UIWidget__set_color(x, *(UnityEngine_Color_o *)&v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSimplePopupElementServant___c__DisplayClass55_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardSimplePopupElementServant___c__DisplayClass55_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  int v4; // s0

  if ( !this->fields.hasIconDarkenBuff )
  {
    *(UnityEngine_Color_o *)&v4 = UnityEngine_Color__get_white(0LL);
    if ( x )
      goto LABEL_3;
LABEL_5:
    sub_B170D4();
  }
  *(UnityEngine_Color_o *)&v4 = UnityEngine_Color__get_gray(0LL);
  if ( !x )
    goto LABEL_5;
LABEL_3:
  UIWidget__set_color(x, *(UnityEngine_Color_o *)&v4, 0LL);
}