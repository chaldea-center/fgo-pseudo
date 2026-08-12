void PartyOrganizationConfirmItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_596BFBD & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationConfirmItemDraw_TypeInfo);
    byte_596BFBD = 1;
  }
  *PartyOrganizationConfirmItemDraw_TypeInfo->static_fields = (struct PartyOrganizationConfirmItemDraw_StaticFields)0x9A0000003CLL;
}


void PartyOrganizationConfirmItemDraw___ctor(PartyOrganizationConfirmItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PartyOrganizationConfirmItemDraw__Awake(PartyOrganizationConfirmItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UIWidget_o *restrictionMaskMessageText; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct UISprite_o *v14; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct UISprite_o *v22; // x8
  struct System_String_o *mSpriteName; // x1
  struct UISprite_o *v24; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20
  __int64 v26; // x2
  UnityEngine_Object_o *maskServantObj; // x20
  Il2CppObject *ComponentInChildren_object__59470360; // x0
  struct UISprite_o **p_maskServantSprite; // x20
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x1
  __int64 v37; // x2
  UnityEngine_Object_o *maskServantSprite; // x21
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct UIAtlas_o *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct UISprite_o *v52; // x8
  struct System_String_o *v53; // x1

  if ( (byte_596BFB7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite____91783016);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BFB7 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !restrictionMaskMessageText )
      goto LABEL_27;
    this->fields.restrictionMaskMessageWidth = restrictionMaskMessageText->fields.mWidth;
    UIWidget__set_width(restrictionMaskMessageText, 1000, 0);
    v14 = this->fields.restrictionMaskSprite;
    if ( !v14 )
      goto LABEL_27;
    mAtlas = v14->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.maskSpriteDefaultAtlas,
      (int32_t)mAtlas,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v22 = this->fields.restrictionMaskSprite;
    if ( !v22 )
      goto LABEL_27;
    mSpriteName = v22->fields.mSpriteName;
    this->fields.maskSpriteDefaultSpriteName = mSpriteName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.maskSpriteDefaultSpriteName,
      (int32_t)mSpriteName,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v24 = this->fields.restrictionMaskSprite;
    if ( !v24 )
      goto LABEL_27;
    this->fields.maskSpriteDefaultHeight = v24->fields.mHeight;
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( !restrictionMaskMessageText )
      goto LABEL_27;
    this->fields.restrictionWarningMessageWidth = restrictionMaskMessageText->fields.mWidth;
    UIWidget__set_width(restrictionMaskMessageText, 1000, 0);
  }
  maskServantObj = (UnityEngine_Object_o *)this->fields.maskServantObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v26);
  if ( UnityEngine_Object__op_Inequality(maskServantObj, 0, 0) )
  {
    restrictionMaskMessageText = (UIWidget_o *)this->fields.maskServantObj;
    if ( !restrictionMaskMessageText )
      goto LABEL_27;
    ComponentInChildren_object__59470360 = UnityEngine_GameObject__GetComponentInChildren_object__59470360(
                                             (UnityEngine_GameObject_o *)restrictionMaskMessageText,
                                             1,
                                             (const MethodInfo_38B7218 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite____91783016);
    this->fields.maskServantSprite = (struct UISprite_o *)ComponentInChildren_object__59470360;
    p_maskServantSprite = &this->fields.maskServantSprite;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.maskServantSprite,
      (int32_t)ComponentInChildren_object__59470360,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    maskServantSprite = (UnityEngine_Object_o *)this->fields.maskServantSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36, v37);
    restrictionMaskMessageText = (UIWidget_o *)UnityEngine_Object__op_Inequality(maskServantSprite, 0, 0);
    if ( ((unsigned __int8)restrictionMaskMessageText & 1) != 0 )
    {
      if ( *p_maskServantSprite )
      {
        v45 = (*p_maskServantSprite)->fields.mAtlas;
        this->fields.defaultMaskServantAtlas = v45;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.defaultMaskServantAtlas,
          (int32_t)v45,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
        v52 = this->fields.maskServantSprite;
        if ( v52 )
        {
          v53 = v52->fields.mSpriteName;
          this->fields.defaultMaskServantSpriteName = v53;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.defaultMaskServantSpriteName,
            (int32_t)v53,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51);
          return;
        }
      }
LABEL_27:
      sub_2213CDC(restrictionMaskMessageText, v5);
    }
  }
}


void PartyOrganizationConfirmItemDraw__ClearMessage(PartyOrganizationConfirmItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_596BFB9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BFB9 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_18;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
          return;
        }
      }
    }
LABEL_18:
    sub_2213CDC(gameObject, v5);
  }
}


void PartyOrganizationConfirmItemDraw__SetInput(
        PartyOrganizationConfirmItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationConfirmItemDraw__SetItem(
        PartyOrganizationConfirmItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        int32_t mode,
        bool isAdjustPosY,
        bool isRarityHide,
        int32_t imageSvtId,
        bool isSimpleDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *maskServantObj; // x25
  System_String_o *v16; // x1
  __int64 v17; // x2
  __int64 lv; // x0
  UnityEngine_Object_o *maskServantLabel; // x25
  __int64 v20; // x2
  UnityEngine_Object_o *maskEquipObj; // x25
  __int64 v22; // x2
  UnityEngine_Object_o *maskEquipLabel; // x25
  __int64 v24; // x2
  ServantFaceIconComponent_o *servantFaceIcon; // x24
  struct FollowerInfo_o *followerInfo; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *typeSprite; // x24
  struct FollowerInfo_o *v30; // x8
  int32_t type; // w8
  __int64 *v32; // x8
  UnityEngine_Object_o *v33; // x23
  __int64 v34; // x2
  UserServantEntity_o *userServantEntity; // x23
  ServantFaceIconComponent_o *v36; // x24
  __int64 v37; // x1
  __int64 v38; // x2
  UnityEngine_Object_o *v39; // x23
  __int64 v40; // x2
  UnityEngine_Object_o *v41; // x23
  UILabel_o *v42; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  Il2CppObject *Master_object; // x23
  NetworkManager_c *v46; // x0
  int64_t userIdNumber; // x24
  __int64 v48; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  ServantFaceIconComponent_o *v50; // x23
  UserServantCollectionEntity_o *v51; // x25
  UserServantEntity_o *v52; // x24
  __int64 v53; // x1
  __int64 v54; // x2
  UnityEngine_Object_o *v55; // x23
  __int64 v56; // x2
  UnityEngine_Object_o *maskEquipSprite; // x23
  __int64 v58; // x1
  __int64 v59; // x2
  UISprite_o *v60; // x23
  UnityEngine_Object_o *v61; // x23
  __int64 v62; // x1
  __int64 v63; // x2
  UILabel_o *v64; // x23
  System_Int32_array *v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  UnityEngine_Object_o *v68; // x23
  System_Int32_array *v69; // x24
  bool IsEventJoin; // w8
  System_String_o *v71; // x1
  __int64 v72; // x1
  __int64 v73; // x2
  UnityEngine_Object_o *v74; // x23
  __int64 v75; // x2
  UnityEngine_Object_c *v76; // x0
  __int64 *v77; // x8
  System_String_o *v78; // x23
  UnityEngine_Object_o *v79; // x24
  ServantEntity_o *ServantEntity_k__BackingField; // x0
  Il2CppObject *MasterData_object; // x23
  int32_t v82; // w0
  System_Int32_array *CommandCardList; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  UnityEngine_Object_o *supportSprite; // x25
  __int64 v87; // x2
  System_String_o *v88; // x1
  UnityEngine_Object_o *v89; // x23
  __int64 v90; // x2
  UnityEngine_Object_o *v91; // x23
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int32_t imageLimitCount; // w23
  int32_t v94; // w25
  __int64 v95; // x1
  __int64 v96; // x2
  int32_t ServantId; // w26
  int32_t svtLimitCount; // w25
  int32_t v99; // w26
  int32_t LimitCountByDispLimit; // w25
  int32_t v101; // w28
  int32_t v102; // w27
  ServantOverwriteStatus_o *v103; // x26
  int32_t Rarity_k__BackingField; // w25
  int32_t actualRarity; // w21
  ServantFaceIconComponent_o *v106; // x26
  int32_t v107; // w0
  int32_t v108; // w27
  int32_t v109; // w28
  __int64 v110; // x1
  __int64 v111; // x2
  UnityEngine_Object_o *v112; // x23
  bool v113; // w0
  bool v114; // w1
  struct UILabel_array *commandLabelList; // x8
  unsigned int v116; // w25
  unsigned int max_length; // w9
  UILabel_o *v118; // x21
  __int64 v119; // x2
  UnityEngine_Object_o *memberTypeBaseSprite; // x21
  __int64 v121; // x2
  int32_t index; // w21
  BalanceConfig_c *v123; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 *v125; // x8
  UISprite_o *memberTypeSprite; // x21
  System_String_o *v127; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 *v133; // x8
  System_String_o *v134; // x0
  const MethodInfo *v135; // x5
  System_String_o *v137; // x1
  PartyOrganizationConfirmItemDraw_o *v140; // x0
  System_String_o *v141; // x3
  int v142; // w24
  const MethodInfo *v143; // x1
  __int64 v144; // x2
  const MethodInfo *v145; // x5
  __int64 *v146; // x8
  System_String_o *v147; // x0
  const MethodInfo *v148; // x4
  float v149; // s0
  float v150; // s1
  System_String_o *v151; // x1
  PartyOrganizationConfirmItemDraw_o *v152; // x0
  bool v153; // w3
  System_String_o *v154; // x0
  System_String_o *v156; // x1
  PartyOrganizationConfirmItemDraw_o *v159; // x0
  System_String_o *v160; // x3
  bool v161; // w4
  int64_t fatigureTime; // x21
  __int64 v163; // x1
  __int64 v164; // x2
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  _DWORD *v166; // x8
  Il2CppObject *v167; // x21
  __int64 v168; // x2
  __int64 v169; // x22
  __int64 v170; // x23
  int32_t SvtClassId; // w21
  UserServantEntity_o *v172; // x0
  int v173; // w9
  __int64 v174; // x20
  __int64 v175; // x0
  __int64 v176; // x22
  int32_t v177; // w0
  int32_t v178; // w22
  int32_t v179; // w20
  System_String_o *v180; // x21
  Il2CppObject *v181; // x0
  bool v182; // [xsp+68h] [xbp-88h]
  int32_t TimesToRestart_k__BackingField; // [xsp+6Ch] [xbp-84h] BYREF
  UnityEngine_Color_o color; // [xsp+70h] [xbp-80h] BYREF
  int v185; // [xsp+84h] [xbp-6Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v187; // 0:x0.16
  UnityEngine_Color_o v188; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v189; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596BFB8 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&PartyOrganizationRootComponent_TypeInfo);
    sub_2213A60(&ServantOverwriteStatus_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&UserServantEntity_TypeInfo);
    sub_2213A60(&StringLiteral_21223/*"icon_support_02"*/);
    sub_2213A60(&StringLiteral_16107/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/);
    sub_2213A60(&StringLiteral_10676/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/);
    sub_2213A60(&StringLiteral_10679/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_2213A60(&StringLiteral_12054/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/);
    sub_2213A60(&StringLiteral_12055/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_2213A60(&StringLiteral_12049/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_2213A60(&StringLiteral_21384/*"img_frames_mask11"*/);
    sub_2213A60(&StringLiteral_10675/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_2213A60(&StringLiteral_22628/*"member_txt_"*/);
    sub_2213A60(&StringLiteral_12048/*"SELECT_NO_SORTIE"*/);
    sub_2213A60(&StringLiteral_21222/*"icon_support_01"*/);
    sub_2213A60(&StringLiteral_21171/*"icon_eventjoin_02"*/);
    sub_2213A60(&StringLiteral_20550/*"formation_txtbg_03"*/);
    sub_2213A60(&StringLiteral_16105/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/);
    sub_2213A60(&StringLiteral_20504/*"formation_blank_small"*/);
    sub_2213A60(&StringLiteral_21387/*"img_frames_mask14"*/);
    sub_2213A60(&StringLiteral_19315/*"datalost_svt_select"*/);
    sub_2213A60(&StringLiteral_431/*"#042484"*/);
    sub_2213A60(&StringLiteral_20547/*"formation_support_small"*/);
    sub_2213A60(&StringLiteral_20549/*"formation_txtbg_02"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_10677/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/);
    sub_2213A60(&StringLiteral_21177/*"icon_friend"*/);
    sub_2213A60(&StringLiteral_10678/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/);
    sub_2213A60(&StringLiteral_21176/*"icon_follow"*/);
    byte_596BFB8 = 1;
  }
  entity = 0;
  v185 = 0;
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  if ( !item || !mode )
    return;
  maskServantObj = (UnityEngine_Object_o *)this->fields.maskServantObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, *(_QWORD *)&mode);
  if ( UnityEngine_Object__op_Inequality(maskServantObj, 0, 0) )
  {
    lv = (__int64)this->fields.maskServantObj;
    if ( !lv )
      goto LABEL_206;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
  }
  maskServantLabel = (UnityEngine_Object_o *)this->fields.maskServantLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
  if ( UnityEngine_Object__op_Inequality(maskServantLabel, 0, 0) )
  {
    lv = (__int64)this->fields.maskServantLabel;
    if ( !lv )
      goto LABEL_206;
    UILabel__set_text((UILabel_o *)lv, **(System_String_o ***)(qword_5984390 + 184), 0);
  }
  maskEquipObj = (UnityEngine_Object_o *)this->fields.maskEquipObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v20);
  if ( UnityEngine_Object__op_Inequality(maskEquipObj, 0, 0) )
  {
    lv = (__int64)this->fields.maskEquipObj;
    if ( !lv )
      goto LABEL_206;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
  }
  maskEquipLabel = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v22);
  lv = UnityEngine_Object__op_Inequality(maskEquipLabel, 0, 0);
  if ( (lv & 1) != 0 )
  {
    lv = (__int64)this->fields.maskEquipLabel;
    if ( !lv )
      goto LABEL_206;
    UILabel__set_text((UILabel_o *)lv, **(System_String_o ***)(qword_5984390 + 184), 0);
  }
  if ( item->fields.isFollower )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( item->fields.followerInfo )
    {
      lv = (__int64)PartyOrganizationListViewItem__get_ServantLeader(item, 0);
      followerInfo = item->fields.followerInfo;
      if ( !followerInfo )
        goto LABEL_206;
      if ( !servantFaceIcon )
        goto LABEL_206;
      ServantFaceIconComponent__Set_48053420(
        servantFaceIcon,
        (ServantLeaderInfo_o *)lv,
        0,
        0,
        0,
        followerInfo->fields.imageSvtId,
        isSimpleDisp,
        0,
        0);
      lv = (__int64)this->fields.servantFaceIcon;
      if ( !lv )
        goto LABEL_206;
      ServantFaceIconComponent__SetGrandFaceMaskSpritePartyOrganizationAtlas(
        (ServantFaceIconComponent_o *)lv,
        this->fields.restrictionMaskSprite,
        this->fields.maskSpriteDefaultSpriteName,
        this->fields.maskSpriteDefaultAtlas,
        0);
      typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
      lv = UnityEngine_Object__op_Inequality(typeSprite, 0, 0);
      if ( (lv & 1) == 0 )
        goto LABEL_138;
      v30 = item->fields.followerInfo;
      if ( !v30 )
        goto LABEL_206;
      type = v30->fields.type;
      if ( (unsigned int)(type - 3) < 2 )
      {
        lv = (__int64)this->fields.typeSprite;
        if ( !lv )
          goto LABEL_206;
        lv = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
        if ( !lv )
          goto LABEL_206;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0);
        lv = (__int64)this->fields.typeSprite;
        if ( !lv )
          goto LABEL_206;
        v32 = &StringLiteral_21222/*"icon_support_01"*/;
      }
      else if ( type == 5 )
      {
        lv = (__int64)this->fields.typeSprite;
        if ( !lv )
          goto LABEL_206;
        lv = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
        if ( !lv )
          goto LABEL_206;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0);
        lv = (__int64)this->fields.typeSprite;
        if ( !lv )
          goto LABEL_206;
        v32 = &StringLiteral_21176/*"icon_follow"*/;
      }
      else
      {
        if ( type != 1 )
        {
          lv = (__int64)this->fields.typeSprite;
          if ( !lv )
            goto LABEL_206;
          lv = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
          if ( !lv )
            goto LABEL_206;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
          goto LABEL_138;
        }
        lv = (__int64)this->fields.typeSprite;
        if ( !lv )
          goto LABEL_206;
        lv = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
        if ( !lv )
          goto LABEL_206;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0);
        lv = (__int64)this->fields.typeSprite;
        if ( !lv )
          goto LABEL_206;
        v32 = &StringLiteral_21177/*"icon_friend"*/;
      }
      UISprite__set_spriteName((UISprite_o *)lv, (System_String_o *)*v32, 0);
      lv = (__int64)this->fields.typeSprite;
      if ( !lv )
        goto LABEL_206;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
LABEL_138:
      CommandCardList = PartyOrganizationListViewItem__GetCommandCardList(item, 0);
      supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
      v69 = CommandCardList;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v84, v85);
      if ( UnityEngine_Object__op_Inequality(supportSprite, 0, 0) )
      {
        lv = (__int64)this->fields.supportSprite;
        if ( item->fields.isFollower )
        {
          if ( !lv )
            goto LABEL_206;
          v88 = (System_String_o *)StringLiteral_21223/*"icon_support_02"*/;
        }
        else
        {
          if ( !lv )
            goto LABEL_206;
          v88 = 0;
        }
        UISprite__set_spriteName((UISprite_o *)lv, v88, 0);
      }
      if ( !isSimpleDisp )
        goto LABEL_161;
      v89 = (UnityEngine_Object_o *)this->fields.typeSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v87);
      if ( UnityEngine_Object__op_Inequality(v89, 0, 0) )
      {
        lv = (__int64)this->fields.typeSprite;
        if ( !lv )
          goto LABEL_206;
        lv = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
        if ( !lv )
          goto LABEL_206;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
      }
      v91 = (UnityEngine_Object_o *)this->fields.supportSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v90);
      if ( !UnityEngine_Object__op_Inequality(v91, 0, 0) )
        goto LABEL_161;
      lv = (__int64)this->fields.supportSprite;
      goto LABEL_158;
    }
    if ( !servantFaceIcon )
      goto LABEL_206;
    ServantFaceIconComponent__Clear(this->fields.servantFaceIcon, 0);
    v74 = (UnityEngine_Object_o *)this->fields.typeSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v72, v73);
    if ( UnityEngine_Object__op_Inequality(v74, 0, 0) )
    {
      lv = (__int64)this->fields.typeSprite;
      if ( !lv )
        goto LABEL_206;
      lv = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
      if ( !lv )
        goto LABEL_206;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
    }
    v76 = UnityEngine_Object_TypeInfo;
    v77 = &StringLiteral_20547/*"formation_support_small"*/;
    goto LABEL_111;
  }
  v33 = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v24);
  if ( UnityEngine_Object__op_Inequality(v33, 0, 0) )
  {
    lv = (__int64)this->fields.typeSprite;
    if ( !lv )
      goto LABEL_206;
    lv = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
    if ( !lv )
      goto LABEL_206;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
  }
  userServantEntity = item->fields.userServantEntity;
  if ( !userServantEntity )
  {
    ServantEntity_k__BackingField = item->fields._ServantEntity_k__BackingField;
    if ( ServantEntity_k__BackingField )
    {
      if ( !item->fields.questRestrictionInfo )
        goto LABEL_165;
      if ( ServantEntity__checkIsHeroineSvt(ServantEntity_k__BackingField, 0) )
      {
        lv = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lv )
          goto LABEL_206;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)lv,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
        lv = PartyOrganizationListViewItem__get_ServantId(item, 0);
        if ( !MasterData_object )
          goto LABEL_206;
        lv = (__int64)UserServantMaster__getHeroineData((UserServantMaster_o *)MasterData_object, lv, 0);
        if ( !item->fields.questRestrictionInfo )
          goto LABEL_206;
        v82 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_50453148(
                item->fields.questRestrictionInfo,
                (UserServantEntity_o *)lv,
                0);
      }
      else
      {
        questRestrictionInfo = item->fields.questRestrictionInfo;
        lv = PartyOrganizationListViewItem__get_ServantId(item, 0);
        if ( !questRestrictionInfo )
          goto LABEL_206;
        v82 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount(questRestrictionInfo, lv, 0);
      }
      imageLimitCount = v82;
      v94 = v82;
      if ( v82 < 0 )
      {
LABEL_165:
        imageLimitCount = item->fields.imageLimitCount;
        if ( imageLimitCount < 0 )
        {
          ServantId = PartyOrganizationListViewItem__get_ServantId(item, 0);
          svtLimitCount = item->fields.svtLimitCount;
          if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v95, v96);
          v94 = ImageLimitCount__GetImageLimitCount(ServantId, svtLimitCount, 0);
        }
        else
        {
          v94 = item->fields.imageLimitCount;
        }
      }
      v182 = isRarityHide;
      v99 = item->fields.svtLimitCount;
      if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v16, v34);
      LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v94, v99, 0);
      v101 = PartyOrganizationListViewItem__get_ServantId(item, 0);
      v102 = item->fields.svtLimitCount;
      v103 = (ServantOverwriteStatus_o *)sub_2213CCC(ServantOverwriteStatus_TypeInfo);
      ServantOverwriteStatus___ctor_40472656(v103, v101, v102, LimitCountByDispLimit, 0);
      if ( !v103 )
        goto LABEL_206;
      Rarity_k__BackingField = v103->fields._Rarity_k__BackingField;
      actualRarity = v103->fields._ActualRarity_k__BackingField;
      v106 = this->fields.servantFaceIcon;
      v107 = PartyOrganizationListViewItem__get_ServantId(item, 0);
      v108 = item->fields.svtLimitCount;
      v109 = v107;
      lv = PartyOrganizationListViewItem__get_Level(item, 0);
      if ( !v106 )
        goto LABEL_206;
      ServantFaceIconComponent__SetIcon(
        v106,
        v109,
        Rarity_k__BackingField,
        v108,
        imageLimitCount,
        0,
        0,
        0,
        2,
        0,
        0,
        0,
        1,
        lv,
        imageSvtId,
        0,
        actualRarity,
        item->fields._IsGrandServant_k__BackingField,
        0,
        0);
      lv = (__int64)this->fields.servantFaceIcon;
      if ( !lv )
        goto LABEL_206;
      ServantFaceIconComponent__SetGrandFaceMaskSpritePartyOrganizationAtlas(
        (ServantFaceIconComponent_o *)lv,
        this->fields.restrictionMaskSprite,
        this->fields.maskSpriteDefaultSpriteName,
        this->fields.maskSpriteDefaultAtlas,
        0);
      v112 = (UnityEngine_Object_o *)this->fields.supportSprite;
      isRarityHide = v182;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v110, v111);
      v113 = UnityEngine_Object__op_Inequality(v112, 0, 0);
      v78 = 0;
      v69 = 0;
      if ( !v113 )
        goto LABEL_181;
      lv = (__int64)this->fields.supportSprite;
      if ( !lv )
        goto LABEL_206;
      UISprite__set_spriteName((UISprite_o *)lv, 0, 0);
      v78 = 0;
      goto LABEL_180;
    }
    lv = (__int64)this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_206;
    ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)lv, 0);
    v76 = UnityEngine_Object_TypeInfo;
    v77 = &StringLiteral_20504/*"formation_blank_small"*/;
LABEL_111:
    v78 = (System_String_o *)*v77;
    v79 = (UnityEngine_Object_o *)this->fields.supportSprite;
    if ( !*(&v76->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v76, v16, v75);
    if ( UnityEngine_Object__op_Inequality(v79, 0, 0) )
    {
      lv = (__int64)this->fields.supportSprite;
      if ( !lv )
        goto LABEL_206;
      UISprite__set_spriteName((UISprite_o *)lv, 0, 0);
    }
LABEL_180:
    v69 = 0;
    goto LABEL_181;
  }
  v36 = this->fields.servantFaceIcon;
  lv = (__int64)PartyOrganizationListViewItem__GetEquipList(item, 0);
  if ( !v36 )
    goto LABEL_206;
  ServantFaceIconComponent__Set(
    v36,
    userServantEntity,
    (System_Int64_array *)lv,
    item->fields.questRestrictionInfo,
    0,
    0,
    item->fields._IsTempGrandServant_k__BackingField,
    0,
    item->fields._EquipFriendShipSkillChange_k__BackingField > 0,
    0,
    0);
  lv = (__int64)this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_206;
  ServantFaceIconComponent__SetGrandFaceMaskSpritePartyOrganizationAtlas(
    (ServantFaceIconComponent_o *)lv,
    this->fields.restrictionMaskSprite,
    this->fields.maskSpriteDefaultSpriteName,
    this->fields.maskSpriteDefaultAtlas,
    0);
  if ( item->fields._IsDisappearSvt_k__BackingField )
  {
    v39 = (UnityEngine_Object_o *)this->fields.maskServantObj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37, v38);
    if ( UnityEngine_Object__op_Inequality(v39, 0, 0) )
    {
      lv = (__int64)this->fields.servantFaceIcon;
      if ( !lv )
        goto LABEL_206;
      ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
        (ServantFaceIconComponent_o *)lv,
        this->fields.maskServantSprite,
        this->fields.defaultMaskServantSpriteName,
        this->fields.defaultMaskServantAtlas,
        0);
      lv = (__int64)this->fields.maskServantObj;
      if ( !lv )
        goto LABEL_206;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0);
    }
    v41 = (UnityEngine_Object_o *)this->fields.maskServantLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v40);
    if ( UnityEngine_Object__op_Inequality(v41, 0, 0) )
    {
      v42 = this->fields.maskServantLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37, v38);
      lv = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_16107/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0);
      if ( !v42 )
        goto LABEL_206;
      UILabel__set_text(v42, (System_String_o *)lv, 0);
    }
  }
  if ( item->fields._IsDisappearEquip_k__BackingField )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v37, v38);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v43, v44);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    v46 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v43, v44);
      v46 = NetworkManager_TypeInfo;
    }
    userIdNumber = v46->static_fields->userIdNumber;
    EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(item, 0);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        *(_QWORD *)&EquipSvtId.fields.fakeValue,
        v48);
    lv = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(EquipSvtId, 0);
    if ( !Master_object )
      goto LABEL_206;
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)Master_object,
           &entity,
           userIdNumber,
           lv,
           0) )
    {
      v50 = this->fields.servantFaceIcon;
      v51 = entity;
      v52 = (UserServantEntity_o *)sub_2213CCC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_50174004(v52, v51, 0, 0);
      if ( !v50 )
        goto LABEL_206;
      ServantFaceIconComponent__SetEquip(v50, v52, 0);
      v55 = (UnityEngine_Object_o *)this->fields.maskEquipObj;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53, v54);
      if ( UnityEngine_Object__op_Inequality(v55, 0, 0) )
      {
        lv = (__int64)this->fields.maskEquipObj;
        if ( !lv )
          goto LABEL_206;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0);
      }
      maskEquipSprite = (UnityEngine_Object_o *)this->fields.maskEquipSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v56);
      if ( UnityEngine_Object__op_Inequality(maskEquipSprite, 0, 0) )
      {
        v60 = this->fields.maskEquipSprite;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v58, v59);
        AtlasManager__SetEventSprite(v60, (System_String_o *)StringLiteral_21387/*"img_frames_mask14"*/, 0);
      }
      v61 = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v58, v59);
      if ( UnityEngine_Object__op_Inequality(v61, 0, 0) )
      {
        v64 = this->fields.maskEquipLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62, v63);
        lv = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_16105/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0);
        if ( !v64 )
          goto LABEL_206;
        UILabel__set_text(v64, (System_String_o *)lv, 0);
      }
    }
  }
  v65 = PartyOrganizationListViewItem__GetCommandCardList(item, 0);
  v68 = (UnityEngine_Object_o *)this->fields.supportSprite;
  v69 = v65;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66, v67);
  if ( !UnityEngine_Object__op_Inequality(v68, 0, 0) )
    goto LABEL_161;
  lv = (__int64)item->fields.userServantEntity;
  if ( !lv )
    goto LABEL_206;
  IsEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)lv, 0);
  lv = (__int64)this->fields.supportSprite;
  if ( !IsEventJoin )
  {
LABEL_158:
    if ( !lv )
      goto LABEL_206;
    v71 = 0;
    goto LABEL_160;
  }
  if ( !lv )
    goto LABEL_206;
  v71 = (System_String_o *)StringLiteral_21171/*"icon_eventjoin_02"*/;
LABEL_160:
  UISprite__set_spriteName((UISprite_o *)lv, v71, 0);
LABEL_161:
  v78 = 0;
LABEL_181:
  if ( isAdjustPosY )
  {
    lv = (__int64)this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_206;
    if ( !ServantFaceIconComponent__IsUseEquip((ServantFaceIconComponent_o *)lv, 0) )
    {
      lv = (__int64)this->fields.servantFaceIcon;
      if ( !lv )
        goto LABEL_206;
      ServantFaceIconComponent__AdjustRaritySpritePosY((ServantFaceIconComponent_o *)lv, -55.0, 0);
      lv = (__int64)this->fields.servantFaceIcon;
      if ( !lv )
        goto LABEL_206;
      ServantFaceIconComponent__AdjustDispLimitCountSpritePosY((ServantFaceIconComponent_o *)lv, -34.0, 0);
    }
  }
  lv = (__int64)this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_206;
  ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)lv, !isRarityHide, 0);
  if ( item->fields._IsNotSupportSingle_k__BackingField || !item->fields._IsDataLost_k__BackingField )
  {
    lv = (__int64)this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_206;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 1, 0);
    lv = (__int64)this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_206;
    v114 = 1;
  }
  else
  {
    lv = (__int64)this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_206;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 0, 0);
    lv = (__int64)this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_206;
    v114 = 0;
  }
  ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)lv, v114, 0);
  commandLabelList = this->fields.commandLabelList;
  if ( !commandLabelList )
    goto LABEL_206;
  v116 = 0;
  while ( 1 )
  {
    max_length = commandLabelList->max_length;
    if ( (int)v116 >= (int)max_length )
      break;
    if ( v116 >= max_length )
      goto LABEL_318;
    v118 = commandLabelList->m_Items[v116];
    if ( v69 )
    {
      if ( v116 >= LODWORD(v69->max_length) )
LABEL_318:
        sub_2213CE4(lv);
      lv = (__int64)System_Int32__ToString((_DWORD)v69 + 32 + 4 * v116, 0);
      v16 = (System_String_o *)lv;
      if ( !v118 )
        goto LABEL_206;
    }
    else
    {
      v16 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v118 )
        goto LABEL_206;
    }
    UILabel__set_text(v118, v16, 0);
    commandLabelList = this->fields.commandLabelList;
    ++v116;
    if ( !commandLabelList )
      goto LABEL_206;
  }
  lv = (__int64)this->fields.baseSprite;
  if ( !lv )
    goto LABEL_206;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 0, 0);
  if ( v78 )
  {
    lv = (__int64)this->fields.baseSprite;
    if ( !lv )
      goto LABEL_206;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 1, 0);
    lv = (__int64)this->fields.baseSprite;
    if ( !lv )
      goto LABEL_206;
    UISprite__set_spriteName((UISprite_o *)lv, v78, 0);
  }
  memberTypeBaseSprite = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v119);
  if ( UnityEngine_Object__op_Inequality(memberTypeBaseSprite, 0, 0) )
  {
    index = item->fields.index;
    v123 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v16, v121);
      v123 = BalanceConfig_TypeInfo;
    }
    static_fields = v123->static_fields;
    lv = (__int64)this->fields.memberTypeBaseSprite;
    if ( index >= static_fields->DeckMainMemberMax )
    {
      if ( !lv )
        goto LABEL_206;
      v125 = &StringLiteral_20550/*"formation_txtbg_03"*/;
    }
    else
    {
      if ( !lv )
        goto LABEL_206;
      v125 = &StringLiteral_20549/*"formation_txtbg_02"*/;
    }
    UISprite__set_spriteName((UISprite_o *)lv, (System_String_o *)*v125, 0);
    memberTypeSprite = this->fields.memberTypeSprite;
    v185 = item->fields.index + 1;
    v127 = System_Int32__ToString((int32_t)&v185, 0);
    lv = (__int64)System_String__Concat_75651716((System_String_o *)StringLiteral_22628/*"member_txt_"*/, v127, 0);
    if ( memberTypeSprite )
    {
      UISprite__set_spriteName(memberTypeSprite, (System_String_o *)lv, 0);
      lv = (__int64)this->fields.memberTypeSprite;
      if ( lv )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
        goto LABEL_225;
      }
    }
LABEL_206:
    sub_2213CDC(lv, v16);
  }
LABEL_225:
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v121);
  if ( !UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
    goto LABEL_269;
  if ( PartyOrganizationListViewItem__get_IsLeave(item, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v131, v132);
    v133 = &StringLiteral_12048/*"SELECT_NO_SORTIE"*/;
LABEL_232:
    v134 = LocalizationManager__Get((System_String_o *)*v133, 0);
    v188.fields.r = 0.0;
    v188.fields.g = 0.0;
    v137 = v134;
    v188.fields.b = 0.0;
    v188.fields.a = 1.0;
    v140 = this;
    v141 = 0;
LABEL_233:
    PartyOrganizationConfirmItemDraw__SetMaskMessage(v140, v137, v188, 0, v141, 0, v135);
    v142 = 1;
    goto LABEL_270;
  }
  if ( PartyOrganizationListViewItem__get_IsQuestRestriction(item, 0)
    && !PartyOrganizationListViewItem__get_IsEmpty(item, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v143, v144);
    v154 = LocalizationManager__Get((System_String_o *)StringLiteral_10675/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
    goto LABEL_246;
  }
  if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v143, v144);
    v146 = &StringLiteral_10676/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_241:
    v147 = LocalizationManager__Get((System_String_o *)*v146, 0);
    v149 = 0.0;
    v150 = 0.0;
    v151 = v147;
    v152 = this;
    v153 = 0;
LABEL_242:
    v142 = 1;
    PartyOrganizationConfirmItemDraw__SetWarningMessage(v152, v151, 1, v153, v149, v150, v148);
    goto LABEL_270;
  }
  if ( item->fields.isFixedSupportPositionRestriction )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v143, v144);
    v146 = &StringLiteral_10677/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/;
    goto LABEL_241;
  }
  if ( item->fields.isFixedServantPositionRestriction )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v143, v144);
    v146 = &StringLiteral_10678/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/;
    goto LABEL_241;
  }
  fatigureTime = item->fields.fatigureTime;
  if ( (fatigureTime & 0x8000000000000000LL) == 0 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v143, v144);
    if ( fatigureTime > NetworkManager__getTime(0) )
    {
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_431/*"#042484"*/, &color, 0);
      color.fields.a = 0.69804;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v163, v164);
      v137 = LocalizationManager__Get((System_String_o *)StringLiteral_12054/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, 0);
      v140 = this;
      v188 = color;
      v141 = (System_String_o *)StringLiteral_21384/*"img_frames_mask11"*/;
      goto LABEL_233;
    }
    PartyOrganizationListViewItem__ClearFatigure(item, 0);
    goto LABEL_268;
  }
  if ( item->fields._IsAllOutBattle_k__BackingField )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v143, v144);
    v133 = &StringLiteral_12049/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
    goto LABEL_232;
  }
  if ( item->fields._IsNotSupportSingle_k__BackingField )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v143, v144);
    v151 = LocalizationManager__Get((System_String_o *)StringLiteral_10679/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0);
    v149 = 10.0;
    v150 = -22.0;
    v152 = this;
    v153 = 1;
    goto LABEL_242;
  }
  if ( item->fields._IsDataLost_k__BackingField )
  {
    v189.fields.r = 1.0;
    v189.fields.g = 1.0;
    v156 = (System_String_o *)StringLiteral_1/*""*/;
    v189.fields.b = 1.0;
    v189.fields.a = 1.0;
    v159 = this;
    v160 = (System_String_o *)StringLiteral_19315/*"datalost_svt_select"*/;
    v161 = 1;
    goto LABEL_247;
  }
  if ( item->fields._TimesToRestart_k__BackingField >= 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v143, v144);
    v180 = LocalizationManager__Get((System_String_o *)StringLiteral_12055/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
    TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
    v181 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &TimesToRestart_k__BackingField);
    v154 = System_String__Format(v180, v181, 0);
LABEL_246:
    v189.fields.r = 0.0;
    v189.fields.g = 0.0;
    v156 = v154;
    v189.fields.b = 0.0;
    v189.fields.a = 1.0;
    v159 = this;
    v160 = 0;
    v161 = 0;
LABEL_247:
    v142 = 1;
    PartyOrganizationConfirmItemDraw__SetMaskMessage(v159, v156, v189, 1, v160, v161, v145);
    goto LABEL_270;
  }
LABEL_268:
  PartyOrganizationConfirmItemDraw__ClearMessage(this, v143);
LABEL_269:
  v142 = 0;
LABEL_270:
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v129, v130);
  if ( !UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0, 0) )
    return;
  if ( item->fields.isFollower )
  {
    v166 = item->fields.followerInfo;
    if ( v166 )
    {
      lv = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !lv )
        goto LABEL_206;
      v167 = DataManager__GetMasterData_object_(
               (DataManager_o *)lv,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      lv = (__int64)PartyOrganizationListViewItem__get_ServantLeader(item, 0);
      if ( !lv )
        goto LABEL_206;
      v169 = *(_QWORD *)(lv + 48);
      v170 = *(_QWORD *)(lv + 56);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v168);
      *(_QWORD *)&v187.fields.currentCryptoKey = v169;
      *(_QWORD *)&v187.fields.fakeValue = v170;
      lv = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v187, 0);
      if ( !v167 )
        goto LABEL_206;
      lv = (__int64)DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)v167,
                      lv,
                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !lv )
        goto LABEL_206;
      SvtClassId = *(_DWORD *)(lv + 80);
      lv = (__int64)PartyOrganizationListViewItem__get_ServantLeader(item, 0);
      if ( !lv )
        goto LABEL_206;
      LODWORD(v166) = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)lv, 0);
      goto LABEL_289;
    }
    goto LABEL_288;
  }
  v172 = item->fields.userServantEntity;
  if ( v172 )
  {
    SvtClassId = UserServantEntity__getSvtClassId(v172, 0, 0, 0);
  }
  else
  {
    v166 = item->fields._ServantEntity_k__BackingField;
    if ( !v166 )
    {
LABEL_288:
      SvtClassId = 0;
      goto LABEL_289;
    }
    SvtClassId = v166[20];
  }
  LODWORD(v166) = 0;
LABEL_289:
  if ( SvtClassId )
    v173 = v142;
  else
    v173 = 1;
  if ( !((unsigned int)v166 | v173) )
  {
    lv = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !lv )
      goto LABEL_206;
    if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)lv, 40, 0) )
    {
      lv = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !lv )
        goto LABEL_206;
      v174 = *(_QWORD *)(lv + 32);
      lv = sub_1FFEA10(v174, PartyOrganizationRootComponent_TypeInfo);
      if ( !lv )
        goto LABEL_206;
      v175 = sub_1FFEA10(v174, PartyOrganizationRootComponent_TypeInfo);
      v176 = *(_QWORD *)(v175 + 544);
      if ( v176 )
      {
        v177 = BattleSetupInfo__TargetQuestId(*(BattleSetupInfo_o **)(v175 + 544), 0);
        if ( v177 )
        {
          v178 = *(_DWORD *)(v176 + 24);
          if ( v178 )
          {
            v179 = v177;
            lv = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !lv )
              goto LABEL_206;
            lv = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)lv,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
            if ( !lv )
              goto LABEL_206;
            lv = (__int64)QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)lv, v179, v178, 0);
            if ( lv )
            {
              if ( this->fields.classCompatibilityIcon )
              {
                ServantClassCompatibilityIconComponent__SetIcon(
                  this->fields.classCompatibilityIcon,
                  SvtClassId,
                  *(System_Int32_array **)(lv + 48),
                  1,
                  0);
                return;
              }
              goto LABEL_206;
            }
          }
        }
      }
    }
  }
  lv = (__int64)this->fields.classCompatibilityIcon;
  if ( !lv )
    goto LABEL_206;
  ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)lv, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationConfirmItemDraw__SetMaskMessage(
        PartyOrganizationConfirmItemDraw_o *this,
        System_String_o *message,
        UnityEngine_Color_o maskColor,
        bool isScale,
        System_String_o *maskName,
        bool isDataLost,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *restrictionMaskSprite; // x24
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Component_o *gameObject; // x0
  __int64 v20; // x2
  UISprite_o *v21; // x22
  __int64 v22; // x2
  struct UISprite_o *v23; // x22
  int32_t DATA_LOST_MASK_HEIGHT; // w1
  System_String_o *v25; // x2
  float v26; // s0
  float v27; // s8
  UnityEngine_Transform_o *v28; // x20
  float restrictionMaskMessageWidth; // s0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Vector3_o oneVector; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = maskColor.fields.a;
  b = maskColor.fields.b;
  g = maskColor.fields.g;
  r = maskColor.fields.r;
  if ( (byte_596BFBA & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_19315/*"datalost_svt_select"*/);
    sub_2213A60(&StringLiteral_21380/*"img_frames_mask03"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BFBA = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message, isScale);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_46;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( isDataLost )
    {
      v21 = this->fields.restrictionMaskSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17, v20);
      AtlasManager__SetPartyOrganizationImage(v21, (System_String_o *)StringLiteral_19315/*"datalost_svt_select"*/, 0);
      v23 = this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)PartyOrganizationConfirmItemDraw_TypeInfo;
      if ( !*(&PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo, v17, v22);
      if ( !v23 )
        goto LABEL_46;
      gameObject = (UnityEngine_Component_o *)v23;
      DATA_LOST_MASK_HEIGHT = PartyOrganizationConfirmItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
      if ( !gameObject )
        goto LABEL_46;
      v25 = maskName ? maskName : (System_String_o *)StringLiteral_21380/*"img_frames_mask03"*/;
      ServantFaceIconComponent__SetGrandFaceMaskSpritePartyOrganizationAtlas(
        (ServantFaceIconComponent_o *)gameObject,
        this->fields.restrictionMaskSprite,
        v25,
        this->fields.maskSpriteDefaultAtlas,
        0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_46;
      DATA_LOST_MASK_HEIGHT = this->fields.maskSpriteDefaultHeight;
    }
    UIWidget__set_height((UIWidget_o *)gameObject, DATA_LOST_MASK_HEIGHT, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_46;
    v34.fields.r = r;
    v34.fields.g = g;
    v34.fields.b = b;
    v34.fields.a = a;
    UIWidget__set_color((UIWidget_o *)gameObject, v34, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( isScale )
    {
      if ( !gameObject )
        goto LABEL_46;
      LODWORD(v26) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_46;
      v27 = v26;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v28 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v27 <= restrictionMaskMessageWidth )
      {
        if ( !byte_5969AE5 )
        {
          gameObject = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE5 = 1;
        }
        oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
      }
      else
      {
        oneVector.fields.x = restrictionMaskMessageWidth / v27;
        oneVector.fields.z = 1.0;
        oneVector.fields.y = 1.0;
      }
      if ( !v28 )
        goto LABEL_46;
    }
    else
    {
      if ( !gameObject )
        goto LABEL_46;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v28 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_5969AE5 )
      {
        gameObject = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( !v28 )
        goto LABEL_46;
      oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
    }
    UnityEngine_Transform__set_localScale(v28, oneVector, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
          return;
        }
      }
    }
LABEL_46:
    sub_2213CDC(gameObject, v17);
  }
}


void PartyOrganizationConfirmItemDraw__SetPartyIcon(
        System_Collections_Generic_List_PartyOrganizationListViewItem__o *itemList,
        PartyOrganizationConfirmItemDraw_array *supportMemberObjectList,
        UnityEngine_GameObject_o *supportMemberBase,
        bool isAdjustPosY,
        bool isSimpleDisp,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  signed __int64 size; // x28
  unsigned __int64 v11; // x24
  __int64 max_length; // x19
  PartyOrganizationConfirmItemDraw_o **m_Items; // x20
  unsigned __int64 max_length_low; // x8
  __int64 v15; // x8
  int32_t v16; // w25
  __int64 v17; // x2
  __int64 v18; // x8
  int32_t v19; // w26
  Il2CppObject *Master_object; // x27
  __int64 v21; // x1
  __int64 v22; // x2
  bool IsHideRarity; // w27
  int32_t v24; // w25
  PartyOrganizationConfirmItemDraw_o *v25; // x26
  const MethodInfo *v26; // x7
  PartyOrganizationConfirmItemDraw_c *v27; // x0
  UnityEngine_GameObject_o *self; // [xsp+8h] [xbp-78h]
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+18h] [xbp-68h] BYREF

  v9 = (System_Collections_Generic_List_object__o *)itemList;
  if ( (byte_596BFBC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
    itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)sub_2213A60(&PartyOrganizationConfirmItemDraw_TypeInfo);
    byte_596BFBC = 1;
  }
  npcServantFollowerEntity = 0;
  if ( !v9 || (self = supportMemberBase, !supportMemberObjectList) )
LABEL_43:
    sub_2213CDC(itemList, supportMemberObjectList);
  size = v9->fields._size;
  if ( (int)supportMemberObjectList->max_length >= 1 )
  {
    v11 = 0;
    max_length = (unsigned int)supportMemberObjectList->max_length;
    m_Items = supportMemberObjectList->m_Items;
    do
    {
      max_length_low = LODWORD(supportMemberObjectList->max_length);
      if ( (__int64)v11 >= size )
      {
        if ( v11 >= max_length_low )
          goto LABEL_44;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)m_Items[v11];
        if ( !itemList )
          goto LABEL_43;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)itemList,
                                                                                         0);
        if ( !itemList )
          goto LABEL_43;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0);
      }
      else
      {
        if ( v11 >= max_length_low )
          goto LABEL_44;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)m_Items[v11];
        if ( !itemList )
          goto LABEL_43;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)itemList,
                                                                                         0);
        if ( !itemList )
          goto LABEL_43;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 1, 0);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v9,
                                                                                         v11,
                                                                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_43;
        if ( !*(_QWORD *)&itemList[4].fields._size )
          goto LABEL_33;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v9,
                                                                                         v11,
                                                                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_43;
        v15 = *(_QWORD *)&itemList[4].fields._size;
        if ( !v15 )
          goto LABEL_43;
        v16 = *(_DWORD *)(v15 + 36);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v9,
                                                                                         v11,
                                                                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_43;
        v18 = *(_QWORD *)&itemList[4].fields._size;
        if ( !v18 )
          goto LABEL_43;
        v19 = *(_DWORD *)(v18 + 40);
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, supportMemberObjectList, v17);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v9,
                                                                                         v11,
                                                                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_43;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)PartyOrganizationListViewItem__get_ServantId(
                                                                                         (PartyOrganizationListViewItem_o *)itemList,
                                                                                         0);
        if ( !Master_object )
          goto LABEL_43;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                                                         (NpcServantFollowerMaster_o *)Master_object,
                                                                                         &npcServantFollowerEntity,
                                                                                         v16,
                                                                                         v19,
                                                                                         (int32_t)itemList,
                                                                                         0);
        if ( ((unsigned __int8)itemList & 1) != 0 )
        {
          if ( !npcServantFollowerEntity )
            goto LABEL_43;
          IsHideRarity = NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0);
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21, v22);
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
          if ( !npcServantFollowerEntity || !itemList )
            goto LABEL_43;
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerMaster__GetEntity_49447928(
                                                                                           (NpcFollowerMaster_o *)itemList,
                                                                                           v16,
                                                                                           v19,
                                                                                           npcServantFollowerEntity->fields.id,
                                                                                           0);
          if ( itemList )
          {
            itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerEntity__GetImageSvtId(
                                                                                             (NpcFollowerEntity_o *)itemList,
                                                                                             0);
            v24 = (int)itemList;
          }
          else
          {
            v24 = 0;
          }
        }
        else
        {
LABEL_33:
          v24 = 0;
          IsHideRarity = 0;
        }
        if ( v11 >= LODWORD(supportMemberObjectList->max_length) )
LABEL_44:
          sub_2213CE4(itemList);
        v25 = m_Items[v11];
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v9,
                                                                                         v11,
                                                                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !v25 )
          goto LABEL_43;
        PartyOrganizationConfirmItemDraw__SetItem(
          v25,
          (PartyOrganizationListViewItem_o *)itemList,
          2,
          isAdjustPosY,
          IsHideRarity,
          v24,
          isSimpleDisp,
          v26);
      }
      ++v11;
    }
    while ( max_length != v11 );
  }
  v27 = PartyOrganizationConfirmItemDraw_TypeInfo;
  if ( !*(&PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo, supportMemberObjectList, supportMemberBase);
    v27 = PartyOrganizationConfirmItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(
    self,
    (float)(v27->static_fields->ICON_OFFSET_SIZE - v27->static_fields->ICON_OFFSET_SIZE * size),
    0);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationConfirmItemDraw__SetWarningMessage(
        PartyOrganizationConfirmItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        bool isMask,
        float iconPosY,
        float msgPosY,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  float v20; // s0
  float v21; // s8
  int32_t restrictionWarningMessageWidth; // s0
  UnityEngine_Transform_o *v23; // x19
  float v24; // s0
  UnityEngine_Vector3_o oneVector; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596BFBB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21380/*"img_frames_mask03"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BFBB = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message, isScale);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_39;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isMask, 0);
    if ( isMask )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
      if ( !gameObject )
        goto LABEL_39;
      ServantFaceIconComponent__SetGrandFaceMaskSpritePartyOrganizationAtlas(
        (ServantFaceIconComponent_o *)gameObject,
        this->fields.restrictionMaskSprite,
        (System_String_o *)StringLiteral_21380/*"img_frames_mask03"*/,
        this->fields.maskSpriteDefaultAtlas,
        0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_39;
      v28.fields.r = 0.0;
      v28.fields.g = 0.0;
      v28.fields.b = 0.0;
      v28.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, v28, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_39;
      UIWidget__set_height((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultHeight, 0);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_39;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
        if ( gameObject )
        {
          v18 = UnityEngine_Component__get_gameObject(gameObject, 0);
          GameObjectExtensions__SetLocalPositionY(v18, iconPosY, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
          if ( gameObject )
          {
            v19 = UnityEngine_Component__get_gameObject(gameObject, 0);
            GameObjectExtensions__SetLocalPositionY(v19, msgPosY, 0);
            gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, message, 0);
              gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
              if ( isScale )
              {
                if ( gameObject )
                {
                  LODWORD(v20) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0);
                  gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
                  if ( gameObject )
                  {
                    v21 = v20;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
                    restrictionWarningMessageWidth = this->fields.restrictionWarningMessageWidth;
                    v23 = (UnityEngine_Transform_o *)gameObject;
                    v24 = (float)restrictionWarningMessageWidth;
                    if ( v21 <= v24 )
                    {
                      if ( !byte_5969AE5 )
                      {
                        gameObject = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
                        byte_5969AE5 = 1;
                      }
                      oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
                    }
                    else
                    {
                      oneVector.fields.x = v24 / v21;
                      oneVector.fields.z = 1.0;
                      oneVector.fields.y = 1.0;
                    }
                    if ( v23 )
                      goto LABEL_38;
                  }
                }
              }
              else if ( gameObject )
              {
                gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
                v23 = (UnityEngine_Transform_o *)gameObject;
                if ( !byte_5969AE5 )
                {
                  gameObject = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
                  byte_5969AE5 = 1;
                }
                if ( v23 )
                {
                  oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
LABEL_38:
                  UnityEngine_Transform__set_localScale(v23, oneVector, 0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_39:
    sub_2213CDC(gameObject, v14);
  }
}