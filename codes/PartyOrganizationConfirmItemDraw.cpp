void PartyOrganizationConfirmItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4C22CEC & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationConfirmItemDraw_TypeInfo);
    byte_4C22CEC = 1;
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
  const MethodInfo *v7; // x3
  struct UISprite_o *v8; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UISprite_o *v12; // x8
  struct System_String_o *mSpriteName; // x1
  struct UISprite_o *v14; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *maskServantObj; // x20
  Il2CppObject *ComponentInChildren_object__51536504; // x0
  struct UISprite_o **p_maskServantSprite; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *maskServantSprite; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UIAtlas_o *v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct UISprite_o *v27; // x8
  struct System_String_o *v28; // x1

  if ( (byte_4C22CE6 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite____78064656);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22CE6 = 1;
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
    v8 = this->fields.restrictionMaskSprite;
    if ( !v8 )
      goto LABEL_27;
    mAtlas = v8->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.maskSpriteDefaultAtlas, (int32_t)mAtlas, v6, v7);
    v12 = this->fields.restrictionMaskSprite;
    if ( !v12 )
      goto LABEL_27;
    mSpriteName = v12->fields.mSpriteName;
    this->fields.maskSpriteDefaultSpriteName = mSpriteName;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.maskSpriteDefaultSpriteName, (int32_t)mSpriteName, v10, v11);
    v14 = this->fields.restrictionMaskSprite;
    if ( !v14 )
      goto LABEL_27;
    this->fields.maskSpriteDefaultHeight = v14->fields.mHeight;
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
    ComponentInChildren_object__51536504 = UnityEngine_GameObject__GetComponentInChildren_object__51536504(
                                             (UnityEngine_GameObject_o *)restrictionMaskMessageText,
                                             1,
                                             (const MethodInfo_3126278 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite____78064656);
    this->fields.maskServantSprite = (struct UISprite_o *)ComponentInChildren_object__51536504;
    p_maskServantSprite = &this->fields.maskServantSprite;
    sub_1C2D434(
      (CGThumbnailListItem_o *)&this->fields.maskServantSprite,
      (int32_t)ComponentInChildren_object__51536504,
      v19,
      v20);
    maskServantSprite = (UnityEngine_Object_o *)this->fields.maskServantSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    restrictionMaskMessageText = (UIWidget_o *)UnityEngine_Object__op_Inequality(maskServantSprite, 0, 0);
    if ( ((unsigned __int8)restrictionMaskMessageText & 1) != 0 )
    {
      if ( *p_maskServantSprite )
      {
        v24 = (*p_maskServantSprite)->fields.mAtlas;
        this->fields.defaultMaskServantAtlas = v24;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.defaultMaskServantAtlas, (int32_t)v24, v22, v23);
        v27 = this->fields.maskServantSprite;
        if ( v27 )
        {
          v28 = v27->fields.mSpriteName;
          this->fields.defaultMaskServantSpriteName = v28;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.defaultMaskServantSpriteName, (int32_t)v28, v25, v26);
          return;
        }
      }
LABEL_27:
      sub_1C2D6EC(restrictionMaskMessageText, v4);
    }
  }
}


void PartyOrganizationConfirmItemDraw__ClearMessage(PartyOrganizationConfirmItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4C22CE8 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22CE8 = 1;
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
    sub_1C2D6EC(gameObject, v4);
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
  UISprite_o *v48; // x0
  System_String_o *v49; // x1
  UnityEngine_Object_o *v50; // x23
  UnityEngine_Object_c *v51; // x0
  __int64 *v52; // x8
  System_String_o *v53; // x24
  UnityEngine_Object_o *v54; // x23
  ServantEntity_o *servantEntity; // x0
  Il2CppObject *MasterData_object; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v58; // w0
  System_Int32_array *CommandCardList; // x0
  UnityEngine_Object_o *supportSprite; // x25
  System_String_o *v61; // x1
  UnityEngine_Object_o *v62; // x24
  UnityEngine_Object_o *v63; // x24
  QuestRestrictionInfo_o *questRestrictionInfo; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // kr20_16
  int32_t imageLimitCount; // w24
  int32_t v67; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // kr30_16
  int32_t v69; // w0
  int32_t svtLimitCount; // w25
  int32_t v71; // w26
  int32_t v72; // w26
  int32_t LimitCountByDispLimit; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // kr40_16
  int32_t v75; // w0
  int32_t v76; // w27
  int32_t v77; // w28
  ServantOverwriteStatus_o *v78; // x26
  int32_t Rarity_k__BackingField; // w25
  int32_t actualRarity; // w21
  ServantFaceIconComponent_o *v81; // x26
  int32_t v82; // w0
  int32_t v83; // w27
  int32_t v84; // w28
  UnityEngine_Object_o *v85; // x23
  bool v86; // w1
  __int64 v87; // x2
  struct UILabel_array *commandLabelList; // x8
  __int64 v89; // x26
  int32_t v90; // w21
  int max_length; // w9
  UILabel_o *v92; // x22
  UnityEngine_Object_o *memberTypeBaseSprite; // x21
  int32_t index; // w21
  System_String_o **v95; // x8
  UISprite_o *memberTypeSprite; // x21
  System_String_o *v97; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  __int64 *v99; // x8
  System_String_o *v100; // x1
  const MethodInfo *v101; // x5
  float r; // s0 OVERLAPPED
  float g; // s1
  float b; // s2
  float a; // s3
  PartyOrganizationConfirmItemDraw_o *v106; // x0
  System_String_o *v107; // x3
  int v108; // w24
  const MethodInfo *v109; // x1
  const MethodInfo *v110; // x5
  __int64 *v111; // x8
  System_String_o *v112; // x1
  const MethodInfo *v113; // x4
  float v114; // s0
  float v115; // s1
  PartyOrganizationConfirmItemDraw_o *v116; // x0
  bool v117; // w3
  System_String_o *v118; // x0
  System_String_o *v119; // x1
  float v120; // s0 OVERLAPPED
  float v121; // s1
  float v122; // s2
  float v123; // s3
  PartyOrganizationConfirmItemDraw_o *v124; // x0
  System_String_o *v125; // x3
  bool v126; // w4
  int64_t fatigureTime; // x21
  System_String_o *v128; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  _DWORD *v130; // x8
  Il2CppObject *v131; // x21
  __int64 v132; // x22
  __int64 v133; // x23
  int32_t SvtClassId; // w21
  UserServantEntity_o *v135; // x0
  __int64 naturalAligment; // x9
  __int64 v137; // x22
  int32_t v138; // w22
  int32_t v139; // w20
  struct ServantClassCompatibilityIconComponent_o *v140; // x8
  System_String_o *v141; // x21
  __int64 v142; // x2
  __int64 v143; // x3
  __int64 v144; // x4
  Il2CppObject *v145; // x0
  PartyOrganizationCommandCardMenu_o *v146; // x0
  const MethodInfo *v147; // x1
  bool v148; // [xsp+58h] [xbp-88h]
  int32_t TimesToRestart_k__BackingField; // [xsp+5Ch] [xbp-84h] BYREF
  UnityEngine_Color_o color; // [xsp+60h] [xbp-80h] BYREF
  int v151; // [xsp+74h] [xbp-6Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // 0:x0.16

  if ( (byte_4C22CE7 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&PartyOrganizationRootComponent_TypeInfo);
    sub_1C2D490(&ServantOverwriteStatus_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&UserServantEntity_TypeInfo);
    sub_1C2D490(&StringLiteral_20230/*"icon_support_02"*/);
    sub_1C2D490(&StringLiteral_15493/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/);
    sub_1C2D490(&StringLiteral_10259/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/);
    sub_1C2D490(&StringLiteral_10262/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1C2D490(&StringLiteral_11539/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/);
    sub_1C2D490(&StringLiteral_11540/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1C2D490(&StringLiteral_11534/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_1C2D490(&StringLiteral_20386/*"img_frames_mask11"*/);
    sub_1C2D490(&StringLiteral_10258/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1C2D490(&StringLiteral_21515/*"member_txt_"*/);
    sub_1C2D490(&StringLiteral_11533/*"SELECT_NO_SORTIE"*/);
    sub_1C2D490(&StringLiteral_20229/*"icon_support_01"*/);
    sub_1C2D490(&StringLiteral_20185/*"icon_eventjoin_02"*/);
    sub_1C2D490(&StringLiteral_19606/*"formation_txtbg_03"*/);
    sub_1C2D490(&StringLiteral_15491/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/);
    sub_1C2D490(&StringLiteral_19561/*"formation_blank_small"*/);
    sub_1C2D490(&StringLiteral_20389/*"img_frames_mask14"*/);
    sub_1C2D490(&StringLiteral_18474/*"datalost_svt_select"*/);
    sub_1C2D490(&StringLiteral_406/*"#042484"*/);
    sub_1C2D490(&StringLiteral_19603/*"formation_support_small"*/);
    sub_1C2D490(&StringLiteral_19605/*"formation_txtbg_02"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_10260/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/);
    sub_1C2D490(&StringLiteral_20188/*"icon_friend"*/);
    sub_1C2D490(&StringLiteral_10261/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/);
    sub_1C2D490(&StringLiteral_20187/*"icon_follow"*/);
    byte_4C22CE7 = 1;
  }
  entity = 0;
  v151 = 0;
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
      ServantFaceIconComponent__Set_40787620(
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
        v24 = item->fields.followerInfo;
        if ( !v24 )
          goto LABEL_216;
        type = v24->fields.type;
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
          v26 = &StringLiteral_20229/*"icon_support_01"*/;
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
          v26 = &StringLiteral_20187/*"icon_follow"*/;
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
          v26 = &StringLiteral_20188/*"icon_friend"*/;
LABEL_137:
          UISprite__set_spriteName((UISprite_o *)lv, (System_String_o *)*v26, 0);
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
      v47 = CommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(supportSprite, 0, 0) )
      {
        lv = this->fields.supportSprite;
        if ( !lv )
          goto LABEL_216;
        if ( item->fields.isFollower )
          v61 = (System_String_o *)StringLiteral_20230/*"icon_support_02"*/;
        else
          v61 = 0;
        UISprite__set_spriteName((UISprite_o *)lv, v61, 0);
      }
      if ( isSimpleDisp )
      {
        v62 = (UnityEngine_Object_o *)this->fields.typeSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v62, 0, 0) )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_216;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
          if ( !lv )
            goto LABEL_216;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
        }
        v63 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v63, 0, 0) )
        {
          lv = this->fields.supportSprite;
          if ( !lv )
            goto LABEL_216;
          UISprite__set_spriteName((UISprite_o *)lv, 0, 0);
        }
        lv = this->fields.servantFaceIcon;
        if ( !lv )
LABEL_216:
          sub_1C2D6EC(lv, v16);
        ServantFaceIconComponent__ClearEquip((ServantFaceIconComponent_o *)lv, 0);
      }
LABEL_164:
      v53 = 0;
      if ( !isAdjustPosY )
        goto LABEL_197;
      goto LABEL_192;
    }
    if ( !servantFaceIcon )
      goto LABEL_216;
    ServantFaceIconComponent__Clear(this->fields.servantFaceIcon, 0);
    v50 = (UnityEngine_Object_o *)this->fields.typeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v50, 0, 0) )
    {
      lv = this->fields.typeSprite;
      if ( !lv )
        goto LABEL_216;
      lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
      if ( !lv )
        goto LABEL_216;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
    }
    v51 = UnityEngine_Object_TypeInfo;
    v52 = &StringLiteral_19603/*"formation_support_small"*/;
    goto LABEL_111;
  }
  v27 = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v27, 0, 0) )
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
    v29 = this->fields.servantFaceIcon;
    lv = PartyOrganizationListViewItem__GetEquipList(item, 0);
    if ( !v29 )
      goto LABEL_216;
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
      goto LABEL_216;
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
      v31 = (UnityEngine_Object_o *)this->fields.maskServantLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
      {
        v32 = this->fields.maskServantLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        lv = LocalizationManager__Get((System_String_o *)StringLiteral_15493/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0);
        if ( !v32 )
          goto LABEL_216;
        UILabel__set_text(v32, (System_String_o *)lv, 0);
      }
    }
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
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
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(EquipSvtId, 0);
      if ( !Master_object )
        goto LABEL_216;
      if ( UserServantCollectionMaster__TryGetEntity(
             (UserServantCollectionMaster_o *)Master_object,
             &entity,
             userIdNumber,
             (int32_t)lv,
             0) )
      {
        v37 = this->fields.servantFaceIcon;
        v38 = entity;
        v39 = (UserServantEntity_o *)sub_1C2D6DC(UserServantEntity_TypeInfo);
        UserServantEntity___ctor_42922472(v39, v38, 0, 0);
        if ( !v37 )
          goto LABEL_216;
        ServantFaceIconComponent__SetEquip(v37, v39, 0);
        v40 = (UnityEngine_Object_o *)this->fields.maskEquipObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v40, 0, 0) )
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
          v42 = this->fields.maskEquipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(v42, (System_String_o *)StringLiteral_20389/*"img_frames_mask14"*/, 0);
        }
        v43 = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v43, 0, 0) )
        {
          v44 = this->fields.maskEquipLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          lv = LocalizationManager__Get((System_String_o *)StringLiteral_15491/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0);
          if ( !v44 )
            goto LABEL_216;
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
        goto LABEL_216;
      lv = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)lv, 0);
      if ( !this->fields.supportSprite )
        goto LABEL_216;
      if ( ((unsigned __int8)lv & 1) != 0 )
      {
        v48 = this->fields.supportSprite;
        v49 = (System_String_o *)StringLiteral_20185/*"icon_eventjoin_02"*/;
      }
      else
      {
        v48 = this->fields.supportSprite;
        v49 = 0;
      }
      UISprite__set_spriteName(v48, v49, 0);
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
    v51 = UnityEngine_Object_TypeInfo;
    v52 = &StringLiteral_19561/*"formation_blank_small"*/;
LABEL_111:
    v53 = (System_String_o *)*v52;
    v54 = (UnityEngine_Object_o *)this->fields.supportSprite;
    if ( !v51->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v51);
    if ( UnityEngine_Object__op_Inequality(v54, 0, 0) )
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
    lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !lv )
      goto LABEL_216;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)lv,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(item, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(SvtId, 0);
    if ( !MasterData_object )
      goto LABEL_216;
    lv = UserServantMaster__getHeroineData((UserServantMaster_o *)MasterData_object, (int32_t)lv, 0);
    if ( !item->fields.questRestrictionInfo )
      goto LABEL_216;
    v58 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43203860(
            item->fields.questRestrictionInfo,
            (UserServantEntity_o *)lv,
            0);
  }
  else
  {
    questRestrictionInfo = item->fields.questRestrictionInfo;
    v65 = PartyOrganizationListViewItem__get_SvtId(item, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v65, 0);
    if ( !questRestrictionInfo )
      goto LABEL_216;
    v58 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount(questRestrictionInfo, (int32_t)lv, 0);
  }
  imageLimitCount = v58;
  v67 = v58;
  if ( v58 < 0 )
  {
LABEL_171:
    imageLimitCount = item->fields.imageLimitCount;
    if ( imageLimitCount < 0 )
    {
      v68 = PartyOrganizationListViewItem__get_SvtId(item, 0);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v68, 0);
      svtLimitCount = item->fields.svtLimitCount;
      v71 = v69;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v67 = ImageLimitCount__GetImageLimitCount(v71, svtLimitCount, 0);
    }
    else
    {
      v67 = item->fields.imageLimitCount;
    }
  }
  v148 = isRarityHide;
  v72 = item->fields.svtLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v67, v72, 0);
  v74 = PartyOrganizationListViewItem__get_SvtId(item, 0);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v74, 0);
  v76 = item->fields.svtLimitCount;
  v77 = v75;
  v78 = (ServantOverwriteStatus_o *)sub_1C2D6DC(ServantOverwriteStatus_TypeInfo);
  ServantOverwriteStatus___ctor_33445788(v78, v77, v76, LimitCountByDispLimit, 0);
  if ( !v78 )
    goto LABEL_216;
  Rarity_k__BackingField = v78->fields._Rarity_k__BackingField;
  actualRarity = v78->fields._ActualRarity_k__BackingField;
  v81 = this->fields.servantFaceIcon;
  v153 = PartyOrganizationListViewItem__get_SvtId(item, 0);
  v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v153, 0);
  v83 = item->fields.svtLimitCount;
  v84 = v82;
  lv = (void *)PartyOrganizationListViewItem__get_Level(item, 0);
  if ( !v81 )
    goto LABEL_216;
  ServantFaceIconComponent__SetIcon(
    v81,
    v84,
    Rarity_k__BackingField,
    v83,
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
  v85 = (UnityEngine_Object_o *)this->fields.supportSprite;
  isRarityHide = v148;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v85, 0, 0) )
  {
    lv = this->fields.supportSprite;
    if ( !lv )
      goto LABEL_216;
    UISprite__set_spriteName((UISprite_o *)lv, 0, 0);
  }
  v53 = 0;
LABEL_191:
  v47 = 0;
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
    v86 = 1;
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
    v86 = 0;
  }
  ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)lv, v86, 0);
  commandLabelList = this->fields.commandLabelList;
  if ( !commandLabelList )
    goto LABEL_216;
  v89 = 0;
  v90 = (_DWORD)v47 + 32;
  while ( 1 )
  {
    max_length = commandLabelList->max_length;
    if ( (int)v89 >= max_length )
      break;
    if ( (unsigned int)v89 >= max_length )
      goto LABEL_330;
    v92 = commandLabelList->m_Items[v89];
    if ( v47 )
    {
      if ( (unsigned int)v89 >= LODWORD(v47->max_length) )
LABEL_330:
        sub_1C2D6F4(lv, v16, v87);
      lv = System_Int32__ToString(v90, 0);
      v16 = (PartyOrganizationRootComponent_c *)lv;
      if ( !v92 )
        goto LABEL_216;
    }
    else
    {
      v16 = (PartyOrganizationRootComponent_c *)StringLiteral_1/*""*/;
      if ( !v92 )
        goto LABEL_216;
    }
    UILabel__set_text(v92, (System_String_o *)v16, 0);
    commandLabelList = this->fields.commandLabelList;
    ++v89;
    v90 += 4;
    if ( !commandLabelList )
      goto LABEL_216;
  }
  lv = this->fields.baseSprite;
  if ( !lv )
    goto LABEL_216;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 0, 0);
  if ( v53 )
  {
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_216;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 1, 0);
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_216;
    UISprite__set_spriteName((UISprite_o *)lv, v53, 0);
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
    v95 = (System_String_o **)(index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax
                             ? &StringLiteral_19606/*"formation_txtbg_03"*/
                             : &StringLiteral_19605/*"formation_txtbg_02"*/);
    UISprite__set_spriteName((UISprite_o *)lv, *v95, 0);
    memberTypeSprite = this->fields.memberTypeSprite;
    v151 = item->fields.index + 1;
    v97 = System_Int32__ToString((int32_t)&v151, 0);
    lv = System_String__Concat_63457864((System_String_o *)StringLiteral_21515/*"member_txt_"*/, v97, 0);
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
    v99 = &StringLiteral_11533/*"SELECT_NO_SORTIE"*/;
LABEL_241:
    v100 = LocalizationManager__Get((System_String_o *)*v99, 0);
    r = 0.0;
    g = 0.0;
    b = 0.0;
    a = 1.0;
    v106 = this;
    v107 = 0;
LABEL_242:
    PartyOrganizationConfirmItemDraw__SetMaskMessage(v106, v100, *(UnityEngine_Color_o *)&r, 0, v107, 0, v101);
    v108 = 1;
    goto LABEL_279;
  }
  if ( PartyOrganizationListViewItem__get_IsQuestRestriction(item, 0)
    && !PartyOrganizationListViewItem__get_IsEmpty(item, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v118 = LocalizationManager__Get((System_String_o *)StringLiteral_10258/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
    goto LABEL_255;
  }
  if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v111 = &StringLiteral_10259/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_250:
    v112 = LocalizationManager__Get((System_String_o *)*v111, 0);
    v114 = 0.0;
    v115 = 0.0;
    v116 = this;
    v117 = 0;
LABEL_251:
    v108 = 1;
    PartyOrganizationConfirmItemDraw__SetWarningMessage(v116, v112, 1, v117, v114, v115, v113);
    goto LABEL_279;
  }
  if ( item->fields.isFixedSupportPositionRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v111 = &StringLiteral_10260/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/;
    goto LABEL_250;
  }
  if ( item->fields.isFixedServantPositionRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v111 = &StringLiteral_10261/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/;
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
      v128 = LocalizationManager__Get((System_String_o *)StringLiteral_11539/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, 0);
      r = color.fields.r;
      g = color.fields.g;
      b = color.fields.b;
      a = color.fields.a;
      v100 = v128;
      v106 = this;
      v107 = (System_String_o *)StringLiteral_20386/*"img_frames_mask11"*/;
      goto LABEL_242;
    }
    PartyOrganizationListViewItem__ClearFatigure(item, 0);
    goto LABEL_277;
  }
  if ( item->fields._IsAllOutBattle_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v99 = &StringLiteral_11534/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
    goto LABEL_241;
  }
  if ( item->fields._IsNotSupportSingle_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v112 = LocalizationManager__Get((System_String_o *)StringLiteral_10262/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0);
    v114 = 10.0;
    v115 = -22.0;
    v117 = 1;
    v116 = this;
    goto LABEL_251;
  }
  if ( item->fields._IsDataLost_k__BackingField )
  {
    v119 = (System_String_o *)StringLiteral_1/*""*/;
    v120 = 1.0;
    v121 = 1.0;
    v122 = 1.0;
    v125 = (System_String_o *)StringLiteral_18474/*"datalost_svt_select"*/;
    v123 = 1.0;
    v126 = 1;
    v124 = this;
    goto LABEL_256;
  }
  if ( item->fields._TimesToRestart_k__BackingField >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v141 = LocalizationManager__Get((System_String_o *)StringLiteral_11540/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
    TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
    v145 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v142, v143, v144);
    v118 = System_String__Format(v141, v145, 0);
LABEL_255:
    v119 = v118;
    v120 = 0.0;
    v121 = 0.0;
    v122 = 0.0;
    v123 = 1.0;
    v124 = this;
    v125 = 0;
    v126 = 0;
LABEL_256:
    v108 = 1;
    PartyOrganizationConfirmItemDraw__SetMaskMessage(v124, v119, *(UnityEngine_Color_o *)&v120, 1, v125, v126, v110);
    goto LABEL_279;
  }
LABEL_277:
  PartyOrganizationConfirmItemDraw__ClearMessage(this, v109);
LABEL_278:
  v108 = 0;
LABEL_279:
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0, 0) )
    return;
  if ( !item->fields.isFollower )
  {
    v135 = item->fields.userServantEntity;
    if ( v135 )
    {
      SvtClassId = UserServantEntity__getSvtClassId(v135, 0, 0, 0);
    }
    else
    {
      v130 = item->fields.servantEntity;
      if ( !v130 )
        goto LABEL_297;
      SvtClassId = v130[20];
    }
    LODWORD(v130) = 0;
    goto LABEL_298;
  }
  v130 = item->fields.followerInfo;
  if ( !v130 )
  {
LABEL_297:
    SvtClassId = 0;
    goto LABEL_298;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_216;
  v131 = DataManager__GetMasterData_object_(
           (DataManager_o *)lv,
           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
  if ( !lv )
    goto LABEL_216;
  v133 = *((_QWORD *)lv + 6);
  v132 = *((_QWORD *)lv + 7);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v154.fields.currentCryptoKey = v133;
  *(_QWORD *)&v154.fields.fakeValue = v132;
  lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v154, 0);
  if ( !v131 )
    goto LABEL_216;
  lv = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v131,
         (int32_t)lv,
         (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !lv )
    goto LABEL_216;
  SvtClassId = *((_DWORD *)lv + 20);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
  if ( !lv )
    goto LABEL_216;
  LODWORD(v130) = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)lv, 0);
LABEL_298:
  if ( (unsigned int)v130 | v108 | (SvtClassId == 0) )
  {
    lv = this->fields.classCompatibilityIcon;
    if ( !lv )
      goto LABEL_216;
    goto LABEL_318;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_216;
  lv = (void *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)lv, 40, 0);
  if ( ((unsigned __int8)lv & 1) == 0 )
    goto LABEL_315;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_216;
  lv = (void *)*((_QWORD *)lv + 4);
  if ( !lv )
    goto LABEL_216;
  v16 = PartyOrganizationRootComponent_TypeInfo;
  naturalAligment = PartyOrganizationRootComponent_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)lv + 304LL) < (unsigned int)naturalAligment
    || *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)lv + 200LL) + 8 * naturalAligment - 8) != PartyOrganizationRootComponent_TypeInfo )
  {
    v146 = (PartyOrganizationCommandCardMenu_o *)sub_1C2D9AC(lv);
    PartyOrganizationCommandCardMenu__EndOpen(v146, v147);
    return;
  }
  v137 = *((_QWORD *)lv + 64);
  if ( !v137
    || (lv = (void *)BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)lv + 64), 0), !(_DWORD)lv)
    || (v138 = *(_DWORD *)(v137 + 24)) == 0 )
  {
LABEL_315:
    v140 = this->fields.classCompatibilityIcon;
    goto LABEL_316;
  }
  v139 = (int)lv;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_216;
  lv = DataManager__GetMasterData_object_(
         (DataManager_o *)lv,
         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !lv )
    goto LABEL_216;
  lv = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)lv, v139, v138, 0);
  v140 = this->fields.classCompatibilityIcon;
  if ( !lv )
  {
LABEL_316:
    if ( !v140 )
      goto LABEL_216;
    lv = v140;
LABEL_318:
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)lv, 0);
    return;
  }
  if ( !v140 )
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
  float x; // s0 OVERLAPPED
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v30; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = maskColor.fields.a;
  b = maskColor.fields.b;
  g = maskColor.fields.g;
  r = maskColor.fields.r;
  if ( (byte_4C22CE9 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1C2D490(&StringLiteral_18474/*"datalost_svt_select"*/);
    sub_1C2D490(&StringLiteral_20382/*"img_frames_mask03"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22CE9 = 1;
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
      AtlasManager__SetPartyOrganizationImage(v19, (System_String_o *)StringLiteral_18474/*"datalost_svt_select"*/, 0);
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
      v22 = maskName ? maskName : (System_String_o *)StringLiteral_20382/*"img_frames_mask03"*/;
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
    v33.fields.r = r;
    v33.fields.g = g;
    v33.fields.b = b;
    v33.fields.a = a;
    UIWidget__set_color((UIWidget_o *)gameObject, v33, 0);
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
        if ( !byte_4C20DA6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA6 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        x = static_fields->oneVector.fields.x;
        y = static_fields->oneVector.fields.y;
        z = static_fields->oneVector.fields.z;
      }
      else
      {
        x = restrictionMaskMessageWidth / v24;
        z = 1.0;
        y = 1.0;
      }
      if ( !v25 )
        goto LABEL_45;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v25 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4C20DA6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA6 = 1;
      }
      if ( !v25 )
        goto LABEL_45;
      v30 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v30->oneVector.fields.y;
      z = v30->oneVector.fields.z;
      x = v30->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v25, *(UnityEngine_Vector3_o *)&x, 0);
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
    sub_1C2D6EC(gameObject, v17);
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
  __int64 v19; // x2
  __int64 v20; // x8
  int32_t v21; // w25
  __int64 v22; // x8
  Il2CppObject *Master_object; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  bool IsHideRarity; // w27
  int32_t v26; // w25
  PartyOrganizationConfirmItemDraw_o *v27; // x26
  const MethodInfo *v28; // x7
  PartyOrganizationConfirmItemDraw_c *v30; // x0
  UnityEngine_GameObject_o *self; // [xsp+8h] [xbp-88h]
  il2cpp_array_size_t v32; // [xsp+10h] [xbp-80h]
  bool v33; // [xsp+1Ch] [xbp-74h]
  bool v34; // [xsp+20h] [xbp-70h]
  int32_t questPhase; // [xsp+24h] [xbp-6Ch]
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+28h] [xbp-68h] BYREF

  v10 = (System_Collections_Generic_List_object__o *)itemList;
  if ( (byte_4C22CEB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)sub_1C2D490(&PartyOrganizationConfirmItemDraw_TypeInfo);
    byte_4C22CEB = 1;
  }
  npcServantFollowerEntity = 0;
  if ( !v10 || (self = supportMemberBase, !supportMemberObjectList) )
LABEL_44:
    sub_1C2D6EC(itemList, supportMemberObjectList);
  max_length = supportMemberObjectList->max_length;
  size = v10->fields._size;
  if ( (int)max_length >= 1 )
  {
    v13 = 1;
    v14 = size > 0;
    v33 = isSimpleDisp;
    v34 = isAdjustPosY;
    v32 = supportMemberObjectList->max_length;
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
                                                                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_44;
      if ( *(_QWORD *)&itemList[4].fields._size )
      {
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v15,
                                                                                         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_44;
        v20 = *(_QWORD *)&itemList[4].fields._size;
        if ( !v20 )
          goto LABEL_44;
        v21 = *(_DWORD *)(v20 + 36);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v15,
                                                                                         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_44;
        v22 = *(_QWORD *)&itemList[4].fields._size;
        if ( !v22 )
          goto LABEL_44;
        questPhase = *(_DWORD *)(v22 + 40);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v15,
                                                                                         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_44;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)itemList, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                                         SvtId,
                                                                                         0);
        if ( !Master_object )
          goto LABEL_44;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                                                         (NpcServantFollowerMaster_o *)Master_object,
                                                                                         &npcServantFollowerEntity,
                                                                                         v21,
                                                                                         questPhase,
                                                                                         (int32_t)itemList,
                                                                                         0);
        if ( ((unsigned __int8)itemList & 1) != 0 )
        {
          LODWORD(max_length) = v32;
          if ( !npcServantFollowerEntity )
            goto LABEL_44;
          IsHideRarity = NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
          if ( !npcServantFollowerEntity || !itemList )
            goto LABEL_44;
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerMaster__GetEntity_42187164(
                                                                                           (NpcFollowerMaster_o *)itemList,
                                                                                           v21,
                                                                                           questPhase,
                                                                                           npcServantFollowerEntity->fields.id,
                                                                                           0);
          if ( itemList )
          {
            itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerEntity__GetImageSvtId(
                                                                                             (NpcFollowerEntity_o *)itemList,
                                                                                             0);
            v26 = (int)itemList;
          }
          else
          {
            v26 = 0;
          }
          goto LABEL_33;
        }
        LODWORD(max_length) = v32;
      }
      v26 = 0;
      IsHideRarity = 0;
LABEL_33:
      if ( v15 >= LODWORD(supportMemberObjectList->max_length) )
        goto LABEL_45;
      v27 = *v17;
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       v10,
                                                                                       v15,
                                                                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
      if ( !v27 )
        goto LABEL_44;
      PartyOrganizationConfirmItemDraw__SetItem(
        v27,
        (PartyOrganizationListViewItem_o *)itemList,
        2,
        v34,
        IsHideRarity,
        v26,
        v33,
        v28);
LABEL_36:
      if ( (_DWORD)max_length == v13 )
        break;
      v14 = v13 < size;
      if ( (unsigned int)v13++ >= LODWORD(supportMemberObjectList->max_length) )
LABEL_45:
        sub_1C2D6F4(itemList, supportMemberObjectList, v19);
    }
  }
  v30 = PartyOrganizationConfirmItemDraw_TypeInfo;
  if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
    v30 = PartyOrganizationConfirmItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(self, (float)(v30->static_fields->ICON_OFFSET_SIZE * (1 - size)), 0);
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
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  float v19; // s0
  float v20; // s8
  int32_t restrictionWarningMessageWidth; // s0
  UnityEngine_Transform_o *v22; // x19
  float v23; // s0
  float x; // s0 OVERLAPPED
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v27; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C22CEA & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_20382/*"img_frames_mask03"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22CEA = 1;
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
        (System_String_o *)StringLiteral_20382/*"img_frames_mask03"*/,
        this->fields.maskSpriteDefaultAtlas,
        0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_38;
      v29.fields.r = 0.0;
      v29.fields.g = 0.0;
      v29.fields.b = 0.0;
      v29.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, v29, 0);
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
                      if ( !byte_4C20DA6 )
                      {
                        gameObject = (UnityEngine_Component_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
                        byte_4C20DA6 = 1;
                      }
                      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                      x = static_fields->oneVector.fields.x;
                      y = static_fields->oneVector.fields.y;
                      z = static_fields->oneVector.fields.z;
                    }
                    else
                    {
                      x = v23 / v20;
                      z = 1.0;
                      y = 1.0;
                    }
                    if ( v22 )
                      goto LABEL_37;
                  }
                }
                else
                {
                  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
                  v22 = (UnityEngine_Transform_o *)gameObject;
                  if ( !byte_4C20DA6 )
                  {
                    gameObject = (UnityEngine_Component_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
                    byte_4C20DA6 = 1;
                  }
                  if ( v22 )
                  {
                    v27 = UnityEngine_Vector3_TypeInfo->static_fields;
                    y = v27->oneVector.fields.y;
                    z = v27->oneVector.fields.z;
                    x = v27->oneVector.fields.x;
LABEL_37:
                    UnityEngine_Transform__set_localScale(v22, *(UnityEngine_Vector3_o *)&x, 0);
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
    sub_1C2D6EC(gameObject, v14);
  }
}