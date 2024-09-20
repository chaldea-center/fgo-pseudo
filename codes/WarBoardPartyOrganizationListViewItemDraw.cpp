void __fastcall WarBoardPartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct WarBoardPartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4A5900A & 1) == 0 )
  {
    sub_1B885B0(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_17988/*"class2_{0}"*/);
    byte_4A5900A = 1;
  }
  WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields->RestrictionClassSpriteNameFormat = (struct System_String_o *)StringLiteral_17988/*"class2_{0}"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_17988/*"class2_{0}"*/,
    v1,
    v2);
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
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *baseSprite; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  struct UISprite_o *v9; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  struct UISprite_o *v14; // x8
  struct UIAtlas_o *v15; // x1
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A59005 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59005 = 1;
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
    v9 = this->fields.baseSprite;
    if ( !v9 )
      goto LABEL_20;
    mAtlas = v9->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseDefaultUIAtlas, (int32_t)mAtlas, v7, v8);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v14 = this->fields.base2Sprite;
    if ( v14 )
    {
      v15 = v14->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v15;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.base2DefaultUIAtlas, (int32_t)v15, v12, v13);
      goto LABEL_19;
    }
LABEL_20:
    sub_1B8880C(transform, v4);
  }
LABEL_19:
  v16 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.switchSkillUIList, (int32_t)v16, v17, v18);
}


void __fastcall WarBoardPartyOrganizationListViewItemDraw__ClearItem(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20

  if ( (byte_4A59006 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59006 = 1;
  }
  this->fields.linkItem = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.linkItem, 0, v2, v3);
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
    sub_1B8880C(gameObject, v6);
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

  if ( (byte_4A59009 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59009 = 1;
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
      ShiningIconComponent__Set_38233872((ShiningIconComponent_o *)baseSprite, 0, 0LL);
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
    sub_1B8880C(baseSprite, isDisp);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationListViewItemDraw__SetItem(
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
  int32_t lv; // w25
  SkillInfo_array *v29; // x0
  System_String_o *LevelList_38398328; // x23
  UnityEngine_Object_o *servantClassIcon; // x22
  UnityEngine_Object_o *levelLabel; // x22
  UILabel_o *v33; // x28
  UnityEngine_Object_o *raritySprite; // x22
  int32_t rarityId; // w28
  int32_t ExceedCount; // w29
  int32_t Level; // w22
  System_String_o *Icon_37701784; // x28
  System_String_o *v39; // x26
  Il2CppObject *Master_object; // x0
  int32_t v41; // w22
  ServantExceedMaster_o *v42; // x29
  int32_t RarityIcon; // w29
  Il2CppObject *v44; // x0
  int32_t v45; // w22
  ServantLvDetailMaster_o *v46; // x23
  int32_t v47; // w29
  struct FollowerInfo_o *followerInfo; // x8
  System_String_o *v49; // x29
  int imageSvtId; // w22
  UnityEngine_Object_o *v51; // x23
  ServantFaceIconComponent_o *v52; // x24
  int32_t v53; // w24
  Il2CppObject *v54; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // kr10_16
  int32_t v56; // w24
  SkillInfo_array *v57; // x22
  ServantLeaderInfo_o *v58; // x28
  SkillInfo_array *v59; // x22
  UISprite_o *v60; // x22
  float x; // s10
  float y; // s8
  float z; // s9
  int32_t v64; // w8
  UnityEngine_Object_o *attackLabel; // x22
  int32_t AdjustAtk; // w0
  float v67; // s1
  int v68; // w8
  float v69; // s2
  float v70; // s0
  float v71; // s3
  UILabel_o *v72; // x28
  UnityEngine_Object_o *hpLabel; // x22
  int32_t AdjustHp; // w0
  float v75; // s1
  int v76; // w8
  float v77; // s2
  float v78; // s0
  float v79; // s3
  UILabel_o *v80; // x28
  UnityEngine_Object_o *costLabel; // x22
  int32_t EquipCost; // w0
  UILabel_o *v83; // x28
  int v84; // w29
  int32_t MainCost; // w0
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  Il2CppObject *v89; // x22
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  Il2CppObject *v93; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  int32_t v95; // w2
  int32_t v96; // w3
  __int64 v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  __int64 v100; // x8
  UnityEngine_Object_o *v101; // x22
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
  const MethodInfo *v115; // x2
  UnityEngine_Object_o *v116; // x21
  UnityEngine_Object_o *v117; // x21
  bool isEventUpVal; // w23
  UnityEngine_Object_o *appendSkillList; // x22
  int32_t v120; // w2
  int32_t v121; // w3
  __int64 v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  __int64 v125; // x8
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v127; // x0
  SwitchUIWidgetComponent_o *v128; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  System_Int32_array *v130; // x23
  ServantCommandCardListComponent_o *v131; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // kr20_16
  ServantCommandCardListComponent_o *v133; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // kr30_16
  UnityEngine_Object_o *supportSprite; // x22
  UserServantEntity_o *userServantEntity; // x0
  __int64 *v137; // x8
  System_String_o *v138; // x1
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  struct FollowerInfo_o *v140; // x22
  UnityEngine_Object_o *fixNpcMessageText; // x22
  struct FollowerInfo_o *v142; // x22
  UILabel_o *v143; // x23
  UnityEngine_Object_o *noneEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr40_16
  int32_t v146; // w23
  UISprite_o *equipSprite; // x22
  UnityEngine_Object_o *v148; // x22
  int v149; // w24
  void *v150; // x23
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  UnityEngine_Object_o *correctionIconSprite; // x22
  struct EventMargeItemUpValInfo_array *v153; // x8
  float v154; // s8
  WarBoardPartyOrganizationListViewItemDraw_c *v155; // x0
  __int64 v156; // x8
  UISprite_o *v157; // x21
  System_String_o *v158; // x0
  UnityEngine_Object_o *restrictionClassSprite; // x21
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v161; // x22
  UIAtlas_o *baseDefaultUIAtlas; // x21
  UnityEngine_Object_o *base2Sprite; // x21
  UISprite_o *v164; // x22
  UIAtlas_o *base2DefaultUIAtlas; // x21
  UnityEngine_Object_o *eventUpValIcon; // x21
  EventUpValIconComponent_o *v167; // x21
  UnityEngine_Object_o *bounusIcon; // x20
  bool v169; // w1
  UnityEngine_Object_o *v170; // x20
  UnityEngine_Object_o *baseButton; // x20
  int32_t strengthStatus; // [xsp+Ch] [xbp-D4h]
  int32_t treasureDeviceNum; // [xsp+10h] [xbp-D0h]
  int32_t frameType; // [xsp+14h] [xbp-CCh]
  int v175; // [xsp+18h] [xbp-C8h] BYREF
  int32_t v176; // [xsp+1Ch] [xbp-C4h] BYREF
  __int64 v177; // [xsp+20h] [xbp-C0h]
  float v178; // [xsp+28h] [xbp-B8h]
  __int64 v179; // [xsp+30h] [xbp-B0h] BYREF
  SkillInfo_array *v180; // [xsp+38h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *v181; // [xsp+40h] [xbp-A0h] BYREF
  SkillInfo_array *v182; // [xsp+48h] [xbp-98h] BYREF
  SkillInfo_array *v183; // [xsp+50h] [xbp-90h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+58h] [xbp-88h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v186; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v187; // 0:x0.16
  UnityEngine_Vector3_o v188; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v190; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A59007 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76030568);
    sub_1B885B0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_20191/*"icon_support_02"*/);
    sub_1B885B0(&StringLiteral_860/*"+"*/);
    sub_1B885B0(&StringLiteral_18272/*"correction_icon_"*/);
    sub_1B885B0(&StringLiteral_20151/*"icon_eventjoin_02"*/);
    sub_1B885B0(&StringLiteral_10313/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/);
    sub_1B885B0(&StringLiteral_429/*"#,0"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A59007 = 1;
  }
  skillInfoList = 0LL;
  v183 = 0LL;
  tdInfo = 0LL;
  v181 = 0LL;
  v182 = 0LL;
  v179 = 0LL;
  v180 = 0LL;
  v178 = 0.0;
  v177 = 0LL;
  this->fields.linkItem = item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.linkItem, (int32_t)item, mode, (int32_t)method);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !item )
    goto LABEL_402;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)item->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_55562536(
      v7,
      eventUpValItemList,
      (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76030568);
  }
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_402;
  size = switchSkillUIList->fields._size;
  v13 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v13;
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
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_402;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(SvtId, 0LL);
      if ( !MasterData_object )
        goto LABEL_402;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     (ServantLimitImageMaster_o *)MasterData_object,
                                     (int32_t)gameObject,
                                     CardImageLimitCount,
                                     0LL);
      servantNarrowTexture = this->fields.servantNarrowTexture;
      v24 = ServantImageLimitSealAfter;
      v186 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v186, 0LL);
      if ( !servantNarrowTexture )
        goto LABEL_402;
      UINarrowFigureTexture__SetCharacter(servantNarrowTexture, (int32_t)gameObject, v24, 0LL, 0LL);
      frameType = item->fields.frameType;
      gameObject = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(item, 0LL);
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
        0LL);
      gameObject = item->fields.userServantEntity;
      if ( !gameObject )
        goto LABEL_402;
      UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)gameObject, &tdInfo, -1, v25, 0, 0LL);
      v26 = skillInfoList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__GetLevelList_38398328(v26, 0LL);
      if ( !tdInfo )
        goto LABEL_402;
      v27 = (System_String_o *)gameObject;
      gameObject = item->fields.userServantEntity;
      if ( !gameObject )
        goto LABEL_402;
      lv = tdInfo->fields.lv;
      strengthStatus = tdInfo->fields.strengthStatus;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      UserServantEntity__GetAppendPassiveSkillInfo_40232352((UserServantEntity_o *)gameObject, &v183, 0LL);
      v29 = v183;
    }
    else
    {
      followerInfo = item->fields.followerInfo;
      LevelList_38398328 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !followerInfo )
      {
        strengthStatus = 0;
        treasureDeviceNum = 0;
        lv = 0;
        frameType = 9;
        v27 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_54;
      }
      v49 = (System_String_o *)StringLiteral_1/*""*/;
      imageSvtId = followerInfo->fields.imageSvtId;
      v51 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v51, 0LL, 0LL) )
      {
        v52 = this->fields.servantFaceIcon;
        gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
        if ( !v52 )
          goto LABEL_402;
        ServantFaceIconComponent__Set_38133256(v52, (ServantLeaderInfo_o *)gameObject, 0LL, 0LL, 0, imageSvtId, 0LL);
      }
      v53 = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0LL);
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_402;
      v54 = DataManager__GetMasterData_object_(
              (DataManager_o *)gameObject,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v55 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v55, 0LL);
      if ( !v54 )
        goto LABEL_402;
      v56 = ServantLimitImageMaster__GetServantImageLimitSealAfter(
              (ServantLimitImageMaster_o *)v54,
              (int32_t)gameObject,
              v53,
              0LL);
      if ( imageSvtId <= 0 )
      {
        v187 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
        imageSvtId = BasicHelper__DecryptValue_41109412(v187, 0LL);
      }
      gameObject = this->fields.servantNarrowTexture;
      if ( !gameObject )
        goto LABEL_402;
      UINarrowFigureTexture__SetCharacter((UINarrowFigureTexture_o *)gameObject, imageSvtId, v56, 0LL, 0LL);
      frameType = item->fields.frameType;
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !gameObject )
        goto LABEL_402;
      ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)gameObject, &v182, 0LL);
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !gameObject )
        goto LABEL_402;
      ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)gameObject, &v181, 0LL);
      v57 = v182;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__GetLevelList_38398328(v57, 0LL);
      if ( !v181 )
        goto LABEL_402;
      lv = v181->fields.lv;
      v27 = (System_String_o *)gameObject;
      strengthStatus = v181->fields.strengthStatus;
      treasureDeviceNum = v181->fields.treasureDeviceNum;
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !item->fields.followerInfo )
        goto LABEL_402;
      v58 = (ServantLeaderInfo_o *)gameObject;
      gameObject = (void *)FollowerInfo__get_IsNpc(item->fields.followerInfo, 0LL);
      if ( !v58 )
        goto LABEL_402;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_40506644(v58, &v180, (unsigned __int8)gameObject & 1, 0LL);
      v59 = v180;
      if ( !v180 )
      {
        LevelList_38398328 = v49;
        goto LABEL_54;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = v59;
    }
    LevelList_38398328 = LocalizationManager__GetLevelList_38398328(v29, 0LL);
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
          0LL);
      }
      levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
      {
        v33 = this->fields.levelLabel;
        HIDWORD(v179) = PartyOrganizationListViewItem__get_Level(item, 0LL);
        gameObject = System_Int32__ToString((int32_t)&v179 + 4, 0LL);
        if ( !v33 )
          goto LABEL_402;
        UILabel__set_text(v33, (System_String_o *)gameObject, 0LL);
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
        Icon_37701784 = Rarity__getIcon_37701784(rarityId, ExceedCount, Level, 0LL);
        if ( PartyOrganizationListViewItem__get_ExceedCount(item, 0LL) < 1 )
        {
          v47 = 0;
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v39 = LevelList_38398328;
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantExceedMaster___);
          v41 = item->fields.rarityId;
          v42 = (ServantExceedMaster_o *)Master_object;
          gameObject = (void *)PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
          if ( !v42 )
            goto LABEL_402;
          RarityIcon = ServantExceedMaster__GetRarityIcon(v42, v41, (int32_t)gameObject, 0, 0LL);
          v44 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
          v45 = item->fields.rarityId;
          v46 = (ServantLvDetailMaster_o *)v44;
          gameObject = (void *)PartyOrganizationListViewItem__get_Level(item, 0LL);
          if ( !v46 )
            goto LABEL_402;
          v47 = ServantLvDetailMaster__GetRarityIcon(v46, v45, (int32_t)gameObject, RarityIcon, 0LL);
          LevelList_38398328 = v39;
        }
        v60 = this->fields.raritySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( v47 >= 3 )
          AtlasManager__SetEventSprite(v60, Icon_37701784, 0LL);
        else
          AtlasManager__SetCommon(v60, 0LL);
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, Icon_37701784, 0LL);
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_402;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)gameObject + 840LL))(
          gameObject,
          *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
        x = this->fields.baseRarityPosition.fields.x;
        y = this->fields.baseRarityPosition.fields.y;
        z = this->fields.baseRarityPosition.fields.z;
        v64 = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
        gameObject = this->fields.raritySprite;
        if ( v64 >= 1 )
          x = x + 1.0;
        if ( !gameObject )
          goto LABEL_402;
        gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_402;
        v188.fields.x = x;
        v188.fields.y = y;
        v188.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v188, 0LL);
      }
      attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
      {
        AdjustAtk = PartyOrganizationListViewItem__get_AdjustAtk(item, 0LL);
        v67 = 0.92157;
        v68 = AdjustAtk;
        gameObject = this->fields.attackLabel;
        if ( v68 <= 0 )
          v69 = 1.0;
        else
          v69 = 0.015686;
        if ( v68 <= 0 )
          v67 = 1.0;
        if ( !gameObject )
          goto LABEL_402;
        v70 = 1.0;
        v71 = 1.0;
        UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v67 - 1), 0LL);
        v72 = this->fields.attackLabel;
        HIDWORD(v179) = PartyOrganizationListViewItem__get_MargeAtk(item, 0LL);
        gameObject = System_Int32__ToString_62512312((int32_t)&v179 + 4, (System_String_o *)StringLiteral_429/*"#,0"*/, 0LL);
        if ( !v72 )
          goto LABEL_402;
        UILabel__set_text(v72, (System_String_o *)gameObject, 0LL);
      }
      hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
      {
        AdjustHp = PartyOrganizationListViewItem__get_AdjustHp(item, 0LL);
        v75 = 0.92157;
        v76 = AdjustHp;
        gameObject = this->fields.hpLabel;
        if ( v76 <= 0 )
          v77 = 1.0;
        else
          v77 = 0.015686;
        if ( v76 <= 0 )
          v75 = 1.0;
        if ( !gameObject )
          goto LABEL_402;
        v78 = 1.0;
        v79 = 1.0;
        UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v75 - 1), 0LL);
        v80 = this->fields.hpLabel;
        HIDWORD(v179) = PartyOrganizationListViewItem__get_MargeHp(item, 0LL);
        gameObject = System_Int32__ToString_62512312((int32_t)&v179 + 4, (System_String_o *)StringLiteral_429/*"#,0"*/, 0LL);
        if ( !v80 )
          goto LABEL_402;
        UILabel__set_text(v80, (System_String_o *)gameObject, 0LL);
      }
      costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(costLabel, 0LL, 0LL) )
      {
        EquipCost = PartyOrganizationListViewItem__get_EquipCost(item, 0LL);
        v83 = this->fields.costLabel;
        v84 = EquipCost;
        MainCost = PartyOrganizationListViewItem__get_MainCost(item, 0LL);
        if ( (v84 & 0x80000000) != 0 )
        {
          HIDWORD(v179) = MainCost;
          gameObject = System_Int32__ToString((int32_t)&v179 + 4, 0LL);
          if ( !v83 )
            goto LABEL_402;
          UILabel__set_text(v83, (System_String_o *)gameObject, 0LL);
        }
        else
        {
          v176 = MainCost;
          v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v176, v86, v87, v88);
          v175 = v84;
          v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v175, v90, v91, v92);
          gameObject = System_String__Concat_61718044(v89, (Il2CppObject *)StringLiteral_860/*"+"*/, v93, 0LL);
          if ( !v83 )
            goto LABEL_402;
          UILabel__set_text(v83, (System_String_o *)gameObject, 0LL);
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
          v27,
          lv,
          strengthStatus,
          treasureDeviceNum,
          0,
          0LL);
        if ( !System_String__IsNullOrEmpty(v27, 0LL) )
        {
          gameObject = this->fields.switchSkillUIList;
          if ( gameObject )
          {
            v9 = (unsigned __int64)this->fields.skillInfoUiWidget;
            v97 = *((_QWORD *)gameObject + 2);
            v98 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++*((_DWORD *)gameObject + 7);
            if ( !v97 )
              goto LABEL_402;
            v99 = *((int *)gameObject + 6);
            if ( (unsigned int)v99 >= *(_DWORD *)(v97 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)gameObject,
                (Il2CppObject *)v9,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
            }
            else
            {
              v100 = v97 + 8 * v99;
              *((_DWORD *)gameObject + 6) = v99 + 1;
              *(_QWORD *)(v100 + 32) = v9;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v100 + 32), v9, v95, v96);
            }
          }
        }
      }
      appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
      {
        if ( System_String__IsNullOrEmpty(LevelList_38398328, 0LL) )
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
            v9 = (unsigned __int64)this->fields.appendSkillInfoUiWidget;
            v122 = *((_QWORD *)gameObject + 2);
            v123 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++*((_DWORD *)gameObject + 7);
            if ( !v122 )
              goto LABEL_402;
            v124 = *((int *)gameObject + 6);
            if ( (unsigned int)v124 >= *(_DWORD *)(v122 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)gameObject,
                (Il2CppObject *)v9,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
            }
            else
            {
              v125 = v122 + 8 * v124;
              *((_DWORD *)gameObject + 6) = v124 + 1;
              *(_QWORD *)(v125 + 32) = v9;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v125 + 32), v9, v120, v121);
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
          AppendSkillListComponent__Set((AppendSkillListComponent_o *)gameObject, LevelList_38398328, 0LL);
        }
      }
      switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
      {
        v127 = this->fields.switchSkillUIList;
        if ( v127 )
        {
          v128 = this->fields.switchSkillInfo;
          gameObject = System_Collections_Generic_List_object___ToArray(
                         (System_Collections_Generic_List_object__o *)v127,
                         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
          if ( !v128 )
            goto LABEL_402;
          SwitchUIWidgetComponent__Set(v128, (UIWidget_array *)gameObject, 0LL);
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
            v130 = (System_Int32_array *)*((_QWORD *)gameObject + 26);
          }
          else
          {
            v130 = 0LL;
          }
          v133 = this->fields.svtCommandCardList;
          v134 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v134, 0LL);
          if ( v133 )
          {
            ServantCommandCardListComponent__Set_38135136(
              v133,
              (int32_t)gameObject,
              v130,
              item->fields.commandCodeIdList,
              2,
              0,
              0LL);
            goto LABEL_282;
          }
LABEL_402:
          sub_1B8880C(gameObject, v9);
        }
        v131 = this->fields.svtCommandCardList;
        v132 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v132, 0LL);
        if ( !v131 )
          goto LABEL_402;
        ServantCommandCardListComponent__Set_38214152(
          v131,
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
          v140 = item->fields.followerInfo;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v140 != 0LL, 0LL);
        }
        fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0LL, 0LL) )
        {
          gameObject = this->fields.fixNpcMessageText;
          if ( !gameObject )
            goto LABEL_402;
          v142 = item->fields.followerInfo;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_402;
          if ( v142 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            v143 = this->fields.fixNpcMessageText;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10313/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0LL);
            if ( !v143 )
              goto LABEL_402;
            UILabel__set_text(v143, (System_String_o *)gameObject, 0LL);
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
        gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(EquipSvtId, 0LL);
        if ( !this->fields.noneEquipSprite )
          goto LABEL_402;
        v146 = (int)gameObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.noneEquipSprite, 0LL);
        if ( !gameObject )
          goto LABEL_402;
        if ( v146 < 1 )
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
          LOBYTE(v9) = 0;
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
          AtlasManager__SetEquipFace(equipSprite, v146, 0LL);
          v148 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v148, 0LL, 0LL) )
            goto LABEL_342;
          gameObject = (void *)PartyOrganizationListViewItem__get_EquipLimitCountMax(item, 0LL);
          if ( !this->fields.equipLimitCountSprite )
            goto LABEL_402;
          v149 = (int)gameObject;
          gameObject = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                         0LL);
          v150 = gameObject;
          if ( v149 < 1 )
          {
            v9 = 0LL;
          }
          else
          {
            gameObject = (void *)PartyOrganizationListViewItem__get_EquipLimitCount(item, 0LL);
            v9 = (int)gameObject >= v149;
          }
          if ( !v150 )
            goto LABEL_402;
          gameObject = v150;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9, 0LL);
LABEL_342:
        correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
        isEventUpVal = item->fields.isEventUpVal;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
        {
          LODWORD(v179) = PartyOrganizationListViewItem__GetCorrectionIconId(item, 0LL);
          gameObject = this->fields.correctionIconSprite;
          if ( !gameObject )
            goto LABEL_402;
          if ( (v179 & 0x80000000) != 0 )
          {
            UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
          }
          else
          {
            gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_402;
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
            *(float *)&v177 = localPosition.fields.x;
            v178 = localPosition.fields.z;
            v153 = item->fields.eventUpValItemList;
            v154 = localPosition.fields.x;
            if ( v153 && *(_QWORD *)&v153->max_length )
            {
              v155 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              if ( !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
                v155 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              }
              v156 = 16LL;
            }
            else
            {
              v155 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              if ( !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
                v155 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              }
              v156 = 12LL;
            }
            *((float *)&v177 + 1) = (float)*(int *)((char *)&v155->static_fields->RestrictionClassSpriteNameFormat + v156);
            gameObject = this->fields.correctionIconSprite;
            if ( !gameObject )
              goto LABEL_402;
            gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_402;
            v190.fields.y = *((float *)&v177 + 1);
            v190.fields.z = v178;
            v190.fields.x = v154;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v190, 0LL);
            v157 = this->fields.correctionIconSprite;
            v158 = System_Int32__ToString((int32_t)&v179, 0LL);
            gameObject = System_String__Concat_61707032((System_String_o *)StringLiteral_18272/*"correction_icon_"*/, v158, 0LL);
            if ( !v157 )
              goto LABEL_402;
            UISprite__set_spriteName(v157, (System_String_o *)gameObject, 0LL);
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
          v161 = this->fields.baseSprite;
          baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetFormationBase(v161, frameType, baseDefaultUIAtlas, 0, 0LL);
        }
        base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
        {
          v164 = this->fields.base2Sprite;
          base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetFormationFrame(v164, frameType, base2DefaultUIAtlas, 0, 0LL);
        }
        eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (void *)UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v7 )
            goto LABEL_402;
          v167 = this->fields.eventUpValIcon;
          gameObject = System_Collections_Generic_List_object___ToArray(
                         v7,
                         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
          if ( !v167 )
            goto LABEL_402;
          EventUpValIconComponent__Set(v167, (EventMargeItemUpValInfo_array *)gameObject, -1, -1, -1, 0LL);
          bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
            goto LABEL_396;
          gameObject = this->fields.bounusIcon;
          if ( !gameObject )
            goto LABEL_402;
          v169 = 0;
        }
        else
        {
          v170 = (UnityEngine_Object_o *)this->fields.bounusIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v170, 0LL, 0LL) )
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
          v169 = isEventUpVal;
        }
        ShiningIconComponent__Set_38233872((ShiningIconComponent_o *)gameObject, v169, 0LL);
        goto LABEL_396;
      }
      userServantEntity = item->fields.userServantEntity;
      if ( userServantEntity && UserServantEntity__IsEventJoin(userServantEntity, 0LL) )
      {
        gameObject = this->fields.supportSprite;
        if ( !gameObject )
          goto LABEL_402;
        v137 = &StringLiteral_20151/*"icon_eventjoin_02"*/;
      }
      else
      {
        gameObject = this->fields.supportSprite;
        if ( !gameObject )
          goto LABEL_402;
        if ( !item->fields.followerInfo )
        {
          v138 = 0LL;
          goto LABEL_294;
        }
        v137 = &StringLiteral_20191/*"icon_support_02"*/;
      }
      v138 = (System_String_o *)*v137;
LABEL_294:
      UISprite__set_spriteName((UISprite_o *)gameObject, v138, 0LL);
      goto LABEL_295;
    }
    v101 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v101, 0LL, 0LL) )
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
      v102 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v102, 0LL, 0LL) )
      {
        gameObject = this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_402;
        ServantClassIconComponent__Clear((ServantClassIconComponent_o *)gameObject, 0LL);
      }
      v103 = (UnityEngine_Object_o *)this->fields.levelLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v103, 0LL, 0LL) )
      {
        gameObject = this->fields.levelLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v104 = (UnityEngine_Object_o *)this->fields.raritySprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v104, 0LL, 0LL) )
      {
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
      }
      v105 = (UnityEngine_Object_o *)this->fields.attackLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v105, 0LL, 0LL) )
      {
        gameObject = this->fields.attackLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v106 = (UnityEngine_Object_o *)this->fields.hpLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v106, 0LL, 0LL) )
      {
        gameObject = this->fields.hpLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v107 = (UnityEngine_Object_o *)this->fields.costLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v107, 0LL, 0LL) )
      {
        gameObject = this->fields.costLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v108 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v108, 0LL, 0LL) )
      {
        gameObject = this->fields.skillListTreasureDevice;
        if ( !gameObject )
          goto LABEL_402;
        SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)gameObject, 0LL);
      }
      v109 = (UnityEngine_Object_o *)this->fields.appendSkillList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v109, 0LL, 0LL) )
      {
        gameObject = this->fields.appendSkillList;
        if ( !gameObject )
          goto LABEL_402;
        AppendSkillListComponent__Clear((AppendSkillListComponent_o *)gameObject, 0LL);
      }
      v110 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v110, 0LL, 0LL) )
      {
        gameObject = this->fields.svtCommandCardList;
        if ( !gameObject )
          goto LABEL_402;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0LL);
      }
      v111 = (UnityEngine_Object_o *)this->fields.supportSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v111, 0LL, 0LL) )
      {
        gameObject = this->fields.supportSprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
      }
      v112 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v112, 0LL, 0LL) )
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
        v113 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v113, 0LL, 0LL) )
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
      v114 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v114, 0LL, 0LL) )
      {
        gameObject = this->fields.correctionIconSprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
      }
      WarBoardPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(this, item, v115);
      v116 = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v116, 0LL, 0LL) )
      {
        gameObject = this->fields.fixNpcMessageFrameSprite;
        if ( !gameObject )
          goto LABEL_402;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      v117 = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v117, 0LL, 0LL) )
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
  v16 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
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
    v17 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
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
  UnityEngine_Object_o *restrictionClassSprite; // x20
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x0
  void *MasterData_object; // x0
  WarBoardIndividualityClassMaster_o *v10; // x20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int v15; // w25
  __int64 v16; // x21
  System_Collections_Generic_List_int__o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x22
  WarBoardPartyOrganizationListViewItemDraw___c_c *v21; // x0
  System_Func_object__bool__o *_9__40_0; // x23
  Il2CppObject *v23; // x24
  struct WarBoardPartyOrganizationListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_IEnumerable_T__o *v27; // x22
  System_Action_object__o *v28; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Int32_array *v30; // x0
  __int64 v31; // x8
  __int64 v32; // x8
  WarBoardPartyOrganizationListViewItemDraw_c *v33; // x0
  System_String_o *RestrictionClassSpriteNameFormat; // x20
  Il2CppObject *v35; // x0
  System_String_o *v36; // x20
  int v37; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A59008 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_RestrictionEntity__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_RestrictionEntity___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1B885B0(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__);
    sub_1B885B0(&Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__);
    sub_1B885B0(&WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo);
    sub_1B885B0(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
    sub_1B885B0(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
    byte_4A59008 = 1;
  }
  restrictionClassSprite = (UnityEngine_Object_o *)this->fields.restrictionClassSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionClassSprite, 0LL, 0LL) )
  {
    v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BDA48C(v7);
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1BDA48C(v8);
    MasterData_object = **(void ***)(v8 + 184);
    if ( MasterData_object )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)MasterData_object,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
      if ( MasterData_object )
      {
        v10 = (WarBoardIndividualityClassMaster_o *)MasterData_object;
        MasterData_object = WarBoardIndividualityClassMaster__GetAllClassServantEntity(
                              (WarBoardIndividualityClassMaster_o *)MasterData_object,
                              0LL);
        if ( MasterData_object )
        {
          if ( item )
          {
            questRestrictionInfo = item->fields.questRestrictionInfo;
            v15 = *((_DWORD *)MasterData_object + 11);
            if ( questRestrictionInfo && questRestrictionInfo->fields.restrictionEntityList )
            {
              v16 = sub_1B887FC(WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v16, 0LL);
              v17 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v17,
                (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v16 )
                goto LABEL_36;
              *(_QWORD *)(v16 + 16) = v17;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)v17, v18, v19);
              restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
              v21 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              if ( !WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
                v21 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              }
              _9__40_0 = (System_Func_object__bool__o *)v21->static_fields->__9__40_0;
              if ( !_9__40_0 )
              {
                if ( !v21->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v21);
                  v21 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
                }
                v23 = (Il2CppObject *)v21->static_fields->__9;
                _9__40_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RestrictionEntity__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  _9__40_0,
                  v23,
                  Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__,
                  0LL);
                static_fields = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
                static_fields->__9__40_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__40_0;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__40_0, (int32_t)_9__40_0, v25, v26);
              }
              v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                                     restrictionEntityList,
                                                                     (System_Func_TSource__bool__o *)_9__40_0,
                                                                     (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
              v28 = (System_Action_object__o *)sub_1B887FC(System_Action_RestrictionEntity__TypeInfo);
              System_Action_object____ctor(
                v28,
                (Il2CppObject *)v16,
                Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__,
                0LL);
              BasicHelper__ForEach_object_(
                v27,
                (System_Action_T__o *)v28,
                (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_RestrictionEntity___);
              v29 = System_Linq_Enumerable__Distinct_int_(
                      *(System_Collections_Generic_IEnumerable_TSource__o **)(v16 + 16),
                      (const MethodInfo_2E9EB0C *)Method_System_Linq_Enumerable_Distinct_int___);
              v30 = System_Linq_Enumerable__ToArray_int_(
                      v29,
                      (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
              MasterData_object = WarBoardIndividualityClassMaster__GetServantClassEntities(v10, v30, 0LL);
              if ( MasterData_object )
              {
                v31 = *((_QWORD *)MasterData_object + 3);
                if ( v31 )
                {
                  if ( !(_DWORD)v31 )
                    sub_1B88814(MasterData_object, v6);
                  v32 = *((_QWORD *)MasterData_object + 4);
                  if ( !v32 )
                    goto LABEL_36;
                  v15 = *(_DWORD *)(v32 + 44);
                }
              }
            }
            v33 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            if ( !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
              v33 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            }
            RestrictionClassSpriteNameFormat = v33->static_fields->RestrictionClassSpriteNameFormat;
            v37 = v15;
            v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v11, v12, v13);
            MasterData_object = System_String__Format(RestrictionClassSpriteNameFormat, v35, 0LL);
            if ( this->fields.restrictionClassSprite )
            {
              v36 = (System_String_o *)MasterData_object;
              MasterData_object = UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)this->fields.restrictionClassSprite,
                                    0LL);
              if ( MasterData_object )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
                MasterData_object = this->fields.restrictionClassSprite;
                if ( MasterData_object )
                {
                  UISprite__set_spriteName((UISprite_o *)MasterData_object, v36, 0LL);
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
    sub_1B8880C(MasterData_object, v6);
  }
}


void __fastcall WarBoardPartyOrganizationListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5900B & 1) == 0 )
  {
    sub_1B885B0(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
    byte_4A5900B = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct WarBoardPartyOrganizationListViewItemDraw___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
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
  if ( (byte_4A5900C & 1) == 0 )
  {
    this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    byte_4A5900C = 1;
  }
  if ( !x
    || (this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)v4->fields.indivisualities) == 0LL )
  {
    sub_1B8880C(this, x);
  }
  System_Collections_Generic_List_int___AddRange(
    (System_Collections_Generic_List_int__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)x->fields.targetVals,
    (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
}