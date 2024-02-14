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

  if ( (byte_4213323 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_17502/*"class2_{0}"*/, v8);
    byte_4213323 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_17502/*"class2_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17502/*"class2_{0}"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *baseSprite; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UISprite_o *v14; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct UISprite_o *v24; // x8
  struct UIAtlas_o *v25; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_421331E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_421331E = 1;
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
    v14 = this->fields.baseSprite;
    if ( !v14 )
      goto LABEL_23;
    mAtlas = v14->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.baseDefaultUIAtlas,
      (System_Int32_array **)mAtlas,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
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
    v24 = this->fields.base2Sprite;
    if ( v24 )
    {
      v25 = v24->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v25;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.base2DefaultUIAtlas,
        (System_Int32_array **)v25,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      goto LABEL_22;
    }
LABEL_23:
    sub_B0D97C(transform);
  }
LABEL_22:
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v26;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
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
  UnityEngine_Object_o *noneEquipSprite; // x20

  if ( (byte_421331F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421331F = 1;
  }
  this->fields.linkItem = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B0D97C(gameObject);
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

  if ( (byte_4213322 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4213322 = 1;
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
      ShiningIconComponent__Set_32504684((ShiningIconComponent_o *)baseSprite, 0, 0LL);
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
    sub_B0D97C(baseSprite);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *switchSkillUIList; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  UnityEngine_Object_o *v45; // x20
  UnityEngine_Object_o *v46; // x20
  UnityEngine_Object_o *servantFaceIcon; // x22
  int32_t CardImageLimitCount; // w22
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v53; // w22
  int32_t frameType; // w27
  int32_t v55; // w22
  SkillInfo_array *v56; // x22
  System_String_o *v57; // x24
  SkillInfo_array *v58; // x0
  System_String_o *LevelList_32900984; // x23
  UnityEngine_Object_o *servantClassIcon; // x22
  UnityEngine_Object_o *levelLabel; // x22
  UILabel_o *v62; // x22
  UnityEngine_Object_o *raritySprite; // x22
  int32_t rarityId; // w22
  int32_t ExceedCount; // w28
  int32_t Level; // w25
  System_String_o *Icon_21504332; // x28
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t v69; // w22
  ServantExceedMaster_o *v70; // x25
  int32_t RarityIcon; // w22
  WarQuestSelectionMaster_o *v72; // x0
  int32_t v73; // w25
  ServantLvDetailMaster_o *v74; // x26
  int32_t v75; // w8
  struct FollowerInfo_o *followerInfo; // x8
  int imageSvtId; // w22
  UnityEngine_Object_o *v78; // x24
  ServantFaceIconComponent_o *v79; // x24
  int32_t v80; // w24
  ServantLimitImageMaster_o *v81; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // kr10_16
  int32_t v83; // w24
  SkillInfo_array *v84; // x22
  ServantLeaderInfo_o *v85; // x22
  SkillInfo_array *v86; // x22
  UISprite_o *v87; // x22
  float y; // s8
  float x; // s10
  float z; // s9
  int32_t v91; // w8
  UnityEngine_Object_o *attackLabel; // x22
  int v93; // s0
  UILabel_o *v97; // x22
  UnityEngine_Object_o *hpLabel; // x22
  int v99; // s0
  UILabel_o *v103; // x22
  UnityEngine_Object_o *costLabel; // x22
  int32_t EquipCost; // w0
  UILabel_o *v106; // x28
  int v107; // w22
  int32_t MainCost; // w0
  Il2CppObject *v109; // x25
  Il2CppObject *v110; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  struct System_Collections_Generic_List_UIWidget__o *v112; // x0
  UnityEngine_Object_o *appendSkillList; // x22
  struct System_Collections_Generic_List_UIWidget__o *v114; // x0
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v116; // x0
  SwitchUIWidgetComponent_o *v117; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  System_Int32_array *monitor; // x23
  ServantCommandCardListComponent_o *v120; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // kr20_16
  UnityEngine_Object_o *v122; // x22
  UnityEngine_Object_o *v123; // x22
  UnityEngine_Object_o *v124; // x22
  UnityEngine_Object_o *v125; // x22
  UnityEngine_Object_o *v126; // x22
  UnityEngine_Object_o *v127; // x22
  UnityEngine_Object_o *v128; // x22
  UnityEngine_Object_o *v129; // x22
  UnityEngine_Object_o *v130; // x22
  UnityEngine_Object_o *v131; // x22
  UnityEngine_Object_o *v132; // x22
  UnityEngine_Object_o *v133; // x22
  UnityEngine_Object_o *v134; // x22
  UnityEngine_Object_o *v135; // x22
  const MethodInfo *v136; // x2
  UnityEngine_Object_o *v137; // x21
  UnityEngine_Object_o *v138; // x21
  bool isEventUpVal; // w23
  ServantCommandCardListComponent_o *v140; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // kr30_16
  UnityEngine_Object_o *supportSprite; // x22
  UserServantEntity_o *userServantEntity; // x0
  __int64 *v144; // x8
  System_String_o *v145; // x1
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  struct FollowerInfo_o *v147; // x22
  UnityEngine_Object_o *fixNpcMessageText; // x22
  struct FollowerInfo_o *v149; // x22
  UILabel_o *v150; // x22
  UnityEngine_Object_o *noneEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr40_16
  int32_t v153; // w23
  UISprite_o *equipSprite; // x22
  UnityEngine_Object_o *v155; // x22
  int v156; // w23
  System_Collections_Generic_List_XWeaponTrail_Element__o *v157; // x22
  bool v158; // w1
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  UnityEngine_Object_o *correctionIconSprite; // x22
  struct EventMargeItemUpValInfo_array *v161; // x8
  float v162; // s8
  float v163; // s9
  WarBoardPartyOrganizationListViewItemDraw_c *v164; // x0
  int *p_CORRECTION_ICON_BONUS_Y; // x8
  WarBoardPartyOrganizationListViewItemDraw_c *v166; // x0
  int v167; // s10
  UISprite_o *v168; // x21
  System_String_o *v169; // x0
  UnityEngine_Object_o *restrictionClassSprite; // x21
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v172; // x22
  UIAtlas_o *baseDefaultUIAtlas; // x21
  UnityEngine_Object_o *base2Sprite; // x21
  UISprite_o *v175; // x22
  UIAtlas_o *base2DefaultUIAtlas; // x21
  UnityEngine_Object_o *eventUpValIcon; // x21
  EventUpValIconComponent_o *v178; // x21
  UnityEngine_Object_o *bounusIcon; // x20
  bool v180; // w1
  UnityEngine_Object_o *v181; // x20
  UnityEngine_Object_o *baseButton; // x20
  int32_t lv; // [xsp+Ch] [xbp-B4h]
  __int64 tdStrengthStatus; // [xsp+10h] [xbp-B0h]
  int v185; // [xsp+18h] [xbp-A8h] BYREF
  int32_t v186; // [xsp+1Ch] [xbp-A4h] BYREF
  __int64 v187; // [xsp+20h] [xbp-A0h] BYREF
  SkillInfo_array *v188; // [xsp+28h] [xbp-98h] BYREF
  TreasureDvcInfo_o *v189; // [xsp+30h] [xbp-90h] BYREF
  SkillInfo_array *v190; // [xsp+38h] [xbp-88h] BYREF
  SkillInfo_array *v191; // [xsp+40h] [xbp-80h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v194; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v195; // 0:x0.16
  UnityEngine_Vector3_o v196; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v198; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4213320 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, item);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantExceedMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v13);
    sub_B0D8A4(&DataManager_TypeInfo, v14);
    sub_B0D8A4(&int_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__Clear__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___67879744, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v21);
    sub_B0D8A4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v22);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v23);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v24);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_B0D8A4(&Rarity_TypeInfo, v26);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B0D8A4(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v28);
    sub_B0D8A4(&StringLiteral_19438/*"icon_support_02"*/, v29);
    sub_B0D8A4(&StringLiteral_697/*"+"*/, v30);
    sub_B0D8A4(&StringLiteral_17764/*"correction_icon_"*/, v31);
    sub_B0D8A4(&StringLiteral_19402/*"icon_eventjoin_02"*/, v32);
    sub_B0D8A4(&StringLiteral_10416/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, v33);
    sub_B0D8A4(&StringLiteral_345/*"#,0"*/, v34);
    sub_B0D8A4(&StringLiteral_1/*""*/, v35);
    byte_4213320 = 1;
  }
  skillInfoList = 0LL;
  v191 = 0LL;
  tdInfo = 0LL;
  v189 = 0LL;
  v190 = 0LL;
  v187 = 0LL;
  v188 = 0LL;
  this->fields.linkItem = item;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.linkItem,
    (System_Int32_array **)item,
    *(System_String_array ***)&mode,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                                  v36,
                                                                                                  v37);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !item )
    goto LABEL_455;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)item->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                                    v40,
                                                                                                    v41);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v38,
      eventUpValItemList,
      (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___67879744);
  }
  switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_455;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    switchSkillUIList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
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
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !switchSkillUIList )
        goto LABEL_455;
      MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)switchSkillUIList,
                                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
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
      v53 = ServantImageLimitSealAfter;
      v194 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                                       v194,
                                                                                       0LL);
      if ( !servantNarrowTexture )
        goto LABEL_455;
      UINarrowFigureTexture__SetCharacter(servantNarrowTexture, (int32_t)switchSkillUIList, v53, 0LL, 0LL);
      frameType = item->fields.frameType;
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__GetDispImageLimitCount(
                                                                                       item,
                                                                                       0LL);
      if ( !item->fields.userServantEntity )
        goto LABEL_455;
      v55 = (int)switchSkillUIList;
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
      UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)switchSkillUIList, &tdInfo, -1, v55, 0, 0LL);
      v56 = skillInfoList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)LocalizationManager__GetLevelList_32900984(
                                                                                       v56,
                                                                                       0LL);
      if ( !tdInfo )
        goto LABEL_455;
      v57 = (System_String_o *)switchSkillUIList;
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)item->fields.userServantEntity;
      if ( !switchSkillUIList )
        goto LABEL_455;
      HIDWORD(tdStrengthStatus) = tdInfo->fields.strengthStatus;
      lv = tdInfo->fields.lv;
      LODWORD(tdStrengthStatus) = tdInfo->fields.treasureDeviceNum;
      UserServantEntity__GetAppendPassiveSkillInfo_21292424((UserServantEntity_o *)switchSkillUIList, &v191, 0LL);
      v58 = v191;
    }
    else
    {
      followerInfo = item->fields.followerInfo;
      LevelList_32900984 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !followerInfo )
      {
        tdStrengthStatus = 0LL;
        lv = 0;
        frameType = 9;
        v57 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_59;
      }
      imageSvtId = followerInfo->fields.imageSvtId;
      v78 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v78, 0LL, 0LL) )
      {
        v79 = this->fields.servantFaceIcon;
        switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                                         item,
                                                                                         0LL);
        if ( !v79 )
          goto LABEL_455;
        ServantFaceIconComponent__Set_29553232(
          v79,
          (ServantLeaderInfo_o *)switchSkillUIList,
          0LL,
          0LL,
          0,
          imageSvtId,
          0LL);
      }
      v80 = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0LL);
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !switchSkillUIList )
        goto LABEL_455;
      v81 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)switchSkillUIList,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v82 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                                       v82,
                                                                                       0LL);
      if ( !v81 )
        goto LABEL_455;
      v83 = ServantLimitImageMaster__GetServantImageLimitSealAfter(v81, (int32_t)switchSkillUIList, v80, 0LL);
      if ( imageSvtId <= 0 )
      {
        v195 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
        imageSvtId = BasicHelper__DecryptValue_18713680(v195, 0LL);
      }
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.servantNarrowTexture;
      if ( !switchSkillUIList )
        goto LABEL_455;
      UINarrowFigureTexture__SetCharacter((UINarrowFigureTexture_o *)switchSkillUIList, imageSvtId, v83, 0LL, 0LL);
      frameType = item->fields.frameType;
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                                       item,
                                                                                       0LL);
      if ( !switchSkillUIList )
        goto LABEL_455;
      ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)switchSkillUIList, &v190, 0LL);
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                                       item,
                                                                                       0LL);
      if ( !switchSkillUIList )
        goto LABEL_455;
      ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)switchSkillUIList, &v189, 0LL);
      v84 = v190;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)LocalizationManager__GetLevelList_32900984(
                                                                                       v84,
                                                                                       0LL);
      if ( !v189 )
        goto LABEL_455;
      v57 = (System_String_o *)switchSkillUIList;
      lv = v189->fields.lv;
      LODWORD(tdStrengthStatus) = v189->fields.treasureDeviceNum;
      HIDWORD(tdStrengthStatus) = v189->fields.strengthStatus;
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                                       item,
                                                                                       0LL);
      if ( !item->fields.followerInfo )
        goto LABEL_455;
      v85 = (ServantLeaderInfo_o *)switchSkillUIList;
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)FollowerInfo__get_IsNpc(
                                                                                       item->fields.followerInfo,
                                                                                       0LL);
      if ( !v85 )
        goto LABEL_455;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_28164780(v85, &v188, (unsigned __int8)switchSkillUIList & 1, 0LL);
      v86 = v188;
      if ( !v188 )
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
            v62 = this->fields.levelLabel;
            HIDWORD(v187) = PartyOrganizationListViewItem__get_Level(item, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Int32__ToString(
                                                                                             (int32_t)&v187 + 4,
                                                                                             0LL);
            if ( !v62 )
              goto LABEL_455;
            UILabel__set_text(v62, (System_String_o *)switchSkillUIList, 0LL);
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
            Icon_21504332 = Rarity__getIcon_21504332(rarityId, ExceedCount, Level, 0LL);
            if ( PartyOrganizationListViewItem__get_ExceedCount(item, 0LL) < 1 )
            {
              v75 = 0;
            }
            else
            {
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantExceedMaster___);
              v69 = item->fields.rarityId;
              v70 = (ServantExceedMaster_o *)Master_WarQuestSelectionMaster;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ExceedCount(
                                                                                               item,
                                                                                               0LL);
              if ( !v70 )
                goto LABEL_455;
              RarityIcon = ServantExceedMaster__GetRarityIcon(v70, v69, (int32_t)switchSkillUIList, 0, 0LL);
              v72 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
              v73 = item->fields.rarityId;
              v74 = (ServantLvDetailMaster_o *)v72;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_Level(
                                                                                               item,
                                                                                               0LL);
              if ( !v74 )
                goto LABEL_455;
              v75 = ServantLvDetailMaster__GetRarityIcon(v74, v73, (int32_t)switchSkillUIList, RarityIcon, 0LL);
            }
            v87 = this->fields.raritySprite;
            if ( v75 >= 3 )
            {
              if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetEventSprite(v87, Icon_21504332, 0LL);
            }
            else
            {
              if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetCommon(v87, 0LL);
            }
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.raritySprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, Icon_21504332, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.raritySprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            ((void (__fastcall *)(System_Collections_Generic_List_XWeaponTrail_Element__o *, Il2CppMethodPointer))switchSkillUIList->klass->vtable._33_get_Item.method)(
              switchSkillUIList,
              switchSkillUIList->klass->vtable._34_get_Count.methodPtr);
            x = this->fields.baseRarityPosition.fields.x;
            y = this->fields.baseRarityPosition.fields.y;
            z = this->fields.baseRarityPosition.fields.z;
            v91 = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.raritySprite;
            if ( v91 >= 1 )
              x = x + 1.0;
            if ( !switchSkillUIList )
              goto LABEL_455;
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_transform(
                                                                                             (UnityEngine_Component_o *)switchSkillUIList,
                                                                                             0LL);
            if ( !switchSkillUIList )
              goto LABEL_455;
            v196.fields.x = x;
            v196.fields.y = y;
            v196.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)switchSkillUIList, v196, 0LL);
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
              *(UnityEngine_Color_o *)&v93 = UnityEngine_Color__get_white(0LL);
            else
              *(UnityEngine_Color_o *)&v93 = UnityEngine_Color__get_yellow(0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.attackLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UIWidget__set_color((UIWidget_o *)switchSkillUIList, *(UnityEngine_Color_o *)&v93, 0LL);
            v97 = this->fields.attackLabel;
            HIDWORD(v187) = PartyOrganizationListViewItem__get_MargeAtk(item, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Int32__ToString_38473032(
                                                                                             (int32_t)&v187 + 4,
                                                                                             (System_String_o *)StringLiteral_345/*"#,0"*/,
                                                                                             0LL);
            if ( !v97 )
              goto LABEL_455;
            UILabel__set_text(v97, (System_String_o *)switchSkillUIList, 0LL);
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
              *(UnityEngine_Color_o *)&v99 = UnityEngine_Color__get_white(0LL);
            else
              *(UnityEngine_Color_o *)&v99 = UnityEngine_Color__get_yellow(0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.hpLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UIWidget__set_color((UIWidget_o *)switchSkillUIList, *(UnityEngine_Color_o *)&v99, 0LL);
            v103 = this->fields.hpLabel;
            HIDWORD(v187) = PartyOrganizationListViewItem__get_MargeHp(item, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Int32__ToString_38473032(
                                                                                             (int32_t)&v187 + 4,
                                                                                             (System_String_o *)StringLiteral_345/*"#,0"*/,
                                                                                             0LL);
            if ( !v103 )
              goto LABEL_455;
            UILabel__set_text(v103, (System_String_o *)switchSkillUIList, 0LL);
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
            v106 = this->fields.costLabel;
            v107 = EquipCost;
            MainCost = PartyOrganizationListViewItem__get_MainCost(item, 0LL);
            if ( (v107 & 0x80000000) != 0 )
            {
              HIDWORD(v187) = MainCost;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Int32__ToString(
                                                                                               (int32_t)&v187 + 4,
                                                                                               0LL);
              if ( !v106 )
                goto LABEL_455;
              UILabel__set_text(v106, (System_String_o *)switchSkillUIList, 0LL);
            }
            else
            {
              v186 = MainCost;
              v109 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v186);
              v185 = v107;
              v110 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v185);
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_String__Concat_43929608(
                                                                                               v109,
                                                                                               (Il2CppObject *)StringLiteral_697/*"+"*/,
                                                                                               v110,
                                                                                               0LL);
              if ( !v106 )
                goto LABEL_455;
              UILabel__set_text(v106, (System_String_o *)switchSkillUIList, 0LL);
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
              v57,
              lv,
              SHIDWORD(tdStrengthStatus),
              tdStrengthStatus,
              0,
              0LL);
            if ( !System_String__IsNullOrEmpty(v57, 0LL) )
            {
              v112 = this->fields.switchSkillUIList;
              if ( v112 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v112,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInfoUiWidget,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
            if ( System_String__IsNullOrEmpty(LevelList_32900984, 0LL) )
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
              v114 = this->fields.switchSkillUIList;
              if ( v114 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v114,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.appendSkillInfoUiWidget,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
              AppendSkillListComponent__Set((AppendSkillListComponent_o *)switchSkillUIList, LevelList_32900984, 0LL);
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
            v116 = this->fields.switchSkillUIList;
            if ( v116 )
            {
              v117 = this->fields.switchSkillInfo;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v116,
                                                                                               (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
              if ( !v117 )
                goto LABEL_455;
              SwitchUIWidgetComponent__Set(v117, (UIWidget_array *)switchSkillUIList, 0LL);
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
              v140 = this->fields.svtCommandCardList;
              v141 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                                               v141,
                                                                                               0LL);
              if ( v140 )
              {
                ServantCommandCardListComponent__Set_27048524(
                  v140,
                  (int32_t)switchSkillUIList,
                  monitor,
                  item->fields.commandCodeIdList,
                  2,
                  0,
                  0LL);
                goto LABEL_314;
              }
LABEL_455:
              sub_B0D97C(switchSkillUIList);
            }
            v120 = this->fields.svtCommandCardList;
            v121 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                                             v121,
                                                                                             0LL);
            if ( !v120 )
              goto LABEL_455;
            ServantCommandCardListComponent__Set_27048784(
              v120,
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
              v147 = item->fields.followerInfo;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)switchSkillUIList,
                                                                                               0LL);
              if ( !switchSkillUIList )
                goto LABEL_455;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v147 != 0LL, 0LL);
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
              v149 = item->fields.followerInfo;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)switchSkillUIList,
                                                                                               0LL);
              if ( !switchSkillUIList )
                goto LABEL_455;
              if ( v149 )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
                v150 = this->fields.fixNpcMessageText;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)LocalizationManager__Get(
                                                                                                 (System_String_o *)StringLiteral_10416/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/,
                                                                                                 0LL);
                if ( !v150 )
                  goto LABEL_455;
                UILabel__set_text(v150, (System_String_o *)switchSkillUIList, 0LL);
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
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                                             EquipSvtId,
                                                                                             0LL);
            if ( !this->fields.noneEquipSprite )
              goto LABEL_455;
            v153 = (int)switchSkillUIList;
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                             (UnityEngine_Component_o *)this->fields.noneEquipSprite,
                                                                                             0LL);
            if ( !switchSkillUIList )
              goto LABEL_455;
            if ( v153 < 1 )
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
              v158 = 0;
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
              AtlasManager__SetEquipFace(equipSprite, v153, 0LL);
              v155 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(v155, 0LL, 0LL) )
                goto LABEL_383;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_EquipLimitCountMax(
                                                                                               item,
                                                                                               0LL);
              if ( !this->fields.equipLimitCountSprite )
                goto LABEL_455;
              v156 = (int)switchSkillUIList;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                                                                                               0LL);
              v157 = switchSkillUIList;
              if ( v156 < 1 )
              {
                v158 = 0;
                if ( !switchSkillUIList )
                  goto LABEL_455;
              }
              else
              {
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_EquipLimitCount(
                                                                                                 item,
                                                                                                 0LL);
                v158 = (int)switchSkillUIList >= v156;
                if ( !v157 )
                  goto LABEL_455;
              }
              switchSkillUIList = v157;
            }
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v158, 0LL);
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
              LODWORD(v187) = PartyOrganizationListViewItem__GetCorrectionIconId(item, 0LL);
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.correctionIconSprite;
              if ( !switchSkillUIList )
                goto LABEL_455;
              if ( (v187 & 0x80000000) != 0 )
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
                v161 = item->fields.eventUpValItemList;
                v162 = localPosition.fields.x;
                v163 = localPosition.fields.z;
                if ( v161 && *(_QWORD *)&v161->max_length )
                {
                  v164 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
                  if ( (BYTE3(WarBoardPartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
                    v164 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
                  }
                  p_CORRECTION_ICON_BONUS_Y = &v164->static_fields->CORRECTION_ICON_BONUS_Y;
                }
                else
                {
                  v166 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
                  if ( (BYTE3(WarBoardPartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
                    v166 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
                  }
                  p_CORRECTION_ICON_BONUS_Y = &v166->static_fields->CORRECTION_ICON_SINGLE_Y;
                }
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.correctionIconSprite;
                if ( !switchSkillUIList )
                  goto LABEL_455;
                v167 = *p_CORRECTION_ICON_BONUS_Y;
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_transform(
                                                                                                 (UnityEngine_Component_o *)switchSkillUIList,
                                                                                                 0LL);
                if ( !switchSkillUIList )
                  goto LABEL_455;
                v198.fields.y = (float)v167;
                v198.fields.x = v162;
                v198.fields.z = v163;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)switchSkillUIList, v198, 0LL);
                v168 = this->fields.correctionIconSprite;
                v169 = System_Int32__ToString((int32_t)&v187, 0LL);
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_String__Concat_43849904(
                                                                                                 (System_String_o *)StringLiteral_17764/*"correction_icon_"*/,
                                                                                                 v169,
                                                                                                 0LL);
                if ( !v168 )
                  goto LABEL_455;
                UISprite__set_spriteName(v168, (System_String_o *)switchSkillUIList, 0LL);
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
              v172 = this->fields.baseSprite;
              baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetFormationBase(v172, frameType, baseDefaultUIAtlas, 0, 0LL);
            }
            base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
            {
              v175 = this->fields.base2Sprite;
              base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetFormationFrame(v175, frameType, base2DefaultUIAtlas, 0, 0LL);
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
              if ( !v38 )
                goto LABEL_455;
              v178 = this->fields.eventUpValIcon;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v38,
                                                                                               (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
              if ( !v178 )
                goto LABEL_455;
              EventUpValIconComponent__Set(v178, (EventMargeItemUpValInfo_array *)switchSkillUIList, -1, -1, -1, 0LL);
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
              v180 = 0;
            }
            else
            {
              v181 = (UnityEngine_Object_o *)this->fields.bounusIcon;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(v181, 0LL, 0LL) )
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
              v180 = isEventUpVal;
            }
            ShiningIconComponent__Set_32504684((ShiningIconComponent_o *)switchSkillUIList, v180, 0LL);
            goto LABEL_448;
          }
          userServantEntity = item->fields.userServantEntity;
          if ( userServantEntity && UserServantEntity__IsEventJoin(userServantEntity, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.supportSprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            v144 = &StringLiteral_19402/*"icon_eventjoin_02"*/;
          }
          else
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.supportSprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            if ( !item->fields.followerInfo )
            {
              v145 = 0LL;
              goto LABEL_327;
            }
            v144 = &StringLiteral_19438/*"icon_support_02"*/;
          }
          v145 = (System_String_o *)*v144;
LABEL_327:
          UISprite__set_spriteName((UISprite_o *)switchSkillUIList, v145, 0LL);
          goto LABEL_328;
        }
        v122 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v122, 0LL, 0LL) )
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
          v123 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v123, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.servantClassIcon;
            if ( !switchSkillUIList )
              goto LABEL_455;
            ServantClassIconComponent__Clear((ServantClassIconComponent_o *)switchSkillUIList, 0LL);
          }
          v124 = (UnityEngine_Object_o *)this->fields.levelLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v124, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.levelLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          v125 = (UnityEngine_Object_o *)this->fields.raritySprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v125, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.raritySprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, 0LL, 0LL);
          }
          v126 = (UnityEngine_Object_o *)this->fields.attackLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v126, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.attackLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          v127 = (UnityEngine_Object_o *)this->fields.hpLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v127, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.hpLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          v128 = (UnityEngine_Object_o *)this->fields.costLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v128, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.costLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          v129 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v129, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.skillListTreasureDevice;
            if ( !switchSkillUIList )
              goto LABEL_455;
            SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)switchSkillUIList, 0LL);
          }
          v130 = (UnityEngine_Object_o *)this->fields.appendSkillList;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v130, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.appendSkillList;
            if ( !switchSkillUIList )
              goto LABEL_455;
            AppendSkillListComponent__Clear((AppendSkillListComponent_o *)switchSkillUIList, 0LL);
          }
          v131 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v131, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.svtCommandCardList;
            if ( !switchSkillUIList )
              goto LABEL_455;
            ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)switchSkillUIList, 0LL);
          }
          v132 = (UnityEngine_Object_o *)this->fields.supportSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v132, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.supportSprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, 0LL, 0LL);
          }
          v133 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v133, 0LL, 0LL) )
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
            v134 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v134, 0LL, 0LL) )
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
          v135 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v135, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.correctionIconSprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, 0LL, 0LL);
          }
          WarBoardPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(this, item, v136);
          v137 = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v137, 0LL, 0LL) )
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
          v138 = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v138, 0LL, 0LL) )
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
      v58 = v86;
    }
    LevelList_32900984 = LocalizationManager__GetLevelList_32900984(v58, 0LL);
    goto LABEL_59;
  }
  switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0LL);
  if ( !switchSkillUIList )
    goto LABEL_455;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
  v45 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
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
    v46 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v46, 0LL, 0LL) )
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
  void *MasterData_WarQuestSelectionMaster; // x0
  WarBoardIndividualityClassMaster_o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int v31; // w25
  __int64 v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_int__o *v35; // x22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x22
  WarBoardPartyOrganizationListViewItemDraw___c_c *v45; // x0
  struct WarBoardPartyOrganizationListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__40_0; // x23
  Il2CppObject *v48; // x24
  struct WarBoardPartyOrganizationListViewItemDraw___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_IEnumerable_T__o *v56; // x22
  __int64 v57; // x1
  __int64 v58; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v59; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  System_Int32_array *v61; // x0
  __int64 v62; // x8
  __int64 v63; // x8
  WarBoardPartyOrganizationListViewItemDraw_c *v64; // x0
  System_String_o *RestrictionClassSpriteNameFormat; // x20
  Il2CppObject *v66; // x0
  System_String_o *v67; // x20
  __int64 v68; // x0
  int v69; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4213321 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_RestrictionEntity___ctor__, item);
    sub_B0D8A4(&System_Action_RestrictionEntity__TypeInfo, v5);
    sub_B0D8A4(&Method_BasicHelper_ForEach_RestrictionEntity___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Distinct_int___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v10);
    sub_B0D8A4(&Method_System_Func_RestrictionEntity__bool___ctor__, v11);
    sub_B0D8A4(&System_Func_RestrictionEntity__bool__TypeInfo, v12);
    sub_B0D8A4(&int_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v17);
    sub_B0D8A4(&Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__, v18);
    sub_B0D8A4(
      &Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__,
      v19);
    sub_B0D8A4(&WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo, v20);
    sub_B0D8A4(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo, v21);
    sub_B0D8A4(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v22);
    byte_4213321 = 1;
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
      sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v25 = **(_QWORD **)(v24 + 192);
    if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
      sub_AA65A4(v25);
    MasterData_WarQuestSelectionMaster = **(void ***)(v25 + 184);
    if ( MasterData_WarQuestSelectionMaster )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v27 = (WarBoardIndividualityClassMaster_o *)MasterData_WarQuestSelectionMaster;
        MasterData_WarQuestSelectionMaster = WarBoardIndividualityClassMaster__GetAllClassServantEntity(
                                               (WarBoardIndividualityClassMaster_o *)MasterData_WarQuestSelectionMaster,
                                               0LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          if ( item )
          {
            questRestrictionInfo = item->fields.questRestrictionInfo;
            v31 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 11);
            if ( questRestrictionInfo && questRestrictionInfo->fields.restrictionEntityList )
            {
              v32 = sub_B0D974(WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo, v28, v29);
              WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0___ctor(
                (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)v32,
                0LL);
              v35 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                                System_Collections_Generic_List_int__TypeInfo,
                                                                v33,
                                                                v34);
              System_Collections_Generic_List_int____ctor(
                v35,
                (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v32 )
                goto LABEL_40;
              *(_QWORD *)(v32 + 16) = v35;
              sub_B0D840(
                (BattleServantConfConponent_o *)(v32 + 16),
                (System_Int32_array **)v35,
                v36,
                v37,
                v38,
                v39,
                v40,
                v41);
              restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
              v45 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              if ( (BYTE3(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
                v45 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              }
              static_fields = v45->static_fields;
              _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__40_0;
              if ( !_9__40_0 )
              {
                if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v45);
                  static_fields = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
                }
                v48 = (Il2CppObject *)static_fields->__9;
                _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                                System_Func_RestrictionEntity__bool__TypeInfo,
                                                                                                v42,
                                                                                                v43);
                System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                  _9__40_0,
                  v48,
                  Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__,
                  (const MethodInfo_26189B8 *)Method_System_Func_RestrictionEntity__bool___ctor__);
                v49 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
                v49->__9__40_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__40_0;
                sub_B0D840(
                  (BattleServantConfConponent_o *)&v49->__9__40_0,
                  (System_Int32_array **)_9__40_0,
                  v50,
                  v51,
                  v52,
                  v53,
                  v54,
                  v55);
              }
              v56 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                     restrictionEntityList,
                                                                     (System_Func_TSource__bool__o *)_9__40_0,
                                                                     (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
              v59 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                           System_Action_RestrictionEntity__TypeInfo,
                                                                                           v57,
                                                                                           v58);
              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                v59,
                (Il2CppObject *)v32,
                Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__,
                (const MethodInfo_246EA3C *)Method_System_Action_RestrictionEntity___ctor__);
              BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                v56,
                (System_Action_T__o *)v59,
                (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_RestrictionEntity___);
              v60 = System_Linq_Enumerable__Distinct_int_(
                      *(System_Collections_Generic_IEnumerable_TSource__o **)(v32 + 16),
                      (const MethodInfo_1B48964 *)Method_System_Linq_Enumerable_Distinct_int___);
              v61 = System_Linq_Enumerable__ToArray_int_(
                      v60,
                      (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
              MasterData_WarQuestSelectionMaster = WarBoardIndividualityClassMaster__GetServantClassEntities(
                                                     v27,
                                                     v61,
                                                     0LL);
              if ( MasterData_WarQuestSelectionMaster )
              {
                v62 = *((_QWORD *)MasterData_WarQuestSelectionMaster + 3);
                if ( v62 )
                {
                  if ( !(_DWORD)v62 )
                  {
                    v68 = sub_B0D9A8(MasterData_WarQuestSelectionMaster);
                    sub_B0D948(v68, 0LL);
                  }
                  v63 = *((_QWORD *)MasterData_WarQuestSelectionMaster + 4);
                  if ( !v63 )
                    goto LABEL_40;
                  v31 = *(_DWORD *)(v63 + 44);
                }
              }
            }
            v64 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            if ( (BYTE3(WarBoardPartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
              v64 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            }
            RestrictionClassSpriteNameFormat = v64->static_fields->RestrictionClassSpriteNameFormat;
            v69 = v31;
            v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
            MasterData_WarQuestSelectionMaster = System_String__Format(RestrictionClassSpriteNameFormat, v66, 0LL);
            if ( this->fields.restrictionClassSprite )
            {
              v67 = (System_String_o *)MasterData_WarQuestSelectionMaster;
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
                  UISprite__set_spriteName((UISprite_o *)MasterData_WarQuestSelectionMaster, v67, 0LL);
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
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  }
}


void __fastcall WarBoardPartyOrganizationListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213877 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo, v1);
    byte_4213877 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
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
  if ( (byte_4213878 & 1) == 0 )
  {
    this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)sub_B0D8A4(
                                                                                  &Method_System_Collections_Generic_List_int__AddRange__,
                                                                                  x);
    byte_4213878 = 1;
  }
  if ( !x
    || (this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)v4->fields.indivisualities) == 0LL )
  {
    sub_B0D97C(this);
  }
  System_Collections_Generic_List_int___AddRange(
    (System_Collections_Generic_List_int__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)x->fields.targetVals,
    (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
}