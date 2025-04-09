void __fastcall PartyOrganizationConfirmItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49B6A38 & 1) == 0 )
  {
    sub_1B4CF90(&PartyOrganizationConfirmItemDraw_TypeInfo, v1);
    byte_49B6A38 = 1;
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

  if ( (byte_49B6A32 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B6A32 = 1;
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
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.maskSpriteDefaultAtlas, (int32_t)mAtlas, v6, v7);
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
    sub_1B4D1EC(restrictionMaskMessageText, v4);
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

  if ( (byte_49B6A34 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_1/*""*/, v3);
    byte_49B6A34 = 1;
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
    sub_1B4D1EC(gameObject, v5);
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
  UnityEngine_Object_o *maskServantObj; // x25
  PartyOrganizationRootComponent_c *v59; // x1
  void *lv; // x0
  UnityEngine_Object_o *maskServantLabel; // x25
  UnityEngine_Object_o *maskEquipObj; // x25
  UnityEngine_Object_o *maskEquipLabel; // x25
  ServantFaceIconComponent_o *servantFaceIcon; // x24
  struct FollowerInfo_o *followerInfo; // x8
  UnityEngine_Object_o *typeSprite; // x24
  struct FollowerInfo_o *v67; // x8
  int32_t type; // w8
  __int64 *v69; // x8
  UnityEngine_Object_o *v70; // x23
  UserServantEntity_o *userServantEntity; // x23
  ServantFaceIconComponent_o *v72; // x24
  UnityEngine_Object_o *v73; // x23
  UnityEngine_Object_o *v74; // x23
  UILabel_o *v75; // x23
  __int64 v76; // x1
  Il2CppObject *Master_object; // x23
  NetworkManager_c *v78; // x0
  int64_t userIdNumber; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  ServantFaceIconComponent_o *v81; // x23
  UserServantCollectionEntity_o *v82; // x25
  UserServantEntity_o *v83; // x24
  UnityEngine_Object_o *v84; // x23
  UnityEngine_Object_o *maskEquipSprite; // x23
  UISprite_o *v86; // x23
  UnityEngine_Object_o *v87; // x23
  UILabel_o *v88; // x23
  System_Int32_array *v89; // x0
  UnityEngine_Object_o *v90; // x23
  System_Int32_array *v91; // x24
  UISprite_o *v92; // x0
  System_String_o *v93; // x1
  UnityEngine_Object_o *v94; // x23
  UnityEngine_Object_c *v95; // x0
  __int64 *v96; // x8
  System_String_o *v97; // x23
  UnityEngine_Object_o *v98; // x24
  ServantEntity_o *servantEntity; // x0
  Il2CppObject *MasterData_object; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v102; // w0
  System_Int32_array *CommandCardList; // x0
  UnityEngine_Object_o *supportSprite; // x25
  System_String_o *v105; // x1
  UnityEngine_Object_o *v106; // x23
  UnityEngine_Object_o *v107; // x23
  int32_t v108; // w23
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // kr20_16
  ServantFaceIconComponent_o *v111; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // kr30_16
  int32_t v113; // w0
  int32_t svtLimitCount; // w26
  int32_t v115; // w27
  UnityEngine_Object_o *v116; // x23
  bool v117; // w1
  struct UILabel_array *commandLabelList; // x8
  __int64 v119; // x26
  int32_t v120; // w21
  int max_length; // w9
  UILabel_o *v122; // x22
  UnityEngine_Object_o *memberTypeBaseSprite; // x21
  int32_t index; // w21
  System_String_o **v125; // x8
  UISprite_o *memberTypeSprite; // x21
  System_String_o *v127; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  __int64 *v129; // x8
  System_String_o *v130; // x1
  const MethodInfo *v131; // x5
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  PartyOrganizationConfirmItemDraw_o *v136; // x0
  System_String_o *v137; // x3
  int v138; // w24
  const MethodInfo *v139; // x1
  const MethodInfo *v140; // x5
  __int64 *v141; // x8
  System_String_o *v142; // x1
  const MethodInfo *v143; // x4
  float v144; // s0
  float v145; // s1
  PartyOrganizationConfirmItemDraw_o *v146; // x0
  bool v147; // w3
  System_String_o *v148; // x0
  System_String_o *v149; // x1
  float v150; // s0
  float v151; // s1
  float v152; // s2
  float v153; // s3
  PartyOrganizationConfirmItemDraw_o *v154; // x0
  System_String_o *v155; // x3
  bool v156; // w4
  int64_t fatigureTime; // x21
  System_String_o *v158; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  _DWORD *v160; // x8
  Il2CppObject *v161; // x21
  __int64 v162; // x22
  __int64 v163; // x23
  int32_t SvtClassId; // w21
  UserServantEntity_o *v165; // x0
  __int64 methodPtr_low; // x9
  __int64 v167; // x22
  int32_t v168; // w22
  int32_t v169; // w20
  struct ServantClassCompatibilityIconComponent_o *v170; // x8
  System_String_o *v171; // x21
  __int64 v172; // x2
  __int64 v173; // x3
  __int64 v174; // x4
  Il2CppObject *v175; // x0
  PartyOrganizationCommandCardMenu_o *v176; // x0
  const MethodInfo *v177; // x1
  int32_t TimesToRestart_k__BackingField; // [xsp+54h] [xbp-7Ch] BYREF
  UnityEngine_Color_o color; // [xsp+58h] [xbp-78h] BYREF
  int v180; // [xsp+6Ch] [xbp-64h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v182; // 0:x0.16

  if ( (byte_49B6A33 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, item);
    sub_1B4CF90(&BalanceConfig_TypeInfo, v15);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v16);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantMaster___, v18);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v19);
    sub_1B4CF90(&DataManager_TypeInfo, v20);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B4CF90(&int_TypeInfo, v22);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v23);
    sub_1B4CF90(&NetworkManager_TypeInfo, v24);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v25);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_1B4CF90(&PartyOrganizationRootComponent_TypeInfo, v27);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v28);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1B4CF90(&string_TypeInfo, v30);
    sub_1B4CF90(&UserServantEntity_TypeInfo, v31);
    sub_1B4CF90(&StringLiteral_19891/*"icon_support_02"*/, v32);
    sub_1B4CF90(&StringLiteral_15206/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, v33);
    sub_1B4CF90(&StringLiteral_10059/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/, v34);
    sub_1B4CF90(&StringLiteral_10062/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v35);
    sub_1B4CF90(&StringLiteral_11281/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, v36);
    sub_1B4CF90(&StringLiteral_11282/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v37);
    sub_1B4CF90(&StringLiteral_11276/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v38);
    sub_1B4CF90(&StringLiteral_20017/*"img_frames_mask11"*/, v39);
    sub_1B4CF90(&StringLiteral_10058/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v40);
    sub_1B4CF90(&StringLiteral_21098/*"member_txt_"*/, v41);
    sub_1B4CF90(&StringLiteral_11275/*"SELECT_NO_SORTIE"*/, v42);
    sub_1B4CF90(&StringLiteral_19890/*"icon_support_01"*/, v43);
    sub_1B4CF90(&StringLiteral_19848/*"icon_eventjoin_02"*/, v44);
    sub_1B4CF90(&StringLiteral_19283/*"formation_txtbg_03"*/, v45);
    sub_1B4CF90(&StringLiteral_15204/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, v46);
    sub_1B4CF90(&StringLiteral_19252/*"formation_blank_small"*/, v47);
    sub_1B4CF90(&StringLiteral_20020/*"img_frames_mask14"*/, v48);
    sub_1B4CF90(&StringLiteral_18168/*"datalost_svt_select"*/, v49);
    sub_1B4CF90(&StringLiteral_406/*"#042484"*/, v50);
    sub_1B4CF90(&StringLiteral_19280/*"formation_support_small"*/, v51);
    sub_1B4CF90(&StringLiteral_19282/*"formation_txtbg_02"*/, v52);
    sub_1B4CF90(&StringLiteral_1/*""*/, v53);
    sub_1B4CF90(&StringLiteral_10060/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/, v54);
    sub_1B4CF90(&StringLiteral_19851/*"icon_friend"*/, v55);
    sub_1B4CF90(&StringLiteral_10061/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/, v56);
    sub_1B4CF90(&StringLiteral_19850/*"icon_follow"*/, v57);
    byte_49B6A33 = 1;
  }
  entity = 0LL;
  v180 = 0;
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
      goto LABEL_203;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
  }
  maskServantLabel = (UnityEngine_Object_o *)this->fields.maskServantLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskServantLabel, 0LL, 0LL) )
  {
    lv = this->fields.maskServantLabel;
    if ( !lv )
      goto LABEL_203;
    UILabel__set_text((UILabel_o *)lv, string_TypeInfo->static_fields->Empty, 0LL);
  }
  maskEquipObj = (UnityEngine_Object_o *)this->fields.maskEquipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskEquipObj, 0LL, 0LL) )
  {
    lv = this->fields.maskEquipObj;
    if ( !lv )
      goto LABEL_203;
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
      goto LABEL_203;
    UILabel__set_text((UILabel_o *)lv, string_TypeInfo->static_fields->Empty, 0LL);
  }
  if ( item->fields.isFollower )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( item->fields.followerInfo )
    {
      lv = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
      followerInfo = item->fields.followerInfo;
      if ( !followerInfo || !servantFaceIcon )
        goto LABEL_203;
      ServantFaceIconComponent__Set_38764344(
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
        v67 = item->fields.followerInfo;
        if ( !v67 )
          goto LABEL_203;
        type = v67->fields.type;
        if ( (unsigned int)(type - 3) < 2 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_203;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_203;
          v69 = &StringLiteral_19890/*"icon_support_01"*/;
          goto LABEL_134;
        }
        if ( type == 5 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_203;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_203;
          v69 = &StringLiteral_19850/*"icon_follow"*/;
          goto LABEL_134;
        }
        if ( type == 1 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_203;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_203;
          v69 = &StringLiteral_19851/*"icon_friend"*/;
LABEL_134:
          UISprite__set_spriteName((UISprite_o *)lv, (System_String_o *)*v69, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_203;
          (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
          goto LABEL_139;
        }
        lv = this->fields.typeSprite;
        if ( !lv )
          goto LABEL_203;
        lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
        if ( !lv )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
      }
LABEL_139:
      CommandCardList = PartyOrganizationListViewItem__GetCommandCardList(item, 0LL);
      supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
      v91 = CommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
      {
        lv = this->fields.supportSprite;
        if ( !lv )
          goto LABEL_203;
        if ( item->fields.isFollower )
          v105 = (System_String_o *)StringLiteral_19891/*"icon_support_02"*/;
        else
          v105 = 0LL;
        UISprite__set_spriteName((UISprite_o *)lv, v105, 0LL);
      }
      if ( isSimpleDisp )
      {
        v106 = (UnityEngine_Object_o *)this->fields.typeSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v106, 0LL, 0LL) )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_203;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
        }
        v107 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v107, 0LL, 0LL) )
        {
          lv = this->fields.supportSprite;
          if ( !lv )
            goto LABEL_203;
          UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
        }
        lv = this->fields.servantFaceIcon;
        if ( !lv )
LABEL_203:
          sub_1B4D1EC(lv, v59);
        ServantFaceIconComponent__ClearEquip((ServantFaceIconComponent_o *)lv, 0LL);
      }
LABEL_161:
      v97 = 0LL;
      if ( !isAdjustPosY )
        goto LABEL_184;
      goto LABEL_179;
    }
    if ( !servantFaceIcon )
      goto LABEL_203;
    ServantFaceIconComponent__Clear(this->fields.servantFaceIcon, 0LL);
    v94 = (UnityEngine_Object_o *)this->fields.typeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v94, 0LL, 0LL) )
    {
      lv = this->fields.typeSprite;
      if ( !lv )
        goto LABEL_203;
      lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
      if ( !lv )
        goto LABEL_203;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
    }
    v95 = UnityEngine_Object_TypeInfo;
    v96 = &StringLiteral_19280/*"formation_support_small"*/;
    goto LABEL_108;
  }
  v70 = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v70, 0LL, 0LL) )
  {
    lv = this->fields.typeSprite;
    if ( !lv )
      goto LABEL_203;
    lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
    if ( !lv )
      goto LABEL_203;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
  }
  userServantEntity = item->fields.userServantEntity;
  if ( userServantEntity )
  {
    v72 = this->fields.servantFaceIcon;
    lv = PartyOrganizationListViewItem__GetEquipList(item, 0LL);
    if ( !v72 )
      goto LABEL_203;
    ServantFaceIconComponent__Set(
      v72,
      userServantEntity,
      (System_Int64_array *)lv,
      item->fields.questRestrictionInfo,
      0LL,
      0LL,
      0LL);
    if ( item->fields._IsDisappearSvt_k__BackingField )
    {
      v73 = (UnityEngine_Object_o *)this->fields.maskServantObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v73, 0LL, 0LL) )
      {
        lv = this->fields.maskServantObj;
        if ( !lv )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
      }
      v74 = (UnityEngine_Object_o *)this->fields.maskServantLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v74, 0LL, 0LL) )
      {
        v75 = this->fields.maskServantLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        lv = LocalizationManager__Get((System_String_o *)StringLiteral_15206/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0LL);
        if ( !v75 )
          goto LABEL_203;
        UILabel__set_text(v75, (System_String_o *)lv, 0LL);
      }
    }
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_49B57A5 )
      {
        sub_1B4CF90(&NetworkManager_TypeInfo, v76);
        byte_49B57A5 = 1;
      }
      v78 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v78 = NetworkManager_TypeInfo;
      }
      userIdNumber = v78->static_fields->userIdNumber;
      EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(item, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(EquipSvtId, 0LL);
      if ( !Master_object )
        goto LABEL_203;
      if ( UserServantCollectionMaster__TryGetEntity(
             (UserServantCollectionMaster_o *)Master_object,
             &entity,
             userIdNumber,
             (int32_t)lv,
             0LL) )
      {
        v81 = this->fields.servantFaceIcon;
        v82 = entity;
        v83 = (UserServantEntity_o *)sub_1B4D1DC(UserServantEntity_TypeInfo);
        UserServantEntity___ctor_40793760(v83, v82, 0LL);
        if ( !v81 )
          goto LABEL_203;
        ServantFaceIconComponent__SetEquip(v81, v83, 0LL);
        v84 = (UnityEngine_Object_o *)this->fields.maskEquipObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v84, 0LL, 0LL) )
        {
          lv = this->fields.maskEquipObj;
          if ( !lv )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
        }
        maskEquipSprite = (UnityEngine_Object_o *)this->fields.maskEquipSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(maskEquipSprite, 0LL, 0LL) )
        {
          v86 = this->fields.maskEquipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(v86, (System_String_o *)StringLiteral_20020/*"img_frames_mask14"*/, 0LL);
        }
        v87 = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v87, 0LL, 0LL) )
        {
          v88 = this->fields.maskEquipLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          lv = LocalizationManager__Get((System_String_o *)StringLiteral_15204/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0LL);
          if ( !v88 )
            goto LABEL_203;
          UILabel__set_text(v88, (System_String_o *)lv, 0LL);
        }
      }
    }
    v89 = PartyOrganizationListViewItem__GetCommandCardList(item, 0LL);
    v90 = (UnityEngine_Object_o *)this->fields.supportSprite;
    v91 = v89;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v90, 0LL, 0LL) )
    {
      lv = item->fields.userServantEntity;
      if ( !lv )
        goto LABEL_203;
      lv = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)lv, 0LL);
      if ( !this->fields.supportSprite )
        goto LABEL_203;
      if ( ((unsigned __int8)lv & 1) != 0 )
      {
        v92 = this->fields.supportSprite;
        v93 = (System_String_o *)StringLiteral_19848/*"icon_eventjoin_02"*/;
      }
      else
      {
        v92 = this->fields.supportSprite;
        v93 = 0LL;
      }
      UISprite__set_spriteName(v92, v93, 0LL);
    }
    goto LABEL_161;
  }
  servantEntity = item->fields.servantEntity;
  if ( !servantEntity )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_203;
    ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)lv, 0LL);
    v95 = UnityEngine_Object_TypeInfo;
    v96 = &StringLiteral_19252/*"formation_blank_small"*/;
LABEL_108:
    v97 = (System_String_o *)*v96;
    v98 = (UnityEngine_Object_o *)this->fields.supportSprite;
    if ( !v95->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v95);
    if ( UnityEngine_Object__op_Inequality(v98, 0LL, 0LL) )
    {
      lv = this->fields.supportSprite;
      if ( !lv )
        goto LABEL_203;
      UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
    }
    goto LABEL_178;
  }
  if ( item->fields.questRestrictionInfo )
  {
    if ( ServantEntity__checkIsHeroineSvt(servantEntity, 0LL) )
    {
      lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !lv )
        goto LABEL_203;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)lv,
                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(SvtId, 0LL);
      if ( !MasterData_object )
        goto LABEL_203;
      lv = UserServantMaster__getHeroineData((UserServantMaster_o *)MasterData_object, (int32_t)lv, 0LL);
      if ( !item->fields.questRestrictionInfo )
        goto LABEL_203;
      v102 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41063360(
               item->fields.questRestrictionInfo,
               (UserServantEntity_o *)lv,
               0LL);
    }
    else
    {
      questRestrictionInfo = item->fields.questRestrictionInfo;
      v110 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v110, 0LL);
      if ( !questRestrictionInfo )
        goto LABEL_203;
      v102 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount(questRestrictionInfo, (int32_t)lv, 0LL);
    }
    v108 = v102;
  }
  else
  {
    v108 = -1;
  }
  v111 = this->fields.servantFaceIcon;
  v112 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v113 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v112, 0LL);
  svtLimitCount = item->fields.svtLimitCount;
  v115 = v113;
  lv = (void *)PartyOrganizationListViewItem__get_Level(item, 0LL);
  if ( !v111 )
    goto LABEL_203;
  ServantFaceIconComponent__Set_38756872(
    v111,
    v115,
    svtLimitCount,
    v108,
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
    0,
    0LL,
    0LL);
  v116 = (UnityEngine_Object_o *)this->fields.supportSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v116, 0LL, 0LL) )
  {
    lv = this->fields.supportSprite;
    if ( !lv )
      goto LABEL_203;
    UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
  }
  v97 = 0LL;
LABEL_178:
  v91 = 0LL;
  if ( !isAdjustPosY )
    goto LABEL_184;
LABEL_179:
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_203;
  if ( !ServantFaceIconComponent__IsUseEquip((ServantFaceIconComponent_o *)lv, 0LL) )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_203;
    ServantFaceIconComponent__AdjustRaritySpritePosY((ServantFaceIconComponent_o *)lv, -55.0, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_203;
    ServantFaceIconComponent__AdjustDispLimitCountSpritePosY((ServantFaceIconComponent_o *)lv, -34.0, 0LL);
  }
LABEL_184:
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_203;
  ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)lv, !isRarityHide, 0LL);
  if ( item->fields._IsNotSupportSingle_k__BackingField || !item->fields._IsDataLost_k__BackingField )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_203;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 1, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_203;
    v117 = 1;
  }
  else
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_203;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 0, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_203;
    v117 = 0;
  }
  ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)lv, v117, 0LL);
  commandLabelList = this->fields.commandLabelList;
  if ( !commandLabelList )
    goto LABEL_203;
  v119 = 0LL;
  v120 = (_DWORD)v91 + 32;
  while ( 1 )
  {
    max_length = commandLabelList->max_length;
    if ( (int)v119 >= max_length )
      break;
    if ( (unsigned int)v119 >= max_length )
      goto LABEL_317;
    v122 = commandLabelList->m_Items[v119];
    if ( v91 )
    {
      if ( (unsigned int)v119 >= v91->max_length )
LABEL_317:
        sub_1B4D1F4(lv, v59);
      lv = System_Int32__ToString(v120, 0LL);
      v59 = (PartyOrganizationRootComponent_c *)lv;
      if ( !v122 )
        goto LABEL_203;
    }
    else
    {
      v59 = (PartyOrganizationRootComponent_c *)StringLiteral_1/*""*/;
      if ( !v122 )
        goto LABEL_203;
    }
    UILabel__set_text(v122, (System_String_o *)v59, 0LL);
    commandLabelList = this->fields.commandLabelList;
    ++v119;
    v120 += 4;
    if ( !commandLabelList )
      goto LABEL_203;
  }
  lv = this->fields.baseSprite;
  if ( !lv )
    goto LABEL_203;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 0, 0LL);
  if ( v97 )
  {
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_203;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 1, 0LL);
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_203;
    UISprite__set_spriteName((UISprite_o *)lv, v97, 0LL);
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
      goto LABEL_203;
    v125 = (System_String_o **)(index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax
                              ? &StringLiteral_19283/*"formation_txtbg_03"*/
                              : &StringLiteral_19282/*"formation_txtbg_02"*/);
    UISprite__set_spriteName((UISprite_o *)lv, *v125, 0LL);
    memberTypeSprite = this->fields.memberTypeSprite;
    v180 = item->fields.index + 1;
    v127 = System_Int32__ToString((int32_t)&v180, 0LL);
    lv = System_String__Concat_61093468((System_String_o *)StringLiteral_21098/*"member_txt_"*/, v127, 0LL);
    if ( !memberTypeSprite )
      goto LABEL_203;
    UISprite__set_spriteName(memberTypeSprite, (System_String_o *)lv, 0LL);
    lv = this->fields.memberTypeSprite;
    if ( !lv )
      goto LABEL_203;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
    goto LABEL_265;
  if ( PartyOrganizationListViewItem__get_IsLeave(item, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v129 = &StringLiteral_11275/*"SELECT_NO_SORTIE"*/;
LABEL_228:
    v130 = LocalizationManager__Get((System_String_o *)*v129, 0LL);
    r = 0.0;
    g = 0.0;
    b = 0.0;
    a = 1.0;
    v136 = this;
    v137 = 0LL;
LABEL_229:
    PartyOrganizationConfirmItemDraw__SetMaskMessage(v136, v130, *(UnityEngine_Color_o *)&r, 0, v137, 0, v131);
    v138 = 1;
    goto LABEL_266;
  }
  if ( PartyOrganizationListViewItem__get_IsQuestRestriction(item, 0LL)
    && !PartyOrganizationListViewItem__get_IsEmpty(item, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v148 = LocalizationManager__Get((System_String_o *)StringLiteral_10058/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    goto LABEL_242;
  }
  if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v141 = &StringLiteral_10059/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_237:
    v142 = LocalizationManager__Get((System_String_o *)*v141, 0LL);
    v144 = 0.0;
    v145 = 0.0;
    v146 = this;
    v147 = 0;
LABEL_238:
    v138 = 1;
    PartyOrganizationConfirmItemDraw__SetWarningMessage(v146, v142, 1, v147, v144, v145, v143);
    goto LABEL_266;
  }
  if ( item->fields.isFixedSupportPositionRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v141 = &StringLiteral_10060/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/;
    goto LABEL_237;
  }
  if ( item->fields.isFixedServantPositionRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v141 = &StringLiteral_10061/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/;
    goto LABEL_237;
  }
  fatigureTime = item->fields.fatigureTime;
  if ( (fatigureTime & 0x8000000000000000LL) == 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( fatigureTime > NetworkManager__getTime(0LL) )
    {
      UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_406/*"#042484"*/, &color, 0LL);
      color.fields.a = 0.69804;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v158 = LocalizationManager__Get((System_String_o *)StringLiteral_11281/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, 0LL);
      r = color.fields.r;
      g = color.fields.g;
      b = color.fields.b;
      a = color.fields.a;
      v130 = v158;
      v136 = this;
      v137 = (System_String_o *)StringLiteral_20017/*"img_frames_mask11"*/;
      goto LABEL_229;
    }
    PartyOrganizationListViewItem__ClearFatigure(item, 0LL);
    goto LABEL_264;
  }
  if ( item->fields._IsAllOutBattle_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v129 = &StringLiteral_11276/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
    goto LABEL_228;
  }
  if ( item->fields._IsNotSupportSingle_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v142 = LocalizationManager__Get((System_String_o *)StringLiteral_10062/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
    v144 = 10.0;
    v145 = -22.0;
    v147 = 1;
    v146 = this;
    goto LABEL_238;
  }
  if ( item->fields._IsDataLost_k__BackingField )
  {
    v149 = (System_String_o *)StringLiteral_1/*""*/;
    v150 = 1.0;
    v151 = 1.0;
    v152 = 1.0;
    v155 = (System_String_o *)StringLiteral_18168/*"datalost_svt_select"*/;
    v153 = 1.0;
    v156 = 1;
    v154 = this;
    goto LABEL_243;
  }
  if ( item->fields._TimesToRestart_k__BackingField >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v171 = LocalizationManager__Get((System_String_o *)StringLiteral_11282/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
    TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
    v175 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v172, v173, v174);
    v148 = System_String__Format(v171, v175, 0LL);
LABEL_242:
    v149 = v148;
    v150 = 0.0;
    v151 = 0.0;
    v152 = 0.0;
    v153 = 1.0;
    v154 = this;
    v155 = 0LL;
    v156 = 0;
LABEL_243:
    v138 = 1;
    PartyOrganizationConfirmItemDraw__SetMaskMessage(v154, v149, *(UnityEngine_Color_o *)&v150, 1, v155, v156, v140);
    goto LABEL_266;
  }
LABEL_264:
  PartyOrganizationConfirmItemDraw__ClearMessage(this, v139);
LABEL_265:
  v138 = 0;
LABEL_266:
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
    return;
  if ( !item->fields.isFollower )
  {
    v165 = item->fields.userServantEntity;
    if ( v165 )
    {
      SvtClassId = UserServantEntity__getSvtClassId(v165, 0, 0LL);
    }
    else
    {
      v160 = item->fields.servantEntity;
      if ( !v160 )
        goto LABEL_284;
      SvtClassId = v160[20];
    }
    LODWORD(v160) = 0;
    goto LABEL_285;
  }
  v160 = item->fields.followerInfo;
  if ( !v160 )
  {
LABEL_284:
    SvtClassId = 0;
    goto LABEL_285;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_203;
  v161 = DataManager__GetMasterData_object_(
           (DataManager_o *)lv,
           (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
  if ( !lv )
    goto LABEL_203;
  v163 = *((_QWORD *)lv + 6);
  v162 = *((_QWORD *)lv + 7);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v182.fields.currentCryptoKey = v163;
  *(_QWORD *)&v182.fields.fakeValue = v162;
  lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v182, 0LL);
  if ( !v161 )
    goto LABEL_203;
  lv = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v161,
         (int32_t)lv,
         (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !lv )
    goto LABEL_203;
  SvtClassId = *((_DWORD *)lv + 20);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
  if ( !lv )
    goto LABEL_203;
  LODWORD(v160) = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)lv, 0LL);
LABEL_285:
  if ( (unsigned int)v160 | v138 | (SvtClassId == 0) )
  {
    lv = this->fields.classCompatibilityIcon;
    if ( !lv )
      goto LABEL_203;
    goto LABEL_305;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_203;
  lv = (void *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)lv, 40, 0LL);
  if ( ((unsigned __int8)lv & 1) == 0 )
    goto LABEL_302;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_203;
  lv = (void *)*((_QWORD *)lv + 4);
  if ( !lv )
    goto LABEL_203;
  v59 = PartyOrganizationRootComponent_TypeInfo;
  methodPtr_low = LOBYTE(PartyOrganizationRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)lv + 304LL) < (unsigned int)methodPtr_low
    || *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)lv + 200LL) + 8 * methodPtr_low - 8) != PartyOrganizationRootComponent_TypeInfo )
  {
    v176 = (PartyOrganizationCommandCardMenu_o *)sub_1B4D4AC(lv);
    PartyOrganizationCommandCardMenu__EndOpen(v176, v177);
    return;
  }
  v167 = *((_QWORD *)lv + 62);
  if ( !v167
    || (lv = (void *)BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)lv + 62), 0LL), !(_DWORD)lv)
    || (v168 = *(_DWORD *)(v167 + 24)) == 0 )
  {
LABEL_302:
    v170 = this->fields.classCompatibilityIcon;
    goto LABEL_303;
  }
  v169 = (int)lv;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_203;
  lv = DataManager__GetMasterData_object_(
         (DataManager_o *)lv,
         (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !lv )
    goto LABEL_203;
  lv = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)lv, v169, v168, 0LL);
  v170 = this->fields.classCompatibilityIcon;
  if ( !lv )
  {
LABEL_303:
    if ( !v170 )
      goto LABEL_203;
    lv = v170;
LABEL_305:
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)lv, 0LL);
    return;
  }
  if ( !v170 )
    goto LABEL_203;
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
  if ( (byte_49B6A35 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, message);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v16);
    sub_1B4CF90(&PartyOrganizationConfirmItemDraw_TypeInfo, v17);
    sub_1B4CF90(&StringLiteral_18168/*"datalost_svt_select"*/, v18);
    sub_1B4CF90(&StringLiteral_20013/*"img_frames_mask03"*/, v19);
    sub_1B4CF90(&StringLiteral_1/*""*/, v20);
    byte_49B6A35 = 1;
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
      AtlasManager__SetPartyOrganizationImage(v24, (System_String_o *)StringLiteral_18168/*"datalost_svt_select"*/, 0LL);
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
      v27 = maskName ? maskName : (System_String_o *)StringLiteral_20013/*"img_frames_mask03"*/;
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
        if ( !byte_49B5366 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v22);
          byte_49B5366 = 1;
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
      if ( !byte_49B5366 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v22);
        byte_49B5366 = 1;
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
    sub_1B4D1EC(gameObject, v22);
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
  System_Collections_Generic_List_object__o *v10; // x29
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x22
  int32_t size; // w28
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
  if ( (byte_49B6A37 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_NpcFollowerMaster___, supportMemberObjectList);
    sub_1B4CF90(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v11);
    sub_1B4CF90(&DataManager_TypeInfo, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Count__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__, v14);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)sub_1B4CF90(
                                                                                     &PartyOrganizationConfirmItemDraw_TypeInfo,
                                                                                     v16);
    byte_49B6A37 = 1;
  }
  npcServantFollowerEntity = 0LL;
  if ( !v10 || (self = supportMemberBase, !supportMemberObjectList) )
LABEL_44:
    sub_1B4D1EC(itemList, supportMemberObjectList);
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
        goto LABEL_44;
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)itemList,
                                                                                       0LL);
      if ( !itemList )
        goto LABEL_44;
      if ( !v20 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
        goto LABEL_36;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 1, 0LL);
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       v10,
                                                                                       v21,
                                                                                       (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_44;
      if ( itemList[4].monitor )
      {
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v21,
                                                                                         (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_44;
        monitor = itemList[4].monitor;
        if ( !monitor )
          goto LABEL_44;
        v26 = monitor[9];
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v21,
                                                                                         (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_44;
        v27 = itemList[4].monitor;
        if ( !v27 )
          goto LABEL_44;
        questPhase = v27[10];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v21,
                                                                                         (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          goto LABEL_44;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)itemList, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                                                                         SvtId,
                                                                                         0LL);
        if ( !Master_object )
          goto LABEL_44;
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
            goto LABEL_44;
          IsHideRarity = NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
          if ( !npcServantFollowerEntity || !itemList )
            goto LABEL_44;
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerMaster__GetEntity_40004608(
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
          goto LABEL_33;
        }
        LODWORD(v17) = v37;
      }
      v31 = 0;
      IsHideRarity = 0;
LABEL_33:
      if ( v21 >= supportMemberObjectList->max_length )
        goto LABEL_45;
      v32 = *v23;
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       v10,
                                                                                       v21,
                                                                                       (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
      if ( !v32 )
        goto LABEL_44;
      PartyOrganizationConfirmItemDraw__SetItem(
        v32,
        (PartyOrganizationListViewItem_o *)itemList,
        2,
        v39,
        IsHideRarity,
        v31,
        v38,
        v33);
LABEL_36:
      if ( (_DWORD)v17 == v19 )
        break;
      v20 = (int)v19 < size;
      if ( v19++ >= supportMemberObjectList->max_length )
LABEL_45:
        sub_1B4D1F4(itemList, supportMemberObjectList);
    }
  }
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

  if ( (byte_49B6A36 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, message);
    sub_1B4CF90(&StringLiteral_20013/*"img_frames_mask03"*/, v13);
    sub_1B4CF90(&StringLiteral_1/*""*/, v14);
    byte_49B6A36 = 1;
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
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20013/*"img_frames_mask03"*/, 0LL);
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
                      if ( !byte_49B5366 )
                      {
                        gameObject = (UnityEngine_Component_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v16);
                        byte_49B5366 = 1;
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
                  if ( !byte_49B5366 )
                  {
                    gameObject = (UnityEngine_Component_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v16);
                    byte_49B5366 = 1;
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
    sub_1B4D1EC(gameObject, v16);
  }
}