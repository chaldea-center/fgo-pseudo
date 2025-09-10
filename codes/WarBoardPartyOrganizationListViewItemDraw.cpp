void WarBoardPartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct WarBoardPartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4C24F41 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C2D490(&StringLiteral_17977/*"class2_{0}"*/);
    byte_4C24F41 = 1;
  }
  WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields->RestrictionClassSpriteNameFormat = (struct System_String_o *)StringLiteral_17977/*"class2_{0}"*/;
  sub_1C2D434(
    (CGThumbnailListItem_o *)WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_17977/*"class2_{0}"*/,
    v1,
    v2);
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
  const MethodInfo *v8; // x3
  struct UISprite_o *v9; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UISprite_o *v14; // x8
  struct UIAtlas_o *v15; // x1
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C24F3C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24F3C = 1;
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
    v9 = this->fields.baseSprite;
    if ( !v9 )
      goto LABEL_20;
    mAtlas = v9->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseDefaultUIAtlas, (int32_t)mAtlas, v7, v8);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(base2Sprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v14 = this->fields.base2Sprite;
    if ( v14 )
    {
      v15 = v14->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v15;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.base2DefaultUIAtlas, (int32_t)v15, v12, v13);
      goto LABEL_19;
    }
LABEL_20:
    sub_1C2D6EC(transform, v4);
  }
LABEL_19:
  v16 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v16;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.switchSkillUIList, (int32_t)v16, v17, v18);
}


void WarBoardPartyOrganizationListViewItemDraw__ClearItem(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20

  if ( (byte_4C24F3D & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24F3D = 1;
  }
  this->fields.linkItem = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.linkItem, 0, v2, v3);
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
    sub_1C2D6EC(gameObject, v6);
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

  if ( (byte_4C24F40 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24F40 = 1;
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
      ShiningIconComponent__Set_40800416((ShiningIconComponent_o *)baseSprite, 0, 0);
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
    sub_1C2D6EC(baseSprite, isDisp);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPartyOrganizationListViewItemDraw__SetItem(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  void *gameObject; // x0
  unsigned __int64 v9; // x1
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v13; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Object_o *v17; // x20
  UnityEngine_Object_o *servantFaceIcon; // x22
  int32_t CardImageLimitCount; // w22
  Il2CppObject *MasterData_object; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v24; // w22
  int32_t v25; // w23
  SkillInfo_array *v26; // x22
  System_String_o *v27; // x24
  int32_t strengthStatus; // w26
  int32_t lv; // w25
  SkillInfo_array *v30; // x0
  System_String_o *LevelList_41056784; // x0
  UnityEngine_Object_o *servantClassIcon; // x22
  UnityEngine_Object_o *levelLabel; // x22
  UILabel_o *v34; // x28
  UnityEngine_Object_o *raritySprite; // x22
  int32_t rarityId; // w28
  int32_t ExceedCount; // w29
  int32_t Level; // w0
  int32_t v39; // w22
  int32_t v40; // w23
  System_String_o *Icon_40221568; // x28
  Il2CppObject *Master_object; // x0
  int32_t v43; // w22
  ServantExceedMaster_o *v44; // x29
  int32_t RarityIcon; // w29
  Il2CppObject *v46; // x0
  int32_t v47; // w22
  ServantLvDetailMaster_o *v48; // x23
  int32_t v49; // w29
  struct FollowerInfo_o *followerInfo; // x8
  int imageSvtId; // w22
  UnityEngine_Object_o *v52; // x23
  ServantFaceIconComponent_o *v53; // x23
  int32_t v54; // w24
  Il2CppObject *v55; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // kr10_16
  int32_t v57; // w24
  SkillInfo_array *v58; // x22
  ServantLeaderInfo_o *v59; // x28
  SkillInfo_array *v60; // x22
  UISprite_o *v61; // x22
  float x; // s10
  float y; // s8
  float z; // s9
  int32_t v65; // w8
  UnityEngine_Object_o *attackLabel; // x22
  bool HasAtkBoost; // w0
  float v68; // s1 OVERLAPPED
  bool v69; // w8
  float v70; // s2
  float v71; // s0
  float v72; // s3
  UILabel_o *v73; // x28
  UnityEngine_Object_o *hpLabel; // x22
  bool HasHpBoost; // w0
  float v76; // s1 OVERLAPPED
  bool v77; // w8
  float v78; // s2
  float v79; // s0
  float v80; // s3
  UILabel_o *v81; // x28
  UnityEngine_Object_o *costLabel; // x22
  int32_t EquipCost; // w0
  UILabel_o *v84; // x28
  int32_t v85; // w29
  int32_t MainCost; // w0
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  Il2CppObject *v90; // x22
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  Il2CppObject *v94; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  __int64 v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  __int64 v101; // x8
  UnityEngine_Object_o *v102; // x22
  UnityEngine_Object_o *v103; // x22
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
  const MethodInfo *v116; // x2
  UnityEngine_Object_o *v117; // x21
  UnityEngine_Object_o *v118; // x21
  bool isEventUpVal; // w23
  UnityEngine_Object_o *appendSkillList; // x22
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  __int64 v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  __int64 v126; // x8
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v128; // x0
  SwitchUIWidgetComponent_o *v129; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  System_Int32_array *v131; // x23
  ServantCommandCardListComponent_o *v132; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // kr20_16
  ServantCommandCardListComponent_o *v134; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // kr30_16
  UnityEngine_Object_o *supportSprite; // x22
  UserServantEntity_o *userServantEntity; // x0
  __int64 *v138; // x8
  System_String_o *v139; // x1
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  struct FollowerInfo_o *v141; // x22
  UnityEngine_Object_o *fixNpcMessageText; // x22
  struct FollowerInfo_o *v143; // x22
  UILabel_o *v144; // x23
  UnityEngine_Object_o *noneEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr40_16
  int32_t v147; // w23
  UISprite_o *equipSprite; // x22
  UnityEngine_Object_o *v149; // x22
  int v150; // w24
  void *v151; // x23
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  UnityEngine_Object_o *correctionIconSprite; // x22
  struct EventMargeItemUpValInfo_array *v154; // x8
  float v155; // s8
  WarBoardPartyOrganizationListViewItemDraw_c *v156; // x0
  __int64 v157; // x8
  UISprite_o *v158; // x21
  System_String_o *v159; // x0
  UnityEngine_Object_o *restrictionClassSprite; // x21
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v162; // x22
  UIAtlas_o *baseDefaultUIAtlas; // x21
  UnityEngine_Object_o *base2Sprite; // x21
  UISprite_o *v165; // x22
  UIAtlas_o *base2DefaultUIAtlas; // x21
  UnityEngine_Object_o *eventUpValIcon; // x21
  EventUpValIconComponent_o *v168; // x21
  UnityEngine_Object_o *bounusIcon; // x20
  bool v170; // w1
  UnityEngine_Object_o *v171; // x20
  UnityEngine_Object_o *baseButton; // x20
  int32_t treasureDeviceNum; // [xsp+14h] [xbp-DCh]
  System_String_o *value; // [xsp+18h] [xbp-D8h]
  System_String_o *valuea; // [xsp+18h] [xbp-D8h]
  int32_t frameType; // [xsp+24h] [xbp-CCh]
  int32_t v177; // [xsp+28h] [xbp-C8h] BYREF
  int32_t v178; // [xsp+2Ch] [xbp-C4h] BYREF
  __int64 v179; // [xsp+30h] [xbp-C0h]
  float v180; // [xsp+38h] [xbp-B8h]
  __int64 v181; // [xsp+40h] [xbp-B0h] BYREF
  SkillInfo_array *v182; // [xsp+48h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *v183; // [xsp+50h] [xbp-A0h] BYREF
  SkillInfo_array *v184; // [xsp+58h] [xbp-98h] BYREF
  SkillInfo_array *v185; // [xsp+60h] [xbp-90h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-88h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+78h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v189; // 0:x0.16
  UnityEngine_Vector3_o v190; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v192; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C24F3E & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___77938608);
    sub_1C2D490(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Rarity_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
    sub_1C2D490(&StringLiteral_20230/*"icon_support_02"*/);
    sub_1C2D490(&StringLiteral_803/*"+"*/);
    sub_1C2D490(&StringLiteral_18271/*"correction_icon_"*/);
    sub_1C2D490(&StringLiteral_20185/*"icon_eventjoin_02"*/);
    sub_1C2D490(&StringLiteral_10291/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/);
    sub_1C2D490(&StringLiteral_397/*"#,0"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C24F3E = 1;
  }
  skillInfoList = 0;
  v185 = 0;
  tdInfo = 0;
  v183 = 0;
  v184 = 0;
  v181 = 0;
  v182 = 0;
  v180 = 0.0;
  v179 = 0;
  this->fields.linkItem = item;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.linkItem, (int32_t)item, mode, method);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !item )
    goto LABEL_402;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)item->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_58233976(
      v7,
      eventUpValItemList,
      (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___77938608);
  }
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_402;
  size = switchSkillUIList->fields._size;
  v13 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v13;
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
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_402;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(item, 0);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(SvtId, 0);
      if ( !MasterData_object )
        goto LABEL_402;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     (ServantLimitImageMaster_o *)MasterData_object,
                                     (int32_t)gameObject,
                                     CardImageLimitCount,
                                     0);
      servantNarrowTexture = this->fields.servantNarrowTexture;
      v24 = ServantImageLimitSealAfter;
      v188 = PartyOrganizationListViewItem__get_SvtId(item, 0);
      gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v188, 0);
      if ( !servantNarrowTexture )
        goto LABEL_402;
      UINarrowFigureTexture__SetCharacter(servantNarrowTexture, (int32_t)gameObject, v24, 0, 0);
      frameType = item->fields.frameType;
      gameObject = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(item, 0);
      if ( !item->fields.userServantEntity )
        goto LABEL_402;
      v25 = (int)gameObject;
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
      UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)gameObject, &tdInfo, -1, v25, 0, 0);
      v26 = skillInfoList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__GetLevelList_41056784(v26, 0);
      if ( !tdInfo )
        goto LABEL_402;
      v27 = (System_String_o *)gameObject;
      gameObject = item->fields.userServantEntity;
      if ( !gameObject )
        goto LABEL_402;
      strengthStatus = tdInfo->fields.strengthStatus;
      lv = tdInfo->fields.lv;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      UserServantEntity__GetAppendPassiveSkillInfo_42964024((UserServantEntity_o *)gameObject, &v185, 0);
      v30 = v185;
    }
    else
    {
      followerInfo = item->fields.followerInfo;
      LevelList_41056784 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !followerInfo )
      {
        treasureDeviceNum = 0;
        strengthStatus = 0;
        lv = 0;
        frameType = 9;
        v27 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_54;
      }
      valuea = (System_String_o *)StringLiteral_1/*""*/;
      imageSvtId = followerInfo->fields.imageSvtId;
      v52 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v52, 0, 0) )
      {
        v53 = this->fields.servantFaceIcon;
        gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
        if ( !v53 )
          goto LABEL_402;
        ServantFaceIconComponent__Set_40787620(v53, (ServantLeaderInfo_o *)gameObject, 0, 0, 0, imageSvtId, 0);
      }
      v54 = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0);
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_402;
      v55 = DataManager__GetMasterData_object_(
              (DataManager_o *)gameObject,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v56 = PartyOrganizationListViewItem__get_SvtId(item, 0);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v56, 0);
      if ( !v55 )
        goto LABEL_402;
      v57 = ServantLimitImageMaster__GetServantImageLimitSealAfter(
              (ServantLimitImageMaster_o *)v55,
              (int32_t)gameObject,
              v54,
              0);
      if ( imageSvtId <= 0 )
      {
        v189 = PartyOrganizationListViewItem__get_SvtId(item, 0);
        imageSvtId = BasicHelper__DecryptValue_43904660(v189, 0);
      }
      gameObject = this->fields.servantNarrowTexture;
      if ( !gameObject )
        goto LABEL_402;
      UINarrowFigureTexture__SetCharacter((UINarrowFigureTexture_o *)gameObject, imageSvtId, v57, 0, 0);
      frameType = item->fields.frameType;
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
      if ( !gameObject )
        goto LABEL_402;
      ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)gameObject, &v184, 0);
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
      if ( !gameObject )
        goto LABEL_402;
      ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)gameObject, &v183, 0);
      v58 = v184;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__GetLevelList_41056784(v58, 0);
      if ( !v183 )
        goto LABEL_402;
      lv = v183->fields.lv;
      strengthStatus = v183->fields.strengthStatus;
      v27 = (System_String_o *)gameObject;
      treasureDeviceNum = v183->fields.treasureDeviceNum;
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
      if ( !item->fields.followerInfo )
        goto LABEL_402;
      v59 = (ServantLeaderInfo_o *)gameObject;
      gameObject = (void *)FollowerInfo__get_IsNpc(item->fields.followerInfo, 0);
      if ( !v59 )
        goto LABEL_402;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_43263964(v59, &v182, (unsigned __int8)gameObject & 1, 0);
      v60 = v182;
      if ( !v182 )
      {
        LevelList_41056784 = valuea;
        goto LABEL_54;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = v60;
    }
    LevelList_41056784 = LocalizationManager__GetLevelList_41056784(v30, 0);
LABEL_54:
    if ( item->fields.userServantEntity || item->fields.followerInfo )
    {
      value = LevelList_41056784;
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
        v34 = this->fields.levelLabel;
        HIDWORD(v181) = PartyOrganizationListViewItem__get_Level(item, 0);
        gameObject = System_Int32__ToString((int32_t)&v181 + 4, 0);
        if ( !v34 )
          goto LABEL_402;
        UILabel__set_text(v34, (System_String_o *)gameObject, 0);
      }
      raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
      {
        rarityId = item->fields.rarityId;
        ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(item, 0);
        Level = PartyOrganizationListViewItem__get_Level(item, 0);
        v39 = item->fields.rarityId;
        v40 = Level;
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        Icon_40221568 = Rarity__getIcon_40221568(rarityId, ExceedCount, v40, v39, 0);
        if ( PartyOrganizationListViewItem__get_ExceedCount(item, 0) < 1 )
        {
          v49 = 0;
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantExceedMaster___);
          v43 = item->fields.rarityId;
          v44 = (ServantExceedMaster_o *)Master_object;
          gameObject = (void *)PartyOrganizationListViewItem__get_ExceedCount(item, 0);
          if ( !v44 )
            goto LABEL_402;
          RarityIcon = ServantExceedMaster__GetRarityIcon(v44, v43, (int32_t)gameObject, 0, 0, 0);
          v46 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
          v47 = item->fields.rarityId;
          v48 = (ServantLvDetailMaster_o *)v46;
          gameObject = (void *)PartyOrganizationListViewItem__get_Level(item, 0);
          if ( !v48 )
            goto LABEL_402;
          v49 = ServantLvDetailMaster__GetRarityIcon(v48, v47, (int32_t)gameObject, RarityIcon, 0, 0);
        }
        v61 = this->fields.raritySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( v49 >= 3 )
          AtlasManager__SetEventSprite(v61, Icon_40221568, 0);
        else
          AtlasManager__SetCommon(v61, 0);
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, Icon_40221568, 0);
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_402;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)gameObject + 840LL))(
          gameObject,
          *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
        x = this->fields.baseRarityPosition.fields.x;
        y = this->fields.baseRarityPosition.fields.y;
        z = this->fields.baseRarityPosition.fields.z;
        v65 = PartyOrganizationListViewItem__get_ExceedCount(item, 0);
        gameObject = this->fields.raritySprite;
        if ( v65 >= 1 )
          x = x + 1.0;
        if ( !gameObject )
          goto LABEL_402;
        gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_402;
        v190.fields.x = x;
        v190.fields.y = y;
        v190.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v190, 0);
      }
      attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(attackLabel, 0, 0) )
      {
        HasAtkBoost = PartyOrganizationListViewItem__HasAtkBoost(item, 0);
        v68 = 0.92157;
        v69 = HasAtkBoost;
        gameObject = this->fields.attackLabel;
        if ( v69 )
          v70 = 0.015686;
        else
          v70 = 1.0;
        if ( !v69 )
          v68 = 1.0;
        if ( !gameObject )
          goto LABEL_402;
        v71 = 1.0;
        v72 = 1.0;
        UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v68 - 1), 0);
        v73 = this->fields.attackLabel;
        HIDWORD(v181) = PartyOrganizationListViewItem__get_MargeAtk(item, 0);
        gameObject = System_Int32__ToString_64968716((int32_t)&v181 + 4, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
        if ( !v73 )
          goto LABEL_402;
        UILabel__set_text(v73, (System_String_o *)gameObject, 0);
      }
      hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(hpLabel, 0, 0) )
      {
        HasHpBoost = PartyOrganizationListViewItem__HasHpBoost(item, 0);
        v76 = 0.92157;
        v77 = HasHpBoost;
        gameObject = this->fields.hpLabel;
        if ( v77 )
          v78 = 0.015686;
        else
          v78 = 1.0;
        if ( !v77 )
          v76 = 1.0;
        if ( !gameObject )
          goto LABEL_402;
        v79 = 1.0;
        v80 = 1.0;
        UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v76 - 1), 0);
        v81 = this->fields.hpLabel;
        HIDWORD(v181) = PartyOrganizationListViewItem__get_MargeHp(item, 0);
        gameObject = System_Int32__ToString_64968716((int32_t)&v181 + 4, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
        if ( !v81 )
          goto LABEL_402;
        UILabel__set_text(v81, (System_String_o *)gameObject, 0);
      }
      costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(costLabel, 0, 0) )
      {
        EquipCost = PartyOrganizationListViewItem__get_EquipCost(item, 0);
        v84 = this->fields.costLabel;
        v85 = EquipCost;
        MainCost = PartyOrganizationListViewItem__get_MainCost(item, 0);
        if ( v85 < 0 )
        {
          HIDWORD(v181) = MainCost;
          gameObject = System_Int32__ToString((int32_t)&v181 + 4, 0);
          if ( !v84 )
            goto LABEL_402;
        }
        else
        {
          v178 = MainCost;
          v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v178, v87, v88, v89);
          v177 = v85;
          v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v177, v91, v92, v93);
          gameObject = System_String__Concat_63495864(v90, (Il2CppObject *)StringLiteral_803/*"+"*/, v94, 0);
          if ( !v84 )
            goto LABEL_402;
        }
        UILabel__set_text(v84, (System_String_o *)gameObject, 0);
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
          v27,
          lv,
          strengthStatus,
          treasureDeviceNum,
          0,
          0);
        if ( !System_String__IsNullOrEmpty(v27, 0) )
        {
          gameObject = this->fields.switchSkillUIList;
          if ( gameObject )
          {
            v9 = (unsigned __int64)this->fields.skillInfoUiWidget;
            v98 = *((_QWORD *)gameObject + 2);
            v99 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++*((_DWORD *)gameObject + 7);
            if ( !v98 )
              goto LABEL_402;
            v100 = *((int *)gameObject + 6);
            if ( (unsigned int)v100 >= *(_DWORD *)(v98 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)gameObject,
                (Il2CppObject *)v9,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
            }
            else
            {
              v101 = v98 + 8 * v100;
              *((_DWORD *)gameObject + 6) = v100 + 1;
              *(_QWORD *)(v101 + 32) = v9;
              sub_1C2D434((CGThumbnailListItem_o *)(v101 + 32), v9, v96, v97);
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
            v9 = (unsigned __int64)this->fields.appendSkillInfoUiWidget;
            v123 = *((_QWORD *)gameObject + 2);
            v124 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++*((_DWORD *)gameObject + 7);
            if ( !v123 )
              goto LABEL_402;
            v125 = *((int *)gameObject + 6);
            if ( (unsigned int)v125 >= *(_DWORD *)(v123 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)gameObject,
                (Il2CppObject *)v9,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
            }
            else
            {
              v126 = v123 + 8 * v125;
              *((_DWORD *)gameObject + 6) = v125 + 1;
              *(_QWORD *)(v126 + 32) = v9;
              sub_1C2D434((CGThumbnailListItem_o *)(v126 + 32), v9, v121, v122);
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
        v128 = this->fields.switchSkillUIList;
        if ( v128 )
        {
          v129 = this->fields.switchSkillInfo;
          gameObject = System_Collections_Generic_List_object___ToArray(
                         (System_Collections_Generic_List_object__o *)v128,
                         (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
          if ( !v129 )
            goto LABEL_402;
          SwitchUIWidgetComponent__Set(v129, (UIWidget_array *)gameObject, 0, 0);
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
            v131 = (System_Int32_array *)*((_QWORD *)gameObject + 27);
          }
          else
          {
            v131 = 0;
          }
          v134 = this->fields.svtCommandCardList;
          v135 = PartyOrganizationListViewItem__get_SvtId(item, 0);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v135, 0);
          if ( v134 )
          {
            ServantCommandCardListComponent__Set_40772840(
              v134,
              (int32_t)gameObject,
              v131,
              item->fields.commandCodeIdList,
              2,
              0,
              0);
            goto LABEL_282;
          }
LABEL_402:
          sub_1C2D6EC(gameObject, v9);
        }
        v132 = this->fields.svtCommandCardList;
        v133 = PartyOrganizationListViewItem__get_SvtId(item, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v133, 0);
        if ( !v132 )
          goto LABEL_402;
        ServantCommandCardListComponent__Set_40773084(
          v132,
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
          v141 = item->fields.followerInfo;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v141 != 0, 0);
        }
        fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0, 0) )
        {
          gameObject = this->fields.fixNpcMessageText;
          if ( !gameObject )
            goto LABEL_402;
          v143 = item->fields.followerInfo;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_402;
          if ( v143 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            v144 = this->fields.fixNpcMessageText;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10291/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0);
            if ( !v144 )
              goto LABEL_402;
            UILabel__set_text(v144, (System_String_o *)gameObject, 0);
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
        gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(EquipSvtId, 0);
        if ( !this->fields.noneEquipSprite )
          goto LABEL_402;
        v147 = (int)gameObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.noneEquipSprite, 0);
        if ( !gameObject )
          goto LABEL_402;
        if ( v147 < 1 )
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
          LOBYTE(v9) = 0;
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
          AtlasManager__SetEquipFace(equipSprite, v147, 0, 0);
          v149 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v149, 0, 0) )
            goto LABEL_342;
          gameObject = (void *)PartyOrganizationListViewItem__get_EquipLimitCountMax(item, 0);
          if ( !this->fields.equipLimitCountSprite )
            goto LABEL_402;
          v150 = (int)gameObject;
          gameObject = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                         0);
          v151 = gameObject;
          if ( v150 < 1 )
          {
            v9 = 0;
          }
          else
          {
            gameObject = (void *)PartyOrganizationListViewItem__get_EquipLimitCount(item, 0);
            v9 = (int)gameObject >= v150;
          }
          if ( !v151 )
            goto LABEL_402;
          gameObject = v151;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9, 0);
LABEL_342:
        correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
        isEventUpVal = item->fields.isEventUpVal;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0, 0) )
        {
          LODWORD(v181) = PartyOrganizationListViewItem__GetCorrectionIconId(item, 0);
          gameObject = this->fields.correctionIconSprite;
          if ( !gameObject )
            goto LABEL_402;
          if ( (v181 & 0x80000000) != 0 )
          {
            UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
          }
          else
          {
            gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_402;
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
            *(float *)&v179 = localPosition.fields.x;
            v180 = localPosition.fields.z;
            v154 = item->fields.eventUpValItemList;
            v155 = localPosition.fields.x;
            if ( v154 && v154->max_length )
            {
              v156 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              if ( !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
                v156 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              }
              v157 = 16;
            }
            else
            {
              v156 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              if ( !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
                v156 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              }
              v157 = 12;
            }
            *((float *)&v179 + 1) = (float)*(int *)((char *)&v156->static_fields->RestrictionClassSpriteNameFormat + v157);
            gameObject = this->fields.correctionIconSprite;
            if ( !gameObject )
              goto LABEL_402;
            gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_402;
            v192.fields.y = *((float *)&v179 + 1);
            v192.fields.z = v180;
            v192.fields.x = v155;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v192, 0);
            v158 = this->fields.correctionIconSprite;
            v159 = System_Int32__ToString((int32_t)&v181, 0);
            gameObject = System_String__Concat_63457864((System_String_o *)StringLiteral_18271/*"correction_icon_"*/, v159, 0);
            if ( !v158 )
              goto LABEL_402;
            UISprite__set_spriteName(v158, (System_String_o *)gameObject, 0);
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
          v162 = this->fields.baseSprite;
          baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetFormationBase(v162, frameType, baseDefaultUIAtlas, 0, 0, 0);
        }
        base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(base2Sprite, 0, 0) )
        {
          v165 = this->fields.base2Sprite;
          base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetFormationFrame(v165, frameType, base2DefaultUIAtlas, 0, 0, 0);
        }
        eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (void *)UnityEngine_Object__op_Inequality(eventUpValIcon, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v7 )
            goto LABEL_402;
          v168 = this->fields.eventUpValIcon;
          gameObject = System_Collections_Generic_List_object___ToArray(
                         v7,
                         (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
          if ( !v168 )
            goto LABEL_402;
          EventUpValIconComponent__Set(v168, (EventMargeItemUpValInfo_array *)gameObject, -1, -1, -1, 0);
          bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(bounusIcon, 0, 0) )
            goto LABEL_396;
          gameObject = this->fields.bounusIcon;
          if ( !gameObject )
            goto LABEL_402;
          v170 = 0;
        }
        else
        {
          v171 = (UnityEngine_Object_o *)this->fields.bounusIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v171, 0, 0) )
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
          v170 = isEventUpVal;
        }
        ShiningIconComponent__Set_40800416((ShiningIconComponent_o *)gameObject, v170, 0);
        goto LABEL_396;
      }
      userServantEntity = item->fields.userServantEntity;
      if ( userServantEntity && UserServantEntity__IsEventJoin(userServantEntity, 0) )
      {
        gameObject = this->fields.supportSprite;
        if ( !gameObject )
          goto LABEL_402;
        v138 = &StringLiteral_20185/*"icon_eventjoin_02"*/;
      }
      else
      {
        gameObject = this->fields.supportSprite;
        if ( !gameObject )
          goto LABEL_402;
        if ( !item->fields.followerInfo )
        {
          v139 = 0;
          goto LABEL_294;
        }
        v138 = &StringLiteral_20230/*"icon_support_02"*/;
      }
      v139 = (System_String_o *)*v138;
LABEL_294:
      UISprite__set_spriteName((UISprite_o *)gameObject, v139, 0);
      goto LABEL_295;
    }
    v102 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v102, 0, 0) )
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
      v103 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v103, 0, 0) )
      {
        gameObject = this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_402;
        ServantClassIconComponent__Clear((ServantClassIconComponent_o *)gameObject, 0);
      }
      v104 = (UnityEngine_Object_o *)this->fields.levelLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v104, 0, 0) )
      {
        gameObject = this->fields.levelLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
      v105 = (UnityEngine_Object_o *)this->fields.raritySprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v105, 0, 0) )
      {
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
      }
      v106 = (UnityEngine_Object_o *)this->fields.attackLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v106, 0, 0) )
      {
        gameObject = this->fields.attackLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
      v107 = (UnityEngine_Object_o *)this->fields.hpLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v107, 0, 0) )
      {
        gameObject = this->fields.hpLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
      v108 = (UnityEngine_Object_o *)this->fields.costLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v108, 0, 0) )
      {
        gameObject = this->fields.costLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
      v109 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v109, 0, 0) )
      {
        gameObject = this->fields.skillListTreasureDevice;
        if ( !gameObject )
          goto LABEL_402;
        SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)gameObject, 0);
      }
      v110 = (UnityEngine_Object_o *)this->fields.appendSkillList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v110, 0, 0) )
      {
        gameObject = this->fields.appendSkillList;
        if ( !gameObject )
          goto LABEL_402;
        AppendSkillListComponent__Clear((AppendSkillListComponent_o *)gameObject, 0);
      }
      v111 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v111, 0, 0) )
      {
        gameObject = this->fields.svtCommandCardList;
        if ( !gameObject )
          goto LABEL_402;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0);
      }
      v112 = (UnityEngine_Object_o *)this->fields.supportSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v112, 0, 0) )
      {
        gameObject = this->fields.supportSprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
      }
      v113 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v113, 0, 0) )
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
        v114 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v114, 0, 0) )
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
      v115 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v115, 0, 0) )
      {
        gameObject = this->fields.correctionIconSprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
      }
      WarBoardPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(this, item, v116);
      v117 = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v117, 0, 0) )
      {
        gameObject = this->fields.fixNpcMessageFrameSprite;
        if ( !gameObject )
          goto LABEL_402;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      }
      v118 = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v118, 0, 0) )
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
  v16 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
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
    v17 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int datalist_high; // w25
  __int64 v17; // x21
  System_Collections_Generic_List_int__o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x22
  WarBoardPartyOrganizationListViewItemDraw___c_c *v22; // x0
  System_Func_object__bool__o *_9__40_0; // x23
  Il2CppObject *v24; // x24
  struct WarBoardPartyOrganizationListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerable_T__o *v28; // x22
  System_Action_object__o *v29; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Int32_array *v31; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  __int64 v33; // x8
  WarBoardPartyOrganizationListViewItemDraw_c *v34; // x0
  System_String_o *RestrictionClassSpriteNameFormat; // x20
  Il2CppObject *v36; // x0
  System_String_o *v37; // x20
  int v38; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C24F3F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_RestrictionEntity__TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_RestrictionEntity___);
    sub_1C2D490(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C2D490(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C2D490(&Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__);
    sub_1C2D490(&Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__);
    sub_1C2D490(&WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo);
    sub_1C2D490(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
    sub_1C2D490(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
    byte_4C24F3F = 1;
  }
  restrictionClassSprite = (UnityEngine_Object_o *)this->fields.restrictionClassSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionClassSprite, 0, 0) )
  {
    v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C7DBA4(v7);
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C7DBA4(v7);
    MasterData_object = **(DataManager_o ***)(v9 + 184);
    if ( MasterData_object )
    {
      MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                             MasterData_object,
                                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
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
              v17 = sub_1C2D6DC(WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v17, 0);
              v18 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v18,
                (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v17 )
                goto LABEL_36;
              *(_QWORD *)(v17 + 16) = v18;
              sub_1C2D434((CGThumbnailListItem_o *)(v17 + 16), (int32_t)v18, v19, v20);
              restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
              v22 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              if ( !WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
                v22 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              }
              _9__40_0 = (System_Func_object__bool__o *)v22->static_fields->__9__40_0;
              if ( !_9__40_0 )
              {
                if ( !v22->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v22);
                  v22 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
                }
                v24 = (Il2CppObject *)v22->static_fields->__9;
                _9__40_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_RestrictionEntity__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  _9__40_0,
                  v24,
                  Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__,
                  0);
                static_fields = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
                static_fields->__9__40_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__40_0;
                sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__40_0, (int32_t)_9__40_0, v26, v27);
              }
              v28 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                                     restrictionEntityList,
                                                                     (System_Func_TSource__bool__o *)_9__40_0,
                                                                     (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
              v29 = (System_Action_object__o *)sub_1C2D6DC(System_Action_RestrictionEntity__TypeInfo);
              System_Action_object____ctor(
                v29,
                (Il2CppObject *)v17,
                Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__,
                0);
              BasicHelper__ForEach_object_(
                v28,
                (System_Action_T__o *)v29,
                (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_RestrictionEntity___);
              v30 = System_Linq_Enumerable__Distinct_int_(
                      *(System_Collections_Generic_IEnumerable_TSource__o **)(v17 + 16),
                      (const MethodInfo_30F1B3C *)Method_System_Linq_Enumerable_Distinct_int___);
              v31 = System_Linq_Enumerable__ToArray_int_(
                      v30,
                      (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
              MasterData_object = (DataManager_o *)WarBoardIndividualityClassMaster__GetServantClassEntities(
                                                     v11,
                                                     v31,
                                                     0);
              if ( MasterData_object )
              {
                m_CancellationTokenSource = MasterData_object->fields.m_CancellationTokenSource;
                if ( m_CancellationTokenSource )
                {
                  if ( !(_DWORD)m_CancellationTokenSource )
                    sub_1C2D6F4(MasterData_object, v6, v12);
                  v33 = *(_QWORD *)&MasterData_object->fields._DispLog;
                  if ( !v33 )
                    goto LABEL_36;
                  datalist_high = *(_DWORD *)(v33 + 44);
                }
              }
            }
            v34 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            if ( !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
              v34 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            }
            RestrictionClassSpriteNameFormat = v34->static_fields->RestrictionClassSpriteNameFormat;
            v38 = datalist_high;
            v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v12, v13, v14);
            MasterData_object = (DataManager_o *)System_String__Format(RestrictionClassSpriteNameFormat, v36, 0);
            if ( this->fields.restrictionClassSprite )
            {
              v37 = (System_String_o *)MasterData_object;
              MasterData_object = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this->fields.restrictionClassSprite,
                                                     0);
              if ( MasterData_object )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0);
                MasterData_object = (DataManager_o *)this->fields.restrictionClassSprite;
                if ( MasterData_object )
                {
                  UISprite__set_spriteName((UISprite_o *)MasterData_object, v37, 0);
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
    sub_1C2D6EC(MasterData_object, v6);
  }
}


void WarBoardPartyOrganizationListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C24F42 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
    byte_4C24F42 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct WarBoardPartyOrganizationListViewItemDraw___c_o *)v1;
  sub_1C2D434(
    (CGThumbnailListItem_o *)WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1C2D6EC(this, 0);
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
  if ( (byte_4C24F43 & 1) == 0 )
  {
    this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)sub_1C2D490(&Method_System_Collections_Generic_List_int__AddRange__);
    byte_4C24F43 = 1;
  }
  if ( !x
    || (this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)v4->fields.indivisualities) == 0 )
  {
    sub_1C2D6EC(this, x);
  }
  System_Collections_Generic_List_int___AddRange(
    (System_Collections_Generic_List_int__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)x->fields.targetVals,
    (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__);
}