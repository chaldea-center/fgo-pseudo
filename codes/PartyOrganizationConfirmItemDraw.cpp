void PartyOrganizationConfirmItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4D2C30D & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationConfirmItemDraw_TypeInfo);
    byte_4D2C30D = 1;
  }
  *PartyOrganizationConfirmItemDraw_TypeInfo->static_fields = (struct PartyOrganizationConfirmItemDraw_StaticFields)0x9A0000003CLL;
}


void PartyOrganizationConfirmItemDraw___ctor(PartyOrganizationConfirmItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PartyOrganizationConfirmItemDraw__Awake(PartyOrganizationConfirmItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v4; // x1
  UIWidget_o *restrictionMaskMessageText; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct UISprite_o *v20; // x8
  struct System_String_o *mSpriteName; // x1
  struct UISprite_o *v22; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *maskServantObj; // x20
  Il2CppObject *ComponentInChildren_object__52413484; // x0
  struct UISprite_o **p_maskServantSprite; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  UnityEngine_Object_o *maskServantSprite; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct UIAtlas_o *v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct UISprite_o *v47; // x8
  struct System_String_o *v48; // x1

  if ( (byte_4D2C307 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite____79129400);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2C307 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !restrictionMaskMessageText )
      goto LABEL_27;
    this->fields.restrictionMaskMessageWidth = restrictionMaskMessageText->fields.mWidth;
    UIWidget__set_width(restrictionMaskMessageText, 1000, 0);
    v12 = this->fields.restrictionMaskSprite;
    if ( !v12 )
      goto LABEL_27;
    mAtlas = v12->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.maskSpriteDefaultAtlas,
      (int32_t)mAtlas,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v20 = this->fields.restrictionMaskSprite;
    if ( !v20 )
      goto LABEL_27;
    mSpriteName = v20->fields.mSpriteName;
    this->fields.maskSpriteDefaultSpriteName = mSpriteName;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.maskSpriteDefaultSpriteName,
      (int32_t)mSpriteName,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v22 = this->fields.restrictionMaskSprite;
    if ( !v22 )
      goto LABEL_27;
    this->fields.maskSpriteDefaultHeight = v22->fields.mHeight;
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( !restrictionMaskMessageText )
      goto LABEL_27;
    this->fields.restrictionWarningMessageWidth = restrictionMaskMessageText->fields.mWidth;
    UIWidget__set_width(restrictionMaskMessageText, 1000, 0);
  }
  maskServantObj = (UnityEngine_Object_o *)this->fields.maskServantObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskServantObj, 0, 0) )
  {
    restrictionMaskMessageText = (UIWidget_o *)this->fields.maskServantObj;
    if ( !restrictionMaskMessageText )
      goto LABEL_27;
    ComponentInChildren_object__52413484 = UnityEngine_GameObject__GetComponentInChildren_object__52413484(
                                             (UnityEngine_GameObject_o *)restrictionMaskMessageText,
                                             1,
                                             (const MethodInfo_31FC42C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite____79129400);
    this->fields.maskServantSprite = (struct UISprite_o *)ComponentInChildren_object__52413484;
    p_maskServantSprite = &this->fields.maskServantSprite;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.maskServantSprite,
      (int32_t)ComponentInChildren_object__52413484,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    maskServantSprite = (UnityEngine_Object_o *)this->fields.maskServantSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    restrictionMaskMessageText = (UIWidget_o *)UnityEngine_Object__op_Inequality(maskServantSprite, 0, 0);
    if ( ((unsigned __int8)restrictionMaskMessageText & 1) != 0 )
    {
      if ( *p_maskServantSprite )
      {
        v40 = (*p_maskServantSprite)->fields.mAtlas;
        this->fields.defaultMaskServantAtlas = v40;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.defaultMaskServantAtlas,
          (int32_t)v40,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
        v47 = this->fields.maskServantSprite;
        if ( v47 )
        {
          v48 = v47->fields.mSpriteName;
          this->fields.defaultMaskServantSpriteName = v48;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&this->fields.defaultMaskServantSpriteName,
            (int32_t)v48,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46);
          return;
        }
      }
LABEL_27:
      sub_1C93D2C(restrictionMaskMessageText, v4);
    }
  }
}


void PartyOrganizationConfirmItemDraw__ClearMessage(PartyOrganizationConfirmItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4D2C309 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C309 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C93D2C(gameObject, v4);
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
  PartyOrganizationRootComponent_c *v16; // x1
  void *lv; // x0
  UnityEngine_Object_o *maskServantLabel; // x25
  UnityEngine_Object_o *maskEquipObj; // x25
  UnityEngine_Object_o *maskEquipLabel; // x25
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  struct FollowerInfo_o *followerInfo; // x8
  UnityEngine_Object_o *typeSprite; // x23
  struct FollowerInfo_o *v24; // x8
  int32_t type; // w8
  __int64 *v26; // x8
  UnityEngine_Object_o *v27; // x24
  UserServantEntity_o *userServantEntity; // x24
  ServantFaceIconComponent_o *v29; // x23
  UnityEngine_Object_o *v30; // x23
  UnityEngine_Object_o *v31; // x23
  UILabel_o *v32; // x23
  Il2CppObject *Master_object; // x23
  NetworkManager_c *v34; // x0
  int64_t userIdNumber; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  ServantFaceIconComponent_o *v37; // x23
  UserServantCollectionEntity_o *v38; // x25
  UserServantEntity_o *v39; // x24
  UnityEngine_Object_o *v40; // x23
  UnityEngine_Object_o *maskEquipSprite; // x23
  UISprite_o *v42; // x23
  UnityEngine_Object_o *v43; // x23
  UILabel_o *v44; // x23
  System_Int32_array *v45; // x0
  UnityEngine_Object_o *v46; // x24
  System_Int32_array *v47; // x23
  System_String_o *v48; // x1
  UnityEngine_Object_o *v49; // x23
  UnityEngine_Object_c *v50; // x0
  __int64 *v51; // x8
  System_String_o *v52; // x24
  UnityEngine_Object_o *v53; // x23
  ServantEntity_o *servantEntity; // x0
  Il2CppObject *MasterData_object; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v57; // w0
  System_Int32_array *CommandCardList; // x0
  UnityEngine_Object_o *supportSprite; // x25
  System_String_o *v60; // x1
  UnityEngine_Object_o *v61; // x24
  UnityEngine_Object_o *v62; // x24
  QuestRestrictionInfo_o *questRestrictionInfo; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // kr20_16
  int32_t imageLimitCount; // w24
  int32_t v66; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // kr30_16
  int32_t v68; // w0
  int32_t svtLimitCount; // w25
  int32_t v70; // w26
  int32_t v71; // w26
  int32_t LimitCountByDispLimit; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // kr40_16
  int32_t v74; // w0
  int32_t v75; // w27
  int32_t v76; // w28
  ServantOverwriteStatus_o *v77; // x26
  int32_t Rarity_k__BackingField; // w25
  int32_t actualRarity; // w21
  ServantFaceIconComponent_o *v80; // x26
  int32_t v81; // w0
  int32_t v82; // w27
  int32_t v83; // w28
  UnityEngine_Object_o *v84; // x23
  bool v85; // w1
  struct UILabel_array *commandLabelList; // x8
  __int64 v87; // x26
  int32_t v88; // w21
  int max_length; // w9
  UILabel_o *v90; // x22
  UnityEngine_Object_o *memberTypeBaseSprite; // x21
  int32_t index; // w21
  System_String_o **v93; // x8
  UISprite_o *memberTypeSprite; // x21
  System_String_o *v95; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  __int64 *v97; // x8
  System_String_o *v98; // x1
  const MethodInfo *v99; // x5
  PartyOrganizationConfirmItemDraw_o *v103; // x0
  System_String_o *v104; // x3
  int v105; // w24
  const MethodInfo *v106; // x1
  const MethodInfo *v107; // x5
  __int64 *v108; // x8
  System_String_o *v109; // x1
  const MethodInfo *v110; // x4
  float v111; // s0
  float v112; // s1
  PartyOrganizationConfirmItemDraw_o *v113; // x0
  bool v114; // w3
  System_String_o *v115; // x0
  System_String_o *v116; // x1
  PartyOrganizationConfirmItemDraw_o *v120; // x0
  System_String_o *v121; // x3
  bool v122; // w4
  int64_t fatigureTime; // x21
  System_String_o *v124; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  _DWORD *v126; // x8
  Il2CppObject *v127; // x21
  __int64 v128; // x22
  __int64 v129; // x23
  int32_t SvtClassId; // w21
  UserServantEntity_o *v131; // x0
  __int64 naturalAligment; // x9
  __int64 v133; // x22
  int32_t v134; // w22
  int32_t v135; // w20
  struct ServantClassCompatibilityIconComponent_o *v136; // x8
  System_String_o *v137; // x21
  Il2CppObject *v138; // x0
  PartyOrganizationCommandCardMenu_o *v139; // x0
  const MethodInfo *v140; // x1
  bool v141; // [xsp+58h] [xbp-88h]
  int32_t TimesToRestart_k__BackingField; // [xsp+5Ch] [xbp-84h] BYREF
  UnityEngine_Color_o color; // [xsp+60h] [xbp-80h] BYREF
  int v144; // [xsp+74h] [xbp-6Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16
  UnityEngine_Color_o v148; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v149; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2C308 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&PartyOrganizationRootComponent_TypeInfo);
    sub_1C93AD4(&ServantOverwriteStatus_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&UserServantEntity_TypeInfo);
    sub_1C93AD4(&StringLiteral_20470/*"icon_support_02"*/);
    sub_1C93AD4(&StringLiteral_15595/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/);
    sub_1C93AD4(&StringLiteral_10327/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/);
    sub_1C93AD4(&StringLiteral_10330/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1C93AD4(&StringLiteral_11633/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/);
    sub_1C93AD4(&StringLiteral_11634/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1C93AD4(&StringLiteral_11628/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_1C93AD4(&StringLiteral_20628/*"img_frames_mask11"*/);
    sub_1C93AD4(&StringLiteral_10326/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1C93AD4(&StringLiteral_21797/*"member_txt_"*/);
    sub_1C93AD4(&StringLiteral_11627/*"SELECT_NO_SORTIE"*/);
    sub_1C93AD4(&StringLiteral_20469/*"icon_support_01"*/);
    sub_1C93AD4(&StringLiteral_20423/*"icon_eventjoin_02"*/);
    sub_1C93AD4(&StringLiteral_19831/*"formation_txtbg_03"*/);
    sub_1C93AD4(&StringLiteral_15593/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/);
    sub_1C93AD4(&StringLiteral_19786/*"formation_blank_small"*/);
    sub_1C93AD4(&StringLiteral_20631/*"img_frames_mask14"*/);
    sub_1C93AD4(&StringLiteral_18638/*"datalost_svt_select"*/);
    sub_1C93AD4(&StringLiteral_406/*"#042484"*/);
    sub_1C93AD4(&StringLiteral_19828/*"formation_support_small"*/);
    sub_1C93AD4(&StringLiteral_19830/*"formation_txtbg_02"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_10328/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/);
    sub_1C93AD4(&StringLiteral_20426/*"icon_friend"*/);
    sub_1C93AD4(&StringLiteral_10329/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/);
    sub_1C93AD4(&StringLiteral_20425/*"icon_follow"*/);
    byte_4D2C308 = 1;
  }
  entity = 0;
  v144 = 0;
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  if ( !item || !mode )
    return;
  maskServantObj = (UnityEngine_Object_o *)this->fields.maskServantObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskServantObj, 0, 0) )
  {
    lv = this->fields.maskServantObj;
    if ( !lv )
      goto LABEL_214;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
  }
  maskServantLabel = (UnityEngine_Object_o *)this->fields.maskServantLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskServantLabel, 0, 0) )
  {
    lv = this->fields.maskServantLabel;
    if ( !lv )
      goto LABEL_214;
    UILabel__set_text((UILabel_o *)lv, string_TypeInfo->static_fields->Empty, 0);
  }
  maskEquipObj = (UnityEngine_Object_o *)this->fields.maskEquipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskEquipObj, 0, 0) )
  {
    lv = this->fields.maskEquipObj;
    if ( !lv )
      goto LABEL_214;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
  }
  maskEquipLabel = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  lv = (void *)UnityEngine_Object__op_Inequality(maskEquipLabel, 0, 0);
  if ( ((unsigned __int8)lv & 1) != 0 )
  {
    lv = this->fields.maskEquipLabel;
    if ( !lv )
      goto LABEL_214;
    UILabel__set_text((UILabel_o *)lv, string_TypeInfo->static_fields->Empty, 0);
  }
  if ( item->fields.isFollower )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( item->fields.followerInfo )
    {
      lv = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
      followerInfo = item->fields.followerInfo;
      if ( !followerInfo )
        goto LABEL_214;
      if ( !servantFaceIcon )
        goto LABEL_214;
      ServantFaceIconComponent__Set_41815756(
        servantFaceIcon,
        (ServantLeaderInfo_o *)lv,
        0,
        0,
        0,
        followerInfo->fields.imageSvtId,
        isSimpleDisp,
        0);
      lv = this->fields.servantFaceIcon;
      if ( !lv )
        goto LABEL_214;
      ServantFaceIconComponent__SetGrandFaceMaskSpritePartyOrganizationAtlas(
        (ServantFaceIconComponent_o *)lv,
        this->fields.restrictionMaskSprite,
        this->fields.maskSpriteDefaultSpriteName,
        this->fields.maskSpriteDefaultAtlas,
        0);
      typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      lv = (void *)UnityEngine_Object__op_Inequality(typeSprite, 0, 0);
      if ( ((unsigned __int8)lv & 1) != 0 )
      {
        v24 = item->fields.followerInfo;
        if ( !v24 )
          goto LABEL_214;
        type = v24->fields.type;
        if ( (unsigned int)(type - 3) < 2 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_214;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
          if ( !lv )
            goto LABEL_214;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_214;
          v26 = &StringLiteral_20469/*"icon_support_01"*/;
          goto LABEL_136;
        }
        if ( type == 5 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_214;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
          if ( !lv )
            goto LABEL_214;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_214;
          v26 = &StringLiteral_20425/*"icon_follow"*/;
          goto LABEL_136;
        }
        if ( type == 1 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_214;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
          if ( !lv )
            goto LABEL_214;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_214;
          v26 = &StringLiteral_20426/*"icon_friend"*/;
LABEL_136:
          UISprite__set_spriteName((UISprite_o *)lv, (System_String_o *)*v26, 0);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_214;
          (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
          goto LABEL_141;
        }
        lv = this->fields.typeSprite;
        if ( !lv )
          goto LABEL_214;
        lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
        if ( !lv )
          goto LABEL_214;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
      }
LABEL_141:
      CommandCardList = PartyOrganizationListViewItem__GetCommandCardList(item, 0);
      supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
      v47 = CommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(supportSprite, 0, 0) )
      {
        lv = this->fields.supportSprite;
        if ( !lv )
          goto LABEL_214;
        if ( item->fields.isFollower )
          v60 = (System_String_o *)StringLiteral_20470/*"icon_support_02"*/;
        else
          v60 = 0;
        UISprite__set_spriteName((UISprite_o *)lv, v60, 0);
      }
      if ( isSimpleDisp )
      {
        v61 = (UnityEngine_Object_o *)this->fields.typeSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v61, 0, 0) )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_214;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
          if ( !lv )
            goto LABEL_214;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
        }
        v62 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v62, 0, 0) )
        {
          lv = this->fields.supportSprite;
          if ( !lv )
            goto LABEL_214;
          goto LABEL_160;
        }
      }
      goto LABEL_162;
    }
    if ( !servantFaceIcon )
      goto LABEL_214;
    ServantFaceIconComponent__Clear(this->fields.servantFaceIcon, 0);
    v49 = (UnityEngine_Object_o *)this->fields.typeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v49, 0, 0) )
    {
      lv = this->fields.typeSprite;
      if ( !lv )
        goto LABEL_214;
      lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
      if ( !lv )
        goto LABEL_214;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
    }
    v50 = UnityEngine_Object_TypeInfo;
    v51 = &StringLiteral_19828/*"formation_support_small"*/;
    goto LABEL_111;
  }
  v27 = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v27, 0, 0) )
  {
    lv = this->fields.typeSprite;
    if ( !lv )
      goto LABEL_214;
    lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
    if ( !lv )
      goto LABEL_214;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
  }
  userServantEntity = item->fields.userServantEntity;
  if ( userServantEntity )
  {
    v29 = this->fields.servantFaceIcon;
    lv = PartyOrganizationListViewItem__GetEquipList(item, 0);
    if ( !v29 )
      goto LABEL_214;
    ServantFaceIconComponent__Set(
      v29,
      userServantEntity,
      (System_Int64_array *)lv,
      item->fields.questRestrictionInfo,
      0,
      0,
      item->fields._IsTempGrandServant_k__BackingField,
      0,
      item->fields._EquipFriendShipSkillChange_k__BackingField > 0,
      0);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_214;
    ServantFaceIconComponent__SetGrandFaceMaskSpritePartyOrganizationAtlas(
      (ServantFaceIconComponent_o *)lv,
      this->fields.restrictionMaskSprite,
      this->fields.maskSpriteDefaultSpriteName,
      this->fields.maskSpriteDefaultAtlas,
      0);
    if ( item->fields._IsDisappearSvt_k__BackingField )
    {
      v30 = (UnityEngine_Object_o *)this->fields.maskServantObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v30, 0, 0) )
      {
        lv = this->fields.servantFaceIcon;
        if ( !lv )
          goto LABEL_214;
        ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
          (ServantFaceIconComponent_o *)lv,
          this->fields.maskServantSprite,
          this->fields.defaultMaskServantSpriteName,
          this->fields.defaultMaskServantAtlas,
          0);
        lv = this->fields.maskServantObj;
        if ( !lv )
          goto LABEL_214;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0);
      }
      v31 = (UnityEngine_Object_o *)this->fields.maskServantLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
      {
        v32 = this->fields.maskServantLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        lv = LocalizationManager__Get((System_String_o *)StringLiteral_15595/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0);
        if ( !v32 )
          goto LABEL_214;
        UILabel__set_text(v32, (System_String_o *)lv, 0);
      }
    }
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
      }
      v34 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v34 = NetworkManager_TypeInfo;
      }
      userIdNumber = v34->static_fields->userIdNumber;
      EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(item, 0);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(EquipSvtId, 0);
      if ( !Master_object )
        goto LABEL_214;
      if ( UserServantCollectionMaster__TryGetEntity(
             (UserServantCollectionMaster_o *)Master_object,
             &entity,
             userIdNumber,
             (int32_t)lv,
             0) )
      {
        v37 = this->fields.servantFaceIcon;
        v38 = entity;
        v39 = (UserServantEntity_o *)sub_1C93D20(UserServantEntity_TypeInfo);
        UserServantEntity___ctor_43857036(v39, v38, 0, 0);
        if ( !v37 )
          goto LABEL_214;
        ServantFaceIconComponent__SetEquip(v37, v39, 0);
        v40 = (UnityEngine_Object_o *)this->fields.maskEquipObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v40, 0, 0) )
        {
          lv = this->fields.maskEquipObj;
          if ( !lv )
            goto LABEL_214;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0);
        }
        maskEquipSprite = (UnityEngine_Object_o *)this->fields.maskEquipSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(maskEquipSprite, 0, 0) )
        {
          v42 = this->fields.maskEquipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(v42, (System_String_o *)StringLiteral_20631/*"img_frames_mask14"*/, 0);
        }
        v43 = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v43, 0, 0) )
        {
          v44 = this->fields.maskEquipLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          lv = LocalizationManager__Get((System_String_o *)StringLiteral_15593/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0);
          if ( !v44 )
            goto LABEL_214;
          UILabel__set_text(v44, (System_String_o *)lv, 0);
        }
      }
    }
    v45 = PartyOrganizationListViewItem__GetCommandCardList(item, 0);
    v46 = (UnityEngine_Object_o *)this->fields.supportSprite;
    v47 = v45;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v46, 0, 0) )
    {
      lv = item->fields.userServantEntity;
      if ( !lv )
        goto LABEL_214;
      lv = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)lv, 0);
      if ( !this->fields.supportSprite )
        goto LABEL_214;
      if ( ((unsigned __int8)lv & 1) != 0 )
      {
        lv = this->fields.supportSprite;
        v48 = (System_String_o *)StringLiteral_20423/*"icon_eventjoin_02"*/;
LABEL_161:
        UISprite__set_spriteName((UISprite_o *)lv, v48, 0);
        goto LABEL_162;
      }
      lv = this->fields.supportSprite;
LABEL_160:
      v48 = 0;
      goto LABEL_161;
    }
LABEL_162:
    v52 = 0;
    if ( !isAdjustPosY )
      goto LABEL_195;
    goto LABEL_190;
  }
  servantEntity = item->fields.servantEntity;
  if ( !servantEntity )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_214;
    ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)lv, 0);
    v50 = UnityEngine_Object_TypeInfo;
    v51 = &StringLiteral_19786/*"formation_blank_small"*/;
LABEL_111:
    v52 = (System_String_o *)*v51;
    v53 = (UnityEngine_Object_o *)this->fields.supportSprite;
    if ( !v50->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v50);
    if ( UnityEngine_Object__op_Inequality(v53, 0, 0) )
    {
      lv = this->fields.supportSprite;
      if ( !lv )
        goto LABEL_214;
      UISprite__set_spriteName((UISprite_o *)lv, 0, 0);
    }
    goto LABEL_189;
  }
  if ( !item->fields.questRestrictionInfo )
    goto LABEL_169;
  if ( ServantEntity__checkIsHeroineSvt(servantEntity, 0) )
  {
    lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !lv )
      goto LABEL_214;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)lv,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(item, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(SvtId, 0);
    if ( !MasterData_object )
      goto LABEL_214;
    lv = UserServantMaster__getHeroineData((UserServantMaster_o *)MasterData_object, (int32_t)lv, 0);
    if ( !item->fields.questRestrictionInfo )
      goto LABEL_214;
    v57 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_44133520(
            item->fields.questRestrictionInfo,
            (UserServantEntity_o *)lv,
            0);
  }
  else
  {
    questRestrictionInfo = item->fields.questRestrictionInfo;
    v64 = PartyOrganizationListViewItem__get_SvtId(item, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v64, 0);
    if ( !questRestrictionInfo )
      goto LABEL_214;
    v57 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount(questRestrictionInfo, (int32_t)lv, 0);
  }
  imageLimitCount = v57;
  v66 = v57;
  if ( v57 < 0 )
  {
LABEL_169:
    imageLimitCount = item->fields.imageLimitCount;
    if ( imageLimitCount < 0 )
    {
      v67 = PartyOrganizationListViewItem__get_SvtId(item, 0);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v67, 0);
      svtLimitCount = item->fields.svtLimitCount;
      v70 = v68;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v66 = ImageLimitCount__GetImageLimitCount(v70, svtLimitCount, 0);
    }
    else
    {
      v66 = item->fields.imageLimitCount;
    }
  }
  v141 = isRarityHide;
  v71 = item->fields.svtLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v66, v71, 0);
  v73 = PartyOrganizationListViewItem__get_SvtId(item, 0);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v73, 0);
  v75 = item->fields.svtLimitCount;
  v76 = v74;
  v77 = (ServantOverwriteStatus_o *)sub_1C93D20(ServantOverwriteStatus_TypeInfo);
  ServantOverwriteStatus___ctor_34689044(v77, v76, v75, LimitCountByDispLimit, 0);
  if ( !v77 )
    goto LABEL_214;
  Rarity_k__BackingField = v77->fields._Rarity_k__BackingField;
  actualRarity = v77->fields._ActualRarity_k__BackingField;
  v80 = this->fields.servantFaceIcon;
  v146 = PartyOrganizationListViewItem__get_SvtId(item, 0);
  v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v146, 0);
  v82 = item->fields.svtLimitCount;
  v83 = v81;
  lv = (void *)PartyOrganizationListViewItem__get_Level(item, 0);
  if ( !v80 )
    goto LABEL_214;
  ServantFaceIconComponent__SetIcon(
    v80,
    v83,
    Rarity_k__BackingField,
    v82,
    imageLimitCount,
    0,
    0,
    0,
    2,
    0,
    0,
    0,
    1,
    (int32_t)lv,
    imageSvtId,
    0,
    actualRarity,
    item->fields._IsGrandServant_k__BackingField,
    0);
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_214;
  ServantFaceIconComponent__SetGrandFaceMaskSpritePartyOrganizationAtlas(
    (ServantFaceIconComponent_o *)lv,
    this->fields.restrictionMaskSprite,
    this->fields.maskSpriteDefaultSpriteName,
    this->fields.maskSpriteDefaultAtlas,
    0);
  v84 = (UnityEngine_Object_o *)this->fields.supportSprite;
  isRarityHide = v141;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v84, 0, 0) )
  {
    lv = this->fields.supportSprite;
    if ( !lv )
      goto LABEL_214;
    UISprite__set_spriteName((UISprite_o *)lv, 0, 0);
  }
  v52 = 0;
LABEL_189:
  v47 = 0;
  if ( !isAdjustPosY )
    goto LABEL_195;
LABEL_190:
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_214;
  if ( !ServantFaceIconComponent__IsUseEquip((ServantFaceIconComponent_o *)lv, 0) )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_214;
    ServantFaceIconComponent__AdjustRaritySpritePosY((ServantFaceIconComponent_o *)lv, -55.0, 0);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_214;
    ServantFaceIconComponent__AdjustDispLimitCountSpritePosY((ServantFaceIconComponent_o *)lv, -34.0, 0);
  }
LABEL_195:
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_214;
  ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)lv, !isRarityHide, 0);
  if ( item->fields._IsNotSupportSingle_k__BackingField || !item->fields._IsDataLost_k__BackingField )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_214;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 1, 0);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_214;
    v85 = 1;
  }
  else
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_214;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 0, 0);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_214;
    v85 = 0;
  }
  ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)lv, v85, 0);
  commandLabelList = this->fields.commandLabelList;
  if ( !commandLabelList )
    goto LABEL_214;
  v87 = 0;
  v88 = (_DWORD)v47 + 32;
  while ( 1 )
  {
    max_length = commandLabelList->max_length;
    if ( (int)v87 >= max_length )
      break;
    if ( (unsigned int)v87 >= max_length )
      goto LABEL_328;
    v90 = commandLabelList->m_Items[v87];
    if ( v47 )
    {
      if ( (unsigned int)v87 >= LODWORD(v47->max_length) )
LABEL_328:
        sub_1C93D34(lv);
      lv = System_Int32__ToString(v88, 0);
      v16 = (PartyOrganizationRootComponent_c *)lv;
      if ( !v90 )
        goto LABEL_214;
    }
    else
    {
      v16 = (PartyOrganizationRootComponent_c *)StringLiteral_1/*""*/;
      if ( !v90 )
        goto LABEL_214;
    }
    UILabel__set_text(v90, (System_String_o *)v16, 0);
    commandLabelList = this->fields.commandLabelList;
    ++v87;
    v88 += 4;
    if ( !commandLabelList )
      goto LABEL_214;
  }
  lv = this->fields.baseSprite;
  if ( !lv )
LABEL_214:
    sub_1C93D2C(lv, v16);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 0, 0);
  if ( v52 )
  {
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_214;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 1, 0);
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_214;
    UISprite__set_spriteName((UISprite_o *)lv, v52, 0);
  }
  memberTypeBaseSprite = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(memberTypeBaseSprite, 0, 0) )
  {
    index = item->fields.index;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    lv = this->fields.memberTypeBaseSprite;
    if ( !lv )
      goto LABEL_214;
    v93 = (System_String_o **)(index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax
                             ? &StringLiteral_19831/*"formation_txtbg_03"*/
                             : &StringLiteral_19830/*"formation_txtbg_02"*/);
    UISprite__set_spriteName((UISprite_o *)lv, *v93, 0);
    memberTypeSprite = this->fields.memberTypeSprite;
    v144 = item->fields.index + 1;
    v95 = System_Int32__ToString((int32_t)&v144, 0);
    lv = System_String__Concat_64425724((System_String_o *)StringLiteral_21797/*"member_txt_"*/, v95, 0);
    if ( !memberTypeSprite )
      goto LABEL_214;
    UISprite__set_spriteName(memberTypeSprite, (System_String_o *)lv, 0);
    lv = this->fields.memberTypeSprite;
    if ( !lv )
      goto LABEL_214;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
    goto LABEL_276;
  if ( PartyOrganizationListViewItem__get_IsLeave(item, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v97 = &StringLiteral_11627/*"SELECT_NO_SORTIE"*/;
LABEL_239:
    v98 = LocalizationManager__Get((System_String_o *)*v97, 0);
    v148.fields.r = 0.0;
    v148.fields.g = 0.0;
    v148.fields.b = 0.0;
    v148.fields.a = 1.0;
    v103 = this;
    v104 = 0;
LABEL_240:
    PartyOrganizationConfirmItemDraw__SetMaskMessage(v103, v98, v148, 0, v104, 0, v99);
    v105 = 1;
    goto LABEL_277;
  }
  if ( PartyOrganizationListViewItem__get_IsQuestRestriction(item, 0)
    && !PartyOrganizationListViewItem__get_IsEmpty(item, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v115 = LocalizationManager__Get((System_String_o *)StringLiteral_10326/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
    goto LABEL_253;
  }
  if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v108 = &StringLiteral_10327/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_248:
    v109 = LocalizationManager__Get((System_String_o *)*v108, 0);
    v111 = 0.0;
    v112 = 0.0;
    v113 = this;
    v114 = 0;
LABEL_249:
    v105 = 1;
    PartyOrganizationConfirmItemDraw__SetWarningMessage(v113, v109, 1, v114, v111, v112, v110);
    goto LABEL_277;
  }
  if ( item->fields.isFixedSupportPositionRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v108 = &StringLiteral_10328/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/;
    goto LABEL_248;
  }
  if ( item->fields.isFixedServantPositionRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v108 = &StringLiteral_10329/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/;
    goto LABEL_248;
  }
  fatigureTime = item->fields.fatigureTime;
  if ( (fatigureTime & 0x8000000000000000LL) == 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( fatigureTime > NetworkManager__getTime(0) )
    {
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_406/*"#042484"*/, &color, 0);
      color.fields.a = 0.69804;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v124 = LocalizationManager__Get((System_String_o *)StringLiteral_11633/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, 0);
      v148 = color;
      v98 = v124;
      v103 = this;
      v104 = (System_String_o *)StringLiteral_20628/*"img_frames_mask11"*/;
      goto LABEL_240;
    }
    PartyOrganizationListViewItem__ClearFatigure(item, 0);
    goto LABEL_275;
  }
  if ( item->fields._IsAllOutBattle_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v97 = &StringLiteral_11628/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
    goto LABEL_239;
  }
  if ( item->fields._IsNotSupportSingle_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v109 = LocalizationManager__Get((System_String_o *)StringLiteral_10330/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0);
    v111 = 10.0;
    v112 = -22.0;
    v114 = 1;
    v113 = this;
    goto LABEL_249;
  }
  if ( item->fields._IsDataLost_k__BackingField )
  {
    v116 = (System_String_o *)StringLiteral_1/*""*/;
    v149.fields.r = 1.0;
    v149.fields.g = 1.0;
    v149.fields.b = 1.0;
    v121 = (System_String_o *)StringLiteral_18638/*"datalost_svt_select"*/;
    v149.fields.a = 1.0;
    v122 = 1;
    v120 = this;
    goto LABEL_254;
  }
  if ( item->fields._TimesToRestart_k__BackingField >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v137 = LocalizationManager__Get((System_String_o *)StringLiteral_11634/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
    TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
    v138 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
    v115 = System_String__Format(v137, v138, 0);
LABEL_253:
    v116 = v115;
    v149.fields.r = 0.0;
    v149.fields.g = 0.0;
    v149.fields.b = 0.0;
    v149.fields.a = 1.0;
    v120 = this;
    v121 = 0;
    v122 = 0;
LABEL_254:
    v105 = 1;
    PartyOrganizationConfirmItemDraw__SetMaskMessage(v120, v116, v149, 1, v121, v122, v107);
    goto LABEL_277;
  }
LABEL_275:
  PartyOrganizationConfirmItemDraw__ClearMessage(this, v106);
LABEL_276:
  v105 = 0;
LABEL_277:
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0, 0) )
    return;
  if ( !item->fields.isFollower )
  {
    v131 = item->fields.userServantEntity;
    if ( v131 )
    {
      SvtClassId = UserServantEntity__getSvtClassId(v131, 0, 0, 0);
    }
    else
    {
      v126 = item->fields.servantEntity;
      if ( !v126 )
        goto LABEL_295;
      SvtClassId = v126[20];
    }
    LODWORD(v126) = 0;
    goto LABEL_296;
  }
  v126 = item->fields.followerInfo;
  if ( !v126 )
  {
LABEL_295:
    SvtClassId = 0;
    goto LABEL_296;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_214;
  v127 = DataManager__GetMasterData_object_(
           (DataManager_o *)lv,
           (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
  if ( !lv )
    goto LABEL_214;
  v129 = *((_QWORD *)lv + 6);
  v128 = *((_QWORD *)lv + 7);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v147.fields.currentCryptoKey = v129;
  *(_QWORD *)&v147.fields.fakeValue = v128;
  lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v147, 0);
  if ( !v127 )
    goto LABEL_214;
  lv = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v127,
         (int32_t)lv,
         (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !lv )
    goto LABEL_214;
  SvtClassId = *((_DWORD *)lv + 20);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
  if ( !lv )
    goto LABEL_214;
  LODWORD(v126) = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)lv, 0);
LABEL_296:
  if ( (unsigned int)v126 | v105 | (SvtClassId == 0) )
  {
    lv = this->fields.classCompatibilityIcon;
    if ( !lv )
      goto LABEL_214;
    goto LABEL_316;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_214;
  lv = (void *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)lv, 40, 0);
  if ( ((unsigned __int8)lv & 1) == 0 )
    goto LABEL_313;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_214;
  lv = (void *)*((_QWORD *)lv + 4);
  if ( !lv )
    goto LABEL_214;
  v16 = PartyOrganizationRootComponent_TypeInfo;
  naturalAligment = PartyOrganizationRootComponent_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)lv + 304LL) < (unsigned int)naturalAligment
    || *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)lv + 200LL) + 8 * naturalAligment - 8) != PartyOrganizationRootComponent_TypeInfo )
  {
    v139 = (PartyOrganizationCommandCardMenu_o *)sub_1C940C8(lv);
    PartyOrganizationCommandCardMenu__EndOpen(v139, v140);
    return;
  }
  v133 = *((_QWORD *)lv + 65);
  if ( !v133
    || (lv = (void *)BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)lv + 65), 0), !(_DWORD)lv)
    || (v134 = *(_DWORD *)(v133 + 24)) == 0 )
  {
LABEL_313:
    v136 = this->fields.classCompatibilityIcon;
    goto LABEL_314;
  }
  v135 = (int)lv;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_214;
  lv = DataManager__GetMasterData_object_(
         (DataManager_o *)lv,
         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !lv )
    goto LABEL_214;
  lv = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)lv, v135, v134, 0);
  v136 = this->fields.classCompatibilityIcon;
  if ( !lv )
  {
LABEL_314:
    if ( !v136 )
      goto LABEL_214;
    lv = v136;
LABEL_316:
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)lv, 0);
    return;
  }
  if ( !v136 )
    goto LABEL_214;
  ServantClassCompatibilityIconComponent__SetIcon(
    this->fields.classCompatibilityIcon,
    SvtClassId,
    *((System_Int32_array **)lv + 6),
    1,
    0);
}


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
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v19; // x22
  UIWidget_o *v20; // x22
  int32_t *p_DATA_LOST_MASK_HEIGHT; // x8
  System_String_o *v22; // x2
  float v23; // s0
  float v24; // s8
  UnityEngine_Transform_o *v25; // x20
  float restrictionMaskMessageWidth; // s0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Vector3_o oneVector; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = maskColor.fields.a;
  b = maskColor.fields.b;
  g = maskColor.fields.g;
  r = maskColor.fields.r;
  if ( (byte_4D2C30A & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1C93AD4(&StringLiteral_18638/*"datalost_svt_select"*/);
    sub_1C93AD4(&StringLiteral_20624/*"img_frames_mask03"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C30A = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_45;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( isDataLost )
    {
      v19 = this->fields.restrictionMaskSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(v19, (System_String_o *)StringLiteral_18638/*"datalost_svt_select"*/, 0);
      v20 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)PartyOrganizationConfirmItemDraw_TypeInfo;
      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
      if ( !v20 )
        goto LABEL_45;
      p_DATA_LOST_MASK_HEIGHT = &PartyOrganizationConfirmItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
      if ( !gameObject )
        goto LABEL_45;
      v22 = maskName ? maskName : (System_String_o *)StringLiteral_20624/*"img_frames_mask03"*/;
      ServantFaceIconComponent__SetGrandFaceMaskSpritePartyOrganizationAtlas(
        (ServantFaceIconComponent_o *)gameObject,
        this->fields.restrictionMaskSprite,
        v22,
        this->fields.maskSpriteDefaultAtlas,
        0);
      v20 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( !v20 )
        goto LABEL_45;
      p_DATA_LOST_MASK_HEIGHT = &this->fields.maskSpriteDefaultHeight;
    }
    UIWidget__set_height(v20, *p_DATA_LOST_MASK_HEIGHT, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_45;
    v31.fields.r = r;
    v31.fields.g = g;
    v31.fields.b = b;
    v31.fields.a = a;
    UIWidget__set_color((UIWidget_o *)gameObject, v31, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_45;
    if ( isScale )
    {
      LODWORD(v23) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_45;
      v24 = v23;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v25 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v24 <= restrictionMaskMessageWidth )
      {
        if ( !byte_4D2A13E )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A13E = 1;
        }
        oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
      }
      else
      {
        oneVector.fields.x = restrictionMaskMessageWidth / v24;
        oneVector.fields.z = 1.0;
        oneVector.fields.y = 1.0;
      }
      if ( !v25 )
        goto LABEL_45;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v25 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4D2A13E )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A13E = 1;
      }
      if ( !v25 )
        goto LABEL_45;
      oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
    }
    UnityEngine_Transform__set_localScale(v25, oneVector, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_45:
    sub_1C93D2C(gameObject, v17);
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
  System_Collections_Generic_List_object__o *v10; // x29
  il2cpp_array_size_t max_length; // x22
  int32_t size; // w28
  int v13; // w23
  bool v14; // w26
  unsigned int v15; // w24
  char *v16; // x19
  PartyOrganizationConfirmItemDraw_o **v17; // x19
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v18; // t1
  __int64 v19; // x8
  int32_t v20; // w25
  __int64 v21; // x8
  Il2CppObject *Master_object; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  bool IsHideRarity; // w27
  int32_t v25; // w25
  PartyOrganizationConfirmItemDraw_o *v26; // x26
  const MethodInfo *v27; // x7
  PartyOrganizationConfirmItemDraw_c *v29; // x0
  UnityEngine_GameObject_o *self; // [xsp+8h] [xbp-88h]
  il2cpp_array_size_t v31; // [xsp+10h] [xbp-80h]
  bool v32; // [xsp+1Ch] [xbp-74h]
  bool v33; // [xsp+20h] [xbp-70h]
  int32_t questPhase; // [xsp+24h] [xbp-6Ch]
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+28h] [xbp-68h] BYREF

  v10 = (System_Collections_Generic_List_object__o *)itemList;
  if ( (byte_4D2C30C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)sub_1C93AD4(&PartyOrganizationConfirmItemDraw_TypeInfo);
    byte_4D2C30C = 1;
  }
  npcServantFollowerEntity = 0;
  if ( !v10 || (self = supportMemberBase, !supportMemberObjectList) )
LABEL_44:
    sub_1C93D2C(itemList, supportMemberObjectList);
  max_length = supportMemberObjectList->max_length;
  size = v10->fields._size;
  if ( (int)max_length >= 1 )
  {
    v13 = 1;
    v14 = size > 0;
    v32 = isSimpleDisp;
    v33 = isAdjustPosY;
    v31 = supportMemberObjectList->max_length;
    while ( 1 )
    {
      v15 = v13 - 1;
      v16 = (char *)supportMemberObjectList + 8 * v13 - 8;
      v18 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)*((_QWORD *)v16 + 4);
      v17 = (PartyOrganizationConfirmItemDraw_o **)(v16 + 32);
      itemList = v18;
      if ( !v18 )
        goto LABEL_44;
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)itemList,
                                                                                       0);
      if ( !itemList )
        goto LABEL_44;
      if ( !v14 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0);
        goto LABEL_36;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 1, 0);
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       v10,
                                                                                       v15,
                                                                                       (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_44;
      if ( *(_QWORD *)&itemList[4].fields._size )
      {
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v15,
                                                                                         (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_44;
        v19 = *(_QWORD *)&itemList[4].fields._size;
        if ( !v19 )
          goto LABEL_44;
        v20 = *(_DWORD *)(v19 + 36);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v15,
                                                                                         (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_44;
        v21 = *(_QWORD *)&itemList[4].fields._size;
        if ( !v21 )
          goto LABEL_44;
        questPhase = *(_DWORD *)(v21 + 40);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v15,
                                                                                         (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_44;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)itemList, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                                         SvtId,
                                                                                         0);
        if ( !Master_object )
          goto LABEL_44;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                                                         (NpcServantFollowerMaster_o *)Master_object,
                                                                                         &npcServantFollowerEntity,
                                                                                         v20,
                                                                                         questPhase,
                                                                                         (int32_t)itemList,
                                                                                         0);
        if ( ((unsigned __int8)itemList & 1) != 0 )
        {
          LODWORD(max_length) = v31;
          if ( !npcServantFollowerEntity )
            goto LABEL_44;
          IsHideRarity = NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
          if ( !npcServantFollowerEntity || !itemList )
            goto LABEL_44;
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerMaster__GetEntity_43141800(
                                                                                           (NpcFollowerMaster_o *)itemList,
                                                                                           v20,
                                                                                           questPhase,
                                                                                           npcServantFollowerEntity->fields.id,
                                                                                           0);
          if ( itemList )
          {
            itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerEntity__GetImageSvtId(
                                                                                             (NpcFollowerEntity_o *)itemList,
                                                                                             0);
            v25 = (int)itemList;
          }
          else
          {
            v25 = 0;
          }
          goto LABEL_33;
        }
        LODWORD(max_length) = v31;
      }
      v25 = 0;
      IsHideRarity = 0;
LABEL_33:
      if ( v15 >= LODWORD(supportMemberObjectList->max_length) )
        goto LABEL_45;
      v26 = *v17;
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       v10,
                                                                                       v15,
                                                                                       (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
      if ( !v26 )
        goto LABEL_44;
      PartyOrganizationConfirmItemDraw__SetItem(
        v26,
        (PartyOrganizationListViewItem_o *)itemList,
        2,
        v33,
        IsHideRarity,
        v25,
        v32,
        v27);
LABEL_36:
      if ( (_DWORD)max_length == v13 )
        break;
      v14 = v13 < size;
      if ( (unsigned int)v13++ >= LODWORD(supportMemberObjectList->max_length) )
LABEL_45:
        sub_1C93D34(itemList);
    }
  }
  v29 = PartyOrganizationConfirmItemDraw_TypeInfo;
  if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
    v29 = PartyOrganizationConfirmItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(self, (float)(v29->static_fields->ICON_OFFSET_SIZE * (1 - size)), 0);
}


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
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  float v19; // s0
  float v20; // s8
  int32_t restrictionWarningMessageWidth; // s0
  UnityEngine_Transform_o *v22; // x19
  float v23; // s0
  UnityEngine_Vector3_o oneVector; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2C30B & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_20624/*"img_frames_mask03"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C30B = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_38;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isMask, 0);
    if ( isMask )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
      if ( !gameObject )
        goto LABEL_38;
      ServantFaceIconComponent__SetGrandFaceMaskSpritePartyOrganizationAtlas(
        (ServantFaceIconComponent_o *)gameObject,
        this->fields.restrictionMaskSprite,
        (System_String_o *)StringLiteral_20624/*"img_frames_mask03"*/,
        this->fields.maskSpriteDefaultAtlas,
        0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_38;
      v27.fields.r = 0.0;
      v27.fields.g = 0.0;
      v27.fields.b = 0.0;
      v27.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, v27, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_38;
      UIWidget__set_height((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultHeight, 0);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_38;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v17 = UnityEngine_Component__get_gameObject(gameObject, 0);
          GameObjectExtensions__SetLocalPositionY(v17, iconPosY, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
          if ( gameObject )
          {
            v18 = UnityEngine_Component__get_gameObject(gameObject, 0);
            GameObjectExtensions__SetLocalPositionY(v18, msgPosY, 0);
            gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, message, 0);
              gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
              if ( gameObject )
              {
                if ( isScale )
                {
                  LODWORD(v19) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0);
                  gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
                  if ( gameObject )
                  {
                    v20 = v19;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
                    restrictionWarningMessageWidth = this->fields.restrictionWarningMessageWidth;
                    v22 = (UnityEngine_Transform_o *)gameObject;
                    v23 = (float)restrictionWarningMessageWidth;
                    if ( v20 <= v23 )
                    {
                      if ( !byte_4D2A13E )
                      {
                        gameObject = (UnityEngine_Component_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
                        byte_4D2A13E = 1;
                      }
                      oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
                    }
                    else
                    {
                      oneVector.fields.x = v23 / v20;
                      oneVector.fields.z = 1.0;
                      oneVector.fields.y = 1.0;
                    }
                    if ( v22 )
                      goto LABEL_37;
                  }
                }
                else
                {
                  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
                  v22 = (UnityEngine_Transform_o *)gameObject;
                  if ( !byte_4D2A13E )
                  {
                    gameObject = (UnityEngine_Component_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
                    byte_4D2A13E = 1;
                  }
                  if ( v22 )
                  {
                    oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
LABEL_37:
                    UnityEngine_Transform__set_localScale(v22, oneVector, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_38:
    sub_1C93D2C(gameObject, v14);
  }
}