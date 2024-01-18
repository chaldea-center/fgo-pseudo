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

  if ( (byte_4186571 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_17446/*"class2_{0}"*/, v8);
    byte_4186571 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_17446/*"class2_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17446/*"class2_{0}"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  __int64 v6; // x1
  UnityEngine_Component_o *transform; // x0
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

  if ( (byte_418656C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_418656C = 1;
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
    v15 = this->fields.baseSprite;
    if ( !v15 )
      goto LABEL_23;
    mAtlas = v15->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_B2C2F8(
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
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v24 = this->fields.base2Sprite;
    if ( v24 )
    {
      v25 = v24->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v25;
      sub_B2C2F8(
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
    sub_B2C434(transform, v6);
  }
LABEL_22:
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v26;
  sub_B2C2F8(
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
  __int64 v10; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20

  if ( (byte_418656D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418656D = 1;
  }
  this->fields.linkItem = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B2C434(gameObject, v10);
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

  if ( (byte_4186570 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4186570 = 1;
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
      ShiningIconComponent__Set_32979912((ShiningIconComponent_o *)baseSprite, 0, 0LL);
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
    sub_B2C434(baseSprite, isDisp);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *switchSkillUIList; // x0
  _BOOL8 v38; // x1
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  UnityEngine_Object_o *v42; // x20
  UnityEngine_Object_o *v43; // x20
  UnityEngine_Object_o *servantFaceIcon; // x22
  int32_t CardImageLimitCount; // w22
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v50; // w22
  int32_t frameType; // w27
  int32_t v52; // w22
  SkillInfo_array *v53; // x22
  System_String_o *v54; // x24
  SkillInfo_array *v55; // x0
  System_String_o *LevelList_33989780; // x23
  UnityEngine_Object_o *servantClassIcon; // x22
  UnityEngine_Object_o *levelLabel; // x22
  UILabel_o *v59; // x22
  UnityEngine_Object_o *raritySprite; // x22
  int32_t rarityId; // w22
  int32_t ExceedCount; // w28
  int32_t Level; // w25
  System_String_o *Icon_21889892; // x28
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t v66; // w22
  ServantExceedMaster_o *v67; // x25
  int32_t RarityIcon; // w22
  WarQuestSelectionMaster_o *v69; // x0
  int32_t v70; // w25
  ServantLvDetailMaster_o *v71; // x26
  int32_t v72; // w8
  struct FollowerInfo_o *followerInfo; // x8
  int imageSvtId; // w22
  UnityEngine_Object_o *v75; // x24
  ServantFaceIconComponent_o *v76; // x24
  int32_t v77; // w24
  ServantLimitImageMaster_o *v78; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // kr10_16
  int32_t v80; // w24
  SkillInfo_array *v81; // x22
  ServantLeaderInfo_o *v82; // x22
  SkillInfo_array *v83; // x22
  UISprite_o *v84; // x22
  float y; // s8
  float x; // s10
  float z; // s9
  int32_t v88; // w8
  UnityEngine_Object_o *attackLabel; // x22
  int v90; // s0
  UILabel_o *v94; // x22
  UnityEngine_Object_o *hpLabel; // x22
  int v96; // s0
  UILabel_o *v100; // x22
  UnityEngine_Object_o *costLabel; // x22
  int32_t EquipCost; // w0
  UILabel_o *v103; // x28
  int v104; // w22
  int32_t MainCost; // w0
  Il2CppObject *v106; // x25
  Il2CppObject *v107; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  struct System_Collections_Generic_List_UIWidget__o *v109; // x0
  UnityEngine_Object_o *appendSkillList; // x22
  struct System_Collections_Generic_List_UIWidget__o *v111; // x0
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v113; // x0
  SwitchUIWidgetComponent_o *v114; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  System_Int32_array *monitor; // x23
  ServantCommandCardListComponent_o *v117; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // kr20_16
  UnityEngine_Object_o *v119; // x22
  UnityEngine_Object_o *v120; // x22
  UnityEngine_Object_o *v121; // x22
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
  const MethodInfo *v133; // x2
  UnityEngine_Object_o *v134; // x21
  UnityEngine_Object_o *v135; // x21
  bool isEventUpVal; // w23
  ServantCommandCardListComponent_o *v137; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // kr30_16
  UnityEngine_Object_o *supportSprite; // x22
  UserServantEntity_o *userServantEntity; // x0
  __int64 *v141; // x8
  System_String_o *v142; // x1
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  struct FollowerInfo_o *v144; // x22
  UnityEngine_Object_o *fixNpcMessageText; // x22
  struct FollowerInfo_o *v146; // x22
  UILabel_o *v147; // x22
  UnityEngine_Object_o *noneEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr40_16
  int32_t v150; // w23
  UISprite_o *equipSprite; // x22
  UnityEngine_Object_o *v152; // x22
  int v153; // w23
  System_Collections_Generic_List_XWeaponTrail_Element__o *v154; // x22
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  UnityEngine_Object_o *correctionIconSprite; // x22
  struct EventMargeItemUpValInfo_array *v157; // x8
  float v158; // s8
  float v159; // s9
  WarBoardPartyOrganizationListViewItemDraw_c *v160; // x0
  int *p_CORRECTION_ICON_BONUS_Y; // x8
  WarBoardPartyOrganizationListViewItemDraw_c *v162; // x0
  int v163; // s10
  UISprite_o *v164; // x21
  System_String_o *v165; // x0
  UnityEngine_Object_o *restrictionClassSprite; // x21
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v168; // x22
  UIAtlas_o *baseDefaultUIAtlas; // x21
  UnityEngine_Object_o *base2Sprite; // x21
  UISprite_o *v171; // x22
  UIAtlas_o *base2DefaultUIAtlas; // x21
  UnityEngine_Object_o *eventUpValIcon; // x21
  EventUpValIconComponent_o *v174; // x21
  UnityEngine_Object_o *bounusIcon; // x20
  bool v176; // w1
  UnityEngine_Object_o *v177; // x20
  UnityEngine_Object_o *baseButton; // x20
  int32_t lv; // [xsp+Ch] [xbp-B4h]
  __int64 tdStrengthStatus; // [xsp+10h] [xbp-B0h]
  int v181; // [xsp+18h] [xbp-A8h] BYREF
  int32_t v182; // [xsp+1Ch] [xbp-A4h] BYREF
  __int64 v183; // [xsp+20h] [xbp-A0h] BYREF
  SkillInfo_array *v184; // [xsp+28h] [xbp-98h] BYREF
  TreasureDvcInfo_o *v185; // [xsp+30h] [xbp-90h] BYREF
  SkillInfo_array *v186; // [xsp+38h] [xbp-88h] BYREF
  SkillInfo_array *v187; // [xsp+40h] [xbp-80h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v190; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v191; // 0:x0.16
  UnityEngine_Vector3_o v192; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v194; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418656E & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantExceedMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v13);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(&int_TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__Clear__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___67306184, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v21);
    sub_B2C35C(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v22);
    sub_B2C35C(&LocalizationManager_TypeInfo, v23);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v24);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_B2C35C(&Rarity_TypeInfo, v26);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B2C35C(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v28);
    sub_B2C35C(&StringLiteral_19377/*"icon_support_02"*/, v29);
    sub_B2C35C(&StringLiteral_691/*"+"*/, v30);
    sub_B2C35C(&StringLiteral_17708/*"correction_icon_"*/, v31);
    sub_B2C35C(&StringLiteral_19341/*"icon_eventjoin_02"*/, v32);
    sub_B2C35C(&StringLiteral_10392/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, v33);
    sub_B2C35C(&StringLiteral_340/*"#,0"*/, v34);
    sub_B2C35C(&StringLiteral_1/*""*/, v35);
    byte_418656E = 1;
  }
  skillInfoList = 0LL;
  v187 = 0LL;
  tdInfo = 0LL;
  v185 = 0LL;
  v186 = 0LL;
  v183 = 0LL;
  v184 = 0LL;
  this->fields.linkItem = item;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.linkItem,
    (System_Int32_array **)item,
    *(System_String_array ***)&mode,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !item )
    goto LABEL_455;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)item->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v36,
      eventUpValItemList,
      (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___67306184);
  }
  switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_455;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    switchSkillUIList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
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
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !switchSkillUIList )
        goto LABEL_455;
      MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)switchSkillUIList,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
      v50 = ServantImageLimitSealAfter;
      v190 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                                       v190,
                                                                                       0LL);
      if ( !servantNarrowTexture )
        goto LABEL_455;
      UINarrowFigureTexture__SetCharacter(servantNarrowTexture, (int32_t)switchSkillUIList, v50, 0LL, 0LL);
      frameType = item->fields.frameType;
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__GetDispImageLimitCount(
                                                                                       item,
                                                                                       0LL);
      if ( !item->fields.userServantEntity )
        goto LABEL_455;
      v52 = (int)switchSkillUIList;
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
      UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)switchSkillUIList, &tdInfo, -1, v52, 0, 0LL);
      v53 = skillInfoList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)LocalizationManager__GetLevelList_33989780(
                                                                                       v53,
                                                                                       0LL);
      if ( !tdInfo )
        goto LABEL_455;
      v54 = (System_String_o *)switchSkillUIList;
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)item->fields.userServantEntity;
      if ( !switchSkillUIList )
        goto LABEL_455;
      HIDWORD(tdStrengthStatus) = tdInfo->fields.strengthStatus;
      lv = tdInfo->fields.lv;
      LODWORD(tdStrengthStatus) = tdInfo->fields.treasureDeviceNum;
      UserServantEntity__GetAppendPassiveSkillInfo_21681068((UserServantEntity_o *)switchSkillUIList, &v187, 0LL);
      v55 = v187;
    }
    else
    {
      followerInfo = item->fields.followerInfo;
      LevelList_33989780 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !followerInfo )
      {
        tdStrengthStatus = 0LL;
        lv = 0;
        frameType = 9;
        v54 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_59;
      }
      imageSvtId = followerInfo->fields.imageSvtId;
      v75 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v75, 0LL, 0LL) )
      {
        v76 = this->fields.servantFaceIcon;
        switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                                         item,
                                                                                         0LL);
        if ( !v76 )
          goto LABEL_455;
        ServantFaceIconComponent__Set_30720044(
          v76,
          (ServantLeaderInfo_o *)switchSkillUIList,
          0LL,
          0LL,
          0,
          imageSvtId,
          0LL);
      }
      v77 = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0LL);
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !switchSkillUIList )
        goto LABEL_455;
      v78 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)switchSkillUIList,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v79 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                                       v79,
                                                                                       0LL);
      if ( !v78 )
        goto LABEL_455;
      v80 = ServantLimitImageMaster__GetServantImageLimitSealAfter(v78, (int32_t)switchSkillUIList, v77, 0LL);
      if ( imageSvtId <= 0 )
      {
        v191 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
        imageSvtId = BasicHelper__DecryptValue_19216120(v191, 0LL);
      }
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.servantNarrowTexture;
      if ( !switchSkillUIList )
        goto LABEL_455;
      UINarrowFigureTexture__SetCharacter((UINarrowFigureTexture_o *)switchSkillUIList, imageSvtId, v80, 0LL, 0LL);
      frameType = item->fields.frameType;
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                                       item,
                                                                                       0LL);
      if ( !switchSkillUIList )
        goto LABEL_455;
      ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)switchSkillUIList, &v186, 0LL);
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                                       item,
                                                                                       0LL);
      if ( !switchSkillUIList )
        goto LABEL_455;
      ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)switchSkillUIList, &v185, 0LL);
      v81 = v186;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)LocalizationManager__GetLevelList_33989780(
                                                                                       v81,
                                                                                       0LL);
      if ( !v185 )
        goto LABEL_455;
      v54 = (System_String_o *)switchSkillUIList;
      lv = v185->fields.lv;
      LODWORD(tdStrengthStatus) = v185->fields.treasureDeviceNum;
      HIDWORD(tdStrengthStatus) = v185->fields.strengthStatus;
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                                       item,
                                                                                       0LL);
      if ( !item->fields.followerInfo )
        goto LABEL_455;
      v82 = (ServantLeaderInfo_o *)switchSkillUIList;
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)FollowerInfo__get_IsNpc(
                                                                                       item->fields.followerInfo,
                                                                                       0LL);
      if ( !v82 )
        goto LABEL_455;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_29351980(v82, &v184, (unsigned __int8)switchSkillUIList & 1, 0LL);
      v83 = v184;
      if ( !v184 )
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
            v59 = this->fields.levelLabel;
            HIDWORD(v183) = PartyOrganizationListViewItem__get_Level(item, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Int32__ToString(
                                                                                             (int32_t)&v183 + 4,
                                                                                             0LL);
            if ( !v59 )
              goto LABEL_455;
            UILabel__set_text(v59, (System_String_o *)switchSkillUIList, 0LL);
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
            Icon_21889892 = Rarity__getIcon_21889892(rarityId, ExceedCount, Level, 0LL);
            if ( PartyOrganizationListViewItem__get_ExceedCount(item, 0LL) < 1 )
            {
              v72 = 0;
            }
            else
            {
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantExceedMaster___);
              v66 = item->fields.rarityId;
              v67 = (ServantExceedMaster_o *)Master_WarQuestSelectionMaster;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ExceedCount(
                                                                                               item,
                                                                                               0LL);
              if ( !v67 )
                goto LABEL_455;
              RarityIcon = ServantExceedMaster__GetRarityIcon(v67, v66, (int32_t)switchSkillUIList, 0, 0LL);
              v69 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
              v70 = item->fields.rarityId;
              v71 = (ServantLvDetailMaster_o *)v69;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_Level(
                                                                                               item,
                                                                                               0LL);
              if ( !v71 )
                goto LABEL_455;
              v72 = ServantLvDetailMaster__GetRarityIcon(v71, v70, (int32_t)switchSkillUIList, RarityIcon, 0LL);
            }
            v84 = this->fields.raritySprite;
            if ( v72 >= 3 )
            {
              if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetEventSprite(v84, Icon_21889892, 0LL);
            }
            else
            {
              if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetCommon(v84, 0LL);
            }
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.raritySprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, Icon_21889892, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.raritySprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            ((void (__fastcall *)(System_Collections_Generic_List_XWeaponTrail_Element__o *, Il2CppMethodPointer))switchSkillUIList->klass->vtable._33_get_Item.method)(
              switchSkillUIList,
              switchSkillUIList->klass->vtable._34_get_Count.methodPtr);
            x = this->fields.baseRarityPosition.fields.x;
            y = this->fields.baseRarityPosition.fields.y;
            z = this->fields.baseRarityPosition.fields.z;
            v88 = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.raritySprite;
            if ( v88 >= 1 )
              x = x + 1.0;
            if ( !switchSkillUIList )
              goto LABEL_455;
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_transform(
                                                                                             (UnityEngine_Component_o *)switchSkillUIList,
                                                                                             0LL);
            if ( !switchSkillUIList )
              goto LABEL_455;
            v192.fields.x = x;
            v192.fields.y = y;
            v192.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)switchSkillUIList, v192, 0LL);
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
              *(UnityEngine_Color_o *)&v90 = UnityEngine_Color__get_white(0LL);
            else
              *(UnityEngine_Color_o *)&v90 = UnityEngine_Color__get_yellow(0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.attackLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UIWidget__set_color((UIWidget_o *)switchSkillUIList, *(UnityEngine_Color_o *)&v90, 0LL);
            v94 = this->fields.attackLabel;
            HIDWORD(v183) = PartyOrganizationListViewItem__get_MargeAtk(item, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Int32__ToString_38381416(
                                                                                             (int32_t)&v183 + 4,
                                                                                             (System_String_o *)StringLiteral_340/*"#,0"*/,
                                                                                             0LL);
            if ( !v94 )
              goto LABEL_455;
            UILabel__set_text(v94, (System_String_o *)switchSkillUIList, 0LL);
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
              *(UnityEngine_Color_o *)&v96 = UnityEngine_Color__get_white(0LL);
            else
              *(UnityEngine_Color_o *)&v96 = UnityEngine_Color__get_yellow(0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.hpLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UIWidget__set_color((UIWidget_o *)switchSkillUIList, *(UnityEngine_Color_o *)&v96, 0LL);
            v100 = this->fields.hpLabel;
            HIDWORD(v183) = PartyOrganizationListViewItem__get_MargeHp(item, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Int32__ToString_38381416(
                                                                                             (int32_t)&v183 + 4,
                                                                                             (System_String_o *)StringLiteral_340/*"#,0"*/,
                                                                                             0LL);
            if ( !v100 )
              goto LABEL_455;
            UILabel__set_text(v100, (System_String_o *)switchSkillUIList, 0LL);
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
            v103 = this->fields.costLabel;
            v104 = EquipCost;
            MainCost = PartyOrganizationListViewItem__get_MainCost(item, 0LL);
            if ( (v104 & 0x80000000) != 0 )
            {
              HIDWORD(v183) = MainCost;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Int32__ToString(
                                                                                               (int32_t)&v183 + 4,
                                                                                               0LL);
              if ( !v103 )
                goto LABEL_455;
              UILabel__set_text(v103, (System_String_o *)switchSkillUIList, 0LL);
            }
            else
            {
              v182 = MainCost;
              v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v182);
              v181 = v104;
              v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v181);
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_String__Concat_44385236(
                                                                                               v106,
                                                                                               (Il2CppObject *)StringLiteral_691/*"+"*/,
                                                                                               v107,
                                                                                               0LL);
              if ( !v103 )
                goto LABEL_455;
              UILabel__set_text(v103, (System_String_o *)switchSkillUIList, 0LL);
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
              v54,
              lv,
              SHIDWORD(tdStrengthStatus),
              tdStrengthStatus,
              0,
              0LL);
            if ( !System_String__IsNullOrEmpty(v54, 0LL) )
            {
              v109 = this->fields.switchSkillUIList;
              if ( v109 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v109,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInfoUiWidget,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
            if ( System_String__IsNullOrEmpty(LevelList_33989780, 0LL) )
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
              v111 = this->fields.switchSkillUIList;
              if ( v111 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v111,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.appendSkillInfoUiWidget,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
              AppendSkillListComponent__Set((AppendSkillListComponent_o *)switchSkillUIList, LevelList_33989780, 0LL);
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
            v113 = this->fields.switchSkillUIList;
            if ( v113 )
            {
              v114 = this->fields.switchSkillInfo;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v113,
                                                                                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
              if ( !v114 )
                goto LABEL_455;
              SwitchUIWidgetComponent__Set(v114, (UIWidget_array *)switchSkillUIList, 0LL);
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
              v137 = this->fields.svtCommandCardList;
              v138 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                                               v138,
                                                                                               0LL);
              if ( v137 )
              {
                ServantCommandCardListComponent__Set_29228872(
                  v137,
                  (int32_t)switchSkillUIList,
                  monitor,
                  item->fields.commandCodeIdList,
                  2,
                  0,
                  0LL);
                goto LABEL_314;
              }
LABEL_455:
              sub_B2C434(switchSkillUIList, v38);
            }
            v117 = this->fields.svtCommandCardList;
            v118 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                                             v118,
                                                                                             0LL);
            if ( !v117 )
              goto LABEL_455;
            ServantCommandCardListComponent__Set_29229132(
              v117,
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
              v144 = item->fields.followerInfo;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)switchSkillUIList,
                                                                                               0LL);
              if ( !switchSkillUIList )
                goto LABEL_455;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v144 != 0LL, 0LL);
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
              v146 = item->fields.followerInfo;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)switchSkillUIList,
                                                                                               0LL);
              if ( !switchSkillUIList )
                goto LABEL_455;
              if ( v146 )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
                v147 = this->fields.fixNpcMessageText;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)LocalizationManager__Get(
                                                                                                 (System_String_o *)StringLiteral_10392/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/,
                                                                                                 0LL);
                if ( !v147 )
                  goto LABEL_455;
                UILabel__set_text(v147, (System_String_o *)switchSkillUIList, 0LL);
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
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                                             EquipSvtId,
                                                                                             0LL);
            if ( !this->fields.noneEquipSprite )
              goto LABEL_455;
            v150 = (int)switchSkillUIList;
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                             (UnityEngine_Component_o *)this->fields.noneEquipSprite,
                                                                                             0LL);
            if ( !switchSkillUIList )
              goto LABEL_455;
            if ( v150 < 1 )
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
              LOBYTE(v38) = 0;
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
              AtlasManager__SetEquipFace(equipSprite, v150, 0LL);
              v152 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(v152, 0LL, 0LL) )
                goto LABEL_383;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_EquipLimitCountMax(
                                                                                               item,
                                                                                               0LL);
              if ( !this->fields.equipLimitCountSprite )
                goto LABEL_455;
              v153 = (int)switchSkillUIList;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                                                                                               0LL);
              v154 = switchSkillUIList;
              if ( v153 < 1 )
              {
                v38 = 0LL;
                if ( !switchSkillUIList )
                  goto LABEL_455;
              }
              else
              {
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_EquipLimitCount(
                                                                                                 item,
                                                                                                 0LL);
                v38 = (int)switchSkillUIList >= v153;
                if ( !v154 )
                  goto LABEL_455;
              }
              switchSkillUIList = v154;
            }
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v38, 0LL);
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
              LODWORD(v183) = PartyOrganizationListViewItem__GetCorrectionIconId(item, 0LL);
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.correctionIconSprite;
              if ( !switchSkillUIList )
                goto LABEL_455;
              if ( (v183 & 0x80000000) != 0 )
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
                v157 = item->fields.eventUpValItemList;
                v158 = localPosition.fields.x;
                v159 = localPosition.fields.z;
                if ( v157 && *(_QWORD *)&v157->max_length )
                {
                  v160 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
                  if ( (BYTE3(WarBoardPartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
                    v160 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
                  }
                  p_CORRECTION_ICON_BONUS_Y = &v160->static_fields->CORRECTION_ICON_BONUS_Y;
                }
                else
                {
                  v162 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
                  if ( (BYTE3(WarBoardPartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
                    v162 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
                  }
                  p_CORRECTION_ICON_BONUS_Y = &v162->static_fields->CORRECTION_ICON_SINGLE_Y;
                }
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.correctionIconSprite;
                if ( !switchSkillUIList )
                  goto LABEL_455;
                v163 = *p_CORRECTION_ICON_BONUS_Y;
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_transform(
                                                                                                 (UnityEngine_Component_o *)switchSkillUIList,
                                                                                                 0LL);
                if ( !switchSkillUIList )
                  goto LABEL_455;
                v194.fields.y = (float)v163;
                v194.fields.x = v158;
                v194.fields.z = v159;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)switchSkillUIList, v194, 0LL);
                v164 = this->fields.correctionIconSprite;
                v165 = System_Int32__ToString((int32_t)&v183, 0LL);
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_String__Concat_44305532(
                                                                                                 (System_String_o *)StringLiteral_17708/*"correction_icon_"*/,
                                                                                                 v165,
                                                                                                 0LL);
                if ( !v164 )
                  goto LABEL_455;
                UISprite__set_spriteName(v164, (System_String_o *)switchSkillUIList, 0LL);
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
              v168 = this->fields.baseSprite;
              baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetFormationBase(v168, frameType, baseDefaultUIAtlas, 0, 0LL);
            }
            base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
            {
              v171 = this->fields.base2Sprite;
              base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetFormationFrame(v171, frameType, base2DefaultUIAtlas, 0, 0LL);
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
              if ( !v36 )
                goto LABEL_455;
              v174 = this->fields.eventUpValIcon;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v36,
                                                                                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
              if ( !v174 )
                goto LABEL_455;
              EventUpValIconComponent__Set(v174, (EventMargeItemUpValInfo_array *)switchSkillUIList, -1, -1, -1, 0LL);
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
              v176 = 0;
            }
            else
            {
              v177 = (UnityEngine_Object_o *)this->fields.bounusIcon;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(v177, 0LL, 0LL) )
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
              v176 = isEventUpVal;
            }
            ShiningIconComponent__Set_32979912((ShiningIconComponent_o *)switchSkillUIList, v176, 0LL);
            goto LABEL_448;
          }
          userServantEntity = item->fields.userServantEntity;
          if ( userServantEntity && UserServantEntity__IsEventJoin(userServantEntity, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.supportSprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            v141 = &StringLiteral_19341/*"icon_eventjoin_02"*/;
          }
          else
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.supportSprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            if ( !item->fields.followerInfo )
            {
              v142 = 0LL;
              goto LABEL_327;
            }
            v141 = &StringLiteral_19377/*"icon_support_02"*/;
          }
          v142 = (System_String_o *)*v141;
LABEL_327:
          UISprite__set_spriteName((UISprite_o *)switchSkillUIList, v142, 0LL);
          goto LABEL_328;
        }
        v119 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v119, 0LL, 0LL) )
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
          v120 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v120, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.servantClassIcon;
            if ( !switchSkillUIList )
              goto LABEL_455;
            ServantClassIconComponent__Clear((ServantClassIconComponent_o *)switchSkillUIList, 0LL);
          }
          v121 = (UnityEngine_Object_o *)this->fields.levelLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v121, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.levelLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          v122 = (UnityEngine_Object_o *)this->fields.raritySprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v122, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.raritySprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, 0LL, 0LL);
          }
          v123 = (UnityEngine_Object_o *)this->fields.attackLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v123, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.attackLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          v124 = (UnityEngine_Object_o *)this->fields.hpLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v124, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.hpLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          v125 = (UnityEngine_Object_o *)this->fields.costLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v125, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.costLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          v126 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v126, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.skillListTreasureDevice;
            if ( !switchSkillUIList )
              goto LABEL_455;
            SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)switchSkillUIList, 0LL);
          }
          v127 = (UnityEngine_Object_o *)this->fields.appendSkillList;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v127, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.appendSkillList;
            if ( !switchSkillUIList )
              goto LABEL_455;
            AppendSkillListComponent__Clear((AppendSkillListComponent_o *)switchSkillUIList, 0LL);
          }
          v128 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v128, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.svtCommandCardList;
            if ( !switchSkillUIList )
              goto LABEL_455;
            ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)switchSkillUIList, 0LL);
          }
          v129 = (UnityEngine_Object_o *)this->fields.supportSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v129, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.supportSprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, 0LL, 0LL);
          }
          v130 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v130, 0LL, 0LL) )
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
            v131 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v131, 0LL, 0LL) )
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
          v132 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v132, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.correctionIconSprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, 0LL, 0LL);
          }
          WarBoardPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(this, item, v133);
          v134 = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v134, 0LL, 0LL) )
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
          v135 = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v135, 0LL, 0LL) )
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
      v55 = v83;
    }
    LevelList_33989780 = LocalizationManager__GetLevelList_33989780(v55, 0LL);
    goto LABEL_59;
  }
  switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0LL);
  if ( !switchSkillUIList )
    goto LABEL_455;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
  v42 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
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
    v43 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v43, 0LL, 0LL) )
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
  __int64 v24; // x1
  __int64 v25; // x20
  __int64 v26; // x20
  void *MasterData_WarQuestSelectionMaster; // x0
  WarBoardIndividualityClassMaster_o *v28; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int v30; // w25
  __int64 v31; // x21
  System_Collections_Generic_List_int__o *v32; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x22
  WarBoardPartyOrganizationListViewItemDraw___c_c *v40; // x0
  struct WarBoardPartyOrganizationListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__40_0; // x23
  Il2CppObject *v43; // x24
  struct WarBoardPartyOrganizationListViewItemDraw___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_IEnumerable_T__o *v51; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v52; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Int32_array *v54; // x0
  __int64 v55; // x8
  __int64 v56; // x8
  WarBoardPartyOrganizationListViewItemDraw_c *v57; // x0
  System_String_o *RestrictionClassSpriteNameFormat; // x20
  Il2CppObject *v59; // x0
  System_String_o *v60; // x20
  __int64 v61; // x0
  int v62; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_418656F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_RestrictionEntity___ctor__, item);
    sub_B2C35C(&System_Action_RestrictionEntity__TypeInfo, v5);
    sub_B2C35C(&Method_BasicHelper_ForEach_RestrictionEntity___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Distinct_int___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v10);
    sub_B2C35C(&Method_System_Func_RestrictionEntity__bool___ctor__, v11);
    sub_B2C35C(&System_Func_RestrictionEntity__bool__TypeInfo, v12);
    sub_B2C35C(&int_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v17);
    sub_B2C35C(&Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__, v18);
    sub_B2C35C(
      &Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__,
      v19);
    sub_B2C35C(&WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo, v20);
    sub_B2C35C(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo, v21);
    sub_B2C35C(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v22);
    byte_418656F = 1;
  }
  restrictionClassSprite = (UnityEngine_Object_o *)this->fields.restrictionClassSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionClassSprite, 0LL, 0LL) )
  {
    v25 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v26 = **(_QWORD **)(v25 + 192);
    if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
      sub_AC505C(v26);
    MasterData_WarQuestSelectionMaster = **(void ***)(v26 + 184);
    if ( MasterData_WarQuestSelectionMaster )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v28 = (WarBoardIndividualityClassMaster_o *)MasterData_WarQuestSelectionMaster;
        MasterData_WarQuestSelectionMaster = WarBoardIndividualityClassMaster__GetAllClassServantEntity(
                                               (WarBoardIndividualityClassMaster_o *)MasterData_WarQuestSelectionMaster,
                                               0LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          if ( item )
          {
            questRestrictionInfo = item->fields.questRestrictionInfo;
            v30 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 11);
            if ( questRestrictionInfo && questRestrictionInfo->fields.restrictionEntityList )
            {
              v31 = sub_B2C42C(WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo);
              WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0___ctor(
                (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)v31,
                0LL);
              v32 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v32,
                (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v31 )
                goto LABEL_40;
              *(_QWORD *)(v31 + 16) = v32;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)(v31 + 16),
                (System_Int32_array **)v32,
                v33,
                v34,
                v35,
                v36,
                v37,
                v38);
              restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
              v40 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              if ( (BYTE3(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
                v40 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              }
              static_fields = v40->static_fields;
              _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__40_0;
              if ( !_9__40_0 )
              {
                if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v40);
                  static_fields = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
                }
                v43 = (Il2CppObject *)static_fields->__9;
                _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_RestrictionEntity__bool__TypeInfo);
                System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                  _9__40_0,
                  v43,
                  Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__,
                  (const MethodInfo_2711C04 *)Method_System_Func_RestrictionEntity__bool___ctor__);
                v44 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
                v44->__9__40_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__40_0;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)&v44->__9__40_0,
                  (System_Int32_array **)_9__40_0,
                  v45,
                  v46,
                  v47,
                  v48,
                  v49,
                  v50);
              }
              v51 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                     restrictionEntityList,
                                                                     (System_Func_TSource__bool__o *)_9__40_0,
                                                                     (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
              v52 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_RestrictionEntity__TypeInfo);
              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                v52,
                (Il2CppObject *)v31,
                Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__,
                (const MethodInfo_24BBAD8 *)Method_System_Action_RestrictionEntity___ctor__);
              BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                v51,
                (System_Action_T__o *)v52,
                (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_RestrictionEntity___);
              v53 = System_Linq_Enumerable__Distinct_int_(
                      *(System_Collections_Generic_IEnumerable_TSource__o **)(v31 + 16),
                      (const MethodInfo_1A8D698 *)Method_System_Linq_Enumerable_Distinct_int___);
              v54 = System_Linq_Enumerable__ToArray_int_(
                      v53,
                      (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
              MasterData_WarQuestSelectionMaster = WarBoardIndividualityClassMaster__GetServantClassEntities(
                                                     v28,
                                                     v54,
                                                     0LL);
              if ( MasterData_WarQuestSelectionMaster )
              {
                v55 = *((_QWORD *)MasterData_WarQuestSelectionMaster + 3);
                if ( v55 )
                {
                  if ( !(_DWORD)v55 )
                  {
                    v61 = sub_B2C460(MasterData_WarQuestSelectionMaster);
                    sub_B2C400(v61, 0LL);
                  }
                  v56 = *((_QWORD *)MasterData_WarQuestSelectionMaster + 4);
                  if ( !v56 )
                    goto LABEL_40;
                  v30 = *(_DWORD *)(v56 + 44);
                }
              }
            }
            v57 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            if ( (BYTE3(WarBoardPartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
              v57 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            }
            RestrictionClassSpriteNameFormat = v57->static_fields->RestrictionClassSpriteNameFormat;
            v62 = v30;
            v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
            MasterData_WarQuestSelectionMaster = System_String__Format(RestrictionClassSpriteNameFormat, v59, 0LL);
            if ( this->fields.restrictionClassSprite )
            {
              v60 = (System_String_o *)MasterData_WarQuestSelectionMaster;
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
                  UISprite__set_spriteName((UISprite_o *)MasterData_WarQuestSelectionMaster, v60, 0LL);
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
    sub_B2C434(MasterData_WarQuestSelectionMaster, v24);
  }
}


void __fastcall WarBoardPartyOrganizationListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_41866FC & 1) == 0 )
  {
    sub_B2C35C(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo, v1);
    byte_41866FC = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, 0LL);
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
  if ( (byte_41866FD & 1) == 0 )
  {
    this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)sub_B2C35C(
                                                                                  &Method_System_Collections_Generic_List_int__AddRange__,
                                                                                  x);
    byte_41866FD = 1;
  }
  if ( !x
    || (this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)v4->fields.indivisualities) == 0LL )
  {
    sub_B2C434(this, x);
  }
  System_Collections_Generic_List_int___AddRange(
    (System_Collections_Generic_List_int__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)x->fields.targetVals,
    (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
}