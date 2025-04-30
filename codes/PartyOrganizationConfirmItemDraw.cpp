void __fastcall PartyOrganizationConfirmItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A49FAC & 1) == 0 )
  {
    sub_1B863B8(&PartyOrganizationConfirmItemDraw_TypeInfo, v1);
    byte_4A49FAC = 1;
  }
  *PartyOrganizationConfirmItemDraw_TypeInfo->static_fields = (struct PartyOrganizationConfirmItemDraw_StaticFields)0x9A0000003CLL;
}


void __fastcall PartyOrganizationConfirmItemDraw___ctor(
        PartyOrganizationConfirmItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmItemDraw__Awake(
        PartyOrganizationConfirmItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v4; // x1
  UIWidget_o *restrictionMaskMessageText; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UISprite_o *v8; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v10; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4A49FA6 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A49FA6 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !restrictionMaskMessageText )
      goto LABEL_16;
    this->fields.restrictionMaskMessageWidth = restrictionMaskMessageText->fields.mWidth;
    UIWidget__set_width(restrictionMaskMessageText, 1000, 0LL);
    v8 = this->fields.restrictionMaskSprite;
    if ( !v8 )
      goto LABEL_16;
    mAtlas = v8->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.maskSpriteDefaultAtlas, (int32_t)mAtlas, v6, v7);
    v10 = this->fields.restrictionMaskSprite;
    if ( !v10 )
      goto LABEL_16;
    this->fields.maskSpriteDefaultHeight = v10->fields.mHeight;
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( restrictionMaskMessageText )
    {
      this->fields.restrictionWarningMessageWidth = restrictionMaskMessageText->fields.mWidth;
      UIWidget__set_width(restrictionMaskMessageText, 1000, 0LL);
      return;
    }
LABEL_16:
    sub_1B86614(restrictionMaskMessageText, v4);
  }
}


void __fastcall PartyOrganizationConfirmItemDraw__ClearMessage(
        PartyOrganizationConfirmItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4A49FA8 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    sub_1B863B8(&StringLiteral_1/*""*/, v3);
    byte_4A49FA8 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_18;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_1B86614(gameObject, v5);
  }
}


void __fastcall PartyOrganizationConfirmItemDraw__SetInput(
        PartyOrganizationConfirmItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmItemDraw__SetItem(
        PartyOrganizationConfirmItemDraw_o *this,
        PartyOrganizationListViewItem_o *item,
        int32_t mode,
        bool isAdjustPosY,
        bool isRarityHide,
        int32_t imageSvtId,
        bool isSimpleDisp,
        const MethodInfo *method)
{
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
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  UnityEngine_Object_o *maskServantObj; // x25
  PartyOrganizationRootComponent_c *v61; // x1
  void *lv; // x0
  UnityEngine_Object_o *maskServantLabel; // x25
  UnityEngine_Object_o *maskEquipObj; // x25
  UnityEngine_Object_o *maskEquipLabel; // x25
  ServantFaceIconComponent_o *servantFaceIcon; // x23
  struct FollowerInfo_o *followerInfo; // x8
  UnityEngine_Object_o *typeSprite; // x23
  struct FollowerInfo_o *v69; // x8
  int32_t type; // w8
  __int64 *v71; // x8
  UnityEngine_Object_o *v72; // x24
  UserServantEntity_o *userServantEntity; // x24
  ServantFaceIconComponent_o *v74; // x23
  const MethodInfo *v75; // x1
  UnityEngine_Object_o *v76; // x23
  UnityEngine_Object_o *v77; // x23
  UILabel_o *v78; // x23
  const MethodInfo *v79; // x1
  Il2CppObject *Master_object; // x23
  NetworkManager_c *v81; // x0
  int64_t userIdNumber; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  ServantFaceIconComponent_o *v84; // x23
  UserServantCollectionEntity_o *v85; // x25
  UserServantEntity_o *v86; // x24
  UnityEngine_Object_o *v87; // x23
  UnityEngine_Object_o *maskEquipSprite; // x23
  UISprite_o *v89; // x23
  UnityEngine_Object_o *v90; // x23
  UILabel_o *v91; // x23
  System_Int32_array *v92; // x0
  UnityEngine_Object_o *v93; // x24
  System_Int32_array *v94; // x23
  UISprite_o *v95; // x0
  System_String_o *v96; // x1
  UnityEngine_Object_o *v97; // x23
  UnityEngine_Object_c *v98; // x0
  __int64 *v99; // x8
  System_String_o *v100; // x24
  UnityEngine_Object_o *v101; // x23
  ServantEntity_o *servantEntity; // x0
  const MethodInfo *v103; // x1
  Il2CppObject *MasterData_object; // x24
  const MethodInfo *v105; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v107; // w0
  System_Int32_array *CommandCardList; // x0
  UnityEngine_Object_o *supportSprite; // x25
  System_String_o *v110; // x1
  UnityEngine_Object_o *v111; // x24
  UnityEngine_Object_o *v112; // x24
  QuestRestrictionInfo_o *questRestrictionInfo; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // kr20_16
  int32_t imageLimitCount; // w24
  int32_t v116; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // kr30_16
  int32_t v118; // w0
  int32_t svtLimitCount; // w25
  int32_t v120; // w26
  int32_t v121; // w26
  int32_t LimitCountByDispLimit; // w25
  const MethodInfo *v123; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // kr40_16
  int32_t v125; // w0
  int32_t v126; // w27
  int32_t v127; // w28
  ServantOverwriteStatus_o *v128; // x26
  int32_t Rarity_k__BackingField; // w25
  int32_t actualRarity; // w21
  ServantFaceIconComponent_o *v131; // x26
  int32_t v132; // w0
  int32_t v133; // w27
  int32_t v134; // w28
  const MethodInfo *v135; // x1
  UnityEngine_Object_o *v136; // x23
  bool v137; // w1
  struct UILabel_array *commandLabelList; // x8
  __int64 v139; // x26
  int32_t v140; // w21
  int max_length; // w9
  UILabel_o *v142; // x22
  UnityEngine_Object_o *memberTypeBaseSprite; // x21
  int32_t index; // w21
  System_String_o **v145; // x8
  UISprite_o *memberTypeSprite; // x21
  System_String_o *v147; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  const MethodInfo *v149; // x1
  UserServantEntity_o *v150; // x0
  __int64 *v151; // x8
  System_String_o *v152; // x1
  const MethodInfo *v153; // x5
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  PartyOrganizationConfirmItemDraw_o *v158; // x0
  System_String_o *v159; // x3
  int v160; // w24
  const MethodInfo *v161; // x1
  const MethodInfo *v162; // x5
  System_String_o *v163; // x0
  System_String_o *v164; // x1
  float v165; // s0
  float v166; // s1
  float v167; // s2
  float v168; // s3
  PartyOrganizationConfirmItemDraw_o *v169; // x0
  System_String_o *v170; // x3
  bool v171; // w4
  __int64 *v172; // x8
  System_String_o *v173; // x1
  const MethodInfo *v174; // x4
  float v175; // s0
  float v176; // s1
  PartyOrganizationConfirmItemDraw_o *v177; // x0
  bool v178; // w3
  int64_t fatigureTime; // x21
  System_String_o *v180; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  _DWORD *v182; // x8
  Il2CppObject *v183; // x21
  const MethodInfo *v184; // x1
  __int64 v185; // x22
  __int64 v186; // x23
  int32_t SvtClassId; // w21
  UserServantEntity_o *v188; // x0
  __int64 methodPtr_low; // x9
  __int64 v190; // x22
  int32_t v191; // w22
  int32_t v192; // w20
  struct ServantClassCompatibilityIconComponent_o *v193; // x8
  System_String_o *v194; // x21
  __int64 v195; // x2
  __int64 v196; // x3
  __int64 v197; // x4
  Il2CppObject *v198; // x0
  PartyOrganizationCommandCardMenu_o *v199; // x0
  const MethodInfo *v200; // x1
  bool v201; // [xsp+58h] [xbp-88h]
  int32_t TimesToRestart_k__BackingField; // [xsp+5Ch] [xbp-84h] BYREF
  UnityEngine_Color_o color; // [xsp+60h] [xbp-80h] BYREF
  int v204; // [xsp+74h] [xbp-6Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v206; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v207; // 0:x0.16

  if ( (byte_4A49FA7 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, item);
    sub_1B863B8(&BalanceConfig_TypeInfo, v15);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v16);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, v18);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v19);
    sub_1B863B8(&DataManager_TypeInfo, v20);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v22);
    sub_1B863B8(&int_TypeInfo, v23);
    sub_1B863B8(&LocalizationManager_TypeInfo, v24);
    sub_1B863B8(&NetworkManager_TypeInfo, v25);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v26);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    sub_1B863B8(&PartyOrganizationRootComponent_TypeInfo, v28);
    sub_1B863B8(&ServantOverwriteStatus_TypeInfo, v29);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v30);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_1B863B8(&string_TypeInfo, v32);
    sub_1B863B8(&UserServantEntity_TypeInfo, v33);
    sub_1B863B8(&StringLiteral_19980/*"icon_support_02"*/, v34);
    sub_1B863B8(&StringLiteral_15279/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, v35);
    sub_1B863B8(&StringLiteral_10114/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/, v36);
    sub_1B863B8(&StringLiteral_10117/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v37);
    sub_1B863B8(&StringLiteral_11341/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, v38);
    sub_1B863B8(&StringLiteral_11342/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v39);
    sub_1B863B8(&StringLiteral_11336/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v40);
    sub_1B863B8(&StringLiteral_20116/*"img_frames_mask11"*/, v41);
    sub_1B863B8(&StringLiteral_10113/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v42);
    sub_1B863B8(&StringLiteral_21209/*"member_txt_"*/, v43);
    sub_1B863B8(&StringLiteral_11335/*"SELECT_NO_SORTIE"*/, v44);
    sub_1B863B8(&StringLiteral_19979/*"icon_support_01"*/, v45);
    sub_1B863B8(&StringLiteral_19937/*"icon_eventjoin_02"*/, v46);
    sub_1B863B8(&StringLiteral_19370/*"formation_txtbg_03"*/, v47);
    sub_1B863B8(&StringLiteral_15277/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, v48);
    sub_1B863B8(&StringLiteral_19339/*"formation_blank_small"*/, v49);
    sub_1B863B8(&StringLiteral_20119/*"img_frames_mask14"*/, v50);
    sub_1B863B8(&StringLiteral_18249/*"datalost_svt_select"*/, v51);
    sub_1B863B8(&StringLiteral_406/*"#042484"*/, v52);
    sub_1B863B8(&StringLiteral_19367/*"formation_support_small"*/, v53);
    sub_1B863B8(&StringLiteral_19369/*"formation_txtbg_02"*/, v54);
    sub_1B863B8(&StringLiteral_1/*""*/, v55);
    sub_1B863B8(&StringLiteral_10115/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/, v56);
    sub_1B863B8(&StringLiteral_19940/*"icon_friend"*/, v57);
    sub_1B863B8(&StringLiteral_10116/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/, v58);
    sub_1B863B8(&StringLiteral_19939/*"icon_follow"*/, v59);
    byte_4A49FA7 = 1;
  }
  entity = 0LL;
  v204 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  if ( !item || !mode )
    return;
  maskServantObj = (UnityEngine_Object_o *)this->fields.maskServantObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskServantObj, 0LL, 0LL) )
  {
    lv = this->fields.maskServantObj;
    if ( !lv )
      goto LABEL_212;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
  }
  maskServantLabel = (UnityEngine_Object_o *)this->fields.maskServantLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskServantLabel, 0LL, 0LL) )
  {
    lv = this->fields.maskServantLabel;
    if ( !lv )
      goto LABEL_212;
    UILabel__set_text((UILabel_o *)lv, string_TypeInfo->static_fields->Empty, 0LL);
  }
  maskEquipObj = (UnityEngine_Object_o *)this->fields.maskEquipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskEquipObj, 0LL, 0LL) )
  {
    lv = this->fields.maskEquipObj;
    if ( !lv )
      goto LABEL_212;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
  }
  maskEquipLabel = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  lv = (void *)UnityEngine_Object__op_Inequality(maskEquipLabel, 0LL, 0LL);
  if ( ((unsigned __int8)lv & 1) != 0 )
  {
    lv = this->fields.maskEquipLabel;
    if ( !lv )
      goto LABEL_212;
    UILabel__set_text((UILabel_o *)lv, string_TypeInfo->static_fields->Empty, 0LL);
  }
  if ( item->fields.isFollower )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( item->fields.followerInfo )
    {
      lv = PartyOrganizationListViewItem__get_ServantLeader(item, (const MethodInfo *)v61);
      followerInfo = item->fields.followerInfo;
      if ( !followerInfo || !servantFaceIcon )
        goto LABEL_212;
      ServantFaceIconComponent__Set_39181528(
        servantFaceIcon,
        (ServantLeaderInfo_o *)lv,
        0LL,
        0LL,
        0,
        followerInfo->fields.imageSvtId,
        0LL);
      typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      lv = (void *)UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
      if ( ((unsigned __int8)lv & 1) != 0 )
      {
        v69 = item->fields.followerInfo;
        if ( !v69 )
          goto LABEL_212;
        type = v69->fields.type;
        if ( (unsigned int)(type - 3) < 2 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_212;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_212;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_212;
          v71 = &StringLiteral_19979/*"icon_support_01"*/;
          goto LABEL_134;
        }
        if ( type == 5 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_212;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_212;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_212;
          v71 = &StringLiteral_19939/*"icon_follow"*/;
          goto LABEL_134;
        }
        if ( type == 1 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_212;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_212;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_212;
          v71 = &StringLiteral_19940/*"icon_friend"*/;
LABEL_134:
          UISprite__set_spriteName((UISprite_o *)lv, (System_String_o *)*v71, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_212;
          (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
          goto LABEL_139;
        }
        lv = this->fields.typeSprite;
        if ( !lv )
          goto LABEL_212;
        lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
        if ( !lv )
          goto LABEL_212;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
      }
LABEL_139:
      CommandCardList = PartyOrganizationListViewItem__GetCommandCardList(item, (const MethodInfo *)v61);
      supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
      v94 = CommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
      {
        lv = this->fields.supportSprite;
        if ( !lv )
          goto LABEL_212;
        if ( item->fields.isFollower )
          v110 = (System_String_o *)StringLiteral_19980/*"icon_support_02"*/;
        else
          v110 = 0LL;
        UISprite__set_spriteName((UISprite_o *)lv, v110, 0LL);
      }
      if ( isSimpleDisp )
      {
        v111 = (UnityEngine_Object_o *)this->fields.typeSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v111, 0LL, 0LL) )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_212;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_212;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
        }
        v112 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v112, 0LL, 0LL) )
        {
          lv = this->fields.supportSprite;
          if ( !lv )
            goto LABEL_212;
          UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
        }
        lv = this->fields.servantFaceIcon;
        if ( !lv )
LABEL_212:
          sub_1B86614(lv, v61);
        ServantFaceIconComponent__ClearEquip((ServantFaceIconComponent_o *)lv, 0LL);
      }
LABEL_161:
      v100 = 0LL;
      if ( !isAdjustPosY )
        goto LABEL_193;
      goto LABEL_188;
    }
    if ( !servantFaceIcon )
      goto LABEL_212;
    ServantFaceIconComponent__Clear(this->fields.servantFaceIcon, 0LL);
    v97 = (UnityEngine_Object_o *)this->fields.typeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v97, 0LL, 0LL) )
    {
      lv = this->fields.typeSprite;
      if ( !lv )
        goto LABEL_212;
      lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
      if ( !lv )
        goto LABEL_212;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
    }
    v98 = UnityEngine_Object_TypeInfo;
    v99 = &StringLiteral_19367/*"formation_support_small"*/;
    goto LABEL_108;
  }
  v72 = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v72, 0LL, 0LL) )
  {
    lv = this->fields.typeSprite;
    if ( !lv )
      goto LABEL_212;
    lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
    if ( !lv )
      goto LABEL_212;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
  }
  userServantEntity = item->fields.userServantEntity;
  if ( userServantEntity )
  {
    v74 = this->fields.servantFaceIcon;
    lv = PartyOrganizationListViewItem__GetEquipList(item, (const MethodInfo *)v61);
    if ( !v74 )
      goto LABEL_212;
    ServantFaceIconComponent__Set(
      v74,
      userServantEntity,
      (System_Int64_array *)lv,
      item->fields.questRestrictionInfo,
      0LL,
      0LL,
      0LL);
    if ( item->fields._IsDisappearSvt_k__BackingField )
    {
      v76 = (UnityEngine_Object_o *)this->fields.maskServantObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
      {
        lv = this->fields.maskServantObj;
        if ( !lv )
          goto LABEL_212;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
      }
      v77 = (UnityEngine_Object_o *)this->fields.maskServantLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v77, 0LL, 0LL) )
      {
        v78 = this->fields.maskServantLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        lv = LocalizationManager__Get((System_String_o *)StringLiteral_15279/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0LL);
        if ( !v78 )
          goto LABEL_212;
        UILabel__set_text(v78, (System_String_o *)lv, 0LL);
      }
    }
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v79);
        byte_4A48C25 = 1;
      }
      v81 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v81 = NetworkManager_TypeInfo;
      }
      userIdNumber = v81->static_fields->userIdNumber;
      EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(item, v79);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(EquipSvtId, 0LL);
      if ( !Master_object )
        goto LABEL_212;
      if ( UserServantCollectionMaster__TryGetEntity(
             (UserServantCollectionMaster_o *)Master_object,
             &entity,
             userIdNumber,
             (int32_t)lv,
             0LL) )
      {
        v84 = this->fields.servantFaceIcon;
        v85 = entity;
        v86 = (UserServantEntity_o *)sub_1B86604(UserServantEntity_TypeInfo);
        UserServantEntity___ctor_41230020(v86, v85, 0LL);
        if ( !v84 )
          goto LABEL_212;
        ServantFaceIconComponent__SetEquip(v84, v86, 0LL);
        v87 = (UnityEngine_Object_o *)this->fields.maskEquipObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v87, 0LL, 0LL) )
        {
          lv = this->fields.maskEquipObj;
          if ( !lv )
            goto LABEL_212;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
        }
        maskEquipSprite = (UnityEngine_Object_o *)this->fields.maskEquipSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(maskEquipSprite, 0LL, 0LL) )
        {
          v89 = this->fields.maskEquipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(v89, (System_String_o *)StringLiteral_20119/*"img_frames_mask14"*/, 0LL);
        }
        v90 = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v90, 0LL, 0LL) )
        {
          v91 = this->fields.maskEquipLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          lv = LocalizationManager__Get((System_String_o *)StringLiteral_15277/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0LL);
          if ( !v91 )
            goto LABEL_212;
          UILabel__set_text(v91, (System_String_o *)lv, 0LL);
        }
      }
    }
    v92 = PartyOrganizationListViewItem__GetCommandCardList(item, v75);
    v93 = (UnityEngine_Object_o *)this->fields.supportSprite;
    v94 = v92;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v93, 0LL, 0LL) )
    {
      lv = item->fields.userServantEntity;
      if ( !lv )
        goto LABEL_212;
      lv = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)lv, 0LL);
      if ( !this->fields.supportSprite )
        goto LABEL_212;
      if ( ((unsigned __int8)lv & 1) != 0 )
      {
        v95 = this->fields.supportSprite;
        v96 = (System_String_o *)StringLiteral_19937/*"icon_eventjoin_02"*/;
      }
      else
      {
        v95 = this->fields.supportSprite;
        v96 = 0LL;
      }
      UISprite__set_spriteName(v95, v96, 0LL);
    }
    goto LABEL_161;
  }
  servantEntity = item->fields.servantEntity;
  if ( !servantEntity )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_212;
    ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)lv, 0LL);
    v98 = UnityEngine_Object_TypeInfo;
    v99 = &StringLiteral_19339/*"formation_blank_small"*/;
LABEL_108:
    v100 = (System_String_o *)*v99;
    v101 = (UnityEngine_Object_o *)this->fields.supportSprite;
    if ( !v98->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v98);
    if ( UnityEngine_Object__op_Inequality(v101, 0LL, 0LL) )
    {
      lv = this->fields.supportSprite;
      if ( !lv )
        goto LABEL_212;
      UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
    }
    goto LABEL_187;
  }
  if ( !item->fields.questRestrictionInfo )
    goto LABEL_168;
  if ( ServantEntity__checkIsHeroineSvt(servantEntity, 0LL) )
  {
    lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !lv )
      goto LABEL_212;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)lv,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(item, v105);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(SvtId, 0LL);
    if ( !MasterData_object )
      goto LABEL_212;
    lv = UserServantMaster__getHeroineData((UserServantMaster_o *)MasterData_object, (int32_t)lv, 0LL);
    if ( !item->fields.questRestrictionInfo )
      goto LABEL_212;
    v107 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41502848(
             item->fields.questRestrictionInfo,
             (UserServantEntity_o *)lv,
             0LL);
  }
  else
  {
    questRestrictionInfo = item->fields.questRestrictionInfo;
    v114 = PartyOrganizationListViewItem__get_SvtId(item, v103);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v114, 0LL);
    if ( !questRestrictionInfo )
      goto LABEL_212;
    v107 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount(questRestrictionInfo, (int32_t)lv, 0LL);
  }
  imageLimitCount = v107;
  v116 = v107;
  if ( (v107 & 0x80000000) != 0 )
  {
LABEL_168:
    imageLimitCount = item->fields.imageLimitCount;
    if ( (imageLimitCount & 0x80000000) != 0 )
    {
      v117 = PartyOrganizationListViewItem__get_SvtId(item, (const MethodInfo *)v61);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v117, 0LL);
      svtLimitCount = item->fields.svtLimitCount;
      v120 = v118;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v116 = ImageLimitCount__GetImageLimitCount(v120, svtLimitCount, 0LL);
    }
    else
    {
      v116 = item->fields.imageLimitCount;
    }
  }
  v201 = isRarityHide;
  v121 = item->fields.svtLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v116, v121, 0LL);
  v124 = PartyOrganizationListViewItem__get_SvtId(item, v123);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v125 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v124, 0LL);
  v126 = item->fields.svtLimitCount;
  v127 = v125;
  v128 = (ServantOverwriteStatus_o *)sub_1B86604(ServantOverwriteStatus_TypeInfo);
  ServantOverwriteStatus___ctor_32779780(v128, v127, v126, LimitCountByDispLimit, 0LL);
  if ( !v128 )
    goto LABEL_212;
  Rarity_k__BackingField = v128->fields._Rarity_k__BackingField;
  actualRarity = v128->fields._ActualRarity_k__BackingField;
  v131 = this->fields.servantFaceIcon;
  v206 = PartyOrganizationListViewItem__get_SvtId(item, (const MethodInfo *)v61);
  v132 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v206, 0LL);
  v133 = item->fields.svtLimitCount;
  v134 = v132;
  lv = (void *)PartyOrganizationListViewItem__get_Level(item, v135);
  if ( !v131 )
    goto LABEL_212;
  ServantFaceIconComponent__SetIcon(
    v131,
    v134,
    Rarity_k__BackingField,
    v133,
    imageLimitCount,
    0,
    0LL,
    0LL,
    2,
    0,
    0,
    0LL,
    1,
    (int32_t)lv,
    imageSvtId,
    0LL,
    actualRarity,
    0LL);
  v136 = (UnityEngine_Object_o *)this->fields.supportSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  isRarityHide = v201;
  if ( UnityEngine_Object__op_Inequality(v136, 0LL, 0LL) )
  {
    lv = this->fields.supportSprite;
    if ( !lv )
      goto LABEL_212;
    UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
  }
  v100 = 0LL;
LABEL_187:
  v94 = 0LL;
  if ( !isAdjustPosY )
    goto LABEL_193;
LABEL_188:
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_212;
  if ( !ServantFaceIconComponent__IsUseEquip((ServantFaceIconComponent_o *)lv, 0LL) )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_212;
    ServantFaceIconComponent__AdjustRaritySpritePosY((ServantFaceIconComponent_o *)lv, -55.0, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_212;
    ServantFaceIconComponent__AdjustDispLimitCountSpritePosY((ServantFaceIconComponent_o *)lv, -34.0, 0LL);
  }
LABEL_193:
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_212;
  ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)lv, !isRarityHide, 0LL);
  if ( item->fields._IsNotSupportSingle_k__BackingField || !item->fields._IsDataLost_k__BackingField )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_212;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 1, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_212;
    v137 = 1;
  }
  else
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_212;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 0, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_212;
    v137 = 0;
  }
  ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)lv, v137, 0LL);
  commandLabelList = this->fields.commandLabelList;
  if ( !commandLabelList )
    goto LABEL_212;
  v139 = 0LL;
  v140 = (_DWORD)v94 + 32;
  while ( 1 )
  {
    max_length = commandLabelList->max_length;
    if ( (int)v139 >= max_length )
      break;
    if ( (unsigned int)v139 >= max_length )
      goto LABEL_328;
    v142 = commandLabelList->m_Items[v139];
    if ( v94 )
    {
      if ( (unsigned int)v139 >= v94->max_length )
LABEL_328:
        sub_1B8661C(lv, v61);
      lv = System_Int32__ToString(v140, 0LL);
      v61 = (PartyOrganizationRootComponent_c *)lv;
      if ( !v142 )
        goto LABEL_212;
    }
    else
    {
      v61 = (PartyOrganizationRootComponent_c *)StringLiteral_1/*""*/;
      if ( !v142 )
        goto LABEL_212;
    }
    UILabel__set_text(v142, (System_String_o *)v61, 0LL);
    commandLabelList = this->fields.commandLabelList;
    ++v139;
    v140 += 4;
    if ( !commandLabelList )
      goto LABEL_212;
  }
  lv = this->fields.baseSprite;
  if ( !lv )
    goto LABEL_212;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 0, 0LL);
  if ( v100 )
  {
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_212;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 1, 0LL);
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_212;
    UISprite__set_spriteName((UISprite_o *)lv, v100, 0LL);
  }
  memberTypeBaseSprite = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(memberTypeBaseSprite, 0LL, 0LL) )
  {
    index = item->fields.index;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    lv = this->fields.memberTypeBaseSprite;
    if ( !lv )
      goto LABEL_212;
    v145 = (System_String_o **)(index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax
                              ? &StringLiteral_19370/*"formation_txtbg_03"*/
                              : &StringLiteral_19369/*"formation_txtbg_02"*/);
    UISprite__set_spriteName((UISprite_o *)lv, *v145, 0LL);
    memberTypeSprite = this->fields.memberTypeSprite;
    v204 = item->fields.index + 1;
    v147 = System_Int32__ToString((int32_t)&v204, 0LL);
    lv = System_String__Concat_61645176((System_String_o *)StringLiteral_21209/*"member_txt_"*/, v147, 0LL);
    if ( !memberTypeSprite )
      goto LABEL_212;
    UISprite__set_spriteName(memberTypeSprite, (System_String_o *)lv, 0LL);
    lv = this->fields.memberTypeSprite;
    if ( !lv )
      goto LABEL_212;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    v150 = item->fields.userServantEntity;
    if ( v150 && UserServantEntity__IsLeave(v150, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v151 = &StringLiteral_11335/*"SELECT_NO_SORTIE"*/;
LABEL_238:
      v152 = LocalizationManager__Get((System_String_o *)*v151, 0LL);
      r = 0.0;
      g = 0.0;
      b = 0.0;
      a = 1.0;
      v158 = this;
      v159 = 0LL;
LABEL_239:
      PartyOrganizationConfirmItemDraw__SetMaskMessage(v158, v152, *(UnityEngine_Color_o *)&r, 0, v159, 0, v153);
      v160 = 1;
      goto LABEL_277;
    }
    if ( PartyOrganizationListViewItem__get_IsQuestRestriction(item, v149)
      && (item->fields.userServantEntity || item->fields.isFollower) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v163 = LocalizationManager__Get((System_String_o *)StringLiteral_10113/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
LABEL_246:
      v164 = v163;
      v165 = 0.0;
      v166 = 0.0;
      v167 = 0.0;
      v168 = 1.0;
      v169 = this;
      v170 = 0LL;
      v171 = 0;
LABEL_247:
      v160 = 1;
      PartyOrganizationConfirmItemDraw__SetMaskMessage(v169, v164, *(UnityEngine_Color_o *)&v165, 1, v170, v171, v162);
      goto LABEL_277;
    }
    if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v172 = &StringLiteral_10114/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_253:
      v173 = LocalizationManager__Get((System_String_o *)*v172, 0LL);
      v175 = 0.0;
      v176 = 0.0;
      v177 = this;
      v178 = 0;
LABEL_254:
      v160 = 1;
      PartyOrganizationConfirmItemDraw__SetWarningMessage(v177, v173, 1, v178, v175, v176, v174);
      goto LABEL_277;
    }
    if ( item->fields.isFixedSupportPositionRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v172 = &StringLiteral_10115/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/;
      goto LABEL_253;
    }
    if ( item->fields.isFixedServantPositionRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v172 = &StringLiteral_10116/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/;
      goto LABEL_253;
    }
    fatigureTime = item->fields.fatigureTime;
    if ( (fatigureTime & 0x8000000000000000LL) != 0 )
    {
      if ( item->fields._IsAllOutBattle_k__BackingField )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v151 = &StringLiteral_11336/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
        goto LABEL_238;
      }
      if ( item->fields._IsNotSupportSingle_k__BackingField )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v173 = LocalizationManager__Get((System_String_o *)StringLiteral_10117/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
        v175 = 10.0;
        v176 = -22.0;
        v178 = 1;
        v177 = this;
        goto LABEL_254;
      }
      if ( item->fields._IsDataLost_k__BackingField )
      {
        v164 = (System_String_o *)StringLiteral_1/*""*/;
        v165 = 1.0;
        v166 = 1.0;
        v167 = 1.0;
        v170 = (System_String_o *)StringLiteral_18249/*"datalost_svt_select"*/;
        v168 = 1.0;
        v171 = 1;
        v169 = this;
        goto LABEL_247;
      }
      if ( item->fields._TimesToRestart_k__BackingField >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v194 = LocalizationManager__Get((System_String_o *)StringLiteral_11342/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
        TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
        v198 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v195, v196, v197);
        v163 = System_String__Format(v194, v198, 0LL);
        goto LABEL_246;
      }
    }
    else
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( fatigureTime > NetworkManager__getTime(0LL) )
      {
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_406/*"#042484"*/, &color, 0LL);
        color.fields.a = 0.69804;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v180 = LocalizationManager__Get((System_String_o *)StringLiteral_11341/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, 0LL);
        r = color.fields.r;
        g = color.fields.g;
        b = color.fields.b;
        a = color.fields.a;
        v152 = v180;
        v158 = this;
        v159 = (System_String_o *)StringLiteral_20116/*"img_frames_mask11"*/;
        goto LABEL_239;
      }
      item->fields.fatigureTime = -1LL;
    }
    PartyOrganizationConfirmItemDraw__ClearMessage(this, v161);
  }
  v160 = 0;
LABEL_277:
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
    return;
  if ( !item->fields.isFollower )
  {
    v188 = item->fields.userServantEntity;
    if ( v188 )
    {
      SvtClassId = UserServantEntity__getSvtClassId(v188, 0, 0LL);
    }
    else
    {
      v182 = item->fields.servantEntity;
      if ( !v182 )
        goto LABEL_295;
      SvtClassId = v182[20];
    }
    LODWORD(v182) = 0;
    goto LABEL_296;
  }
  v182 = item->fields.followerInfo;
  if ( !v182 )
  {
LABEL_295:
    SvtClassId = 0;
    goto LABEL_296;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_212;
  v183 = DataManager__GetMasterData_object_(
           (DataManager_o *)lv,
           (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, v184);
  if ( !lv )
    goto LABEL_212;
  v186 = *((_QWORD *)lv + 6);
  v185 = *((_QWORD *)lv + 7);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v207.fields.currentCryptoKey = v186;
  *(_QWORD *)&v207.fields.fakeValue = v185;
  lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v207, 0LL);
  if ( !v183 )
    goto LABEL_212;
  lv = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v183,
         (int32_t)lv,
         (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !lv )
    goto LABEL_212;
  SvtClassId = *((_DWORD *)lv + 20);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, (const MethodInfo *)v61);
  if ( !lv )
    goto LABEL_212;
  LODWORD(v182) = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)lv, 0LL);
LABEL_296:
  if ( (unsigned int)v182 | v160 | (SvtClassId == 0) )
  {
    lv = this->fields.classCompatibilityIcon;
    if ( !lv )
      goto LABEL_212;
    goto LABEL_316;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_212;
  lv = (void *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)lv, 40, 0LL);
  if ( ((unsigned __int8)lv & 1) == 0 )
    goto LABEL_313;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_212;
  lv = (void *)*((_QWORD *)lv + 4);
  if ( !lv )
    goto LABEL_212;
  v61 = PartyOrganizationRootComponent_TypeInfo;
  methodPtr_low = LOBYTE(PartyOrganizationRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)lv + 304LL) < (unsigned int)methodPtr_low
    || *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)lv + 200LL) + 8 * methodPtr_low - 8) != PartyOrganizationRootComponent_TypeInfo )
  {
    v199 = (PartyOrganizationCommandCardMenu_o *)sub_1B868D4(lv);
    PartyOrganizationCommandCardMenu__EndOpen(v199, v200);
    return;
  }
  v190 = *((_QWORD *)lv + 62);
  if ( !v190
    || (lv = (void *)BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)lv + 62), 0LL), !(_DWORD)lv)
    || (v191 = *(_DWORD *)(v190 + 24)) == 0 )
  {
LABEL_313:
    v193 = this->fields.classCompatibilityIcon;
    goto LABEL_314;
  }
  v192 = (int)lv;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_212;
  lv = DataManager__GetMasterData_object_(
         (DataManager_o *)lv,
         (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !lv )
    goto LABEL_212;
  lv = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)lv, v192, v191, 0LL);
  v193 = this->fields.classCompatibilityIcon;
  if ( !lv )
  {
LABEL_314:
    if ( !v193 )
      goto LABEL_212;
    lv = v193;
LABEL_316:
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)lv, 0LL);
    return;
  }
  if ( !v193 )
    goto LABEL_212;
  ServantClassCompatibilityIconComponent__SetIcon(
    this->fields.classCompatibilityIcon,
    SvtClassId,
    *((System_Int32_array **)lv + 6),
    1,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmItemDraw__SetMaskMessage(
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x24
  __int64 v22; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v24; // x24
  UIWidget_o *v25; // x22
  int32_t *p_DATA_LOST_MASK_HEIGHT; // x8
  System_String_o *v27; // x1
  float v28; // s0
  float v29; // s8
  UnityEngine_Transform_o *v30; // x20
  float restrictionMaskMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v35; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = maskColor.fields.a;
  b = maskColor.fields.b;
  g = maskColor.fields.g;
  r = maskColor.fields.r;
  if ( (byte_4A49FA9 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, message);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B863B8(&PartyOrganizationConfirmItemDraw_TypeInfo, v17);
    sub_1B863B8(&StringLiteral_18249/*"datalost_svt_select"*/, v18);
    sub_1B863B8(&StringLiteral_20112/*"img_frames_mask03"*/, v19);
    sub_1B863B8(&StringLiteral_1/*""*/, v20);
    byte_4A49FA9 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_46;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v24 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(v24, (System_String_o *)StringLiteral_18249/*"datalost_svt_select"*/, 0LL);
      v25 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)PartyOrganizationConfirmItemDraw_TypeInfo;
      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
      if ( !v25 )
        goto LABEL_46;
      p_DATA_LOST_MASK_HEIGHT = &PartyOrganizationConfirmItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT;
    }
    else
    {
      if ( !v24 )
        goto LABEL_46;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_46;
      v27 = maskName ? maskName : (System_String_o *)StringLiteral_20112/*"img_frames_mask03"*/;
      UISprite__set_spriteName((UISprite_o *)gameObject, v27, 0LL);
      v25 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( !v25 )
        goto LABEL_46;
      p_DATA_LOST_MASK_HEIGHT = &this->fields.maskSpriteDefaultHeight;
    }
    UIWidget__set_height(v25, *p_DATA_LOST_MASK_HEIGHT, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_46;
    v38.fields.r = r;
    v38.fields.g = g;
    v38.fields.b = b;
    v38.fields.a = a;
    UIWidget__set_color((UIWidget_o *)gameObject, v38, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_46;
    if ( isScale )
    {
      LODWORD(v28) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_46;
      v29 = v28;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v30 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v29 <= restrictionMaskMessageWidth )
      {
        if ( !byte_4A487E6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v22);
          byte_4A487E6 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        x = static_fields->oneVector.fields.x;
        y = static_fields->oneVector.fields.y;
        z = static_fields->oneVector.fields.z;
      }
      else
      {
        x = restrictionMaskMessageWidth / v29;
        z = 1.0;
        y = 1.0;
      }
      if ( !v30 )
        goto LABEL_46;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v30 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4A487E6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v22);
        byte_4A487E6 = 1;
      }
      if ( !v30 )
        goto LABEL_46;
      v35 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v35->oneVector.fields.y;
      z = v35->oneVector.fields.z;
      x = v35->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v30, *(UnityEngine_Vector3_o *)&x, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
LABEL_46:
    sub_1B86614(gameObject, v22);
  }
}


void __fastcall PartyOrganizationConfirmItemDraw__SetPartyIcon(
        System_Collections_Generic_List_PartyOrganizationListViewItem__o *itemList,
        PartyOrganizationConfirmItemDraw_array *supportMemberObjectList,
        UnityEngine_GameObject_o *supportMemberBase,
        bool isAdjustPosY,
        bool isSimpleDisp,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v10; // x28
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x22
  int32_t size; // w21
  il2cpp_array_size_t v19; // w23
  bool v20; // w26
  il2cpp_array_size_t v21; // w24
  Il2CppClass **v22; // x19
  PartyOrganizationConfirmItemDraw_o **v23; // x19
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v24; // t1
  _DWORD *monitor; // x8
  int32_t v26; // w25
  _DWORD *v27; // x8
  Il2CppObject *Master_object; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  bool IsHideRarity; // w27
  int32_t v31; // w25
  PartyOrganizationConfirmItemDraw_o *v32; // x26
  const MethodInfo *v33; // x7
  PartyOrganizationConfirmItemDraw_c *v35; // x0
  UnityEngine_GameObject_o *self; // [xsp+8h] [xbp-88h]
  __int64 v37; // [xsp+10h] [xbp-80h]
  bool v38; // [xsp+1Ch] [xbp-74h]
  bool v39; // [xsp+20h] [xbp-70h]
  int32_t questPhase; // [xsp+24h] [xbp-6Ch]
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+28h] [xbp-68h] BYREF

  v10 = (System_Collections_Generic_List_object__o *)itemList;
  if ( (byte_4A49FAB & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_NpcFollowerMaster___, supportMemberObjectList);
    sub_1B863B8(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v11);
    sub_1B863B8(&DataManager_TypeInfo, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Count__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__, v14);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)sub_1B863B8(
                                                                                     &PartyOrganizationConfirmItemDraw_TypeInfo,
                                                                                     v16);
    byte_4A49FAB = 1;
  }
  npcServantFollowerEntity = 0LL;
  if ( !v10 )
    goto LABEL_44;
  self = supportMemberBase;
  if ( !supportMemberObjectList )
    goto LABEL_44;
  v17 = *(_QWORD *)&supportMemberObjectList->max_length;
  size = v10->fields._size;
  if ( (int)v17 >= 1 )
  {
    v19 = 1;
    v20 = size > 0;
    v38 = isSimpleDisp;
    v39 = isAdjustPosY;
    v37 = *(_QWORD *)&supportMemberObjectList->max_length;
    while ( 1 )
    {
      v21 = v19 - 1;
      v22 = &supportMemberObjectList->obj.klass + (int)(v19 - 1);
      v24 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v22[4];
      v23 = (PartyOrganizationConfirmItemDraw_o **)(v22 + 4);
      itemList = v24;
      if ( !v24 )
        break;
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)itemList,
                                                                                       0LL);
      if ( !itemList )
        break;
      if ( v20 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 1, 0LL);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v21,
                                                                                         (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          break;
        if ( itemList[4].monitor )
        {
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                           v10,
                                                                                           v21,
                                                                                           (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
          if ( !itemList )
            break;
          monitor = itemList[4].monitor;
          if ( !monitor )
            break;
          v26 = monitor[9];
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                           v10,
                                                                                           v21,
                                                                                           (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
          if ( !itemList )
            break;
          v27 = itemList[4].monitor;
          if ( !v27 )
            break;
          questPhase = v27[10];
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                           v10,
                                                                                           v21,
                                                                                           (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
          if ( !itemList )
            break;
          SvtId = PartyOrganizationListViewItem__get_SvtId(
                    (PartyOrganizationListViewItem_o *)itemList,
                    (const MethodInfo *)supportMemberObjectList);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                                                           SvtId,
                                                                                           0LL);
          if ( !Master_object )
            break;
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                                                           (NpcServantFollowerMaster_o *)Master_object,
                                                                                           &npcServantFollowerEntity,
                                                                                           v26,
                                                                                           questPhase,
                                                                                           (int32_t)itemList,
                                                                                           0LL);
          if ( ((unsigned __int8)itemList & 1) != 0 )
          {
            LODWORD(v17) = v37;
            if ( !npcServantFollowerEntity )
              break;
            IsHideRarity = NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0LL);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
            if ( !npcServantFollowerEntity || !itemList )
              break;
            itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerMaster__GetEntity_40430760(
                                                                                             (NpcFollowerMaster_o *)itemList,
                                                                                             v26,
                                                                                             questPhase,
                                                                                             npcServantFollowerEntity->fields.id,
                                                                                             0LL);
            if ( itemList )
            {
              itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerEntity__GetImageSvtId(
                                                                                               (NpcFollowerEntity_o *)itemList,
                                                                                               0LL);
              v31 = (int)itemList;
            }
            else
            {
              v31 = 0;
            }
          }
          else
          {
            LODWORD(v17) = v37;
            v31 = 0;
            IsHideRarity = 0;
          }
        }
        else
        {
          v31 = 0;
          IsHideRarity = 0;
        }
        if ( v21 >= supportMemberObjectList->max_length )
          goto LABEL_40;
        v32 = *v23;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v21,
                                                                                         (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !v32 )
          break;
        PartyOrganizationConfirmItemDraw__SetItem(
          v32,
          (PartyOrganizationListViewItem_o *)itemList,
          2,
          v39,
          IsHideRarity,
          v31,
          v38,
          v33);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
      }
      if ( (_DWORD)v17 == v19 )
        goto LABEL_41;
      v20 = (int)v19 < size;
      if ( v19++ >= supportMemberObjectList->max_length )
LABEL_40:
        sub_1B8661C(itemList, supportMemberObjectList);
    }
LABEL_44:
    sub_1B86614(itemList, supportMemberObjectList);
  }
LABEL_41:
  v35 = PartyOrganizationConfirmItemDraw_TypeInfo;
  if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
    v35 = PartyOrganizationConfirmItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(self, (float)(v35->static_fields->ICON_OFFSET_SIZE * (1 - size)), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmItemDraw__SetWarningMessage(
        PartyOrganizationConfirmItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        bool isMask,
        float iconPosY,
        float msgPosY,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  __int64 v16; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  float v21; // s0
  float v22; // s8
  int32_t restrictionWarningMessageWidth; // s0
  UnityEngine_Transform_o *v24; // x19
  float v25; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v29; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A49FAA & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, message);
    sub_1B863B8(&StringLiteral_20112/*"img_frames_mask03"*/, v13);
    sub_1B863B8(&StringLiteral_1/*""*/, v14);
    byte_4A49FAA = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_39;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isMask, 0LL);
    if ( isMask )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_39;
      UISprite__set_atlas((UISprite_o *)gameObject, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_39;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20112/*"img_frames_mask03"*/, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_39;
      v31.fields.r = 0.0;
      v31.fields.g = 0.0;
      v31.fields.b = 0.0;
      v31.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, v31, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_39;
      UIWidget__set_height((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultHeight, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_39;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
        if ( gameObject )
        {
          v19 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v19, iconPosY, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
          if ( gameObject )
          {
            v20 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
            GameObjectExtensions__SetLocalPositionY(v20, msgPosY, 0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
              gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
              if ( gameObject )
              {
                if ( isScale )
                {
                  LODWORD(v21) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
                  gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
                  if ( gameObject )
                  {
                    v22 = v21;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                    restrictionWarningMessageWidth = this->fields.restrictionWarningMessageWidth;
                    v24 = (UnityEngine_Transform_o *)gameObject;
                    v25 = (float)restrictionWarningMessageWidth;
                    if ( v22 <= v25 )
                    {
                      if ( !byte_4A487E6 )
                      {
                        gameObject = (UnityEngine_Component_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v16);
                        byte_4A487E6 = 1;
                      }
                      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                      x = static_fields->oneVector.fields.x;
                      y = static_fields->oneVector.fields.y;
                      z = static_fields->oneVector.fields.z;
                    }
                    else
                    {
                      x = v25 / v22;
                      z = 1.0;
                      y = 1.0;
                    }
                    if ( v24 )
                      goto LABEL_38;
                  }
                }
                else
                {
                  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                  v24 = (UnityEngine_Transform_o *)gameObject;
                  if ( !byte_4A487E6 )
                  {
                    gameObject = (UnityEngine_Component_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v16);
                    byte_4A487E6 = 1;
                  }
                  if ( v24 )
                  {
                    v29 = UnityEngine_Vector3_TypeInfo->static_fields;
                    y = v29->oneVector.fields.y;
                    z = v29->oneVector.fields.z;
                    x = v29->oneVector.fields.x;
LABEL_38:
                    UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)&x, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_39:
    sub_1B86614(gameObject, v16);
  }
}