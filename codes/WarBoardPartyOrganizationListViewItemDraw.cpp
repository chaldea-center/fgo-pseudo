void WarBoardPartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct WarBoardPartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4D2A3BA & 1) == 0 )
  {
    sub_1C94098(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C94098(&StringLiteral_18075/*"class2_{0}"*/);
    byte_4D2A3BA = 1;
  }
  WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields->RestrictionClassSpriteNameFormat = (struct System_String_o *)StringLiteral_18075/*"class2_{0}"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_18075/*"class2_{0}"*/,
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
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *baseSprite; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct UISprite_o *v13; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct UISprite_o *v22; // x8
  struct UIAtlas_o *v23; // x1
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4D2A3B5 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C94098(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A3B5 = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v13 = this->fields.baseSprite;
    if ( !v13 )
      goto LABEL_20;
    mAtlas = v13->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.baseDefaultUIAtlas,
      (int32_t)mAtlas,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(base2Sprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v22 = this->fields.base2Sprite;
    if ( v22 )
    {
      v23 = v22->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v23;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.base2DefaultUIAtlas,
        (int32_t)v23,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      goto LABEL_19;
    }
LABEL_20:
    sub_1C942F0(transform, v4);
  }
LABEL_19:
  v24 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v24;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.switchSkillUIList,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


void WarBoardPartyOrganizationListViewItemDraw__ClearItem(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20

  if ( (byte_4D2A3B6 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A3B6 = 1;
  }
  this->fields.linkItem = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.linkItem, 0, v2, v3, v4, v5, v6, v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantNarrowTexture;
  if ( !gameObject )
    goto LABEL_14;
  UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C942F0(gameObject, v10);
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
  UnityEngine_Object_o *eventUpValIcon; // x20
  UnityEngine_Object_o *bounusIcon; // x20
  UnityEngine_Object_o *correctionIconSprite; // x20

  if ( (byte_4D2A3B9 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A3B9 = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0, 0) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.eventUpValIcon;
    if ( !baseSprite )
      goto LABEL_46;
    EventUpValIconComponent__Set((EventUpValIconComponent_o *)baseSprite, 0, -1, -1, -1, 0);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0, 0) )
    {
      baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
      if ( !baseSprite )
        goto LABEL_46;
      ShiningIconComponent__Set_41861724((ShiningIconComponent_o *)baseSprite, 0, 0);
    }
  }
  correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C942F0(baseSprite, isDisp);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPartyOrganizationListViewItemDraw__SetItem(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *v11; // x20
  void *gameObject; // x0
  unsigned __int64 v13; // x1
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v17; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  UnityEngine_Object_o *v20; // x20
  UnityEngine_Object_o *v21; // x20
  UnityEngine_Object_o *servantFaceIcon; // x22
  int32_t CardImageLimitCount; // w22
  Il2CppObject *MasterData_object; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v28; // w22
  int32_t v29; // w23
  SkillInfo_array *v30; // x22
  System_String_o *v31; // x24
  int32_t strengthStatus; // w26
  int32_t lv; // w25
  SkillInfo_array *v34; // x0
  System_String_o *LevelList_42036424; // x0
  UnityEngine_Object_o *servantClassIcon; // x22
  UnityEngine_Object_o *levelLabel; // x22
  UILabel_o *v38; // x28
  UnityEngine_Object_o *raritySprite; // x22
  int32_t rarityId; // w28
  int32_t ExceedCount; // w29
  int32_t Level; // w0
  int32_t v43; // w22
  int32_t v44; // w23
  System_String_o *Icon_41192068; // x28
  Il2CppObject *Master_object; // x0
  int32_t v47; // w22
  ServantExceedMaster_o *v48; // x29
  int32_t RarityIcon; // w29
  Il2CppObject *v50; // x0
  int32_t v51; // w22
  ServantLvDetailMaster_o *v52; // x23
  int32_t v53; // w29
  struct FollowerInfo_o *followerInfo; // x8
  int imageSvtId; // w22
  UnityEngine_Object_o *v56; // x23
  ServantFaceIconComponent_o *v57; // x23
  int32_t v58; // w24
  Il2CppObject *v59; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // kr10_16
  int32_t v61; // w24
  SkillInfo_array *v62; // x22
  ServantLeaderInfo_o *v63; // x28
  SkillInfo_array *v64; // x22
  UISprite_o *v65; // x22
  float x; // s10
  float y; // s8
  float z; // s9
  int32_t v69; // w8
  UnityEngine_Object_o *attackLabel; // x22
  bool HasAtkBoost; // w0
  float v72; // s1 OVERLAPPED
  bool v73; // w8
  float v74; // s2
  float v75; // s0
  float v76; // s3
  UILabel_o *v77; // x28
  UnityEngine_Object_o *hpLabel; // x22
  bool HasHpBoost; // w0
  float v80; // s1 OVERLAPPED
  bool v81; // w8
  float v82; // s2
  float v83; // s0
  float v84; // s3
  UILabel_o *v85; // x28
  UnityEngine_Object_o *costLabel; // x22
  int32_t EquipCost; // w0
  UILabel_o *v88; // x28
  int32_t v89; // w29
  int32_t MainCost; // w0
  Il2CppObject *v91; // x22
  Il2CppObject *v92; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  __int64 v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  __int64 v103; // x8
  UnityEngine_Object_o *v104; // x22
  UnityEngine_Object_o *v105; // x22
  UnityEngine_Object_o *v106; // x22
  UnityEngine_Object_o *v107; // x22
  UnityEngine_Object_o *v108; // x22
  UnityEngine_Object_o *v109; // x22
  UnityEngine_Object_o *v110; // x22
  UnityEngine_Object_o *v111; // x22
  UnityEngine_Object_o *v112; // x22
  UnityEngine_Object_o *v113; // x22
  UnityEngine_Object_o *v114; // x22
  UnityEngine_Object_o *v115; // x22
  UnityEngine_Object_o *v116; // x22
  UnityEngine_Object_o *v117; // x22
  const MethodInfo *v118; // x2
  UnityEngine_Object_o *v119; // x21
  UnityEngine_Object_o *v120; // x21
  bool isEventUpVal; // w23
  UnityEngine_Object_o *appendSkillList; // x22
  int32_t v123; // w2
  int32_t v124; // w3
  System_String_o *v125; // x4
  int32_t v126; // w5
  int64_t v127; // x6
  System_String_o *v128; // x7
  __int64 v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  __int64 v132; // x8
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v134; // x0
  SwitchUIWidgetComponent_o *v135; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  System_Int32_array *v137; // x23
  ServantCommandCardListComponent_o *v138; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // kr20_16
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
  UILabel_o *v150; // x23
  UnityEngine_Object_o *noneEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr40_16
  int32_t v153; // w23
  UISprite_o *equipSprite; // x22
  UnityEngine_Object_o *v155; // x22
  int v156; // w24
  void *v157; // x23
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  UnityEngine_Object_o *correctionIconSprite; // x22
  struct EventMargeItemUpValInfo_array *v160; // x8
  float v161; // s8
  WarBoardPartyOrganizationListViewItemDraw_c *v162; // x0
  __int64 v163; // x8
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
  int32_t treasureDeviceNum; // [xsp+14h] [xbp-DCh]
  System_String_o *value; // [xsp+18h] [xbp-D8h]
  System_String_o *valuea; // [xsp+18h] [xbp-D8h]
  int32_t frameType; // [xsp+24h] [xbp-CCh]
  int32_t v183; // [xsp+28h] [xbp-C8h] BYREF
  int32_t v184; // [xsp+2Ch] [xbp-C4h] BYREF
  __int64 v185; // [xsp+30h] [xbp-C0h]
  float v186; // [xsp+38h] [xbp-B8h]
  __int64 v187; // [xsp+40h] [xbp-B0h] BYREF
  SkillInfo_array *v188; // [xsp+48h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *v189; // [xsp+50h] [xbp-A0h] BYREF
  SkillInfo_array *v190; // [xsp+58h] [xbp-98h] BYREF
  SkillInfo_array *v191; // [xsp+60h] [xbp-90h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-88h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+78h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v194; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v195; // 0:x0.16
  UnityEngine_Vector3_o v196; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v198; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2A3B7 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___78988968);
    sub_1C94098(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Rarity_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C94098(&StringLiteral_20416/*"icon_support_02"*/);
    sub_1C94098(&StringLiteral_800/*"+"*/);
    sub_1C94098(&StringLiteral_18378/*"correction_icon_"*/);
    sub_1C94098(&StringLiteral_20369/*"icon_eventjoin_02"*/);
    sub_1C94098(&StringLiteral_10329/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/);
    sub_1C94098(&StringLiteral_396/*"#,0"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2A3B7 = 1;
  }
  skillInfoList = 0;
  v191 = 0;
  tdInfo = 0;
  v189 = 0;
  v190 = 0;
  v187 = 0;
  v188 = 0;
  v186 = 0.0;
  v185 = 0;
  this->fields.linkItem = item;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.linkItem,
    (int32_t)item,
    mode,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !item )
    goto LABEL_402;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)item->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_59156264(
      v11,
      eventUpValItemList,
      (const MethodInfo_386A728 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___78988968);
  }
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_402;
  size = switchSkillUIList->fields._size;
  v17 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0, 0) )
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
  if ( UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0, 0) )
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
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_402;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( item->fields.userServantEntity )
    {
      servantFaceIcon = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(servantFaceIcon, 0, 0) )
      {
        gameObject = this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_402;
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
          0);
      }
      CardImageLimitCount = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0);
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_402;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(item, 0);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(SvtId, 0);
      if ( !MasterData_object )
        goto LABEL_402;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     (ServantLimitImageMaster_o *)MasterData_object,
                                     (int32_t)gameObject,
                                     CardImageLimitCount,
                                     0);
      servantNarrowTexture = this->fields.servantNarrowTexture;
      v28 = ServantImageLimitSealAfter;
      v194 = PartyOrganizationListViewItem__get_SvtId(item, 0);
      gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v194, 0);
      if ( !servantNarrowTexture )
        goto LABEL_402;
      UINarrowFigureTexture__SetCharacter(servantNarrowTexture, (int32_t)gameObject, v28, 0, 0);
      frameType = item->fields.frameType;
      gameObject = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(item, 0);
      if ( !item->fields.userServantEntity )
        goto LABEL_402;
      v29 = (int)gameObject;
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
        goto LABEL_402;
      UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)gameObject, &tdInfo, -1, v29, 0, 0);
      v30 = skillInfoList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__GetLevelList_42036424(v30, 0);
      if ( !tdInfo )
        goto LABEL_402;
      v31 = (System_String_o *)gameObject;
      gameObject = item->fields.userServantEntity;
      if ( !gameObject )
        goto LABEL_402;
      strengthStatus = tdInfo->fields.strengthStatus;
      lv = tdInfo->fields.lv;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      UserServantEntity__GetAppendPassiveSkillInfo_43984840((UserServantEntity_o *)gameObject, &v191, 0);
      v34 = v191;
    }
    else
    {
      followerInfo = item->fields.followerInfo;
      LevelList_42036424 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !followerInfo )
      {
        treasureDeviceNum = 0;
        strengthStatus = 0;
        lv = 0;
        frameType = 9;
        v31 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_54;
      }
      valuea = (System_String_o *)StringLiteral_1/*""*/;
      imageSvtId = followerInfo->fields.imageSvtId;
      v56 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v56, 0, 0) )
      {
        v57 = this->fields.servantFaceIcon;
        gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
        if ( !v57 )
          goto LABEL_402;
        ServantFaceIconComponent__Set_41848864(v57, (ServantLeaderInfo_o *)gameObject, 0, 0, 0, imageSvtId, 0);
      }
      v58 = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0);
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_402;
      v59 = DataManager__GetMasterData_object_(
              (DataManager_o *)gameObject,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v60 = PartyOrganizationListViewItem__get_SvtId(item, 0);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v60, 0);
      if ( !v59 )
        goto LABEL_402;
      v61 = ServantLimitImageMaster__GetServantImageLimitSealAfter(
              (ServantLimitImageMaster_o *)v59,
              (int32_t)gameObject,
              v58,
              0);
      if ( imageSvtId <= 0 )
      {
        v195 = PartyOrganizationListViewItem__get_SvtId(item, 0);
        imageSvtId = BasicHelper__DecryptValue_44935692(v195, 0);
      }
      gameObject = this->fields.servantNarrowTexture;
      if ( !gameObject )
        goto LABEL_402;
      UINarrowFigureTexture__SetCharacter((UINarrowFigureTexture_o *)gameObject, imageSvtId, v61, 0, 0);
      frameType = item->fields.frameType;
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
      if ( !gameObject )
        goto LABEL_402;
      ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)gameObject, &v190, 0);
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
      if ( !gameObject )
        goto LABEL_402;
      ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)gameObject, &v189, 0);
      v62 = v190;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__GetLevelList_42036424(v62, 0);
      if ( !v189 )
        goto LABEL_402;
      lv = v189->fields.lv;
      strengthStatus = v189->fields.strengthStatus;
      v31 = (System_String_o *)gameObject;
      treasureDeviceNum = v189->fields.treasureDeviceNum;
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
      if ( !item->fields.followerInfo )
        goto LABEL_402;
      v63 = (ServantLeaderInfo_o *)gameObject;
      gameObject = (void *)FollowerInfo__get_IsNpc(item->fields.followerInfo, 0);
      if ( !v63 )
        goto LABEL_402;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_44373608(v63, &v188, (unsigned __int8)gameObject & 1, 0);
      v64 = v188;
      if ( !v188 )
      {
        LevelList_42036424 = valuea;
        goto LABEL_54;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v34 = v64;
    }
    LevelList_42036424 = LocalizationManager__GetLevelList_42036424(v34, 0);
LABEL_54:
    if ( item->fields.userServantEntity || item->fields.followerInfo )
    {
      value = LevelList_42036424;
      servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0, 0) )
      {
        gameObject = this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_402;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(levelLabel, 0, 0) )
      {
        v38 = this->fields.levelLabel;
        HIDWORD(v187) = PartyOrganizationListViewItem__get_Level(item, 0);
        gameObject = System_Int32__ToString((int32_t)&v187 + 4, 0);
        if ( !v38 )
          goto LABEL_402;
        UILabel__set_text(v38, (System_String_o *)gameObject, 0);
      }
      raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
      {
        rarityId = item->fields.rarityId;
        ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(item, 0);
        Level = PartyOrganizationListViewItem__get_Level(item, 0);
        v43 = item->fields.rarityId;
        v44 = Level;
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        Icon_41192068 = Rarity__getIcon_41192068(rarityId, ExceedCount, v44, v43, 0);
        if ( PartyOrganizationListViewItem__get_ExceedCount(item, 0) < 1 )
        {
          v53 = 0;
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
          v47 = item->fields.rarityId;
          v48 = (ServantExceedMaster_o *)Master_object;
          gameObject = (void *)PartyOrganizationListViewItem__get_ExceedCount(item, 0);
          if ( !v48 )
            goto LABEL_402;
          RarityIcon = ServantExceedMaster__GetRarityIcon(v48, v47, (int32_t)gameObject, 0, 0, 0);
          v50 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
          v51 = item->fields.rarityId;
          v52 = (ServantLvDetailMaster_o *)v50;
          gameObject = (void *)PartyOrganizationListViewItem__get_Level(item, 0);
          if ( !v52 )
            goto LABEL_402;
          v53 = ServantLvDetailMaster__GetRarityIcon(v52, v51, (int32_t)gameObject, RarityIcon, 0, 0);
        }
        v65 = this->fields.raritySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( v53 >= 3 )
          AtlasManager__SetEventSprite(v65, Icon_41192068, 0);
        else
          AtlasManager__SetCommon(v65, 0);
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, Icon_41192068, 0);
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_402;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)gameObject + 840LL))(
          gameObject,
          *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
        x = this->fields.baseRarityPosition.fields.x;
        y = this->fields.baseRarityPosition.fields.y;
        z = this->fields.baseRarityPosition.fields.z;
        v69 = PartyOrganizationListViewItem__get_ExceedCount(item, 0);
        gameObject = this->fields.raritySprite;
        if ( v69 >= 1 )
          x = x + 1.0;
        if ( !gameObject )
          goto LABEL_402;
        gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_402;
        v196.fields.x = x;
        v196.fields.y = y;
        v196.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v196, 0);
      }
      attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(attackLabel, 0, 0) )
      {
        HasAtkBoost = PartyOrganizationListViewItem__HasAtkBoost(item, 0);
        v72 = 0.92157;
        v73 = HasAtkBoost;
        gameObject = this->fields.attackLabel;
        if ( v73 )
          v74 = 0.015686;
        else
          v74 = 1.0;
        if ( !v73 )
          v72 = 1.0;
        if ( !gameObject )
          goto LABEL_402;
        v75 = 1.0;
        v76 = 1.0;
        UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v72 - 1), 0);
        v77 = this->fields.attackLabel;
        HIDWORD(v187) = PartyOrganizationListViewItem__get_MargeAtk(item, 0);
        gameObject = System_Int32__ToString_65926240((int32_t)&v187 + 4, (System_String_o *)StringLiteral_396/*"#,0"*/, 0);
        if ( !v77 )
          goto LABEL_402;
        UILabel__set_text(v77, (System_String_o *)gameObject, 0);
      }
      hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(hpLabel, 0, 0) )
      {
        HasHpBoost = PartyOrganizationListViewItem__HasHpBoost(item, 0);
        v80 = 0.92157;
        v81 = HasHpBoost;
        gameObject = this->fields.hpLabel;
        if ( v81 )
          v82 = 0.015686;
        else
          v82 = 1.0;
        if ( !v81 )
          v80 = 1.0;
        if ( !gameObject )
          goto LABEL_402;
        v83 = 1.0;
        v84 = 1.0;
        UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v80 - 1), 0);
        v85 = this->fields.hpLabel;
        HIDWORD(v187) = PartyOrganizationListViewItem__get_MargeHp(item, 0);
        gameObject = System_Int32__ToString_65926240((int32_t)&v187 + 4, (System_String_o *)StringLiteral_396/*"#,0"*/, 0);
        if ( !v85 )
          goto LABEL_402;
        UILabel__set_text(v85, (System_String_o *)gameObject, 0);
      }
      costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(costLabel, 0, 0) )
      {
        EquipCost = PartyOrganizationListViewItem__get_EquipCost(item, 0);
        v88 = this->fields.costLabel;
        v89 = EquipCost;
        MainCost = PartyOrganizationListViewItem__get_MainCost(item, 0);
        if ( v89 < 0 )
        {
          HIDWORD(v187) = MainCost;
          gameObject = System_Int32__ToString((int32_t)&v187 + 4, 0);
          if ( !v88 )
            goto LABEL_402;
        }
        else
        {
          v184 = MainCost;
          v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v184);
          v183 = v89;
          v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v183);
          gameObject = System_String__Concat_64455760(v91, (Il2CppObject *)StringLiteral_800/*"+"*/, v92, 0);
          if ( !v88 )
            goto LABEL_402;
        }
        UILabel__set_text(v88, (System_String_o *)gameObject, 0);
      }
      skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0, 0) )
      {
        gameObject = this->fields.skillListTreasureDevice;
        if ( !gameObject )
          goto LABEL_402;
        SkillListTreasureDeviceComponent__Set(
          (SkillListTreasureDeviceComponent_o *)gameObject,
          v31,
          lv,
          strengthStatus,
          treasureDeviceNum,
          0,
          0,
          0);
        if ( !System_String__IsNullOrEmpty(v31, 0) )
        {
          gameObject = this->fields.switchSkillUIList;
          if ( gameObject )
          {
            v13 = (unsigned __int64)this->fields.skillInfoUiWidget;
            v100 = *((_QWORD *)gameObject + 2);
            v101 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++*((_DWORD *)gameObject + 7);
            if ( !v100 )
              goto LABEL_402;
            v102 = *((int *)gameObject + 6);
            if ( (unsigned int)v102 >= *(_DWORD *)(v100 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)gameObject,
                (Il2CppObject *)v13,
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
            }
            else
            {
              v103 = v100 + 8 * v102;
              *((_DWORD *)gameObject + 6) = v102 + 1;
              *(_QWORD *)(v103 + 32) = v13;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v103 + 32), v13, v94, v95, v96, v97, v98, v99);
            }
          }
        }
      }
      appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(appendSkillList, 0, 0) )
      {
        if ( System_String__IsNullOrEmpty(value, 0) )
        {
          gameObject = this->fields.appendSkillList;
          if ( !gameObject )
            goto LABEL_402;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        else
        {
          gameObject = this->fields.switchSkillUIList;
          if ( gameObject )
          {
            v13 = (unsigned __int64)this->fields.appendSkillInfoUiWidget;
            v129 = *((_QWORD *)gameObject + 2);
            v130 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++*((_DWORD *)gameObject + 7);
            if ( !v129 )
              goto LABEL_402;
            v131 = *((int *)gameObject + 6);
            if ( (unsigned int)v131 >= *(_DWORD *)(v129 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)gameObject,
                (Il2CppObject *)v13,
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
            }
            else
            {
              v132 = v129 + 8 * v131;
              *((_DWORD *)gameObject + 6) = v131 + 1;
              *(_QWORD *)(v132 + 32) = v13;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v132 + 32), v13, v123, v124, v125, v126, v127, v128);
            }
          }
          gameObject = this->fields.appendSkillList;
          if ( !gameObject )
            goto LABEL_402;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          gameObject = this->fields.appendSkillList;
          if ( !gameObject )
            goto LABEL_402;
          AppendSkillListComponent__Set((AppendSkillListComponent_o *)gameObject, value, 0);
        }
      }
      switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0, 0) )
      {
        v134 = this->fields.switchSkillUIList;
        if ( v134 )
        {
          v135 = this->fields.switchSkillInfo;
          gameObject = System_Collections_Generic_List_object___ToArray(
                         (System_Collections_Generic_List_object__o *)v134,
                         (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
          if ( !v135 )
            goto LABEL_402;
          SwitchUIWidgetComponent__Set(v135, (UIWidget_array *)gameObject, 0, 0);
        }
      }
      svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0, 0) )
      {
        if ( item->fields.followerInfo )
        {
          if ( PartyOrganizationListViewItem__get_ServantLeader(item, 0) )
          {
            gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
            if ( !gameObject )
              goto LABEL_402;
            v137 = (System_Int32_array *)*((_QWORD *)gameObject + 27);
          }
          else
          {
            v137 = 0;
          }
          v140 = this->fields.svtCommandCardList;
          v141 = PartyOrganizationListViewItem__get_SvtId(item, 0);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v141, 0);
          if ( v140 )
          {
            ServantCommandCardListComponent__Set_41833880(
              v140,
              (int32_t)gameObject,
              v137,
              item->fields.commandCodeIdList,
              2,
              0,
              0);
            goto LABEL_282;
          }
LABEL_402:
          sub_1C942F0(gameObject, v13);
        }
        v138 = this->fields.svtCommandCardList;
        v139 = PartyOrganizationListViewItem__get_SvtId(item, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v139, 0);
        if ( !v138 )
          goto LABEL_402;
        ServantCommandCardListComponent__Set_41834124(
          v138,
          (int32_t)gameObject,
          item->fields.commandCodeIdList,
          2,
          0,
          0);
      }
LABEL_282:
      supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(supportSprite, 0, 0) )
      {
LABEL_295:
        fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0, 0) )
        {
          gameObject = this->fields.fixNpcMessageFrameSprite;
          if ( !gameObject )
            goto LABEL_402;
          v147 = item->fields.followerInfo;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v147 != 0, 0);
        }
        fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0, 0) )
        {
          gameObject = this->fields.fixNpcMessageText;
          if ( !gameObject )
            goto LABEL_402;
          v149 = item->fields.followerInfo;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_402;
          if ( v149 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            v150 = this->fields.fixNpcMessageText;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10329/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0);
            if ( !v150 )
              goto LABEL_402;
            UILabel__set_text(v150, (System_String_o *)gameObject, 0);
          }
          else
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          }
        }
        noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(noneEquipSprite, 0, 0) )
          goto LABEL_342;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(item, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(EquipSvtId, 0);
        if ( !this->fields.noneEquipSprite )
          goto LABEL_402;
        v153 = (int)gameObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.noneEquipSprite, 0);
        if ( !gameObject )
          goto LABEL_402;
        if ( v153 < 1 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          gameObject = this->fields.equipSprite;
          if ( !gameObject )
            goto LABEL_402;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
            goto LABEL_342;
          gameObject = this->fields.equipLimitCountSprite;
          if ( !gameObject )
            goto LABEL_402;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_402;
          LOBYTE(v13) = 0;
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          gameObject = this->fields.equipSprite;
          if ( !gameObject )
            goto LABEL_402;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          equipSprite = (UISprite_o *)this->fields.equipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEquipFace(equipSprite, v153, 0, 0);
          v155 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v155, 0, 0) )
            goto LABEL_342;
          gameObject = (void *)PartyOrganizationListViewItem__get_EquipLimitCountMax(item, 0);
          if ( !this->fields.equipLimitCountSprite )
            goto LABEL_402;
          v156 = (int)gameObject;
          gameObject = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                         0);
          v157 = gameObject;
          if ( v156 < 1 )
          {
            v13 = 0;
          }
          else
          {
            gameObject = (void *)PartyOrganizationListViewItem__get_EquipLimitCount(item, 0);
            v13 = (int)gameObject >= v156;
          }
          if ( !v157 )
            goto LABEL_402;
          gameObject = v157;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v13, 0);
LABEL_342:
        correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
        isEventUpVal = item->fields.isEventUpVal;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0, 0) )
        {
          LODWORD(v187) = PartyOrganizationListViewItem__GetCorrectionIconId(item, 0);
          gameObject = this->fields.correctionIconSprite;
          if ( !gameObject )
            goto LABEL_402;
          if ( (v187 & 0x80000000) != 0 )
          {
            UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
          }
          else
          {
            gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_402;
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
            *(float *)&v185 = localPosition.fields.x;
            v186 = localPosition.fields.z;
            v160 = item->fields.eventUpValItemList;
            v161 = localPosition.fields.x;
            if ( v160 && v160->max_length )
            {
              v162 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              if ( !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
                v162 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              }
              v163 = 16;
            }
            else
            {
              v162 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              if ( !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
                v162 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              }
              v163 = 12;
            }
            *((float *)&v185 + 1) = (float)*(int *)((char *)&v162->static_fields->RestrictionClassSpriteNameFormat + v163);
            gameObject = this->fields.correctionIconSprite;
            if ( !gameObject )
              goto LABEL_402;
            gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_402;
            v198.fields.y = *((float *)&v185 + 1);
            v198.fields.z = v186;
            v198.fields.x = v161;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v198, 0);
            v164 = this->fields.correctionIconSprite;
            v165 = System_Int32__ToString((int32_t)&v187, 0);
            gameObject = System_String__Concat_64417744((System_String_o *)StringLiteral_18378/*"correction_icon_"*/, v165, 0);
            if ( !v164 )
              goto LABEL_402;
            UISprite__set_spriteName(v164, (System_String_o *)gameObject, 0);
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
        if ( UnityEngine_Object__op_Inequality(restrictionClassSprite, 0, 0) )
        {
          gameObject = this->fields.restrictionClassSprite;
          if ( !gameObject )
            goto LABEL_402;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
LABEL_368:
        baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
        {
          v168 = this->fields.baseSprite;
          baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetFormationBase(v168, frameType, baseDefaultUIAtlas, 0, 0, 0, 0);
        }
        base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(base2Sprite, 0, 0) )
        {
          v171 = this->fields.base2Sprite;
          base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetFormationFrame(v171, frameType, base2DefaultUIAtlas, 0, 0, 0);
        }
        eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (void *)UnityEngine_Object__op_Inequality(eventUpValIcon, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_402;
          v174 = this->fields.eventUpValIcon;
          gameObject = System_Collections_Generic_List_object___ToArray(
                         v11,
                         (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
          if ( !v174 )
            goto LABEL_402;
          EventUpValIconComponent__Set(v174, (EventMargeItemUpValInfo_array *)gameObject, -1, -1, -1, 0);
          bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(bounusIcon, 0, 0) )
            goto LABEL_396;
          gameObject = this->fields.bounusIcon;
          if ( !gameObject )
            goto LABEL_402;
          v176 = 0;
        }
        else
        {
          v177 = (UnityEngine_Object_o *)this->fields.bounusIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v177, 0, 0) )
          {
LABEL_396:
            baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
            {
              gameObject = this->fields.baseButton;
              if ( !gameObject )
                goto LABEL_402;
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
            goto LABEL_402;
          v176 = isEventUpVal;
        }
        ShiningIconComponent__Set_41861724((ShiningIconComponent_o *)gameObject, v176, 0);
        goto LABEL_396;
      }
      userServantEntity = item->fields.userServantEntity;
      if ( userServantEntity && UserServantEntity__IsEventJoin(userServantEntity, 0) )
      {
        gameObject = this->fields.supportSprite;
        if ( !gameObject )
          goto LABEL_402;
        v144 = &StringLiteral_20369/*"icon_eventjoin_02"*/;
      }
      else
      {
        gameObject = this->fields.supportSprite;
        if ( !gameObject )
          goto LABEL_402;
        if ( !item->fields.followerInfo )
        {
          v145 = 0;
          goto LABEL_294;
        }
        v144 = &StringLiteral_20416/*"icon_support_02"*/;
      }
      v145 = (System_String_o *)*v144;
LABEL_294:
      UISprite__set_spriteName((UISprite_o *)gameObject, v145, 0);
      goto LABEL_295;
    }
    v104 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v104, 0, 0) )
    {
      gameObject = this->fields.servantFaceIcon;
      if ( !gameObject )
        goto LABEL_402;
      ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)gameObject, 0);
    }
    gameObject = this->fields.servantNarrowTexture;
    if ( gameObject )
    {
      UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0);
      v105 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v105, 0, 0) )
      {
        gameObject = this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_402;
        ServantClassIconComponent__Clear((ServantClassIconComponent_o *)gameObject, 0);
      }
      v106 = (UnityEngine_Object_o *)this->fields.levelLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v106, 0, 0) )
      {
        gameObject = this->fields.levelLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
      v107 = (UnityEngine_Object_o *)this->fields.raritySprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v107, 0, 0) )
      {
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
      }
      v108 = (UnityEngine_Object_o *)this->fields.attackLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v108, 0, 0) )
      {
        gameObject = this->fields.attackLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
      v109 = (UnityEngine_Object_o *)this->fields.hpLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v109, 0, 0) )
      {
        gameObject = this->fields.hpLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
      v110 = (UnityEngine_Object_o *)this->fields.costLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v110, 0, 0) )
      {
        gameObject = this->fields.costLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
      v111 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v111, 0, 0) )
      {
        gameObject = this->fields.skillListTreasureDevice;
        if ( !gameObject )
          goto LABEL_402;
        SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)gameObject, 0);
      }
      v112 = (UnityEngine_Object_o *)this->fields.appendSkillList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v112, 0, 0) )
      {
        gameObject = this->fields.appendSkillList;
        if ( !gameObject )
          goto LABEL_402;
        AppendSkillListComponent__Clear((AppendSkillListComponent_o *)gameObject, 0);
      }
      v113 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v113, 0, 0) )
      {
        gameObject = this->fields.svtCommandCardList;
        if ( !gameObject )
          goto LABEL_402;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0);
      }
      v114 = (UnityEngine_Object_o *)this->fields.supportSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v114, 0, 0) )
      {
        gameObject = this->fields.supportSprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
      }
      v115 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v115, 0, 0) )
      {
        gameObject = this->fields.noneEquipSprite;
        if ( !gameObject )
          goto LABEL_402;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        gameObject = this->fields.equipSprite;
        if ( !gameObject )
          goto LABEL_402;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        v116 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v116, 0, 0) )
        {
          gameObject = this->fields.equipLimitCountSprite;
          if ( !gameObject )
            goto LABEL_402;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
      }
      v117 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v117, 0, 0) )
      {
        gameObject = this->fields.correctionIconSprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
      }
      WarBoardPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(this, item, v118);
      v119 = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v119, 0, 0) )
      {
        gameObject = this->fields.fixNpcMessageFrameSprite;
        if ( !gameObject )
          goto LABEL_402;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      }
      v120 = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v120, 0, 0) )
      {
        gameObject = this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_402;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        gameObject = this->fields.fixNpcMessageText;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
      isEventUpVal = 0;
      goto LABEL_368;
    }
    goto LABEL_402;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_402;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  v20 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
  {
    gameObject = this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_402;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_402;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_402;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_402;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    v21 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v21, 0, 0) )
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
      goto LABEL_402;
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
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int datalist_high; // w25
  __int64 v14; // x21
  System_Collections_Generic_List_int__o *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x22
  WarBoardPartyOrganizationListViewItemDraw___c_c *v23; // x0
  System_Func_object__bool__o *_9__40_0; // x23
  Il2CppObject *v25; // x24
  struct WarBoardPartyOrganizationListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_IEnumerable_T__o *v33; // x22
  System_Action_object__o *v34; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Int32_array *v36; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  __int64 v38; // x8
  WarBoardPartyOrganizationListViewItemDraw_c *v39; // x0
  System_String_o *RestrictionClassSpriteNameFormat; // x20
  Il2CppObject *v41; // x0
  System_String_o *v42; // x20
  int v43; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2A3B8 & 1) == 0 )
  {
    sub_1C94098(&System_Action_RestrictionEntity__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_RestrictionEntity___);
    sub_1C94098(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
    sub_1C94098(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C94098(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C94098(&Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__);
    sub_1C94098(&Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__);
    sub_1C94098(&WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo);
    sub_1C94098(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
    sub_1C94098(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
    byte_4D2A3B8 = 1;
  }
  restrictionClassSprite = (UnityEngine_Object_o *)this->fields.restrictionClassSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionClassSprite, 0, 0) )
  {
    v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C6A12C(v7);
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C6A12C(v7);
    MasterData_object = **(DataManager_o ***)(v9 + 184);
    if ( MasterData_object )
    {
      MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                             MasterData_object,
                                             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
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
              v14 = sub_1C942E4(WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v14, 0);
              v15 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v15,
                (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v14 )
                goto LABEL_36;
              *(_QWORD *)(v14 + 16) = v15;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v14 + 16), (int32_t)v15, v16, v17, v18, v19, v20, v21);
              restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
              v23 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              if ( !WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
                v23 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              }
              _9__40_0 = (System_Func_object__bool__o *)v23->static_fields->__9__40_0;
              if ( !_9__40_0 )
              {
                if ( !v23->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v23);
                  v23 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
                }
                v25 = (Il2CppObject *)v23->static_fields->__9;
                _9__40_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RestrictionEntity__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  _9__40_0,
                  v25,
                  Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__,
                  0);
                static_fields = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
                static_fields->__9__40_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__40_0;
                sub_1C9403C(
                  (GrandQuestFolderBoardItem_o *)&static_fields->__9__40_0,
                  (int32_t)_9__40_0,
                  v27,
                  v28,
                  v29,
                  v30,
                  v31,
                  v32);
              }
              v33 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                                     restrictionEntityList,
                                                                     (System_Func_TSource__bool__o *)_9__40_0,
                                                                     (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
              v34 = (System_Action_object__o *)sub_1C942E4(System_Action_RestrictionEntity__TypeInfo);
              System_Action_object____ctor(
                v34,
                (Il2CppObject *)v14,
                Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__,
                0);
              BasicHelper__ForEach_object_(
                v33,
                (System_Action_T__o *)v34,
                (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_RestrictionEntity___);
              v35 = System_Linq_Enumerable__Distinct_int_(
                      *(System_Collections_Generic_IEnumerable_TSource__o **)(v14 + 16),
                      (const MethodInfo_31BF694 *)Method_System_Linq_Enumerable_Distinct_int___);
              v36 = System_Linq_Enumerable__ToArray_int_(
                      v35,
                      (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
              MasterData_object = (DataManager_o *)WarBoardIndividualityClassMaster__GetServantClassEntities(
                                                     v11,
                                                     v36,
                                                     0);
              if ( MasterData_object )
              {
                m_CancellationTokenSource = MasterData_object->fields.m_CancellationTokenSource;
                if ( m_CancellationTokenSource )
                {
                  if ( !(_DWORD)m_CancellationTokenSource )
                    sub_1C942F8(MasterData_object);
                  v38 = *(_QWORD *)&MasterData_object->fields._DispLog;
                  if ( !v38 )
                    goto LABEL_36;
                  datalist_high = *(_DWORD *)(v38 + 44);
                }
              }
            }
            v39 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            if ( !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
              v39 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            }
            RestrictionClassSpriteNameFormat = v39->static_fields->RestrictionClassSpriteNameFormat;
            v43 = datalist_high;
            v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
            MasterData_object = (DataManager_o *)System_String__Format(RestrictionClassSpriteNameFormat, v41, 0);
            if ( this->fields.restrictionClassSprite )
            {
              v42 = (System_String_o *)MasterData_object;
              MasterData_object = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this->fields.restrictionClassSprite,
                                                     0);
              if ( MasterData_object )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0);
                MasterData_object = (DataManager_o *)this->fields.restrictionClassSprite;
                if ( MasterData_object )
                {
                  UISprite__set_spriteName((UISprite_o *)MasterData_object, v42, 0);
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
    sub_1C942F0(MasterData_object, v6);
  }
}


void WarBoardPartyOrganizationListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2A3BB & 1) == 0 )
  {
    sub_1C94098(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
    byte_4D2A3BB = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct WarBoardPartyOrganizationListViewItemDraw___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields,
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
    sub_1C942F0(this, 0);
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
  if ( (byte_4D2A3BC & 1) == 0 )
  {
    this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)sub_1C94098(&Method_System_Collections_Generic_List_int__AddRange__);
    byte_4D2A3BC = 1;
  }
  if ( !x
    || (this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)v4->fields.indivisualities) == 0 )
  {
    sub_1C942F0(this, x);
  }
  System_Collections_Generic_List_int___AddRange(
    (System_Collections_Generic_List_int__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)x->fields.targetVals,
    (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__);
}