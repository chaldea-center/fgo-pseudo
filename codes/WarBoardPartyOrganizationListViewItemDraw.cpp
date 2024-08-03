void __fastcall WarBoardPartyOrganizationListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  struct WarBoardPartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_49FA2F2 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_17918/*"class2_{0}"*/, v4);
    byte_49FA2F2 = 1;
  }
  WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields->RestrictionClassSpriteNameFormat = (struct System_String_o *)StringLiteral_17918/*"class2_{0}"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_17918/*"class2_{0}"*/,
    v2,
    v3);
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
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *baseSprite; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  struct UISprite_o *v10; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t v15; // w3
  struct UISprite_o *v16; // x8
  struct UIAtlas_o *v17; // x1
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_49FA2ED & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49FA2ED = 1;
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
    v10 = this->fields.baseSprite;
    if ( !v10 )
      goto LABEL_20;
    mAtlas = v10->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseDefaultUIAtlas, (int32_t)mAtlas, v8, v9);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v16 = this->fields.base2Sprite;
    if ( v16 )
    {
      v17 = v16->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v17;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.base2DefaultUIAtlas, (int32_t)v17, v14, v15);
      goto LABEL_19;
    }
LABEL_20:
    sub_1B64324(transform);
  }
LABEL_19:
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UIWidget__TypeInfo,
                                                       v13,
                                                       v14);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.switchSkillUIList, (int32_t)v18, v19, v20);
}


void __fastcall WarBoardPartyOrganizationListViewItemDraw__ClearItem(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *noneEquipSprite; // x20

  if ( (byte_49FA2EE & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FA2EE = 1;
  }
  this->fields.linkItem = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.linkItem, 0, v2, v3);
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
    sub_1B64324(gameObject);
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

  if ( (byte_49FA2F1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isDisp);
    byte_49FA2F1 = 1;
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
      ShiningIconComponent__Set_37919868((ShiningIconComponent_o *)baseSprite, 0, 0LL);
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
    sub_1B64324(baseSprite);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyOrganizationListViewItemDraw__SetItem(
        WarBoardPartyOrganizationListViewItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
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
  __int64 v33; // x2
  System_Collections_Generic_List_object__o *v34; // x20
  void *gameObject; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v41; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  UnityEngine_Object_o *v44; // x20
  UnityEngine_Object_o *v45; // x20
  UnityEngine_Object_o *servantFaceIcon; // x22
  int32_t CardImageLimitCount; // w22
  Il2CppObject *MasterData_object; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v52; // w22
  int32_t v53; // w23
  SkillInfo_array *v54; // x22
  System_String_o *v55; // x24
  int32_t lv; // w25
  SkillInfo_array *v57; // x0
  System_String_o *LevelList_38083912; // x23
  UnityEngine_Object_o *servantClassIcon; // x22
  UnityEngine_Object_o *levelLabel; // x22
  UILabel_o *v61; // x28
  UnityEngine_Object_o *raritySprite; // x22
  int32_t rarityId; // w28
  int32_t ExceedCount; // w29
  int32_t Level; // w22
  System_String_o *Icon_37389972; // x28
  System_String_o *v67; // x26
  Il2CppObject *Master_object; // x0
  int32_t v69; // w22
  ServantExceedMaster_o *v70; // x29
  int32_t RarityIcon; // w29
  Il2CppObject *v72; // x0
  int32_t v73; // w22
  ServantLvDetailMaster_o *v74; // x23
  int32_t v75; // w29
  struct FollowerInfo_o *followerInfo; // x8
  System_String_o *v77; // x29
  int imageSvtId; // w22
  UnityEngine_Object_o *v79; // x23
  ServantFaceIconComponent_o *v80; // x24
  int32_t v81; // w24
  Il2CppObject *v82; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // kr10_16
  int32_t v84; // w24
  SkillInfo_array *v85; // x22
  ServantLeaderInfo_o *v86; // x28
  SkillInfo_array *v87; // x22
  UISprite_o *v88; // x22
  float x; // s10
  float y; // s8
  float z; // s9
  int32_t v92; // w8
  UnityEngine_Object_o *attackLabel; // x22
  int32_t AdjustAtk; // w0
  float v95; // s1
  int v96; // w8
  float v97; // s2
  float v98; // s0
  float v99; // s3
  UILabel_o *v100; // x28
  UnityEngine_Object_o *hpLabel; // x22
  int32_t AdjustHp; // w0
  float v103; // s1
  int v104; // w8
  float v105; // s2
  float v106; // s0
  float v107; // s3
  UILabel_o *v108; // x28
  UnityEngine_Object_o *costLabel; // x22
  int32_t EquipCost; // w0
  UILabel_o *v111; // x28
  int v112; // w29
  int32_t MainCost; // w0
  Il2CppObject *v114; // x22
  Il2CppObject *v115; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  int32_t v117; // w2
  int32_t v118; // w3
  Il2CppObject *v119; // x1
  __int64 v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  __int64 v123; // x8
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
  UnityEngine_Object_o *v136; // x22
  UnityEngine_Object_o *v137; // x22
  const MethodInfo *v138; // x2
  UnityEngine_Object_o *v139; // x21
  UnityEngine_Object_o *v140; // x21
  bool isEventUpVal; // w23
  UnityEngine_Object_o *appendSkillList; // x22
  int32_t v143; // w2
  int32_t v144; // w3
  Il2CppObject *v145; // x1
  __int64 v146; // x8
  _QWORD *v147; // x9
  __int64 v148; // x10
  __int64 v149; // x8
  UnityEngine_Object_o *switchSkillInfo; // x22
  struct System_Collections_Generic_List_UIWidget__o *v151; // x0
  SwitchUIWidgetComponent_o *v152; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  System_Int32_array *v154; // x23
  ServantCommandCardListComponent_o *v155; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v156; // kr20_16
  ServantCommandCardListComponent_o *v157; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // kr30_16
  UnityEngine_Object_o *supportSprite; // x22
  UserServantEntity_o *userServantEntity; // x0
  __int64 *v161; // x8
  System_String_o *v162; // x1
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  struct FollowerInfo_o *v164; // x22
  UnityEngine_Object_o *fixNpcMessageText; // x22
  struct FollowerInfo_o *v166; // x22
  UILabel_o *v167; // x23
  UnityEngine_Object_o *noneEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr40_16
  int32_t v170; // w23
  UISprite_o *equipSprite; // x22
  UnityEngine_Object_o *v172; // x22
  int v173; // w24
  void *v174; // x23
  bool v175; // w1
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  UnityEngine_Object_o *correctionIconSprite; // x22
  struct EventMargeItemUpValInfo_array *v178; // x8
  float v179; // s8
  WarBoardPartyOrganizationListViewItemDraw_c *v180; // x0
  __int64 v181; // x8
  UISprite_o *v182; // x21
  System_String_o *v183; // x0
  UnityEngine_Object_o *restrictionClassSprite; // x21
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v186; // x22
  UIAtlas_o *baseDefaultUIAtlas; // x21
  UnityEngine_Object_o *base2Sprite; // x21
  UISprite_o *v189; // x22
  UIAtlas_o *base2DefaultUIAtlas; // x21
  UnityEngine_Object_o *eventUpValIcon; // x21
  EventUpValIconComponent_o *v192; // x21
  UnityEngine_Object_o *bounusIcon; // x20
  bool v194; // w1
  UnityEngine_Object_o *v195; // x20
  UnityEngine_Object_o *baseButton; // x20
  int32_t strengthStatus; // [xsp+Ch] [xbp-D4h]
  int32_t treasureDeviceNum; // [xsp+10h] [xbp-D0h]
  int32_t frameType; // [xsp+14h] [xbp-CCh]
  int v200; // [xsp+18h] [xbp-C8h] BYREF
  int32_t v201; // [xsp+1Ch] [xbp-C4h] BYREF
  __int64 v202; // [xsp+20h] [xbp-C0h]
  float v203; // [xsp+28h] [xbp-B8h]
  __int64 v204; // [xsp+30h] [xbp-B0h] BYREF
  SkillInfo_array *v205; // [xsp+38h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *v206; // [xsp+40h] [xbp-A0h] BYREF
  SkillInfo_array *v207; // [xsp+48h] [xbp-98h] BYREF
  SkillInfo_array *v208; // [xsp+50h] [xbp-90h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+58h] [xbp-88h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v211; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v212; // 0:x0.16
  UnityEngine_Vector3_o v213; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v215; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FA2EF & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantExceedMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&int_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Clear__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___75651256, v17);
    sub_1B640C8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v18);
    sub_1B640C8(&LocalizationManager_TypeInfo, v19);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v20);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B640C8(&Rarity_TypeInfo, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B640C8(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v24);
    sub_1B640C8(&StringLiteral_20111/*"icon_support_02"*/, v25);
    sub_1B640C8(&StringLiteral_861/*"+"*/, v26);
    sub_1B640C8(&StringLiteral_18201/*"correction_icon_"*/, v27);
    sub_1B640C8(&StringLiteral_20071/*"icon_eventjoin_02"*/, v28);
    sub_1B640C8(&StringLiteral_10264/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, v29);
    sub_1B640C8(&StringLiteral_430/*"#,0"*/, v30);
    sub_1B640C8(&StringLiteral_1/*""*/, v31);
    byte_49FA2EF = 1;
  }
  skillInfoList = 0LL;
  v208 = 0LL;
  tdInfo = 0LL;
  v206 = 0LL;
  v207 = 0LL;
  v204 = 0LL;
  v205 = 0LL;
  v203 = 0.0;
  v202 = 0LL;
  this->fields.linkItem = item;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.linkItem, (int32_t)item, mode, (int32_t)method);
  v34 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !item )
    goto LABEL_402;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)item->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v34 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                         v36,
                                                         v37);
    System_Collections_Generic_List_object____ctor_55234504(
      v34,
      eventUpValItemList,
      (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___75651256);
  }
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_402;
  size = switchSkillUIList->fields._size;
  v41 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v41;
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
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_402;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(SvtId, 0LL);
      if ( !MasterData_object )
        goto LABEL_402;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     (ServantLimitImageMaster_o *)MasterData_object,
                                     (int32_t)gameObject,
                                     CardImageLimitCount,
                                     0LL);
      servantNarrowTexture = this->fields.servantNarrowTexture;
      v52 = ServantImageLimitSealAfter;
      v211 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v211, 0LL);
      if ( !servantNarrowTexture )
        goto LABEL_402;
      UINarrowFigureTexture__SetCharacter(servantNarrowTexture, (int32_t)gameObject, v52, 0LL, 0LL);
      frameType = item->fields.frameType;
      gameObject = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(item, 0LL);
      if ( !item->fields.userServantEntity )
        goto LABEL_402;
      v53 = (int)gameObject;
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
      UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)gameObject, &tdInfo, -1, v53, 0, 0LL);
      v54 = skillInfoList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__GetLevelList_38083912(v54, 0LL);
      if ( !tdInfo )
        goto LABEL_402;
      v55 = (System_String_o *)gameObject;
      gameObject = item->fields.userServantEntity;
      if ( !gameObject )
        goto LABEL_402;
      lv = tdInfo->fields.lv;
      strengthStatus = tdInfo->fields.strengthStatus;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      UserServantEntity__GetAppendPassiveSkillInfo_39898768((UserServantEntity_o *)gameObject, &v208, 0LL);
      v57 = v208;
    }
    else
    {
      followerInfo = item->fields.followerInfo;
      LevelList_38083912 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !followerInfo )
      {
        strengthStatus = 0;
        treasureDeviceNum = 0;
        lv = 0;
        frameType = 9;
        v55 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_54;
      }
      v77 = (System_String_o *)StringLiteral_1/*""*/;
      imageSvtId = followerInfo->fields.imageSvtId;
      v79 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v79, 0LL, 0LL) )
      {
        v80 = this->fields.servantFaceIcon;
        gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
        if ( !v80 )
          goto LABEL_402;
        ServantFaceIconComponent__Set_37909296(v80, (ServantLeaderInfo_o *)gameObject, 0LL, 0LL, 0, imageSvtId, 0LL);
      }
      v81 = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0LL);
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_402;
      v82 = DataManager__GetMasterData_object_(
              (DataManager_o *)gameObject,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v83 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v83, 0LL);
      if ( !v82 )
        goto LABEL_402;
      v84 = ServantLimitImageMaster__GetServantImageLimitSealAfter(
              (ServantLimitImageMaster_o *)v82,
              (int32_t)gameObject,
              v81,
              0LL);
      if ( imageSvtId <= 0 )
      {
        v212 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
        imageSvtId = BasicHelper__DecryptValue_40698696(v212, 0LL);
      }
      gameObject = this->fields.servantNarrowTexture;
      if ( !gameObject )
        goto LABEL_402;
      UINarrowFigureTexture__SetCharacter((UINarrowFigureTexture_o *)gameObject, imageSvtId, v84, 0LL, 0LL);
      frameType = item->fields.frameType;
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !gameObject )
        goto LABEL_402;
      ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)gameObject, &v207, 0LL);
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !gameObject )
        goto LABEL_402;
      ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)gameObject, &v206, 0LL);
      v85 = v207;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__GetLevelList_38083912(v85, 0LL);
      if ( !v206 )
        goto LABEL_402;
      lv = v206->fields.lv;
      v55 = (System_String_o *)gameObject;
      strengthStatus = v206->fields.strengthStatus;
      treasureDeviceNum = v206->fields.treasureDeviceNum;
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !item->fields.followerInfo )
        goto LABEL_402;
      v86 = (ServantLeaderInfo_o *)gameObject;
      gameObject = (void *)FollowerInfo__get_IsNpc(item->fields.followerInfo, 0LL);
      if ( !v86 )
        goto LABEL_402;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_40171876(v86, &v205, (unsigned __int8)gameObject & 1, 0LL);
      v87 = v205;
      if ( !v205 )
      {
        LevelList_38083912 = v77;
        goto LABEL_54;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v57 = v87;
    }
    LevelList_38083912 = LocalizationManager__GetLevelList_38083912(v57, 0LL);
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
        v61 = this->fields.levelLabel;
        HIDWORD(v204) = PartyOrganizationListViewItem__get_Level(item, 0LL);
        gameObject = System_Int32__ToString((int32_t)&v204 + 4, 0LL);
        if ( !v61 )
          goto LABEL_402;
        UILabel__set_text(v61, (System_String_o *)gameObject, 0LL);
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
        Icon_37389972 = Rarity__getIcon_37389972(rarityId, ExceedCount, Level, 0LL);
        if ( PartyOrganizationListViewItem__get_ExceedCount(item, 0LL) < 1 )
        {
          v75 = 0;
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v67 = LevelList_38083912;
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantExceedMaster___);
          v69 = item->fields.rarityId;
          v70 = (ServantExceedMaster_o *)Master_object;
          gameObject = (void *)PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
          if ( !v70 )
            goto LABEL_402;
          RarityIcon = ServantExceedMaster__GetRarityIcon(v70, v69, (int32_t)gameObject, 0, 0LL);
          v72 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
          v73 = item->fields.rarityId;
          v74 = (ServantLvDetailMaster_o *)v72;
          gameObject = (void *)PartyOrganizationListViewItem__get_Level(item, 0LL);
          if ( !v74 )
            goto LABEL_402;
          v75 = ServantLvDetailMaster__GetRarityIcon(v74, v73, (int32_t)gameObject, RarityIcon, 0LL);
          LevelList_38083912 = v67;
        }
        v88 = this->fields.raritySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( v75 >= 3 )
          AtlasManager__SetEventSprite(v88, Icon_37389972, 0LL);
        else
          AtlasManager__SetCommon(v88, 0LL);
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, Icon_37389972, 0LL);
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_402;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)gameObject + 840LL))(
          gameObject,
          *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
        x = this->fields.baseRarityPosition.fields.x;
        y = this->fields.baseRarityPosition.fields.y;
        z = this->fields.baseRarityPosition.fields.z;
        v92 = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
        gameObject = this->fields.raritySprite;
        if ( v92 >= 1 )
          x = x + 1.0;
        if ( !gameObject )
          goto LABEL_402;
        gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_402;
        v213.fields.x = x;
        v213.fields.y = y;
        v213.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v213, 0LL);
      }
      attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
      {
        AdjustAtk = PartyOrganizationListViewItem__get_AdjustAtk(item, 0LL);
        v95 = 0.92157;
        v96 = AdjustAtk;
        gameObject = this->fields.attackLabel;
        if ( v96 <= 0 )
          v97 = 1.0;
        else
          v97 = 0.015686;
        if ( v96 <= 0 )
          v95 = 1.0;
        if ( !gameObject )
          goto LABEL_402;
        v98 = 1.0;
        v99 = 1.0;
        UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v95 - 1), 0LL);
        v100 = this->fields.attackLabel;
        HIDWORD(v204) = PartyOrganizationListViewItem__get_MargeAtk(item, 0LL);
        gameObject = System_Int32__ToString_62180668((int32_t)&v204 + 4, (System_String_o *)StringLiteral_430/*"#,0"*/, 0LL);
        if ( !v100 )
          goto LABEL_402;
        UILabel__set_text(v100, (System_String_o *)gameObject, 0LL);
      }
      hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
      {
        AdjustHp = PartyOrganizationListViewItem__get_AdjustHp(item, 0LL);
        v103 = 0.92157;
        v104 = AdjustHp;
        gameObject = this->fields.hpLabel;
        if ( v104 <= 0 )
          v105 = 1.0;
        else
          v105 = 0.015686;
        if ( v104 <= 0 )
          v103 = 1.0;
        if ( !gameObject )
          goto LABEL_402;
        v106 = 1.0;
        v107 = 1.0;
        UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v103 - 1), 0LL);
        v108 = this->fields.hpLabel;
        HIDWORD(v204) = PartyOrganizationListViewItem__get_MargeHp(item, 0LL);
        gameObject = System_Int32__ToString_62180668((int32_t)&v204 + 4, (System_String_o *)StringLiteral_430/*"#,0"*/, 0LL);
        if ( !v108 )
          goto LABEL_402;
        UILabel__set_text(v108, (System_String_o *)gameObject, 0LL);
      }
      costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(costLabel, 0LL, 0LL) )
      {
        EquipCost = PartyOrganizationListViewItem__get_EquipCost(item, 0LL);
        v111 = this->fields.costLabel;
        v112 = EquipCost;
        MainCost = PartyOrganizationListViewItem__get_MainCost(item, 0LL);
        if ( (v112 & 0x80000000) != 0 )
        {
          HIDWORD(v204) = MainCost;
          gameObject = System_Int32__ToString((int32_t)&v204 + 4, 0LL);
          if ( !v111 )
            goto LABEL_402;
          UILabel__set_text(v111, (System_String_o *)gameObject, 0LL);
        }
        else
        {
          v201 = MainCost;
          v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v201);
          v200 = v112;
          v115 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v200);
          gameObject = System_String__Concat_61386408(v114, (Il2CppObject *)StringLiteral_861/*"+"*/, v115, 0LL);
          if ( !v111 )
            goto LABEL_402;
          UILabel__set_text(v111, (System_String_o *)gameObject, 0LL);
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
          v55,
          lv,
          strengthStatus,
          treasureDeviceNum,
          0,
          0LL);
        if ( !System_String__IsNullOrEmpty(v55, 0LL) )
        {
          gameObject = this->fields.switchSkillUIList;
          if ( gameObject )
          {
            v119 = (Il2CppObject *)this->fields.skillInfoUiWidget;
            v120 = *((_QWORD *)gameObject + 2);
            v121 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++*((_DWORD *)gameObject + 7);
            if ( !v120 )
              goto LABEL_402;
            v122 = *((int *)gameObject + 6);
            if ( (unsigned int)v122 >= *(_DWORD *)(v120 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)gameObject,
                v119,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
            }
            else
            {
              v123 = v120 + 8 * v122;
              *((_DWORD *)gameObject + 6) = v122 + 1;
              *(_QWORD *)(v123 + 32) = v119;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v123 + 32), (int32_t)v119, v117, v118);
            }
          }
        }
      }
      appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
      {
        if ( System_String__IsNullOrEmpty(LevelList_38083912, 0LL) )
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
            v145 = (Il2CppObject *)this->fields.appendSkillInfoUiWidget;
            v146 = *((_QWORD *)gameObject + 2);
            v147 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++*((_DWORD *)gameObject + 7);
            if ( !v146 )
              goto LABEL_402;
            v148 = *((int *)gameObject + 6);
            if ( (unsigned int)v148 >= *(_DWORD *)(v146 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)gameObject,
                v145,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
            }
            else
            {
              v149 = v146 + 8 * v148;
              *((_DWORD *)gameObject + 6) = v148 + 1;
              *(_QWORD *)(v149 + 32) = v145;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v149 + 32), (int32_t)v145, v143, v144);
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
          AppendSkillListComponent__Set((AppendSkillListComponent_o *)gameObject, LevelList_38083912, 0LL);
        }
      }
      switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
      {
        v151 = this->fields.switchSkillUIList;
        if ( v151 )
        {
          v152 = this->fields.switchSkillInfo;
          gameObject = System_Collections_Generic_List_object___ToArray(
                         (System_Collections_Generic_List_object__o *)v151,
                         (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
          if ( !v152 )
            goto LABEL_402;
          SwitchUIWidgetComponent__Set(v152, (UIWidget_array *)gameObject, 0LL);
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
            v154 = (System_Int32_array *)*((_QWORD *)gameObject + 26);
          }
          else
          {
            v154 = 0LL;
          }
          v157 = this->fields.svtCommandCardList;
          v158 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v158, 0LL);
          if ( v157 )
          {
            ServantCommandCardListComponent__Set_37898232(
              v157,
              (int32_t)gameObject,
              v154,
              item->fields.commandCodeIdList,
              2,
              0,
              0LL);
            goto LABEL_282;
          }
LABEL_402:
          sub_1B64324(gameObject);
        }
        v155 = this->fields.svtCommandCardList;
        v156 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v156, 0LL);
        if ( !v155 )
          goto LABEL_402;
        ServantCommandCardListComponent__Set_37898476(
          v155,
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
          v164 = item->fields.followerInfo;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v164 != 0LL, 0LL);
        }
        fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0LL, 0LL) )
        {
          gameObject = this->fields.fixNpcMessageText;
          if ( !gameObject )
            goto LABEL_402;
          v166 = item->fields.followerInfo;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_402;
          if ( v166 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            v167 = this->fields.fixNpcMessageText;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10264/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0LL);
            if ( !v167 )
              goto LABEL_402;
            UILabel__set_text(v167, (System_String_o *)gameObject, 0LL);
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
        gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(EquipSvtId, 0LL);
        if ( !this->fields.noneEquipSprite )
          goto LABEL_402;
        v170 = (int)gameObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.noneEquipSprite, 0LL);
        if ( !gameObject )
          goto LABEL_402;
        if ( v170 < 1 )
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
          v175 = 0;
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
          AtlasManager__SetEquipFace(equipSprite, v170, 0LL);
          v172 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v172, 0LL, 0LL) )
            goto LABEL_342;
          gameObject = (void *)PartyOrganizationListViewItem__get_EquipLimitCountMax(item, 0LL);
          if ( !this->fields.equipLimitCountSprite )
            goto LABEL_402;
          v173 = (int)gameObject;
          gameObject = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                         0LL);
          v174 = gameObject;
          if ( v173 < 1 )
          {
            v175 = 0;
          }
          else
          {
            gameObject = (void *)PartyOrganizationListViewItem__get_EquipLimitCount(item, 0LL);
            v175 = (int)gameObject >= v173;
          }
          if ( !v174 )
            goto LABEL_402;
          gameObject = v174;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v175, 0LL);
LABEL_342:
        correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
        isEventUpVal = item->fields.isEventUpVal;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
        {
          LODWORD(v204) = PartyOrganizationListViewItem__GetCorrectionIconId(item, 0LL);
          gameObject = this->fields.correctionIconSprite;
          if ( !gameObject )
            goto LABEL_402;
          if ( (v204 & 0x80000000) != 0 )
          {
            UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
          }
          else
          {
            gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_402;
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
            *(float *)&v202 = localPosition.fields.x;
            v203 = localPosition.fields.z;
            v178 = item->fields.eventUpValItemList;
            v179 = localPosition.fields.x;
            if ( v178 && *(_QWORD *)&v178->max_length )
            {
              v180 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              if ( !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
                v180 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              }
              v181 = 16LL;
            }
            else
            {
              v180 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              if ( !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
                v180 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              }
              v181 = 12LL;
            }
            *((float *)&v202 + 1) = (float)*(int *)((char *)&v180->static_fields->RestrictionClassSpriteNameFormat + v181);
            gameObject = this->fields.correctionIconSprite;
            if ( !gameObject )
              goto LABEL_402;
            gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_402;
            v215.fields.y = *((float *)&v202 + 1);
            v215.fields.z = v203;
            v215.fields.x = v179;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v215, 0LL);
            v182 = this->fields.correctionIconSprite;
            v183 = System_Int32__ToString((int32_t)&v204, 0LL);
            gameObject = System_String__Concat_61375396((System_String_o *)StringLiteral_18201/*"correction_icon_"*/, v183, 0LL);
            if ( !v182 )
              goto LABEL_402;
            UISprite__set_spriteName(v182, (System_String_o *)gameObject, 0LL);
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
          v186 = this->fields.baseSprite;
          baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetFormationBase(v186, frameType, baseDefaultUIAtlas, 0, 0LL);
        }
        base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
        {
          v189 = this->fields.base2Sprite;
          base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetFormationFrame(v189, frameType, base2DefaultUIAtlas, 0, 0LL);
        }
        eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (void *)UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v34 )
            goto LABEL_402;
          v192 = this->fields.eventUpValIcon;
          gameObject = System_Collections_Generic_List_object___ToArray(
                         v34,
                         (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
          if ( !v192 )
            goto LABEL_402;
          EventUpValIconComponent__Set(v192, (EventMargeItemUpValInfo_array *)gameObject, -1, -1, -1, 0LL);
          bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
            goto LABEL_396;
          gameObject = this->fields.bounusIcon;
          if ( !gameObject )
            goto LABEL_402;
          v194 = 0;
        }
        else
        {
          v195 = (UnityEngine_Object_o *)this->fields.bounusIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v195, 0LL, 0LL) )
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
          v194 = isEventUpVal;
        }
        ShiningIconComponent__Set_37919868((ShiningIconComponent_o *)gameObject, v194, 0LL);
        goto LABEL_396;
      }
      userServantEntity = item->fields.userServantEntity;
      if ( userServantEntity && UserServantEntity__IsEventJoin(userServantEntity, 0LL) )
      {
        gameObject = this->fields.supportSprite;
        if ( !gameObject )
          goto LABEL_402;
        v161 = &StringLiteral_20071/*"icon_eventjoin_02"*/;
      }
      else
      {
        gameObject = this->fields.supportSprite;
        if ( !gameObject )
          goto LABEL_402;
        if ( !item->fields.followerInfo )
        {
          v162 = 0LL;
          goto LABEL_294;
        }
        v161 = &StringLiteral_20111/*"icon_support_02"*/;
      }
      v162 = (System_String_o *)*v161;
LABEL_294:
      UISprite__set_spriteName((UISprite_o *)gameObject, v162, 0LL);
      goto LABEL_295;
    }
    v124 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v124, 0LL, 0LL) )
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
      v125 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v125, 0LL, 0LL) )
      {
        gameObject = this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_402;
        ServantClassIconComponent__Clear((ServantClassIconComponent_o *)gameObject, 0LL);
      }
      v126 = (UnityEngine_Object_o *)this->fields.levelLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v126, 0LL, 0LL) )
      {
        gameObject = this->fields.levelLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v127 = (UnityEngine_Object_o *)this->fields.raritySprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v127, 0LL, 0LL) )
      {
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
      }
      v128 = (UnityEngine_Object_o *)this->fields.attackLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v128, 0LL, 0LL) )
      {
        gameObject = this->fields.attackLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v129 = (UnityEngine_Object_o *)this->fields.hpLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v129, 0LL, 0LL) )
      {
        gameObject = this->fields.hpLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v130 = (UnityEngine_Object_o *)this->fields.costLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v130, 0LL, 0LL) )
      {
        gameObject = this->fields.costLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v131 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v131, 0LL, 0LL) )
      {
        gameObject = this->fields.skillListTreasureDevice;
        if ( !gameObject )
          goto LABEL_402;
        SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)gameObject, 0LL);
      }
      v132 = (UnityEngine_Object_o *)this->fields.appendSkillList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v132, 0LL, 0LL) )
      {
        gameObject = this->fields.appendSkillList;
        if ( !gameObject )
          goto LABEL_402;
        AppendSkillListComponent__Clear((AppendSkillListComponent_o *)gameObject, 0LL);
      }
      v133 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v133, 0LL, 0LL) )
      {
        gameObject = this->fields.svtCommandCardList;
        if ( !gameObject )
          goto LABEL_402;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0LL);
      }
      v134 = (UnityEngine_Object_o *)this->fields.supportSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v134, 0LL, 0LL) )
      {
        gameObject = this->fields.supportSprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
      }
      v135 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v135, 0LL, 0LL) )
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
        v136 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v136, 0LL, 0LL) )
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
      v137 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v137, 0LL, 0LL) )
      {
        gameObject = this->fields.correctionIconSprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
      }
      WarBoardPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(this, item, v138);
      v139 = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v139, 0LL, 0LL) )
      {
        gameObject = this->fields.fixNpcMessageFrameSprite;
        if ( !gameObject )
          goto LABEL_402;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      v140 = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v140, 0LL, 0LL) )
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
  v44 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v44, 0LL, 0LL) )
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
    v45 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
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
  __int64 v22; // x0
  __int64 v23; // x0
  void *MasterData_object; // x0
  WarBoardIndividualityClassMaster_o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int v29; // w25
  __int64 v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_int__o *v33; // x22
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x22
  WarBoardPartyOrganizationListViewItemDraw___c_c *v39; // x0
  System_Func_object__bool__o *_9__40_0; // x23
  Il2CppObject *v41; // x24
  struct WarBoardPartyOrganizationListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_Collections_Generic_IEnumerable_T__o *v45; // x22
  __int64 v46; // x1
  __int64 v47; // x2
  System_Action_object__o *v48; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  System_Int32_array *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x8
  __int64 v53; // x8
  WarBoardPartyOrganizationListViewItemDraw_c *v54; // x0
  System_String_o *RestrictionClassSpriteNameFormat; // x20
  Il2CppObject *v56; // x0
  System_String_o *v57; // x20
  int v58; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FA2F0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_RestrictionEntity__TypeInfo, item);
    sub_1B640C8(&Method_BasicHelper_ForEach_RestrictionEntity___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Distinct_int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v9);
    sub_1B640C8(&System_Func_RestrictionEntity__bool__TypeInfo, v10);
    sub_1B640C8(&int_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15);
    sub_1B640C8(&Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__, v16);
    sub_1B640C8(
      &Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__,
      v17);
    sub_1B640C8(&WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo, v18);
    sub_1B640C8(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo, v19);
    sub_1B640C8(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v20);
    byte_49FA2F0 = 1;
  }
  restrictionClassSprite = (UnityEngine_Object_o *)this->fields.restrictionClassSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionClassSprite, 0LL, 0LL) )
  {
    v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1BB5FA4(v22);
    v23 = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 16LL);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1BB5FA4(v23);
    MasterData_object = **(void ***)(v23 + 184);
    if ( MasterData_object )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)MasterData_object,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
      if ( MasterData_object )
      {
        v25 = (WarBoardIndividualityClassMaster_o *)MasterData_object;
        MasterData_object = WarBoardIndividualityClassMaster__GetAllClassServantEntity(
                              (WarBoardIndividualityClassMaster_o *)MasterData_object,
                              0LL);
        if ( MasterData_object )
        {
          if ( item )
          {
            questRestrictionInfo = item->fields.questRestrictionInfo;
            v29 = *((_DWORD *)MasterData_object + 11);
            if ( questRestrictionInfo && questRestrictionInfo->fields.restrictionEntityList )
            {
              v30 = sub_1B64314(WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo, v26, v27);
              System_Object___ctor((Il2CppObject *)v30, 0LL);
              v33 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                                System_Collections_Generic_List_int__TypeInfo,
                                                                v31,
                                                                v32);
              System_Collections_Generic_List_int____ctor(
                v33,
                (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v30 )
                goto LABEL_36;
              *(_QWORD *)(v30 + 16) = v33;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 16), (int32_t)v33, v34, v35);
              restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
              v39 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              if ( !WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo);
                v39 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              }
              _9__40_0 = (System_Func_object__bool__o *)v39->static_fields->__9__40_0;
              if ( !_9__40_0 )
              {
                if ( !v39->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v39);
                  v39 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
                }
                v41 = (Il2CppObject *)v39->static_fields->__9;
                _9__40_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                            System_Func_RestrictionEntity__bool__TypeInfo,
                                                            v36,
                                                            v37);
                System_Func_object__bool____ctor(
                  _9__40_0,
                  v41,
                  Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__,
                  0LL);
                static_fields = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
                static_fields->__9__40_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__40_0;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__40_0, (int32_t)_9__40_0, v43, v44);
              }
              v45 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                                     restrictionEntityList,
                                                                     (System_Func_TSource__bool__o *)_9__40_0,
                                                                     (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
              v48 = (System_Action_object__o *)sub_1B64314(System_Action_RestrictionEntity__TypeInfo, v46, v47);
              System_Action_object____ctor(
                v48,
                (Il2CppObject *)v30,
                Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__,
                0LL);
              BasicHelper__ForEach_object_(
                v45,
                (System_Action_T__o *)v48,
                (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_RestrictionEntity___);
              v49 = System_Linq_Enumerable__Distinct_int_(
                      *(System_Collections_Generic_IEnumerable_TSource__o **)(v30 + 16),
                      (const MethodInfo_2E57DA0 *)Method_System_Linq_Enumerable_Distinct_int___);
              v50 = System_Linq_Enumerable__ToArray_int_(
                      v49,
                      (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
              MasterData_object = WarBoardIndividualityClassMaster__GetServantClassEntities(v25, v50, 0LL);
              if ( MasterData_object )
              {
                v52 = *((_QWORD *)MasterData_object + 3);
                if ( v52 )
                {
                  if ( !(_DWORD)v52 )
                    sub_1B6432C(MasterData_object, v51);
                  v53 = *((_QWORD *)MasterData_object + 4);
                  if ( !v53 )
                    goto LABEL_36;
                  v29 = *(_DWORD *)(v53 + 44);
                }
              }
            }
            v54 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            if ( !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo);
              v54 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            }
            RestrictionClassSpriteNameFormat = v54->static_fields->RestrictionClassSpriteNameFormat;
            v58 = v29;
            v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58);
            MasterData_object = System_String__Format(RestrictionClassSpriteNameFormat, v56, 0LL);
            if ( this->fields.restrictionClassSprite )
            {
              v57 = (System_String_o *)MasterData_object;
              MasterData_object = UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)this->fields.restrictionClassSprite,
                                    0LL);
              if ( MasterData_object )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
                MasterData_object = this->fields.restrictionClassSprite;
                if ( MasterData_object )
                {
                  UISprite__set_spriteName((UISprite_o *)MasterData_object, v57, 0LL);
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
    sub_1B64324(MasterData_object);
  }
}


void __fastcall WarBoardPartyOrganizationListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA2F3 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo, v1);
    byte_49FA2F3 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct WarBoardPartyOrganizationListViewItemDraw___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
  if ( (byte_49FA2F4 & 1) == 0 )
  {
    this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)sub_1B640C8(
                                                                                  &Method_System_Collections_Generic_List_int__AddRange__,
                                                                                  x);
    byte_49FA2F4 = 1;
  }
  if ( !x
    || (this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)v4->fields.indivisualities) == 0LL )
  {
    sub_1B64324(this);
  }
  System_Collections_Generic_List_int___AddRange(
    (System_Collections_Generic_List_int__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)x->fields.targetVals,
    (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
}