void PartyOrganizationConfirmItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4C333BB & 1) == 0 )
  {
    sub_1C32C20(&PartyOrganizationConfirmItemDraw_TypeInfo);
    byte_4C333BB = 1;
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
  UIWidget_o *restrictionMaskMessageText; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct UISprite_o *v7; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UISprite_o *v11; // x8
  struct System_String_o *mSpriteName; // x1
  struct UISprite_o *v13; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *maskServantObj; // x20
  Il2CppObject *ComponentInChildren_object__51596568; // x0
  struct UISprite_o **p_maskServantSprite; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *maskServantSprite; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct UIAtlas_o *v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct UISprite_o *v26; // x8
  struct System_String_o *v27; // x1

  if ( (byte_4C333B5 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite____78130160);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C333B5 = 1;
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
    v7 = this->fields.restrictionMaskSprite;
    if ( !v7 )
      goto LABEL_27;
    mAtlas = v7->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.maskSpriteDefaultAtlas, (int32_t)mAtlas, v5, v6);
    v11 = this->fields.restrictionMaskSprite;
    if ( !v11 )
      goto LABEL_27;
    mSpriteName = v11->fields.mSpriteName;
    this->fields.maskSpriteDefaultSpriteName = mSpriteName;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.maskSpriteDefaultSpriteName, (int32_t)mSpriteName, v9, v10);
    v13 = this->fields.restrictionMaskSprite;
    if ( !v13 )
      goto LABEL_27;
    this->fields.maskSpriteDefaultHeight = v13->fields.mHeight;
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
    ComponentInChildren_object__51596568 = UnityEngine_GameObject__GetComponentInChildren_object__51596568(
                                             (UnityEngine_GameObject_o *)restrictionMaskMessageText,
                                             1,
                                             (const MethodInfo_3134D18 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite____78130160);
    this->fields.maskServantSprite = (struct UISprite_o *)ComponentInChildren_object__51596568;
    p_maskServantSprite = &this->fields.maskServantSprite;
    sub_1C32BC4(
      (CGThumbnailListItem_o *)&this->fields.maskServantSprite,
      (int32_t)ComponentInChildren_object__51596568,
      v18,
      v19);
    maskServantSprite = (UnityEngine_Object_o *)this->fields.maskServantSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    restrictionMaskMessageText = (UIWidget_o *)UnityEngine_Object__op_Inequality(maskServantSprite, 0, 0);
    if ( ((unsigned __int8)restrictionMaskMessageText & 1) != 0 )
    {
      if ( *p_maskServantSprite )
      {
        v23 = (*p_maskServantSprite)->fields.mAtlas;
        this->fields.defaultMaskServantAtlas = v23;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.defaultMaskServantAtlas, (int32_t)v23, v21, v22);
        v26 = this->fields.maskServantSprite;
        if ( v26 )
        {
          v27 = v26->fields.mSpriteName;
          this->fields.defaultMaskServantSpriteName = v27;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.defaultMaskServantSpriteName, (int32_t)v27, v24, v25);
          return;
        }
      }
LABEL_27:
      sub_1C32E7C(restrictionMaskMessageText);
    }
  }
}


void PartyOrganizationConfirmItemDraw__ClearMessage(PartyOrganizationConfirmItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4C333B7 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C333B7 = 1;
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
    sub_1C32E7C(gameObject);
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
  void *lv; // x0
  UnityEngine_Object_o *maskServantLabel; // x25
  UnityEngine_Object_o *maskEquipObj; // x25
  UnityEngine_Object_o *maskEquipLabel; // x25
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  struct FollowerInfo_o *followerInfo; // x8
  UnityEngine_Object_o *typeSprite; // x23
  struct FollowerInfo_o *v23; // x8
  int32_t type; // w8
  __int64 *v25; // x8
  UnityEngine_Object_o *v26; // x24
  UserServantEntity_o *userServantEntity; // x24
  ServantFaceIconComponent_o *v28; // x23
  UnityEngine_Object_o *v29; // x23
  UnityEngine_Object_o *v30; // x23
  UILabel_o *v31; // x23
  Il2CppObject *Master_object; // x23
  NetworkManager_c *v33; // x0
  int64_t userIdNumber; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  ServantFaceIconComponent_o *v36; // x23
  UserServantCollectionEntity_o *v37; // x25
  UserServantEntity_o *v38; // x24
  UnityEngine_Object_o *v39; // x23
  UnityEngine_Object_o *maskEquipSprite; // x23
  UISprite_o *v41; // x23
  UnityEngine_Object_o *v42; // x23
  UILabel_o *v43; // x23
  System_Int32_array *v44; // x0
  UnityEngine_Object_o *v45; // x24
  System_Int32_array *v46; // x23
  UISprite_o *v47; // x0
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
  System_String_o *v91; // x1
  UnityEngine_Object_o *memberTypeBaseSprite; // x21
  int32_t index; // w21
  System_String_o **v94; // x8
  UISprite_o *memberTypeSprite; // x21
  System_String_o *v96; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  __int64 *v98; // x8
  System_String_o *v99; // x1
  const MethodInfo *v100; // x5
  float r; // s0 OVERLAPPED
  float g; // s1
  float b; // s2
  float a; // s3
  PartyOrganizationConfirmItemDraw_o *v105; // x0
  System_String_o *v106; // x3
  int v107; // w24
  const MethodInfo *v108; // x1
  const MethodInfo *v109; // x5
  __int64 *v110; // x8
  System_String_o *v111; // x1
  const MethodInfo *v112; // x4
  float v113; // s0
  float v114; // s1
  PartyOrganizationConfirmItemDraw_o *v115; // x0
  bool v116; // w3
  System_String_o *v117; // x0
  System_String_o *v118; // x1
  float v119; // s0 OVERLAPPED
  float v120; // s1
  float v121; // s2
  float v122; // s3
  PartyOrganizationConfirmItemDraw_o *v123; // x0
  System_String_o *v124; // x3
  bool v125; // w4
  int64_t fatigureTime; // x21
  System_String_o *v127; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  _DWORD *v129; // x8
  Il2CppObject *v130; // x21
  __int64 v131; // x22
  __int64 v132; // x23
  int32_t SvtClassId; // w21
  UserServantEntity_o *v134; // x0
  __int64 naturalAligment; // x9
  __int64 v136; // x22
  int32_t v137; // w22
  int32_t v138; // w20
  struct ServantClassCompatibilityIconComponent_o *v139; // x8
  System_String_o *v140; // x21
  __int64 v141; // x2
  __int64 v142; // x3
  __int64 v143; // x4
  __int64 v144; // x5
  __int64 v145; // x6
  __int64 v146; // x7
  Il2CppObject *v147; // x0
  PartyOrganizationCommandCardMenu_o *v148; // x0
  const MethodInfo *v149; // x1
  bool v150; // [xsp+58h] [xbp-88h]
  int32_t TimesToRestart_k__BackingField; // [xsp+5Ch] [xbp-84h] BYREF
  UnityEngine_Color_o color; // [xsp+60h] [xbp-80h] BYREF
  int v153; // [xsp+74h] [xbp-6Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v156; // 0:x0.16

  if ( (byte_4C333B6 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&PartyOrganizationRootComponent_TypeInfo);
    sub_1C32C20(&ServantOverwriteStatus_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&UserServantEntity_TypeInfo);
    sub_1C32C20(&StringLiteral_20242/*"icon_support_02"*/);
    sub_1C32C20(&StringLiteral_15494/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/);
    sub_1C32C20(&StringLiteral_10265/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/);
    sub_1C32C20(&StringLiteral_10268/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1C32C20(&StringLiteral_11545/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/);
    sub_1C32C20(&StringLiteral_11546/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1C32C20(&StringLiteral_11540/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_1C32C20(&StringLiteral_20398/*"img_frames_mask11"*/);
    sub_1C32C20(&StringLiteral_10264/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1C32C20(&StringLiteral_21528/*"member_txt_"*/);
    sub_1C32C20(&StringLiteral_11539/*"SELECT_NO_SORTIE"*/);
    sub_1C32C20(&StringLiteral_20241/*"icon_support_01"*/);
    sub_1C32C20(&StringLiteral_20197/*"icon_eventjoin_02"*/);
    sub_1C32C20(&StringLiteral_19618/*"formation_txtbg_03"*/);
    sub_1C32C20(&StringLiteral_15492/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/);
    sub_1C32C20(&StringLiteral_19573/*"formation_blank_small"*/);
    sub_1C32C20(&StringLiteral_20401/*"img_frames_mask14"*/);
    sub_1C32C20(&StringLiteral_18479/*"datalost_svt_select"*/);
    sub_1C32C20(&StringLiteral_406/*"#042484"*/);
    sub_1C32C20(&StringLiteral_19615/*"formation_support_small"*/);
    sub_1C32C20(&StringLiteral_19617/*"formation_txtbg_02"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_10266/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/);
    sub_1C32C20(&StringLiteral_20200/*"icon_friend"*/);
    sub_1C32C20(&StringLiteral_10267/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/);
    sub_1C32C20(&StringLiteral_20199/*"icon_follow"*/);
    byte_4C333B6 = 1;
  }
  entity = 0;
  v153 = 0;
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
      goto LABEL_216;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
  }
  maskServantLabel = (UnityEngine_Object_o *)this->fields.maskServantLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskServantLabel, 0, 0) )
  {
    lv = this->fields.maskServantLabel;
    if ( !lv )
      goto LABEL_216;
    UILabel__set_text((UILabel_o *)lv, string_TypeInfo->static_fields->Empty, 0);
  }
  maskEquipObj = (UnityEngine_Object_o *)this->fields.maskEquipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskEquipObj, 0, 0) )
  {
    lv = this->fields.maskEquipObj;
    if ( !lv )
      goto LABEL_216;
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
      goto LABEL_216;
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
        goto LABEL_216;
      if ( !servantFaceIcon )
        goto LABEL_216;
      ServantFaceIconComponent__Set_40909724(
        servantFaceIcon,
        (ServantLeaderInfo_o *)lv,
        0,
        0,
        0,
        followerInfo->fields.imageSvtId,
        0);
      lv = this->fields.servantFaceIcon;
      if ( !lv )
        goto LABEL_216;
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
        v23 = item->fields.followerInfo;
        if ( !v23 )
          goto LABEL_216;
        type = v23->fields.type;
        if ( (unsigned int)(type - 3) < 2 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_216;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
          if ( !lv )
            goto LABEL_216;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_216;
          v25 = &StringLiteral_20241/*"icon_support_01"*/;
          goto LABEL_137;
        }
        if ( type == 5 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_216;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
          if ( !lv )
            goto LABEL_216;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_216;
          v25 = &StringLiteral_20199/*"icon_follow"*/;
          goto LABEL_137;
        }
        if ( type == 1 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_216;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
          if ( !lv )
            goto LABEL_216;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_216;
          v25 = &StringLiteral_20200/*"icon_friend"*/;
LABEL_137:
          UISprite__set_spriteName((UISprite_o *)lv, (System_String_o *)*v25, 0);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_216;
          (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
          goto LABEL_142;
        }
        lv = this->fields.typeSprite;
        if ( !lv )
          goto LABEL_216;
        lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
        if ( !lv )
          goto LABEL_216;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
      }
LABEL_142:
      CommandCardList = PartyOrganizationListViewItem__GetCommandCardList(item, 0);
      supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
      v46 = CommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(supportSprite, 0, 0) )
      {
        lv = this->fields.supportSprite;
        if ( !lv )
          goto LABEL_216;
        if ( item->fields.isFollower )
          v60 = (System_String_o *)StringLiteral_20242/*"icon_support_02"*/;
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
            goto LABEL_216;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
          if ( !lv )
            goto LABEL_216;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
        }
        v62 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v62, 0, 0) )
        {
          lv = this->fields.supportSprite;
          if ( !lv )
            goto LABEL_216;
          UISprite__set_spriteName((UISprite_o *)lv, 0, 0);
        }
        lv = this->fields.servantFaceIcon;
        if ( !lv )
LABEL_216:
          sub_1C32E7C(lv);
        ServantFaceIconComponent__ClearEquip((ServantFaceIconComponent_o *)lv, 0);
      }
LABEL_164:
      v52 = 0;
      if ( !isAdjustPosY )
        goto LABEL_197;
      goto LABEL_192;
    }
    if ( !servantFaceIcon )
      goto LABEL_216;
    ServantFaceIconComponent__Clear(this->fields.servantFaceIcon, 0);
    v49 = (UnityEngine_Object_o *)this->fields.typeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v49, 0, 0) )
    {
      lv = this->fields.typeSprite;
      if ( !lv )
        goto LABEL_216;
      lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
      if ( !lv )
        goto LABEL_216;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
    }
    v50 = UnityEngine_Object_TypeInfo;
    v51 = &StringLiteral_19615/*"formation_support_small"*/;
    goto LABEL_111;
  }
  v26 = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
  {
    lv = this->fields.typeSprite;
    if ( !lv )
      goto LABEL_216;
    lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
    if ( !lv )
      goto LABEL_216;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
  }
  userServantEntity = item->fields.userServantEntity;
  if ( userServantEntity )
  {
    v28 = this->fields.servantFaceIcon;
    lv = PartyOrganizationListViewItem__GetEquipList(item, 0);
    if ( !v28 )
      goto LABEL_216;
    ServantFaceIconComponent__Set(
      v28,
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
      goto LABEL_216;
    ServantFaceIconComponent__SetGrandFaceMaskSpritePartyOrganizationAtlas(
      (ServantFaceIconComponent_o *)lv,
      this->fields.restrictionMaskSprite,
      this->fields.maskSpriteDefaultSpriteName,
      this->fields.maskSpriteDefaultAtlas,
      0);
    if ( item->fields._IsDisappearSvt_k__BackingField )
    {
      v29 = (UnityEngine_Object_o *)this->fields.maskServantObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v29, 0, 0) )
      {
        lv = this->fields.servantFaceIcon;
        if ( !lv )
          goto LABEL_216;
        ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
          (ServantFaceIconComponent_o *)lv,
          this->fields.maskServantSprite,
          this->fields.defaultMaskServantSpriteName,
          this->fields.defaultMaskServantAtlas,
          0);
        lv = this->fields.maskServantObj;
        if ( !lv )
          goto LABEL_216;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0);
      }
      v30 = (UnityEngine_Object_o *)this->fields.maskServantLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v30, 0, 0) )
      {
        v31 = this->fields.maskServantLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        lv = LocalizationManager__Get((System_String_o *)StringLiteral_15494/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0);
        if ( !v31 )
          goto LABEL_216;
        UILabel__set_text(v31, (System_String_o *)lv, 0);
      }
    }
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      v33 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v33 = NetworkManager_TypeInfo;
      }
      userIdNumber = v33->static_fields->userIdNumber;
      EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(item, 0);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(EquipSvtId, 0);
      if ( !Master_object )
        goto LABEL_216;
      if ( UserServantCollectionMaster__TryGetEntity(
             (UserServantCollectionMaster_o *)Master_object,
             &entity,
             userIdNumber,
             (int32_t)lv,
             0) )
      {
        v36 = this->fields.servantFaceIcon;
        v37 = entity;
        v38 = (UserServantEntity_o *)sub_1C32E6C(UserServantEntity_TypeInfo);
        UserServantEntity___ctor_43055668(v38, v37, 0, 0);
        if ( !v36 )
          goto LABEL_216;
        ServantFaceIconComponent__SetEquip(v36, v38, 0);
        v39 = (UnityEngine_Object_o *)this->fields.maskEquipObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v39, 0, 0) )
        {
          lv = this->fields.maskEquipObj;
          if ( !lv )
            goto LABEL_216;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0);
        }
        maskEquipSprite = (UnityEngine_Object_o *)this->fields.maskEquipSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(maskEquipSprite, 0, 0) )
        {
          v41 = this->fields.maskEquipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(v41, (System_String_o *)StringLiteral_20401/*"img_frames_mask14"*/, 0);
        }
        v42 = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v42, 0, 0) )
        {
          v43 = this->fields.maskEquipLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          lv = LocalizationManager__Get((System_String_o *)StringLiteral_15492/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0);
          if ( !v43 )
            goto LABEL_216;
          UILabel__set_text(v43, (System_String_o *)lv, 0);
        }
      }
    }
    v44 = PartyOrganizationListViewItem__GetCommandCardList(item, 0);
    v45 = (UnityEngine_Object_o *)this->fields.supportSprite;
    v46 = v44;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v45, 0, 0) )
    {
      lv = item->fields.userServantEntity;
      if ( !lv )
        goto LABEL_216;
      lv = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)lv, 0);
      if ( !this->fields.supportSprite )
        goto LABEL_216;
      if ( ((unsigned __int8)lv & 1) != 0 )
      {
        v47 = this->fields.supportSprite;
        v48 = (System_String_o *)StringLiteral_20197/*"icon_eventjoin_02"*/;
      }
      else
      {
        v47 = this->fields.supportSprite;
        v48 = 0;
      }
      UISprite__set_spriteName(v47, v48, 0);
    }
    goto LABEL_164;
  }
  servantEntity = item->fields.servantEntity;
  if ( !servantEntity )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_216;
    ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)lv, 0);
    v50 = UnityEngine_Object_TypeInfo;
    v51 = &StringLiteral_19573/*"formation_blank_small"*/;
LABEL_111:
    v52 = (System_String_o *)*v51;
    v53 = (UnityEngine_Object_o *)this->fields.supportSprite;
    if ( !v50->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v50);
    if ( UnityEngine_Object__op_Inequality(v53, 0, 0) )
    {
      lv = this->fields.supportSprite;
      if ( !lv )
        goto LABEL_216;
      UISprite__set_spriteName((UISprite_o *)lv, 0, 0);
    }
    goto LABEL_191;
  }
  if ( !item->fields.questRestrictionInfo )
    goto LABEL_171;
  if ( ServantEntity__checkIsHeroineSvt(servantEntity, 0) )
  {
    lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !lv )
      goto LABEL_216;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)lv,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(item, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(SvtId, 0);
    if ( !MasterData_object )
      goto LABEL_216;
    lv = UserServantMaster__getHeroineData((UserServantMaster_o *)MasterData_object, (int32_t)lv, 0);
    if ( !item->fields.questRestrictionInfo )
      goto LABEL_216;
    v57 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43337428(
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
    lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v64, 0);
    if ( !questRestrictionInfo )
      goto LABEL_216;
    v57 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount(questRestrictionInfo, (int32_t)lv, 0);
  }
  imageLimitCount = v57;
  v66 = v57;
  if ( v57 < 0 )
  {
LABEL_171:
    imageLimitCount = item->fields.imageLimitCount;
    if ( imageLimitCount < 0 )
    {
      v67 = PartyOrganizationListViewItem__get_SvtId(item, 0);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v67, 0);
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
  v150 = isRarityHide;
  v71 = item->fields.svtLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v66, v71, 0);
  v73 = PartyOrganizationListViewItem__get_SvtId(item, 0);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v73, 0);
  v75 = item->fields.svtLimitCount;
  v76 = v74;
  v77 = (ServantOverwriteStatus_o *)sub_1C32E6C(ServantOverwriteStatus_TypeInfo);
  ServantOverwriteStatus___ctor_33445156(v77, v76, v75, LimitCountByDispLimit, 0);
  if ( !v77 )
    goto LABEL_216;
  Rarity_k__BackingField = v77->fields._Rarity_k__BackingField;
  actualRarity = v77->fields._ActualRarity_k__BackingField;
  v80 = this->fields.servantFaceIcon;
  v155 = PartyOrganizationListViewItem__get_SvtId(item, 0);
  v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v155, 0);
  v82 = item->fields.svtLimitCount;
  v83 = v81;
  lv = (void *)PartyOrganizationListViewItem__get_Level(item, 0);
  if ( !v80 )
    goto LABEL_216;
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
    goto LABEL_216;
  ServantFaceIconComponent__SetGrandFaceMaskSpritePartyOrganizationAtlas(
    (ServantFaceIconComponent_o *)lv,
    this->fields.restrictionMaskSprite,
    this->fields.maskSpriteDefaultSpriteName,
    this->fields.maskSpriteDefaultAtlas,
    0);
  v84 = (UnityEngine_Object_o *)this->fields.supportSprite;
  isRarityHide = v150;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v84, 0, 0) )
  {
    lv = this->fields.supportSprite;
    if ( !lv )
      goto LABEL_216;
    UISprite__set_spriteName((UISprite_o *)lv, 0, 0);
  }
  v52 = 0;
LABEL_191:
  v46 = 0;
  if ( !isAdjustPosY )
    goto LABEL_197;
LABEL_192:
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_216;
  if ( !ServantFaceIconComponent__IsUseEquip((ServantFaceIconComponent_o *)lv, 0) )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_216;
    ServantFaceIconComponent__AdjustRaritySpritePosY((ServantFaceIconComponent_o *)lv, -55.0, 0);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_216;
    ServantFaceIconComponent__AdjustDispLimitCountSpritePosY((ServantFaceIconComponent_o *)lv, -34.0, 0);
  }
LABEL_197:
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_216;
  ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)lv, !isRarityHide, 0);
  if ( item->fields._IsNotSupportSingle_k__BackingField || !item->fields._IsDataLost_k__BackingField )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_216;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 1, 0);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_216;
    v85 = 1;
  }
  else
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_216;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 0, 0);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_216;
    v85 = 0;
  }
  ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)lv, v85, 0);
  commandLabelList = this->fields.commandLabelList;
  if ( !commandLabelList )
    goto LABEL_216;
  v87 = 0;
  v88 = (_DWORD)v46 + 32;
  while ( 1 )
  {
    max_length = commandLabelList->max_length;
    if ( (int)v87 >= max_length )
      break;
    if ( (unsigned int)v87 >= max_length )
      goto LABEL_330;
    v90 = commandLabelList->m_Items[v87];
    if ( v46 )
    {
      if ( (unsigned int)v87 >= LODWORD(v46->max_length) )
LABEL_330:
        sub_1C32E84(lv);
      lv = System_Int32__ToString(v88, 0);
      v91 = (System_String_o *)lv;
      if ( !v90 )
        goto LABEL_216;
    }
    else
    {
      v91 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v90 )
        goto LABEL_216;
    }
    UILabel__set_text(v90, v91, 0);
    commandLabelList = this->fields.commandLabelList;
    ++v87;
    v88 += 4;
    if ( !commandLabelList )
      goto LABEL_216;
  }
  lv = this->fields.baseSprite;
  if ( !lv )
    goto LABEL_216;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 0, 0);
  if ( v52 )
  {
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_216;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 1, 0);
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_216;
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
      goto LABEL_216;
    v94 = (System_String_o **)(index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax
                             ? &StringLiteral_19618/*"formation_txtbg_03"*/
                             : &StringLiteral_19617/*"formation_txtbg_02"*/);
    UISprite__set_spriteName((UISprite_o *)lv, *v94, 0);
    memberTypeSprite = this->fields.memberTypeSprite;
    v153 = item->fields.index + 1;
    v96 = System_Int32__ToString((int32_t)&v153, 0);
    lv = System_String__Concat_63518544((System_String_o *)StringLiteral_21528/*"member_txt_"*/, v96, 0);
    if ( !memberTypeSprite )
      goto LABEL_216;
    UISprite__set_spriteName(memberTypeSprite, (System_String_o *)lv, 0);
    lv = this->fields.memberTypeSprite;
    if ( !lv )
      goto LABEL_216;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
    goto LABEL_278;
  if ( PartyOrganizationListViewItem__get_IsLeave(item, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v98 = &StringLiteral_11539/*"SELECT_NO_SORTIE"*/;
LABEL_241:
    v99 = LocalizationManager__Get((System_String_o *)*v98, 0);
    r = 0.0;
    g = 0.0;
    b = 0.0;
    a = 1.0;
    v105 = this;
    v106 = 0;
LABEL_242:
    PartyOrganizationConfirmItemDraw__SetMaskMessage(v105, v99, *(UnityEngine_Color_o *)&r, 0, v106, 0, v100);
    v107 = 1;
    goto LABEL_279;
  }
  if ( PartyOrganizationListViewItem__get_IsQuestRestriction(item, 0)
    && !PartyOrganizationListViewItem__get_IsEmpty(item, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v117 = LocalizationManager__Get((System_String_o *)StringLiteral_10264/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
    goto LABEL_255;
  }
  if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v110 = &StringLiteral_10265/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_250:
    v111 = LocalizationManager__Get((System_String_o *)*v110, 0);
    v113 = 0.0;
    v114 = 0.0;
    v115 = this;
    v116 = 0;
LABEL_251:
    v107 = 1;
    PartyOrganizationConfirmItemDraw__SetWarningMessage(v115, v111, 1, v116, v113, v114, v112);
    goto LABEL_279;
  }
  if ( item->fields.isFixedSupportPositionRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v110 = &StringLiteral_10266/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/;
    goto LABEL_250;
  }
  if ( item->fields.isFixedServantPositionRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v110 = &StringLiteral_10267/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/;
    goto LABEL_250;
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
      v127 = LocalizationManager__Get((System_String_o *)StringLiteral_11545/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, 0);
      r = color.fields.r;
      g = color.fields.g;
      b = color.fields.b;
      a = color.fields.a;
      v99 = v127;
      v105 = this;
      v106 = (System_String_o *)StringLiteral_20398/*"img_frames_mask11"*/;
      goto LABEL_242;
    }
    PartyOrganizationListViewItem__ClearFatigure(item, 0);
    goto LABEL_277;
  }
  if ( item->fields._IsAllOutBattle_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v98 = &StringLiteral_11540/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
    goto LABEL_241;
  }
  if ( item->fields._IsNotSupportSingle_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v111 = LocalizationManager__Get((System_String_o *)StringLiteral_10268/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0);
    v113 = 10.0;
    v114 = -22.0;
    v116 = 1;
    v115 = this;
    goto LABEL_251;
  }
  if ( item->fields._IsDataLost_k__BackingField )
  {
    v118 = (System_String_o *)StringLiteral_1/*""*/;
    v119 = 1.0;
    v120 = 1.0;
    v121 = 1.0;
    v124 = (System_String_o *)StringLiteral_18479/*"datalost_svt_select"*/;
    v122 = 1.0;
    v125 = 1;
    v123 = this;
    goto LABEL_256;
  }
  if ( item->fields._TimesToRestart_k__BackingField >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v140 = LocalizationManager__Get((System_String_o *)StringLiteral_11546/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
    TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
    v147 = (Il2CppObject *)j_il2cpp_value_box_0(
                             int_TypeInfo,
                             &TimesToRestart_k__BackingField,
                             v141,
                             v142,
                             v143,
                             v144,
                             v145,
                             v146);
    v117 = System_String__Format(v140, v147, 0);
LABEL_255:
    v118 = v117;
    v119 = 0.0;
    v120 = 0.0;
    v121 = 0.0;
    v122 = 1.0;
    v123 = this;
    v124 = 0;
    v125 = 0;
LABEL_256:
    v107 = 1;
    PartyOrganizationConfirmItemDraw__SetMaskMessage(v123, v118, *(UnityEngine_Color_o *)&v119, 1, v124, v125, v109);
    goto LABEL_279;
  }
LABEL_277:
  PartyOrganizationConfirmItemDraw__ClearMessage(this, v108);
LABEL_278:
  v107 = 0;
LABEL_279:
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0, 0) )
    return;
  if ( !item->fields.isFollower )
  {
    v134 = item->fields.userServantEntity;
    if ( v134 )
    {
      SvtClassId = UserServantEntity__getSvtClassId(v134, 0, 0, 0);
    }
    else
    {
      v129 = item->fields.servantEntity;
      if ( !v129 )
        goto LABEL_297;
      SvtClassId = v129[20];
    }
    LODWORD(v129) = 0;
    goto LABEL_298;
  }
  v129 = item->fields.followerInfo;
  if ( !v129 )
  {
LABEL_297:
    SvtClassId = 0;
    goto LABEL_298;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_216;
  v130 = DataManager__GetMasterData_object_(
           (DataManager_o *)lv,
           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
  if ( !lv )
    goto LABEL_216;
  v132 = *((_QWORD *)lv + 6);
  v131 = *((_QWORD *)lv + 7);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v156.fields.currentCryptoKey = v132;
  *(_QWORD *)&v156.fields.fakeValue = v131;
  lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v156, 0);
  if ( !v130 )
    goto LABEL_216;
  lv = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v130,
         (int32_t)lv,
         (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !lv )
    goto LABEL_216;
  SvtClassId = *((_DWORD *)lv + 20);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
  if ( !lv )
    goto LABEL_216;
  LODWORD(v129) = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)lv, 0);
LABEL_298:
  if ( (unsigned int)v129 | v107 | (SvtClassId == 0) )
  {
    lv = this->fields.classCompatibilityIcon;
    if ( !lv )
      goto LABEL_216;
    goto LABEL_318;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_216;
  lv = (void *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)lv, 40, 0);
  if ( ((unsigned __int8)lv & 1) == 0 )
    goto LABEL_315;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_216;
  lv = (void *)*((_QWORD *)lv + 4);
  if ( !lv )
    goto LABEL_216;
  naturalAligment = PartyOrganizationRootComponent_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)lv + 304LL) < (unsigned int)naturalAligment
    || *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)lv + 200LL) + 8 * naturalAligment - 8) != PartyOrganizationRootComponent_TypeInfo )
  {
    v148 = (PartyOrganizationCommandCardMenu_o *)sub_1C3313C(lv);
    PartyOrganizationCommandCardMenu__EndOpen(v148, v149);
    return;
  }
  v136 = *((_QWORD *)lv + 64);
  if ( !v136
    || (lv = (void *)BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)lv + 64), 0), !(_DWORD)lv)
    || (v137 = *(_DWORD *)(v136 + 24)) == 0 )
  {
LABEL_315:
    v139 = this->fields.classCompatibilityIcon;
    goto LABEL_316;
  }
  v138 = (int)lv;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_216;
  lv = DataManager__GetMasterData_object_(
         (DataManager_o *)lv,
         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !lv )
    goto LABEL_216;
  lv = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)lv, v138, v137, 0);
  v139 = this->fields.classCompatibilityIcon;
  if ( !lv )
  {
LABEL_316:
    if ( !v139 )
      goto LABEL_216;
    lv = v139;
LABEL_318:
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)lv, 0);
    return;
  }
  if ( !v139 )
    goto LABEL_216;
  ServantClassCompatibilityIconComponent__SetIcon(
    this->fields.classCompatibilityIcon,
    SvtClassId,
    *((System_Int32_array **)lv + 6),
    1,
    0);
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
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v18; // x22
  UIWidget_o *v19; // x22
  int32_t *p_DATA_LOST_MASK_HEIGHT; // x8
  System_String_o *v21; // x2
  float v22; // s0
  float v23; // s8
  UnityEngine_Transform_o *v24; // x20
  float restrictionMaskMessageWidth; // s0
  float x; // s0 OVERLAPPED
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v29; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = maskColor.fields.a;
  b = maskColor.fields.b;
  g = maskColor.fields.g;
  r = maskColor.fields.r;
  if ( (byte_4C333B8 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1C32C20(&StringLiteral_18479/*"datalost_svt_select"*/);
    sub_1C32C20(&StringLiteral_20394/*"img_frames_mask03"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C333B8 = 1;
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
      v18 = this->fields.restrictionMaskSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(v18, (System_String_o *)StringLiteral_18479/*"datalost_svt_select"*/, 0);
      v19 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)PartyOrganizationConfirmItemDraw_TypeInfo;
      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
      if ( !v19 )
        goto LABEL_45;
      p_DATA_LOST_MASK_HEIGHT = &PartyOrganizationConfirmItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
      if ( !gameObject )
        goto LABEL_45;
      v21 = maskName ? maskName : (System_String_o *)StringLiteral_20394/*"img_frames_mask03"*/;
      ServantFaceIconComponent__SetGrandFaceMaskSpritePartyOrganizationAtlas(
        (ServantFaceIconComponent_o *)gameObject,
        this->fields.restrictionMaskSprite,
        v21,
        this->fields.maskSpriteDefaultAtlas,
        0);
      v19 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( !v19 )
        goto LABEL_45;
      p_DATA_LOST_MASK_HEIGHT = &this->fields.maskSpriteDefaultHeight;
    }
    UIWidget__set_height(v19, *p_DATA_LOST_MASK_HEIGHT, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_45;
    v32.fields.r = r;
    v32.fields.g = g;
    v32.fields.b = b;
    v32.fields.a = a;
    UIWidget__set_color((UIWidget_o *)gameObject, v32, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_45;
    if ( isScale )
    {
      LODWORD(v22) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_45;
      v23 = v22;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v24 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v23 <= restrictionMaskMessageWidth )
      {
        if ( !byte_4C313D6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
          byte_4C313D6 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        x = static_fields->oneVector.fields.x;
        y = static_fields->oneVector.fields.y;
        z = static_fields->oneVector.fields.z;
      }
      else
      {
        x = restrictionMaskMessageWidth / v23;
        z = 1.0;
        y = 1.0;
      }
      if ( !v24 )
        goto LABEL_45;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v24 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4C313D6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D6 = 1;
      }
      if ( !v24 )
        goto LABEL_45;
      v29 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v29->oneVector.fields.y;
      z = v29->oneVector.fields.z;
      x = v29->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)&x, 0);
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
    sub_1C32E7C(gameObject);
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
  if ( (byte_4C333BA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)sub_1C32C20(&PartyOrganizationConfirmItemDraw_TypeInfo);
    byte_4C333BA = 1;
  }
  npcServantFollowerEntity = 0;
  if ( !v10 || (self = supportMemberBase, !supportMemberObjectList) )
LABEL_44:
    sub_1C32E7C(itemList);
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
                                                                                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_44;
      if ( *(_QWORD *)&itemList[4].fields._size )
      {
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v15,
                                                                                         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_44;
        v19 = *(_QWORD *)&itemList[4].fields._size;
        if ( !v19 )
          goto LABEL_44;
        v20 = *(_DWORD *)(v19 + 36);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v15,
                                                                                         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_44;
        v21 = *(_QWORD *)&itemList[4].fields._size;
        if ( !v21 )
          goto LABEL_44;
        questPhase = *(_DWORD *)(v21 + 40);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v15,
                                                                                         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_44;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)itemList, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
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
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
          if ( !npcServantFollowerEntity || !itemList )
            goto LABEL_44;
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerMaster__GetEntity_42319072(
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
                                                                                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
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
        sub_1C32E84(itemList);
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
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  float v18; // s0
  float v19; // s8
  int32_t restrictionWarningMessageWidth; // s0
  UnityEngine_Transform_o *v21; // x19
  float v22; // s0
  float x; // s0 OVERLAPPED
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v26; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C333B9 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_20394/*"img_frames_mask03"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C333B9 = 1;
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
        (System_String_o *)StringLiteral_20394/*"img_frames_mask03"*/,
        this->fields.maskSpriteDefaultAtlas,
        0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_38;
      v28.fields.r = 0.0;
      v28.fields.g = 0.0;
      v28.fields.b = 0.0;
      v28.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, v28, 0);
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
          v16 = UnityEngine_Component__get_gameObject(gameObject, 0);
          GameObjectExtensions__SetLocalPositionY(v16, iconPosY, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
          if ( gameObject )
          {
            v17 = UnityEngine_Component__get_gameObject(gameObject, 0);
            GameObjectExtensions__SetLocalPositionY(v17, msgPosY, 0);
            gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, message, 0);
              gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
              if ( gameObject )
              {
                if ( isScale )
                {
                  LODWORD(v18) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0);
                  gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
                  if ( gameObject )
                  {
                    v19 = v18;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
                    restrictionWarningMessageWidth = this->fields.restrictionWarningMessageWidth;
                    v21 = (UnityEngine_Transform_o *)gameObject;
                    v22 = (float)restrictionWarningMessageWidth;
                    if ( v19 <= v22 )
                    {
                      if ( !byte_4C313D6 )
                      {
                        gameObject = (UnityEngine_Component_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
                        byte_4C313D6 = 1;
                      }
                      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                      x = static_fields->oneVector.fields.x;
                      y = static_fields->oneVector.fields.y;
                      z = static_fields->oneVector.fields.z;
                    }
                    else
                    {
                      x = v22 / v19;
                      z = 1.0;
                      y = 1.0;
                    }
                    if ( v21 )
                      goto LABEL_37;
                  }
                }
                else
                {
                  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
                  v21 = (UnityEngine_Transform_o *)gameObject;
                  if ( !byte_4C313D6 )
                  {
                    gameObject = (UnityEngine_Component_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
                    byte_4C313D6 = 1;
                  }
                  if ( v21 )
                  {
                    v26 = UnityEngine_Vector3_TypeInfo->static_fields;
                    y = v26->oneVector.fields.y;
                    z = v26->oneVector.fields.z;
                    x = v26->oneVector.fields.x;
LABEL_37:
                    UnityEngine_Transform__set_localScale(v21, *(UnityEngine_Vector3_o *)&x, 0);
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
    sub_1C32E7C(gameObject);
  }
}