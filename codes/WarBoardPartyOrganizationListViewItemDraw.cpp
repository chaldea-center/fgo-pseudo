void __fastcall WarBoardPartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  struct WarBoardPartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4C1FD23 & 1) == 0 )
  {
    sub_1C3B764(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_18335/*"dueTime"*/, v8);
    byte_4C1FD23 = 1;
  }
  WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields->RestrictionClassSpriteNameFormat = (struct System_String_o *)StringLiteral_18335/*"dueTime"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_18335/*"dueTime"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  static_fields = WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_X_SIZE_MAX = 0xFFFFFFEC000003E8LL;
  static_fields->CORRECTION_ICON_BONUS_Y = 5;
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct UISprite_o *v15; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct UISprite_o *v24; // x8
  struct UIAtlas_o *v25; // x1
  System_Collections_Generic_List_object__o *v26; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4C1FD1E & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1C3B764(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    byte_4C1FD1E = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.raritySprite;
    if ( !transform )
      goto LABEL_20;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_20;
    this->fields.baseRarityPosition = UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)transform,
                                        0LL);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v15 = this->fields.baseSprite;
    if ( !v15 )
      goto LABEL_20;
    mAtlas = v15->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.baseDefaultUIAtlas,
      (int64_t)mAtlas,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v24 = this->fields.base2Sprite;
    if ( v24 )
    {
      v25 = v24->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v25;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&this->fields.base2DefaultUIAtlas,
        (int64_t)v25,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      goto LABEL_19;
    }
LABEL_20:
    sub_1C3B9C0(transform, v6);
  }
LABEL_19:
  v26 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v26;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.switchSkillUIList, (int64_t)v26, v27, v28, v29, v30, v31, v32);
}


void __fastcall WarBoardPartyOrganizationListViewItemDraw__ClearItem(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20

  if ( (byte_4C1FD1F & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1FD1F = 1;
  }
  this->fields.linkItem = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantNarrowTexture;
  if ( !gameObject )
    goto LABEL_14;
  UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0LL);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_14:
    sub_1C3B9C0(gameObject, v10);
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

  if ( (byte_4C1FD22 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4C1FD22 = 1;
  }
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_46;
  v6 = !isDisp;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, !isDisp, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.base2Sprite;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantNarrowTexture;
  if ( !baseSprite )
    goto LABEL_46;
  UINarrowFigureTexture__SetActive((UINarrowFigureTexture_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.servantClassIcon;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.supportSprite;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.levelLabel;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.hpLabel;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.attackLabel;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.skillListTreasureDevice;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.svtCommandCardList;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
  if ( !baseSprite )
    goto LABEL_46;
  baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, v6, 0LL);
  eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.eventUpValIcon;
    if ( !baseSprite )
      goto LABEL_46;
    EventUpValIconComponent__Set((EventUpValIconComponent_o *)baseSprite, 0LL, -1, -1, -1, 0LL);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
    {
      baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
      if ( !baseSprite )
        goto LABEL_46;
      ShiningIconComponent__Set_39658244((ShiningIconComponent_o *)baseSprite, 0, 0LL);
    }
  }
  correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_46:
    sub_1C3B9C0(baseSprite, isDisp);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationListViewItemDraw__SetItem(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  System_Collections_Generic_List_object__o *v36; // x20
  void *gameObject; // x0
  signed __int64 v38; // x1
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v42; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  UnityEngine_Object_o *v45; // x20
  UnityEngine_Object_o *v46; // x20
  UnityEngine_Object_o *servantFaceIcon; // x22
  int32_t CardImageLimitCount; // w22
  Il2CppObject *MasterData_object; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v53; // w22
  int32_t v54; // w23
  SkillInfo_array *v55; // x22
  System_String_o *v56; // x24
  int32_t lv; // w25
  SkillInfo_array *v58; // x0
  System_String_o *LevelList_39826328; // x23
  UnityEngine_Object_o *servantClassIcon; // x22
  UnityEngine_Object_o *levelLabel; // x22
  UILabel_o *v62; // x28
  UnityEngine_Object_o *raritySprite; // x22
  int32_t rarityId; // w28
  int32_t ExceedCount; // w29
  int32_t Level; // w22
  System_String_o *Icon_39123920; // x28
  System_String_o *v68; // x26
  Il2CppObject *Master_object; // x0
  int32_t v70; // w22
  ServantExceedMaster_o *v71; // x29
  int32_t RarityIcon; // w29
  Il2CppObject *v73; // x0
  int32_t v74; // w22
  ServantLvDetailMaster_o *v75; // x23
  int32_t v76; // w29
  struct FollowerInfo_o *followerInfo; // x8
  System_String_o *v78; // x29
  int imageSvtId; // w22
  UnityEngine_Object_o *v80; // x23
  ServantFaceIconComponent_o *v81; // x24
  int32_t v82; // w24
  Il2CppObject *v83; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // kr10_16
  int32_t v85; // w24
  SkillInfo_array *v86; // x22
  ServantLeaderInfo_o *v87; // x28
  SkillInfo_array *v88; // x22
  UISprite_o *v89; // x22
  float x; // s10
  float y; // s8
  float z; // s9
  int32_t v93; // w8
  UnityEngine_Object_o *attackLabel; // x22
  int32_t AdjustAtk; // w0
  float v96; // s1
  int v97; // w8
  float v98; // s2
  float v99; // s0
  float v100; // s3
  UILabel_o *v101; // x28
  UnityEngine_Object_o *hpLabel; // x22
  int32_t AdjustHp; // w0
  float v104; // s1
  int v105; // w8
  float v106; // s2
  float v107; // s0
  float v108; // s3
  UILabel_o *v109; // x28
  UnityEngine_Object_o *costLabel; // x22
  int32_t EquipCost; // w0
  UILabel_o *v112; // x28
  int v113; // w29
  int32_t MainCost; // w0
  __int64 v115; // x2
  __int64 v116; // x3
  __int64 v117; // x4
  Il2CppObject *v118; // x22
  __int64 v119; // x2
  __int64 v120; // x3
  __int64 v121; // x4
  Il2CppObject *v122; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  __int64 v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  __int64 v133; // x8
  UnityEngine_Object_o *v134; // x22
  UnityEngine_Object_o *v135; // x22
  UnityEngine_Object_o *v136; // x22
  UnityEngine_Object_o *v137; // x22
  UnityEngine_Object_o *v138; // x22
  UnityEngine_Object_o *v139; // x22
  UnityEngine_Object_o *v140; // x22
  UnityEngine_Object_o *v141; // x22
  UnityEngine_Object_o *v142; // x22
  UnityEngine_Object_o *v143; // x22
  UnityEngine_Object_o *v144; // x22
  UnityEngine_Object_o *v145; // x22
  UnityEngine_Object_o *v146; // x22
  UnityEngine_Object_o *v147; // x22
  const MethodInfo *v148; // x2
  UnityEngine_Object_o *v149; // x21
  UnityEngine_Object_o *v150; // x21
  bool isEventUpVal; // w23
  UnityEngine_Object_o *appendSkillList; // x22
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  __int64 v159; // x8
  _QWORD *v160; // x9
  __int64 v161; // x10
  __int64 v162; // x8
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v164; // x0
  SwitchUIWidgetComponent_o *v165; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  System_Int32_array *v167; // x23
  ServantCommandCardListComponent_o *v168; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v169; // kr20_16
  ServantCommandCardListComponent_o *v170; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v171; // kr30_16
  UnityEngine_Object_o *supportSprite; // x22
  UserServantEntity_o *userServantEntity; // x0
  __int64 *v174; // x8
  System_String_o *v175; // x1
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  struct FollowerInfo_o *v177; // x22
  UnityEngine_Object_o *fixNpcMessageText; // x22
  struct FollowerInfo_o *v179; // x22
  UILabel_o *v180; // x23
  UnityEngine_Object_o *noneEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr40_16
  int32_t v183; // w23
  UISprite_o *equipSprite; // x22
  UnityEngine_Object_o *v185; // x22
  int v186; // w24
  void *v187; // x23
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  UnityEngine_Object_o *correctionIconSprite; // x22
  struct EventMargeItemUpValInfo_array *v190; // x8
  float v191; // s8
  WarBoardPartyOrganizationListViewItemDraw_c *v192; // x0
  __int64 v193; // x8
  UISprite_o *v194; // x21
  System_String_o *v195; // x0
  UnityEngine_Object_o *restrictionClassSprite; // x21
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v198; // x22
  UIAtlas_o *baseDefaultUIAtlas; // x21
  UnityEngine_Object_o *base2Sprite; // x21
  UISprite_o *v201; // x22
  UIAtlas_o *base2DefaultUIAtlas; // x21
  UnityEngine_Object_o *eventUpValIcon; // x21
  EventUpValIconComponent_o *v204; // x21
  UnityEngine_Object_o *bounusIcon; // x20
  bool v206; // w1
  UnityEngine_Object_o *v207; // x20
  UnityEngine_Object_o *baseButton; // x20
  int32_t strengthStatus; // [xsp+Ch] [xbp-D4h]
  int32_t treasureDeviceNum; // [xsp+10h] [xbp-D0h]
  int32_t frameType; // [xsp+14h] [xbp-CCh]
  int v212; // [xsp+18h] [xbp-C8h] BYREF
  int32_t v213; // [xsp+1Ch] [xbp-C4h] BYREF
  __int64 v214; // [xsp+20h] [xbp-C0h]
  float v215; // [xsp+28h] [xbp-B8h]
  __int64 v216; // [xsp+30h] [xbp-B0h] BYREF
  SkillInfo_array *v217; // [xsp+38h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *v218; // [xsp+40h] [xbp-A0h] BYREF
  SkillInfo_array *v219; // [xsp+48h] [xbp-98h] BYREF
  SkillInfo_array *v220; // [xsp+50h] [xbp-90h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+58h] [xbp-88h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v223; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v224; // 0:x0.16
  UnityEngine_Vector3_o v225; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v227; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C1FD20 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, item);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v11);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantExceedMaster___, v12);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v13);
    sub_1C3B764(&DataManager_TypeInfo, v14);
    sub_1C3B764(&int_TypeInfo, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__Add__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__Clear__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v20);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___77846616, v21);
    sub_1C3B764(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v22);
    sub_1C3B764(&LocalizationManager_TypeInfo, v23);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v24);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_1C3B764(&Rarity_TypeInfo, v26);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1C3B764(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v28);
    sub_1C3B764(&StringLiteral_20592/*"java.net.ConnectException"*/, v29);
    sub_1C3B764(&StringLiteral_837/*", applePrice:"*/, v30);
    sub_1C3B764(&StringLiteral_18627/*"en_body"*/, v31);
    sub_1C3B764(&StringLiteral_20551/*"item/recover"*/, v32);
    sub_1C3B764(&StringLiteral_10516/*"PropDescCreate"*/, v33);
    sub_1C3B764(&StringLiteral_405/*"#0039E2"*/, v34);
    sub_1C3B764(&StringLiteral_1/*""*/, v35);
    byte_4C1FD20 = 1;
  }
  skillInfoList = 0LL;
  v220 = 0LL;
  tdInfo = 0LL;
  v218 = 0LL;
  v219 = 0LL;
  v216 = 0LL;
  v217 = 0LL;
  v215 = 0.0;
  v214 = 0LL;
  this->fields.linkItem = item;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.linkItem,
    (int64_t)item,
    *(int64_t *)&mode,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v36 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !item )
    goto LABEL_402;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)item->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v36 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_57193824(
      v36,
      eventUpValItemList,
      (const MethodInfo_368B560 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___77846616);
  }
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_402;
  size = switchSkillUIList->fields._size;
  v42 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v42;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
  {
    gameObject = this->fields.skillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_402;
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
      0.0);
  }
  appendSkillInfoUiWidget = (UnityEngine_Object_o *)this->fields.appendSkillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0LL, 0LL) )
  {
    gameObject = this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_402;
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
      0.0);
  }
  if ( (mode | 4) != 4 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_402;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( item->fields.userServantEntity )
    {
      servantFaceIcon = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0LL, 0LL) )
      {
        gameObject = this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_402;
        ServantFaceIconComponent__Set(
          (ServantFaceIconComponent_o *)gameObject,
          item->fields.userServantEntity,
          0LL,
          item->fields.questRestrictionInfo,
          0LL,
          0LL,
          0LL);
      }
      CardImageLimitCount = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0LL);
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_402;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(SvtId, 0LL);
      if ( !MasterData_object )
        goto LABEL_402;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     (ServantLimitImageMaster_o *)MasterData_object,
                                     (int32_t)gameObject,
                                     CardImageLimitCount,
                                     0LL);
      servantNarrowTexture = this->fields.servantNarrowTexture;
      v53 = ServantImageLimitSealAfter;
      v223 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v223, 0LL);
      if ( !servantNarrowTexture )
        goto LABEL_402;
      UINarrowFigureTexture__SetCharacter(servantNarrowTexture, (int32_t)gameObject, v53, 0LL, 0LL);
      frameType = item->fields.frameType;
      gameObject = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(item, 0LL);
      if ( !item->fields.userServantEntity )
        goto LABEL_402;
      v54 = (int)gameObject;
      UserServantEntity__getSkillInfo(
        item->fields.userServantEntity,
        &skillInfoList,
        -1,
        (int32_t)gameObject,
        1,
        0,
        -1,
        0LL);
      gameObject = item->fields.userServantEntity;
      if ( !gameObject )
        goto LABEL_402;
      UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)gameObject, &tdInfo, -1, v54, 0, 0LL);
      v55 = skillInfoList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__GetLevelList_39826328(v55, 0LL);
      if ( !tdInfo )
        goto LABEL_402;
      v56 = (System_String_o *)gameObject;
      gameObject = item->fields.userServantEntity;
      if ( !gameObject )
        goto LABEL_402;
      lv = tdInfo->fields.lv;
      strengthStatus = tdInfo->fields.strengthStatus;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      UserServantEntity__GetAppendPassiveSkillInfo_41707308((UserServantEntity_o *)gameObject, &v220, 0LL);
      v58 = v220;
    }
    else
    {
      followerInfo = item->fields.followerInfo;
      LevelList_39826328 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !followerInfo )
      {
        strengthStatus = 0;
        treasureDeviceNum = 0;
        lv = 0;
        frameType = 9;
        v56 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_54;
      }
      v78 = (System_String_o *)StringLiteral_1/*""*/;
      imageSvtId = followerInfo->fields.imageSvtId;
      v80 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v80, 0LL, 0LL) )
      {
        v81 = this->fields.servantFaceIcon;
        gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
        if ( !v81 )
          goto LABEL_402;
        ServantFaceIconComponent__Set_39648128(v81, (ServantLeaderInfo_o *)gameObject, 0LL, 0LL, 0, imageSvtId, 0LL);
      }
      v82 = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0LL);
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_402;
      v83 = DataManager__GetMasterData_object_(
              (DataManager_o *)gameObject,
              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v84 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v84, 0LL);
      if ( !v83 )
        goto LABEL_402;
      v85 = ServantLimitImageMaster__GetServantImageLimitSealAfter(
              (ServantLimitImageMaster_o *)v83,
              (int32_t)gameObject,
              v82,
              0LL);
      if ( imageSvtId <= 0 )
      {
        v224 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
        imageSvtId = BasicHelper__DecryptValue_42603336(v224, 0LL);
      }
      gameObject = this->fields.servantNarrowTexture;
      if ( !gameObject )
        goto LABEL_402;
      UINarrowFigureTexture__SetCharacter((UINarrowFigureTexture_o *)gameObject, imageSvtId, v85, 0LL, 0LL);
      frameType = item->fields.frameType;
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !gameObject )
        goto LABEL_402;
      ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)gameObject, &v219, 0LL);
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !gameObject )
        goto LABEL_402;
      ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)gameObject, &v218, 0LL);
      v86 = v219;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__GetLevelList_39826328(v86, 0LL);
      if ( !v218 )
        goto LABEL_402;
      lv = v218->fields.lv;
      v56 = (System_String_o *)gameObject;
      strengthStatus = v218->fields.strengthStatus;
      treasureDeviceNum = v218->fields.treasureDeviceNum;
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !item->fields.followerInfo )
        goto LABEL_402;
      v87 = (ServantLeaderInfo_o *)gameObject;
      gameObject = (void *)FollowerInfo__get_IsNpc(item->fields.followerInfo, 0LL);
      if ( !v87 )
        goto LABEL_402;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_41993020(v87, &v217, (unsigned __int8)gameObject & 1, 0LL);
      v88 = v217;
      if ( !v217 )
      {
        LevelList_39826328 = v78;
        goto LABEL_54;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v58 = v88;
    }
    LevelList_39826328 = LocalizationManager__GetLevelList_39826328(v58, 0LL);
LABEL_54:
    if ( item->fields.userServantEntity || item->fields.followerInfo )
    {
      servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
      {
        gameObject = this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_402;
        ServantClassIconComponent__SetImage(
          (ServantClassIconComponent_o *)gameObject,
          item->fields.classId,
          item->fields.frameType,
          0,
          0LL);
      }
      levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
      {
        v62 = this->fields.levelLabel;
        HIDWORD(v216) = PartyOrganizationListViewItem__get_Level(item, 0LL);
        gameObject = System_Int32__ToString((int32_t)&v216 + 4, 0LL);
        if ( !v62 )
          goto LABEL_402;
        UILabel__set_text(v62, (System_String_o *)gameObject, 0LL);
      }
      raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
      {
        rarityId = item->fields.rarityId;
        ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
        Level = PartyOrganizationListViewItem__get_Level(item, 0LL);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        Icon_39123920 = Rarity__getIcon_39123920(rarityId, ExceedCount, Level, 0LL);
        if ( PartyOrganizationListViewItem__get_ExceedCount(item, 0LL) < 1 )
        {
          v76 = 0;
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v68 = LevelList_39826328;
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
          v70 = item->fields.rarityId;
          v71 = (ServantExceedMaster_o *)Master_object;
          gameObject = (void *)PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
          if ( !v71 )
            goto LABEL_402;
          RarityIcon = ServantExceedMaster__GetRarityIcon(v71, v70, (int32_t)gameObject, 0, 0LL);
          v73 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
          v74 = item->fields.rarityId;
          v75 = (ServantLvDetailMaster_o *)v73;
          gameObject = (void *)PartyOrganizationListViewItem__get_Level(item, 0LL);
          if ( !v75 )
            goto LABEL_402;
          v76 = ServantLvDetailMaster__GetRarityIcon(v75, v74, (int32_t)gameObject, RarityIcon, 0LL);
          LevelList_39826328 = v68;
        }
        v89 = this->fields.raritySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( v76 >= 3 )
          AtlasManager__SetEventSprite(v89, Icon_39123920, 0LL);
        else
          AtlasManager__SetCommon(v89, 0LL);
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, Icon_39123920, 0LL);
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_402;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)gameObject + 840LL))(
          gameObject,
          *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
        x = this->fields.baseRarityPosition.fields.x;
        y = this->fields.baseRarityPosition.fields.y;
        z = this->fields.baseRarityPosition.fields.z;
        v93 = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
        gameObject = this->fields.raritySprite;
        if ( v93 >= 1 )
          x = x + 1.0;
        if ( !gameObject )
          goto LABEL_402;
        gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_402;
        v225.fields.x = x;
        v225.fields.y = y;
        v225.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v225, 0LL);
      }
      attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
      {
        AdjustAtk = PartyOrganizationListViewItem__get_AdjustAtk(item, 0LL);
        v96 = 0.92157;
        v97 = AdjustAtk;
        gameObject = this->fields.attackLabel;
        if ( v97 <= 0 )
          v98 = 1.0;
        else
          v98 = 0.015686;
        if ( v97 <= 0 )
          v96 = 1.0;
        if ( !gameObject )
          goto LABEL_402;
        v99 = 1.0;
        v100 = 1.0;
        UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v96 - 1), 0LL);
        v101 = this->fields.attackLabel;
        HIDWORD(v216) = PartyOrganizationListViewItem__get_MargeAtk(item, 0LL);
        gameObject = System_Int32__ToString_64174220((int32_t)&v216 + 4, (System_String_o *)StringLiteral_405/*"#0039E2"*/, 0LL);
        if ( !v101 )
          goto LABEL_402;
        UILabel__set_text(v101, (System_String_o *)gameObject, 0LL);
      }
      hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
      {
        AdjustHp = PartyOrganizationListViewItem__get_AdjustHp(item, 0LL);
        v104 = 0.92157;
        v105 = AdjustHp;
        gameObject = this->fields.hpLabel;
        if ( v105 <= 0 )
          v106 = 1.0;
        else
          v106 = 0.015686;
        if ( v105 <= 0 )
          v104 = 1.0;
        if ( !gameObject )
          goto LABEL_402;
        v107 = 1.0;
        v108 = 1.0;
        UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v104 - 1), 0LL);
        v109 = this->fields.hpLabel;
        HIDWORD(v216) = PartyOrganizationListViewItem__get_MargeHp(item, 0LL);
        gameObject = System_Int32__ToString_64174220((int32_t)&v216 + 4, (System_String_o *)StringLiteral_405/*"#0039E2"*/, 0LL);
        if ( !v109 )
          goto LABEL_402;
        UILabel__set_text(v109, (System_String_o *)gameObject, 0LL);
      }
      costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(costLabel, 0LL, 0LL) )
      {
        EquipCost = PartyOrganizationListViewItem__get_EquipCost(item, 0LL);
        v112 = this->fields.costLabel;
        v113 = EquipCost;
        MainCost = PartyOrganizationListViewItem__get_MainCost(item, 0LL);
        if ( (v113 & 0x80000000) != 0 )
        {
          HIDWORD(v216) = MainCost;
          gameObject = System_Int32__ToString((int32_t)&v216 + 4, 0LL);
          if ( !v112 )
            goto LABEL_402;
          UILabel__set_text(v112, (System_String_o *)gameObject, 0LL);
        }
        else
        {
          v213 = MainCost;
          v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v213, v115, v116, v117);
          v212 = v113;
          v122 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v212, v119, v120, v121);
          gameObject = System_String__Concat_63379624(v118, (Il2CppObject *)StringLiteral_837/*", applePrice:"*/, v122, 0LL);
          if ( !v112 )
            goto LABEL_402;
          UILabel__set_text(v112, (System_String_o *)gameObject, 0LL);
        }
      }
      skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
      {
        gameObject = this->fields.skillListTreasureDevice;
        if ( !gameObject )
          goto LABEL_402;
        SkillListTreasureDeviceComponent__Set(
          (SkillListTreasureDeviceComponent_o *)gameObject,
          v56,
          lv,
          strengthStatus,
          treasureDeviceNum,
          0,
          0LL);
        if ( !System_String__IsNullOrEmpty(v56, 0LL) )
        {
          gameObject = this->fields.switchSkillUIList;
          if ( gameObject )
          {
            v38 = (signed __int64)this->fields.skillInfoUiWidget;
            v130 = *((_QWORD *)gameObject + 2);
            v131 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++*((_DWORD *)gameObject + 7);
            if ( !v130 )
              goto LABEL_402;
            v132 = *((int *)gameObject + 6);
            if ( (unsigned int)v132 >= *(_DWORD *)(v130 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)gameObject,
                (Il2CppObject *)v38,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
            }
            else
            {
              v133 = v130 + 8 * v132;
              *((_DWORD *)gameObject + 6) = v132 + 1;
              *(_QWORD *)(v133 + 32) = v38;
              sub_1C3B708((PartyOrganizationUtility_o *)(v133 + 32), v38, v124, v125, v126, v127, v128, v129);
            }
          }
        }
      }
      appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
      {
        if ( System_String__IsNullOrEmpty(LevelList_39826328, 0LL) )
        {
          gameObject = this->fields.appendSkillList;
          if ( !gameObject )
            goto LABEL_402;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          gameObject = this->fields.switchSkillUIList;
          if ( gameObject )
          {
            v38 = (signed __int64)this->fields.appendSkillInfoUiWidget;
            v159 = *((_QWORD *)gameObject + 2);
            v160 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++*((_DWORD *)gameObject + 7);
            if ( !v159 )
              goto LABEL_402;
            v161 = *((int *)gameObject + 6);
            if ( (unsigned int)v161 >= *(_DWORD *)(v159 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)gameObject,
                (Il2CppObject *)v38,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
            }
            else
            {
              v162 = v159 + 8 * v161;
              *((_DWORD *)gameObject + 6) = v161 + 1;
              *(_QWORD *)(v162 + 32) = v38;
              sub_1C3B708((PartyOrganizationUtility_o *)(v162 + 32), v38, v153, v154, v155, v156, v157, v158);
            }
          }
          gameObject = this->fields.appendSkillList;
          if ( !gameObject )
            goto LABEL_402;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = this->fields.appendSkillList;
          if ( !gameObject )
            goto LABEL_402;
          AppendSkillListComponent__Set((AppendSkillListComponent_o *)gameObject, LevelList_39826328, 0LL);
        }
      }
      switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
      {
        v164 = this->fields.switchSkillUIList;
        if ( v164 )
        {
          v165 = this->fields.switchSkillInfo;
          gameObject = System_Collections_Generic_List_object___ToArray(
                         (System_Collections_Generic_List_object__o *)v164,
                         (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
          if ( !v165 )
            goto LABEL_402;
          SwitchUIWidgetComponent__Set(v165, (UIWidget_array *)gameObject, 0LL);
        }
      }
      svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
      {
        if ( item->fields.followerInfo )
        {
          if ( PartyOrganizationListViewItem__get_ServantLeader(item, 0LL) )
          {
            gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
            if ( !gameObject )
              goto LABEL_402;
            v167 = (System_Int32_array *)*((_QWORD *)gameObject + 26);
          }
          else
          {
            v167 = 0LL;
          }
          v170 = this->fields.svtCommandCardList;
          v171 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v171, 0LL);
          if ( v170 )
          {
            ServantCommandCardListComponent__Set_39637016(
              v170,
              (int32_t)gameObject,
              v167,
              item->fields.commandCodeIdList,
              2,
              0,
              0LL);
            goto LABEL_282;
          }
LABEL_402:
          sub_1C3B9C0(gameObject, v38);
        }
        v168 = this->fields.svtCommandCardList;
        v169 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v169, 0LL);
        if ( !v168 )
          goto LABEL_402;
        ServantCommandCardListComponent__Set_39637260(
          v168,
          (int32_t)gameObject,
          item->fields.commandCodeIdList,
          2,
          0,
          0LL);
      }
LABEL_282:
      supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
      {
LABEL_295:
        fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0LL, 0LL) )
        {
          gameObject = this->fields.fixNpcMessageFrameSprite;
          if ( !gameObject )
            goto LABEL_402;
          v177 = item->fields.followerInfo;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v177 != 0LL, 0LL);
        }
        fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0LL, 0LL) )
        {
          gameObject = this->fields.fixNpcMessageText;
          if ( !gameObject )
            goto LABEL_402;
          v179 = item->fields.followerInfo;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_402;
          if ( v179 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            v180 = this->fields.fixNpcMessageText;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10516/*"PropDescCreate"*/, 0LL);
            if ( !v180 )
              goto LABEL_402;
            UILabel__set_text(v180, (System_String_o *)gameObject, 0LL);
          }
          else
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          }
        }
        noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
          goto LABEL_342;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(item, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(EquipSvtId, 0LL);
        if ( !this->fields.noneEquipSprite )
          goto LABEL_402;
        v183 = (int)gameObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.noneEquipSprite, 0LL);
        if ( !gameObject )
          goto LABEL_402;
        if ( v183 < 1 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = this->fields.equipSprite;
          if ( !gameObject )
            goto LABEL_402;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
            goto LABEL_342;
          gameObject = this->fields.equipLimitCountSprite;
          if ( !gameObject )
            goto LABEL_402;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_402;
          LOBYTE(v38) = 0;
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          gameObject = this->fields.equipSprite;
          if ( !gameObject )
            goto LABEL_402;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          equipSprite = (UISprite_o *)this->fields.equipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEquipFace(equipSprite, v183, 0LL, 0LL);
          v185 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v185, 0LL, 0LL) )
            goto LABEL_342;
          gameObject = (void *)PartyOrganizationListViewItem__get_EquipLimitCountMax(item, 0LL);
          if ( !this->fields.equipLimitCountSprite )
            goto LABEL_402;
          v186 = (int)gameObject;
          gameObject = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                         0LL);
          v187 = gameObject;
          if ( v186 < 1 )
          {
            v38 = 0LL;
          }
          else
          {
            gameObject = (void *)PartyOrganizationListViewItem__get_EquipLimitCount(item, 0LL);
            v38 = (int)gameObject >= v186;
          }
          if ( !v187 )
            goto LABEL_402;
          gameObject = v187;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v38, 0LL);
LABEL_342:
        correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
        isEventUpVal = item->fields.isEventUpVal;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
        {
          LODWORD(v216) = PartyOrganizationListViewItem__GetCorrectionIconId(item, 0LL);
          gameObject = this->fields.correctionIconSprite;
          if ( !gameObject )
            goto LABEL_402;
          if ( (v216 & 0x80000000) != 0 )
          {
            UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
          }
          else
          {
            gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_402;
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
            *(float *)&v214 = localPosition.fields.x;
            v215 = localPosition.fields.z;
            v190 = item->fields.eventUpValItemList;
            v191 = localPosition.fields.x;
            if ( v190 && *(_QWORD *)&v190->max_length )
            {
              v192 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              if ( !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
                v192 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              }
              v193 = 16LL;
            }
            else
            {
              v192 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              if ( !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
                v192 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              }
              v193 = 12LL;
            }
            *((float *)&v214 + 1) = (float)*(int *)((char *)&v192->static_fields->RestrictionClassSpriteNameFormat + v193);
            gameObject = this->fields.correctionIconSprite;
            if ( !gameObject )
              goto LABEL_402;
            gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_402;
            v227.fields.y = *((float *)&v214 + 1);
            v227.fields.z = v215;
            v227.fields.x = v191;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v227, 0LL);
            v194 = this->fields.correctionIconSprite;
            v195 = System_Int32__ToString((int32_t)&v216, 0LL);
            gameObject = System_String__Concat_63368612((System_String_o *)StringLiteral_18627/*"en_body"*/, v195, 0LL);
            if ( !v194 )
              goto LABEL_402;
            UISprite__set_spriteName(v194, (System_String_o *)gameObject, 0LL);
            gameObject = this->fields.correctionIconSprite;
            if ( !gameObject )
              goto LABEL_402;
            (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)gameObject + 840LL))(
              gameObject,
              *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
          }
        }
        restrictionClassSprite = (UnityEngine_Object_o *)this->fields.restrictionClassSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(restrictionClassSprite, 0LL, 0LL) )
        {
          gameObject = this->fields.restrictionClassSprite;
          if ( !gameObject )
            goto LABEL_402;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
LABEL_368:
        baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
        {
          v198 = this->fields.baseSprite;
          baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetFormationBase(v198, frameType, baseDefaultUIAtlas, 0, 0LL);
        }
        base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
        {
          v201 = this->fields.base2Sprite;
          base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetFormationFrame(v201, frameType, base2DefaultUIAtlas, 0, 0LL);
        }
        eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (void *)UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v36 )
            goto LABEL_402;
          v204 = this->fields.eventUpValIcon;
          gameObject = System_Collections_Generic_List_object___ToArray(
                         v36,
                         (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
          if ( !v204 )
            goto LABEL_402;
          EventUpValIconComponent__Set(v204, (EventMargeItemUpValInfo_array *)gameObject, -1, -1, -1, 0LL);
          bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
            goto LABEL_396;
          gameObject = this->fields.bounusIcon;
          if ( !gameObject )
            goto LABEL_402;
          v206 = 0;
        }
        else
        {
          v207 = (UnityEngine_Object_o *)this->fields.bounusIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v207, 0LL, 0LL) )
          {
LABEL_396:
            baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
            {
              gameObject = this->fields.baseButton;
              if ( !gameObject )
                goto LABEL_402;
              (*(void (__fastcall **)(void *, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
                gameObject,
                0LL,
                1LL,
                *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
            }
            return;
          }
          gameObject = this->fields.bounusIcon;
          if ( !gameObject )
            goto LABEL_402;
          v206 = isEventUpVal;
        }
        ShiningIconComponent__Set_39658244((ShiningIconComponent_o *)gameObject, v206, 0LL);
        goto LABEL_396;
      }
      userServantEntity = item->fields.userServantEntity;
      if ( userServantEntity && UserServantEntity__IsEventJoin(userServantEntity, 0LL) )
      {
        gameObject = this->fields.supportSprite;
        if ( !gameObject )
          goto LABEL_402;
        v174 = &StringLiteral_20551/*"item/recover"*/;
      }
      else
      {
        gameObject = this->fields.supportSprite;
        if ( !gameObject )
          goto LABEL_402;
        if ( !item->fields.followerInfo )
        {
          v175 = 0LL;
          goto LABEL_294;
        }
        v174 = &StringLiteral_20592/*"java.net.ConnectException"*/;
      }
      v175 = (System_String_o *)*v174;
LABEL_294:
      UISprite__set_spriteName((UISprite_o *)gameObject, v175, 0LL);
      goto LABEL_295;
    }
    v134 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v134, 0LL, 0LL) )
    {
      gameObject = this->fields.servantFaceIcon;
      if ( !gameObject )
        goto LABEL_402;
      ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)gameObject, 0LL);
    }
    gameObject = this->fields.servantNarrowTexture;
    if ( gameObject )
    {
      UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0LL);
      v135 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v135, 0LL, 0LL) )
      {
        gameObject = this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_402;
        ServantClassIconComponent__Clear((ServantClassIconComponent_o *)gameObject, 0LL);
      }
      v136 = (UnityEngine_Object_o *)this->fields.levelLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v136, 0LL, 0LL) )
      {
        gameObject = this->fields.levelLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v137 = (UnityEngine_Object_o *)this->fields.raritySprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v137, 0LL, 0LL) )
      {
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
      }
      v138 = (UnityEngine_Object_o *)this->fields.attackLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v138, 0LL, 0LL) )
      {
        gameObject = this->fields.attackLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v139 = (UnityEngine_Object_o *)this->fields.hpLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v139, 0LL, 0LL) )
      {
        gameObject = this->fields.hpLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v140 = (UnityEngine_Object_o *)this->fields.costLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v140, 0LL, 0LL) )
      {
        gameObject = this->fields.costLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v141 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v141, 0LL, 0LL) )
      {
        gameObject = this->fields.skillListTreasureDevice;
        if ( !gameObject )
          goto LABEL_402;
        SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)gameObject, 0LL);
      }
      v142 = (UnityEngine_Object_o *)this->fields.appendSkillList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v142, 0LL, 0LL) )
      {
        gameObject = this->fields.appendSkillList;
        if ( !gameObject )
          goto LABEL_402;
        AppendSkillListComponent__Clear((AppendSkillListComponent_o *)gameObject, 0LL);
      }
      v143 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v143, 0LL, 0LL) )
      {
        gameObject = this->fields.svtCommandCardList;
        if ( !gameObject )
          goto LABEL_402;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0LL);
      }
      v144 = (UnityEngine_Object_o *)this->fields.supportSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v144, 0LL, 0LL) )
      {
        gameObject = this->fields.supportSprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
      }
      v145 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v145, 0LL, 0LL) )
      {
        gameObject = this->fields.noneEquipSprite;
        if ( !gameObject )
          goto LABEL_402;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = this->fields.equipSprite;
        if ( !gameObject )
          goto LABEL_402;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        v146 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v146, 0LL, 0LL) )
        {
          gameObject = this->fields.equipLimitCountSprite;
          if ( !gameObject )
            goto LABEL_402;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
      }
      v147 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v147, 0LL, 0LL) )
      {
        gameObject = this->fields.correctionIconSprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
      }
      WarBoardPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(this, item, v148);
      v149 = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v149, 0LL, 0LL) )
      {
        gameObject = this->fields.fixNpcMessageFrameSprite;
        if ( !gameObject )
          goto LABEL_402;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      v150 = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v150, 0LL, 0LL) )
      {
        gameObject = this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_402;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      isEventUpVal = 0;
      goto LABEL_368;
    }
    goto LABEL_402;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_402;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  v45 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
  {
    gameObject = this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_402;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_402;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_402;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_402;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    v46 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v46, 0LL, 0LL) )
    {
      gameObject = this->fields.equipLimitCountSprite;
      if ( gameObject )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          return;
        }
      }
      goto LABEL_402;
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
  UnityEngine_Object_o *restrictionClassSprite; // x20
  __int64 v22; // x1
  long double v23; // q0
  __int64 v24; // x0
  __int64 v25; // x0
  void *MasterData_object; // x0
  WarBoardIndividualityClassMaster_o *v27; // x20
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int v32; // w25
  __int64 v33; // x21
  System_Collections_Generic_List_int__o *v34; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x22
  WarBoardPartyOrganizationListViewItemDraw___c_c *v42; // x0
  System_Func_object__bool__o *_9__40_0; // x23
  Il2CppObject *v44; // x24
  struct WarBoardPartyOrganizationListViewItemDraw___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_IEnumerable_T__o *v52; // x22
  System_Action_object__o *v53; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_Int32_array *v55; // x0
  __int64 v56; // x8
  __int64 v57; // x8
  WarBoardPartyOrganizationListViewItemDraw_c *v58; // x0
  System_String_o *RestrictionClassSpriteNameFormat; // x20
  Il2CppObject *v60; // x0
  System_String_o *v61; // x20
  int v62; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C1FD21 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_RestrictionEntity__TypeInfo, item);
    sub_1C3B764(&Method_BasicHelper_ForEach_RestrictionEntity___, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___, v6);
    sub_1C3B764(&Method_System_Linq_Enumerable_Distinct_int___, v7);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v9);
    sub_1C3B764(&System_Func_RestrictionEntity__bool__TypeInfo, v10);
    sub_1C3B764(&int_TypeInfo, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v14);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15);
    sub_1C3B764(&Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__, v16);
    sub_1C3B764(
      &Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__,
      v17);
    sub_1C3B764(&WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo, v18);
    sub_1C3B764(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo, v19);
    sub_1C3B764(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v20);
    byte_4C1FD21 = 1;
  }
  restrictionClassSprite = (UnityEngine_Object_o *)this->fields.restrictionClassSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionClassSprite, 0LL, 0LL) )
  {
    v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
      v24 = sub_1C8D640(v23);
    v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1C8D640(v23);
    MasterData_object = **(void ***)(v25 + 184);
    if ( MasterData_object )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)MasterData_object,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
      if ( MasterData_object )
      {
        v27 = (WarBoardIndividualityClassMaster_o *)MasterData_object;
        MasterData_object = WarBoardIndividualityClassMaster__GetAllClassServantEntity(
                              (WarBoardIndividualityClassMaster_o *)MasterData_object,
                              0LL);
        if ( MasterData_object )
        {
          if ( item )
          {
            questRestrictionInfo = item->fields.questRestrictionInfo;
            v32 = *((_DWORD *)MasterData_object + 11);
            if ( questRestrictionInfo && questRestrictionInfo->fields.restrictionEntityList )
            {
              v33 = sub_1C3B9B0(WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v33, 0LL);
              v34 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v34,
                (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v33 )
                goto LABEL_36;
              *(_QWORD *)(v33 + 16) = v34;
              sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 16), (int64_t)v34, v35, v36, v37, v38, v39, v40);
              restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
              v42 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              if ( !WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
                v42 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              }
              _9__40_0 = (System_Func_object__bool__o *)v42->static_fields->__9__40_0;
              if ( !_9__40_0 )
              {
                if ( !v42->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v42);
                  v42 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
                }
                v44 = (Il2CppObject *)v42->static_fields->__9;
                _9__40_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_RestrictionEntity__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  _9__40_0,
                  v44,
                  Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__,
                  0LL);
                static_fields = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
                static_fields->__9__40_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__40_0;
                sub_1C3B708(
                  (PartyOrganizationUtility_o *)&static_fields->__9__40_0,
                  (int64_t)_9__40_0,
                  v46,
                  v47,
                  v48,
                  v49,
                  v50,
                  v51);
              }
              v52 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                                     restrictionEntityList,
                                                                     (System_Func_TSource__bool__o *)_9__40_0,
                                                                     (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
              v53 = (System_Action_object__o *)sub_1C3B9B0(System_Action_RestrictionEntity__TypeInfo);
              System_Action_object____ctor(
                v53,
                (Il2CppObject *)v33,
                Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__,
                0LL);
              BasicHelper__ForEach_object_(
                v52,
                (System_Action_T__o *)v53,
                (const MethodInfo_2FDCE70 *)Method_BasicHelper_ForEach_RestrictionEntity___);
              v54 = System_Linq_Enumerable__Distinct_int_(
                      *(System_Collections_Generic_IEnumerable_TSource__o **)(v33 + 16),
                      (const MethodInfo_300DEBC *)Method_System_Linq_Enumerable_Distinct_int___);
              v55 = System_Linq_Enumerable__ToArray_int_(
                      v54,
                      (const MethodInfo_302AB30 *)Method_System_Linq_Enumerable_ToArray_int___);
              MasterData_object = WarBoardIndividualityClassMaster__GetServantClassEntities(v27, v55, 0LL);
              if ( MasterData_object )
              {
                v56 = *((_QWORD *)MasterData_object + 3);
                if ( v56 )
                {
                  if ( !(_DWORD)v56 )
                    sub_1C3B9C8(MasterData_object, v22);
                  v57 = *((_QWORD *)MasterData_object + 4);
                  if ( !v57 )
                    goto LABEL_36;
                  v32 = *(_DWORD *)(v57 + 44);
                }
              }
            }
            v58 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            if ( !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
              v58 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            }
            RestrictionClassSpriteNameFormat = v58->static_fields->RestrictionClassSpriteNameFormat;
            v62 = v32;
            v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v28, v29, v30);
            MasterData_object = System_String__Format(RestrictionClassSpriteNameFormat, v60, 0LL);
            if ( this->fields.restrictionClassSprite )
            {
              v61 = (System_String_o *)MasterData_object;
              MasterData_object = UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)this->fields.restrictionClassSprite,
                                    0LL);
              if ( MasterData_object )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
                MasterData_object = this->fields.restrictionClassSprite;
                if ( MasterData_object )
                {
                  UISprite__set_spriteName((UISprite_o *)MasterData_object, v61, 0LL);
                  MasterData_object = this->fields.restrictionClassSprite;
                  if ( MasterData_object )
                  {
                    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)MasterData_object + 840LL))(
                      MasterData_object,
                      *(_QWORD *)(*(_QWORD *)MasterData_object + 848LL));
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
    sub_1C3B9C0(MasterData_object, v22);
  }
}


void __fastcall WarBoardPartyOrganizationListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C1FD24 & 1) == 0 )
  {
    sub_1C3B764(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo, v1);
    byte_4C1FD24 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct WarBoardPartyOrganizationListViewItemDraw___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
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
  if ( (byte_4C1FD25 & 1) == 0 )
  {
    this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)sub_1C3B764(
                                                                                  &Method_System_Collections_Generic_List_int__AddRange__,
                                                                                  x);
    byte_4C1FD25 = 1;
  }
  if ( !x
    || (this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)v4->fields.indivisualities) == 0LL )
  {
    sub_1C3B9C0(this, x);
  }
  System_Collections_Generic_List_int___AddRange(
    (System_Collections_Generic_List_int__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)x->fields.targetVals,
    (const MethodInfo_366EE54 *)Method_System_Collections_Generic_List_int__AddRange__);
}