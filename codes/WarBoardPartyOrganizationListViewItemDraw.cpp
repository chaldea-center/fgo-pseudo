void __fastcall WarBoardPartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1
  WarBoardPartyOrganizationListViewItemDraw_c *v11; // x8

  if ( (byte_40F85BA & 1) == 0 )
  {
    sub_B16FFC(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_17380, v8);
    byte_40F85BA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_17380;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17380;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
  v11 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
  WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX = 1000;
  v11->static_fields->CORRECTION_ICON_SINGLE_Y = -20;
  v11->static_fields->CORRECTION_ICON_BONUS_Y = 5;
}


void __fastcall WarBoardPartyOrganizationListViewItemDraw___ctor(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardPartyOrganizationListViewItemDraw__Awake(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *baseSprite; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct UISprite_o *v15; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UISprite_o *v25; // x8
  struct UIAtlas_o *v26; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_40F85B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F85B5 = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.raritySprite;
    if ( !v6 )
      goto LABEL_23;
    transform = UnityEngine_Component__get_transform(v6, 0LL);
    if ( !transform )
      goto LABEL_23;
    this->fields.baseRarityPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v15 = this->fields.baseSprite;
    if ( !v15 )
      goto LABEL_23;
    mAtlas = v15->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.baseDefaultUIAtlas,
      (System_Int32_array **)mAtlas,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
  {
    v25 = this->fields.base2Sprite;
    if ( v25 )
    {
      v26 = v25->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v26;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.base2DefaultUIAtlas,
        (System_Int32_array **)v26,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      goto LABEL_22;
    }
LABEL_23:
    sub_B170D4();
  }
LABEL_22:
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
}


void __fastcall WarBoardPartyOrganizationListViewItemDraw__ClearItem(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UINarrowFigureTexture_o *servantNarrowTexture; // x0
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Component_o *equipSprite; // x0
  UnityEngine_GameObject_o *v15; // x0

  if ( (byte_40F85B6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F85B6 = 1;
  }
  this->fields.linkItem = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  servantNarrowTexture = this->fields.servantNarrowTexture;
  if ( !servantNarrowTexture )
    goto LABEL_15;
  UINarrowFigureTexture__ReleaseCharacter(servantNarrowTexture, 0LL);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
  {
    v12 = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( v12 )
    {
      v13 = UnityEngine_Component__get_gameObject(v12, 0LL);
      if ( v13 )
      {
        UnityEngine_GameObject__SetActive(v13, 0, 0LL);
        equipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
        if ( equipSprite )
        {
          v15 = UnityEngine_Component__get_gameObject(equipSprite, 0LL);
          if ( v15 )
          {
            UnityEngine_GameObject__SetActive(v15, 0, 0LL);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationListViewItemDraw__SetDispEquipOnly(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Component_o *baseSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v7; // w21
  UnityEngine_Component_o *base2Sprite; // x0
  UnityEngine_GameObject_o *v9; // x0
  UINarrowFigureTexture_o *servantNarrowTexture; // x0
  UnityEngine_Component_o *servantClassIcon; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Component_o *supportSprite; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Component_o *levelLabel; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Component_o *raritySprite; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_Component_o *hpLabel; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Component_o *attackLabel; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_Component_o *costLabel; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Component_o *skillListTreasureDevice; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Component_o *svtCommandCardList; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Component_o *bounusIcon; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_Object_o *eventUpValIcon; // x20
  EventUpValIconComponent_o *v34; // x0
  UnityEngine_Object_o *v35; // x20
  ShiningIconComponent_o *v36; // x0
  UnityEngine_Object_o *correctionIconSprite; // x20
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0

  if ( (byte_40F85B9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isDisp);
    byte_40F85B9 = 1;
  }
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_49;
  gameObject = UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !gameObject )
    goto LABEL_49;
  v7 = !isDisp;
  UnityEngine_GameObject__SetActive(gameObject, !isDisp, 0LL);
  base2Sprite = (UnityEngine_Component_o *)this->fields.base2Sprite;
  if ( !base2Sprite )
    goto LABEL_49;
  v9 = UnityEngine_Component__get_gameObject(base2Sprite, 0LL);
  if ( !v9 )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(v9, v7, 0LL);
  servantNarrowTexture = this->fields.servantNarrowTexture;
  if ( !servantNarrowTexture )
    goto LABEL_49;
  UINarrowFigureTexture__SetActive(servantNarrowTexture, v7, 0LL);
  servantClassIcon = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !servantClassIcon )
    goto LABEL_49;
  v12 = UnityEngine_Component__get_gameObject(servantClassIcon, 0LL);
  if ( !v12 )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(v12, v7, 0LL);
  v13 = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !v13 )
    goto LABEL_49;
  v14 = UnityEngine_Component__get_gameObject(v13, 0LL);
  if ( !v14 )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(v14, v7, 0LL);
  supportSprite = (UnityEngine_Component_o *)this->fields.supportSprite;
  if ( !supportSprite )
    goto LABEL_49;
  v16 = UnityEngine_Component__get_gameObject(supportSprite, 0LL);
  if ( !v16 )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(v16, v7, 0LL);
  levelLabel = (UnityEngine_Component_o *)this->fields.levelLabel;
  if ( !levelLabel )
    goto LABEL_49;
  v18 = UnityEngine_Component__get_gameObject(levelLabel, 0LL);
  if ( !v18 )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(v18, v7, 0LL);
  raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !raritySprite )
    goto LABEL_49;
  v20 = UnityEngine_Component__get_gameObject(raritySprite, 0LL);
  if ( !v20 )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(v20, v7, 0LL);
  hpLabel = (UnityEngine_Component_o *)this->fields.hpLabel;
  if ( !hpLabel )
    goto LABEL_49;
  v22 = UnityEngine_Component__get_gameObject(hpLabel, 0LL);
  if ( !v22 )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(v22, v7, 0LL);
  attackLabel = (UnityEngine_Component_o *)this->fields.attackLabel;
  if ( !attackLabel )
    goto LABEL_49;
  v24 = UnityEngine_Component__get_gameObject(attackLabel, 0LL);
  if ( !v24 )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(v24, v7, 0LL);
  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_49;
  v26 = UnityEngine_Component__get_gameObject(costLabel, 0LL);
  if ( !v26 )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(v26, v7, 0LL);
  skillListTreasureDevice = (UnityEngine_Component_o *)this->fields.skillListTreasureDevice;
  if ( !skillListTreasureDevice )
    goto LABEL_49;
  v28 = UnityEngine_Component__get_gameObject(skillListTreasureDevice, 0LL);
  if ( !v28 )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(v28, v7, 0LL);
  svtCommandCardList = (UnityEngine_Component_o *)this->fields.svtCommandCardList;
  if ( !svtCommandCardList )
    goto LABEL_49;
  v30 = UnityEngine_Component__get_gameObject(svtCommandCardList, 0LL);
  if ( !v30 )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(v30, v7, 0LL);
  bounusIcon = (UnityEngine_Component_o *)this->fields.bounusIcon;
  if ( !bounusIcon )
    goto LABEL_49;
  v32 = UnityEngine_Component__get_gameObject(bounusIcon, 0LL);
  if ( !v32 )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(v32, v7, 0LL);
  eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL) )
  {
    v34 = this->fields.eventUpValIcon;
    if ( !v34 )
      goto LABEL_49;
    EventUpValIconComponent__Set(v34, 0LL, -1, -1, -1, 0LL);
    v35 = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
    {
      v36 = this->fields.bounusIcon;
      if ( !v36 )
        goto LABEL_49;
      ShiningIconComponent__Set_33652660(v36, 0, 0LL);
    }
  }
  correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
  {
    v38 = (UnityEngine_Component_o *)this->fields.correctionIconSprite;
    if ( v38 )
    {
      v39 = UnityEngine_Component__get_gameObject(v38, 0LL);
      if ( v39 )
      {
        UnityEngine_GameObject__SetActive(v39, v7, 0LL);
        return;
      }
    }
LABEL_49:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationListViewItemDraw__SetItem(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x0
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  struct UIWidget_o *v48; // x0
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  struct UIWidget_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_Object_o *v52; // x20
  UnityEngine_Component_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_Component_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_Object_o *v57; // x20
  UnityEngine_Component_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *servantFaceIcon; // x22
  ServantFaceIconComponent_o *v62; // x0
  int32_t CardImageLimitCount; // w22
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v67; // w0
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v70; // w22
  int32_t v71; // w0
  int32_t frameType; // w27
  int32_t DispImageLimitCount; // w0
  int32_t v74; // w22
  UserServantEntity_o *userServantEntity; // x0
  SkillInfo_array *v76; // x22
  System_String_o *LevelList_23129292; // x0
  System_String_o *v78; // x24
  UserServantEntity_o *v79; // x0
  SkillInfo_array *v80; // x0
  System_String_o *v81; // x23
  UnityEngine_Object_o *servantClassIcon; // x22
  ServantClassIconComponent_o *v83; // x0
  UnityEngine_Object_o *levelLabel; // x22
  UILabel_o *v85; // x22
  System_String_o *v86; // x0
  UnityEngine_Object_o *raritySprite; // x22
  int32_t rarityId; // w22
  int32_t ExceedCount; // w28
  int32_t Level; // w25
  System_String_o *Icon_21544656; // x28
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t v93; // w22
  ServantExceedMaster_o *v94; // x25
  int32_t v95; // w0
  int32_t RarityIcon; // w22
  WarQuestSelectionMaster_o *v97; // x0
  int32_t v98; // w25
  ServantLvDetailMaster_o *v99; // x26
  int32_t v100; // w0
  int32_t v101; // w8
  struct FollowerInfo_o *followerInfo; // x8
  int imageSvtId; // w22
  UnityEngine_Object_o *v104; // x24
  ServantFaceIconComponent_o *v105; // x24
  ServantLeaderInfo_o *ServantLeader; // x0
  int32_t v107; // w24
  WebViewManager_o *v108; // x0
  ServantLimitImageMaster_o *v109; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // kr10_16
  int32_t v111; // w0
  int32_t v112; // w24
  UINarrowFigureTexture_o *v113; // x0
  ServantLeaderInfo_o *v114; // x0
  ServantLeaderInfo_o *v115; // x0
  SkillInfo_array *v116; // x22
  System_String_o *v117; // x0
  ServantLeaderInfo_o *v118; // x0
  ServantLeaderInfo_o *v119; // x22
  bool IsNpc; // w0
  SkillInfo_array *v121; // x22
  UISprite_o *v122; // x22
  UISprite_o *v123; // x0
  struct UISprite_o *v124; // x0
  float y; // s8
  float x; // s10
  float z; // s9
  int32_t v128; // w8
  UnityEngine_Component_o *v129; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *attackLabel; // x22
  int v132; // s0
  UIWidget_o *v136; // x0
  UILabel_o *v137; // x22
  System_String_o *v138; // x0
  UnityEngine_Object_o *hpLabel; // x22
  int v140; // s0
  UIWidget_o *v144; // x0
  UILabel_o *v145; // x22
  System_String_o *v146; // x0
  UnityEngine_Object_o *costLabel; // x22
  int32_t EquipCost; // w0
  UILabel_o *v149; // x28
  int v150; // w22
  int32_t MainCost; // w0
  Il2CppObject *v152; // x25
  Il2CppObject *v153; // x0
  System_String_o *v154; // x0
  System_String_o *v155; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  SkillListTreasureDeviceComponent_o *v157; // x0
  struct System_Collections_Generic_List_UIWidget__o *v158; // x0
  UnityEngine_Object_o *appendSkillList; // x22
  UnityEngine_Component_o *v160; // x0
  UnityEngine_GameObject_o *v161; // x0
  struct System_Collections_Generic_List_UIWidget__o *v162; // x0
  UnityEngine_Component_o *v163; // x0
  UnityEngine_GameObject_o *v164; // x0
  AppendSkillListComponent_o *v165; // x0
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v167; // x0
  SwitchUIWidgetComponent_o *v168; // x22
  UIWidget_array *v169; // x0
  UnityEngine_Object_o *svtCommandCardList; // x22
  ServantLeaderInfo_o *v171; // x0
  System_Int32_array *commandCardParam; // x23
  ServantCommandCardListComponent_o *v173; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v174; // kr20_16
  int32_t v175; // w0
  UnityEngine_Object_o *v176; // x22
  ServantFaceIconComponent_o *v177; // x0
  UINarrowFigureTexture_o *v178; // x0
  UnityEngine_Object_o *v179; // x22
  ServantClassIconComponent_o *v180; // x0
  UnityEngine_Object_o *v181; // x22
  UILabel_o *v182; // x0
  UnityEngine_Object_o *v183; // x22
  UISprite_o *v184; // x0
  UnityEngine_Object_o *v185; // x22
  UILabel_o *v186; // x0
  UnityEngine_Object_o *v187; // x22
  UILabel_o *v188; // x0
  UnityEngine_Object_o *v189; // x22
  UILabel_o *v190; // x0
  UnityEngine_Object_o *v191; // x22
  SkillListTreasureDeviceComponent_o *v192; // x0
  UnityEngine_Object_o *v193; // x22
  AppendSkillListComponent_o *v194; // x0
  UnityEngine_Object_o *v195; // x22
  ServantCommandCardListComponent_o *v196; // x0
  UnityEngine_Object_o *v197; // x22
  UISprite_o *v198; // x0
  UnityEngine_Object_o *v199; // x22
  UnityEngine_Component_o *v200; // x0
  UnityEngine_GameObject_o *v201; // x0
  UnityEngine_Component_o *v202; // x0
  UnityEngine_GameObject_o *v203; // x0
  UnityEngine_Object_o *v204; // x22
  UnityEngine_Component_o *v205; // x0
  UnityEngine_GameObject_o *v206; // x0
  UnityEngine_Object_o *v207; // x22
  const MethodInfo *v208; // x2
  UISprite_o *v209; // x0
  UnityEngine_Object_o *v210; // x21
  UnityEngine_Component_o *v211; // x0
  UnityEngine_GameObject_o *v212; // x0
  UnityEngine_Object_o *v213; // x21
  UnityEngine_Component_o *v214; // x0
  UnityEngine_GameObject_o *v215; // x0
  UILabel_o *v216; // x0
  bool isEventUpVal; // w23
  ServantCommandCardListComponent_o *v218; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v219; // kr30_16
  int32_t v220; // w0
  UnityEngine_Object_o *supportSprite; // x22
  UserServantEntity_o *v222; // x0
  UISprite_o *v223; // x0
  __int64 *v224; // x8
  System_String_o *v225; // x1
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  UnityEngine_Component_o *v227; // x0
  struct FollowerInfo_o *v228; // x22
  UnityEngine_GameObject_o *v229; // x0
  UnityEngine_Object_o *fixNpcMessageText; // x22
  UnityEngine_Component_o *v231; // x0
  struct FollowerInfo_o *v232; // x22
  UnityEngine_GameObject_o *v233; // x0
  UILabel_o *v234; // x22
  System_String_o *v235; // x0
  UnityEngine_Object_o *noneEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr40_16
  int32_t v238; // w0
  int32_t v239; // w23
  UnityEngine_GameObject_o *v240; // x0
  UnityEngine_Component_o *v241; // x0
  UnityEngine_GameObject_o *v242; // x0
  UISprite_o *v243; // x22
  UnityEngine_Object_o *v244; // x22
  int32_t EquipLimitCountMax; // w0
  int32_t v246; // w23
  UnityEngine_GameObject_o *v247; // x0
  UnityEngine_GameObject_o *v248; // x22
  bool v249; // w1
  UnityEngine_Component_o *equipSprite; // x0
  UnityEngine_GameObject_o *v251; // x0
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  UnityEngine_Component_o *v253; // x0
  UnityEngine_GameObject_o *v254; // x0
  UnityEngine_Object_o *correctionIconSprite; // x22
  UISprite_o *v256; // x0
  UnityEngine_Transform_o *v257; // x0
  struct EventMargeItemUpValInfo_array *v258; // x8
  float v259; // s8
  float v260; // s9
  WarBoardPartyOrganizationListViewItemDraw_c *v261; // x0
  int *p_CORRECTION_ICON_BONUS_Y; // x8
  WarBoardPartyOrganizationListViewItemDraw_c *v263; // x0
  UnityEngine_Component_o *v264; // x0
  int v265; // s10
  UnityEngine_Transform_o *v266; // x0
  UISprite_o *v267; // x21
  System_String_o *v268; // x0
  System_String_o *v269; // x0
  struct UISprite_o *v270; // x0
  UnityEngine_Object_o *restrictionClassSprite; // x21
  UnityEngine_Component_o *v272; // x0
  UnityEngine_GameObject_o *v273; // x0
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v275; // x22
  UIAtlas_o *baseDefaultUIAtlas; // x21
  UnityEngine_Object_o *base2Sprite; // x21
  UISprite_o *v278; // x22
  UIAtlas_o *base2DefaultUIAtlas; // x21
  UnityEngine_Object_o *eventUpValIcon; // x21
  EventUpValIconComponent_o *v281; // x21
  EventMargeItemUpValInfo_array *v282; // x0
  UnityEngine_Object_o *bounusIcon; // x20
  ShiningIconComponent_o *v284; // x0
  bool v285; // w1
  UnityEngine_Object_o *v286; // x20
  UnityEngine_Object_o *baseButton; // x20
  struct UICommonButton_o *v288; // x0
  int32_t lv; // [xsp+Ch] [xbp-B4h]
  __int64 tdStrengthStatus; // [xsp+10h] [xbp-B0h]
  int v291; // [xsp+18h] [xbp-A8h] BYREF
  int32_t v292; // [xsp+1Ch] [xbp-A4h] BYREF
  __int64 v293; // [xsp+20h] [xbp-A0h] BYREF
  SkillInfo_array *v294; // [xsp+28h] [xbp-98h] BYREF
  TreasureDvcInfo_o *v295; // [xsp+30h] [xbp-90h] BYREF
  SkillInfo_array *v296; // [xsp+38h] [xbp-88h] BYREF
  SkillInfo_array *v297; // [xsp+40h] [xbp-80h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v300; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v301; // 0:x0.16
  UnityEngine_Vector3_o v302; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v304; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F85B7 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantExceedMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&int_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Clear__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___66732000, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v21);
    sub_B16FFC(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v22);
    sub_B16FFC(&LocalizationManager_TypeInfo, v23);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v24);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_B16FFC(&Rarity_TypeInfo, v26);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B16FFC(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v28);
    sub_B16FFC(&StringLiteral_19303, v29);
    sub_B16FFC(&StringLiteral_690, v30);
    sub_B16FFC(&StringLiteral_17640, v31);
    sub_B16FFC(&StringLiteral_19267, v32);
    sub_B16FFC(&StringLiteral_10359, v33);
    sub_B16FFC(&StringLiteral_340, v34);
    sub_B16FFC(&StringLiteral_1, v35);
    byte_40F85B7 = 1;
  }
  skillInfoList = 0LL;
  v297 = 0LL;
  tdInfo = 0LL;
  v295 = 0LL;
  v296 = 0LL;
  v293 = 0LL;
  v294 = 0LL;
  this->fields.linkItem = item;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.linkItem,
    (System_Int32_array **)item,
    *(System_String_array ***)&mode,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                                  v36,
                                                                                                  v37,
                                                                                                  v38,
                                                                                                  v39);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !item )
    goto LABEL_455;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)item->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                                    v41,
                                                                                                    v42,
                                                                                                    v43,
                                                                                                    v44);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v40,
      eventUpValItemList,
      (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___66732000);
  }
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_455;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchSkillUIList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
  {
    v48 = this->fields.skillInfoUiWidget;
    if ( !v48 )
      goto LABEL_455;
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))v48->klass->vtable._8_set_alpha.method)(
      v48,
      v48->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      0.0);
  }
  appendSkillInfoUiWidget = (UnityEngine_Object_o *)this->fields.appendSkillInfoUiWidget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0LL, 0LL) )
  {
    v50 = this->fields.appendSkillInfoUiWidget;
    if ( !v50 )
      goto LABEL_455;
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))v50->klass->vtable._8_set_alpha.method)(
      v50,
      v50->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      0.0);
  }
  if ( (mode | 4) != 4 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_455;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( item->fields.userServantEntity )
    {
      servantFaceIcon = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0LL, 0LL) )
      {
        v62 = this->fields.servantFaceIcon;
        if ( !v62 )
          goto LABEL_455;
        ServantFaceIconComponent__Set(
          v62,
          item->fields.userServantEntity,
          0LL,
          item->fields.questRestrictionInfo,
          0LL,
          0LL,
          0LL);
      }
      CardImageLimitCount = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0LL);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_455;
      MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(SvtId, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_455;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     MasterData_WarQuestSelectionMaster,
                                     v67,
                                     CardImageLimitCount,
                                     0LL);
      servantNarrowTexture = this->fields.servantNarrowTexture;
      v70 = ServantImageLimitSealAfter;
      v300 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v300, 0LL);
      if ( !servantNarrowTexture )
        goto LABEL_455;
      UINarrowFigureTexture__SetCharacter(servantNarrowTexture, v71, v70, 0LL, 0LL);
      frameType = item->fields.frameType;
      DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(item, 0LL);
      if ( !item->fields.userServantEntity )
        goto LABEL_455;
      v74 = DispImageLimitCount;
      UserServantEntity__getSkillInfo(
        item->fields.userServantEntity,
        &skillInfoList,
        -1,
        DispImageLimitCount,
        1,
        0,
        -1,
        0LL);
      userServantEntity = item->fields.userServantEntity;
      if ( !userServantEntity )
        goto LABEL_455;
      UserServantEntity__getTreasureDeviceInfo(userServantEntity, &tdInfo, -1, v74, 0, 0LL);
      v76 = skillInfoList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      LevelList_23129292 = LocalizationManager__GetLevelList_23129292(v76, 0LL);
      if ( !tdInfo )
        goto LABEL_455;
      v78 = LevelList_23129292;
      v79 = item->fields.userServantEntity;
      if ( !v79 )
        goto LABEL_455;
      HIDWORD(tdStrengthStatus) = tdInfo->fields.strengthStatus;
      lv = tdInfo->fields.lv;
      LODWORD(tdStrengthStatus) = tdInfo->fields.treasureDeviceNum;
      UserServantEntity__GetAppendPassiveSkillInfo_21474452(v79, &v297, 0LL);
      v80 = v297;
    }
    else
    {
      followerInfo = item->fields.followerInfo;
      v81 = (System_String_o *)StringLiteral_1;
      if ( !followerInfo )
      {
        tdStrengthStatus = 0LL;
        lv = 0;
        frameType = 9;
        v78 = (System_String_o *)StringLiteral_1;
        goto LABEL_59;
      }
      imageSvtId = followerInfo->fields.imageSvtId;
      v104 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v104, 0LL, 0LL) )
      {
        v105 = this->fields.servantFaceIcon;
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
        if ( !v105 )
          goto LABEL_455;
        ServantFaceIconComponent__Set_30632248(v105, ServantLeader, 0LL, 0LL, 0, imageSvtId, 0LL);
      }
      v107 = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0LL);
      v108 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v108 )
        goto LABEL_455;
      v109 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)v108,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v110 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v110, 0LL);
      if ( !v109 )
        goto LABEL_455;
      v112 = ServantLimitImageMaster__GetServantImageLimitSealAfter(v109, v111, v107, 0LL);
      if ( imageSvtId <= 0 )
      {
        v301 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
        imageSvtId = BasicHelper__DecryptValue_19259816(v301, 0LL);
      }
      v113 = this->fields.servantNarrowTexture;
      if ( !v113 )
        goto LABEL_455;
      UINarrowFigureTexture__SetCharacter(v113, imageSvtId, v112, 0LL, 0LL);
      frameType = item->fields.frameType;
      v114 = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !v114 )
        goto LABEL_455;
      ServantLeaderInfo__getSkillInfo(v114, &v296, 0LL);
      v115 = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !v115 )
        goto LABEL_455;
      ServantLeaderInfo__getTreasureDeviceInfo(v115, &v295, 0LL);
      v116 = v296;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v117 = LocalizationManager__GetLevelList_23129292(v116, 0LL);
      if ( !v295 )
        goto LABEL_455;
      v78 = v117;
      lv = v295->fields.lv;
      LODWORD(tdStrengthStatus) = v295->fields.treasureDeviceNum;
      HIDWORD(tdStrengthStatus) = v295->fields.strengthStatus;
      v118 = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !item->fields.followerInfo )
        goto LABEL_455;
      v119 = v118;
      IsNpc = FollowerInfo__get_IsNpc(item->fields.followerInfo, 0LL);
      if ( !v119 )
        goto LABEL_455;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_29632824(v119, &v294, IsNpc, 0LL);
      v121 = v294;
      if ( !v294 )
      {
LABEL_59:
        if ( item->fields.userServantEntity || item->fields.followerInfo )
        {
          servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
          {
            v83 = this->fields.servantClassIcon;
            if ( !v83 )
              goto LABEL_455;
            ServantClassIconComponent__SetImage(v83, item->fields.classId, item->fields.frameType, 0LL);
          }
          levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
          {
            v85 = this->fields.levelLabel;
            HIDWORD(v293) = PartyOrganizationListViewItem__get_Level(item, 0LL);
            v86 = System_Int32__ToString((int32_t)&v293 + 4, 0LL);
            if ( !v85 )
              goto LABEL_455;
            UILabel__set_text(v85, v86, 0LL);
          }
          raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
          {
            rarityId = item->fields.rarityId;
            ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
            Level = PartyOrganizationListViewItem__get_Level(item, 0LL);
            if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            Icon_21544656 = Rarity__getIcon_21544656(rarityId, ExceedCount, Level, 0LL);
            if ( PartyOrganizationListViewItem__get_ExceedCount(item, 0LL) < 1 )
            {
              v101 = 0;
            }
            else
            {
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantExceedMaster___);
              v93 = item->fields.rarityId;
              v94 = (ServantExceedMaster_o *)Master_WarQuestSelectionMaster;
              v95 = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
              if ( !v94 )
                goto LABEL_455;
              RarityIcon = ServantExceedMaster__GetRarityIcon(v94, v93, v95, 0, 0LL);
              v97 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
              v98 = item->fields.rarityId;
              v99 = (ServantLvDetailMaster_o *)v97;
              v100 = PartyOrganizationListViewItem__get_Level(item, 0LL);
              if ( !v99 )
                goto LABEL_455;
              v101 = ServantLvDetailMaster__GetRarityIcon(v99, v98, v100, RarityIcon, 0LL);
            }
            v122 = this->fields.raritySprite;
            if ( v101 >= 3 )
            {
              if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetEventSprite(v122, Icon_21544656, 0LL);
            }
            else
            {
              if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetCommon(v122, 0LL);
            }
            v123 = this->fields.raritySprite;
            if ( !v123 )
              goto LABEL_455;
            UISprite__set_spriteName(v123, Icon_21544656, 0LL);
            v124 = this->fields.raritySprite;
            if ( !v124 )
              goto LABEL_455;
            ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v124->klass->vtable._33_MakePixelPerfect.method)(
              v124,
              v124->klass->vtable._34_get_minWidth.methodPtr);
            x = this->fields.baseRarityPosition.fields.x;
            y = this->fields.baseRarityPosition.fields.y;
            z = this->fields.baseRarityPosition.fields.z;
            v128 = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
            v129 = (UnityEngine_Component_o *)this->fields.raritySprite;
            if ( v128 >= 1 )
              x = x + 1.0;
            if ( !v129 )
              goto LABEL_455;
            transform = UnityEngine_Component__get_transform(v129, 0LL);
            if ( !transform )
              goto LABEL_455;
            v302.fields.x = x;
            v302.fields.y = y;
            v302.fields.z = z;
            UnityEngine_Transform__set_localPosition(transform, v302, 0LL);
          }
          attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
          {
            if ( PartyOrganizationListViewItem__get_AdjustAtk(item, 0LL) <= 0 )
              *(UnityEngine_Color_o *)&v132 = UnityEngine_Color__get_white(0LL);
            else
              *(UnityEngine_Color_o *)&v132 = UnityEngine_Color__get_yellow(0LL);
            v136 = (UIWidget_o *)this->fields.attackLabel;
            if ( !v136 )
              goto LABEL_455;
            UIWidget__set_color(v136, *(UnityEngine_Color_o *)&v132, 0LL);
            v137 = this->fields.attackLabel;
            HIDWORD(v293) = PartyOrganizationListViewItem__get_MargeAtk(item, 0LL);
            v138 = System_Int32__ToString_38275808((int32_t)&v293 + 4, (System_String_o *)StringLiteral_340, 0LL);
            if ( !v137 )
              goto LABEL_455;
            UILabel__set_text(v137, v138, 0LL);
          }
          hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
          {
            if ( PartyOrganizationListViewItem__get_AdjustHp(item, 0LL) <= 0 )
              *(UnityEngine_Color_o *)&v140 = UnityEngine_Color__get_white(0LL);
            else
              *(UnityEngine_Color_o *)&v140 = UnityEngine_Color__get_yellow(0LL);
            v144 = (UIWidget_o *)this->fields.hpLabel;
            if ( !v144 )
              goto LABEL_455;
            UIWidget__set_color(v144, *(UnityEngine_Color_o *)&v140, 0LL);
            v145 = this->fields.hpLabel;
            HIDWORD(v293) = PartyOrganizationListViewItem__get_MargeHp(item, 0LL);
            v146 = System_Int32__ToString_38275808((int32_t)&v293 + 4, (System_String_o *)StringLiteral_340, 0LL);
            if ( !v145 )
              goto LABEL_455;
            UILabel__set_text(v145, v146, 0LL);
          }
          costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(costLabel, 0LL, 0LL) )
          {
            EquipCost = PartyOrganizationListViewItem__get_EquipCost(item, 0LL);
            v149 = this->fields.costLabel;
            v150 = EquipCost;
            MainCost = PartyOrganizationListViewItem__get_MainCost(item, 0LL);
            if ( (v150 & 0x80000000) != 0 )
            {
              HIDWORD(v293) = MainCost;
              v155 = System_Int32__ToString((int32_t)&v293 + 4, 0LL);
              if ( !v149 )
                goto LABEL_455;
              UILabel__set_text(v149, v155, 0LL);
            }
            else
            {
              v292 = MainCost;
              v152 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v292);
              v291 = v150;
              v153 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v291);
              v154 = System_String__Concat_43823436(v152, (Il2CppObject *)StringLiteral_690, v153, 0LL);
              if ( !v149 )
                goto LABEL_455;
              UILabel__set_text(v149, v154, 0LL);
            }
          }
          skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
          {
            v157 = this->fields.skillListTreasureDevice;
            if ( !v157 )
              goto LABEL_455;
            SkillListTreasureDeviceComponent__Set(v157, v78, lv, SHIDWORD(tdStrengthStatus), tdStrengthStatus, 0, 0LL);
            if ( !System_String__IsNullOrEmpty(v78, 0LL) )
            {
              v158 = this->fields.switchSkillUIList;
              if ( v158 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v158,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInfoUiWidget,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
            }
          }
          appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
          {
            if ( System_String__IsNullOrEmpty(v81, 0LL) )
            {
              v160 = (UnityEngine_Component_o *)this->fields.appendSkillList;
              if ( !v160 )
                goto LABEL_455;
              v161 = UnityEngine_Component__get_gameObject(v160, 0LL);
              if ( !v161 )
                goto LABEL_455;
              UnityEngine_GameObject__SetActive(v161, 0, 0LL);
            }
            else
            {
              v162 = this->fields.switchSkillUIList;
              if ( v162 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v162,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.appendSkillInfoUiWidget,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
              v163 = (UnityEngine_Component_o *)this->fields.appendSkillList;
              if ( !v163 )
                goto LABEL_455;
              v164 = UnityEngine_Component__get_gameObject(v163, 0LL);
              if ( !v164 )
                goto LABEL_455;
              UnityEngine_GameObject__SetActive(v164, 1, 0LL);
              v165 = this->fields.appendSkillList;
              if ( !v165 )
                goto LABEL_455;
              AppendSkillListComponent__Set(v165, v81, 0LL);
            }
          }
          switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
          {
            v167 = this->fields.switchSkillUIList;
            if ( v167 )
            {
              v168 = this->fields.switchSkillInfo;
              v169 = (UIWidget_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v167,
                                         (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
              if ( !v168 )
                goto LABEL_455;
              SwitchUIWidgetComponent__Set(v168, v169, 0LL);
            }
          }
          svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
          {
            if ( item->fields.followerInfo )
            {
              if ( PartyOrganizationListViewItem__get_ServantLeader(item, 0LL) )
              {
                v171 = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
                if ( !v171 )
                  goto LABEL_455;
                commandCardParam = v171->fields.commandCardParam;
              }
              else
              {
                commandCardParam = 0LL;
              }
              v218 = this->fields.svtCommandCardList;
              v219 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              v220 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v219, 0LL);
              if ( v218 )
              {
                ServantCommandCardListComponent__Set_30472172(
                  v218,
                  v220,
                  commandCardParam,
                  item->fields.commandCodeIdList,
                  2,
                  0,
                  0LL);
                goto LABEL_314;
              }
LABEL_455:
              sub_B170D4();
            }
            v173 = this->fields.svtCommandCardList;
            v174 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            v175 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v174, 0LL);
            if ( !v173 )
              goto LABEL_455;
            ServantCommandCardListComponent__Set_30472432(v173, v175, item->fields.commandCodeIdList, 2, 0, 0LL);
          }
LABEL_314:
          supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
          {
LABEL_328:
            fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0LL, 0LL) )
            {
              v227 = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
              if ( !v227 )
                goto LABEL_455;
              v228 = item->fields.followerInfo;
              v229 = UnityEngine_Component__get_gameObject(v227, 0LL);
              if ( !v229 )
                goto LABEL_455;
              UnityEngine_GameObject__SetActive(v229, v228 != 0LL, 0LL);
            }
            fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0LL, 0LL) )
            {
              v231 = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
              if ( !v231 )
                goto LABEL_455;
              v232 = item->fields.followerInfo;
              v233 = UnityEngine_Component__get_gameObject(v231, 0LL);
              if ( !v233 )
                goto LABEL_455;
              if ( v232 )
              {
                UnityEngine_GameObject__SetActive(v233, 1, 0LL);
                v234 = this->fields.fixNpcMessageText;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v235 = LocalizationManager__Get((System_String_o *)StringLiteral_10359, 0LL);
                if ( !v234 )
                  goto LABEL_455;
                UILabel__set_text(v234, v235, 0LL);
              }
              else
              {
                UnityEngine_GameObject__SetActive(v233, 0, 0LL);
              }
            }
            noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
              goto LABEL_383;
            EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(item, 0LL);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            v238 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(EquipSvtId, 0LL);
            if ( !this->fields.noneEquipSprite )
              goto LABEL_455;
            v239 = v238;
            v240 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.noneEquipSprite, 0LL);
            if ( !v240 )
              goto LABEL_455;
            if ( v239 < 1 )
            {
              UnityEngine_GameObject__SetActive(v240, 1, 0LL);
              equipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
              if ( !equipSprite )
                goto LABEL_455;
              v251 = UnityEngine_Component__get_gameObject(equipSprite, 0LL);
              if ( !v251 )
                goto LABEL_455;
              UnityEngine_GameObject__SetActive(v251, 0, 0LL);
              equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
                goto LABEL_383;
              v253 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
              if ( !v253 )
                goto LABEL_455;
              v254 = UnityEngine_Component__get_gameObject(v253, 0LL);
              if ( !v254 )
                goto LABEL_455;
              v249 = 0;
            }
            else
            {
              UnityEngine_GameObject__SetActive(v240, 0, 0LL);
              v241 = (UnityEngine_Component_o *)this->fields.equipSprite;
              if ( !v241 )
                goto LABEL_455;
              v242 = UnityEngine_Component__get_gameObject(v241, 0LL);
              if ( !v242 )
                goto LABEL_455;
              UnityEngine_GameObject__SetActive(v242, 1, 0LL);
              v243 = (UISprite_o *)this->fields.equipSprite;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetEquipFace(v243, v239, 0LL);
              v244 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(v244, 0LL, 0LL) )
                goto LABEL_383;
              EquipLimitCountMax = PartyOrganizationListViewItem__get_EquipLimitCountMax(item, 0LL);
              if ( !this->fields.equipLimitCountSprite )
                goto LABEL_455;
              v246 = EquipLimitCountMax;
              v247 = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                       0LL);
              v248 = v247;
              if ( v246 < 1 )
              {
                v249 = 0;
                if ( !v247 )
                  goto LABEL_455;
              }
              else
              {
                v249 = PartyOrganizationListViewItem__get_EquipLimitCount(item, 0LL) >= v246;
                if ( !v248 )
                  goto LABEL_455;
              }
              v254 = v248;
            }
            UnityEngine_GameObject__SetActive(v254, v249, 0LL);
LABEL_383:
            correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
            isEventUpVal = item->fields.isEventUpVal;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
            {
              LODWORD(v293) = PartyOrganizationListViewItem__GetCorrectionIconId(item, 0LL);
              v256 = this->fields.correctionIconSprite;
              if ( !v256 )
                goto LABEL_455;
              if ( (v293 & 0x80000000) != 0 )
              {
                UISprite__set_spriteName(v256, 0LL, 0LL);
              }
              else
              {
                v257 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v256, 0LL);
                if ( !v257 )
                  goto LABEL_455;
                localPosition = UnityEngine_Transform__get_localPosition(v257, 0LL);
                v258 = item->fields.eventUpValItemList;
                v259 = localPosition.fields.x;
                v260 = localPosition.fields.z;
                if ( v258 && *(_QWORD *)&v258->max_length )
                {
                  v261 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
                  if ( (BYTE3(WarBoardPartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
                    v261 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
                  }
                  p_CORRECTION_ICON_BONUS_Y = &v261->static_fields->CORRECTION_ICON_BONUS_Y;
                }
                else
                {
                  v263 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
                  if ( (BYTE3(WarBoardPartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
                    v263 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
                  }
                  p_CORRECTION_ICON_BONUS_Y = &v263->static_fields->CORRECTION_ICON_SINGLE_Y;
                }
                v264 = (UnityEngine_Component_o *)this->fields.correctionIconSprite;
                if ( !v264 )
                  goto LABEL_455;
                v265 = *p_CORRECTION_ICON_BONUS_Y;
                v266 = UnityEngine_Component__get_transform(v264, 0LL);
                if ( !v266 )
                  goto LABEL_455;
                v304.fields.y = (float)v265;
                v304.fields.x = v259;
                v304.fields.z = v260;
                UnityEngine_Transform__set_localPosition(v266, v304, 0LL);
                v267 = this->fields.correctionIconSprite;
                v268 = System_Int32__ToString((int32_t)&v293, 0LL);
                v269 = System_String__Concat_43743732((System_String_o *)StringLiteral_17640, v268, 0LL);
                if ( !v267 )
                  goto LABEL_455;
                UISprite__set_spriteName(v267, v269, 0LL);
                v270 = this->fields.correctionIconSprite;
                if ( !v270 )
                  goto LABEL_455;
                ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v270->klass->vtable._33_MakePixelPerfect.method)(
                  v270,
                  v270->klass->vtable._34_get_minWidth.methodPtr);
              }
            }
            restrictionClassSprite = (UnityEngine_Object_o *)this->fields.restrictionClassSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(restrictionClassSprite, 0LL, 0LL) )
            {
              v272 = (UnityEngine_Component_o *)this->fields.restrictionClassSprite;
              if ( !v272 )
                goto LABEL_455;
              v273 = UnityEngine_Component__get_gameObject(v272, 0LL);
              if ( !v273 )
                goto LABEL_455;
              UnityEngine_GameObject__SetActive(v273, 0, 0LL);
            }
LABEL_413:
            baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
            {
              v275 = this->fields.baseSprite;
              baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetFormationBase(v275, frameType, baseDefaultUIAtlas, 0, 0LL);
            }
            base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
            {
              v278 = this->fields.base2Sprite;
              base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetFormationFrame(v278, frameType, base2DefaultUIAtlas, 0, 0LL);
            }
            eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL) )
            {
              if ( !v40 )
                goto LABEL_455;
              v281 = this->fields.eventUpValIcon;
              v282 = (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v40,
                                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
              if ( !v281 )
                goto LABEL_455;
              EventUpValIconComponent__Set(v281, v282, -1, -1, -1, 0LL);
              bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
                goto LABEL_448;
              v284 = this->fields.bounusIcon;
              if ( !v284 )
                goto LABEL_455;
              v285 = 0;
            }
            else
            {
              v286 = (UnityEngine_Object_o *)this->fields.bounusIcon;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(v286, 0LL, 0LL) )
              {
LABEL_448:
                baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
                {
                  v288 = this->fields.baseButton;
                  if ( !v288 )
                    goto LABEL_455;
                  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v288->klass->vtable._14_SetState.method)(
                    v288,
                    0LL,
                    1LL,
                    v288->klass->vtable._15_OnPress.methodPtr);
                }
                return;
              }
              v284 = this->fields.bounusIcon;
              if ( !v284 )
                goto LABEL_455;
              v285 = isEventUpVal;
            }
            ShiningIconComponent__Set_33652660(v284, v285, 0LL);
            goto LABEL_448;
          }
          v222 = item->fields.userServantEntity;
          if ( v222 && UserServantEntity__IsEventJoin(v222, 0LL) )
          {
            v223 = this->fields.supportSprite;
            if ( !v223 )
              goto LABEL_455;
            v224 = &StringLiteral_19267;
          }
          else
          {
            v223 = this->fields.supportSprite;
            if ( !v223 )
              goto LABEL_455;
            if ( !item->fields.followerInfo )
            {
              v225 = 0LL;
              goto LABEL_327;
            }
            v224 = &StringLiteral_19303;
          }
          v225 = (System_String_o *)*v224;
LABEL_327:
          UISprite__set_spriteName(v223, v225, 0LL);
          goto LABEL_328;
        }
        v176 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v176, 0LL, 0LL) )
        {
          v177 = this->fields.servantFaceIcon;
          if ( !v177 )
            goto LABEL_455;
          ServantFaceIconComponent__Clear(v177, 0LL);
        }
        v178 = this->fields.servantNarrowTexture;
        if ( v178 )
        {
          UINarrowFigureTexture__ReleaseCharacter(v178, 0LL);
          v179 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v179, 0LL, 0LL) )
          {
            v180 = this->fields.servantClassIcon;
            if ( !v180 )
              goto LABEL_455;
            ServantClassIconComponent__Clear(v180, 0LL);
          }
          v181 = (UnityEngine_Object_o *)this->fields.levelLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v181, 0LL, 0LL) )
          {
            v182 = this->fields.levelLabel;
            if ( !v182 )
              goto LABEL_455;
            UILabel__set_text(v182, (System_String_o *)StringLiteral_1, 0LL);
          }
          v183 = (UnityEngine_Object_o *)this->fields.raritySprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v183, 0LL, 0LL) )
          {
            v184 = this->fields.raritySprite;
            if ( !v184 )
              goto LABEL_455;
            UISprite__set_spriteName(v184, 0LL, 0LL);
          }
          v185 = (UnityEngine_Object_o *)this->fields.attackLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v185, 0LL, 0LL) )
          {
            v186 = this->fields.attackLabel;
            if ( !v186 )
              goto LABEL_455;
            UILabel__set_text(v186, (System_String_o *)StringLiteral_1, 0LL);
          }
          v187 = (UnityEngine_Object_o *)this->fields.hpLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v187, 0LL, 0LL) )
          {
            v188 = this->fields.hpLabel;
            if ( !v188 )
              goto LABEL_455;
            UILabel__set_text(v188, (System_String_o *)StringLiteral_1, 0LL);
          }
          v189 = (UnityEngine_Object_o *)this->fields.costLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v189, 0LL, 0LL) )
          {
            v190 = this->fields.costLabel;
            if ( !v190 )
              goto LABEL_455;
            UILabel__set_text(v190, (System_String_o *)StringLiteral_1, 0LL);
          }
          v191 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v191, 0LL, 0LL) )
          {
            v192 = this->fields.skillListTreasureDevice;
            if ( !v192 )
              goto LABEL_455;
            SkillListTreasureDeviceComponent__Clear(v192, 0LL);
          }
          v193 = (UnityEngine_Object_o *)this->fields.appendSkillList;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v193, 0LL, 0LL) )
          {
            v194 = this->fields.appendSkillList;
            if ( !v194 )
              goto LABEL_455;
            AppendSkillListComponent__Clear(v194, 0LL);
          }
          v195 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v195, 0LL, 0LL) )
          {
            v196 = this->fields.svtCommandCardList;
            if ( !v196 )
              goto LABEL_455;
            ServantCommandCardListComponent__Clear(v196, 0LL);
          }
          v197 = (UnityEngine_Object_o *)this->fields.supportSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v197, 0LL, 0LL) )
          {
            v198 = this->fields.supportSprite;
            if ( !v198 )
              goto LABEL_455;
            UISprite__set_spriteName(v198, 0LL, 0LL);
          }
          v199 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v199, 0LL, 0LL) )
          {
            v200 = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
            if ( !v200 )
              goto LABEL_455;
            v201 = UnityEngine_Component__get_gameObject(v200, 0LL);
            if ( !v201 )
              goto LABEL_455;
            UnityEngine_GameObject__SetActive(v201, 0, 0LL);
            v202 = (UnityEngine_Component_o *)this->fields.equipSprite;
            if ( !v202 )
              goto LABEL_455;
            v203 = UnityEngine_Component__get_gameObject(v202, 0LL);
            if ( !v203 )
              goto LABEL_455;
            UnityEngine_GameObject__SetActive(v203, 0, 0LL);
            v204 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v204, 0LL, 0LL) )
            {
              v205 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
              if ( !v205 )
                goto LABEL_455;
              v206 = UnityEngine_Component__get_gameObject(v205, 0LL);
              if ( !v206 )
                goto LABEL_455;
              UnityEngine_GameObject__SetActive(v206, 0, 0LL);
            }
          }
          v207 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v207, 0LL, 0LL) )
          {
            v209 = this->fields.correctionIconSprite;
            if ( !v209 )
              goto LABEL_455;
            UISprite__set_spriteName(v209, 0LL, 0LL);
          }
          WarBoardPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(this, item, v208);
          v210 = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v210, 0LL, 0LL) )
          {
            v211 = (UnityEngine_Component_o *)this->fields.fixNpcMessageFrameSprite;
            if ( !v211 )
              goto LABEL_455;
            v212 = UnityEngine_Component__get_gameObject(v211, 0LL);
            if ( !v212 )
              goto LABEL_455;
            UnityEngine_GameObject__SetActive(v212, 0, 0LL);
          }
          v213 = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v213, 0LL, 0LL) )
          {
            v214 = (UnityEngine_Component_o *)this->fields.fixNpcMessageText;
            if ( !v214 )
              goto LABEL_455;
            v215 = UnityEngine_Component__get_gameObject(v214, 0LL);
            if ( !v215 )
              goto LABEL_455;
            UnityEngine_GameObject__SetActive(v215, 0, 0LL);
            v216 = this->fields.fixNpcMessageText;
            if ( !v216 )
              goto LABEL_455;
            UILabel__set_text(v216, (System_String_o *)StringLiteral_1, 0LL);
          }
          isEventUpVal = 0;
          goto LABEL_413;
        }
        goto LABEL_455;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v80 = v121;
    }
    v81 = LocalizationManager__GetLevelList_23129292(v80, 0LL);
    goto LABEL_59;
  }
  v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v51 )
    goto LABEL_455;
  UnityEngine_GameObject__SetActive(v51, 0, 0LL);
  v52 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v52, 0LL, 0LL) )
  {
    v53 = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !v53 )
      goto LABEL_455;
    v54 = UnityEngine_Component__get_gameObject(v53, 0LL);
    if ( !v54 )
      goto LABEL_455;
    UnityEngine_GameObject__SetActive(v54, 0, 0LL);
    v55 = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !v55 )
      goto LABEL_455;
    v56 = UnityEngine_Component__get_gameObject(v55, 0LL);
    if ( !v56 )
      goto LABEL_455;
    UnityEngine_GameObject__SetActive(v56, 0, 0LL);
    v57 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v57, 0LL, 0LL) )
    {
      v58 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( v58 )
      {
        v59 = UnityEngine_Component__get_gameObject(v58, 0LL);
        if ( v59 )
        {
          UnityEngine_GameObject__SetActive(v59, 0, 0LL);
          return;
        }
      }
      goto LABEL_455;
    }
  }
}


void __fastcall WarBoardPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
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
  UnityEngine_Object_o *restrictionClassSprite; // x20
  __int64 v24; // x20
  __int64 v25; // x20
  DataManager_o *v26; // x0
  WarBoardIndividualityClassMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WarBoardIndividualityClassMaster_o *v28; // x20
  ServantClassEntity_o *AllClassServantEntity; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int iconImageId; // w25
  __int64 v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Collections_Generic_List_int__o *v41; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x22
  WarBoardPartyOrganizationListViewItemDraw___c_c *v53; // x0
  struct WarBoardPartyOrganizationListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__40_0; // x23
  Il2CppObject *v56; // x24
  struct WarBoardPartyOrganizationListViewItemDraw___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Collections_Generic_IEnumerable_T__o *v64; // x22
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v69; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  System_Int32_array *v71; // x0
  ServantClassEntity_array *ServantClassEntities; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x8
  ServantClassEntity_o *v76; // x8
  WarBoardPartyOrganizationListViewItemDraw_c *v77; // x0
  System_String_o *RestrictionClassSpriteNameFormat; // x20
  Il2CppObject *v79; // x0
  System_String_o *v80; // x0
  System_String_o *v81; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v83; // x0
  struct UISprite_o *v84; // x0
  int v85; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40F85B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_RestrictionEntity___ctor__, item);
    sub_B16FFC(&System_Action_RestrictionEntity__TypeInfo, v5);
    sub_B16FFC(&Method_BasicHelper_ForEach_RestrictionEntity___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Distinct_int___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v10);
    sub_B16FFC(&Method_System_Func_RestrictionEntity__bool___ctor__, v11);
    sub_B16FFC(&System_Func_RestrictionEntity__bool__TypeInfo, v12);
    sub_B16FFC(&int_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v17);
    sub_B16FFC(&Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__, v18);
    sub_B16FFC(
      &Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__,
      v19);
    sub_B16FFC(&WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo, v20);
    sub_B16FFC(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo, v21);
    sub_B16FFC(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v22);
    byte_40F85B8 = 1;
  }
  restrictionClassSprite = (UnityEngine_Object_o *)this->fields.restrictionClassSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionClassSprite, 0LL, 0LL) )
  {
    v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v25 = **(_QWORD **)(v24 + 192);
    if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
      sub_AAFCFC(v25);
    v26 = **(DataManager_o ***)(v25 + 184);
    if ( v26 )
    {
      MasterData_WarQuestSelectionMaster = (WarBoardIndividualityClassMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                   v26,
                                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v28 = MasterData_WarQuestSelectionMaster;
        AllClassServantEntity = WarBoardIndividualityClassMaster__GetAllClassServantEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  0LL);
        if ( AllClassServantEntity )
        {
          if ( item )
          {
            questRestrictionInfo = item->fields.questRestrictionInfo;
            iconImageId = AllClassServantEntity->fields.iconImageId;
            if ( questRestrictionInfo && questRestrictionInfo->fields.restrictionEntityList )
            {
              v36 = sub_B170CC(
                      WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo,
                      v30,
                      v31,
                      v32,
                      v33);
              WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0___ctor(
                (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)v36,
                0LL);
              v41 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                                System_Collections_Generic_List_int__TypeInfo,
                                                                v37,
                                                                v38,
                                                                v39,
                                                                v40);
              System_Collections_Generic_List_int____ctor(
                v41,
                (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v36 )
                goto LABEL_40;
              *(_QWORD *)(v36 + 16) = v41;
              sub_B16F98(
                (BattleServantConfConponent_o *)(v36 + 16),
                (System_Int32_array **)v41,
                v42,
                v43,
                v44,
                v45,
                v46,
                v47);
              restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
              v53 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              if ( (BYTE3(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
                v53 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              }
              static_fields = v53->static_fields;
              _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__40_0;
              if ( !_9__40_0 )
              {
                if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v53);
                  static_fields = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
                }
                v56 = (Il2CppObject *)static_fields->__9;
                _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                                System_Func_RestrictionEntity__bool__TypeInfo,
                                                                                                v48,
                                                                                                v49,
                                                                                                v50,
                                                                                                v51);
                System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                  _9__40_0,
                  v56,
                  Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__,
                  (const MethodInfo_2B6AB40 *)Method_System_Func_RestrictionEntity__bool___ctor__);
                v57 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
                v57->__9__40_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__40_0;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&v57->__9__40_0,
                  (System_Int32_array **)_9__40_0,
                  v58,
                  v59,
                  v60,
                  v61,
                  v62,
                  v63);
              }
              v64 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                     restrictionEntityList,
                                                                     (System_Func_TSource__bool__o *)_9__40_0,
                                                                     (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
              v69 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                           System_Action_RestrictionEntity__TypeInfo,
                                                                                           v65,
                                                                                           v66,
                                                                                           v67,
                                                                                           v68);
              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                v69,
                (Il2CppObject *)v36,
                Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__,
                (const MethodInfo_24B7310 *)Method_System_Action_RestrictionEntity___ctor__);
              BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                v64,
                (System_Action_T__o *)v69,
                (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_RestrictionEntity___);
              v70 = System_Linq_Enumerable__Distinct_int_(
                      *(System_Collections_Generic_IEnumerable_TSource__o **)(v36 + 16),
                      (const MethodInfo_18D4DE0 *)Method_System_Linq_Enumerable_Distinct_int___);
              v71 = System_Linq_Enumerable__ToArray_int_(
                      v70,
                      (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
              ServantClassEntities = WarBoardIndividualityClassMaster__GetServantClassEntities(v28, v71, 0LL);
              if ( ServantClassEntities )
              {
                v75 = *(_QWORD *)&ServantClassEntities->max_length;
                if ( v75 )
                {
                  if ( !(_DWORD)v75 )
                  {
                    sub_B17100(ServantClassEntities, v73, v74);
                    sub_B170A0();
                  }
                  v76 = ServantClassEntities->m_Items[0];
                  if ( !v76 )
                    goto LABEL_40;
                  iconImageId = v76->fields.iconImageId;
                }
              }
            }
            v77 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            if ( (BYTE3(WarBoardPartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
              v77 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            }
            RestrictionClassSpriteNameFormat = v77->static_fields->RestrictionClassSpriteNameFormat;
            v85 = iconImageId;
            v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v85);
            v80 = System_String__Format(RestrictionClassSpriteNameFormat, v79, 0LL);
            if ( this->fields.restrictionClassSprite )
            {
              v81 = v80;
              gameObject = UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)this->fields.restrictionClassSprite,
                             0LL);
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                v83 = this->fields.restrictionClassSprite;
                if ( v83 )
                {
                  UISprite__set_spriteName(v83, v81, 0LL);
                  v84 = this->fields.restrictionClassSprite;
                  if ( v84 )
                  {
                    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v84->klass->vtable._33_MakePixelPerfect.method)(
                      v84,
                      v84->klass->vtable._34_get_minWidth.methodPtr);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_40:
    sub_B170D4();
  }
}


void __fastcall WarBoardPartyOrganizationListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7850 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo, v1);
    byte_40F7850 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall WarBoardPartyOrganizationListViewItemDraw___c___ctor(
        WarBoardPartyOrganizationListViewItemDraw___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardPartyOrganizationListViewItemDraw___c___SetRestrictionClassSprite_b__40_0(
        WarBoardPartyOrganizationListViewItemDraw___c_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.type == 1;
}


void __fastcall WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0___ctor(
        WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0___SetRestrictionClassSprite_b__1(
        WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *indivisualities; // x0

  if ( (byte_40F7851 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, x);
    byte_40F7851 = 1;
  }
  if ( !x || (indivisualities = this->fields.indivisualities) == 0LL )
    sub_B170D4();
  System_Collections_Generic_List_int___AddRange(
    indivisualities,
    (System_Collections_Generic_IEnumerable_T__o *)x->fields.targetVals,
    (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
}