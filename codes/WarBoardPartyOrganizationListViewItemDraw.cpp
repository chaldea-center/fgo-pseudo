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
  __int64 v9; // x2
  struct WarBoardPartyOrganizationListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4B1403B & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_18169/*"class2_{0}"*/, v8, v9);
    byte_4B1403B = 1;
  }
  WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields->RestrictionClassSpriteNameFormat = (struct System_String_o *)StringLiteral_18169/*"class2_{0}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardPartyOrganizationListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_18169/*"class2_{0}"*/,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v9; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *baseSprite; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct UISprite_o *v18; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  int64_t v21; // x2
  __int64 v22; // x3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct UISprite_o *v27; // x8
  struct UIAtlas_o *v28; // x1
  System_Collections_Generic_List_object__o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4B14036 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_UIWidget__TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B14036 = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v18 = this->fields.baseSprite;
    if ( !v18 )
      goto LABEL_20;
    mAtlas = v18->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = mAtlas;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.baseDefaultUIAtlas,
      (int64_t)mAtlas,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v27 = this->fields.base2Sprite;
    if ( v27 )
    {
      v28 = v27->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v28;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.base2DefaultUIAtlas,
        (int64_t)v28,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      goto LABEL_19;
    }
LABEL_20:
    sub_1BCAA3C(transform, v9);
  }
LABEL_19:
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UIWidget__TypeInfo,
                                                       v9,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.switchSkillUIList, (int64_t)v29, v30, v31, v32, v33, v34, v35);
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
  __int64 v11; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20

  if ( (byte_4B14037 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B14037 = 1;
  }
  this->fields.linkItem = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
    sub_1BCAA3C(gameObject, v10);
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
  __int64 v7; // x1
  UnityEngine_Object_o *eventUpValIcon; // x20
  __int64 v9; // x1
  UnityEngine_Object_o *bounusIcon; // x20
  UnityEngine_Object_o *correctionIconSprite; // x20

  if ( (byte_4B1403A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isDisp, method);
    byte_4B1403A = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL) )
  {
    baseSprite = (UnityEngine_Component_o *)this->fields.eventUpValIcon;
    if ( !baseSprite )
      goto LABEL_46;
    EventUpValIconComponent__Set((EventUpValIconComponent_o *)baseSprite, 0LL, -1, -1, -1, 0LL);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
    {
      baseSprite = (UnityEngine_Component_o *)this->fields.bounusIcon;
      if ( !baseSprite )
        goto LABEL_46;
      ShiningIconComponent__Set_38945552((ShiningIconComponent_o *)baseSprite, 0, 0LL);
    }
  }
  correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
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
    sub_1BCAA3C(baseSprite, isDisp);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  System_Collections_Generic_List_object__o *v64; // x20
  void *gameObject; // x0
  signed __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  System_Collections_Generic_IEnumerable_T__o *eventUpValItemList; // x23
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v72; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x23
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x23
  __int64 v75; // x1
  UnityEngine_Object_o *v76; // x20
  __int64 v77; // x1
  UnityEngine_Object_o *v78; // x20
  __int64 v79; // x1
  UnityEngine_Object_o *servantFaceIcon; // x22
  int32_t CardImageLimitCount; // w22
  Il2CppObject *MasterData_object; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v86; // w22
  int32_t v87; // w23
  __int64 v88; // x1
  SkillInfo_array *v89; // x22
  System_String_o *v90; // x24
  int32_t lv; // w25
  SkillInfo_array *v92; // x0
  System_String_o *LevelList_39112132; // x23
  UnityEngine_Object_o *servantClassIcon; // x22
  UnityEngine_Object_o *levelLabel; // x22
  __int64 v96; // x1
  UILabel_o *v97; // x28
  UnityEngine_Object_o *raritySprite; // x22
  __int64 v99; // x1
  int32_t rarityId; // w28
  int32_t ExceedCount; // w29
  __int64 v102; // x1
  int32_t Level; // w22
  System_String_o *Icon_38416824; // x28
  __int64 v105; // x1
  System_String_o *v106; // x26
  Il2CppObject *Master_object; // x0
  int32_t v108; // w22
  ServantExceedMaster_o *v109; // x29
  int32_t RarityIcon; // w29
  Il2CppObject *v111; // x0
  int32_t v112; // w22
  ServantLvDetailMaster_o *v113; // x23
  int32_t v114; // w29
  struct FollowerInfo_o *followerInfo; // x8
  System_String_o *v116; // x29
  int imageSvtId; // w22
  UnityEngine_Object_o *v118; // x23
  ServantFaceIconComponent_o *v119; // x24
  int32_t v120; // w24
  Il2CppObject *v121; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // kr10_16
  int32_t v123; // w24
  __int64 v124; // x1
  SkillInfo_array *v125; // x22
  ServantLeaderInfo_o *v126; // x28
  SkillInfo_array *v127; // x22
  UISprite_o *v128; // x22
  float x; // s10
  float y; // s8
  float z; // s9
  int32_t v132; // w8
  UnityEngine_Object_o *attackLabel; // x22
  __int64 v134; // x1
  int32_t AdjustAtk; // w0
  float v136; // s1
  int v137; // w8
  float v138; // s2
  float v139; // s0
  float v140; // s3
  UILabel_o *v141; // x28
  UnityEngine_Object_o *hpLabel; // x22
  __int64 v143; // x1
  int32_t AdjustHp; // w0
  float v145; // s1
  int v146; // w8
  float v147; // s2
  float v148; // s0
  float v149; // s3
  UILabel_o *v150; // x28
  UnityEngine_Object_o *costLabel; // x22
  __int64 v152; // x1
  int32_t EquipCost; // w0
  UILabel_o *v154; // x28
  int v155; // w29
  int32_t MainCost; // w0
  Il2CppObject *v157; // x22
  Il2CppObject *v158; // x0
  UnityEngine_Object_o *skillListTreasureDevice; // x22
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  __int64 v166; // x8
  _QWORD *v167; // x9
  __int64 v168; // x10
  __int64 v169; // x8
  UnityEngine_Object_o *v170; // x22
  __int64 v171; // x1
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
  __int64 v183; // x1
  UnityEngine_Object_o *v184; // x22
  UnityEngine_Object_o *v185; // x22
  const MethodInfo *v186; // x2
  __int64 v187; // x1
  UnityEngine_Object_o *v188; // x21
  UnityEngine_Object_o *v189; // x21
  bool isEventUpVal; // w23
  UnityEngine_Object_o *appendSkillList; // x22
  __int64 v192; // x1
  int64_t v193; // x2
  int32_t v194; // w3
  System_String_o *v195; // x4
  BattleSetupInfo_o *v196; // x5
  FollowerInfo_o *v197; // x6
  PartyListViewItem_o *v198; // x7
  __int64 v199; // x8
  _QWORD *v200; // x9
  __int64 v201; // x10
  __int64 v202; // x8
  UnityEngine_Object_o *switchSkillInfo; // x22
  __int64 v204; // x1
  struct System_Collections_Generic_List_UIWidget__o *v205; // x0
  SwitchUIWidgetComponent_o *v206; // x22
  UnityEngine_Object_o *svtCommandCardList; // x22
  __int64 v208; // x1
  System_Int32_array *v209; // x23
  ServantCommandCardListComponent_o *v210; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v211; // kr20_16
  ServantCommandCardListComponent_o *v212; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v213; // kr30_16
  UnityEngine_Object_o *supportSprite; // x22
  UserServantEntity_o *userServantEntity; // x0
  __int64 *v216; // x8
  System_String_o *v217; // x1
  UnityEngine_Object_o *fixNpcMessageFrameSprite; // x22
  struct FollowerInfo_o *v219; // x22
  UnityEngine_Object_o *fixNpcMessageText; // x22
  struct FollowerInfo_o *v221; // x22
  __int64 v222; // x1
  UILabel_o *v223; // x23
  UnityEngine_Object_o *noneEquipSprite; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr40_16
  int32_t v226; // w23
  __int64 v227; // x1
  UISprite_o *equipSprite; // x22
  __int64 v229; // x1
  UnityEngine_Object_o *v230; // x22
  int v231; // w24
  void *v232; // x23
  __int64 v233; // x1
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  UnityEngine_Object_o *correctionIconSprite; // x22
  __int64 v236; // x1
  struct EventMargeItemUpValInfo_array *v237; // x8
  float v238; // s8
  WarBoardPartyOrganizationListViewItemDraw_c *v239; // x0
  __int64 v240; // x8
  UISprite_o *v241; // x21
  System_String_o *v242; // x0
  UnityEngine_Object_o *restrictionClassSprite; // x21
  UnityEngine_Object_o *baseSprite; // x21
  __int64 v245; // x1
  UISprite_o *v246; // x22
  UIAtlas_o *baseDefaultUIAtlas; // x21
  UnityEngine_Object_o *base2Sprite; // x21
  __int64 v249; // x1
  UISprite_o *v250; // x22
  UIAtlas_o *base2DefaultUIAtlas; // x21
  UnityEngine_Object_o *eventUpValIcon; // x21
  EventUpValIconComponent_o *v253; // x21
  __int64 v254; // x1
  UnityEngine_Object_o *bounusIcon; // x20
  bool v256; // w1
  UnityEngine_Object_o *v257; // x20
  UnityEngine_Object_o *baseButton; // x20
  int32_t strengthStatus; // [xsp+Ch] [xbp-D4h]
  int32_t treasureDeviceNum; // [xsp+10h] [xbp-D0h]
  int32_t frameType; // [xsp+14h] [xbp-CCh]
  int v262; // [xsp+18h] [xbp-C8h] BYREF
  int32_t v263; // [xsp+1Ch] [xbp-C4h] BYREF
  __int64 v264; // [xsp+20h] [xbp-C0h]
  float v265; // [xsp+28h] [xbp-B8h]
  __int64 v266; // [xsp+30h] [xbp-B0h] BYREF
  SkillInfo_array *v267; // [xsp+38h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *v268; // [xsp+40h] [xbp-A0h] BYREF
  SkillInfo_array *v269; // [xsp+48h] [xbp-98h] BYREF
  SkillInfo_array *v270; // [xsp+50h] [xbp-90h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+58h] [xbp-88h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v273; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v274; // 0:x0.16
  UnityEngine_Vector3_o v275; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v277; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B14038 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantExceedMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&int_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Clear__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76781424, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v33, v34);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v37, v38);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39, v40);
    sub_1BCA7E0(&Rarity_TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43, v44);
    sub_1BCA7E0(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v45, v46);
    sub_1BCA7E0(&StringLiteral_20405/*"icon_support_02"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_855/*"+"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_18456/*"correction_icon_"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_20364/*"icon_eventjoin_02"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_10446/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_424/*"#,0"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v59, v60);
    byte_4B14038 = 1;
  }
  skillInfoList = 0LL;
  v270 = 0LL;
  tdInfo = 0LL;
  v268 = 0LL;
  v269 = 0LL;
  v266 = 0LL;
  v267 = 0LL;
  v265 = 0.0;
  v264 = 0LL;
  this->fields.linkItem = item;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.linkItem,
    (int64_t)item,
    *(int64_t *)&mode,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v64 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                       v61,
                                                       v62,
                                                       v63);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !item )
    goto LABEL_402;
  eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)item->fields.eventUpValItemList;
  if ( eventUpValItemList )
  {
    v64 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                         v66,
                                                         v67,
                                                         v68);
    System_Collections_Generic_List_object____ctor_56235344(
      v64,
      eventUpValItemList,
      (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76781424);
  }
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_402;
  size = switchSkillUIList->fields._size;
  v72 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v72;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v79);
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
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_402;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
          *(_QWORD *)&SvtId.fields.fakeValue);
      gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(SvtId, 0LL);
      if ( !MasterData_object )
        goto LABEL_402;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     (ServantLimitImageMaster_o *)MasterData_object,
                                     (int32_t)gameObject,
                                     CardImageLimitCount,
                                     0LL);
      servantNarrowTexture = this->fields.servantNarrowTexture;
      v86 = ServantImageLimitSealAfter;
      v273 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v273, 0LL);
      if ( !servantNarrowTexture )
        goto LABEL_402;
      UINarrowFigureTexture__SetCharacter(servantNarrowTexture, (int32_t)gameObject, v86, 0LL, 0LL);
      frameType = item->fields.frameType;
      gameObject = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(item, 0LL);
      if ( !item->fields.userServantEntity )
        goto LABEL_402;
      v87 = (int)gameObject;
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
      UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)gameObject, &tdInfo, -1, v87, 0, 0LL);
      v89 = skillInfoList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v88);
      gameObject = LocalizationManager__GetLevelList_39112132(v89, 0LL);
      if ( !tdInfo )
        goto LABEL_402;
      v90 = (System_String_o *)gameObject;
      gameObject = item->fields.userServantEntity;
      if ( !gameObject )
        goto LABEL_402;
      lv = tdInfo->fields.lv;
      strengthStatus = tdInfo->fields.strengthStatus;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      UserServantEntity__GetAppendPassiveSkillInfo_40963832((UserServantEntity_o *)gameObject, &v270, 0LL);
      v92 = v270;
    }
    else
    {
      followerInfo = item->fields.followerInfo;
      LevelList_39112132 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !followerInfo )
      {
        strengthStatus = 0;
        treasureDeviceNum = 0;
        lv = 0;
        frameType = 9;
        v90 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_54;
      }
      v116 = (System_String_o *)StringLiteral_1/*""*/;
      imageSvtId = followerInfo->fields.imageSvtId;
      v118 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v79);
      if ( UnityEngine_Object__op_Inequality(v118, 0LL, 0LL) )
      {
        v119 = this->fields.servantFaceIcon;
        gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
        if ( !v119 )
          goto LABEL_402;
        ServantFaceIconComponent__Set_38935648(v119, (ServantLeaderInfo_o *)gameObject, 0LL, 0LL, 0, imageSvtId, 0LL);
      }
      v120 = PartyOrganizationListViewItem__GetCardImageLimitCount(item, 0LL);
      gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_402;
      v121 = DataManager__GetMasterData_object_(
               (DataManager_o *)gameObject,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v122 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
          *(_QWORD *)&v122.fields.fakeValue);
      gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v122, 0LL);
      if ( !v121 )
        goto LABEL_402;
      v123 = ServantLimitImageMaster__GetServantImageLimitSealAfter(
               (ServantLimitImageMaster_o *)v121,
               (int32_t)gameObject,
               v120,
               0LL);
      if ( imageSvtId <= 0 )
      {
        v274 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
        imageSvtId = BasicHelper__DecryptValue_41845724(v274, 0LL);
      }
      gameObject = this->fields.servantNarrowTexture;
      if ( !gameObject )
        goto LABEL_402;
      UINarrowFigureTexture__SetCharacter((UINarrowFigureTexture_o *)gameObject, imageSvtId, v123, 0LL, 0LL);
      frameType = item->fields.frameType;
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !gameObject )
        goto LABEL_402;
      ServantLeaderInfo__getSkillInfo((ServantLeaderInfo_o *)gameObject, &v269, 0LL);
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !gameObject )
        goto LABEL_402;
      ServantLeaderInfo__getTreasureDeviceInfo((ServantLeaderInfo_o *)gameObject, &v268, 0LL);
      v125 = v269;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v124);
      gameObject = LocalizationManager__GetLevelList_39112132(v125, 0LL);
      if ( !v268 )
        goto LABEL_402;
      lv = v268->fields.lv;
      v90 = (System_String_o *)gameObject;
      strengthStatus = v268->fields.strengthStatus;
      treasureDeviceNum = v268->fields.treasureDeviceNum;
      gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      if ( !item->fields.followerInfo )
        goto LABEL_402;
      v126 = (ServantLeaderInfo_o *)gameObject;
      gameObject = (void *)FollowerInfo__get_IsNpc(item->fields.followerInfo, 0LL);
      if ( !v126 )
        goto LABEL_402;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_41245048(v126, &v267, (unsigned __int8)gameObject & 1, 0LL);
      v127 = v267;
      if ( !v267 )
      {
        LevelList_39112132 = v116;
        goto LABEL_54;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v79);
      v92 = v127;
    }
    LevelList_39112132 = LocalizationManager__GetLevelList_39112132(v92, 0LL);
LABEL_54:
    if ( item->fields.userServantEntity || item->fields.followerInfo )
    {
      servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v79);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
      if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
      {
        v97 = this->fields.levelLabel;
        HIDWORD(v266) = PartyOrganizationListViewItem__get_Level(item, 0LL);
        gameObject = System_Int32__ToString((int32_t)&v266 + 4, 0LL);
        if ( !v97 )
          goto LABEL_402;
        UILabel__set_text(v97, (System_String_o *)gameObject, 0LL);
      }
      raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v96);
      if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
      {
        rarityId = item->fields.rarityId;
        ExceedCount = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
        Level = PartyOrganizationListViewItem__get_Level(item, 0LL);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v102);
        Icon_38416824 = Rarity__getIcon_38416824(rarityId, ExceedCount, Level, 0LL);
        if ( PartyOrganizationListViewItem__get_ExceedCount(item, 0LL) < 1 )
        {
          v114 = 0;
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v105);
          v106 = LevelList_39112132;
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantExceedMaster___);
          v108 = item->fields.rarityId;
          v109 = (ServantExceedMaster_o *)Master_object;
          gameObject = (void *)PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
          if ( !v109 )
            goto LABEL_402;
          RarityIcon = ServantExceedMaster__GetRarityIcon(v109, v108, (int32_t)gameObject, 0, 0LL);
          v111 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
          v112 = item->fields.rarityId;
          v113 = (ServantLvDetailMaster_o *)v111;
          gameObject = (void *)PartyOrganizationListViewItem__get_Level(item, 0LL);
          if ( !v113 )
            goto LABEL_402;
          v114 = ServantLvDetailMaster__GetRarityIcon(v113, v112, (int32_t)gameObject, RarityIcon, 0LL);
          LevelList_39112132 = v106;
        }
        v128 = this->fields.raritySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v105);
        if ( v114 >= 3 )
          AtlasManager__SetEventSprite(v128, Icon_38416824, 0LL);
        else
          AtlasManager__SetCommon(v128, 0LL);
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, Icon_38416824, 0LL);
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_402;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)gameObject + 840LL))(
          gameObject,
          *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
        x = this->fields.baseRarityPosition.fields.x;
        y = this->fields.baseRarityPosition.fields.y;
        z = this->fields.baseRarityPosition.fields.z;
        v132 = PartyOrganizationListViewItem__get_ExceedCount(item, 0LL);
        gameObject = this->fields.raritySprite;
        if ( v132 >= 1 )
          x = x + 1.0;
        if ( !gameObject )
          goto LABEL_402;
        gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_402;
        v275.fields.x = x;
        v275.fields.y = y;
        v275.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v275, 0LL);
      }
      attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v99);
      if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
      {
        AdjustAtk = PartyOrganizationListViewItem__get_AdjustAtk(item, 0LL);
        v136 = 0.92157;
        v137 = AdjustAtk;
        gameObject = this->fields.attackLabel;
        if ( v137 <= 0 )
          v138 = 1.0;
        else
          v138 = 0.015686;
        if ( v137 <= 0 )
          v136 = 1.0;
        if ( !gameObject )
          goto LABEL_402;
        v139 = 1.0;
        v140 = 1.0;
        UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v136 - 1), 0LL);
        v141 = this->fields.attackLabel;
        HIDWORD(v266) = PartyOrganizationListViewItem__get_MargeAtk(item, 0LL);
        gameObject = System_Int32__ToString_63206828((int32_t)&v266 + 4, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
        if ( !v141 )
          goto LABEL_402;
        UILabel__set_text(v141, (System_String_o *)gameObject, 0LL);
      }
      hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v134);
      if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
      {
        AdjustHp = PartyOrganizationListViewItem__get_AdjustHp(item, 0LL);
        v145 = 0.92157;
        v146 = AdjustHp;
        gameObject = this->fields.hpLabel;
        if ( v146 <= 0 )
          v147 = 1.0;
        else
          v147 = 0.015686;
        if ( v146 <= 0 )
          v145 = 1.0;
        if ( !gameObject )
          goto LABEL_402;
        v148 = 1.0;
        v149 = 1.0;
        UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v145 - 1), 0LL);
        v150 = this->fields.hpLabel;
        HIDWORD(v266) = PartyOrganizationListViewItem__get_MargeHp(item, 0LL);
        gameObject = System_Int32__ToString_63206828((int32_t)&v266 + 4, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
        if ( !v150 )
          goto LABEL_402;
        UILabel__set_text(v150, (System_String_o *)gameObject, 0LL);
      }
      costLabel = (UnityEngine_Object_o *)this->fields.costLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v143);
      if ( UnityEngine_Object__op_Inequality(costLabel, 0LL, 0LL) )
      {
        EquipCost = PartyOrganizationListViewItem__get_EquipCost(item, 0LL);
        v154 = this->fields.costLabel;
        v155 = EquipCost;
        MainCost = PartyOrganizationListViewItem__get_MainCost(item, 0LL);
        if ( (v155 & 0x80000000) != 0 )
        {
          HIDWORD(v266) = MainCost;
          gameObject = System_Int32__ToString((int32_t)&v266 + 4, 0LL);
          if ( !v154 )
            goto LABEL_402;
          UILabel__set_text(v154, (System_String_o *)gameObject, 0LL);
        }
        else
        {
          v263 = MainCost;
          v157 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v263);
          v262 = v155;
          v158 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v262);
          gameObject = System_String__Concat_62412232(v157, (Il2CppObject *)StringLiteral_855/*"+"*/, v158, 0LL);
          if ( !v154 )
            goto LABEL_402;
          UILabel__set_text(v154, (System_String_o *)gameObject, 0LL);
        }
      }
      skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v152);
      if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
      {
        gameObject = this->fields.skillListTreasureDevice;
        if ( !gameObject )
          goto LABEL_402;
        SkillListTreasureDeviceComponent__Set(
          (SkillListTreasureDeviceComponent_o *)gameObject,
          v90,
          lv,
          strengthStatus,
          treasureDeviceNum,
          0,
          0LL);
        if ( !System_String__IsNullOrEmpty(v90, 0LL) )
        {
          gameObject = this->fields.switchSkillUIList;
          if ( gameObject )
          {
            v66 = (signed __int64)this->fields.skillInfoUiWidget;
            v166 = *((_QWORD *)gameObject + 2);
            v167 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++*((_DWORD *)gameObject + 7);
            if ( !v166 )
              goto LABEL_402;
            v168 = *((int *)gameObject + 6);
            if ( (unsigned int)v168 >= *(_DWORD *)(v166 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)gameObject,
                (Il2CppObject *)v66,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v167[4] + 192LL) + 112LL));
            }
            else
            {
              v169 = v166 + 8 * v168;
              *((_DWORD *)gameObject + 6) = v168 + 1;
              *(_QWORD *)(v169 + 32) = v66;
              sub_1BCA784((PartyOrganizationUtility_o *)(v169 + 32), v66, v160, v161, v162, v163, v164, v165);
            }
          }
        }
      }
      appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
      if ( UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
      {
        if ( System_String__IsNullOrEmpty(LevelList_39112132, 0LL) )
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
            v66 = (signed __int64)this->fields.appendSkillInfoUiWidget;
            v199 = *((_QWORD *)gameObject + 2);
            v200 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++*((_DWORD *)gameObject + 7);
            if ( !v199 )
              goto LABEL_402;
            v201 = *((int *)gameObject + 6);
            if ( (unsigned int)v201 >= *(_DWORD *)(v199 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)gameObject,
                (Il2CppObject *)v66,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v200[4] + 192LL) + 112LL));
            }
            else
            {
              v202 = v199 + 8 * v201;
              *((_DWORD *)gameObject + 6) = v201 + 1;
              *(_QWORD *)(v202 + 32) = v66;
              sub_1BCA784((PartyOrganizationUtility_o *)(v202 + 32), v66, v193, v194, v195, v196, v197, v198);
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
          AppendSkillListComponent__Set((AppendSkillListComponent_o *)gameObject, LevelList_39112132, 0LL);
        }
      }
      switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v192);
      if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
      {
        v205 = this->fields.switchSkillUIList;
        if ( v205 )
        {
          v206 = this->fields.switchSkillInfo;
          gameObject = System_Collections_Generic_List_object___ToArray(
                         (System_Collections_Generic_List_object__o *)v205,
                         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
          if ( !v206 )
            goto LABEL_402;
          SwitchUIWidgetComponent__Set(v206, (UIWidget_array *)gameObject, 0LL);
        }
      }
      svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v204);
      if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
      {
        if ( item->fields.followerInfo )
        {
          if ( PartyOrganizationListViewItem__get_ServantLeader(item, 0LL) )
          {
            gameObject = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
            if ( !gameObject )
              goto LABEL_402;
            v209 = (System_Int32_array *)*((_QWORD *)gameObject + 26);
          }
          else
          {
            v209 = 0LL;
          }
          v212 = this->fields.svtCommandCardList;
          v213 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
              *(_QWORD *)&v213.fields.fakeValue);
          gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v213, 0LL);
          if ( v212 )
          {
            ServantCommandCardListComponent__Set_38924900(
              v212,
              (int32_t)gameObject,
              v209,
              item->fields.commandCodeIdList,
              2,
              0,
              0LL);
            goto LABEL_282;
          }
LABEL_402:
          sub_1BCAA3C(gameObject, v66);
        }
        v210 = this->fields.svtCommandCardList;
        v211 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&v211.fields.fakeValue);
        gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v211, 0LL);
        if ( !v210 )
          goto LABEL_402;
        ServantCommandCardListComponent__Set_38925144(
          v210,
          (int32_t)gameObject,
          item->fields.commandCodeIdList,
          2,
          0,
          0LL);
      }
LABEL_282:
      supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v208);
      if ( !UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
      {
LABEL_295:
        fixNpcMessageFrameSprite = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
        if ( UnityEngine_Object__op_Inequality(fixNpcMessageFrameSprite, 0LL, 0LL) )
        {
          gameObject = this->fields.fixNpcMessageFrameSprite;
          if ( !gameObject )
            goto LABEL_402;
          v219 = item->fields.followerInfo;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_402;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v219 != 0LL, 0LL);
        }
        fixNpcMessageText = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
        if ( UnityEngine_Object__op_Inequality(fixNpcMessageText, 0LL, 0LL) )
        {
          gameObject = this->fields.fixNpcMessageText;
          if ( !gameObject )
            goto LABEL_402;
          v221 = item->fields.followerInfo;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_402;
          if ( v221 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            v223 = this->fields.fixNpcMessageText;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v222);
            gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10446/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0LL);
            if ( !v223 )
              goto LABEL_402;
            UILabel__set_text(v223, (System_String_o *)gameObject, 0LL);
          }
          else
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          }
        }
        noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
        if ( !UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
          goto LABEL_342;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(item, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&EquipSvtId.fields.fakeValue);
        gameObject = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(EquipSvtId, 0LL);
        if ( !this->fields.noneEquipSprite )
          goto LABEL_402;
        v226 = (int)gameObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.noneEquipSprite, 0LL);
        if ( !gameObject )
          goto LABEL_402;
        if ( v226 < 1 )
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
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v233);
          if ( !UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
            goto LABEL_342;
          gameObject = this->fields.equipLimitCountSprite;
          if ( !gameObject )
            goto LABEL_402;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_402;
          LOBYTE(v66) = 0;
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
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v227);
          AtlasManager__SetEquipFace(equipSprite, v226, 0LL);
          v230 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v229);
          if ( !UnityEngine_Object__op_Inequality(v230, 0LL, 0LL) )
            goto LABEL_342;
          gameObject = (void *)PartyOrganizationListViewItem__get_EquipLimitCountMax(item, 0LL);
          if ( !this->fields.equipLimitCountSprite )
            goto LABEL_402;
          v231 = (int)gameObject;
          gameObject = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                         0LL);
          v232 = gameObject;
          if ( v231 < 1 )
          {
            v66 = 0LL;
          }
          else
          {
            gameObject = (void *)PartyOrganizationListViewItem__get_EquipLimitCount(item, 0LL);
            v66 = (int)gameObject >= v231;
          }
          if ( !v232 )
            goto LABEL_402;
          gameObject = v232;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v66, 0LL);
LABEL_342:
        correctionIconSprite = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
        isEventUpVal = item->fields.isEventUpVal;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
        if ( UnityEngine_Object__op_Inequality(correctionIconSprite, 0LL, 0LL) )
        {
          LODWORD(v266) = PartyOrganizationListViewItem__GetCorrectionIconId(item, 0LL);
          gameObject = this->fields.correctionIconSprite;
          if ( !gameObject )
            goto LABEL_402;
          if ( (v266 & 0x80000000) != 0 )
          {
            UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
          }
          else
          {
            gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_402;
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
            *(float *)&v264 = localPosition.fields.x;
            v265 = localPosition.fields.z;
            v237 = item->fields.eventUpValItemList;
            v238 = localPosition.fields.x;
            if ( v237 && *(_QWORD *)&v237->max_length )
            {
              v239 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              if ( !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v66);
                v239 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              }
              v240 = 16LL;
            }
            else
            {
              v239 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              if ( !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v66);
                v239 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
              }
              v240 = 12LL;
            }
            *((float *)&v264 + 1) = (float)*(int *)((char *)&v239->static_fields->RestrictionClassSpriteNameFormat + v240);
            gameObject = this->fields.correctionIconSprite;
            if ( !gameObject )
              goto LABEL_402;
            gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_402;
            v277.fields.y = *((float *)&v264 + 1);
            v277.fields.z = v265;
            v277.fields.x = v238;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v277, 0LL);
            v241 = this->fields.correctionIconSprite;
            v242 = System_Int32__ToString((int32_t)&v266, 0LL);
            gameObject = System_String__Concat_62401220((System_String_o *)StringLiteral_18456/*"correction_icon_"*/, v242, 0LL);
            if ( !v241 )
              goto LABEL_402;
            UISprite__set_spriteName(v241, (System_String_o *)gameObject, 0LL);
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v236);
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
        if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
        {
          v246 = this->fields.baseSprite;
          baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v245);
          AtlasManager__SetFormationBase(v246, frameType, baseDefaultUIAtlas, 0, 0LL);
        }
        base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v245);
        if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
        {
          v250 = this->fields.base2Sprite;
          base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v249);
          AtlasManager__SetFormationFrame(v250, frameType, base2DefaultUIAtlas, 0, 0LL);
        }
        eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v249);
        gameObject = (void *)UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v64 )
            goto LABEL_402;
          v253 = this->fields.eventUpValIcon;
          gameObject = System_Collections_Generic_List_object___ToArray(
                         v64,
                         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
          if ( !v253 )
            goto LABEL_402;
          EventUpValIconComponent__Set(v253, (EventMargeItemUpValInfo_array *)gameObject, -1, -1, -1, 0LL);
          bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v254);
          if ( !UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
            goto LABEL_396;
          gameObject = this->fields.bounusIcon;
          if ( !gameObject )
            goto LABEL_402;
          v256 = 0;
        }
        else
        {
          v257 = (UnityEngine_Object_o *)this->fields.bounusIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
          if ( !UnityEngine_Object__op_Inequality(v257, 0LL, 0LL) )
          {
LABEL_396:
            baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
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
          v256 = isEventUpVal;
        }
        ShiningIconComponent__Set_38945552((ShiningIconComponent_o *)gameObject, v256, 0LL);
        goto LABEL_396;
      }
      userServantEntity = item->fields.userServantEntity;
      if ( userServantEntity && UserServantEntity__IsEventJoin(userServantEntity, 0LL) )
      {
        gameObject = this->fields.supportSprite;
        if ( !gameObject )
          goto LABEL_402;
        v216 = &StringLiteral_20364/*"icon_eventjoin_02"*/;
      }
      else
      {
        gameObject = this->fields.supportSprite;
        if ( !gameObject )
          goto LABEL_402;
        if ( !item->fields.followerInfo )
        {
          v217 = 0LL;
          goto LABEL_294;
        }
        v216 = &StringLiteral_20405/*"icon_support_02"*/;
      }
      v217 = (System_String_o *)*v216;
LABEL_294:
      UISprite__set_spriteName((UISprite_o *)gameObject, v217, 0LL);
      goto LABEL_295;
    }
    v170 = (UnityEngine_Object_o *)this->fields.servantFaceIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v79);
    if ( UnityEngine_Object__op_Inequality(v170, 0LL, 0LL) )
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
      v172 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v171);
      if ( UnityEngine_Object__op_Inequality(v172, 0LL, 0LL) )
      {
        gameObject = this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_402;
        ServantClassIconComponent__Clear((ServantClassIconComponent_o *)gameObject, 0LL);
      }
      v173 = (UnityEngine_Object_o *)this->fields.levelLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
      if ( UnityEngine_Object__op_Inequality(v173, 0LL, 0LL) )
      {
        gameObject = this->fields.levelLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v174 = (UnityEngine_Object_o *)this->fields.raritySprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
      if ( UnityEngine_Object__op_Inequality(v174, 0LL, 0LL) )
      {
        gameObject = this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
      }
      v175 = (UnityEngine_Object_o *)this->fields.attackLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
      if ( UnityEngine_Object__op_Inequality(v175, 0LL, 0LL) )
      {
        gameObject = this->fields.attackLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v176 = (UnityEngine_Object_o *)this->fields.hpLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
      if ( UnityEngine_Object__op_Inequality(v176, 0LL, 0LL) )
      {
        gameObject = this->fields.hpLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v177 = (UnityEngine_Object_o *)this->fields.costLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
      if ( UnityEngine_Object__op_Inequality(v177, 0LL, 0LL) )
      {
        gameObject = this->fields.costLabel;
        if ( !gameObject )
          goto LABEL_402;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      v178 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
      if ( UnityEngine_Object__op_Inequality(v178, 0LL, 0LL) )
      {
        gameObject = this->fields.skillListTreasureDevice;
        if ( !gameObject )
          goto LABEL_402;
        SkillListTreasureDeviceComponent__Clear((SkillListTreasureDeviceComponent_o *)gameObject, 0LL);
      }
      v179 = (UnityEngine_Object_o *)this->fields.appendSkillList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
      if ( UnityEngine_Object__op_Inequality(v179, 0LL, 0LL) )
      {
        gameObject = this->fields.appendSkillList;
        if ( !gameObject )
          goto LABEL_402;
        AppendSkillListComponent__Clear((AppendSkillListComponent_o *)gameObject, 0LL);
      }
      v180 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
      if ( UnityEngine_Object__op_Inequality(v180, 0LL, 0LL) )
      {
        gameObject = this->fields.svtCommandCardList;
        if ( !gameObject )
          goto LABEL_402;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0LL);
      }
      v181 = (UnityEngine_Object_o *)this->fields.supportSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
      if ( UnityEngine_Object__op_Inequality(v181, 0LL, 0LL) )
      {
        gameObject = this->fields.supportSprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
      }
      v182 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
      if ( UnityEngine_Object__op_Inequality(v182, 0LL, 0LL) )
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
        v184 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v183);
        if ( UnityEngine_Object__op_Inequality(v184, 0LL, 0LL) )
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
      v185 = (UnityEngine_Object_o *)this->fields.correctionIconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
      if ( UnityEngine_Object__op_Inequality(v185, 0LL, 0LL) )
      {
        gameObject = this->fields.correctionIconSprite;
        if ( !gameObject )
          goto LABEL_402;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
      }
      WarBoardPartyOrganizationListViewItemDraw__SetRestrictionClassSprite(this, item, v186);
      v188 = (UnityEngine_Object_o *)this->fields.fixNpcMessageFrameSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v187);
      if ( UnityEngine_Object__op_Inequality(v188, 0LL, 0LL) )
      {
        gameObject = this->fields.fixNpcMessageFrameSprite;
        if ( !gameObject )
          goto LABEL_402;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_402;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      v189 = (UnityEngine_Object_o *)this->fields.fixNpcMessageText;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
      if ( UnityEngine_Object__op_Inequality(v189, 0LL, 0LL) )
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
  v76 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v75);
  if ( UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
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
    v78 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77);
    if ( UnityEngine_Object__op_Inequality(v78, 0LL, 0LL) )
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  UnityEngine_Object_o *restrictionClassSprite; // x20
  __int64 v38; // x1
  long double v39; // q0
  __int64 v40; // x0
  __int64 v41; // x0
  void *MasterData_object; // x0
  WarBoardIndividualityClassMaster_o *v43; // x20
  __int64 v44; // x2
  __int64 v45; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int v47; // w25
  __int64 v48; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Collections_Generic_List_int__o *v52; // x22
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x22
  WarBoardPartyOrganizationListViewItemDraw___c_c *v63; // x0
  System_Func_object__bool__o *_9__40_0; // x23
  Il2CppObject *v65; // x24
  struct WarBoardPartyOrganizationListViewItemDraw___c_StaticFields *static_fields; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  System_Collections_Generic_IEnumerable_T__o *v73; // x22
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  System_Action_object__o *v77; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  System_Int32_array *v79; // x0
  __int64 v80; // x8
  __int64 v81; // x8
  WarBoardPartyOrganizationListViewItemDraw_c *v82; // x0
  System_String_o *RestrictionClassSpriteNameFormat; // x20
  Il2CppObject *v84; // x0
  System_String_o *v85; // x20
  int v86; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B14039 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_RestrictionEntity__TypeInfo, item, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_RestrictionEntity___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_int___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v13, v14);
    sub_1BCA7E0(&System_Func_RestrictionEntity__bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v25, v26);
    sub_1BCA7E0(&Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__, v27, v28);
    sub_1BCA7E0(
      &Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__,
      v29,
      v30);
    sub_1BCA7E0(&WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo, v31, v32);
    sub_1BCA7E0(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo, v33, v34);
    sub_1BCA7E0(&WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v35, v36);
    byte_4B14039 = 1;
  }
  restrictionClassSprite = (UnityEngine_Object_o *)this->fields.restrictionClassSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(restrictionClassSprite, 0LL, 0LL) )
  {
    v40 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
      v40 = sub_1C1C6BC(v39);
    v41 = *(_QWORD *)(*(_QWORD *)(v40 + 192) + 16LL);
    if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
      v41 = sub_1C1C6BC(v39);
    MasterData_object = **(void ***)(v41 + 184);
    if ( MasterData_object )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)MasterData_object,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
      if ( MasterData_object )
      {
        v43 = (WarBoardIndividualityClassMaster_o *)MasterData_object;
        MasterData_object = WarBoardIndividualityClassMaster__GetAllClassServantEntity(
                              (WarBoardIndividualityClassMaster_o *)MasterData_object,
                              0LL);
        if ( MasterData_object )
        {
          if ( item )
          {
            questRestrictionInfo = item->fields.questRestrictionInfo;
            v47 = *((_DWORD *)MasterData_object + 11);
            if ( questRestrictionInfo && questRestrictionInfo->fields.restrictionEntityList )
            {
              v48 = sub_1BCAA2C(WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_TypeInfo, v38, v44, v45);
              System_Object___ctor((Il2CppObject *)v48, 0LL);
              v52 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_List_int__TypeInfo,
                                                                v49,
                                                                v50,
                                                                v51);
              System_Collections_Generic_List_int____ctor(
                v52,
                (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v48 )
                goto LABEL_36;
              *(_QWORD *)(v48 + 16) = v52;
              sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 16), (int64_t)v52, v53, v54, v55, v56, v57, v58);
              restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)questRestrictionInfo->fields.restrictionEntityList;
              v63 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              if ( !WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo, v59);
                v63 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
              }
              _9__40_0 = (System_Func_object__bool__o *)v63->static_fields->__9__40_0;
              if ( !_9__40_0 )
              {
                if ( !v63->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v63, v59);
                  v63 = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo;
                }
                v65 = (Il2CppObject *)v63->static_fields->__9;
                _9__40_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                            System_Func_RestrictionEntity__bool__TypeInfo,
                                                            v59,
                                                            v60,
                                                            v61);
                System_Func_object__bool____ctor(
                  _9__40_0,
                  v65,
                  Method_WarBoardPartyOrganizationListViewItemDraw___c__SetRestrictionClassSprite_b__40_0__,
                  0LL);
                static_fields = WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields;
                static_fields->__9__40_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__40_0;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&static_fields->__9__40_0,
                  (int64_t)_9__40_0,
                  v67,
                  v68,
                  v69,
                  v70,
                  v71,
                  v72);
              }
              v73 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                                     restrictionEntityList,
                                                                     (System_Func_TSource__bool__o *)_9__40_0,
                                                                     (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
              v77 = (System_Action_object__o *)sub_1BCAA2C(System_Action_RestrictionEntity__TypeInfo, v74, v75, v76);
              System_Action_object____ctor(
                v77,
                (Il2CppObject *)v48,
                Method_WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0__SetRestrictionClassSprite_b__1__,
                0LL);
              BasicHelper__ForEach_object_(
                v73,
                (System_Action_T__o *)v77,
                (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_RestrictionEntity___);
              v78 = System_Linq_Enumerable__Distinct_int_(
                      *(System_Collections_Generic_IEnumerable_TSource__o **)(v48 + 16),
                      (const MethodInfo_2F30074 *)Method_System_Linq_Enumerable_Distinct_int___);
              v79 = System_Linq_Enumerable__ToArray_int_(
                      v78,
                      (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
              MasterData_object = WarBoardIndividualityClassMaster__GetServantClassEntities(v43, v79, 0LL);
              if ( MasterData_object )
              {
                v80 = *((_QWORD *)MasterData_object + 3);
                if ( v80 )
                {
                  if ( !(_DWORD)v80 )
                    sub_1BCAA44(MasterData_object, v38);
                  v81 = *((_QWORD *)MasterData_object + 4);
                  if ( !v81 )
                    goto LABEL_36;
                  v47 = *(_DWORD *)(v81 + 44);
                }
              }
            }
            v82 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            if ( !WarBoardPartyOrganizationListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardPartyOrganizationListViewItemDraw_TypeInfo, v38);
              v82 = WarBoardPartyOrganizationListViewItemDraw_TypeInfo;
            }
            RestrictionClassSpriteNameFormat = v82->static_fields->RestrictionClassSpriteNameFormat;
            v86 = v47;
            v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86);
            MasterData_object = System_String__Format(RestrictionClassSpriteNameFormat, v84, 0LL);
            if ( this->fields.restrictionClassSprite )
            {
              v85 = (System_String_o *)MasterData_object;
              MasterData_object = UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)this->fields.restrictionClassSprite,
                                    0LL);
              if ( MasterData_object )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
                MasterData_object = this->fields.restrictionClassSprite;
                if ( MasterData_object )
                {
                  UISprite__set_spriteName((UISprite_o *)MasterData_object, v85, 0LL);
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
    sub_1BCAA3C(MasterData_object, v38);
  }
}


void __fastcall WarBoardPartyOrganizationListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1403C & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo, v1, v2);
    byte_4B1403C = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct WarBoardPartyOrganizationListViewItemDraw___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardPartyOrganizationListViewItemDraw___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B1403D & 1) == 0 )
  {
    this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)sub_1BCA7E0(
                                                                                  &Method_System_Collections_Generic_List_int__AddRange__,
                                                                                  x,
                                                                                  method);
    byte_4B1403D = 1;
  }
  if ( !x
    || (this = (WarBoardPartyOrganizationListViewItemDraw___c__DisplayClass40_0_o *)v4->fields.indivisualities) == 0LL )
  {
    sub_1BCAA3C(this, x);
  }
  System_Collections_Generic_List_int___AddRange(
    (System_Collections_Generic_List_int__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)x->fields.targetVals,
    (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
}