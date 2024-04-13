void __fastcall WarBoardSimplePopupElementServant___ctor(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  this->fields.servantNameLabelWidth = 180;
  this->fields.HpValueLabelMaxWidth = 140;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_32A1BD0;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_32A51E0;
  this->fields.positionLevelNpc.fields.z = 0.0;
  *(_OWORD *)&this->fields.positionActionPointDefault.fields.x = xmmword_32A1BD0;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42EAB91 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EAB91 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v9);
  WarBoardManager__ShowServantDetailPopup((WarBoardManager_o *)Instance, this->fields.pieceData, 0, 0LL);
}


void __fastcall WarBoardSimplePopupElementServant__SetAtkLabel(
        WarBoardSimplePopupElementServant_o *this,
        int32_t atk,
        bool isPlayerGroup,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  UILabel_o *atkValueLabel; // x19
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EAB8D & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, atk, isPlayerGroup, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_15440/*"WARBOARD_SERVANT_INFO_ENEMY_ATK"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v13, v14, v15);
    byte_42EAB8D = 1;
  }
  atkValueLabel = this->fields.atkValueLabel;
  if ( isPlayerGroup )
  {
    v20 = atk;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    v18 = System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v17, 0LL);
    if ( atkValueLabel )
    {
      UILabel__set_text(atkValueLabel, v18, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(v18, v19);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_15440/*"WARBOARD_SERVANT_INFO_ENEMY_ATK"*/, 0LL);
  if ( !atkValueLabel )
    goto LABEL_11;
  UILabel__set_text(atkValueLabel, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSimplePopupElementServant__SetBreakPoint(
        WarBoardSimplePopupElementServant_o *this,
        int32_t breakPoint,
        int32_t breakPointMax,
        bool isEnemyServant,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UnityEngine_GameObject_o *klass; // x0
  __int64 v19; // x1
  UnityEngine_Component_o *breakPointParent; // x8
  UnityEngine_GameObject_o *v21; // x22
  int32_t v22; // w26
  float v23; // s8
  float v24; // s9
  bool v25; // w23
  struct UnityEngine_GameObject_o *breakPointPrefab; // x24
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_GameObject_o *v28; // x25
  WarBoardBreakPointComponent_o *Component_srcLineSprite; // x24
  struct UIWidget_o *v30; // x8
  __int64 v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int32_t v38; // w27
  UnityEngine_GameObject_c **v39; // x25
  BattleServantConfConponent_o *v40; // x25
  float maxSpacing; // s0
  __int64 v42; // x0
  __int64 v43; // x0
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EAB8F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___,
      breakPoint,
      breakPointMax,
      isEnemyServant);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&WarBoardBreakPointComponent___TypeInfo, v15, v16, v17);
    byte_42EAB8F = 1;
  }
  klass = (UnityEngine_GameObject_o *)sub_B5D5DC(WarBoardBreakPointComponent___TypeInfo, (unsigned int)breakPointMax);
  breakPointParent = (UnityEngine_Component_o *)this->fields.breakPointParent;
  if ( !breakPointParent )
    goto LABEL_22;
  if ( breakPointMax >= 1 )
  {
    v21 = klass;
    v22 = 0;
    v23 = 0.0;
    v24 = (float)breakPointParent[6].fields.m_CachedPtr / (float)breakPointMax;
    v25 = isEnemyServant;
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
                                            (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
      if ( !klass )
        break;
      v28 = klass;
      UnityEngine_GameObject__SetActive(klass, 1, 0LL);
      Component_srcLineSprite = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   v28,
                                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      klass = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v28, 0LL);
      if ( !klass )
        break;
      v44.fields.y = 0.0;
      v44.fields.z = 0.0;
      v44.fields.x = v23;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)klass, v44, 0LL);
      v30 = this->fields.breakPointParent;
      if ( !v30 )
        break;
      if ( !Component_srcLineSprite )
        break;
      WarBoardBreakPointComponent__Initialize(
        Component_srcLineSprite,
        v30->fields.mDepth + 2 * (~v22 + breakPointMax),
        v22 + 1,
        0,
        v25,
        0,
        0LL);
      if ( !v21 )
        break;
      v31 = sub_B5D684(Component_srcLineSprite, v21->klass->_1.element_class);
      if ( !v31 )
      {
        v43 = sub_B5D6BC(0LL);
        sub_B5D668(v43, 0LL);
      }
      v38 = v22;
      if ( v22 >= LODWORD(v21[1].klass)
        || (v39 = &v21->klass + v22,
            v39[4] = (UnityEngine_GameObject_c *)Component_srcLineSprite,
            v40 = (BattleServantConfConponent_o *)(v39 + 4),
            sub_B5D560(v40, (System_Int32_array **)Component_srcLineSprite, v32, v33, v34, v35, v36, v37),
            (unsigned int)v22 >= LODWORD(v21[1].klass)) )
      {
        v42 = sub_B5D6C8(v31);
        sub_B5D668(v42, 0LL);
      }
      klass = (UnityEngine_GameObject_o *)v40->klass;
      if ( !v40->klass )
        break;
      WarBoardBreakPointComponent__SetActive((WarBoardBreakPointComponent_o *)klass, v22++ < breakPoint, 0, 0LL);
      if ( v38 + 1 >= breakPointMax )
        return;
      maxSpacing = Component_srcLineSprite->fields.maxSpacing;
      breakPointParent = (UnityEngine_Component_o *)this->fields.breakPointParent;
      if ( maxSpacing >= v24 )
        maxSpacing = v24;
      v23 = v23 + maxSpacing;
    }
    while ( breakPointParent );
LABEL_22:
    sub_B5D69C(klass, v19);
  }
}


void __fastcall WarBoardSimplePopupElementServant__SetBuffIcon(
        WarBoardSimplePopupElementServant_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *showBuffComponent; // x21
  bool v7; // w0
  BattleServantShowBuffComponent_o *v8; // x20
  BattleBuffData_ShowBuffData_array *ShowServantParam; // x0
  __int64 v10; // x1

  if ( (byte_42EAB8E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)buffData, (_DWORD)method, v3);
    byte_42EAB8E = 1;
  }
  showBuffComponent = (UnityEngine_Object_o *)this->fields.showBuffComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(showBuffComponent, 0LL, 0LL);
  if ( buffData && !v7 )
  {
    v8 = this->fields.showBuffComponent;
    ShowServantParam = BattleBuffData__getShowServantParam(buffData, 0LL);
    if ( !v8 )
      sub_B5D69C(ShowServantParam, v10);
    BattleServantShowBuffComponent__setBuffList(v8, ShowServantParam, 0LL);
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
    sub_B5D69C(hpLabel, *(_QWORD *)&dispType);
  }
  if ( posSkillRoot->max_length <= dispType )
  {
LABEL_25:
    v13 = sub_B5D6C8(hpLabel);
    sub_B5D668(v13, 0LL);
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
  __int64 v3; // x3
  WarBoardPieceData_o *v4; // x20
  WarBoardSimplePopupElementServant_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  BattleServantData_o *battleServant_k__BackingField; // x21
  UILabel_o *atkLabel; // x22
  UILabel_o *hpLabel; // x22
  UILabel_o *detailButtonLabel; // x22
  UILabel_o *servantNameLabel; // x22
  UnityEngine_Object_o *pieceStatusLabelComponent; // x22
  const MethodInfo *v78; // x2
  UnityEngine_Object_o *servantLevel; // x22
  UILabel_o *v80; // x22
  System_String_o *v81; // x23
  Il2CppObject *v82; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  char v86; // w22
  UILabel_o *hpValueLabel; // x22
  Il2CppObject *v88; // x23
  Il2CppObject *v89; // x0
  int32_t AttackValue; // w22
  bool isPlayerGroup; // w0
  const MethodInfo *v92; // x3
  bool v93; // w0
  const MethodInfo *v94; // x3
  BattleBuffData_o *BuffData; // x0
  const MethodInfo *v96; // x2
  UnityEngine_GameObject_o *actionCountObj; // x21
  UILabel_o *actValueLabel; // x21
  UISprite_o *frameSprite; // x21
  Il2CppObject *v100; // x0
  UnityEngine_Object_o *actionPountObj; // x21
  UnityEngine_Object_o *actionPointValueLabel; // x21
  UnityEngine_GameObject_o *v103; // x21
  struct WarBoardCost_o *Cost_k__BackingField; // x8
  UILabel_o *v105; // x21
  UISprite_o *v106; // x21
  Il2CppObject *v107; // x0
  UILabel_o *actionPointLabel; // x21
  int32_t v109; // w21
  UILabel_o *currentActionPointDispLabel; // x23
  int v111; // w22
  UILabel_o *costDispLabel; // x23
  System_String_o *v113; // x24
  Il2CppObject *v114; // x21
  Il2CppObject *v115; // x0
  bool HasCost; // w0
  const MethodInfo *v117; // x2
  UnityEngine_GameObject_o *v118; // x21
  bool activeSelf; // w0
  __int64 v120; // x8
  __int64 v121; // x9
  __int64 v122; // x10
  int npcImageSvtId_k__BackingField; // w8
  int32_t npcDispLimitCount_k__BackingField; // w22
  int32_t ServantImageLimitSealAfter; // w21
  UISprite_o *servantIcon; // x23
  WarBoardSimplePopupElementServant_o **p_servantIcon; // x28
  int32_t v128; // w24
  bool v129; // w21
  int32_t posAtkValueLabel; // w21
  Il2CppObject *v131; // x23
  Il2CppObject *v132; // x0
  System_String_o *v133; // x0
  UISprite_o *enemyIcon; // x23
  System_String_o *v135; // x22
  bool v136; // w0
  UISprite_o *v137; // x22
  WarBoardPieceData_o *v138; // x0
  UISpriteAltMat_o *v139; // x1
  System_String_o *v140; // x23
  UISprite_o *enemyIconBg; // x22
  bool v142; // w21
  UnityEngine_Object_o *equipIcon; // x21
  UnityEngine_Object_o *equipIconOnFace; // x21
  int32_t *p_iconEquipId_k__BackingField; // x23
  UISprite_o *v146; // x21
  int32_t v147; // w22
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  int targetId; // w8
  bool v150; // w21
  UISprite_o *flameInClassIcon; // x23
  int32_t iconFrameType_k__BackingField; // w21
  int32_t iconClassId_k__BackingField; // w22
  int32_t breakPoint_k__BackingField; // w21
  int32_t breakPointMax_k__BackingField; // w22
  bool isEnemyServant; // w0
  const MethodInfo *v157; // x4
  UIBasicSprite_o *hpBar; // x21
  float CurrentHpProgress; // s0
  float CurrentNpProgress; // s0
  const MethodInfo *v161; // x1
  UnityEngine_Object_o *critecalStarsRoot; // x21
  UILabel_o *critecalStarsLabel; // x21
  UnityEngine_Object_o *supportSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *RoleTypeLabel; // x21
  struct BattleServantData_o *v167; // x8
  int v168; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t MaxHp; // [xsp+8h] [xbp-68h] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  __int64 v172; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v173; // 0:s0.4,4:s1.4,8:s2.4

  v4 = pieceData;
  v5 = this;
  if ( (byte_42EAB8A & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)pieceData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v18, v19, v20);
    sub_B5D5C4(&int_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_15409/*"WARBOARD_INFO_POPUP_SVT_HP"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_19618/*"icon_strong_enemy"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_21936/*"questinfo_enemyface_bg"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_19428/*"hp_gauge_boss"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_22281/*"servant_base_{0}"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_15408/*"WARBOARD_INFO_POPUP_SVT_DETAIL_BUTTON"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_15407/*"WARBOARD_INFO_POPUP_SVT_ATK"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_15405/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_15410/*"WARBOARD_INFO_POPUP_SVT_LV"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_23802/*"{0:#,0} / {1:#,0}"*/, v60, v61, v62);
    this = (WarBoardSimplePopupElementServant_o *)sub_B5D5C4(&StringLiteral_15406/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT_COST"*/, v63, v64, v65);
    byte_42EAB8A = 1;
  }
  entity = 0LL;
  v172 = 0LL;
  if ( !v4 )
    goto LABEL_189;
  if ( WarBoardPieceData__get_isMaster(v4, 0LL) || !v4->fields._battleServant_k__BackingField )
    return;
  v5->fields.pieceData = v4;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v5->fields.pieceData,
    (System_Int32_array **)v4,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  battleServant_k__BackingField = v4->fields._battleServant_k__BackingField;
  atkLabel = v5->fields.atkLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15407/*"WARBOARD_INFO_POPUP_SVT_ATK"*/, 0LL);
  if ( !atkLabel )
    goto LABEL_189;
  UILabel__set_text(atkLabel, (System_String_o *)this, 0LL);
  hpLabel = v5->fields.hpLabel;
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15409/*"WARBOARD_INFO_POPUP_SVT_HP"*/, 0LL);
  if ( !hpLabel )
    goto LABEL_189;
  UILabel__set_text(hpLabel, (System_String_o *)this, 0LL);
  detailButtonLabel = v5->fields.detailButtonLabel;
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15408/*"WARBOARD_INFO_POPUP_SVT_DETAIL_BUTTON"*/, 0LL);
  if ( !detailButtonLabel )
    goto LABEL_189;
  UILabel__set_text(detailButtonLabel, (System_String_o *)this, 0LL);
  this = (WarBoardSimplePopupElementServant_o *)v5->fields.servantNameLabel;
  if ( !this )
    goto LABEL_189;
  UILabel__SetDefaultFont((UILabel_o *)this, 0LL);
  if ( !battleServant_k__BackingField )
    goto LABEL_189;
  servantNameLabel = v5->fields.servantNameLabel;
  this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getServantShortName(
                                                  battleServant_k__BackingField,
                                                  0LL);
  if ( !servantNameLabel )
    goto LABEL_189;
  UILabel__set_text(servantNameLabel, (System_String_o *)this, 0LL);
  this = (WarBoardSimplePopupElementServant_o *)v5->fields.servantNameLabel;
  if ( !this )
    goto LABEL_189;
  UILabel__SetCondensedScale((UILabel_o *)this, v5->fields.servantNameLabelWidth, 0LL);
  pieceStatusLabelComponent = (UnityEngine_Object_o *)v5->fields.pieceStatusLabelComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pieceStatusLabelComponent, 0LL, 0LL) )
  {
    this = (WarBoardSimplePopupElementServant_o *)v5->fields.pieceStatusLabelComponent;
    if ( !this )
      goto LABEL_189;
    WarBoardPieceStatusLabel__SetupLabel((WarBoardPieceStatusLabel_o *)this, v4, v78);
  }
  ((void (__fastcall *)(WarBoardSimplePopupElementServant_o *, void *))v5->klass->vtable._4_UpdateUiBrightnessByPieceStatus.method)(
    v5,
    v5->klass[1]._1.image);
  servantLevel = (UnityEngine_Object_o *)v5->fields.servantLevel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(servantLevel, 0LL, 0LL) )
  {
    v80 = v5->fields.servantLevel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v81 = LocalizationManager__Get((System_String_o *)StringLiteral_15410/*"WARBOARD_INFO_POPUP_SVT_LV"*/, 0LL);
    iconLevel_k__BackingField = v4->fields._iconLevel_k__BackingField;
    v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
    this = (WarBoardSimplePopupElementServant_o *)System_String__Format(v81, v82, 0LL);
    if ( !v80 )
      goto LABEL_189;
    UILabel__set_text(v80, (System_String_o *)this, 0LL);
    if ( WarBoardPieceData__get_isEnemyServant(v4, 0LL) && v4->fields._roleType_k__BackingField == 1 )
    {
      this = (WarBoardSimplePopupElementServant_o *)v5->fields.servantLevel;
      if ( !this )
        goto LABEL_189;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
      if ( !this )
        goto LABEL_189;
      x = v5->fields.positionLevelDanger.fields.x;
      y = v5->fields.positionLevelDanger.fields.y;
      z = v5->fields.positionLevelDanger.fields.z;
    }
    else
    {
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_IsNpc(v4, 0LL);
      if ( !v5->fields.servantLevel )
        goto LABEL_189;
      v86 = (char)this;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)v5->fields.servantLevel,
                                                      0LL);
      if ( (v86 & 1) != 0 )
      {
        if ( !this )
          goto LABEL_189;
        x = v5->fields.positionLevelNpc.fields.x;
        y = v5->fields.positionLevelNpc.fields.y;
        z = v5->fields.positionLevelNpc.fields.z;
      }
      else
      {
        if ( !this )
          goto LABEL_189;
        x = v5->fields.positionLevel.fields.x;
        y = v5->fields.positionLevel.fields.y;
        z = v5->fields.positionLevel.fields.z;
      }
    }
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&x, 0LL);
  }
  hpValueLabel = v5->fields.hpValueLabel;
  iconLevel_k__BackingField = WarBoardPieceData__get_CurrentHp(v4, 0LL);
  v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
  MaxHp = WarBoardPieceData__get_MaxHp(v4, 0LL);
  v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp);
  this = (WarBoardSimplePopupElementServant_o *)System_String__Format_44573324(
                                                  (System_String_o *)StringLiteral_23802/*"{0:#,0} / {1:#,0}"*/,
                                                  v88,
                                                  v89,
                                                  0LL);
  if ( !hpValueLabel )
    goto LABEL_189;
  UILabel__set_text(hpValueLabel, (System_String_o *)this, 0LL);
  AttackValue = WarBoardPieceData__get_AttackValue(v4, 0LL);
  isPlayerGroup = WarBoardPieceData__get_isPlayerGroup(v4, 0LL);
  WarBoardSimplePopupElementServant__SetAtkLabel(v5, AttackValue, isPlayerGroup, v92);
  v93 = WarBoardPieceData__get_isPlayerGroup(v4, 0LL);
  WarBoardSimplePopupElementServant__SetUpSkillIcon(v5, battleServant_k__BackingField, v93, v94);
  BuffData = WarBoardPieceData__get_BuffData(v4, 0LL);
  WarBoardSimplePopupElementServant__SetBuffIcon(v5, BuffData, v96);
  actionCountObj = v5->fields.actionCountObj;
  this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_isInfinitelyActable(v4, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    pieceData = 0LL;
    if ( !actionCountObj )
      goto LABEL_189;
  }
  else
  {
    this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_189;
    pieceData = (WarBoardPieceData_o *)(LODWORD(this[1].fields.npBars) == 2);
    if ( !actionCountObj )
      goto LABEL_189;
  }
  UnityEngine_GameObject__SetActive(actionCountObj, (bool)pieceData, 0LL);
  actValueLabel = v5->fields.actValueLabel;
  LODWORD(v172) = v4->fields._currentActionCount_k__BackingField;
  this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)&v172, 0LL);
  if ( !actValueLabel )
    goto LABEL_189;
  UILabel__set_text(actValueLabel, (System_String_o *)this, 0LL);
  frameSprite = v5->fields.frameSprite;
  iconLevel_k__BackingField = v4->fields._forceId_k__BackingField + 1;
  v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
  this = (WarBoardSimplePopupElementServant_o *)System_String__Format((System_String_o *)StringLiteral_22281/*"servant_base_{0}"*/, v100, 0LL);
  if ( !frameSprite )
    goto LABEL_189;
  UISprite__set_spriteName(frameSprite, (System_String_o *)this, 0LL);
  actionPountObj = (UnityEngine_Object_o *)v5->fields.actionPountObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(actionPountObj, 0LL, 0LL) )
  {
    actionPointValueLabel = (UnityEngine_Object_o *)v5->fields.actionPointValueLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(actionPointValueLabel, 0LL, 0LL) )
    {
      v103 = v5->fields.actionPountObj;
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_HasCost(v4, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_189;
        pieceData = (WarBoardPieceData_o *)(LODWORD(this[1].fields.npBars) == 2);
        if ( !v103 )
          goto LABEL_189;
      }
      else
      {
        pieceData = 0LL;
        if ( !v103 )
          goto LABEL_189;
      }
      UnityEngine_GameObject__SetActive(v103, (bool)pieceData, 0LL);
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_HasCost(v4, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        Cost_k__BackingField = v4->fields._Cost_k__BackingField;
        if ( !Cost_k__BackingField )
          goto LABEL_189;
        v105 = v5->fields.actionPointValueLabel;
        LODWORD(v172) = Cost_k__BackingField->fields._CurrentActionPoint_k__BackingField;
        this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)&v172, 0LL);
        if ( !v105 )
          goto LABEL_189;
        UILabel__set_text(v105, (System_String_o *)this, 0LL);
        v106 = v5->fields.frameSprite;
        iconLevel_k__BackingField = v4->fields._forceId_k__BackingField + 1;
        v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
        this = (WarBoardSimplePopupElementServant_o *)System_String__Format(
                                                        (System_String_o *)StringLiteral_22281/*"servant_base_{0}"*/,
                                                        v107,
                                                        0LL);
        if ( !v106 )
          goto LABEL_189;
        UISprite__set_spriteName(v106, (System_String_o *)this, 0LL);
        this = (WarBoardSimplePopupElementServant_o *)v5->fields.actionPountLabelObj;
        if ( !this )
          goto LABEL_189;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        actionPointLabel = v5->fields.actionPointLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_15405/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT"*/,
                                                        0LL);
        if ( !actionPointLabel )
          goto LABEL_189;
        UILabel__set_text(actionPointLabel, (System_String_o *)this, 0LL);
        this = (WarBoardSimplePopupElementServant_o *)v4->fields._Cost_k__BackingField;
        if ( !this )
          goto LABEL_189;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__get_Move((WarBoardCost_o *)this, 0LL);
        if ( !v4->fields._Cost_k__BackingField )
          goto LABEL_189;
        v109 = (int)this;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__get_Attack(v4->fields._Cost_k__BackingField, 0LL);
        if ( !v4->fields._Cost_k__BackingField )
          goto LABEL_189;
        currentActionPointDispLabel = v5->fields.currentActionPointDispLabel;
        v111 = (int)this;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__CurrentAndMaxPointToString(
                                                        v4->fields._Cost_k__BackingField,
                                                        0LL);
        if ( !currentActionPointDispLabel )
          goto LABEL_189;
        UILabel__set_text(currentActionPointDispLabel, (System_String_o *)this, 0LL);
        costDispLabel = v5->fields.costDispLabel;
        v113 = LocalizationManager__Get((System_String_o *)StringLiteral_15406/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT_COST"*/, 0LL);
        MaxHp = v109;
        v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp);
        v168 = v111;
        v115 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v168);
        this = (WarBoardSimplePopupElementServant_o *)System_String__Format_44573324(v113, v114, v115, 0LL);
        if ( !costDispLabel )
          goto LABEL_189;
        UILabel__set_text(costDispLabel, (System_String_o *)this, 0LL);
      }
      HasCost = WarBoardPieceData__get_HasCost(v4, 0LL);
      WarBoardSimplePopupElementServant__SetUIPosition(v5, HasCost, v117);
      this = (WarBoardSimplePopupElementServant_o *)v5->fields.actionCountObj;
      if ( !this )
        goto LABEL_189;
      v118 = v5->fields.actionPountObj;
      activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      v120 = 328LL;
      if ( activeSelf )
        v120 = 340LL;
      if ( activeSelf )
        v121 = 344LL;
      else
        v121 = 332LL;
      if ( activeSelf )
        v122 = 348LL;
      else
        v122 = 336LL;
      v173.fields.y = *(float *)((char *)&v5->klass + v121);
      v173.fields.x = *(float *)((char *)&v5->klass + v120);
      v173.fields.z = *(float *)((char *)&v5->klass + v122);
      GameObjectExtensions__SetLocalPosition(v118, v173, 0LL);
    }
  }
  npcImageSvtId_k__BackingField = v4->fields._npcImageSvtId_k__BackingField;
  if ( npcImageSvtId_k__BackingField <= 0 )
    npcImageSvtId_k__BackingField = v4->fields._iconId_k__BackingField;
  HIDWORD(v172) = npcImageSvtId_k__BackingField;
  npcDispLimitCount_k__BackingField = v4->fields._npcDispLimitCount_k__BackingField;
  if ( npcDispLimitCount_k__BackingField <= 0 )
    npcDispLimitCount_k__BackingField = v4->fields._iconLimitCount_k__BackingField;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WarBoardSimplePopupElementServant_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_189;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)this,
                                 v4->fields._iconId_k__BackingField,
                                 npcDispLimitCount_k__BackingField,
                                 0LL);
  if ( !WarBoardPieceData__get_IsEnemyMonster(v4, 0LL) )
  {
    p_servantIcon = (WarBoardSimplePopupElementServant_o **)&v5->fields.servantIcon;
    servantIcon = v5->fields.servantIcon;
    v128 = HIDWORD(v172);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( AtlasManager__SetFaceImage(servantIcon, v128, ServantImageLimitSealAfter, 0LL) )
    {
      v129 = 1;
      goto LABEL_118;
    }
  }
  this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_189;
  posAtkValueLabel = (int32_t)this->fields.posAtkValueLabel;
  iconLevel_k__BackingField = HIDWORD(v172);
  v131 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField);
  MaxHp = npcDispLimitCount_k__BackingField;
  v132 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp);
  v133 = System_String__Concat(v131, v132, 0LL);
  enemyIcon = (UISprite_o *)v5->fields.enemyIcon;
  v135 = v133;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v136 = AtlasManager__SetEventUI_31190412(posAtkValueLabel, enemyIcon, v135, 0LL);
  v137 = (UISprite_o *)v5->fields.enemyIcon;
  if ( v136 )
  {
    v138 = v4;
    v139 = v5->fields.enemyIcon;
  }
  else
  {
    v140 = System_Int32__ToString((int32_t)&v172 + 4, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( !AtlasManager__SetEventUI_31190412(posAtkValueLabel, v137, v140, 0LL) )
      goto LABEL_114;
    v139 = v5->fields.enemyIcon;
    v138 = v4;
  }
  WarBoardPieceData__ApplyDisplayType(v138, v139, 0LL);
LABEL_114:
  enemyIconBg = v5->fields.enemyIconBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_31190412(posAtkValueLabel, enemyIconBg, (System_String_o *)StringLiteral_21936/*"questinfo_enemyface_bg"*/, 0LL);
  v129 = 0;
  p_servantIcon = (WarBoardSimplePopupElementServant_o **)&v5->fields.servantIcon;
LABEL_118:
  this = *p_servantIcon;
  if ( !*p_servantIcon )
    goto LABEL_189;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_189;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v129, 0LL);
  this = (WarBoardSimplePopupElementServant_o *)v5->fields.enemyIcon;
  if ( !this )
    goto LABEL_189;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_189;
  v142 = !v129;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v142, 0LL);
  this = (WarBoardSimplePopupElementServant_o *)v5->fields.enemyIconBg;
  if ( !this )
    goto LABEL_189;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_189;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v142, 0LL);
  equipIcon = (UnityEngine_Object_o *)v5->fields.equipIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipIcon, 0LL, 0LL) )
  {
    equipIconOnFace = (UnityEngine_Object_o *)v5->fields.equipIconOnFace;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(equipIconOnFace, 0LL, 0LL) )
    {
      this = (WarBoardSimplePopupElementServant_o *)v5->fields.equipIconOnFace;
      if ( !this )
        goto LABEL_189;
      p_iconEquipId_k__BackingField = &v4->fields._iconEquipId_k__BackingField;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)this,
        v4->fields._iconEquipId_k__BackingField > 0,
        0LL);
    }
    else
    {
      p_iconEquipId_k__BackingField = &v4->fields._iconEquipId_k__BackingField;
    }
    v146 = v5->fields.equipIcon;
    v147 = *p_iconEquipId_k__BackingField;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(v146, v147, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)v5->fields.equipLimitCountSprite;
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
      this = (WarBoardSimplePopupElementServant_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !this )
        goto LABEL_189;
      this = (WarBoardSimplePopupElementServant_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                      (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                      &entity,
                                                      *p_iconEquipId_k__BackingField,
                                                      (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_150;
      if ( !entity )
        goto LABEL_189;
      targetId = entity->fields.targetId;
      if ( targetId >= 1 )
        v150 = v4->fields._equipLimitCount_k__BackingField >= targetId;
      else
LABEL_150:
        v150 = 0;
      this = (WarBoardSimplePopupElementServant_o *)v5->fields.equipLimitCountSprite;
      if ( !this )
        goto LABEL_189;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
      if ( !this )
        goto LABEL_189;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v150, 0LL);
    }
  }
  flameInClassIcon = v5->fields.flameInClassIcon;
  iconClassId_k__BackingField = v4->fields._iconClassId_k__BackingField;
  iconFrameType_k__BackingField = v4->fields._iconFrameType_k__BackingField;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIcon(flameInClassIcon, iconClassId_k__BackingField, iconFrameType_k__BackingField, 0LL);
  breakPoint_k__BackingField = v4->fields._breakPoint_k__BackingField;
  breakPointMax_k__BackingField = v4->fields._breakPointMax_k__BackingField;
  isEnemyServant = WarBoardPieceData__get_isEnemyServant(v4, 0LL);
  WarBoardSimplePopupElementServant__SetBreakPoint(
    v5,
    breakPoint_k__BackingField,
    breakPointMax_k__BackingField,
    isEnemyServant,
    v157);
  if ( WarBoardPieceData__get_isEnemyServant(v4, 0LL) )
  {
    this = (WarBoardSimplePopupElementServant_o *)v5->fields.hpBar;
    if ( !this )
      goto LABEL_189;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19428/*"hp_gauge_boss"*/, 0LL);
  }
  hpBar = (UIBasicSprite_o *)v5->fields.hpBar;
  CurrentHpProgress = WarBoardPieceData__get_CurrentHpProgress(v4, 0LL);
  if ( !hpBar )
LABEL_189:
    sub_B5D69C(this, pieceData);
  UIBasicSprite__set_fillAmount(hpBar, CurrentHpProgress, 0LL);
  CurrentNpProgress = WarBoardPieceData__get_CurrentNpProgress(v4, 0LL);
  WarBoardSimplePopupElementServant__UpdateNpBars(v5, CurrentNpProgress, v161);
  critecalStarsRoot = (UnityEngine_Object_o *)v5->fields.critecalStarsRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(critecalStarsRoot, 0LL, 0LL) )
  {
    this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_isPlayerGroup(v4, 0LL);
    if ( !v5->fields.critecalStarsRoot )
      goto LABEL_189;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive(v5->fields.critecalStarsRoot, 1, 0LL);
      critecalStarsLabel = v5->fields.critecalStarsLabel;
      LODWORD(v172) = WarBoardPieceData__get_CriticalStars(v4, 0LL);
      this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)&v172, 0LL);
      if ( !critecalStarsLabel )
        goto LABEL_189;
      UILabel__set_text(critecalStarsLabel, (System_String_o *)this, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(v5->fields.critecalStarsRoot, 0, 0LL);
    }
  }
  supportSprite = (UnityEngine_Object_o *)v5->fields.supportSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
  {
    this = (WarBoardSimplePopupElementServant_o *)v5->fields.supportSprite;
    if ( !this )
      goto LABEL_189;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_IsNpc(v4, 0LL);
    if ( !gameObject )
      goto LABEL_189;
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)this & 1, 0LL);
  }
  RoleTypeLabel = (UnityEngine_Object_o *)v5->fields.RoleTypeLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(RoleTypeLabel, 0LL, 0LL) )
  {
    v167 = v4->fields._battleServant_k__BackingField;
    if ( v167 )
    {
      if ( v167->fields.isEnemy && v4->fields._roleType_k__BackingField == 1 )
      {
        this = (WarBoardSimplePopupElementServant_o *)v5->fields.RoleTypeLabel;
        if ( !this )
          goto LABEL_189;
        this = (WarBoardSimplePopupElementServant_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)this,
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !this )
          goto LABEL_189;
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19618/*"icon_strong_enemy"*/, 0LL);
        this = (WarBoardSimplePopupElementServant_o *)v5->fields.RoleTypeLabel;
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
    sub_B5D69C(this, data);
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
        v17 = sub_B5D6C8(this);
        sub_B5D668(v17, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x20
  WarBoardPieceData_o *pieceData; // x21
  WarBoardManager_o *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  int v11; // s0

  if ( (byte_42EAB90 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, (_DWORD)method, v2, v3);
    byte_42EAB90 = 1;
  }
  if ( this->fields.pieceData )
  {
    v5 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
    v6 = **(_QWORD **)(v5 + 192);
    if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
      sub_AF52C4(v6);
    pieceData = this->fields.pieceData;
    v8 = **(WarBoardManager_o ***)(v6 + 184);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position(transform, 0LL), !v8) )
      sub_B5D69C(transform, v10);
    WarBoardManager__ShowServantEquipSimplePopup(v8, pieceData, *(UnityEngine_Vector3_o *)&v11, 0LL);
  }
}


void __fastcall WarBoardSimplePopupElementServant__UpdateLabel(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *hpValueLabel; // x20
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_42EAB8C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAB8C = 1;
  }
  hpValueLabel = (UnityEngine_Object_o *)this->fields.hpValueLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(hpValueLabel, 0LL, 0LL) )
  {
    v7 = this->fields.hpValueLabel;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    UILabel__SetCondensedScale(v7, this->fields.HpValueLabelMaxWidth, 0LL);
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
          sub_B5D69C(this, method);
        }
LABEL_27:
        v10 = sub_B5D6C8(this);
        sub_B5D668(v10, 0LL);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
  }
}


void __fastcall WarBoardSimplePopupElementServant__UpdateUiBrightnessByPieceStatus(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  WarBoardSimplePopupElementServant___c__DisplayClass55_0_o *v20; // x20
  __int64 v21; // x1
  WarBoardPieceData_o *pieceData; // x0
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundActionCount; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v24; // x22
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundFaceIcon; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v26; // x21

  if ( (byte_42EAB8B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_UIWidget___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_UIWidget__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_UIWidget___, v8, v9, v10);
    sub_B5D5C4(
      &Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__0__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__1__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&WarBoardSimplePopupElementServant___c__DisplayClass55_0_TypeInfo, v17, v18, v19);
    byte_42EAB8B = 1;
  }
  v20 = (WarBoardSimplePopupElementServant___c__DisplayClass55_0_o *)sub_B5D694(WarBoardSimplePopupElementServant___c__DisplayClass55_0_TypeInfo);
  WarBoardSimplePopupElementServant___c__DisplayClass55_0___ctor(v20, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData || (pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasIconDarkenBuff(pieceData, 0LL), !v20) )
    sub_B5D69C(pieceData, v21);
  v20->fields.hasIconDarkenBuff = (unsigned __int8)pieceData & 1;
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v24 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_UIWidget__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v24,
      (Il2CppObject *)v20,
      Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__0__,
      (const MethodInfo_258B320 *)Method_System_Action_UIWidget___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v24,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_UIWidget___);
  }
  turnDarkUiWidgetsAroundFaceIcon = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundFaceIcon;
  if ( turnDarkUiWidgetsAroundFaceIcon )
  {
    v26 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_UIWidget__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v26,
      (Il2CppObject *)v20,
      Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__1__,
      (const MethodInfo_258B320 *)Method_System_Action_UIWidget___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      turnDarkUiWidgetsAroundFaceIcon,
      (System_Action_T__o *)v26,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_UIWidget___);
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
    sub_B5D69C(v4, v5);
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
    sub_B5D69C(v4, v5);
  }
  *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_gray(0LL);
  if ( !x )
    goto LABEL_5;
LABEL_3:
  UIWidget__set_color(x, *(UnityEngine_Color_o *)&v6, 0LL);
}