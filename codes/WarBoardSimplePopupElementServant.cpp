void __fastcall WarBoardSimplePopupElementServant___ctor(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  this->fields.HpValueLabelMaxWidth = 140;
  *(_OWORD *)&this->fields.positionLevel.fields.x = xmmword_BDE4E0;
  *(_OWORD *)&this->fields.positionLevelDanger.fields.y = xmmword_BDDD50;
  this->fields.positionLevelNpc.fields.z = 0.0;
  this->fields.servantNameLabelWidth = 180;
  *(_OWORD *)&this->fields.positionActionPointDefault.fields.x = xmmword_BDE4E0;
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

  if ( (byte_4AFFDB5 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1BC3008(&Method_WarBoardSimplePopupElementServant_OnClickDetailButton__, v3);
    byte_4AFFDB5 = 1;
  }
  v4 = Method_WarBoardSimplePopupElementServant_OnClickDetailButton__;
  if ( (*((_BYTE *)Method_WarBoardSimplePopupElementServant_OnClickDetailButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BC3020(Method_WarBoardSimplePopupElementServant_OnClickDetailButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v7);
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

  if ( (byte_4AFFDB1 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&atk);
    sub_1BC3008(&LocalizationManager_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_15286/*"WARBOARD_SERVANT_INFO_ENEMY_ATK"*/, v9);
    sub_1BC3008(&StringLiteral_24811/*"{0:#,0}"*/, v10);
    byte_4AFFDB1 = 1;
  }
  atkValueLabel = this->fields.atkValueLabel;
  if ( isPlayerGroup )
  {
    v15 = atk;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, isPlayerGroup, method, v4);
    v13 = System_String__Format((System_String_o *)StringLiteral_24811/*"{0:#,0}"*/, v12, 0LL);
    if ( atkValueLabel )
    {
      UILabel__set_text(atkValueLabel, v13, 0LL);
      return;
    }
LABEL_10:
    sub_1BC3264(v13, v14);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_15286/*"WARBOARD_SERVANT_INFO_ENEMY_ATK"*/, 0LL);
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
  __int64 v31; // x2
  const MethodInfo *v32; // x3
  float maxSpacing; // s0
  __int64 v34; // x0
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFFDB3 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, *(_QWORD *)&breakPoint);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    sub_1BC3008(&WarBoardBreakPointComponent___TypeInfo, v11);
    byte_4AFFDB3 = 1;
  }
  v12 = (UnityEngine_GameObject_o *)sub_1BC30B0(WarBoardBreakPointComponent___TypeInfo, (unsigned int)breakPointMax);
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
      v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__50900816(
                                          breakPointPrefab,
                                          transform,
                                          (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
      if ( !v12 )
        break;
      v27 = v12;
      UnityEngine_GameObject__SetActive(v12, 1, 0LL);
      Component_object = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            v27,
                                                            (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
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
      v30 = sub_1BC3144(Component_object, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
      if ( !v30 )
      {
        v34 = sub_1BC3288();
        sub_1BC3130(v34, 0LL);
      }
      if ( v17 >= v15[6]
        || (p_monitor[v17] = Component_object,
            sub_1BC2FAC((CGThumbnailListItem_o *)&p_monitor[v16], (int32_t)Component_object, v31, v32),
            v17 >= v15[6]) )
      {
        sub_1BC326C(v30, v13, v31);
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
    sub_1BC3264(v12, v13);
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

  if ( (byte_4AFFDB2 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, buffData);
    byte_4AFFDB2 = 1;
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
      sub_1BC3264(ShowServantParam, v9);
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
  __int64 v6; // x2
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
    sub_1BC3264(hpLabel, *(_QWORD *)&dispType);
  }
  if ( posSkillRoot->max_length <= dispType )
LABEL_25:
    sub_1BC326C(hpLabel, *(_QWORD *)&dispType, v6);
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
  const MethodInfo *v26; // x3
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
  int32_t ServantImageLimitSealAfter; // w23
  UISprite_o *servantIcon; // x24
  int32_t v102; // w25
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
  int v144; // [xsp+Ch] [xbp-74h] BYREF
  int32_t MaxHp; // [xsp+10h] [xbp-70h] BYREF
  int32_t iconLevel_k__BackingField; // [xsp+14h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF
  int32_t svtId[2]; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v149; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v150; // 0:s0.4,4:s1.4,8:s2.4

  v3 = pieceData;
  v4 = this;
  if ( (byte_4AFFDAE & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, pieceData);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_1BC3008(&int_TypeInfo, v10);
    sub_1BC3008(&LocalizationManager_TypeInfo, v11);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_1BC3008(&StringLiteral_15255/*"WARBOARD_INFO_POPUP_SVT_HP"*/, v14);
    sub_1BC3008(&StringLiteral_20046/*"icon_strong_enemy"*/, v15);
    sub_1BC3008(&StringLiteral_22674/*"questinfo_enemyface_bg"*/, v16);
    sub_1BC3008(&StringLiteral_19833/*"hp_gauge_boss"*/, v17);
    sub_1BC3008(&StringLiteral_23055/*"servant_base_{0}"*/, v18);
    sub_1BC3008(&StringLiteral_15254/*"WARBOARD_INFO_POPUP_SVT_DETAIL_BUTTON"*/, v19);
    sub_1BC3008(&StringLiteral_15253/*"WARBOARD_INFO_POPUP_SVT_ATK"*/, v20);
    sub_1BC3008(&StringLiteral_15251/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT"*/, v21);
    sub_1BC3008(&StringLiteral_15256/*"WARBOARD_INFO_POPUP_SVT_LV"*/, v22);
    sub_1BC3008(&StringLiteral_24814/*"{0:#,0} / {1:#,0}"*/, v23);
    this = (WarBoardSimplePopupElementServant_o *)sub_1BC3008(&StringLiteral_15252/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT_COST"*/, v24);
    byte_4AFFDAE = 1;
  }
  *(_QWORD *)svtId = 0LL;
  entity = 0LL;
  if ( !v3 )
    goto LABEL_164;
  if ( WarBoardPieceData__get_isMaster(v3, 0LL) || !v3->fields._battleServant_k__BackingField )
    return;
  v4->fields.pieceData = v3;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.pieceData, (int32_t)v3, v25, v26);
  battleServant_k__BackingField = v3->fields._battleServant_k__BackingField;
  atkLabel = v4->fields.atkLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15253/*"WARBOARD_INFO_POPUP_SVT_ATK"*/, 0LL);
  if ( !atkLabel )
    goto LABEL_164;
  UILabel__set_text(atkLabel, (System_String_o *)this, 0LL);
  hpLabel = v4->fields.hpLabel;
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15255/*"WARBOARD_INFO_POPUP_SVT_HP"*/, 0LL);
  if ( !hpLabel )
    goto LABEL_164;
  UILabel__set_text(hpLabel, (System_String_o *)this, 0LL);
  detailButtonLabel = v4->fields.detailButtonLabel;
  this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15254/*"WARBOARD_INFO_POPUP_SVT_DETAIL_BUTTON"*/, 0LL);
  if ( !detailButtonLabel )
    goto LABEL_164;
  UILabel__set_text(detailButtonLabel, (System_String_o *)this, 0LL);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantNameLabel;
  if ( !this )
    goto LABEL_164;
  UILabel__SetDefaultFont((UILabel_o *)this, 0LL);
  if ( !battleServant_k__BackingField )
    goto LABEL_164;
  servantNameLabel = v4->fields.servantNameLabel;
  this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getServantShortName(
                                                  battleServant_k__BackingField,
                                                  0LL);
  if ( !servantNameLabel )
    goto LABEL_164;
  UILabel__set_text(servantNameLabel, (System_String_o *)this, 0LL);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantNameLabel;
  if ( !this )
    goto LABEL_164;
  UILabel__SetCondensedScale((UILabel_o *)this, v4->fields.servantNameLabelWidth, 0, 0LL);
  pieceStatusLabelComponent = (UnityEngine_Object_o *)v4->fields.pieceStatusLabelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pieceStatusLabelComponent, 0LL, 0LL) )
  {
    this = (WarBoardSimplePopupElementServant_o *)v4->fields.pieceStatusLabelComponent;
    if ( !this )
      goto LABEL_164;
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
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_15256/*"WARBOARD_INFO_POPUP_SVT_LV"*/, 0LL);
    iconLevel_k__BackingField = v3->fields._iconLevel_k__BackingField;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v36, v37, v38);
    this = (WarBoardSimplePopupElementServant_o *)System_String__Format(v35, v39, 0LL);
    if ( !v34 )
      goto LABEL_164;
    UILabel__set_text(v34, (System_String_o *)this, 0LL);
    if ( WarBoardPieceData__get_isEnemyServant(v3, 0LL) && v3->fields._roleType_k__BackingField == 1 )
    {
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantLevel;
      if ( !this )
        goto LABEL_164;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
      if ( !this )
        goto LABEL_164;
      p_z = &v4->fields.positionLevelDanger.fields.z;
      p_x = &v4->fields.positionLevelDanger.fields.x;
      p_y = &v4->fields.positionLevelDanger.fields.y;
    }
    else
    {
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_IsNpc(v3, 0LL);
      if ( !v4->fields.servantLevel )
        goto LABEL_164;
      v43 = (char)this;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)v4->fields.servantLevel,
                                                      0LL);
      if ( (v43 & 1) != 0 )
      {
        if ( !this )
          goto LABEL_164;
        p_z = &v4->fields.positionLevelNpc.fields.z;
        p_x = &v4->fields.positionLevelNpc.fields.x;
        p_y = &v4->fields.positionLevelNpc.fields.y;
      }
      else
      {
        if ( !this )
          goto LABEL_164;
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
  this = (WarBoardSimplePopupElementServant_o *)System_String__Format_62389940(
                                                  (System_String_o *)StringLiteral_24814/*"{0:#,0} / {1:#,0}"*/,
                                                  v48,
                                                  v52,
                                                  0LL);
  if ( !hpValueLabel )
    goto LABEL_164;
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
    this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_164;
    pieceData = (WarBoardPieceData_o *)(LODWORD(this[1].fields.hpBar) == 2);
  }
  if ( !actionCountObj )
    goto LABEL_164;
  UnityEngine_GameObject__SetActive(actionCountObj, (bool)pieceData, 0LL);
  actValueLabel = v4->fields.actValueLabel;
  svtId[0] = v3->fields._currentActionCount_k__BackingField;
  this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)svtId, 0LL);
  if ( !actValueLabel )
    goto LABEL_164;
  UILabel__set_text(actValueLabel, (System_String_o *)this, 0LL);
  frameSprite = v4->fields.frameSprite;
  iconLevel_k__BackingField = v3->fields._forceId_k__BackingField + 1;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v63, v64, v65);
  this = (WarBoardSimplePopupElementServant_o *)System_String__Format((System_String_o *)StringLiteral_23055/*"servant_base_{0}"*/, v66, 0LL);
  if ( !frameSprite )
    goto LABEL_164;
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
        this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_164;
        pieceData = (WarBoardPieceData_o *)(LODWORD(this[1].fields.hpBar) == 2);
      }
      else
      {
        pieceData = 0LL;
      }
      if ( !v69 )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(v69, (bool)pieceData, 0LL);
      this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_HasCost(v3, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        Cost_k__BackingField = v3->fields._Cost_k__BackingField;
        if ( !Cost_k__BackingField )
          goto LABEL_164;
        v71 = v4->fields.actionPointValueLabel;
        svtId[0] = Cost_k__BackingField->fields._CurrentActionPoint_k__BackingField;
        this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)svtId, 0LL);
        if ( !v71 )
          goto LABEL_164;
        UILabel__set_text(v71, (System_String_o *)this, 0LL);
        v72 = v4->fields.frameSprite;
        iconLevel_k__BackingField = v3->fields._forceId_k__BackingField + 1;
        v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v73, v74, v75);
        this = (WarBoardSimplePopupElementServant_o *)System_String__Format(
                                                        (System_String_o *)StringLiteral_23055/*"servant_base_{0}"*/,
                                                        v76,
                                                        0LL);
        if ( !v72 )
          goto LABEL_164;
        UISprite__set_spriteName(v72, (System_String_o *)this, 0LL);
        this = (WarBoardSimplePopupElementServant_o *)v4->fields.actionPountLabelObj;
        if ( !this )
          goto LABEL_164;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        actionPointLabel = v4->fields.actionPointLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (WarBoardSimplePopupElementServant_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_15251/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT"*/,
                                                        0LL);
        if ( !actionPointLabel )
          goto LABEL_164;
        UILabel__set_text(actionPointLabel, (System_String_o *)this, 0LL);
        this = (WarBoardSimplePopupElementServant_o *)v3->fields._Cost_k__BackingField;
        if ( !this )
          goto LABEL_164;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__get_Move((WarBoardCost_o *)this, 0LL);
        if ( !v3->fields._Cost_k__BackingField )
          goto LABEL_164;
        v78 = (int)this;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__get_Attack(v3->fields._Cost_k__BackingField, 0LL);
        if ( !v3->fields._Cost_k__BackingField )
          goto LABEL_164;
        currentActionPointDispLabel = v4->fields.currentActionPointDispLabel;
        v80 = (int)this;
        this = (WarBoardSimplePopupElementServant_o *)WarBoardCost__CurrentAndMaxPointToString(
                                                        v3->fields._Cost_k__BackingField,
                                                        0LL);
        if ( !currentActionPointDispLabel )
          goto LABEL_164;
        UILabel__set_text(currentActionPointDispLabel, (System_String_o *)this, 0LL);
        costDispLabel = v4->fields.costDispLabel;
        v82 = LocalizationManager__Get((System_String_o *)StringLiteral_15252/*"WARBOARD_INFO_POPUP_SVT_ACTION_POINT_COST"*/, 0LL);
        MaxHp = v78;
        v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp, v83, v84, v85);
        v144 = v80;
        v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v144, v87, v88, v89);
        this = (WarBoardSimplePopupElementServant_o *)System_String__Format_62389940(v82, v86, v90, 0LL);
        if ( !costDispLabel )
          goto LABEL_164;
        UILabel__set_text(costDispLabel, (System_String_o *)this, 0LL);
      }
      HasCost = WarBoardPieceData__get_HasCost(v3, 0LL);
      WarBoardSimplePopupElementServant__SetUIPosition(v4, HasCost, v92);
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.actionCountObj;
      if ( !this )
        goto LABEL_164;
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
  svtId[1] = npcImageSvtId_k__BackingField;
  npcDispLimitCount_k__BackingField = v3->fields._npcDispLimitCount_k__BackingField;
  if ( npcDispLimitCount_k__BackingField <= 0 )
    npcDispLimitCount_k__BackingField = v3->fields._iconLimitCount_k__BackingField;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WarBoardSimplePopupElementServant_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_164;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)this,
                                 v3->fields._iconId_k__BackingField,
                                 npcDispLimitCount_k__BackingField,
                                 0LL);
  if ( WarBoardPieceData__get_IsEnemyMonster(v3, 0LL) )
    goto LABEL_92;
  servantIcon = v4->fields.servantIcon;
  v102 = svtId[1];
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v103 = 1;
  if ( !AtlasManager__SetFaceImage(servantIcon, v102, ServantImageLimitSealAfter, 1, 0LL, 0LL) )
  {
LABEL_92:
    this = (WarBoardSimplePopupElementServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_164;
    posAtkValueLabel = (int32_t)this->fields.posAtkValueLabel;
    iconLevel_k__BackingField = svtId[1];
    v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconLevel_k__BackingField, v104, v105, v106);
    MaxHp = npcDispLimitCount_k__BackingField;
    v112 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxHp, v109, v110, v111);
    v113 = System_String__Concat(v108, v112, 0LL);
    enemyIcon = (UISprite_o *)v4->fields.enemyIcon;
    v115 = v113;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( AtlasManager__SetEventUI_39643540(posAtkValueLabel, enemyIcon, v115, 0LL) )
      goto LABEL_99;
    v116 = (UISprite_o *)v4->fields.enemyIcon;
    v117 = System_Int32__ToString((int32_t)&svtId[1], 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( AtlasManager__SetEventUI_39643540(posAtkValueLabel, v116, v117, 0LL) )
LABEL_99:
      WarBoardPieceData__ApplyDisplayType(v3, v4->fields.enemyIcon, 0LL);
    enemyIconBg = v4->fields.enemyIconBg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_39643540(posAtkValueLabel, enemyIconBg, (System_String_o *)StringLiteral_22674/*"questinfo_enemyface_bg"*/, 0LL);
    v103 = 0;
  }
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.servantIcon;
  if ( !this )
    goto LABEL_164;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_164;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v103, 0LL);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.enemyIcon;
  if ( !this )
    goto LABEL_164;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_164;
  v119 = !v103;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v119, 0LL);
  this = (WarBoardSimplePopupElementServant_o *)v4->fields.enemyIconBg;
  if ( !this )
    goto LABEL_164;
  this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_164;
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
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)this,
        v3->fields._iconEquipId_k__BackingField > 0,
        0LL);
    }
    v122 = v4->fields.equipIcon;
    iconEquipId_k__BackingField = v3->fields._iconEquipId_k__BackingField;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(v122, iconEquipId_k__BackingField, 0LL, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)v4->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (WarBoardSimplePopupElementServant_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !this )
        goto LABEL_164;
      this = (WarBoardSimplePopupElementServant_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                      &entity,
                                                      v3->fields._iconEquipId_k__BackingField,
                                                      (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_129;
      if ( !entity )
        goto LABEL_164;
      monitor = (int)entity[5].monitor;
      if ( monitor >= 1 )
        v126 = v3->fields._equipLimitCount_k__BackingField >= monitor;
      else
LABEL_129:
        v126 = 0;
      this = (WarBoardSimplePopupElementServant_o *)v4->fields.equipLimitCountSprite;
      if ( !this )
        goto LABEL_164;
      this = (WarBoardSimplePopupElementServant_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
      if ( !this )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v126, 0LL);
    }
  }
  flameInClassIcon = v4->fields.flameInClassIcon;
  IconClassImageId_k__BackingField = v3->fields._IconClassImageId_k__BackingField;
  iconFrameType_k__BackingField = v3->fields._iconFrameType_k__BackingField;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIcon(
    flameInClassIcon,
    IconClassImageId_k__BackingField,
    iconFrameType_k__BackingField,
    0,
    0,
    0LL);
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
      goto LABEL_164;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19833/*"hp_gauge_boss"*/, 0LL);
  }
  hpBar = (UIBasicSprite_o *)v4->fields.hpBar;
  CurrentHpProgress = WarBoardPieceData__get_CurrentHpProgress(v3, 0LL);
  if ( !hpBar )
LABEL_164:
    sub_1BC3264(this, pieceData);
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
      goto LABEL_164;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive(v4->fields.critecalStarsRoot, 1, 0LL);
      critecalStarsLabel = v4->fields.critecalStarsLabel;
      svtId[0] = WarBoardPieceData__get_CriticalStars(v3, 0LL);
      this = (WarBoardSimplePopupElementServant_o *)System_Int32__ToString((int32_t)svtId, 0LL);
      if ( !critecalStarsLabel )
        goto LABEL_164;
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
      goto LABEL_164;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this = (WarBoardSimplePopupElementServant_o *)WarBoardPieceData__get_IsNpc(v3, 0LL);
    if ( !gameObject )
      goto LABEL_164;
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
                                                          (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( this )
          {
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20046/*"icon_strong_enemy"*/, 0LL);
            this = (WarBoardSimplePopupElementServant_o *)v4->fields.RoleTypeLabel;
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              return;
            }
          }
        }
        goto LABEL_164;
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
  __int64 v8; // x2
  struct BattleServantSkillIConComponent_array *skillIconList; // x8
  WarBoardSimplePopupElementServant_o *v10; // x23
  unsigned __int64 v11; // x24
  struct UnityEngine_GameObject_o **p_breakPointPrefab; // x29
  unsigned __int64 max_length; // x9
  struct BattleServantSkillIConComponent_array *v14; // x8
  int32_t v15; // w25
  BattleServantSkillIConComponent_o *v16; // x26
  BattleSkillInfoData_o *v17; // x27
  bool canUseSkill; // w28

  if ( !data
    || (v5 = this,
        ActiveSkillInfos = BattleServantData__getActiveSkillInfos(data, 0LL),
        this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getSkillSealSelect(data, 0LL),
        (skillIconList = v5->fields.skillIconList) == 0LL) )
  {
LABEL_22:
    sub_1BC3264(this, data);
  }
  v10 = this;
  v11 = 0LL;
  p_breakPointPrefab = &this->fields.breakPointPrefab;
  while ( 1 )
  {
    max_length = skillIconList->max_length;
    if ( (__int64)v11 >= (int)max_length )
      break;
    if ( !ActiveSkillInfos )
      goto LABEL_22;
    if ( (__int64)v11 < (int)ActiveSkillInfos->max_length && isPlayerGroup )
    {
      this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getSkillSealTurn(data, 0LL);
      if ( !v10 )
        goto LABEL_22;
      if ( v11 >= LODWORD(v10->fields.m_CancellationTokenSource) )
LABEL_24:
        sub_1BC326C(this, data, v8);
      if ( *((_BYTE *)p_breakPointPrefab + v11) )
        this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getSkillSealSelectTurn(data, v11, 0LL);
      v14 = v5->fields.skillIconList;
      v15 = (int)this;
      if ( !v14 )
        goto LABEL_22;
      if ( v11 >= v14->max_length )
        goto LABEL_24;
      if ( v11 >= ActiveSkillInfos->max_length )
        goto LABEL_24;
      v16 = v14->m_Items[v11];
      v17 = ActiveSkillInfos->m_Items[v11];
      canUseSkill = BattleServantData__canUseSkill(data, v11, 0LL);
      this = (WarBoardSimplePopupElementServant_o *)BattleServantData__getNotActTurn(data, 0LL);
      if ( v11 >= LODWORD(v10->fields.m_CancellationTokenSource) )
        goto LABEL_24;
      if ( !v16 )
        goto LABEL_22;
      BattleServantSkillIConComponent__SetSkillInfo(
        v16,
        v17,
        canUseSkill,
        v15,
        (int32_t)this,
        *((_BYTE *)p_breakPointPrefab + v11),
        0LL);
    }
    else
    {
      if ( v11 >= max_length )
        goto LABEL_24;
      this = (WarBoardSimplePopupElementServant_o *)skillIconList->m_Items[v11];
      if ( !this )
        goto LABEL_22;
      BattleServantSkillIConComponent__setNoSkill((BattleServantSkillIConComponent_o *)this, 0, 0LL);
    }
    skillIconList = v5->fields.skillIconList;
    ++v11;
    if ( !skillIconList )
      goto LABEL_22;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSimplePopupElementServant__ShowEquipStatus(
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
  int v10; // s0

  if ( (byte_4AFFDB4 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_4AFFDB4 = 1;
  }
  if ( this->fields.pieceData )
  {
    v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
      v4 = sub_1C1346C(v2);
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
    if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
      v5 = sub_1C1346C(v2);
    pieceData = this->fields.pieceData;
    v7 = **(WarBoardManager_o ***)(v5 + 184);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform || (*(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position(transform, 0LL), !v7) )
      sub_1BC3264(transform, v9);
    WarBoardManager__ShowServantEquipSimplePopup(v7, pieceData, *(UnityEngine_Vector3_o *)&v10, 0LL);
  }
}


void __fastcall WarBoardSimplePopupElementServant__UpdateLabel(
        WarBoardSimplePopupElementServant_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpValueLabel; // x20
  __int64 v4; // x1
  UILabel_o *v5; // x0

  if ( (byte_4AFFDB0 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFFDB0 = 1;
  }
  hpValueLabel = (UnityEngine_Object_o *)this->fields.hpValueLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpValueLabel, 0LL, 0LL) )
  {
    v5 = this->fields.hpValueLabel;
    if ( !v5 )
      sub_1BC3264(0LL, v4);
    UILabel__SetCondensedScale(v5, this->fields.HpValueLabelMaxWidth, 0, 0LL);
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
  WarBoardSimplePopupElementServant_o *v6; // x19
  struct UISprite_array *v8; // x8
  struct UISprite_array *v9; // x8
  struct UISprite_array *v10; // x8

  npBars = this->fields.npBars;
  if ( npBars )
  {
    v5 = *(_QWORD *)&npBars->max_length;
    v6 = this;
    if ( v5 )
    {
      if ( !(_DWORD)v5 )
        goto LABEL_27;
      this = (WarBoardSimplePopupElementServant_o *)npBars->m_Items[0];
      if ( !this )
        goto LABEL_26;
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress, 0LL);
      npBars = v6->fields.npBars;
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
        v8 = v6->fields.npBars;
        if ( !v8 )
          goto LABEL_26;
        if ( v8->max_length <= 1 )
          goto LABEL_27;
        this = (WarBoardSimplePopupElementServant_o *)v8->m_Items[1];
        if ( !this )
          goto LABEL_26;
        UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress + -1.0, 0LL);
      }
    }
    v9 = v6->fields.npBars;
    if ( !v9 )
      goto LABEL_26;
    if ( (int)v9->max_length < 3 )
      return;
    this = (WarBoardSimplePopupElementServant_o *)v9->m_Items[2];
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
    v10 = v6->fields.npBars;
    if ( !v10 )
LABEL_26:
      sub_1BC3264(this, method);
    if ( v10->max_length > 2 )
    {
      this = (WarBoardSimplePopupElementServant_o *)v10->m_Items[2];
      if ( this )
      {
        UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, progress + -2.0, 0LL);
        return;
      }
      goto LABEL_26;
    }
LABEL_27:
    sub_1BC326C(this, method, v3);
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

  if ( (byte_4AFFDAF & 1) == 0 )
  {
    sub_1BC3008(&System_Action_UIWidget__TypeInfo, method);
    sub_1BC3008(&Method_BasicHelper_ForEach_UIWidget___, v3);
    sub_1BC3008(
      &Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__0__,
      v4);
    sub_1BC3008(
      &Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__1__,
      v5);
    sub_1BC3008(&WarBoardSimplePopupElementServant___c__DisplayClass55_0_TypeInfo, v6);
    byte_4AFFDAF = 1;
  }
  v7 = sub_1BC3254(WarBoardSimplePopupElementServant___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData || (pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasIconDarkenBuff(pieceData, 0LL), !v7) )
    sub_1BC3264(pieceData, v8);
  *(_BYTE *)(v7 + 16) = (unsigned __int8)pieceData & 1;
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v11 = (System_Action_object__o *)sub_1BC3254(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v11,
      (Il2CppObject *)v7,
      Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__0__,
      0LL);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v11,
      (const MethodInfo_2FEDEFC *)Method_BasicHelper_ForEach_UIWidget___);
  }
  turnDarkUiWidgetsAroundFaceIcon = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundFaceIcon;
  if ( turnDarkUiWidgetsAroundFaceIcon )
  {
    v13 = (System_Action_object__o *)sub_1BC3254(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_WarBoardSimplePopupElementServant___c__DisplayClass55_0__UpdateUiBrightnessByPieceStatus_b__1__,
      0LL);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundFaceIcon,
      (System_Action_T__o *)v13,
      (const MethodInfo_2FEDEFC *)Method_BasicHelper_ForEach_UIWidget___);
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
    sub_1BC3264(this, 0LL);
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
    sub_1BC3264(this, 0LL);
  v4 = 1.0;
  v5 = v3;
  v6 = v3;
  UIWidget__set_color(x, *(UnityEngine_Color_o *)&v3, 0LL);
}