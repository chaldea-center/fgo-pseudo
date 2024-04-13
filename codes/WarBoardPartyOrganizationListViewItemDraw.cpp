void __fastcall WarBoardPartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  WarBoardPartyOrganizationListViewItemDraw_c *v13; // x8

  if ( (byte_42E75F7 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_17665/*"class2_{0}"*/, v8, v9, v10);
    byte_42E75F7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_17665/*"class2_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17665/*"class2_{0}"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
  WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields->MESSAGE_X_SIZE_MAX = 1000;
  v13->static_fields->CORRECTION_ICON_SINGLE_Y = -20;
  v13->static_fields->CORRECTION_ICON_BONUS_Y = 5;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v12; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *baseSprite; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct UISprite_o *v21; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UISprite_o *v30; // x8
  struct UIAtlas_o *v31; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_42E75F2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_UIWidget__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E75F2 = 1;
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
    v21 = this->fields.baseSprite;
    if ( !v21 )
      goto LABEL_23;
    mAtlas = v21->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.baseDefaultUIAtlas,
      (System_Int32_array **)mAtlas,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
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
    v30 = this->fields.base2Sprite;
    if ( v30 )
    {
      v31 = v30->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v31;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.base2DefaultUIAtlas,
        (System_Int32_array **)v31,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      goto LABEL_22;
    }
LABEL_23:
    sub_B5D69C(transform, v12);
  }
LABEL_22:
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
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

  if ( (byte_42E75F3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E75F3 = 1;
  }
  this->fields.linkItem = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B5D69C(gameObject, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationListViewItemDraw__SetDispEquipOnly(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Component_o *baseSprite; // x0
  bool v7; // w21
  UnityEngine_Object_o *eventUpValIcon; // x20
  UnityEngine_Object_o *bounusIcon; // x20
  UnityEngine_Object_o *correctionIconSprite; // x20

  if ( (byte_42E75F6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isDisp, (_DWORD)method, v3);
    byte_42E75F6 = 1;
  }
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  v7 = !isDisp;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, !isDisp, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.base2Sprite;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantNarrowTexture;
  if ( !baseSprite )
    goto LABEL_49;
  UINarrowFigureTexture__SetActive((UINarrowFigureTexture_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.supportSprite;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.levelLabel;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.hpLabel;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.attackLabel;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.skillListTreasureDevice;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.svtCommandCardList;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
  if ( !baseSprite )
    goto LABEL_49;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
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
      ShiningIconComponent__Set_33897340((ShiningIconComponent_o *)baseSprite, 0, 0LL);
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
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v7, 0LL);
        return;
      }
    }
LABEL_49:
    sub_B5D69C(baseSprite, isDisp);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v86; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *switchSkillUIList; // x0
  _BOOL8 v88; // x1
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  UnityEngine_Object_o *v92; // x20
  UnityEngine_Object_o *v93; // x20
  UnityEngine_Object_o *servantFaceIcon; // x22
  int32_t CardImageLimitCount; // w22
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v100; // w22
  int32_t frameType; // w27
  int32_t v102; // w22
  SkillInfo_array *v103; // x22
  System_String_o *v104; // x24
  SkillInfo_array *v105; // x0
  System_String_o *LevelList_34107032; // x23
  UnityEngine_Object_o *servantClassIcon; // x22
  UnityEngine_Object_o *levelLabel; // x22
  UILabel_o *v109; // x22
  UnityEngine_Object_o *raritySprite; // x22
  int32_t rarityId; // w22
  int32_t ExceedCount; // w28
  int32_t Level; // w25
  System_String_o *Icon_22319524; // x28
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t v116; // w22
  ServantExceedMaster_o *v117; // x25
  int32_t RarityIcon; // w22
  WarQuestSelectionMaster_o *v119; // x0
  int32_t v120; // w25
  ServantLvDetailMaster_o *v121; // x26
  int32_t v122; // w8
  struct FollowerInfo_o *followerInfo; // x8
  int imageSvtId; // w22
  UnityEngine_Object_o *v125; // x24
  ServantFaceIconComponent_o *v126; // x24
  int32_t v127; // w24
  ServantLimitImageMaster_o *v128; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // kr10_16
  int32_t v130; // w24
  SkillInfo_array *v131; // x22
  ServantLeaderInfo_o *v132; // x22
  SkillInfo_array *v133; // x22
  UISprite_o *v134; // x22
  float y; // s8
  float x; // s10
  float z; // s9
  int32_t v138; // w8
  UnityEngine_Object_o *attackLabel; // x22
  int v140; // s0
  UILabel_o *v144; // x22
  UnityEngine_Object_o *hpLabel; // x22
  int v146; // s0
  UILabel_o *v150; // x22
  UnityEngine_Object_o *costLabel; // x22
  int32_t EquipCost; // w0
  UILabel_o *v153; // x28
  int v154; // w22
  int32_t MainCost; // w0
  Il2CppObject *v156; // x25
  Il2CppObject *v157; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  struct System_Collections_Generic_List_UIWidget__o *v159; // x0
  UnityEngine_Object_o *appendSkillList; // x22
  struct System_Collections_Generic_List_UIWidget__o *v161; // x0
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v163; // x0
  SwitchUIWidgetComponent_o *v164; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  System_Int32_array *monitor; // x23
  ServantCommandCardListComponent_o *v167; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v168; // kr20_16
  UnityEngine_Object_o *v169; // x22
  UnityEngine_Object_o *v170; // x22
  UnityEngine_Object_o *v171; // x22
  UnityEngine_Object_o *v172; // x22
  UnityEngine_Object_o *v173; // x22
  UnityEngine_Object_o *v174; // x22
  UnityEngine_Object_o *v175; // x22
  UnityEngine_Object_o *v176; // x22
  UnityEngine_Object_o *v177; // x22
  UnityEngine_Object_o *v178; // x22
  UnityEngine_Object_o *v179; // x22
  UnityEngine_Object_o *v180; // x22
  UnityEngine_Object_o *v181; // x22
  UnityEngine_Object_o *v182; // x22
  const MethodInfo *v183; // x2
  UnityEngine_Object_o *v184; // x21
  UnityEngine_Object_o *v185; // x21
  bool isEventUpVal; // w23
  ServantCommandCardListComponent_o *v187; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // kr30_16
  UnityEngine_Object_o *supportSprite; // x22
  UserServantEntity_o *userServantEntity; // x0
  __int64 *v191; // x8
  System_String_o *v192; // x1
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  struct FollowerInfo_o *v194; // x22
  UnityEngine_Object_o *fixNpcMessageText; // x22
  struct FollowerInfo_o *v196; // x22
  UILabel_o *v197; // x22
  UnityEngine_Object_o *noneEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr40_16
  int32_t v200; // w23
  UISprite_o *equipSprite; // x22
  UnityEngine_Object_o *v202; // x22
  int v203; // w23
  System_Collections_Generic_List_XWeaponTrail_Element__o *v204; // x22
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  UnityEngine_Object_o *correctionIconSprite; // x22
  struct EventMargeItemUpValInfo_array *v207; // x8
  float v208; // s8
  float v209; // s9
  WarBoardPartyOrganizationListViewItemDraw_c *v210; // x0
  int *p_CORRECTION_ICON_BONUS_Y; // x8
  WarBoardPartyOrganizationListViewItemDraw_c *v212; // x0
  int v213; // s10
  UISprite_o *v214; // x21
  System_String_o *v215; // x0
  UnityEngine_Object_o *restrictionClassSprite; // x21
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v218; // x22
  UIAtlas_o *baseDefaultUIAtlas; // x21
  UnityEngine_Object_o *base2Sprite; // x21
  UISprite_o *v221; // x22
  UIAtlas_o *base2DefaultUIAtlas; // x21
  UnityEngine_Object_o *eventUpValIcon; // x21
  EventUpValIconComponent_o *v224; // x21
  UnityEngine_Object_o *bounusIcon; // x20
  bool v226; // w1
  UnityEngine_Object_o *v227; // x20
  UnityEngine_Object_o *baseButton; // x20
  int32_t lv; // [xsp+Ch] [xbp-B4h]
  __int64 tdStrengthStatus; // [xsp+10h] [xbp-B0h]
  int v231; // [xsp+18h] [xbp-A8h] BYREF
  int32_t v232; // [xsp+1Ch] [xbp-A4h] BYREF
  __int64 v233; // [xsp+20h] [xbp-A0h] BYREF
  SkillInfo_array *v234; // [xsp+28h] [xbp-98h] BYREF
  TreasureDvcInfo_o *v235; // [xsp+30h] [xbp-90h] BYREF
  SkillInfo_array *v236; // [xsp+38h] [xbp-88h] BYREF
  SkillInfo_array *v237; // [xsp+40h] [xbp-80h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v240; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v241; // 0:x0.16
  UnityEngine_Vector3_o v242; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v244; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E75F4 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantExceedMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v17, v18, v19);
    sub_B5D5C4(&DataManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&int_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Clear__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___68734992, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v41, v42, v43);
    sub_B5D5C4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&Rarity_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v59, v60, v61);
    sub_B5D5C4(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_19621/*"icon_support_02"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_699/*"+"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_17927/*"correction_icon_"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_19585/*"icon_eventjoin_02"*/, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_10500/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_346/*"#,0"*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_1/*""*/, v83, v84, v85);
    byte_42E75F4 = 1;
  }
  skillInfoList = 0LL;
  v237 = 0LL;
  tdInfo = 0LL;
  v235 = 0LL;
  v236 = 0LL;
  v233 = 0LL;
  v234 = 0LL;
  this->fields.linkItem = item;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.linkItem,
    (System_Int32_array **)item,
    *(System_String_array ***)&mode,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v86 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v86,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !item )
    goto LABEL_455;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)item->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v86 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v86,
      eventUpValItemList,
      (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___68734992);
  }
  switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_455;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    switchSkillUIList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
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
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !switchSkillUIList )
        goto LABEL_455;
      MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)switchSkillUIList,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
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
      v100 = ServantImageLimitSealAfter;
      v240 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                       v240,
                                                                                       0LL);
      if ( !servantNarrowTexture )
        goto LABEL_455;
      UINarrowFigureTexture__SetCharacter(servantNarrowTexture, (int32_t)switchSkillUIList, v100, 0LL, 0LL);
      frameType = item->fields.frameType;
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__GetDispImageLimitCount(
                                                                                       item,
                                                                                       0LL);
      if ( !item->fields.userServantEntity )
        goto LABEL_455;
      v102 = (int)switchSkillUIList;
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
      UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)switchSkillUIList, &tdInfo, -1, v102, 0, 0LL);
      v103 = skillInfoList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)LocalizationManager__GetLevelList_34107032(
                                                                                       v103,
                                                                                       0LL);
      if ( !tdInfo )
        goto LABEL_455;
      v104 = (System_String_o *)switchSkillUIList;
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)item->fields.userServantEntity;
      if ( !switchSkillUIList )
        goto LABEL_455;
      HIDWORD(tdStrengthStatus) = tdInfo->fields.strengthStatus;
      lv = tdInfo->fields.lv;
      LODWORD(tdStrengthStatus) = tdInfo->fields.treasureDeviceNum;
      UserServantEntity__GetAppendPassiveSkillInfo_21869468((UserServantEntity_o *)switchSkillUIList, &v237, 0LL);
      v105 = v237;
    }
    else
    {
      followerInfo = item->fields.followerInfo;
      LevelList_34107032 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !followerInfo )
      {
        tdStrengthStatus = 0LL;
        lv = 0;
        frameType = 9;
        v104 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_59;
      }
      imageSvtId = followerInfo->fields.imageSvtId;
      v125 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v125, 0LL, 0LL) )
      {
        v126 = this->fields.servantFaceIcon;
        switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                                         item,
                                                                                         0LL);
        if ( !v126 )
          goto LABEL_455;
        ServantFaceIconComponent__Set_30776084(
          v126,
          (ServantLeaderInfo_o *)switchSkillUIList,
          0LL,
          0LL,
          0,
          imageSvtId,
          0LL);
      }
      v127 = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0LL);
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !switchSkillUIList )
        goto LABEL_455;
      v128 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)switchSkillUIList,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v129 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                       v129,
                                                                                       0LL);
      if ( !v128 )
        goto LABEL_455;
      v130 = ServantLimitImageMaster__GetServantImageLimitSealAfter(v128, (int32_t)switchSkillUIList, v127, 0LL);
      if ( imageSvtId <= 0 )
      {
        v241 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
        imageSvtId = BasicHelper__DecryptValue_21084824(v241, 0LL);
      }
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.servantNarrowTexture;
      if ( !switchSkillUIList )
        goto LABEL_455;
      UINarrowFigureTexture__SetCharacter((UINarrowFigureTexture_o *)switchSkillUIList, imageSvtId, v130, 0LL, 0LL);
      frameType = item->fields.frameType;
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                                       item,
                                                                                       0LL);
      if ( !switchSkillUIList )
        goto LABEL_455;
      ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)switchSkillUIList, &v236, 0LL);
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                                       item,
                                                                                       0LL);
      if ( !switchSkillUIList )
        goto LABEL_455;
      ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)switchSkillUIList, &v235, 0LL);
      v131 = v236;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)LocalizationManager__GetLevelList_34107032(
                                                                                       v131,
                                                                                       0LL);
      if ( !v235 )
        goto LABEL_455;
      v104 = (System_String_o *)switchSkillUIList;
      lv = v235->fields.lv;
      LODWORD(tdStrengthStatus) = v235->fields.treasureDeviceNum;
      HIDWORD(tdStrengthStatus) = v235->fields.strengthStatus;
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                                                       item,
                                                                                       0LL);
      if ( !item->fields.followerInfo )
        goto LABEL_455;
      v132 = (ServantLeaderInfo_o *)switchSkillUIList;
      switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)FollowerInfo__get_IsNpc(
                                                                                       item->fields.followerInfo,
                                                                                       0LL);
      if ( !v132 )
        goto LABEL_455;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_29371140(v132, &v234, (unsigned __int8)switchSkillUIList & 1, 0LL);
      v133 = v234;
      if ( !v234 )
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
            v109 = this->fields.levelLabel;
            HIDWORD(v233) = PartyOrganizationListViewItem__get_Level(item, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Int32__ToString(
                                                                                             (int32_t)&v233 + 4,
                                                                                             0LL);
            if ( !v109 )
              goto LABEL_455;
            UILabel__set_text(v109, (System_String_o *)switchSkillUIList, 0LL);
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
            Icon_22319524 = Rarity__getIcon_22319524(rarityId, ExceedCount, Level, 0LL);
            if ( PartyOrganizationListViewItem__get_ExceedCount(item, 0LL) < 1 )
            {
              v122 = 0;
            }
            else
            {
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantExceedMaster___);
              v116 = item->fields.rarityId;
              v117 = (ServantExceedMaster_o *)Master_WarQuestSelectionMaster;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_ExceedCount(
                                                                                               item,
                                                                                               0LL);
              if ( !v117 )
                goto LABEL_455;
              RarityIcon = ServantExceedMaster__GetRarityIcon(v117, v116, (int32_t)switchSkillUIList, 0, 0LL);
              v119 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
              v120 = item->fields.rarityId;
              v121 = (ServantLvDetailMaster_o *)v119;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_Level(
                                                                                               item,
                                                                                               0LL);
              if ( !v121 )
                goto LABEL_455;
              v122 = ServantLvDetailMaster__GetRarityIcon(v121, v120, (int32_t)switchSkillUIList, RarityIcon, 0LL);
            }
            v134 = this->fields.raritySprite;
            if ( v122 >= 3 )
            {
              if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetEventSprite(v134, Icon_22319524, 0LL);
            }
            else
            {
              if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetCommon(v134, 0LL);
            }
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.raritySprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, Icon_22319524, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.raritySprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            ((void (__fastcall *)(System_Collections_Generic_List_XWeaponTrail_Element__o *, Il2CppMethodPointer))switchSkillUIList->klass->vtable._33_get_Item.method)(
              switchSkillUIList,
              switchSkillUIList->klass->vtable._34_get_Count.methodPtr);
            x = this->fields.baseRarityPosition.fields.x;
            y = this->fields.baseRarityPosition.fields.y;
            z = this->fields.baseRarityPosition.fields.z;
            v138 = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.raritySprite;
            if ( v138 >= 1 )
              x = x + 1.0;
            if ( !switchSkillUIList )
              goto LABEL_455;
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_transform(
                                                                                             (UnityEngine_Component_o *)switchSkillUIList,
                                                                                             0LL);
            if ( !switchSkillUIList )
              goto LABEL_455;
            v242.fields.x = x;
            v242.fields.y = y;
            v242.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)switchSkillUIList, v242, 0LL);
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
              *(UnityEngine_Color_o *)&v140 = UnityEngine_Color__get_white(0LL);
            else
              *(UnityEngine_Color_o *)&v140 = UnityEngine_Color__get_yellow(0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.attackLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UIWidget__set_color((UIWidget_o *)switchSkillUIList, *(UnityEngine_Color_o *)&v140, 0LL);
            v144 = this->fields.attackLabel;
            HIDWORD(v233) = PartyOrganizationListViewItem__get_MargeAtk(item, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Int32__ToString_39741776(
                                                                                             (int32_t)&v233 + 4,
                                                                                             (System_String_o *)StringLiteral_346/*"#,0"*/,
                                                                                             0LL);
            if ( !v144 )
              goto LABEL_455;
            UILabel__set_text(v144, (System_String_o *)switchSkillUIList, 0LL);
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
              *(UnityEngine_Color_o *)&v146 = UnityEngine_Color__get_white(0LL);
            else
              *(UnityEngine_Color_o *)&v146 = UnityEngine_Color__get_yellow(0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.hpLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UIWidget__set_color((UIWidget_o *)switchSkillUIList, *(UnityEngine_Color_o *)&v146, 0LL);
            v150 = this->fields.hpLabel;
            HIDWORD(v233) = PartyOrganizationListViewItem__get_MargeHp(item, 0LL);
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Int32__ToString_39741776(
                                                                                             (int32_t)&v233 + 4,
                                                                                             (System_String_o *)StringLiteral_346/*"#,0"*/,
                                                                                             0LL);
            if ( !v150 )
              goto LABEL_455;
            UILabel__set_text(v150, (System_String_o *)switchSkillUIList, 0LL);
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
            v153 = this->fields.costLabel;
            v154 = EquipCost;
            MainCost = PartyOrganizationListViewItem__get_MainCost(item, 0LL);
            if ( (v154 & 0x80000000) != 0 )
            {
              HIDWORD(v233) = MainCost;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Int32__ToString(
                                                                                               (int32_t)&v233 + 4,
                                                                                               0LL);
              if ( !v153 )
                goto LABEL_455;
              UILabel__set_text(v153, (System_String_o *)switchSkillUIList, 0LL);
            }
            else
            {
              v232 = MainCost;
              v156 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v232);
              v231 = v154;
              v157 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v231);
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_String__Concat_44657492(
                                                                                               v156,
                                                                                               (Il2CppObject *)StringLiteral_699/*"+"*/,
                                                                                               v157,
                                                                                               0LL);
              if ( !v153 )
                goto LABEL_455;
              UILabel__set_text(v153, (System_String_o *)switchSkillUIList, 0LL);
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
              v104,
              lv,
              SHIDWORD(tdStrengthStatus),
              tdStrengthStatus,
              0,
              0LL);
            if ( !System_String__IsNullOrEmpty(v104, 0LL) )
            {
              v159 = this->fields.switchSkillUIList;
              if ( v159 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v159,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInfoUiWidget,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
            if ( System_String__IsNullOrEmpty(LevelList_34107032, 0LL) )
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
              v161 = this->fields.switchSkillUIList;
              if ( v161 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v161,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.appendSkillInfoUiWidget,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
              AppendSkillListComponent__Set((AppendSkillListComponent_o *)switchSkillUIList, LevelList_34107032, 0LL);
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
            v163 = this->fields.switchSkillUIList;
            if ( v163 )
            {
              v164 = this->fields.switchSkillInfo;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v163,
                                                                                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
              if ( !v164 )
                goto LABEL_455;
              SwitchUIWidgetComponent__Set(v164, (UIWidget_array *)switchSkillUIList, 0LL);
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
              v187 = this->fields.svtCommandCardList;
              v188 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                               v188,
                                                                                               0LL);
              if ( v187 )
              {
                ServantCommandCardListComponent__Set_27528516(
                  v187,
                  (int32_t)switchSkillUIList,
                  monitor,
                  item->fields.commandCodeIdList,
                  2,
                  0,
                  0LL);
                goto LABEL_314;
              }
LABEL_455:
              sub_B5D69C(switchSkillUIList, v88);
            }
            v167 = this->fields.svtCommandCardList;
            v168 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                             v168,
                                                                                             0LL);
            if ( !v167 )
              goto LABEL_455;
            ServantCommandCardListComponent__Set_27528776(
              v167,
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
              v194 = item->fields.followerInfo;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)switchSkillUIList,
                                                                                               0LL);
              if ( !switchSkillUIList )
                goto LABEL_455;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v194 != 0LL, 0LL);
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
              v196 = item->fields.followerInfo;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)switchSkillUIList,
                                                                                               0LL);
              if ( !switchSkillUIList )
                goto LABEL_455;
              if ( v196 )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
                v197 = this->fields.fixNpcMessageText;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)LocalizationManager__Get(
                                                                                                 (System_String_o *)StringLiteral_10500/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/,
                                                                                                 0LL);
                if ( !v197 )
                  goto LABEL_455;
                UILabel__set_text(v197, (System_String_o *)switchSkillUIList, 0LL);
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
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                             EquipSvtId,
                                                                                             0LL);
            if ( !this->fields.noneEquipSprite )
              goto LABEL_455;
            v200 = (int)switchSkillUIList;
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                             (UnityEngine_Component_o *)this->fields.noneEquipSprite,
                                                                                             0LL);
            if ( !switchSkillUIList )
              goto LABEL_455;
            if ( v200 < 1 )
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
              LOBYTE(v88) = 0;
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
              AtlasManager__SetEquipFace(equipSprite, v200, 0LL);
              v202 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(v202, 0LL, 0LL) )
                goto LABEL_383;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_EquipLimitCountMax(
                                                                                               item,
                                                                                               0LL);
              if ( !this->fields.equipLimitCountSprite )
                goto LABEL_455;
              v203 = (int)switchSkillUIList;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                               (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                                                                                               0LL);
              v204 = switchSkillUIList;
              if ( v203 < 1 )
              {
                v88 = 0LL;
                if ( !switchSkillUIList )
                  goto LABEL_455;
              }
              else
              {
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)PartyOrganizationListViewItem__get_EquipLimitCount(
                                                                                                 item,
                                                                                                 0LL);
                v88 = (int)switchSkillUIList >= v203;
                if ( !v204 )
                  goto LABEL_455;
              }
              switchSkillUIList = v204;
            }
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v88, 0LL);
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
              LODWORD(v233) = PartyOrganizationListViewItem__GetCorrectionIconId(item, 0LL);
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.correctionIconSprite;
              if ( !switchSkillUIList )
                goto LABEL_455;
              if ( (v233 & 0x80000000) != 0 )
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
                v207 = item->fields.eventUpValItemList;
                v208 = localPosition.fields.x;
                v209 = localPosition.fields.z;
                if ( v207 && *(_QWORD *)&v207->max_length )
                {
                  v210 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
                  if ( (BYTE3(WarBoardPartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
                    v210 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
                  }
                  p_CORRECTION_ICON_BONUS_Y = &v210->static_fields->CORRECTION_ICON_BONUS_Y;
                }
                else
                {
                  v212 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
                  if ( (BYTE3(WarBoardPartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
                    v212 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
                  }
                  p_CORRECTION_ICON_BONUS_Y = &v212->static_fields->CORRECTION_ICON_SINGLE_Y;
                }
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.correctionIconSprite;
                if ( !switchSkillUIList )
                  goto LABEL_455;
                v213 = *p_CORRECTION_ICON_BONUS_Y;
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_transform(
                                                                                                 (UnityEngine_Component_o *)switchSkillUIList,
                                                                                                 0LL);
                if ( !switchSkillUIList )
                  goto LABEL_455;
                v244.fields.y = (float)v213;
                v244.fields.x = v208;
                v244.fields.z = v209;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)switchSkillUIList, v244, 0LL);
                v214 = this->fields.correctionIconSprite;
                v215 = System_Int32__ToString((int32_t)&v233, 0LL);
                switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_String__Concat_44577788(
                                                                                                 (System_String_o *)StringLiteral_17927/*"correction_icon_"*/,
                                                                                                 v215,
                                                                                                 0LL);
                if ( !v214 )
                  goto LABEL_455;
                UISprite__set_spriteName(v214, (System_String_o *)switchSkillUIList, 0LL);
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
              v218 = this->fields.baseSprite;
              baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetFormationBase(v218, frameType, baseDefaultUIAtlas, 0, 0LL);
            }
            base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
            {
              v221 = this->fields.base2Sprite;
              base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetFormationFrame(v221, frameType, base2DefaultUIAtlas, 0, 0LL);
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
              if ( !v86 )
                goto LABEL_455;
              v224 = this->fields.eventUpValIcon;
              switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v86,
                                                                                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
              if ( !v224 )
                goto LABEL_455;
              EventUpValIconComponent__Set(v224, (EventMargeItemUpValInfo_array *)switchSkillUIList, -1, -1, -1, 0LL);
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
              v226 = 0;
            }
            else
            {
              v227 = (UnityEngine_Object_o *)this->fields.bounusIcon;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(v227, 0LL, 0LL) )
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
              v226 = isEventUpVal;
            }
            ShiningIconComponent__Set_33897340((ShiningIconComponent_o *)switchSkillUIList, v226, 0LL);
            goto LABEL_448;
          }
          userServantEntity = item->fields.userServantEntity;
          if ( userServantEntity && UserServantEntity__IsEventJoin(userServantEntity, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.supportSprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            v191 = &StringLiteral_19585/*"icon_eventjoin_02"*/;
          }
          else
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.supportSprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            if ( !item->fields.followerInfo )
            {
              v192 = 0LL;
              goto LABEL_327;
            }
            v191 = &StringLiteral_19621/*"icon_support_02"*/;
          }
          v192 = (System_String_o *)*v191;
LABEL_327:
          UISprite__set_spriteName((UISprite_o *)switchSkillUIList, v192, 0LL);
          goto LABEL_328;
        }
        v169 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v169, 0LL, 0LL) )
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
          v170 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v170, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.servantClassIcon;
            if ( !switchSkillUIList )
              goto LABEL_455;
            ServantClassIconComponent__Clear((ServantClassIconComponent_o *)switchSkillUIList, 0LL);
          }
          v171 = (UnityEngine_Object_o *)this->fields.levelLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v171, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.levelLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          v172 = (UnityEngine_Object_o *)this->fields.raritySprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v172, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.raritySprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, 0LL, 0LL);
          }
          v173 = (UnityEngine_Object_o *)this->fields.attackLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v173, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.attackLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          v174 = (UnityEngine_Object_o *)this->fields.hpLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v174, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.hpLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          v175 = (UnityEngine_Object_o *)this->fields.costLabel;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v175, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.costLabel;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          v176 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v176, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.skillListTreasureDevice;
            if ( !switchSkillUIList )
              goto LABEL_455;
            SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)switchSkillUIList, 0LL);
          }
          v177 = (UnityEngine_Object_o *)this->fields.appendSkillList;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v177, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.appendSkillList;
            if ( !switchSkillUIList )
              goto LABEL_455;
            AppendSkillListComponent__Clear((AppendSkillListComponent_o *)switchSkillUIList, 0LL);
          }
          v178 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v178, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.svtCommandCardList;
            if ( !switchSkillUIList )
              goto LABEL_455;
            ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)switchSkillUIList, 0LL);
          }
          v179 = (UnityEngine_Object_o *)this->fields.supportSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v179, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.supportSprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, 0LL, 0LL);
          }
          v180 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v180, 0LL, 0LL) )
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
            v181 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v181, 0LL, 0LL) )
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
          v182 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v182, 0LL, 0LL) )
          {
            switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.correctionIconSprite;
            if ( !switchSkillUIList )
              goto LABEL_455;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, 0LL, 0LL);
          }
          WarBoardPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(this, item, v183);
          v184 = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v184, 0LL, 0LL) )
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
          v185 = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v185, 0LL, 0LL) )
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
      v105 = v133;
    }
    LevelList_34107032 = LocalizationManager__GetLevelList_34107032(v105, 0LL);
    goto LABEL_59;
  }
  switchSkillUIList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0LL);
  if ( !switchSkillUIList )
    goto LABEL_455;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
  v92 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v92, 0LL, 0LL) )
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
    v93 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v93, 0LL, 0LL) )
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
  __int64 v3; // x3
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
  UnityEngine_Object_o *restrictionClassSprite; // x20
  __int64 v61; // x1
  __int64 v62; // x20
  __int64 v63; // x20
  void *MasterData_WarQuestSelectionMaster; // x0
  WarBoardIndividualityClassMaster_o *v65; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int v67; // w25
  __int64 v68; // x21
  System_Collections_Generic_List_int__o *v69; // x22
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x22
  WarBoardPartyOrganizationListViewItemDraw___c_c *v77; // x0
  struct WarBoardPartyOrganizationListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__40_0; // x23
  Il2CppObject *v80; // x24
  struct WarBoardPartyOrganizationListViewItemDraw___c_StaticFields *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Collections_Generic_IEnumerable_T__o *v88; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v89; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x0
  System_Int32_array *v91; // x0
  __int64 v92; // x8
  __int64 v93; // x8
  WarBoardPartyOrganizationListViewItemDraw_c *v94; // x0
  System_String_o *RestrictionClassSpriteNameFormat; // x20
  Il2CppObject *v96; // x0
  System_String_o *v97; // x20
  __int64 v98; // x0
  int v99; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42E75F5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_RestrictionEntity___ctor__, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_RestrictionEntity__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BasicHelper_ForEach_RestrictionEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Distinct_int___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Func_RestrictionEntity__bool___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Func_RestrictionEntity__bool__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&int_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v42, v43, v44);
    sub_B5D5C4(
      &Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__,
      v45,
      v46,
      v47);
    sub_B5D5C4(
      &Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__,
      v48,
      v49,
      v50);
    sub_B5D5C4(&WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v57, v58, v59);
    byte_42E75F5 = 1;
  }
  restrictionClassSprite = (UnityEngine_Object_o *)this->fields.restrictionClassSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionClassSprite, 0LL, 0LL) )
  {
    v62 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v62 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v63 = **(_QWORD **)(v62 + 192);
    if ( (*(_BYTE *)(v63 + 306) & 1) == 0 )
      sub_AF52C4(v63);
    MasterData_WarQuestSelectionMaster = **(void ***)(v63 + 184);
    if ( MasterData_WarQuestSelectionMaster )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v65 = (WarBoardIndividualityClassMaster_o *)MasterData_WarQuestSelectionMaster;
        MasterData_WarQuestSelectionMaster = WarBoardIndividualityClassMaster__GetAllClassServantEntity(
                                               (WarBoardIndividualityClassMaster_o *)MasterData_WarQuestSelectionMaster,
                                               0LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          if ( item )
          {
            questRestrictionInfo = item->fields.questRestrictionInfo;
            v67 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 11);
            if ( questRestrictionInfo && questRestrictionInfo->fields.restrictionEntityList )
            {
              v68 = sub_B5D694(WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo);
              WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0___ctor(
                (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)v68,
                0LL);
              v69 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v69,
                (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
              if ( !v68 )
                goto LABEL_40;
              *(_QWORD *)(v68 + 16) = v69;
              sub_B5D560(
                (BattleServantConfConponent_o *)(v68 + 16),
                (System_Int32_array **)v69,
                v70,
                v71,
                v72,
                v73,
                v74,
                v75);
              restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
              v77 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              if ( (BYTE3(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
                v77 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              }
              static_fields = v77->static_fields;
              _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__40_0;
              if ( !_9__40_0 )
              {
                if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v77);
                  static_fields = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
                }
                v80 = (Il2CppObject *)static_fields->__9;
                _9__40_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_RestrictionEntity__bool__TypeInfo);
                System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                  _9__40_0,
                  v80,
                  Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__,
                  (const MethodInfo_2C2ECD0 *)Method_System_Func_RestrictionEntity__bool___ctor__);
                v81 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
                v81->__9__40_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__40_0;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&v81->__9__40_0,
                  (System_Int32_array **)_9__40_0,
                  v82,
                  v83,
                  v84,
                  v85,
                  v86,
                  v87);
              }
              v88 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                     restrictionEntityList,
                                                                     (System_Func_TSource__bool__o *)_9__40_0,
                                                                     (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
              v89 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_RestrictionEntity__TypeInfo);
              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                v89,
                (Il2CppObject *)v68,
                Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__,
                (const MethodInfo_258B320 *)Method_System_Action_RestrictionEntity___ctor__);
              BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                v88,
                (System_Action_T__o *)v89,
                (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_RestrictionEntity___);
              v90 = System_Linq_Enumerable__Distinct_int_(
                      *(System_Collections_Generic_IEnumerable_TSource__o **)(v68 + 16),
                      (const MethodInfo_1CA8DAC *)Method_System_Linq_Enumerable_Distinct_int___);
              v91 = System_Linq_Enumerable__ToArray_int_(
                      v90,
                      (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
              MasterData_WarQuestSelectionMaster = WarBoardIndividualityClassMaster__GetServantClassEntities(
                                                     v65,
                                                     v91,
                                                     0LL);
              if ( MasterData_WarQuestSelectionMaster )
              {
                v92 = *((_QWORD *)MasterData_WarQuestSelectionMaster + 3);
                if ( v92 )
                {
                  if ( !(_DWORD)v92 )
                  {
                    v98 = sub_B5D6C8(MasterData_WarQuestSelectionMaster);
                    sub_B5D668(v98, 0LL);
                  }
                  v93 = *((_QWORD *)MasterData_WarQuestSelectionMaster + 4);
                  if ( !v93 )
                    goto LABEL_40;
                  v67 = *(_DWORD *)(v93 + 44);
                }
              }
            }
            v94 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            if ( (BYTE3(WarBoardPartyOrganizationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
              v94 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            }
            RestrictionClassSpriteNameFormat = v94->static_fields->RestrictionClassSpriteNameFormat;
            v99 = v67;
            v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v99);
            MasterData_WarQuestSelectionMaster = System_String__Format(RestrictionClassSpriteNameFormat, v96, 0LL);
            if ( this->fields.restrictionClassSprite )
            {
              v97 = (System_String_o *)MasterData_WarQuestSelectionMaster;
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
                  UISprite__set_spriteName((UISprite_o *)MasterData_WarQuestSelectionMaster, v97, 0LL);
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
    sub_B5D69C(MasterData_WarQuestSelectionMaster, v61);
  }
}


void __fastcall WarBoardPartyOrganizationListViewItemDraw___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct WarBoardPartyOrganizationListViewItemDraw___c_StaticFields *static_fields; // x0

  if ( (byte_42E5FAB & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo, v1, v2, v3);
    byte_42E5FAB = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardPartyOrganizationListViewItemDraw___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *v5; // x20

  v5 = this;
  if ( (byte_42E5FAC & 1) == 0 )
  {
    this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)sub_B5D5C4(
                                                                                  &Method_System_Collections_Generic_List_int__AddRange__,
                                                                                  (_DWORD)x,
                                                                                  (_DWORD)method,
                                                                                  v3);
    byte_42E5FAC = 1;
  }
  if ( !x
    || (this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)v5->fields.indivisualities) == 0LL )
  {
    sub_B5D69C(this, x);
  }
  System_Collections_Generic_List_int___AddRange(
    (System_Collections_Generic_List_int__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)x->fields.targetVals,
    (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
}