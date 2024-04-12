void __fastcall WarBoardPartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  WarBoardPartyOrganizationListViewItemDraw_c *v9; // x8

  if ( (byte_42AEA9F & 1) == 0 )
  {
    sub_B52984(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
    sub_B52984(&StringLiteral_17571/*"class2_{0}"*/);
    byte_42AEA9F = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_17571/*"class2_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17571/*"class2_{0}"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
  WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX = 1000;
  v9->static_fields->CORRECTION_ICON_SINGLE_Y = -20;
  v9->static_fields->CORRECTION_ICON_BONUS_Y = 5;
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
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *baseSprite; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UISprite_o *v13; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UISprite_o *v22; // x8
  struct UIAtlas_o *v23; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_42AEA9A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_B52984(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEA9A = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.raritySprite;
    if ( !transform )
      goto LABEL_23;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_23;
    this->fields.baseRarityPosition = UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)transform,
                                        0LL);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v13 = this->fields.baseSprite;
    if ( !v13 )
      goto LABEL_23;
    mAtlas = v13->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.baseDefaultUIAtlas,
      (System_Int32_array **)mAtlas,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v22 = this->fields.base2Sprite;
    if ( v22 )
    {
      v23 = v22->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v23;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.base2DefaultUIAtlas,
        (System_Int32_array **)v23,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      goto LABEL_22;
    }
LABEL_23:
    sub_B52A5C(transform, v4);
  }
LABEL_22:
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v24;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
  __int64 v10; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20

  if ( (byte_42AEA9B & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEA9B = 1;
  }
  this->fields.linkItem = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantNarrowTexture;
  if ( !gameObject )
    goto LABEL_15;
  UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0LL);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.noneEquipSprite;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.equipSprite;
        if ( gameObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_B52A5C(gameObject, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationListViewItemDraw__SetDispEquipOnly(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Component_o *baseSprite; // x0
  bool v6; // w21
  UnityEngine_Object_o *eventUpValIcon; // x20
  UnityEngine_Object_o *bounusIcon; // x20
  UnityEngine_Object_o *correctionIconSprite; // x20

  if ( (byte_42AEA9E & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEA9E = 1;
  }
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  v6 = !isDisp;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, !isDisp, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.base2Sprite;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantNarrowTexture;
  if ( !baseSprite )
    goto LABEL_49;
  UINarrowFigureTexture__SetActive((UINarrowFigureTexture_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.supportSprite;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.levelLabel;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.hpLabel;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.attackLabel;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.skillListTreasureDevice;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.svtCommandCardList;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.eventUpValIcon;
    if ( !baseSprite )
      goto LABEL_49;
    EventUpValIconComponent__Set((EventUpValIconComponent_o *)baseSprite, 0LL, -1, -1, -1, 0LL);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
    {
      baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
      if ( !baseSprite )
        goto LABEL_49;
      ShiningIconComponent__Set_33786120((ShiningIconComponent_o *)baseSprite, 0, 0LL);
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
    baseSprite = (UnityEngine_Component_o *)this->fields.correctionIconSprite;
    if ( baseSprite )
    {
      baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
      if ( baseSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
        return;
      }
    }
LABEL_49:
    sub_B52A5C(baseSprite, isDisp);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *switchSkillUIList; // x0
  _BOOL8 v13; // x1
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  UnityEngine_Object_o *v17; // x20
  UnityEngine_Object_o *v18; // x20
  UnityEngine_Object_o *servantFaceIcon; // x22
  int32_t CardImageLimitCount; // w22
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v25; // w22
  int32_t frameType; // w27
  int32_t v27; // w22
  SkillInfo_array *v28; // x22
  System_String_o *v29; // x24
  SkillInfo_array *v30; // x0
  System_String_o *LevelList_34077188; // x23
  UnityEngine_Object_o *servantClassIcon; // x22
  UnityEngine_Object_o *levelLabel; // x22
  UILabel_o *v34; // x22
  UnityEngine_Object_o *raritySprite; // x22
  int32_t rarityId; // w22
  int32_t ExceedCount; // w28
  int32_t Level; // w25
  System_String_o *Icon_22045876; // x28
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t v41; // w22
  ServantExceedMaster_o *v42; // x25
  int32_t RarityIcon; // w22
  WarQuestSelectionMaster_o *v44; // x0
  int32_t v45; // w25
  ServantLvDetailMaster_o *v46; // x26
  int32_t v47; // w8
  struct FollowerInfo_o *followerInfo; // x8
  int imageSvtId; // w22
  UnityEngine_Object_o *v50; // x24
  ServantFaceIconComponent_o *v51; // x24
  int32_t v52; // w24
  ServantLimitImageMaster_o *v53; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // kr10_16
  int32_t v55; // w24
  SkillInfo_array *v56; // x22
  ServantLeaderInfo_o *v57; // x22
  SkillInfo_array *v58; // x22
  UISprite_o *v59; // x22
  float y; // s8
  float x; // s10
  float z; // s9
  int32_t v63; // w8
  UnityEngine_Object_o *attackLabel; // x22
  int v65; // s0
  UILabel_o *v69; // x22
  UnityEngine_Object_o *hpLabel; // x22
  int v71; // s0
  UILabel_o *v75; // x22
  UnityEngine_Object_o *costLabel; // x22
  int32_t EquipCost; // w0
  UILabel_o *v78; // x28
  int v79; // w22
  int32_t MainCost; // w0
  Il2CppObject *v81; // x25
  Il2CppObject *v82; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  struct System_Collections_Generic_List_UIWidget__o *v84; // x0
  UnityEngine_Object_o *appendSkillList; // x22
  struct System_Collections_Generic_List_UIWidget__o *v86; // x0
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v88; // x0
  SwitchUIWidgetComponent_o *v89; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  System_Int32_array *monitor; // x23
  ServantCommandCardListComponent_o *v92; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // kr20_16
  UnityEngine_Object_o *v94; // x22
  UnityEngine_Object_o *v95; // x22
  UnityEngine_Object_o *v96; // x22
  UnityEngine_Object_o *v97; // x22
  UnityEngine_Object_o *v98; // x22
  UnityEngine_Object_o *v99; // x22
  UnityEngine_Object_o *v100; // x22
  UnityEngine_Object_o *v101; // x22
  UnityEngine_Object_o *v102; // x22
  UnityEngine_Object_o *v103; // x22
  UnityEngine_Object_o *v104; // x22
  UnityEngine_Object_o *v105; // x22
  UnityEngine_Object_o *v106; // x22
  UnityEngine_Object_o *v107; // x22
  const MethodInfo *v108; // x2
  UnityEngine_Object_o *v109; // x21
  UnityEngine_Object_o *v110; // x21
  bool isEventUpVal; // w23
  ServantCommandCardListComponent_o *v112; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // kr30_16
  UnityEngine_Object_o *supportSprite; // x22
  UserServantEntity_o *userServantEntity; // x0
  __int64 *v116; // x8
  System_String_o *v117; // x1
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  struct FollowerInfo_o *v119; // x22
  UnityEngine_Object_o *fixNpcMessageText; // x22
  struct FollowerInfo_o *v121; // x22
  UILabel_o *v122; // x22
  UnityEngine_Object_o *noneEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr40_16
  int32_t v125; // w23
  UISprite_o *equipSprite; // x22
  UnityEngine_Object_o *v127; // x22
  int v128; // w23
  System_Collections_Generic_List_XWeaponTrail_Element__o *v129; // x22
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  UnityEngine_Object_o *correctionIconSprite; // x22
  struct EventMargeItemUpValInfo_array *v132; // x8
  float v133; // s8
  float v134; // s9
  WarBoardPartyOrganizationListViewItemDraw_c *v135; // x0
  int *p_CORRECTION_ICON_BONUS_Y; // x8
  WarBoardPartyOrganizationListViewItemDraw_c *v137; // x0
  int v138; // s10
  UISprite_o *v139; // x21
  System_String_o *v140; // x0
  UnityEngine_Object_o *restrictionClassSprite; // x21
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v143; // x22
  UIAtlas_o *baseDefaultUIAtlas; // x21
  UnityEngine_Object_o *base2Sprite; // x21
  UISprite_o *v146; // x22
  UIAtlas_o *base2DefaultUIAtlas; // x21
  UnityEngine_Object_o *eventUpValIcon; // x21
  EventUpValIconComponent_o *v149; // x21
  UnityEngine_Object_o *bounusIcon; // x20
  bool v151; // w1
  UnityEngine_Object_o *v152; // x20
  UnityEngine_Object_o *baseButton; // x20
  int32_t lv; // [xsp+Ch] [xbp-B4h]
  __int64 tdStrengthStatus; // [xsp+10h] [xbp-B0h]
  int v156; // [xsp+18h] [xbp-A8h] BYREF
  int32_t v157; // [xsp+1Ch] [xbp-A4h] BYREF
  __int64 v158; // [xsp+20h] [xbp-A0h] BYREF
  SkillInfo_array *v159; // [xsp+28h] [xbp-98h] BYREF
  TreasureDvcInfo_o *v160; // [xsp+30h] [xbp-90h] BYREF
  SkillInfo_array *v161; // [xsp+38h] [xbp-88h] BYREF
  SkillInfo_array *v162; // [xsp+40h] [xbp-80h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16
  UnityEngine_Vector3_o v167; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v169; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AEA9C & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___68507608);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Rarity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
    sub_B52984(&StringLiteral_19523/*"icon_support_02"*/);
    sub_B52984(&StringLiteral_701/*"+"*/);
    sub_B52984(&StringLiteral_17833/*"correction_icon_"*/);
    sub_B52984(&StringLiteral_19487/*"icon_eventjoin_02"*/);
    sub_B52984(&StringLiteral_10456/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/);
    sub_B52984(&StringLiteral_347/*"#,0"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AEA9C = 1;
  }
  skillInfoList = 0LL;
  v162 = 0LL;
  tdInfo = 0LL;
  v160 = 0LL;
  v161 = 0LL;
  v158 = 0LL;
  v159 = 0LL;
  this->fields.linkItem = item;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.linkItem,
    (System_Int32_array **)item,
    *(System_String_array ***)&mode,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !item )
    goto LABEL_455;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)item->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v11,
      eventUpValItemList,
      (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___68507608);
  }
  switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_455;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    switchSkillUIList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
  {
    switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.skillInfoUiWidget;
    if ( !switchSkillUIList )
      goto LABEL_455;
    ((void (__fastcall *)(System_Collections_Generic_List_XWeaponTrail_Element__o *, Il2CppMethodPointer, float))switchSkillUIList->klass->vtable._8_unknown.method)(
      switchSkillUIList,
      switchSkillUIList->klass->vtable._9_unknown.methodPtr,
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
    switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.appendSkillInfoUiWidget;
    if ( !switchSkillUIList )
      goto LABEL_455;
    ((void (__fastcall *)(System_Collections_Generic_List_XWeaponTrail_Element__o *, Il2CppMethodPointer, float))switchSkillUIList->klass->vtable._8_unknown.method)(
      switchSkillUIList,
      switchSkillUIList->klass->vtable._9_unknown.methodPtr,
      0.0);
  }
  if ( (mode | 4) != 4 )
  {
    switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                     (UnityEngine_Component_o *)this,
                                                                                     0LL);
    if ( !switchSkillUIList )
      goto LABEL_455;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
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
        switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.servantFaceIcon;
        if ( !switchSkillUIList )
          goto LABEL_455;
        ServantFaceIconComponent__Set(
          (ServantFaceIconComponent_o *)switchSkillUIList,
          item->fields.userServantEntity,
          0LL,
          item->fields.questRestrictionInfo,
          0LL,
          0LL,
          0LL);
      }
      CardImageLimitCount = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0LL);
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !switchSkillUIList )
        goto LABEL_455;
      MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)switchSkillUIList,
                                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                                       SvtId,
                                                                                       0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_455;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     MasterData_WarQuestSelectionMaster,
                                     (int32_t)switchSkillUIList,
                                     CardImageLimitCount,
                                     0LL);
      servantNarrowTexture = this->fields.servantNarrowTexture;
      v25 = ServantImageLimitSealAfter;
      v165 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                                       v165,
                                                                                       0LL);
      if ( !servantNarrowTexture )
        goto LABEL_455;
      UINarrowFigureTexture__SetCharacter(servantNarrowTexture, (int32_t)switchSkillUIList, v25, 0LL, 0LL);
      frameType = item->fields.frameType;
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__GetDispImageLimitCount(
                                                                                       item,
                                                                                       0LL);
      if ( !item->fields.userServantEntity )
        goto LABEL_455;
      v27 = (int)switchSkillUIList;
      UserServantEntity__getSkillInfo(
        item->fields.userServantEntity,
        &skillInfoList,
        -1,
        (int32_t)switchSkillUIList,
        1,
        0,
        -1,
        0LL);
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)item->fields.userServantEntity;
      if ( !switchSkillUIList )
        goto LABEL_455;
      UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)switchSkillUIList, &tdInfo, -1, v27, 0, 0LL);
      v28 = skillInfoList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)LocalizationManager__GetLevelList_34077188(
                                                                                       v28,
                                                                                       0LL);
      if ( !tdInfo )
        goto LABEL_455;
      v29 = (System_String_o *)switchSkillUIList;
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)item->fields.userServantEntity;
      if ( !switchSkillUIList )
        goto LABEL_455;
      HIDWORD(tdStrengthStatus) = tdInfo->fields.strengthStatus;
      lv = tdInfo->fields.lv;
      LODWORD(tdStrengthStatus) = tdInfo->fields.treasureDeviceNum;
      UserServantEntity__GetAppendPassiveSkillInfo_21537848((UserServantEntity_o *)switchSkillUIList, &v162, 0LL);
      v30 = v162;
    }
    else
    {
      followerInfo = item->fields.followerInfo;
      LevelList_34077188 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !followerInfo )
      {
        tdStrengthStatus = 0LL;
        lv = 0;
        frameType = 9;
        v29 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_59;
      }
      imageSvtId = followerInfo->fields.imageSvtId;
      v50 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v50, 0LL, 0LL) )
      {
        v51 = this->fields.servantFaceIcon;
        switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                                         item,
                                                                                         0LL);
        if ( !v51 )
          goto LABEL_455;
        ServantFaceIconComponent__Set_30396768(
          v51,
          (ServantLeaderInfo_o *)switchSkillUIList,
          0LL,
          0LL,
          0,
          imageSvtId,
          0LL);
      }
      v52 = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0LL);
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !switchSkillUIList )
        goto LABEL_455;
      v53 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)switchSkillUIList,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v54 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                                       v54,
                                                                                       0LL);
      if ( !v53 )
        goto LABEL_455;
      v55 = ServantLimitImageMaster__GetServantImageLimitSealAfter(v53, (int32_t)switchSkillUIList, v52, 0LL);
      if ( imageSvtId <= 0 )
      {
        v166 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
        imageSvtId = BasicHelper__DecryptValue_19348088(v166, 0LL);
      }
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.servantNarrowTexture;
      if ( !switchSkillUIList )
        goto LABEL_455;
      UINarrowFigureTexture__SetCharacter((UINarrowFigureTexture_o *)switchSkillUIList, imageSvtId, v55, 0LL, 0LL);
      frameType = item->fields.frameType;
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                                       item,
                                                                                       0LL);
      if ( !switchSkillUIList )
        goto LABEL_455;
      ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)switchSkillUIList, &v161, 0LL);
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                                       item,
                                                                                       0LL);
      if ( !switchSkillUIList )
        goto LABEL_455;
      ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)switchSkillUIList, &v160, 0LL);
      v56 = v161;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)LocalizationManager__GetLevelList_34077188(
                                                                                       v56,
                                                                                       0LL);
      if ( !v160 )
        goto LABEL_455;
      v29 = (System_String_o *)switchSkillUIList;
      lv = v160->fields.lv;
      LODWORD(tdStrengthStatus) = v160->fields.treasureDeviceNum;
      HIDWORD(tdStrengthStatus) = v160->fields.strengthStatus;
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                                       item,
                                                                                       0LL);
      if ( !item->fields.followerInfo )
        goto LABEL_455;
      v57 = (ServantLeaderInfo_o *)switchSkillUIList;
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)FollowerInfo__get_IsNpc(
                                                                                       item->fields.followerInfo,
                                                                                       0LL);
      if ( !v57 )
        goto LABEL_455;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_29298404(v57, &v159, (unsigned __int8)switchSkillUIList & 1, 0LL);
      v58 = v159;
      if ( !v159 )
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
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.servantClassIcon;
            if ( !switchSkillUIList )
              goto LABEL_455;
            ServantClassIconComponent__SetImage(
              (ServantClassIconComponent_o *)switchSkillUIList,
              item->fields.classId,
              item->fields.frameType,
              0LL);
          }
          levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
          {
            v34 = this->fields.levelLabel;
            HIDWORD(v158) = PartyOrganizationListViewItem__get_Level(item, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Int32__ToString(
                                                                                             (int32_t)&v158 + 4,
                                                                                             0LL);
            if ( !v34 )
              goto LABEL_455;
            UILabel__set_text(v34, (System_String_o *)switchSkillUIList, 0LL);
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
            Icon_22045876 = Rarity__getIcon_22045876(rarityId, ExceedCount, Level, 0LL);
            if ( PartyOrganizationListViewItem__get_ExceedCount(item, 0LL) < 1 )
            {
              v47 = 0;
            }
            else
            {
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantExceedMaster___);
              v41 = item->fields.rarityId;
              v42 = (ServantExceedMaster_o *)Master_WarQuestSelectionMaster;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ExceedCount(
                                                                                               item,
                                                                                               0LL);
              if ( !v42 )
                goto LABEL_455;
              RarityIcon = ServantExceedMaster__GetRarityIcon(v42, v41, (int32_t)switchSkillUIList, 0, 0LL);
              v44 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
              v45 = item->fields.rarityId;
              v46 = (ServantLvDetailMaster_o *)v44;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_Level(
                                                                                               item,
                                                                                               0LL);
              if ( !v46 )
                goto LABEL_455;
              v47 = ServantLvDetailMaster__GetRarityIcon(v46, v45, (int32_t)switchSkillUIList, RarityIcon, 0LL);
            }
            v59 = this->fields.raritySprite;
            if ( v47 >= 3 )
            {
              if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetEventSprite(v59, Icon_22045876, 0LL);
            }
            else
            {
              if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetCommon(v59, 0LL);
            }
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.raritySprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, Icon_22045876, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.raritySprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            ((void (__fastcall *)(System_Collections_Generic_List_XWeaponTrail_Element__o *, Il2CppMethodPointer))switchSkillUIList->klass->vtable._33_get_Item.method)(
              switchSkillUIList,
              switchSkillUIList->klass->vtable._34_get_Count.methodPtr);
            x = this->fields.baseRarityPosition.fields.x;
            y = this->fields.baseRarityPosition.fields.y;
            z = this->fields.baseRarityPosition.fields.z;
            v63 = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.raritySprite;
            if ( v63 >= 1 )
              x = x + 1.0;
            if ( !switchSkillUIList )
              goto LABEL_455;
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_transform(
                                                                                             (UnityEngine_Component_o *)switchSkillUIList,
                                                                                             0LL);
            if ( !switchSkillUIList )
              goto LABEL_455;
            v167.fields.x = x;
            v167.fields.y = y;
            v167.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)switchSkillUIList, v167, 0LL);
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
              *(UnityEngine_Color_o *)&v65 = UnityEngine_Color__get_white(0LL);
            else
              *(UnityEngine_Color_o *)&v65 = UnityEngine_Color__get_yellow(0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.attackLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UIWidget__set_color((UIWidget_o *)switchSkillUIList, *(UnityEngine_Color_o *)&v65, 0LL);
            v69 = this->fields.attackLabel;
            HIDWORD(v158) = PartyOrganizationListViewItem__get_MargeAtk(item, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Int32__ToString_39387012(
                                                                                             (int32_t)&v158 + 4,
                                                                                             (System_String_o *)StringLiteral_347/*"#,0"*/,
                                                                                             0LL);
            if ( !v69 )
              goto LABEL_455;
            UILabel__set_text(v69, (System_String_o *)switchSkillUIList, 0LL);
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
              *(UnityEngine_Color_o *)&v71 = UnityEngine_Color__get_white(0LL);
            else
              *(UnityEngine_Color_o *)&v71 = UnityEngine_Color__get_yellow(0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.hpLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UIWidget__set_color((UIWidget_o *)switchSkillUIList, *(UnityEngine_Color_o *)&v71, 0LL);
            v75 = this->fields.hpLabel;
            HIDWORD(v158) = PartyOrganizationListViewItem__get_MargeHp(item, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Int32__ToString_39387012(
                                                                                             (int32_t)&v158 + 4,
                                                                                             (System_String_o *)StringLiteral_347/*"#,0"*/,
                                                                                             0LL);
            if ( !v75 )
              goto LABEL_455;
            UILabel__set_text(v75, (System_String_o *)switchSkillUIList, 0LL);
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
            v78 = this->fields.costLabel;
            v79 = EquipCost;
            MainCost = PartyOrganizationListViewItem__get_MainCost(item, 0LL);
            if ( (v79 & 0x80000000) != 0 )
            {
              HIDWORD(v158) = MainCost;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Int32__ToString(
                                                                                               (int32_t)&v158 + 4,
                                                                                               0LL);
              if ( !v78 )
                goto LABEL_455;
              UILabel__set_text(v78, (System_String_o *)switchSkillUIList, 0LL);
            }
            else
            {
              v157 = MainCost;
              v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v157);
              v156 = v79;
              v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v156);
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_String__Concat_44648020(
                                                                                               v81,
                                                                                               (Il2CppObject *)StringLiteral_701/*"+"*/,
                                                                                               v82,
                                                                                               0LL);
              if ( !v78 )
                goto LABEL_455;
              UILabel__set_text(v78, (System_String_o *)switchSkillUIList, 0LL);
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
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.skillListTreasureDevice;
            if ( !switchSkillUIList )
              goto LABEL_455;
            SkillListTreasureDeviceComponent__Set(
              (SkillListTreasureDeviceComponent_o *)switchSkillUIList,
              v29,
              lv,
              SHIDWORD(tdStrengthStatus),
              tdStrengthStatus,
              0,
              0LL);
            if ( !System_String__IsNullOrEmpty(v29, 0LL) )
            {
              v84 = this->fields.switchSkillUIList;
              if ( v84 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v84,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInfoUiWidget,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
            if ( System_String__IsNullOrEmpty(LevelList_34077188, 0LL) )
            {
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.appendSkillList;
              if ( !switchSkillUIList )
                goto LABEL_455;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)switchSkillUIList,
                                                                                               0LL);
              if ( !switchSkillUIList )
                goto LABEL_455;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
            }
            else
            {
              v86 = this->fields.switchSkillUIList;
              if ( v86 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v86,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.appendSkillInfoUiWidget,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIWidget__Add__);
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.appendSkillList;
              if ( !switchSkillUIList )
                goto LABEL_455;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)switchSkillUIList,
                                                                                               0LL);
              if ( !switchSkillUIList )
                goto LABEL_455;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.appendSkillList;
              if ( !switchSkillUIList )
                goto LABEL_455;
              AppendSkillListComponent__Set((AppendSkillListComponent_o *)switchSkillUIList, LevelList_34077188, 0LL);
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
            v88 = this->fields.switchSkillUIList;
            if ( v88 )
            {
              v89 = this->fields.switchSkillInfo;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v88,
                                                                                               (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
              if ( !v89 )
                goto LABEL_455;
              SwitchUIWidgetComponent__Set(v89, (UIWidget_array *)switchSkillUIList, 0LL);
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
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                                                 item,
                                                                                                 0LL);
                if ( !switchSkillUIList )
                  goto LABEL_455;
                monitor = (System_Int32_array *)switchSkillUIList[5].monitor;
              }
              else
              {
                monitor = 0LL;
              }
              v112 = this->fields.svtCommandCardList;
              v113 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                                               v113,
                                                                                               0LL);
              if ( v112 )
              {
                ServantCommandCardListComponent__Set_27215728(
                  v112,
                  (int32_t)switchSkillUIList,
                  monitor,
                  item->fields.commandCodeIdList,
                  2,
                  0,
                  0LL);
                goto LABEL_314;
              }
LABEL_455:
              sub_B52A5C(switchSkillUIList, v13);
            }
            v92 = this->fields.svtCommandCardList;
            v93 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                                             v93,
                                                                                             0LL);
            if ( !v92 )
              goto LABEL_455;
            ServantCommandCardListComponent__Set_27215988(
              v92,
              (int32_t)switchSkillUIList,
              item->fields.commandCodeIdList,
              2,
              0,
              0LL);
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
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.fixNpcMessageFrameSprite;
              if ( !switchSkillUIList )
                goto LABEL_455;
              v119 = item->fields.followerInfo;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)switchSkillUIList,
                                                                                               0LL);
              if ( !switchSkillUIList )
                goto LABEL_455;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v119 != 0LL, 0LL);
            }
            fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0LL, 0LL) )
            {
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.fixNpcMessageText;
              if ( !switchSkillUIList )
                goto LABEL_455;
              v121 = item->fields.followerInfo;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)switchSkillUIList,
                                                                                               0LL);
              if ( !switchSkillUIList )
                goto LABEL_455;
              if ( v121 )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
                v122 = this->fields.fixNpcMessageText;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)LocalizationManager__Get(
                                                                                                 (System_String_o *)StringLiteral_10456/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/,
                                                                                                 0LL);
                if ( !v122 )
                  goto LABEL_455;
                UILabel__set_text(v122, (System_String_o *)switchSkillUIList, 0LL);
              }
              else
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
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
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                                             EquipSvtId,
                                                                                             0LL);
            if ( !this->fields.noneEquipSprite )
              goto LABEL_455;
            v125 = (int)switchSkillUIList;
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                             (UnityEngine_Component_o *)this->fields.noneEquipSprite,
                                                                                             0LL);
            if ( !switchSkillUIList )
              goto LABEL_455;
            if ( v125 < 1 )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.equipSprite;
              if ( !switchSkillUIList )
                goto LABEL_455;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)switchSkillUIList,
                                                                                               0LL);
              if ( !switchSkillUIList )
                goto LABEL_455;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
              equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
                goto LABEL_383;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.equipLimitCountSprite;
              if ( !switchSkillUIList )
                goto LABEL_455;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)switchSkillUIList,
                                                                                               0LL);
              if ( !switchSkillUIList )
                goto LABEL_455;
              LOBYTE(v13) = 0;
            }
            else
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.equipSprite;
              if ( !switchSkillUIList )
                goto LABEL_455;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)switchSkillUIList,
                                                                                               0LL);
              if ( !switchSkillUIList )
                goto LABEL_455;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
              equipSprite = (UISprite_o *)this->fields.equipSprite;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetEquipFace(equipSprite, v125, 0LL);
              v127 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(v127, 0LL, 0LL) )
                goto LABEL_383;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_EquipLimitCountMax(
                                                                                               item,
                                                                                               0LL);
              if ( !this->fields.equipLimitCountSprite )
                goto LABEL_455;
              v128 = (int)switchSkillUIList;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                                                                                               0LL);
              v129 = switchSkillUIList;
              if ( v128 < 1 )
              {
                v13 = 0LL;
                if ( !switchSkillUIList )
                  goto LABEL_455;
              }
              else
              {
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_EquipLimitCount(
                                                                                                 item,
                                                                                                 0LL);
                v13 = (int)switchSkillUIList >= v128;
                if ( !v129 )
                  goto LABEL_455;
              }
              switchSkillUIList = v129;
            }
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v13, 0LL);
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
              LODWORD(v158) = PartyOrganizationListViewItem__GetCorrectionIconId(item, 0LL);
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.correctionIconSprite;
              if ( !switchSkillUIList )
                goto LABEL_455;
              if ( (v158 & 0x80000000) != 0 )
              {
                UISprite__set_spriteName((UISprite_o *)switchSkillUIList, 0LL, 0LL);
              }
              else
              {
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_transform(
                                                                                                 (UnityEngine_Component_o *)switchSkillUIList,
                                                                                                 0LL);
                if ( !switchSkillUIList )
                  goto LABEL_455;
                localPosition = UnityEngine_Transform__get_localPosition(
                                  (UnityEngine_Transform_o *)switchSkillUIList,
                                  0LL);
                v132 = item->fields.eventUpValItemList;
                v133 = localPosition.fields.x;
                v134 = localPosition.fields.z;
                if ( v132 && *(_QWORD *)&v132->max_length )
                {
                  v135 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
                  if ( (BYTE3(WarBoardPartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
                    v135 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
                  }
                  p_CORRECTION_ICON_BONUS_Y = &v135->static_fields->CORRECTION_ICON_BONUS_Y;
                }
                else
                {
                  v137 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
                  if ( (BYTE3(WarBoardPartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
                    v137 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
                  }
                  p_CORRECTION_ICON_BONUS_Y = &v137->static_fields->CORRECTION_ICON_SINGLE_Y;
                }
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.correctionIconSprite;
                if ( !switchSkillUIList )
                  goto LABEL_455;
                v138 = *p_CORRECTION_ICON_BONUS_Y;
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_transform(
                                                                                                 (UnityEngine_Component_o *)switchSkillUIList,
                                                                                                 0LL);
                if ( !switchSkillUIList )
                  goto LABEL_455;
                v169.fields.y = (float)v138;
                v169.fields.x = v133;
                v169.fields.z = v134;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)switchSkillUIList, v169, 0LL);
                v139 = this->fields.correctionIconSprite;
                v140 = System_Int32__ToString((int32_t)&v158, 0LL);
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_String__Concat_44568316(
                                                                                                 (System_String_o *)StringLiteral_17833/*"correction_icon_"*/,
                                                                                                 v140,
                                                                                                 0LL);
                if ( !v139 )
                  goto LABEL_455;
                UISprite__set_spriteName(v139, (System_String_o *)switchSkillUIList, 0LL);
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.correctionIconSprite;
                if ( !switchSkillUIList )
                  goto LABEL_455;
                ((void (__fastcall *)(System_Collections_Generic_List_XWeaponTrail_Element__o *, Il2CppMethodPointer))switchSkillUIList->klass->vtable._33_get_Item.method)(
                  switchSkillUIList,
                  switchSkillUIList->klass->vtable._34_get_Count.methodPtr);
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
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.restrictionClassSprite;
              if ( !switchSkillUIList )
                goto LABEL_455;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)switchSkillUIList,
                                                                                               0LL);
              if ( !switchSkillUIList )
                goto LABEL_455;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
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
              v143 = this->fields.baseSprite;
              baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetFormationBase(v143, frameType, baseDefaultUIAtlas, 0, 0LL);
            }
            base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
            {
              v146 = this->fields.base2Sprite;
              base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetFormationFrame(v146, frameType, base2DefaultUIAtlas, 0, 0LL);
            }
            eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Object__op_Inequality(
                                                                                             eventUpValIcon,
                                                                                             0LL,
                                                                                             0LL);
            if ( ((unsigned __int8)switchSkillUIList & 1) != 0 )
            {
              if ( !v11 )
                goto LABEL_455;
              v149 = this->fields.eventUpValIcon;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                                                                               (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
              if ( !v149 )
                goto LABEL_455;
              EventUpValIconComponent__Set(v149, (EventMargeItemUpValInfo_array *)switchSkillUIList, -1, -1, -1, 0LL);
              bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
                goto LABEL_448;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.bounusIcon;
              if ( !switchSkillUIList )
                goto LABEL_455;
              v151 = 0;
            }
            else
            {
              v152 = (UnityEngine_Object_o *)this->fields.bounusIcon;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(v152, 0LL, 0LL) )
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
                  switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.baseButton;
                  if ( !switchSkillUIList )
                    goto LABEL_455;
                  ((void (__fastcall *)(System_Collections_Generic_List_XWeaponTrail_Element__o *, _QWORD, __int64, Il2CppMethodPointer))switchSkillUIList->klass->vtable._14_CopyTo.method)(
                    switchSkillUIList,
                    0LL,
                    1LL,
                    switchSkillUIList->klass->vtable._15_Remove.methodPtr);
                }
                return;
              }
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.bounusIcon;
              if ( !switchSkillUIList )
                goto LABEL_455;
              v151 = isEventUpVal;
            }
            ShiningIconComponent__Set_33786120((ShiningIconComponent_o *)switchSkillUIList, v151, 0LL);
            goto LABEL_448;
          }
          userServantEntity = item->fields.userServantEntity;
          if ( userServantEntity && UserServantEntity__IsEventJoin(userServantEntity, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.supportSprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            v116 = &StringLiteral_19487/*"icon_eventjoin_02"*/;
          }
          else
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.supportSprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            if ( !item->fields.followerInfo )
            {
              v117 = 0LL;
              goto LABEL_327;
            }
            v116 = &StringLiteral_19523/*"icon_support_02"*/;
          }
          v117 = (System_String_o *)*v116;
LABEL_327:
          UISprite__set_spriteName((UISprite_o *)switchSkillUIList, v117, 0LL);
          goto LABEL_328;
        }
        v94 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v94, 0LL, 0LL) )
        {
          switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.servantFaceIcon;
          if ( !switchSkillUIList )
            goto LABEL_455;
          ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)switchSkillUIList, 0LL);
        }
        switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.servantNarrowTexture;
        if ( switchSkillUIList )
        {
          UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)switchSkillUIList, 0LL);
          v95 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v95, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.servantClassIcon;
            if ( !switchSkillUIList )
              goto LABEL_455;
            ServantClassIconComponent__Clear((ServantClassIconComponent_o *)switchSkillUIList, 0LL);
          }
          v96 = (UnityEngine_Object_o *)this->fields.levelLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v96, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.levelLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          v97 = (UnityEngine_Object_o *)this->fields.raritySprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v97, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.raritySprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, 0LL, 0LL);
          }
          v98 = (UnityEngine_Object_o *)this->fields.attackLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v98, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.attackLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          v99 = (UnityEngine_Object_o *)this->fields.hpLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v99, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.hpLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          v100 = (UnityEngine_Object_o *)this->fields.costLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v100, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.costLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          v101 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v101, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.skillListTreasureDevice;
            if ( !switchSkillUIList )
              goto LABEL_455;
            SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)switchSkillUIList, 0LL);
          }
          v102 = (UnityEngine_Object_o *)this->fields.appendSkillList;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v102, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.appendSkillList;
            if ( !switchSkillUIList )
              goto LABEL_455;
            AppendSkillListComponent__Clear((AppendSkillListComponent_o *)switchSkillUIList, 0LL);
          }
          v103 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v103, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.svtCommandCardList;
            if ( !switchSkillUIList )
              goto LABEL_455;
            ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)switchSkillUIList, 0LL);
          }
          v104 = (UnityEngine_Object_o *)this->fields.supportSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v104, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.supportSprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, 0LL, 0LL);
          }
          v105 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v105, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.noneEquipSprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                             (UnityEngine_Component_o *)switchSkillUIList,
                                                                                             0LL);
            if ( !switchSkillUIList )
              goto LABEL_455;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.equipSprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                             (UnityEngine_Component_o *)switchSkillUIList,
                                                                                             0LL);
            if ( !switchSkillUIList )
              goto LABEL_455;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
            v106 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v106, 0LL, 0LL) )
            {
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.equipLimitCountSprite;
              if ( !switchSkillUIList )
                goto LABEL_455;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)switchSkillUIList,
                                                                                               0LL);
              if ( !switchSkillUIList )
                goto LABEL_455;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
            }
          }
          v107 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v107, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.correctionIconSprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, 0LL, 0LL);
          }
          WarBoardPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(this, item, v108);
          v109 = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v109, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.fixNpcMessageFrameSprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                             (UnityEngine_Component_o *)switchSkillUIList,
                                                                                             0LL);
            if ( !switchSkillUIList )
              goto LABEL_455;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
          }
          v110 = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v110, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.fixNpcMessageText;
            if ( !switchSkillUIList )
              goto LABEL_455;
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                             (UnityEngine_Component_o *)switchSkillUIList,
                                                                                             0LL);
            if ( !switchSkillUIList )
              goto LABEL_455;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.fixNpcMessageText;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
      v30 = v58;
    }
    LevelList_34077188 = LocalizationManager__GetLevelList_34077188(v30, 0LL);
    goto LABEL_59;
  }
  switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0LL);
  if ( !switchSkillUIList )
    goto LABEL_455;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
  v17 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
  {
    switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.noneEquipSprite;
    if ( !switchSkillUIList )
      goto LABEL_455;
    switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                     (UnityEngine_Component_o *)switchSkillUIList,
                                                                                     0LL);
    if ( !switchSkillUIList )
      goto LABEL_455;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
    switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.equipSprite;
    if ( !switchSkillUIList )
      goto LABEL_455;
    switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                     (UnityEngine_Component_o *)switchSkillUIList,
                                                                                     0LL);
    if ( !switchSkillUIList )
      goto LABEL_455;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
    v18 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    {
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.equipLimitCountSprite;
      if ( switchSkillUIList )
      {
        switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)switchSkillUIList,
                                                                                         0LL);
        if ( switchSkillUIList )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
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
  UnityEngine_Object_o *restrictionClassSprite; // x20
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x20
  void *MasterData_WarQuestSelectionMaster; // x0
  WarBoardIndividualityClassMaster_o *v10; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int v12; // w25
  __int64 v13; // x21
  System_Collections_Generic_List_int__o *v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x22
  WarBoardPartyOrganizationListViewItemDraw___c_c *v22; // x0
  struct WarBoardPartyOrganizationListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__40_0; // x23
  Il2CppObject *v25; // x24
  struct WarBoardPartyOrganizationListViewItemDraw___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_T__o *v33; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v34; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Int32_array *v36; // x0
  __int64 v37; // x8
  __int64 v38; // x8
  WarBoardPartyOrganizationListViewItemDraw_c *v39; // x0
  System_String_o *RestrictionClassSpriteNameFormat; // x20
  Il2CppObject *v41; // x0
  System_String_o *v42; // x20
  __int64 v43; // x0
  int v44; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42AEA9D & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_RestrictionEntity___ctor__);
    sub_B52984(&System_Action_RestrictionEntity__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_RestrictionEntity___);
    sub_B52984(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
    sub_B52984(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_B52984(&Method_System_Func_RestrictionEntity__bool___ctor__);
    sub_B52984(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__);
    sub_B52984(&Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__);
    sub_B52984(&WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo);
    sub_B52984(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
    sub_B52984(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
    byte_42AEA9D = 1;
  }
  restrictionClassSprite = (UnityEngine_Object_o *)this->fields.restrictionClassSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionClassSprite, 0LL, 0LL) )
  {
    v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
      sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v8 = **(_QWORD **)(v7 + 192);
    if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
      sub_AEB684(v8);
    MasterData_WarQuestSelectionMaster = **(void ***)(v8 + 184);
    if ( MasterData_WarQuestSelectionMaster )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v10 = (WarBoardIndividualityClassMaster_o *)MasterData_WarQuestSelectionMaster;
        MasterData_WarQuestSelectionMaster = WarBoardIndividualityClassMaster__GetAllClassServantEntity(
                                               (WarBoardIndividualityClassMaster_o *)MasterData_WarQuestSelectionMaster,
                                               0LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          if ( item )
          {
            questRestrictionInfo = item->fields.questRestrictionInfo;
            v12 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 11);
            if ( questRestrictionInfo && questRestrictionInfo->fields.restrictionEntityList )
            {
              v13 = sub_B52A54(WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo);
              WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0___ctor(
                (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)v13,
                0LL);
              v14 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v14,
                (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v13 )
                goto LABEL_40;
              *(_QWORD *)(v13 + 16) = v14;
              sub_B52920(
                (BattleServantConfConponent_o *)(v13 + 16),
                (System_Int32_array **)v14,
                v15,
                v16,
                v17,
                v18,
                v19,
                v20);
              restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
              v22 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              if ( (BYTE3(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
                v22 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              }
              static_fields = v22->static_fields;
              _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__40_0;
              if ( !_9__40_0 )
              {
                if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v22);
                  static_fields = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
                }
                v25 = (Il2CppObject *)static_fields->__9;
                _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_RestrictionEntity__bool__TypeInfo);
                System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                  _9__40_0,
                  v25,
                  Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__,
                  (const MethodInfo_2BC90BC *)Method_System_Func_RestrictionEntity__bool___ctor__);
                v26 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
                v26->__9__40_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__40_0;
                sub_B52920(
                  (BattleServantConfConponent_o *)&v26->__9__40_0,
                  (System_Int32_array **)_9__40_0,
                  v27,
                  v28,
                  v29,
                  v30,
                  v31,
                  v32);
              }
              v33 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                     restrictionEntityList,
                                                                     (System_Func_TSource__bool__o *)_9__40_0,
                                                                     (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
              v34 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_RestrictionEntity__TypeInfo);
              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                v34,
                (Il2CppObject *)v13,
                Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__,
                (const MethodInfo_2627780 *)Method_System_Action_RestrictionEntity___ctor__);
              BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                v33,
                (System_Action_T__o *)v34,
                (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_RestrictionEntity___);
              v35 = System_Linq_Enumerable__Distinct_int_(
                      *(System_Collections_Generic_IEnumerable_TSource__o **)(v13 + 16),
                      (const MethodInfo_1B5FED4 *)Method_System_Linq_Enumerable_Distinct_int___);
              v36 = System_Linq_Enumerable__ToArray_int_(
                      v35,
                      (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
              MasterData_WarQuestSelectionMaster = WarBoardIndividualityClassMaster__GetServantClassEntities(
                                                     v10,
                                                     v36,
                                                     0LL);
              if ( MasterData_WarQuestSelectionMaster )
              {
                v37 = *((_QWORD *)MasterData_WarQuestSelectionMaster + 3);
                if ( v37 )
                {
                  if ( !(_DWORD)v37 )
                  {
                    v43 = sub_B52A88(MasterData_WarQuestSelectionMaster);
                    sub_B52A28(v43, 0LL);
                  }
                  v38 = *((_QWORD *)MasterData_WarQuestSelectionMaster + 4);
                  if ( !v38 )
                    goto LABEL_40;
                  v12 = *(_DWORD *)(v38 + 44);
                }
              }
            }
            v39 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            if ( (BYTE3(WarBoardPartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
              v39 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            }
            RestrictionClassSpriteNameFormat = v39->static_fields->RestrictionClassSpriteNameFormat;
            v44 = v12;
            v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
            MasterData_WarQuestSelectionMaster = System_String__Format(RestrictionClassSpriteNameFormat, v41, 0LL);
            if ( this->fields.restrictionClassSprite )
            {
              v42 = (System_String_o *)MasterData_WarQuestSelectionMaster;
              MasterData_WarQuestSelectionMaster = UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this->fields.restrictionClassSprite,
                                                     0LL);
              if ( MasterData_WarQuestSelectionMaster )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)MasterData_WarQuestSelectionMaster,
                  1,
                  0LL);
                MasterData_WarQuestSelectionMaster = this->fields.restrictionClassSprite;
                if ( MasterData_WarQuestSelectionMaster )
                {
                  UISprite__set_spriteName((UISprite_o *)MasterData_WarQuestSelectionMaster, v42, 0LL);
                  MasterData_WarQuestSelectionMaster = this->fields.restrictionClassSprite;
                  if ( MasterData_WarQuestSelectionMaster )
                  {
                    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)MasterData_WarQuestSelectionMaster + 840LL))(
                      MasterData_WarQuestSelectionMaster,
                      *(_QWORD *)(*(_QWORD *)MasterData_WarQuestSelectionMaster + 848LL));
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
    sub_B52A5C(MasterData_WarQuestSelectionMaster, v6);
  }
}


void __fastcall WarBoardPartyOrganizationListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct WarBoardPartyOrganizationListViewItemDraw___c_StaticFields *static_fields; // x0

  if ( (byte_42AD732 & 1) == 0 )
  {
    sub_B52984(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
    byte_42AD732 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardPartyOrganizationListViewItemDraw___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
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
  WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *v4; // x20

  v4 = this;
  if ( (byte_42AD733 & 1) == 0 )
  {
    this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    byte_42AD733 = 1;
  }
  if ( !x
    || (this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)v4->fields.indivisualities) == 0LL )
  {
    sub_B52A5C(this, x);
  }
  System_Collections_Generic_List_int___AddRange(
    (System_Collections_Generic_List_int__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)x->fields.targetVals,
    (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
}