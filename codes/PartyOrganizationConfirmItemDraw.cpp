void PartyOrganizationConfirmItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4E72F80 & 1) == 0 )
  {
    sub_1D0F0B4(&PartyOrganizationConfirmItemDraw_TypeInfo);
    byte_4E72F80 = 1;
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
  Il2CppObject *ComponentInChildren_object__53118956; // x0
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

  if ( (byte_4E72F7A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite____80441984);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E72F7A = 1;
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
    sub_1D0F058(
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
    sub_1D0F058(
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
    ComponentInChildren_object__53118956 = UnityEngine_GameObject__GetComponentInChildren_object__53118956(
                                             (UnityEngine_GameObject_o *)restrictionMaskMessageText,
                                             1,
                                             (const MethodInfo_32A87EC *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite____80441984);
    this->fields.maskServantSprite = (struct UISprite_o *)ComponentInChildren_object__53118956;
    p_maskServantSprite = &this->fields.maskServantSprite;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.maskServantSprite,
      (int32_t)ComponentInChildren_object__53118956,
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
        sub_1D0F058(
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
          sub_1D0F058(
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
      sub_1D0F30C(restrictionMaskMessageText, v4);
    }
  }
}


void PartyOrganizationConfirmItemDraw__ClearMessage(PartyOrganizationConfirmItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4E72F7C & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E72F7C = 1;
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
    sub_1D0F30C(gameObject, v4);
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
  ServantFaceIconComponent_o *servantFaceIcon; // x24
  struct FollowerInfo_o *followerInfo; // x8
  UnityEngine_Object_o *typeSprite; // x24
  struct FollowerInfo_o *v24; // x8
  int32_t type; // w8
  __int64 *v26; // x8
  UnityEngine_Object_o *v27; // x23
  UserServantEntity_o *userServantEntity; // x23
  ServantFaceIconComponent_o *v29; // x24
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
  UnityEngine_Object_o *v46; // x23
  System_Int32_array *v47; // x24
  System_String_o *v48; // x1
  UnityEngine_Object_o *v49; // x23
  UnityEngine_Object_c *v50; // x0
  __int64 *v51; // x8
  System_String_o *v52; // x23
  UnityEngine_Object_o *v53; // x24
  ServantEntity_o *ServantEntity_k__BackingField; // x0
  Il2CppObject *MasterData_object; // x23
  int32_t v56; // w0
  System_Int32_array *CommandCardList; // x0
  UnityEngine_Object_o *supportSprite; // x25
  System_String_o *v59; // x1
  UnityEngine_Object_o *v60; // x23
  UnityEngine_Object_o *v61; // x23
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int32_t imageLimitCount; // w23
  int32_t v64; // w25
  int32_t ServantId; // w0
  int32_t svtLimitCount; // w25
  int32_t v67; // w26
  int32_t v68; // w26
  int32_t LimitCountByDispLimit; // w25
  int32_t v70; // w0
  int32_t v71; // w27
  int32_t v72; // w28
  ServantOverwriteStatus_o *v73; // x26
  int32_t Rarity_k__BackingField; // w25
  int32_t actualRarity; // w21
  ServantFaceIconComponent_o *v76; // x26
  int32_t v77; // w0
  int32_t v78; // w27
  int32_t v79; // w28
  UnityEngine_Object_o *v80; // x23
  bool v81; // w1
  struct UILabel_array *commandLabelList; // x8
  __int64 v83; // x26
  int32_t v84; // w21
  int max_length; // w9
  UILabel_o *v86; // x22
  UnityEngine_Object_o *memberTypeBaseSprite; // x21
  int32_t index; // w21
  System_String_o **v89; // x8
  UISprite_o *memberTypeSprite; // x21
  System_String_o *v91; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  __int64 *v93; // x8
  System_String_o *v94; // x1
  const MethodInfo *v95; // x5
  float r; // s0 OVERLAPPED
  float g; // s1
  float b; // s2
  float a; // s3
  PartyOrganizationConfirmItemDraw_o *v100; // x0
  System_String_o *v101; // x3
  int v102; // w24
  const MethodInfo *v103; // x1
  const MethodInfo *v104; // x5
  __int64 *v105; // x8
  System_String_o *v106; // x1
  const MethodInfo *v107; // x4
  float v108; // s0
  float v109; // s1
  PartyOrganizationConfirmItemDraw_o *v110; // x0
  bool v111; // w3
  System_String_o *v112; // x0
  System_String_o *v113; // x1
  float v114; // s0 OVERLAPPED
  float v115; // s1
  float v116; // s2
  float v117; // s3
  PartyOrganizationConfirmItemDraw_o *v118; // x0
  System_String_o *v119; // x3
  bool v120; // w4
  int64_t fatigureTime; // x21
  System_String_o *v122; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  _DWORD *v124; // x8
  Il2CppObject *v125; // x21
  __int64 v126; // x22
  __int64 v127; // x23
  int32_t SvtClassId; // w21
  UserServantEntity_o *v129; // x0
  __int64 naturalAligment; // x9
  __int64 v131; // x22
  int32_t v132; // w22
  int32_t v133; // w20
  struct ServantClassCompatibilityIconComponent_o *v134; // x8
  System_String_o *v135; // x21
  Il2CppObject *v136; // x0
  PartyOrganizationCommandCardMenu_o *v137; // x0
  const MethodInfo *v138; // x1
  bool v139; // [xsp+68h] [xbp-88h]
  int32_t TimesToRestart_k__BackingField; // [xsp+6Ch] [xbp-84h] BYREF
  UnityEngine_Color_o color; // [xsp+70h] [xbp-80h] BYREF
  int v142; // [xsp+84h] [xbp-6Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16

  if ( (byte_4E72F7B & 1) == 0 )
  {
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&ImageLimitCount_TypeInfo);
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&PartyOrganizationRootComponent_TypeInfo);
    sub_1D0F0B4(&ServantOverwriteStatus_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&string_TypeInfo);
    sub_1D0F0B4(&UserServantEntity_TypeInfo);
    sub_1D0F0B4(&StringLiteral_20628/*"icon_support_02"*/);
    sub_1D0F0B4(&StringLiteral_15699/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/);
    sub_1D0F0B4(&StringLiteral_10389/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/);
    sub_1D0F0B4(&StringLiteral_10392/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1D0F0B4(&StringLiteral_11716/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/);
    sub_1D0F0B4(&StringLiteral_11717/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1D0F0B4(&StringLiteral_11711/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_1D0F0B4(&StringLiteral_20787/*"img_frames_mask11"*/);
    sub_1D0F0B4(&StringLiteral_10388/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1D0F0B4(&StringLiteral_21961/*"member_txt_"*/);
    sub_1D0F0B4(&StringLiteral_11710/*"SELECT_NO_SORTIE"*/);
    sub_1D0F0B4(&StringLiteral_20627/*"icon_support_01"*/);
    sub_1D0F0B4(&StringLiteral_20579/*"icon_eventjoin_02"*/);
    sub_1D0F0B4(&StringLiteral_19985/*"formation_txtbg_03"*/);
    sub_1D0F0B4(&StringLiteral_15697/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/);
    sub_1D0F0B4(&StringLiteral_19939/*"formation_blank_small"*/);
    sub_1D0F0B4(&StringLiteral_20790/*"img_frames_mask14"*/);
    sub_1D0F0B4(&StringLiteral_18776/*"datalost_svt_select"*/);
    sub_1D0F0B4(&StringLiteral_406/*"#042484"*/);
    sub_1D0F0B4(&StringLiteral_19982/*"formation_support_small"*/);
    sub_1D0F0B4(&StringLiteral_19984/*"formation_txtbg_02"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    sub_1D0F0B4(&StringLiteral_10390/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/);
    sub_1D0F0B4(&StringLiteral_20582/*"icon_friend"*/);
    sub_1D0F0B4(&StringLiteral_10391/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/);
    sub_1D0F0B4(&StringLiteral_20581/*"icon_follow"*/);
    byte_4E72F7B = 1;
  }
  entity = 0;
  v142 = 0;
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
      goto LABEL_206;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
  }
  maskServantLabel = (UnityEngine_Object_o *)this->fields.maskServantLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskServantLabel, 0, 0) )
  {
    lv = this->fields.maskServantLabel;
    if ( !lv )
      goto LABEL_206;
    UILabel__set_text((UILabel_o *)lv, string_TypeInfo->static_fields->Empty, 0);
  }
  maskEquipObj = (UnityEngine_Object_o *)this->fields.maskEquipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskEquipObj, 0, 0) )
  {
    lv = this->fields.maskEquipObj;
    if ( !lv )
      goto LABEL_206;
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
      goto LABEL_206;
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
        goto LABEL_206;
      if ( !servantFaceIcon )
        goto LABEL_206;
      ServantFaceIconComponent__Set_42458904(
        servantFaceIcon,
        (ServantLeaderInfo_o *)lv,
        0,
        0,
        0,
        followerInfo->fields.imageSvtId,
        isSimpleDisp,
        0,
        0);
      lv = this->fields.servantFaceIcon;
      if ( !lv )
        goto LABEL_206;
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
          goto LABEL_206;
        type = v24->fields.type;
        if ( (unsigned int)(type - 3) < 2 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_206;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
          if ( !lv )
            goto LABEL_206;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_206;
          v26 = &StringLiteral_20627/*"icon_support_01"*/;
          goto LABEL_134;
        }
        if ( type == 5 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_206;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
          if ( !lv )
            goto LABEL_206;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_206;
          v26 = &StringLiteral_20581/*"icon_follow"*/;
          goto LABEL_134;
        }
        if ( type == 1 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_206;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
          if ( !lv )
            goto LABEL_206;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_206;
          v26 = &StringLiteral_20582/*"icon_friend"*/;
LABEL_134:
          UISprite__set_spriteName((UISprite_o *)lv, (System_String_o *)*v26, 0);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_206;
          (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
          goto LABEL_139;
        }
        lv = this->fields.typeSprite;
        if ( !lv )
          goto LABEL_206;
        lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
        if ( !lv )
          goto LABEL_206;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
      }
LABEL_139:
      CommandCardList = PartyOrganizationListViewItem__GetCommandCardList(item, 0);
      supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
      v47 = CommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(supportSprite, 0, 0) )
      {
        lv = this->fields.supportSprite;
        if ( !lv )
          goto LABEL_206;
        if ( item->fields.isFollower )
          v59 = (System_String_o *)StringLiteral_20628/*"icon_support_02"*/;
        else
          v59 = 0;
        UISprite__set_spriteName((UISprite_o *)lv, v59, 0);
      }
      if ( isSimpleDisp )
      {
        v60 = (UnityEngine_Object_o *)this->fields.typeSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v60, 0, 0) )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_206;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
          if ( !lv )
            goto LABEL_206;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
        }
        v61 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v61, 0, 0) )
        {
          lv = this->fields.supportSprite;
          if ( !lv )
            goto LABEL_206;
          goto LABEL_158;
        }
      }
      goto LABEL_160;
    }
    if ( !servantFaceIcon )
      goto LABEL_206;
    ServantFaceIconComponent__Clear(this->fields.servantFaceIcon, 0);
    v49 = (UnityEngine_Object_o *)this->fields.typeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v49, 0, 0) )
    {
      lv = this->fields.typeSprite;
      if ( !lv )
        goto LABEL_206;
      lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
      if ( !lv )
        goto LABEL_206;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
    }
    v50 = UnityEngine_Object_TypeInfo;
    v51 = &StringLiteral_19982/*"formation_support_small"*/;
    goto LABEL_111;
  }
  v27 = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v27, 0, 0) )
  {
    lv = this->fields.typeSprite;
    if ( !lv )
      goto LABEL_206;
    lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0);
    if ( !lv )
      goto LABEL_206;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0);
  }
  userServantEntity = item->fields.userServantEntity;
  if ( userServantEntity )
  {
    v29 = this->fields.servantFaceIcon;
    lv = PartyOrganizationListViewItem__GetEquipList(item, 0);
    if ( !v29 )
      goto LABEL_206;
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
      0,
      0);
    lv = this->fields.servantFaceIcon;
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
      v30 = (UnityEngine_Object_o *)this->fields.maskServantObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v30, 0, 0) )
      {
        lv = this->fields.servantFaceIcon;
        if ( !lv )
          goto LABEL_206;
        ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
          (ServantFaceIconComponent_o *)lv,
          this->fields.maskServantSprite,
          this->fields.defaultMaskServantSpriteName,
          this->fields.defaultMaskServantAtlas,
          0);
        lv = this->fields.maskServantObj;
        if ( !lv )
          goto LABEL_206;
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
        lv = LocalizationManager__Get((System_String_o *)StringLiteral_15699/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0);
        if ( !v32 )
          goto LABEL_206;
        UILabel__set_text(v32, (System_String_o *)lv, 0);
      }
    }
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4E710BF )
      {
        sub_1D0F0B4(&NetworkManager_TypeInfo);
        byte_4E710BF = 1;
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
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(EquipSvtId, 0);
      if ( !Master_object )
        goto LABEL_206;
      if ( UserServantCollectionMaster__TryGetEntity(
             (UserServantCollectionMaster_o *)Master_object,
             &entity,
             userIdNumber,
             (int32_t)lv,
             0) )
      {
        v37 = this->fields.servantFaceIcon;
        v38 = entity;
        v39 = (UserServantEntity_o *)sub_1D0F300(UserServantEntity_TypeInfo);
        UserServantEntity___ctor_44525316(v39, v38, 0, 0);
        if ( !v37 )
          goto LABEL_206;
        ServantFaceIconComponent__SetEquip(v37, v39, 0);
        v40 = (UnityEngine_Object_o *)this->fields.maskEquipObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v40, 0, 0) )
        {
          lv = this->fields.maskEquipObj;
          if ( !lv )
            goto LABEL_206;
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
          AtlasManager__SetEventSprite(v42, (System_String_o *)StringLiteral_20790/*"img_frames_mask14"*/, 0);
        }
        v43 = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v43, 0, 0) )
        {
          v44 = this->fields.maskEquipLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          lv = LocalizationManager__Get((System_String_o *)StringLiteral_15697/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0);
          if ( !v44 )
            goto LABEL_206;
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
        goto LABEL_206;
      lv = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)lv, 0);
      if ( !this->fields.supportSprite )
        goto LABEL_206;
      if ( ((unsigned __int8)lv & 1) != 0 )
      {
        lv = this->fields.supportSprite;
        v48 = (System_String_o *)StringLiteral_20579/*"icon_eventjoin_02"*/;
LABEL_159:
        UISprite__set_spriteName((UISprite_o *)lv, v48, 0);
        goto LABEL_160;
      }
      lv = this->fields.supportSprite;
LABEL_158:
      v48 = 0;
      goto LABEL_159;
    }
LABEL_160:
    v52 = 0;
    if ( !isAdjustPosY )
      goto LABEL_187;
    goto LABEL_182;
  }
  ServantEntity_k__BackingField = item->fields._ServantEntity_k__BackingField;
  if ( !ServantEntity_k__BackingField )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_206;
    ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)lv, 0);
    v50 = UnityEngine_Object_TypeInfo;
    v51 = &StringLiteral_19939/*"formation_blank_small"*/;
LABEL_111:
    v52 = (System_String_o *)*v51;
    v53 = (UnityEngine_Object_o *)this->fields.supportSprite;
    if ( !v50->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v50);
    if ( UnityEngine_Object__op_Inequality(v53, 0, 0) )
    {
      lv = this->fields.supportSprite;
      if ( !lv )
        goto LABEL_206;
      UISprite__set_spriteName((UISprite_o *)lv, 0, 0);
    }
    goto LABEL_181;
  }
  if ( !item->fields.questRestrictionInfo )
    goto LABEL_165;
  if ( ServantEntity__checkIsHeroineSvt(ServantEntity_k__BackingField, 0) )
  {
    lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !lv )
      goto LABEL_206;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)lv,
                          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    lv = (void *)PartyOrganizationListViewItem__get_ServantId(item, 0);
    if ( !MasterData_object )
      goto LABEL_206;
    lv = UserServantMaster__getHeroineData((UserServantMaster_o *)MasterData_object, (int32_t)lv, 0);
    if ( !item->fields.questRestrictionInfo )
      goto LABEL_206;
    v56 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_44803888(
            item->fields.questRestrictionInfo,
            (UserServantEntity_o *)lv,
            0);
  }
  else
  {
    questRestrictionInfo = item->fields.questRestrictionInfo;
    lv = (void *)PartyOrganizationListViewItem__get_ServantId(item, 0);
    if ( !questRestrictionInfo )
      goto LABEL_206;
    v56 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount(questRestrictionInfo, (int32_t)lv, 0);
  }
  imageLimitCount = v56;
  v64 = v56;
  if ( v56 < 0 )
  {
LABEL_165:
    imageLimitCount = item->fields.imageLimitCount;
    if ( imageLimitCount < 0 )
    {
      ServantId = PartyOrganizationListViewItem__get_ServantId(item, 0);
      svtLimitCount = item->fields.svtLimitCount;
      v67 = ServantId;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v64 = ImageLimitCount__GetImageLimitCount(v67, svtLimitCount, 0);
    }
    else
    {
      v64 = item->fields.imageLimitCount;
    }
  }
  v139 = isRarityHide;
  v68 = item->fields.svtLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v64, v68, 0);
  v70 = PartyOrganizationListViewItem__get_ServantId(item, 0);
  v71 = item->fields.svtLimitCount;
  v72 = v70;
  v73 = (ServantOverwriteStatus_o *)sub_1D0F300(ServantOverwriteStatus_TypeInfo);
  ServantOverwriteStatus___ctor_35209836(v73, v72, v71, LimitCountByDispLimit, 0);
  if ( !v73 )
    goto LABEL_206;
  Rarity_k__BackingField = v73->fields._Rarity_k__BackingField;
  actualRarity = v73->fields._ActualRarity_k__BackingField;
  v76 = this->fields.servantFaceIcon;
  v77 = PartyOrganizationListViewItem__get_ServantId(item, 0);
  v78 = item->fields.svtLimitCount;
  v79 = v77;
  lv = (void *)PartyOrganizationListViewItem__get_Level(item, 0);
  if ( !v76
    || (ServantFaceIconComponent__SetIcon(
          v76,
          v79,
          Rarity_k__BackingField,
          v78,
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
          0,
          0),
        (lv = this->fields.servantFaceIcon) == 0) )
  {
LABEL_206:
    sub_1D0F30C(lv, v16);
  }
  ServantFaceIconComponent__SetGrandFaceMaskSpritePartyOrganizationAtlas(
    (ServantFaceIconComponent_o *)lv,
    this->fields.restrictionMaskSprite,
    this->fields.maskSpriteDefaultSpriteName,
    this->fields.maskSpriteDefaultAtlas,
    0);
  v80 = (UnityEngine_Object_o *)this->fields.supportSprite;
  isRarityHide = v139;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v80, 0, 0) )
  {
    lv = this->fields.supportSprite;
    if ( !lv )
      goto LABEL_206;
    UISprite__set_spriteName((UISprite_o *)lv, 0, 0);
  }
  v52 = 0;
LABEL_181:
  v47 = 0;
  if ( !isAdjustPosY )
    goto LABEL_187;
LABEL_182:
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_206;
  if ( !ServantFaceIconComponent__IsUseEquip((ServantFaceIconComponent_o *)lv, 0) )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_206;
    ServantFaceIconComponent__AdjustRaritySpritePosY((ServantFaceIconComponent_o *)lv, -55.0, 0);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_206;
    ServantFaceIconComponent__AdjustDispLimitCountSpritePosY((ServantFaceIconComponent_o *)lv, -34.0, 0);
  }
LABEL_187:
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_206;
  ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)lv, !isRarityHide, 0);
  if ( item->fields._IsNotSupportSingle_k__BackingField || !item->fields._IsDataLost_k__BackingField )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_206;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 1, 0);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_206;
    v81 = 1;
  }
  else
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_206;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 0, 0);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_206;
    v81 = 0;
  }
  ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)lv, v81, 0);
  commandLabelList = this->fields.commandLabelList;
  if ( !commandLabelList )
    goto LABEL_206;
  v83 = 0;
  v84 = (_DWORD)v47 + 32;
  while ( 1 )
  {
    max_length = commandLabelList->max_length;
    if ( (int)v83 >= max_length )
      break;
    if ( (unsigned int)v83 >= max_length )
      goto LABEL_320;
    v86 = commandLabelList->m_Items[v83];
    if ( v47 )
    {
      if ( (unsigned int)v83 >= LODWORD(v47->max_length) )
LABEL_320:
        sub_1D0F314(lv);
      lv = System_Int32__ToString(v84, 0);
      v16 = (PartyOrganizationRootComponent_c *)lv;
      if ( !v86 )
        goto LABEL_206;
    }
    else
    {
      v16 = (PartyOrganizationRootComponent_c *)StringLiteral_1/*""*/;
      if ( !v86 )
        goto LABEL_206;
    }
    UILabel__set_text(v86, (System_String_o *)v16, 0);
    commandLabelList = this->fields.commandLabelList;
    ++v83;
    v84 += 4;
    if ( !commandLabelList )
      goto LABEL_206;
  }
  lv = this->fields.baseSprite;
  if ( !lv )
    goto LABEL_206;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 0, 0);
  if ( v52 )
  {
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_206;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 1, 0);
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_206;
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
      goto LABEL_206;
    v89 = (System_String_o **)(index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax
                             ? &StringLiteral_19985/*"formation_txtbg_03"*/
                             : &StringLiteral_19984/*"formation_txtbg_02"*/);
    UISprite__set_spriteName((UISprite_o *)lv, *v89, 0);
    memberTypeSprite = this->fields.memberTypeSprite;
    v142 = item->fields.index + 1;
    v91 = System_Int32__ToString((int32_t)&v142, 0);
    lv = System_String__Concat_65562772((System_String_o *)StringLiteral_21961/*"member_txt_"*/, v91, 0);
    if ( !memberTypeSprite )
      goto LABEL_206;
    UISprite__set_spriteName(memberTypeSprite, (System_String_o *)lv, 0);
    lv = this->fields.memberTypeSprite;
    if ( !lv )
      goto LABEL_206;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
    goto LABEL_268;
  if ( PartyOrganizationListViewItem__get_IsLeave(item, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v93 = &StringLiteral_11710/*"SELECT_NO_SORTIE"*/;
LABEL_231:
    v94 = LocalizationManager__Get((System_String_o *)*v93, 0);
    r = 0.0;
    g = 0.0;
    b = 0.0;
    a = 1.0;
    v100 = this;
    v101 = 0;
LABEL_232:
    PartyOrganizationConfirmItemDraw__SetMaskMessage(v100, v94, *(UnityEngine_Color_o *)&r, 0, v101, 0, v95);
    v102 = 1;
    goto LABEL_269;
  }
  if ( PartyOrganizationListViewItem__get_IsQuestRestriction(item, 0)
    && !PartyOrganizationListViewItem__get_IsEmpty(item, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v112 = LocalizationManager__Get((System_String_o *)StringLiteral_10388/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
    goto LABEL_245;
  }
  if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v105 = &StringLiteral_10389/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_240:
    v106 = LocalizationManager__Get((System_String_o *)*v105, 0);
    v108 = 0.0;
    v109 = 0.0;
    v110 = this;
    v111 = 0;
LABEL_241:
    v102 = 1;
    PartyOrganizationConfirmItemDraw__SetWarningMessage(v110, v106, 1, v111, v108, v109, v107);
    goto LABEL_269;
  }
  if ( item->fields.isFixedSupportPositionRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v105 = &StringLiteral_10390/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/;
    goto LABEL_240;
  }
  if ( item->fields.isFixedServantPositionRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v105 = &StringLiteral_10391/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/;
    goto LABEL_240;
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
      v122 = LocalizationManager__Get((System_String_o *)StringLiteral_11716/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, 0);
      r = color.fields.r;
      g = color.fields.g;
      b = color.fields.b;
      a = color.fields.a;
      v94 = v122;
      v100 = this;
      v101 = (System_String_o *)StringLiteral_20787/*"img_frames_mask11"*/;
      goto LABEL_232;
    }
    PartyOrganizationListViewItem__ClearFatigure(item, 0);
    goto LABEL_267;
  }
  if ( item->fields._IsAllOutBattle_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v93 = &StringLiteral_11711/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
    goto LABEL_231;
  }
  if ( item->fields._IsNotSupportSingle_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v106 = LocalizationManager__Get((System_String_o *)StringLiteral_10392/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0);
    v108 = 10.0;
    v109 = -22.0;
    v111 = 1;
    v110 = this;
    goto LABEL_241;
  }
  if ( item->fields._IsDataLost_k__BackingField )
  {
    v113 = (System_String_o *)StringLiteral_1/*""*/;
    v114 = 1.0;
    v115 = 1.0;
    v116 = 1.0;
    v119 = (System_String_o *)StringLiteral_18776/*"datalost_svt_select"*/;
    v117 = 1.0;
    v120 = 1;
    v118 = this;
    goto LABEL_246;
  }
  if ( item->fields._TimesToRestart_k__BackingField >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v135 = LocalizationManager__Get((System_String_o *)StringLiteral_11717/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
    TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
    v136 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
    v112 = System_String__Format(v135, v136, 0);
LABEL_245:
    v113 = v112;
    v114 = 0.0;
    v115 = 0.0;
    v116 = 0.0;
    v117 = 1.0;
    v118 = this;
    v119 = 0;
    v120 = 0;
LABEL_246:
    v102 = 1;
    PartyOrganizationConfirmItemDraw__SetMaskMessage(v118, v113, *(UnityEngine_Color_o *)&v114, 1, v119, v120, v104);
    goto LABEL_269;
  }
LABEL_267:
  PartyOrganizationConfirmItemDraw__ClearMessage(this, v103);
LABEL_268:
  v102 = 0;
LABEL_269:
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0, 0) )
    return;
  if ( !item->fields.isFollower )
  {
    v129 = item->fields.userServantEntity;
    if ( v129 )
    {
      SvtClassId = UserServantEntity__getSvtClassId(v129, 0, 0, 0);
    }
    else
    {
      v124 = item->fields._ServantEntity_k__BackingField;
      if ( !v124 )
        goto LABEL_287;
      SvtClassId = v124[20];
    }
    LODWORD(v124) = 0;
    goto LABEL_288;
  }
  v124 = item->fields.followerInfo;
  if ( !v124 )
  {
LABEL_287:
    SvtClassId = 0;
    goto LABEL_288;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_206;
  v125 = DataManager__GetMasterData_object_(
           (DataManager_o *)lv,
           (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
  if ( !lv )
    goto LABEL_206;
  v127 = *((_QWORD *)lv + 6);
  v126 = *((_QWORD *)lv + 7);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v144.fields.currentCryptoKey = v127;
  *(_QWORD *)&v144.fields.fakeValue = v126;
  lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v144, 0);
  if ( !v125 )
    goto LABEL_206;
  lv = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v125,
         (int32_t)lv,
         (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !lv )
    goto LABEL_206;
  SvtClassId = *((_DWORD *)lv + 20);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, 0);
  if ( !lv )
    goto LABEL_206;
  LODWORD(v124) = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)lv, 0);
LABEL_288:
  if ( (unsigned int)v124 | v102 | (SvtClassId == 0) )
  {
    lv = this->fields.classCompatibilityIcon;
    if ( !lv )
      goto LABEL_206;
    goto LABEL_308;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_206;
  lv = (void *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)lv, 40, 0);
  if ( ((unsigned __int8)lv & 1) == 0 )
    goto LABEL_305;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_206;
  lv = (void *)*((_QWORD *)lv + 4);
  if ( !lv )
    goto LABEL_206;
  v16 = PartyOrganizationRootComponent_TypeInfo;
  naturalAligment = PartyOrganizationRootComponent_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)lv + 304LL) < (unsigned int)naturalAligment
    || *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)lv + 200LL) + 8 * naturalAligment - 8) != PartyOrganizationRootComponent_TypeInfo )
  {
    v137 = (PartyOrganizationCommandCardMenu_o *)sub_1D0F6A8(lv);
    PartyOrganizationCommandCardMenu__EndOpen(v137, v138);
    return;
  }
  v131 = *((_QWORD *)lv + 65);
  if ( !v131
    || (lv = (void *)BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)lv + 65), 0), !(_DWORD)lv)
    || (v132 = *(_DWORD *)(v131 + 24)) == 0 )
  {
LABEL_305:
    v134 = this->fields.classCompatibilityIcon;
    goto LABEL_306;
  }
  v133 = (int)lv;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_206;
  lv = DataManager__GetMasterData_object_(
         (DataManager_o *)lv,
         (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !lv )
    goto LABEL_206;
  lv = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)lv, v133, v132, 0);
  v134 = this->fields.classCompatibilityIcon;
  if ( !lv )
  {
LABEL_306:
    if ( !v134 )
      goto LABEL_206;
    lv = v134;
LABEL_308:
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)lv, 0);
    return;
  }
  if ( !v134 )
    goto LABEL_206;
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
  if ( (byte_4E72F7D & 1) == 0 )
  {
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1D0F0B4(&StringLiteral_18776/*"datalost_svt_select"*/);
    sub_1D0F0B4(&StringLiteral_20783/*"img_frames_mask03"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E72F7D = 1;
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
      AtlasManager__SetPartyOrganizationImage(v19, (System_String_o *)StringLiteral_18776/*"datalost_svt_select"*/, 0);
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
      v22 = maskName ? maskName : (System_String_o *)StringLiteral_20783/*"img_frames_mask03"*/;
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
        if ( !byte_4E70C9E )
        {
          gameObject = (UnityEngine_Component_o *)sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
          byte_4E70C9E = 1;
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
      if ( !byte_4E70C9E )
      {
        gameObject = (UnityEngine_Component_o *)sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
        byte_4E70C9E = 1;
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
    sub_1D0F30C(gameObject, v17);
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
  System_Collections_Generic_List_object__o *v10; // x21
  il2cpp_array_size_t max_length; // x29
  int32_t size; // w28
  int v13; // w22
  bool v14; // w25
  unsigned int v15; // w24
  char *v16; // x23
  PartyOrganizationConfirmItemDraw_o **v17; // x23
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v18; // t1
  __int64 v19; // x8
  int32_t v20; // w25
  __int64 v21; // x8
  int32_t v22; // w26
  Il2CppObject *Master_object; // x27
  bool IsHideRarity; // w27
  int32_t v25; // w25
  PartyOrganizationConfirmItemDraw_o *v26; // x26
  const MethodInfo *v27; // x7
  PartyOrganizationConfirmItemDraw_c *v29; // x0
  UnityEngine_GameObject_o *self; // [xsp+8h] [xbp-78h]
  bool v31; // [xsp+10h] [xbp-70h]
  bool v32; // [xsp+14h] [xbp-6Ch]
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+18h] [xbp-68h] BYREF

  v10 = (System_Collections_Generic_List_object__o *)itemList;
  if ( (byte_4E72F7F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
    itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)sub_1D0F0B4(&PartyOrganizationConfirmItemDraw_TypeInfo);
    byte_4E72F7F = 1;
  }
  npcServantFollowerEntity = 0;
  if ( !v10 )
    goto LABEL_41;
  self = supportMemberBase;
  if ( !supportMemberObjectList )
    goto LABEL_41;
  max_length = supportMemberObjectList->max_length;
  size = v10->fields._size;
  if ( (int)max_length >= 1 )
  {
    v13 = 1;
    v14 = size > 0;
    v31 = isSimpleDisp;
    v32 = isAdjustPosY;
    while ( 1 )
    {
      v15 = v13 - 1;
      v16 = (char *)supportMemberObjectList + 8 * v13 - 8;
      v18 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)*((_QWORD *)v16 + 4);
      v17 = (PartyOrganizationConfirmItemDraw_o **)(v16 + 32);
      itemList = v18;
      if ( !v18 )
        break;
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)itemList,
                                                                                       0);
      if ( !itemList )
        break;
      if ( v14 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 1, 0);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v15,
                                                                                         (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          break;
        if ( !*(_QWORD *)&itemList[4].fields._size )
          goto LABEL_29;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v15,
                                                                                         (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          break;
        v19 = *(_QWORD *)&itemList[4].fields._size;
        if ( !v19 )
          break;
        v20 = *(_DWORD *)(v19 + 36);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v15,
                                                                                         (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          break;
        v21 = *(_QWORD *)&itemList[4].fields._size;
        if ( !v21 )
          break;
        v22 = *(_DWORD *)(v21 + 40);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v15,
                                                                                         (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          break;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)PartyOrganizationListViewItem__get_ServantId(
                                                                                         (PartyOrganizationListViewItem_o *)itemList,
                                                                                         0);
        if ( !Master_object )
          break;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                                                         (NpcServantFollowerMaster_o *)Master_object,
                                                                                         &npcServantFollowerEntity,
                                                                                         v20,
                                                                                         v22,
                                                                                         (int32_t)itemList,
                                                                                         0);
        if ( ((unsigned __int8)itemList & 1) != 0 )
        {
          if ( !npcServantFollowerEntity )
            break;
          IsHideRarity = NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
          if ( !npcServantFollowerEntity || !itemList )
            break;
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerMaster__GetEntity_43801792(
                                                                                           (NpcFollowerMaster_o *)itemList,
                                                                                           v20,
                                                                                           v22,
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
        }
        else
        {
LABEL_29:
          v25 = 0;
          IsHideRarity = 0;
        }
        if ( v15 >= LODWORD(supportMemberObjectList->max_length) )
          goto LABEL_42;
        v26 = *v17;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v15,
                                                                                         (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !v26 )
          break;
        PartyOrganizationConfirmItemDraw__SetItem(
          v26,
          (PartyOrganizationListViewItem_o *)itemList,
          2,
          v32,
          IsHideRarity,
          v25,
          v31,
          v27);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0);
      }
      if ( (_DWORD)max_length == v13 )
        goto LABEL_38;
      v14 = v13 < size;
      if ( (unsigned int)v13++ >= LODWORD(supportMemberObjectList->max_length) )
LABEL_42:
        sub_1D0F314(itemList);
    }
LABEL_41:
    sub_1D0F30C(itemList, supportMemberObjectList);
  }
LABEL_38:
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

  if ( (byte_4E72F7E & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_20783/*"img_frames_mask03"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E72F7E = 1;
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
        (System_String_o *)StringLiteral_20783/*"img_frames_mask03"*/,
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
                      if ( !byte_4E70C9E )
                      {
                        gameObject = (UnityEngine_Component_o *)sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
                        byte_4E70C9E = 1;
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
                  if ( !byte_4E70C9E )
                  {
                    gameObject = (UnityEngine_Component_o *)sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
                    byte_4E70C9E = 1;
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
    sub_1D0F30C(gameObject, v14);
  }
}