void WarBoardPartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  struct WarBoardPartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_596E367 & 1) == 0 )
  {
    sub_2213A60(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_18776/*"class2_{0}"*/);
    byte_596E367 = 1;
  }
  v7 = StringLiteral_18776/*"class2_{0}"*/;
  WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields->RestrictionClassSpriteNameFormat = (struct System_String_o *)StringLiteral_18776/*"class2_{0}"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  static_fields = WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_X_SIZE_MAX = 0xFFFFFFEC000003E8LL;
  static_fields->CORRECTION_ICON_BONUS_Y = 5;
}


void WarBoardPartyOrganizationListViewItemDraw___ctor(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardPartyOrganizationListViewItemDraw__Awake(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *baseSprite; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UISprite_o *v15; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct UISprite_o *v24; // x8
  struct UIAtlas_o *v25; // x1
  System_Collections_Generic_List_object__o *v26; // x20
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_596E362 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E362 = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    transform = (UnityEngine_Component_o *)this->fields.raritySprite;
    if ( !transform )
      goto LABEL_20;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_20;
    this->fields.baseRarityPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v15 = this->fields.baseSprite;
    if ( !v15 )
      goto LABEL_20;
    mAtlas = v15->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseDefaultUIAtlas,
      (int32_t)mAtlas,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v9);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(base2Sprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v24 = this->fields.base2Sprite;
    if ( v24 )
    {
      v25 = v24->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v25;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.base2DefaultUIAtlas,
        (int32_t)v25,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      goto LABEL_19;
    }
LABEL_20:
    sub_2213CDC(transform, v5);
  }
LABEL_19:
  v26 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v26;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.switchSkillUIList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


void WarBoardPartyOrganizationListViewItemDraw__ClearItem(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *noneEquipSprite; // x20

  if ( (byte_596E363 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E363 = 1;
  }
  this->fields.linkItem = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.linkItem, 0, v2, v3, v4, v5, v6, v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantNarrowTexture;
  if ( !gameObject )
    goto LABEL_14;
  UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.noneEquipSprite;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.equipSprite;
        if ( gameObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 0, 0);
            return;
          }
        }
      }
    }
LABEL_14:
    sub_2213CDC(gameObject, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPartyOrganizationListViewItemDraw__SetDispEquipOnly(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Component_o *baseSprite; // x0
  bool v6; // w21
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *eventUpValIcon; // x20
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *bounusIcon; // x20
  UnityEngine_Object_o *correctionIconSprite; // x20

  if ( (byte_596E366 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E366 = 1;
  }
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_46;
  v6 = !isDisp;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, !isDisp, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.base2Sprite;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantNarrowTexture;
  if ( !baseSprite )
    goto LABEL_46;
  UINarrowFigureTexture__SetActive((UINarrowFigureTexture_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.supportSprite;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.levelLabel;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.hpLabel;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.attackLabel;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.skillListTreasureDevice;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.svtCommandCardList;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
  eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.eventUpValIcon;
    if ( !baseSprite )
      goto LABEL_46;
    EventUpValIconComponent__Set((EventUpValIconComponent_o *)baseSprite, 0, -1, -1, -1, 0);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0, 0) )
    {
      baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
      if ( !baseSprite )
        goto LABEL_46;
      ShiningIconComponent__Set_48066308((ShiningIconComponent_o *)baseSprite, 0, 0);
    }
  }
  correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, v10);
  if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.correctionIconSprite;
    if ( baseSprite )
    {
      baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
      if ( baseSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0);
        return;
      }
    }
LABEL_46:
    sub_2213CDC(baseSprite, isDisp);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPartyOrganizationListViewItemDraw__SetItem(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  void *gameObject; // x0
  unsigned __int64 v13; // x1
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  __int64 size; // x2
  int v17; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  __int64 v19; // x2
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_Object_o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *servantFaceIcon; // x22
  int32_t v30; // w23
  __int64 v31; // x1
  __int64 v32; // x2
  SkillInfo_array *v33; // x22
  System_String_o *v34; // x24
  int32_t strengthStatus; // w26
  int32_t lv; // w27
  SkillInfo_array *v37; // x0
  System_String_o *LevelList_48251096; // x0
  UnityEngine_Object_o *servantClassIcon; // x22
  __int64 v40; // x2
  UnityEngine_Object_o *levelLabel; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  UILabel_o *v44; // x28
  UnityEngine_Object_o *raritySprite; // x22
  __int64 v46; // x1
  __int64 v47; // x2
  int32_t rarityId; // w28
  int32_t ExceedCount; // w29
  __int64 v50; // x1
  __int64 v51; // x2
  int32_t Level; // w23
  int32_t v53; // w22
  System_String_o *Icon_47404732; // x28
  __int64 v55; // x1
  __int64 v56; // x2
  Il2CppObject *Master_object; // x0
  int32_t v58; // w29
  ServantExceedMaster_o *v59; // x22
  int32_t RarityIcon; // w29
  Il2CppObject *v61; // x0
  int32_t v62; // w22
  ServantLvDetailMaster_o *v63; // x23
  UISprite_o *v64; // x22
  struct FollowerInfo_o *followerInfo; // x8
  int32_t imageSvtId; // w22
  UnityEngine_Object_o *v67; // x23
  ServantFaceIconComponent_o *v68; // x24
  __int64 v69; // x1
  __int64 v70; // x2
  SkillInfo_array *v71; // x22
  ServantLeaderInfo_o *v72; // x28
  SkillInfo_array *v73; // x22
  UnityEngine_Object_o *v74; // x22
  __int64 v75; // x1
  __int64 v76; // x2
  UnityEngine_Object_o *v77; // x22
  __int64 v78; // x2
  UnityEngine_Object_o *v79; // x22
  __int64 v80; // x2
  UnityEngine_Object_o *v81; // x22
  __int64 v82; // x2
  UnityEngine_Object_o *v83; // x22
  __int64 v84; // x2
  UnityEngine_Object_o *v85; // x22
  __int64 v86; // x2
  UnityEngine_Object_o *v87; // x22
  __int64 v88; // x2
  UnityEngine_Object_o *v89; // x22
  __int64 v90; // x2
  UnityEngine_Object_o *v91; // x22
  __int64 v92; // x2
  UnityEngine_Object_o *v93; // x22
  __int64 v94; // x2
  UnityEngine_Object_o *v95; // x22
  __int64 v96; // x2
  UnityEngine_Object_o *v97; // x22
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  UnityEngine_Object_o *v101; // x22
  UnityEngine_Object_o *v102; // x22
  const MethodInfo *v103; // x2
  __int64 v104; // x1
  __int64 v105; // x2
  UnityEngine_Object_o *v106; // x21
  __int64 v107; // x2
  UnityEngine_Object_o *v108; // x21
  __int64 v109; // x2
  bool isEventUpVal; // w23
  UISprite_o *v111; // x22
  float x; // s10
  float y; // s8
  float z; // s9
  bool v115; // cc
  UnityEngine_Object_o *attackLabel; // x22
  __int64 v117; // x1
  __int64 v118; // x2
  UILabel_o *v122; // x28
  UnityEngine_Object_o *hpLabel; // x22
  __int64 v124; // x1
  __int64 v125; // x2
  UILabel_o *v129; // x28
  UnityEngine_Object_o *costLabel; // x22
  __int64 v131; // x1
  __int64 v132; // x2
  int32_t EquipCost; // w0
  UILabel_o *v134; // x28
  int32_t v135; // w29
  int32_t MainCost; // w0
  Il2CppObject *v137; // x22
  Il2CppObject *v138; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  System_String_o *v140; // x2
  System_String_o *v141; // x3
  int32_t v142; // w4
  int32_t v143; // w5
  bool v144; // w6
  bool v145; // w7
  __int64 v146; // x8
  _QWORD *v147; // x9
  __int64 v148; // x10
  __int64 v149; // x8
  UnityEngine_Object_o *appendSkillList; // x22
  __int64 v151; // x1
  __int64 v152; // x2
  System_String_o *v153; // x2
  System_String_o *v154; // x3
  int32_t v155; // w4
  int32_t v156; // w5
  bool v157; // w6
  bool v158; // w7
  __int64 v159; // x8
  _QWORD *v160; // x9
  __int64 v161; // x10
  __int64 v162; // x8
  UnityEngine_Object_o *switchSkillInfo; // x22
  __int64 v164; // x1
  __int64 v165; // x2
  struct System_Collections_Generic_List_UIWidget__o *v166; // x0
  SwitchUIWidgetComponent_o *v167; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  __int64 v169; // x1
  __int64 v170; // x2
  System_Int32_array *v171; // x23
  ServantCommandCardListComponent_o *v172; // x23
  int32_t v173; // w22
  ServantCommandCardListComponent_o *v174; // x24
  int32_t BaseServantId; // w22
  UnityEngine_Object_o *supportSprite; // x22
  __int64 v177; // x2
  UserServantEntity_o *userServantEntity; // x0
  __int64 *v179; // x8
  System_String_o *v180; // x1
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  __int64 v182; // x2
  bool v183; // w1
  UnityEngine_Object_o *fixNpcMessageText; // x22
  __int64 v185; // x2
  __int64 v186; // x1
  __int64 v187; // x2
  UILabel_o *v188; // x23
  UnityEngine_Object_o *noneEquipSprite; // x22
  __int64 v190; // x2
  __int64 v191; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr10_16
  int v193; // w23
  __int64 v194; // x1
  __int64 v195; // x2
  UISprite_o *equipSprite; // x22
  __int64 v197; // x1
  __int64 v198; // x2
  UnityEngine_Object_o *v199; // x22
  int v200; // w24
  void *v201; // x23
  __int64 v202; // x1
  __int64 v203; // x2
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  UnityEngine_Object_o *correctionIconSprite; // x22
  __int64 v206; // x1
  __int64 v207; // x2
  int32_t CorrectionIconId; // w8
  __int64 v209; // x2
  struct EventMargeItemUpValInfo_array *v210; // x8
  WarBoardPartyOrganizationListViewItemDraw_c *v211; // x0
  int *p_CORRECTION_ICON_BONUS_Y; // x8
  WarBoardPartyOrganizationListViewItemDraw_c *v213; // x0
  int v214; // s10
  UISprite_o *v215; // x21
  System_String_o *v216; // x0
  UnityEngine_Object_o *restrictionClassSprite; // x21
  UnityEngine_Object_o *baseSprite; // x21
  __int64 v219; // x1
  __int64 v220; // x2
  UISprite_o *v221; // x22
  UIAtlas_o *baseDefaultUIAtlas; // x21
  UnityEngine_Object_o *base2Sprite; // x21
  __int64 v224; // x1
  __int64 v225; // x2
  UISprite_o *v226; // x22
  UIAtlas_o *base2DefaultUIAtlas; // x21
  UnityEngine_Object_o *eventUpValIcon; // x21
  __int64 v229; // x2
  EventUpValIconComponent_o *v230; // x21
  __int64 v231; // x1
  __int64 v232; // x2
  UnityEngine_Object_o *bounusIcon; // x20
  __int64 v234; // x2
  bool v235; // w1
  UnityEngine_Object_o *v236; // x20
  UnityEngine_Object_o *baseButton; // x20
  int32_t treasureDeviceNum; // [xsp+24h] [xbp-DCh]
  System_String_o *value; // [xsp+28h] [xbp-D8h]
  System_String_o *valuea; // [xsp+28h] [xbp-D8h]
  int32_t frameType; // [xsp+34h] [xbp-CCh]
  int32_t v242; // [xsp+38h] [xbp-C8h] BYREF
  int32_t v243; // [xsp+3Ch] [xbp-C4h] BYREF
  __int64 v244; // [xsp+40h] [xbp-C0h] BYREF
  SkillInfo_array *v245; // [xsp+48h] [xbp-B8h] BYREF
  TreasureDvcInfo_o *v246; // [xsp+50h] [xbp-B0h] BYREF
  SkillInfo_array *v247; // [xsp+58h] [xbp-A8h] BYREF
  int32_t narrowFigureSvtId[2]; // [xsp+60h] [xbp-A0h] BYREF
  SkillInfo_array *v249; // [xsp+68h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+70h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+78h] [xbp-88h] BYREF
  int32_t limitCountStage[2]; // [xsp+88h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v254; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v255; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v256; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v257; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596E364 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___91646752);
    sub_2213A60(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_21223/*"icon_support_02"*/);
    sub_2213A60(&StringLiteral_861/*"+"*/);
    sub_2213A60(&StringLiteral_19097/*"correction_icon_"*/);
    sub_2213A60(&StringLiteral_21171/*"icon_eventjoin_02"*/);
    sub_2213A60(&StringLiteral_10710/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/);
    sub_2213A60(&StringLiteral_422/*"#,0"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596E364 = 1;
  }
  *(_QWORD *)limitCountStage = 0;
  tdInfo = 0;
  skillInfoList = 0;
  *(_QWORD *)narrowFigureSvtId = 0;
  v249 = 0;
  v246 = 0;
  v247 = 0;
  v244 = 0;
  v245 = 0;
  this->fields.linkItem = item;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.linkItem,
    (int32_t)item,
    *(System_String_o **)&mode,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !item )
    goto LABEL_393;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)item->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_71841080(
      v11,
      eventUpValItemList,
      (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___91646752);
  }
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_393;
  size = (unsigned int)switchSkillUIList->fields._size;
  v17 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v17;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, size);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0, 0) )
  {
    gameObject = this->fields.skillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_393;
    (*(void (__fastcall **)(void *, _QWORD, double))(*(_QWORD *)gameObject + 440LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
      0.0);
  }
  appendSkillInfoUiWidget = (UnityEngine_Object_o *)this->fields.appendSkillInfoUiWidget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v19);
  if ( UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0, 0) )
  {
    gameObject = this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_393;
    (*(void (__fastcall **)(void *, _QWORD, double))(*(_QWORD *)gameObject + 440LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
      0.0);
  }
  if ( (mode | 4) != 4 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_393;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( item->fields.userServantEntity )
    {
      servantFaceIcon = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
      if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0, 0) )
      {
        gameObject = this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_393;
        ServantFaceIconComponent__Set(
          (ServantFaceIconComponent_o *)gameObject,
          item->fields.userServantEntity,
          0,
          item->fields.questRestrictionInfo,
          0,
          0,
          0,
          0,
          0,
          1,
          0);
      }
      PartyOrganizationListViewItem__TryGetNarrowFigureAssetData(item, &limitCountStage[1], limitCountStage, 0);
      gameObject = this->fields.servantNarrowTexture;
      if ( !gameObject )
        goto LABEL_393;
      UINarrowFigureTexture__SetCharacter(
        (UINarrowFigureTexture_o *)gameObject,
        limitCountStage[1],
        limitCountStage[0],
        0,
        0);
      frameType = item->fields.frameType;
      gameObject = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(item, 0);
      if ( !item->fields.userServantEntity )
        goto LABEL_393;
      v30 = (int)gameObject;
      UserServantEntity__getSkillInfo(
        item->fields.userServantEntity,
        &skillInfoList,
        -1,
        (int32_t)gameObject,
        1,
        0,
        -1,
        0);
      gameObject = item->fields.userServantEntity;
      if ( !gameObject )
        goto LABEL_393;
      UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)gameObject, &tdInfo, -1, v30, 0, 0);
      v33 = skillInfoList;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31, v32);
      gameObject = LocalizationManager__GetLevelList_48251096(v33, 0);
      if ( !tdInfo )
        goto LABEL_393;
      v34 = (System_String_o *)gameObject;
      gameObject = item->fields.userServantEntity;
      if ( !gameObject )
        goto LABEL_393;
      strengthStatus = tdInfo->fields.strengthStatus;
      lv = tdInfo->fields.lv;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      UserServantEntity__GetAppendPassiveSkillInfo_50215100((UserServantEntity_o *)gameObject, &v249, 0);
      v37 = v249;
    }
    else
    {
      followerInfo = item->fields.followerInfo;
      LevelList_48251096 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !followerInfo )
      {
        treasureDeviceNum = 0;
        strengthStatus = 0;
        lv = 0;
        frameType = 9;
        v34 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_50;
      }
      valuea = (System_String_o *)StringLiteral_1/*""*/;
      imageSvtId = followerInfo->fields.imageSvtId;
      v67 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
      if ( UnityEngine_Object__op_Inequality(v67, 0, 0) )
      {
        v68 = this->fields.servantFaceIcon;
        gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
        if ( !v68 )
          goto LABEL_393;
        ServantFaceIconComponent__Set_48053420(v68, (ServantLeaderInfo_o *)gameObject, 0, 0, 0, imageSvtId, 0, 0, 0);
      }
      PartyOrganizationListViewItem__TryGetNarrowFigureAssetData(item, &narrowFigureSvtId[1], narrowFigureSvtId, 0);
      gameObject = this->fields.servantNarrowTexture;
      if ( !gameObject )
        goto LABEL_393;
      UINarrowFigureTexture__SetCharacter(
        (UINarrowFigureTexture_o *)gameObject,
        narrowFigureSvtId[1],
        narrowFigureSvtId[0],
        0,
        0);
      frameType = item->fields.frameType;
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
      if ( !gameObject )
        goto LABEL_393;
      ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)gameObject, &v247, -1, 0);
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
      if ( !gameObject )
        goto LABEL_393;
      ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)gameObject, &v246, -1, 0);
      v71 = v247;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v69, v70);
      gameObject = LocalizationManager__GetLevelList_48251096(v71, 0);
      if ( !v246 )
        goto LABEL_393;
      lv = v246->fields.lv;
      v34 = (System_String_o *)gameObject;
      strengthStatus = v246->fields.strengthStatus;
      treasureDeviceNum = v246->fields.treasureDeviceNum;
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
      if ( !item->fields.followerInfo )
        goto LABEL_393;
      v72 = (ServantLeaderInfo_o *)gameObject;
      gameObject = (void *)FollowerInfo__get_IsNpc(item->fields.followerInfo, 0);
      if ( !v72 )
        goto LABEL_393;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_50601788(v72, &v245, (unsigned __int8)gameObject & 1, 0);
      v73 = v245;
      if ( !v245 )
      {
        LevelList_48251096 = valuea;
        goto LABEL_50;
      }
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
      v37 = v73;
    }
    LevelList_48251096 = LocalizationManager__GetLevelList_48251096(v37, 0);
LABEL_50:
    if ( item->fields.userServantEntity || item->fields.followerInfo )
    {
      value = LevelList_48251096;
      servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
      if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0, 0) )
      {
        gameObject = this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_393;
        ServantClassIconComponent__SetImage(
          (ServantClassIconComponent_o *)gameObject,
          item->fields.classId,
          item->fields.frameType,
          0,
          0,
          0,
          0);
      }
      levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v40);
      if ( UnityEngine_Object__op_Inequality(levelLabel, 0, 0) )
      {
        v44 = this->fields.levelLabel;
        HIDWORD(v244) = PartyOrganizationListViewItem__get_Level(item, 0);
        gameObject = System_Int32__ToString((int32_t)&v244 + 4, 0);
        if ( !v44 )
          goto LABEL_393;
        UILabel__set_text(v44, (System_String_o *)gameObject, 0);
      }
      raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42, v43);
      if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
      {
        rarityId = item->fields.rarityId;
        ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(item, 0);
        Level = PartyOrganizationListViewItem__get_Level(item, 0);
        v53 = item->fields.rarityId;
        if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v50, v51);
        Icon_47404732 = Rarity__getIcon_47404732(rarityId, ExceedCount, Level, v53, 0);
        if ( PartyOrganizationListViewItem__get_ExceedCount(item, 0) < 1 )
          goto LABEL_73;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v55, v56);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantExceedMaster___);
        v58 = item->fields.rarityId;
        v59 = (ServantExceedMaster_o *)Master_object;
        gameObject = (void *)PartyOrganizationListViewItem__get_ExceedCount(item, 0);
        if ( !v59 )
          goto LABEL_393;
        RarityIcon = ServantExceedMaster__GetRarityIcon(v59, v58, (int32_t)gameObject, 0, 0, 0);
        v61 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
        v62 = item->fields.rarityId;
        v63 = (ServantLvDetailMaster_o *)v61;
        gameObject = (void *)PartyOrganizationListViewItem__get_Level(item, 0);
        if ( !v63 )
          goto LABEL_393;
        if ( ServantLvDetailMaster__GetRarityIcon(v63, v62, (int32_t)gameObject, RarityIcon, 0, 0) >= 3 )
        {
          v111 = this->fields.raritySprite;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v55, v56);
          AtlasManager__SetEventSprite(v111, Icon_47404732, 0);
        }
        else
        {
LABEL_73:
          v64 = this->fields.raritySprite;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v55, v56);
          AtlasManager__SetCommon(v64, 0);
        }
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_393;
        UISprite__set_spriteName((UISprite_o *)gameObject, Icon_47404732, 0);
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_393;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)gameObject + 840LL))(
          gameObject,
          *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
        x = this->fields.baseRarityPosition.fields.x;
        y = this->fields.baseRarityPosition.fields.y;
        z = this->fields.baseRarityPosition.fields.z;
        v115 = PartyOrganizationListViewItem__get_ExceedCount(item, 0) < 1;
        gameObject = this->fields.raritySprite;
        if ( !v115 )
          x = x + 1.0;
        if ( !gameObject )
          goto LABEL_393;
        gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_393;
        v254.fields.x = x;
        v254.fields.y = y;
        v254.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v254, 0);
      }
      attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46, v47);
      if ( UnityEngine_Object__op_Inequality(attackLabel, 0, 0) )
      {
        gameObject = (void *)PartyOrganizationListViewItem__HasAtkBoost(item, 0);
        if ( !this->fields.attackLabel )
          goto LABEL_393;
        v256.fields.r = 1.0;
        v256.fields.g = 0.92157;
        v256.fields.b = 0.015686;
        v256.fields.a = 1.0;
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          v256.fields.g = 1.0;
          v256.fields.b = 1.0;
        }
        UIWidget__set_color((UIWidget_o *)this->fields.attackLabel, v256, 0);
        v122 = this->fields.attackLabel;
        HIDWORD(v244) = PartyOrganizationListViewItem__get_MargeAtk(item, 0);
        gameObject = System_Int32__ToString_77138656((int32_t)&v244 + 4, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
        if ( !v122 )
          goto LABEL_393;
        UILabel__set_text(v122, (System_String_o *)gameObject, 0);
      }
      hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v117, v118);
      if ( UnityEngine_Object__op_Inequality(hpLabel, 0, 0) )
      {
        gameObject = (void *)PartyOrganizationListViewItem__HasHpBoost(item, 0);
        if ( !this->fields.hpLabel )
          goto LABEL_393;
        v257.fields.r = 1.0;
        v257.fields.g = 0.92157;
        v257.fields.b = 0.015686;
        v257.fields.a = 1.0;
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          v257.fields.g = 1.0;
          v257.fields.b = 1.0;
        }
        UIWidget__set_color((UIWidget_o *)this->fields.hpLabel, v257, 0);
        v129 = this->fields.hpLabel;
        HIDWORD(v244) = PartyOrganizationListViewItem__get_MargeHp(item, 0);
        gameObject = System_Int32__ToString_77138656((int32_t)&v244 + 4, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
        if ( !v129 )
          goto LABEL_393;
        UILabel__set_text(v129, (System_String_o *)gameObject, 0);
      }
      costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v124, v125);
      if ( UnityEngine_Object__op_Inequality(costLabel, 0, 0) )
      {
        EquipCost = PartyOrganizationListViewItem__get_EquipCost(item, 0);
        v134 = this->fields.costLabel;
        v135 = EquipCost;
        MainCost = PartyOrganizationListViewItem__get_MainCost(item, 0);
        if ( v135 < 0 )
        {
          HIDWORD(v244) = MainCost;
          gameObject = System_Int32__ToString((int32_t)&v244 + 4, 0);
          if ( !v134 )
            goto LABEL_393;
        }
        else
        {
          v243 = MainCost;
          v137 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v243);
          v242 = v135;
          v138 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v242);
          gameObject = System_String__Concat_75694732(v137, (Il2CppObject *)StringLiteral_861/*"+"*/, v138, 0);
          if ( !v134 )
            goto LABEL_393;
        }
        UILabel__set_text(v134, (System_String_o *)gameObject, 0);
      }
      skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v131, v132);
      if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0, 0) )
      {
        gameObject = this->fields.skillListTreasureDevice;
        if ( !gameObject )
          goto LABEL_393;
        SkillListTreasureDeviceComponent__Set(
          (SkillListTreasureDeviceComponent_o *)gameObject,
          v34,
          lv,
          strengthStatus,
          treasureDeviceNum,
          0,
          0,
          0);
        if ( !System_String__IsNullOrEmpty(v34, 0) )
        {
          gameObject = this->fields.switchSkillUIList;
          if ( gameObject )
          {
            v146 = *((_QWORD *)gameObject + 2);
            v13 = (unsigned __int64)this->fields.skillInfoUiWidget;
            v147 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++*((_DWORD *)gameObject + 7);
            if ( !v146 )
              goto LABEL_393;
            v148 = *((int *)gameObject + 6);
            if ( (unsigned int)v148 >= *(_DWORD *)(v146 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)gameObject,
                (Il2CppObject *)v13,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
            }
            else
            {
              v149 = v146 + 8 * v148;
              *((_DWORD *)gameObject + 6) = v148 + 1;
              *(_QWORD *)(v149 + 32) = v13;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v149 + 32), v13, v140, v141, v142, v143, v144, v145);
            }
          }
        }
      }
      appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v140);
      if ( UnityEngine_Object__op_Inequality(appendSkillList, 0, 0) )
      {
        if ( System_String__IsNullOrEmpty(value, 0) )
        {
          gameObject = this->fields.appendSkillList;
          if ( !gameObject )
            goto LABEL_393;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_393;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        else
        {
          gameObject = this->fields.switchSkillUIList;
          if ( gameObject )
          {
            v159 = *((_QWORD *)gameObject + 2);
            v13 = (unsigned __int64)this->fields.appendSkillInfoUiWidget;
            v160 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++*((_DWORD *)gameObject + 7);
            if ( !v159 )
              goto LABEL_393;
            v161 = *((int *)gameObject + 6);
            if ( (unsigned int)v161 >= *(_DWORD *)(v159 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)gameObject,
                (Il2CppObject *)v13,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
            }
            else
            {
              v162 = v159 + 8 * v161;
              *((_DWORD *)gameObject + 6) = v161 + 1;
              *(_QWORD *)(v162 + 32) = v13;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v162 + 32), v13, v153, v154, v155, v156, v157, v158);
            }
          }
          gameObject = this->fields.appendSkillList;
          if ( !gameObject )
            goto LABEL_393;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_393;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          gameObject = this->fields.appendSkillList;
          if ( !gameObject )
            goto LABEL_393;
          AppendSkillListComponent__Set((AppendSkillListComponent_o *)gameObject, value, 0);
        }
      }
      switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v151, v152);
      if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0, 0) )
      {
        v166 = this->fields.switchSkillUIList;
        if ( v166 )
        {
          v167 = this->fields.switchSkillInfo;
          gameObject = System_Collections_Generic_List_object___ToArray(
                         (System_Collections_Generic_List_object__o *)v166,
                         (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
          if ( !v167 )
            goto LABEL_393;
          SwitchUIWidgetComponent__Set(v167, (UIWidget_array *)gameObject, 0, 0);
        }
      }
      svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v164, v165);
      if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0, 0) )
      {
        if ( item->fields.followerInfo )
        {
          if ( PartyOrganizationListViewItem__get_ServantLeader(item, 0) )
          {
            gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
            if ( !gameObject )
              goto LABEL_393;
            v171 = (System_Int32_array *)*((_QWORD *)gameObject + 27);
          }
          else
          {
            v171 = 0;
          }
          v174 = this->fields.svtCommandCardList;
          BaseServantId = PartyOrganizationListViewItem__get_BaseServantId(item, 0);
          gameObject = (void *)PartyOrganizationListViewItem__get_ServantId(item, 0);
          if ( v174 )
          {
            ServantCommandCardListComponent__Set_48038284(
              v174,
              BaseServantId,
              (int32_t)gameObject,
              v171,
              item->fields.commandCodeIdList,
              2,
              0,
              0);
            goto LABEL_262;
          }
LABEL_393:
          sub_2213CDC(gameObject, v13);
        }
        v172 = this->fields.svtCommandCardList;
        v173 = PartyOrganizationListViewItem__get_BaseServantId(item, 0);
        gameObject = (void *)PartyOrganizationListViewItem__get_ServantId(item, 0);
        if ( !v172 )
          goto LABEL_393;
        ServantCommandCardListComponent__Set_48038548(
          v172,
          v173,
          (int32_t)gameObject,
          item->fields.commandCodeIdList,
          2,
          0,
          0);
      }
LABEL_262:
      supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v169, v170);
      if ( !UnityEngine_Object__op_Inequality(supportSprite, 0, 0) )
      {
LABEL_276:
        fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v177);
        if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0, 0) )
        {
          gameObject = this->fields.fixNpcMessageFrameSprite;
          if ( item->fields.followerInfo )
          {
            if ( !gameObject )
              goto LABEL_393;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_393;
            v183 = 1;
          }
          else
          {
            if ( !gameObject )
              goto LABEL_393;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_393;
            v183 = 0;
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v183, 0);
        }
        fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v182);
        if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0, 0) )
        {
          gameObject = this->fields.fixNpcMessageText;
          if ( item->fields.followerInfo )
          {
            if ( !gameObject )
              goto LABEL_393;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_393;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            v188 = this->fields.fixNpcMessageText;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v186, v187);
            gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10710/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0);
            if ( !v188 )
              goto LABEL_393;
            UILabel__set_text(v188, (System_String_o *)gameObject, 0);
          }
          else
          {
            if ( !gameObject )
              goto LABEL_393;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_393;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          }
        }
        noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v185);
        if ( !UnityEngine_Object__op_Inequality(noneEquipSprite, 0, 0) )
          goto LABEL_332;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(item, 0);
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&EquipSvtId.fields.fakeValue,
            v191);
        v193 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(EquipSvtId, 0);
        gameObject = this->fields.noneEquipSprite;
        if ( v193 < 1 )
        {
          if ( !gameObject )
            goto LABEL_393;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_393;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          gameObject = this->fields.equipSprite;
          if ( !gameObject )
            goto LABEL_393;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_393;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v202, v203);
          if ( !UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
            goto LABEL_332;
          gameObject = this->fields.equipLimitCountSprite;
          if ( !gameObject )
            goto LABEL_393;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_393;
          LOBYTE(v13) = 0;
        }
        else
        {
          if ( !gameObject )
            goto LABEL_393;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_393;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          gameObject = this->fields.equipSprite;
          if ( !gameObject )
            goto LABEL_393;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_393;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          equipSprite = (UISprite_o *)this->fields.equipSprite;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v194, v195);
          AtlasManager__SetEquipFace(equipSprite, v193, 0, 0);
          v199 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v197, v198);
          if ( !UnityEngine_Object__op_Inequality(v199, 0, 0) )
            goto LABEL_332;
          gameObject = (void *)PartyOrganizationListViewItem__get_EquipLimitCountMax(item, 0);
          if ( !this->fields.equipLimitCountSprite )
            goto LABEL_393;
          v200 = (int)gameObject;
          gameObject = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                         0);
          v201 = gameObject;
          if ( v200 < 1 )
          {
            v13 = 0;
          }
          else
          {
            gameObject = (void *)PartyOrganizationListViewItem__get_EquipLimitCount(item, 0);
            v13 = (int)gameObject >= v200;
          }
          if ( !v201 )
            goto LABEL_393;
          gameObject = v201;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v13, 0);
LABEL_332:
        correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
        isEventUpVal = item->fields.isEventUpVal;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v190);
        if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0, 0) )
        {
          CorrectionIconId = PartyOrganizationListViewItem__GetCorrectionIconId(item, 0);
          gameObject = this->fields.correctionIconSprite;
          LODWORD(v244) = CorrectionIconId;
          if ( CorrectionIconId < 0 )
          {
            if ( !gameObject )
              goto LABEL_393;
            UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
          }
          else
          {
            if ( !gameObject )
              goto LABEL_393;
            gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_393;
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
            v210 = item->fields.eventUpValItemList;
            if ( v210 && v210->max_length )
            {
              v211 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              if ( !*(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v13, v209);
                v211 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              }
              p_CORRECTION_ICON_BONUS_Y = &v211->static_fields->CORRECTION_ICON_BONUS_Y;
            }
            else
            {
              v213 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              if ( !*(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v13, v209);
                v213 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              }
              p_CORRECTION_ICON_BONUS_Y = &v213->static_fields->CORRECTION_ICON_SINGLE_Y;
            }
            gameObject = this->fields.correctionIconSprite;
            if ( !gameObject )
              goto LABEL_393;
            v214 = *p_CORRECTION_ICON_BONUS_Y;
            gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_393;
            v255.fields.y = (float)v214;
            v255.fields.x = localPosition.fields.x;
            v255.fields.z = localPosition.fields.z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v255, 0);
            v215 = this->fields.correctionIconSprite;
            v216 = System_Int32__ToString((int32_t)&v244, 0);
            gameObject = System_String__Concat_75651716((System_String_o *)StringLiteral_19097/*"correction_icon_"*/, v216, 0);
            if ( !v215 )
              goto LABEL_393;
            UISprite__set_spriteName(v215, (System_String_o *)gameObject, 0);
            gameObject = this->fields.correctionIconSprite;
            if ( !gameObject )
              goto LABEL_393;
            (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)gameObject + 840LL))(
              gameObject,
              *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
          }
        }
        restrictionClassSprite = (UnityEngine_Object_o *)this->fields.restrictionClassSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v206, v207);
        if ( UnityEngine_Object__op_Inequality(restrictionClassSprite, 0, 0) )
        {
          gameObject = this->fields.restrictionClassSprite;
          if ( !gameObject )
            goto LABEL_393;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_393;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
LABEL_359:
        baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v109);
        if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
        {
          v221 = this->fields.baseSprite;
          baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v219, v220);
          AtlasManager__SetFormationBase(v221, frameType, baseDefaultUIAtlas, 0, 0, 0, 0);
        }
        base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v219, v220);
        if ( UnityEngine_Object__op_Inequality(base2Sprite, 0, 0) )
        {
          v226 = this->fields.base2Sprite;
          base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v224, v225);
          AtlasManager__SetFormationFrame(v226, frameType, base2DefaultUIAtlas, 0, 0, 0);
        }
        eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v224, v225);
        gameObject = (void *)UnityEngine_Object__op_Inequality(eventUpValIcon, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_393;
          v230 = this->fields.eventUpValIcon;
          gameObject = System_Collections_Generic_List_object___ToArray(
                         v11,
                         (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
          if ( !v230 )
            goto LABEL_393;
          EventUpValIconComponent__Set(v230, (EventMargeItemUpValInfo_array *)gameObject, -1, -1, -1, 0);
          bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v231, v232);
          if ( !UnityEngine_Object__op_Inequality(bounusIcon, 0, 0) )
            goto LABEL_387;
          gameObject = this->fields.bounusIcon;
          if ( !gameObject )
            goto LABEL_393;
          v235 = 0;
        }
        else
        {
          v236 = (UnityEngine_Object_o *)this->fields.bounusIcon;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v229);
          if ( !UnityEngine_Object__op_Inequality(v236, 0, 0) )
          {
LABEL_387:
            baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v234);
            if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
            {
              gameObject = this->fields.baseButton;
              if ( !gameObject )
                goto LABEL_393;
              (*(void (__fastcall **)(void *, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
                gameObject,
                0,
                1,
                *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
            }
            return;
          }
          gameObject = this->fields.bounusIcon;
          if ( !gameObject )
            goto LABEL_393;
          v235 = isEventUpVal;
        }
        ShiningIconComponent__Set_48066308((ShiningIconComponent_o *)gameObject, v235, 0);
        goto LABEL_387;
      }
      userServantEntity = item->fields.userServantEntity;
      if ( userServantEntity && UserServantEntity__IsEventJoin(userServantEntity, 0) )
      {
        gameObject = this->fields.supportSprite;
        if ( !gameObject )
          goto LABEL_393;
        v179 = &StringLiteral_21171/*"icon_eventjoin_02"*/;
      }
      else
      {
        gameObject = this->fields.supportSprite;
        if ( !item->fields.followerInfo )
        {
          if ( !gameObject )
            goto LABEL_393;
          v180 = 0;
          goto LABEL_275;
        }
        if ( !gameObject )
          goto LABEL_393;
        v179 = &StringLiteral_21223/*"icon_support_02"*/;
      }
      v180 = (System_String_o *)*v179;
LABEL_275:
      UISprite__set_spriteName((UISprite_o *)gameObject, v180, 0);
      goto LABEL_276;
    }
    v74 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
    if ( UnityEngine_Object__op_Inequality(v74, 0, 0) )
    {
      gameObject = this->fields.servantFaceIcon;
      if ( !gameObject )
        goto LABEL_393;
      ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)gameObject, 0);
    }
    gameObject = this->fields.servantNarrowTexture;
    if ( gameObject )
    {
      UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0);
      v77 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v75, v76);
      if ( UnityEngine_Object__op_Inequality(v77, 0, 0) )
      {
        gameObject = this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_393;
        ServantClassIconComponent__Clear((ServantClassIconComponent_o *)gameObject, 0);
      }
      v79 = (UnityEngine_Object_o *)this->fields.levelLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v78);
      if ( UnityEngine_Object__op_Inequality(v79, 0, 0) )
      {
        gameObject = this->fields.levelLabel;
        if ( !gameObject )
          goto LABEL_393;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
      v81 = (UnityEngine_Object_o *)this->fields.raritySprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v80);
      if ( UnityEngine_Object__op_Inequality(v81, 0, 0) )
      {
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_393;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
      }
      v83 = (UnityEngine_Object_o *)this->fields.attackLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v82);
      if ( UnityEngine_Object__op_Inequality(v83, 0, 0) )
      {
        gameObject = this->fields.attackLabel;
        if ( !gameObject )
          goto LABEL_393;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
      v85 = (UnityEngine_Object_o *)this->fields.hpLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v84);
      if ( UnityEngine_Object__op_Inequality(v85, 0, 0) )
      {
        gameObject = this->fields.hpLabel;
        if ( !gameObject )
          goto LABEL_393;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
      v87 = (UnityEngine_Object_o *)this->fields.costLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v86);
      if ( UnityEngine_Object__op_Inequality(v87, 0, 0) )
      {
        gameObject = this->fields.costLabel;
        if ( !gameObject )
          goto LABEL_393;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
      v89 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v88);
      if ( UnityEngine_Object__op_Inequality(v89, 0, 0) )
      {
        gameObject = this->fields.skillListTreasureDevice;
        if ( !gameObject )
          goto LABEL_393;
        SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)gameObject, 0);
      }
      v91 = (UnityEngine_Object_o *)this->fields.appendSkillList;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v90);
      if ( UnityEngine_Object__op_Inequality(v91, 0, 0) )
      {
        gameObject = this->fields.appendSkillList;
        if ( !gameObject )
          goto LABEL_393;
        AppendSkillListComponent__Clear((AppendSkillListComponent_o *)gameObject, 0);
      }
      v93 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v92);
      if ( UnityEngine_Object__op_Inequality(v93, 0, 0) )
      {
        gameObject = this->fields.svtCommandCardList;
        if ( !gameObject )
          goto LABEL_393;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0);
      }
      v95 = (UnityEngine_Object_o *)this->fields.supportSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v94);
      if ( UnityEngine_Object__op_Inequality(v95, 0, 0) )
      {
        gameObject = this->fields.supportSprite;
        if ( !gameObject )
          goto LABEL_393;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
      }
      v97 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v96);
      if ( UnityEngine_Object__op_Inequality(v97, 0, 0) )
      {
        gameObject = this->fields.noneEquipSprite;
        if ( !gameObject )
          goto LABEL_393;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_393;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        gameObject = this->fields.equipSprite;
        if ( !gameObject )
          goto LABEL_393;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_393;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        v101 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v99, v100);
        if ( UnityEngine_Object__op_Inequality(v101, 0, 0) )
        {
          gameObject = this->fields.equipLimitCountSprite;
          if ( !gameObject )
            goto LABEL_393;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_393;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
      }
      v102 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v98);
      if ( UnityEngine_Object__op_Inequality(v102, 0, 0) )
      {
        gameObject = this->fields.correctionIconSprite;
        if ( !gameObject )
          goto LABEL_393;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
      }
      WarBoardPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(this, item, v103);
      v106 = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v104, v105);
      if ( UnityEngine_Object__op_Inequality(v106, 0, 0) )
      {
        gameObject = this->fields.fixNpcMessageFrameSprite;
        if ( !gameObject )
          goto LABEL_393;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_393;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      }
      v108 = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v107);
      if ( UnityEngine_Object__op_Inequality(v108, 0, 0) )
      {
        gameObject = this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_393;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_393;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        gameObject = this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_393;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
      isEventUpVal = 0;
      goto LABEL_359;
    }
    goto LABEL_393;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_393;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  v23 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
  {
    gameObject = this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_393;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_393;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_393;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_393;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    v26 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
    if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
    {
      gameObject = this->fields.equipLimitCountSprite;
      if ( gameObject )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          return;
        }
      }
      goto LABEL_393;
    }
  }
}


void WarBoardPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionClassSprite; // x20
  __int64 v6; // x1
  long double v7; // q0
  __int64 v8; // x0
  __int64 v9; // x0
  DataManager_o *MasterData_object; // x0
  WarBoardIndividualityClassMaster_o *v11; // x20
  __int64 v12; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int datalist_high; // w25
  __int64 v15; // x21
  System_Collections_Generic_List_int__o *v16; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x22
  WarBoardPartyOrganizationListViewItemDraw___c_c *v26; // x0
  struct WarBoardPartyOrganizationListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__40_0; // x23
  Il2CppObject *v29; // x24
  struct WarBoardPartyOrganizationListViewItemDraw___c_StaticFields *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_Collections_Generic_IEnumerable_T__o *v37; // x22
  System_Action_object__o *v38; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Int32_array *v40; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  __int64 v42; // x8
  WarBoardPartyOrganizationListViewItemDraw_c *v43; // x0
  System_String_o **p_RestrictionClassSpriteNameFormat; // x8
  System_String_o *v45; // x20
  Il2CppObject *v46; // x0
  System_String_o *v47; // x20
  int v48; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596E365 & 1) == 0 )
  {
    sub_2213A60(&System_Action_RestrictionEntity__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_RestrictionEntity___);
    sub_2213A60(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_2213A60(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__);
    sub_2213A60(&Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__);
    sub_2213A60(&WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo);
    sub_2213A60(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
    sub_2213A60(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
    byte_596E365 = 1;
  }
  restrictionClassSprite = (UnityEngine_Object_o *)this->fields.restrictionClassSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
  if ( UnityEngine_Object__op_Inequality(restrictionClassSprite, 0, 0) )
  {
    v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
      v8 = sub_224B908(v7);
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
    if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
      v9 = sub_224B908(v7);
    MasterData_object = **(DataManager_o ***)(v9 + 184);
    if ( MasterData_object )
    {
      MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                             MasterData_object,
                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
      if ( MasterData_object )
      {
        v11 = (WarBoardIndividualityClassMaster_o *)MasterData_object;
        MasterData_object = (DataManager_o *)WarBoardIndividualityClassMaster__GetAllClassServantEntity(
                                               (WarBoardIndividualityClassMaster_o *)MasterData_object,
                                               0);
        if ( MasterData_object )
        {
          if ( item )
          {
            questRestrictionInfo = item->fields.questRestrictionInfo;
            datalist_high = HIDWORD(MasterData_object->fields.datalist);
            if ( questRestrictionInfo && questRestrictionInfo->fields.restrictionEntityList )
            {
              v15 = sub_2213CCC(WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v15, 0);
              v16 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v16,
                (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v15 )
                goto LABEL_36;
              *(_QWORD *)(v15 + 16) = v16;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 16), (int32_t)v16, v17, v18, v19, v20, v21, v22);
              restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
              v26 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              if ( !*(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo, v23, v24);
                v26 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              }
              static_fields = v26->static_fields;
              _9__40_0 = (System_Func_object__bool__o *)static_fields->__9__40_0;
              if ( !_9__40_0 )
              {
                if ( !*(&v26->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(v26, v23, v24);
                  static_fields = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
                }
                v29 = (Il2CppObject *)static_fields->__9;
                _9__40_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RestrictionEntity__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  _9__40_0,
                  v29,
                  Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__,
                  0);
                v30 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
                v30->__9__40_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__40_0;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&v30->__9__40_0,
                  (int32_t)_9__40_0,
                  v31,
                  v32,
                  v33,
                  v34,
                  v35,
                  v36);
              }
              v37 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                                     restrictionEntityList,
                                                                     (System_Func_TSource__bool__o *)_9__40_0,
                                                                     (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
              v38 = (System_Action_object__o *)sub_2213CCC(System_Action_RestrictionEntity__TypeInfo);
              System_Action_object____ctor(
                v38,
                (Il2CppObject *)v15,
                Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__,
                0);
              BasicHelper__ForEach_object_(
                v37,
                (System_Action_T__o *)v38,
                (const MethodInfo_381282C *)Method_BasicHelper_ForEach_RestrictionEntity___);
              v39 = System_Linq_Enumerable__Distinct_int_(
                      *(System_Collections_Generic_IEnumerable_TSource__o **)(v15 + 16),
                      (const MethodInfo_387C5EC *)Method_System_Linq_Enumerable_Distinct_int___);
              v40 = System_Linq_Enumerable__ToArray_int_(
                      v39,
                      (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
              MasterData_object = (DataManager_o *)WarBoardIndividualityClassMaster__GetServantClassEntities(
                                                     v11,
                                                     v40,
                                                     0);
              if ( MasterData_object )
              {
                m_CancellationTokenSource = MasterData_object->fields.m_CancellationTokenSource;
                if ( m_CancellationTokenSource )
                {
                  if ( !(_DWORD)m_CancellationTokenSource )
                    sub_2213CE4(MasterData_object);
                  v42 = *(_QWORD *)&MasterData_object->fields._DispLog;
                  if ( !v42 )
                    goto LABEL_36;
                  datalist_high = *(_DWORD *)(v42 + 44);
                }
              }
            }
            v43 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            if ( !*(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v6, v12);
              v43 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            }
            p_RestrictionClassSpriteNameFormat = &v43->static_fields->RestrictionClassSpriteNameFormat;
            v48 = datalist_high;
            v45 = *p_RestrictionClassSpriteNameFormat;
            v46 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v48);
            MasterData_object = (DataManager_o *)System_String__Format(v45, v46, 0);
            if ( this->fields.restrictionClassSprite )
            {
              v47 = (System_String_o *)MasterData_object;
              MasterData_object = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this->fields.restrictionClassSprite,
                                                     0);
              if ( MasterData_object )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0);
                MasterData_object = (DataManager_o *)this->fields.restrictionClassSprite;
                if ( MasterData_object )
                {
                  UISprite__set_spriteName((UISprite_o *)MasterData_object, v47, 0);
                  MasterData_object = (DataManager_o *)this->fields.restrictionClassSprite;
                  if ( MasterData_object )
                  {
                    ((void (__fastcall *)(DataManager_o *, void *))MasterData_object->klass[2]._1.parent)(
                      MasterData_object,
                      MasterData_object->klass[2]._1.generic_class);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_36:
    sub_2213CDC(MasterData_object, v6);
  }
}


void WarBoardPartyOrganizationListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596E368 & 1) == 0 )
  {
    sub_2213A60(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
    byte_596E368 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct WarBoardPartyOrganizationListViewItemDraw___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardPartyOrganizationListViewItemDraw___c___ctor(
        WarBoardPartyOrganizationListViewItemDraw___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardPartyOrganizationListViewItemDraw___c___SetRestrictionClassSprite_b__40_0(
        WarBoardPartyOrganizationListViewItemDraw___c_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.type == 1;
}


void WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0___ctor(
        WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0___SetRestrictionClassSprite_b__1(
        WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *v4; // x20

  v4 = this;
  if ( (byte_596E369 & 1) == 0 )
  {
    this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    byte_596E369 = 1;
  }
  if ( !x
    || (this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)v4->fields.indivisualities) == 0 )
  {
    sub_2213CDC(this, x);
  }
  System_Collections_Generic_List_int___AddRange(
    (System_Collections_Generic_List_int__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)x->fields.targetVals,
    (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
}