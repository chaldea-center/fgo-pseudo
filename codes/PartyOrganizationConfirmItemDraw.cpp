void __fastcall PartyOrganizationConfirmItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_438E51A & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationConfirmItemDraw_TypeInfo);
    byte_438E51A = 1;
  }
  PartyOrganizationConfirmItemDraw_TypeInfo->static_fields->ICON_OFFSET_SIZE = 60;
  PartyOrganizationConfirmItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT = 154;
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v14; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_438E514 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E514 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionMaskMessageText;
    if ( !restrictionMaskMessageText )
      goto LABEL_18;
    this->fields.restrictionMaskMessageWidth = restrictionMaskMessageText->fields.mWidth;
    UIWidget__set_width(restrictionMaskMessageText, 1000, 0LL);
    v12 = this->fields.restrictionMaskSprite;
    if ( !v12 )
      goto LABEL_18;
    mAtlas = v12->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.maskSpriteDefaultAtlas,
      (System_Int32_array **)mAtlas,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v14 = this->fields.restrictionMaskSprite;
    if ( !v14 )
      goto LABEL_18;
    this->fields.maskSpriteDefaultHeight = v14->fields.mHeight;
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    restrictionMaskMessageText = (UIWidget_o *)this->fields.restrictionWarningMessageLabel;
    if ( restrictionMaskMessageText )
    {
      this->fields.restrictionWarningMessageWidth = restrictionMaskMessageText->fields.mWidth;
      UIWidget__set_width(restrictionMaskMessageText, 1000, 0LL);
      return;
    }
LABEL_18:
    sub_B7769C(restrictionMaskMessageText, v4);
  }
}


void __fastcall PartyOrganizationConfirmItemDraw__ClearMessage(
        PartyOrganizationConfirmItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_438E516 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E516 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_20;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_20:
    sub_B7769C(gameObject, v4);
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
  UnityEngine_Object_o *maskServantObj; // x25
  System_String_o *v16; // x1
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
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x23
  int64_t UserId; // x24
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
  UnityEngine_Object_o *v45; // x23
  System_Int32_array *v46; // x24
  UISprite_o *v47; // x0
  System_String_o *v48; // x1
  UnityEngine_Object_o *v49; // x23
  UnityEngine_Object_c *v50; // x0
  __int64 *v51; // x8
  System_String_o *v52; // x23
  UnityEngine_Object_o *v53; // x24
  ServantEntity_o *servantEntity; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v57; // w0
  System_Int32_array *CommandCardList; // x0
  UnityEngine_Object_o *supportSprite; // x25
  System_String_o *v60; // x1
  UnityEngine_Object_o *v61; // x23
  UnityEngine_Object_o *v62; // x23
  int32_t v63; // w23
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // kr20_16
  ServantFaceIconComponent_o *v66; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // kr30_16
  int32_t v68; // w0
  int32_t svtLimitCount; // w26
  int32_t v70; // w27
  UnityEngine_Object_o *v71; // x23
  bool v72; // w1
  struct UILabel_array *commandLabelList; // x8
  __int64 v74; // x26
  int32_t v75; // w21
  int max_length; // w9
  UILabel_o *v77; // x22
  UnityEngine_Object_o *memberTypeBaseSprite; // x21
  int32_t index; // w21
  System_String_o **v80; // x8
  UISprite_o *memberTypeSprite; // x21
  System_String_o *v82; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  __int64 *v84; // x8
  System_String_o *v85; // x21
  const MethodInfo *v86; // x5
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  PartyOrganizationConfirmItemDraw_o *v91; // x0
  System_String_o *v92; // x1
  System_String_o *v93; // x3
  int v94; // w24
  const MethodInfo *v95; // x1
  __int64 *v96; // x8
  System_String_o *v97; // x1
  const MethodInfo *v98; // x4
  float v99; // s0
  float v100; // s1
  PartyOrganizationConfirmItemDraw_o *v101; // x0
  bool v102; // w3
  System_String_o *v103; // x0
  System_String_o *v104; // x21
  const MethodInfo *v105; // x5
  int v106; // s0
  PartyOrganizationConfirmItemDraw_o *v110; // x0
  System_String_o *v111; // x1
  System_String_o *v112; // x3
  bool v113; // w4
  int64_t fatigureTime; // x21
  System_String_o *v115; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  _DWORD *v117; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v118; // x21
  __int64 v119; // x22
  __int64 v120; // x23
  int32_t SvtClassId; // w21
  UserServantEntity_o *v122; // x0
  __int64 v123; // x9
  __int64 v124; // x22
  int32_t v125; // w22
  int32_t v126; // w20
  struct ServantClassCompatibilityIconComponent_o *v127; // x8
  System_String_o *v128; // x21
  __int64 v129; // x2
  Il2CppObject *v130; // x0
  __int64 v131; // x0
  PartyOrganizationCommandCardMenu_o *v132; // x0
  const MethodInfo *v133; // x1
  int32_t TimesToRestart_k__BackingField; // [xsp+4Ch] [xbp-74h] BYREF
  UnityEngine_Color_o color; // [xsp+50h] [xbp-70h] BYREF
  int v136; // [xsp+64h] [xbp-5Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16

  if ( (byte_438E515 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&PartyOrganizationRootComponent_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&UserServantEntity_TypeInfo);
    sub_B775C4(&StringLiteral_19770/*"icon_support_02"*/);
    sub_B775C4(&StringLiteral_15615/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/);
    sub_B775C4(&StringLiteral_10550/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/);
    sub_B775C4(&StringLiteral_10553/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_B775C4(&StringLiteral_11854/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/);
    sub_B775C4(&StringLiteral_11855/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_B775C4(&StringLiteral_11849/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_B775C4(&StringLiteral_19883/*"img_frames_mask11"*/);
    sub_B775C4(&StringLiteral_10549/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_B775C4(&StringLiteral_20880/*"member_txt_"*/);
    sub_B775C4(&StringLiteral_11848/*"SELECT_NO_SORTIE"*/);
    sub_B775C4(&StringLiteral_19769/*"icon_support_01"*/);
    sub_B775C4(&StringLiteral_19733/*"icon_eventjoin_02"*/);
    sub_B775C4(&StringLiteral_19229/*"formation_txtbg_03"*/);
    sub_B775C4(&StringLiteral_15613/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/);
    sub_B775C4(&StringLiteral_19199/*"formation_blank_small"*/);
    sub_B775C4(&StringLiteral_19886/*"img_frames_mask14"*/);
    sub_B775C4(&StringLiteral_18237/*"datalost_svt_select"*/);
    sub_B775C4(&StringLiteral_359/*"#042484"*/);
    sub_B775C4(&StringLiteral_19227/*"formation_support_small"*/);
    sub_B775C4(&StringLiteral_19228/*"formation_txtbg_02"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_10551/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/);
    sub_B775C4(&StringLiteral_19735/*"icon_friend"*/);
    sub_B775C4(&StringLiteral_10552/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/);
    sub_B775C4(&StringLiteral_19734/*"icon_follow"*/);
    byte_438E515 = 1;
  }
  entity = 0LL;
  v136 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  if ( !item || !mode )
    return;
  maskServantObj = (UnityEngine_Object_o *)this->fields.maskServantObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskServantObj, 0LL, 0LL) )
  {
    lv = this->fields.maskServantObj;
    if ( !lv )
      goto LABEL_226;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
  }
  maskServantLabel = (UnityEngine_Object_o *)this->fields.maskServantLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskServantLabel, 0LL, 0LL) )
  {
    lv = this->fields.maskServantLabel;
    if ( !lv )
      goto LABEL_226;
    UILabel__set_text((UILabel_o *)lv, string_TypeInfo->static_fields->Empty, 0LL);
  }
  maskEquipObj = (UnityEngine_Object_o *)this->fields.maskEquipObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskEquipObj, 0LL, 0LL) )
  {
    lv = this->fields.maskEquipObj;
    if ( !lv )
      goto LABEL_226;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
  }
  maskEquipLabel = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  lv = (void *)UnityEngine_Object__op_Inequality(maskEquipLabel, 0LL, 0LL);
  if ( ((unsigned __int8)lv & 1) != 0 )
  {
    lv = this->fields.maskEquipLabel;
    if ( !lv )
      goto LABEL_226;
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
        goto LABEL_226;
      ServantFaceIconComponent__Set_31684916(
        servantFaceIcon,
        (ServantLeaderInfo_o *)lv,
        0LL,
        0LL,
        0,
        followerInfo->fields.imageSvtId,
        0LL);
      typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      lv = (void *)UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
      if ( ((unsigned __int8)lv & 1) != 0 )
      {
        v24 = item->fields.followerInfo;
        if ( !v24 )
          goto LABEL_226;
        type = v24->fields.type;
        if ( (unsigned int)(type - 3) < 2 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_226;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_226;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_226;
          v26 = &StringLiteral_19769/*"icon_support_01"*/;
          goto LABEL_151;
        }
        if ( type == 5 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_226;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_226;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_226;
          v26 = &StringLiteral_19734/*"icon_follow"*/;
          goto LABEL_151;
        }
        if ( type == 1 )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_226;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_226;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_226;
          v26 = &StringLiteral_19735/*"icon_friend"*/;
LABEL_151:
          UISprite__set_spriteName((UISprite_o *)lv, (System_String_o *)*v26, 0LL);
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_226;
          (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
          goto LABEL_153;
        }
        lv = this->fields.typeSprite;
        if ( !lv )
          goto LABEL_226;
        lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
        if ( !lv )
          goto LABEL_226;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
      }
LABEL_153:
      CommandCardList = PartyOrganizationListViewItem__GetCommandCardList(item, 0LL);
      supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
      v46 = CommandCardList;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
      {
        lv = this->fields.supportSprite;
        if ( !lv )
          goto LABEL_226;
        if ( item->fields.isFollower )
          v60 = (System_String_o *)StringLiteral_19770/*"icon_support_02"*/;
        else
          v60 = 0LL;
        UISprite__set_spriteName((UISprite_o *)lv, v60, 0LL);
      }
      if ( isSimpleDisp )
      {
        v61 = (UnityEngine_Object_o *)this->fields.typeSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v61, 0LL, 0LL) )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_226;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_226;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
        }
        v62 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v62, 0LL, 0LL) )
        {
          lv = this->fields.supportSprite;
          if ( !lv )
            goto LABEL_226;
          UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
        }
        lv = this->fields.servantFaceIcon;
        if ( !lv )
LABEL_226:
          sub_B7769C(lv, v16);
        ServantFaceIconComponent__ClearEquip((ServantFaceIconComponent_o *)lv, 0LL);
      }
LABEL_178:
      v52 = 0LL;
      if ( !isAdjustPosY )
        goto LABEL_207;
      goto LABEL_202;
    }
    if ( !servantFaceIcon )
      goto LABEL_226;
    ServantFaceIconComponent__Clear(this->fields.servantFaceIcon, 0LL);
    v49 = (UnityEngine_Object_o *)this->fields.typeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
    {
      lv = this->fields.typeSprite;
      if ( !lv )
        goto LABEL_226;
      lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
      if ( !lv )
        goto LABEL_226;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
    }
    v50 = UnityEngine_Object_TypeInfo;
    v51 = &StringLiteral_19227/*"formation_support_small"*/;
    goto LABEL_123;
  }
  v27 = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
  {
    lv = this->fields.typeSprite;
    if ( !lv )
      goto LABEL_226;
    lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
    if ( !lv )
      goto LABEL_226;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
  }
  userServantEntity = item->fields.userServantEntity;
  if ( userServantEntity )
  {
    v29 = this->fields.servantFaceIcon;
    lv = PartyOrganizationListViewItem__GetEquipList(item, 0LL);
    if ( !v29 )
      goto LABEL_226;
    ServantFaceIconComponent__Set(
      v29,
      userServantEntity,
      (System_Int64_array *)lv,
      item->fields.questRestrictionInfo,
      0LL,
      0LL,
      0LL);
    if ( item->fields._IsDisappearSvt_k__BackingField )
    {
      v30 = (UnityEngine_Object_o *)this->fields.maskServantObj;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
      {
        lv = this->fields.maskServantObj;
        if ( !lv )
          goto LABEL_226;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
      }
      v31 = (UnityEngine_Object_o *)this->fields.maskServantLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
      {
        v32 = this->fields.maskServantLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        lv = LocalizationManager__Get((System_String_o *)StringLiteral_15615/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0LL);
        if ( !v32 )
          goto LABEL_226;
        UILabel__set_text(v32, (System_String_o *)lv, 0LL);
      }
    }
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(item, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(EquipSvtId, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_226;
      if ( UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, UserId, (int32_t)lv, 0LL) )
      {
        v36 = this->fields.servantFaceIcon;
        v37 = entity;
        v38 = (UserServantEntity_o *)sub_B77694(UserServantEntity_TypeInfo);
        UserServantEntity___ctor_21815380(v38, v37, 0LL);
        if ( !v36 )
          goto LABEL_226;
        ServantFaceIconComponent__SetEquip(v36, v38, 0LL);
        v39 = (UnityEngine_Object_o *)this->fields.maskEquipObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
        {
          lv = this->fields.maskEquipObj;
          if ( !lv )
            goto LABEL_226;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
        }
        maskEquipSprite = (UnityEngine_Object_o *)this->fields.maskEquipSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(maskEquipSprite, 0LL, 0LL) )
        {
          v41 = this->fields.maskEquipSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventSprite(v41, (System_String_o *)StringLiteral_19886/*"img_frames_mask14"*/, 0LL);
        }
        v42 = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
        {
          v43 = this->fields.maskEquipLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          lv = LocalizationManager__Get((System_String_o *)StringLiteral_15613/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0LL);
          if ( !v43 )
            goto LABEL_226;
          UILabel__set_text(v43, (System_String_o *)lv, 0LL);
        }
      }
    }
    v44 = PartyOrganizationListViewItem__GetCommandCardList(item, 0LL);
    v45 = (UnityEngine_Object_o *)this->fields.supportSprite;
    v46 = v44;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
    {
      lv = item->fields.userServantEntity;
      if ( !lv )
        goto LABEL_226;
      lv = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)lv, 0LL);
      if ( !this->fields.supportSprite )
        goto LABEL_226;
      if ( ((unsigned __int8)lv & 1) != 0 )
      {
        v47 = this->fields.supportSprite;
        v48 = (System_String_o *)StringLiteral_19733/*"icon_eventjoin_02"*/;
      }
      else
      {
        v47 = this->fields.supportSprite;
        v48 = 0LL;
      }
      UISprite__set_spriteName(v47, v48, 0LL);
    }
    goto LABEL_178;
  }
  servantEntity = item->fields.servantEntity;
  if ( !servantEntity )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_226;
    ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)lv, 0LL);
    v50 = UnityEngine_Object_TypeInfo;
    v51 = &StringLiteral_19199/*"formation_blank_small"*/;
LABEL_123:
    v52 = (System_String_o *)*v51;
    v53 = (UnityEngine_Object_o *)this->fields.supportSprite;
    if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v50);
    if ( UnityEngine_Object__op_Inequality(v53, 0LL, 0LL) )
    {
      lv = this->fields.supportSprite;
      if ( !lv )
        goto LABEL_226;
      UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
    }
    goto LABEL_201;
  }
  if ( item->fields.questRestrictionInfo )
  {
    if ( ServantEntity__checkIsHeroineSvt(servantEntity, 0LL) )
    {
      lv = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !lv )
        goto LABEL_226;
      MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)lv,
                                                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(SvtId, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_226;
      lv = UserServantMaster__getHeroineData(MasterData_WarQuestSelectionMaster, (int32_t)lv, 0LL);
      if ( !item->fields.questRestrictionInfo )
        goto LABEL_226;
      v57 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34474600(
              item->fields.questRestrictionInfo,
              (UserServantEntity_o *)lv,
              0LL);
    }
    else
    {
      questRestrictionInfo = item->fields.questRestrictionInfo;
      v65 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v65, 0LL);
      if ( !questRestrictionInfo )
        goto LABEL_226;
      v57 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount(questRestrictionInfo, (int32_t)lv, 0LL);
    }
    v63 = v57;
  }
  else
  {
    v63 = -1;
  }
  v66 = this->fields.servantFaceIcon;
  v67 = PartyOrganizationListViewItem__get_SvtId(item, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v67, 0LL);
  svtLimitCount = item->fields.svtLimitCount;
  v70 = v68;
  lv = (void *)PartyOrganizationListViewItem__get_Level(item, 0LL);
  if ( !v66 )
    goto LABEL_226;
  ServantFaceIconComponent__Set_31755472(
    v66,
    v70,
    svtLimitCount,
    v63,
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
    0LL);
  v71 = (UnityEngine_Object_o *)this->fields.supportSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
  {
    lv = this->fields.supportSprite;
    if ( !lv )
      goto LABEL_226;
    UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
  }
  v52 = 0LL;
LABEL_201:
  v46 = 0LL;
  if ( !isAdjustPosY )
    goto LABEL_207;
LABEL_202:
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_226;
  if ( !ServantFaceIconComponent__IsUseEquip((ServantFaceIconComponent_o *)lv, 0LL) )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_226;
    ServantFaceIconComponent__AdjustRaritySpritePosY((ServantFaceIconComponent_o *)lv, -55.0, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_226;
    ServantFaceIconComponent__AdjustDispLimitCountSpritePosY((ServantFaceIconComponent_o *)lv, -34.0, 0LL);
  }
LABEL_207:
  lv = this->fields.servantFaceIcon;
  if ( !lv )
    goto LABEL_226;
  ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)lv, !isRarityHide, 0LL);
  if ( item->fields._IsNotSupportSingle_k__BackingField || !item->fields._IsDataLost_k__BackingField )
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_226;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 1, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_226;
    v72 = 1;
  }
  else
  {
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_226;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)lv, 0, 0LL);
    lv = this->fields.servantFaceIcon;
    if ( !lv )
      goto LABEL_226;
    v72 = 0;
  }
  ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)lv, v72, 0LL);
  commandLabelList = this->fields.commandLabelList;
  if ( !commandLabelList )
    goto LABEL_226;
  v74 = 0LL;
  v75 = (_DWORD)v46 + 32;
  while ( 1 )
  {
    max_length = commandLabelList->max_length;
    if ( (int)v74 >= max_length )
      break;
    if ( (unsigned int)v74 >= max_length )
      goto LABEL_355;
    v77 = commandLabelList->m_Items[v74];
    if ( v46 )
    {
      if ( (unsigned int)v74 >= v46->max_length )
      {
LABEL_355:
        v131 = sub_B776C8(lv);
        sub_B77668(v131, 0LL);
      }
      lv = System_Int32__ToString(v75, 0LL);
      v16 = (System_String_o *)lv;
      if ( !v77 )
        goto LABEL_226;
    }
    else
    {
      v16 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v77 )
        goto LABEL_226;
    }
    UILabel__set_text(v77, v16, 0LL);
    commandLabelList = this->fields.commandLabelList;
    ++v74;
    v75 += 4;
    if ( !commandLabelList )
      goto LABEL_226;
  }
  lv = this->fields.baseSprite;
  if ( !lv )
    goto LABEL_226;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 0, 0LL);
  if ( v52 )
  {
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_226;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 1, 0LL);
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_226;
    UISprite__set_spriteName((UISprite_o *)lv, v52, 0LL);
  }
  memberTypeBaseSprite = (UnityEngine_Object_o *)this->fields.memberTypeBaseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(memberTypeBaseSprite, 0LL, 0LL) )
  {
    index = item->fields.index;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    lv = this->fields.memberTypeBaseSprite;
    if ( !lv )
      goto LABEL_226;
    v80 = (System_String_o **)(index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax
                             ? &StringLiteral_19229/*"formation_txtbg_03"*/
                             : &StringLiteral_19228/*"formation_txtbg_02"*/);
    UISprite__set_spriteName((UISprite_o *)lv, *v80, 0LL);
    memberTypeSprite = this->fields.memberTypeSprite;
    v136 = item->fields.index + 1;
    v82 = System_Int32__ToString((int32_t)&v136, 0LL);
    lv = System_String__Concat_44901936((System_String_o *)StringLiteral_20880/*"member_txt_"*/, v82, 0LL);
    if ( !memberTypeSprite )
      goto LABEL_226;
    UISprite__set_spriteName(memberTypeSprite, (System_String_o *)lv, 0LL);
    lv = this->fields.memberTypeSprite;
    if ( !lv )
      goto LABEL_226;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)lv + 840LL))(lv, *(_QWORD *)(*(_QWORD *)lv + 848LL));
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
    goto LABEL_299;
  if ( !PartyOrganizationListViewItem__get_IsLeave(item, 0LL) )
  {
    if ( PartyOrganizationListViewItem__get_IsQuestRestriction(item, 0LL)
      && !PartyOrganizationListViewItem__get_IsEmpty(item, 0LL) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v103 = LocalizationManager__Get((System_String_o *)StringLiteral_10549/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    }
    else
    {
      if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v96 = &StringLiteral_10550/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_265:
        v97 = LocalizationManager__Get((System_String_o *)*v96, 0LL);
        v99 = 0.0;
        v100 = 0.0;
        v101 = this;
        v102 = 0;
LABEL_266:
        v94 = 1;
        PartyOrganizationConfirmItemDraw__SetWarningMessage(v101, v97, 1, v102, v99, v100, v98);
        goto LABEL_300;
      }
      if ( item->fields.isFixedSupportPositionRestriction )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v96 = &StringLiteral_10551/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/;
        goto LABEL_265;
      }
      if ( item->fields.isFixedServantPositionRestriction )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v96 = &StringLiteral_10552/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/;
        goto LABEL_265;
      }
      fatigureTime = item->fields.fatigureTime;
      if ( (fatigureTime & 0x8000000000000000LL) == 0 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        if ( fatigureTime > NetworkManager__getTime(0LL) )
        {
          UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_359/*"#042484"*/, &color, 0LL);
          color.fields.a = 0.69804;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v115 = LocalizationManager__Get((System_String_o *)StringLiteral_11854/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, 0LL);
          r = color.fields.r;
          g = color.fields.g;
          b = color.fields.b;
          a = color.fields.a;
          v92 = v115;
          v91 = this;
          v93 = (System_String_o *)StringLiteral_19883/*"img_frames_mask11"*/;
          goto LABEL_256;
        }
        PartyOrganizationListViewItem__ClearFatigure(item, 0LL);
        goto LABEL_298;
      }
      if ( item->fields._IsAllOutBattle_k__BackingField )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v84 = &StringLiteral_11849/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
        goto LABEL_255;
      }
      if ( item->fields._IsNotSupportSingle_k__BackingField )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v97 = LocalizationManager__Get((System_String_o *)StringLiteral_10553/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
        v99 = 10.0;
        v100 = -22.0;
        v102 = 1;
        v101 = this;
        goto LABEL_266;
      }
      if ( item->fields._IsDataLost_k__BackingField )
      {
        *(UnityEngine_Color_o *)&v106 = UnityEngine_Color__get_white(0LL);
        v111 = (System_String_o *)StringLiteral_1/*""*/;
        v113 = 1;
        v110 = this;
        v112 = (System_String_o *)StringLiteral_18237/*"datalost_svt_select"*/;
        goto LABEL_272;
      }
      if ( item->fields._TimesToRestart_k__BackingField < 1 )
      {
LABEL_298:
        PartyOrganizationConfirmItemDraw__ClearMessage(this, v95);
LABEL_299:
        v94 = 0;
        goto LABEL_300;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v128 = LocalizationManager__Get((System_String_o *)StringLiteral_11855/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
      TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
      v130 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v129);
      v103 = System_String__Format(v128, v130, 0LL);
    }
    v104 = v103;
    *(UnityEngine_Color_o *)&v106 = UnityEngine_Color__get_black(0LL);
    v110 = this;
    v111 = v104;
    v112 = 0LL;
    v113 = 0;
LABEL_272:
    v94 = 1;
    PartyOrganizationConfirmItemDraw__SetMaskMessage(v110, v111, *(UnityEngine_Color_o *)&v106, 1, v112, v113, v105);
    goto LABEL_300;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v84 = &StringLiteral_11848/*"SELECT_NO_SORTIE"*/;
LABEL_255:
  v85 = LocalizationManager__Get((System_String_o *)*v84, 0LL);
  *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_black(0LL);
  v91 = this;
  v92 = v85;
  v93 = 0LL;
LABEL_256:
  PartyOrganizationConfirmItemDraw__SetMaskMessage(v91, v92, *(UnityEngine_Color_o *)&r, 0, v93, 0, v86);
  v94 = 1;
LABEL_300:
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
    return;
  if ( !item->fields.isFollower )
  {
    v122 = item->fields.userServantEntity;
    if ( v122 )
    {
      SvtClassId = UserServantEntity__getSvtClassId(v122, 0LL);
    }
    else
    {
      v117 = item->fields.servantEntity;
      if ( !v117 )
        goto LABEL_320;
      SvtClassId = v117[20];
    }
    LODWORD(v117) = 0;
    goto LABEL_321;
  }
  v117 = item->fields.followerInfo;
  if ( !v117 )
  {
LABEL_320:
    SvtClassId = 0;
    goto LABEL_321;
  }
  lv = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_226;
  v118 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)lv,
                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
  if ( !lv )
    goto LABEL_226;
  v120 = *((_QWORD *)lv + 6);
  v119 = *((_QWORD *)lv + 7);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v138.fields.currentCryptoKey = v120;
  *(_QWORD *)&v138.fields.fakeValue = v119;
  lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v138, 0LL);
  if ( !v118 )
    goto LABEL_226;
  lv = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
         v118,
         (int32_t)lv,
         (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !lv )
    goto LABEL_226;
  SvtClassId = *((_DWORD *)lv + 20);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, 0LL);
  if ( !lv )
    goto LABEL_226;
  LODWORD(v117) = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)lv, 0LL);
LABEL_321:
  if ( (unsigned int)v117 | v94 | (SvtClassId == 0) )
  {
    lv = this->fields.classCompatibilityIcon;
    if ( !lv )
      goto LABEL_226;
    goto LABEL_341;
  }
  lv = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_226;
  lv = (void *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)lv, 40, 0LL);
  if ( ((unsigned __int8)lv & 1) == 0 )
    goto LABEL_338;
  lv = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_226;
  lv = (void *)*((_QWORD *)lv + 3);
  if ( !lv )
    goto LABEL_226;
  v16 = (System_String_o *)PartyOrganizationRootComponent_TypeInfo;
  v123 = *(&PartyOrganizationRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)lv + 300LL) < (unsigned int)v123
    || *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)lv + 200LL) + 8 * v123 - 8) != PartyOrganizationRootComponent_TypeInfo )
  {
    sub_B77990(lv);
    PartyOrganizationCommandCardMenu__EndOpen(v132, v133);
    return;
  }
  v124 = *((_QWORD *)lv + 58);
  if ( !v124
    || (lv = (void *)BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)lv + 58), 0LL), !(_DWORD)lv)
    || (v125 = *(_DWORD *)(v124 + 24)) == 0 )
  {
LABEL_338:
    v127 = this->fields.classCompatibilityIcon;
    goto LABEL_339;
  }
  v126 = (int)lv;
  lv = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_226;
  lv = DataManager__GetMasterData_WarQuestSelectionMaster_(
         (DataManager_o *)lv,
         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !lv )
    goto LABEL_226;
  lv = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)lv, v126, v125, 0LL);
  v127 = this->fields.classCompatibilityIcon;
  if ( !lv )
  {
LABEL_339:
    if ( !v127 )
      goto LABEL_226;
    lv = v127;
LABEL_341:
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)lv, 0LL);
    return;
  }
  if ( !v127 )
    goto LABEL_226;
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
  UnityEngine_Object_o *restrictionMaskSprite; // x24
  __int64 v17; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v19; // x24
  struct UISprite_o *v20; // x22
  int32_t DATA_LOST_MASK_HEIGHT; // w1
  System_String_o *v22; // x1
  float v23; // s0
  float v24; // s8
  UnityEngine_Transform_o *transform; // x20
  float restrictionMaskMessageWidth; // s0
  float v27; // s1
  float v28; // s0
  float v29; // s2
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = maskColor.fields.a;
  b = maskColor.fields.b;
  g = maskColor.fields.g;
  r = maskColor.fields.r;
  if ( (byte_438E517 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_B775C4(&StringLiteral_18237/*"datalost_svt_select"*/);
    sub_B775C4(&StringLiteral_19879/*"img_frames_mask03"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E517 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_45;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v19 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetPartyOrganizationImage(v19, (System_String_o *)StringLiteral_18237/*"datalost_svt_select"*/, 0LL);
      v20 = this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)PartyOrganizationConfirmItemDraw_TypeInfo;
      if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
      }
      if ( !v20 )
        goto LABEL_45;
      gameObject = (UnityEngine_Component_o *)v20;
      DATA_LOST_MASK_HEIGHT = PartyOrganizationConfirmItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT;
    }
    else
    {
      if ( !v19 )
        goto LABEL_45;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_45;
      v22 = maskName ? maskName : (System_String_o *)StringLiteral_19879/*"img_frames_mask03"*/;
      UISprite__set_spriteName((UISprite_o *)gameObject, v22, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_45;
      DATA_LOST_MASK_HEIGHT = this->fields.maskSpriteDefaultHeight;
    }
    UIWidget__set_height((UIWidget_o *)gameObject, DATA_LOST_MASK_HEIGHT, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_45;
    v31.fields.r = r;
    v31.fields.g = g;
    v31.fields.b = b;
    v31.fields.a = a;
    UIWidget__set_color((UIWidget_o *)gameObject, v31, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_45;
    if ( isScale )
    {
      LODWORD(v23) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_45;
      v24 = v23;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      transform = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v24 > restrictionMaskMessageWidth )
      {
        v27 = 1.0;
        v28 = restrictionMaskMessageWidth / v24;
        v29 = 1.0;
        if ( !gameObject )
          goto LABEL_45;
        goto LABEL_35;
      }
    }
    else
    {
      transform = UnityEngine_Component__get_transform(gameObject, 0LL);
    }
    *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_45;
LABEL_35:
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v28, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_45:
    sub_B7769C(gameObject, v17);
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
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v10; // x28
  __int64 v11; // x22
  int32_t size; // w27
  __int64 v13; // x23
  bool v14; // w19
  il2cpp_array_size_t v15; // w19
  const MethodInfo *v16; // x7
  __int64 v17; // x8
  __int64 v18; // x9
  int32_t v19; // w24
  __int64 v20; // x8
  int32_t v21; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v23; // w4
  bool IsHideRarity; // w26
  int32_t v25; // w24
  int32_t v26; // w8
  PartyOrganizationConfirmItemDraw_c *v27; // x0
  UnityEngine_GameObject_o *v28; // x20
  __int64 v29; // x0
  UnityEngine_GameObject_o *self; // [xsp+0h] [xbp-70h]
  bool v31; // [xsp+8h] [xbp-68h]
  bool v32; // [xsp+Ch] [xbp-64h]
  NpcServantFollowerMaster_o *Master_WarQuestSelectionMaster; // [xsp+10h] [xbp-60h]
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+18h] [xbp-58h] BYREF

  v10 = itemList;
  if ( (byte_438E519 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)sub_B775C4(&PartyOrganizationConfirmItemDraw_TypeInfo);
    byte_438E519 = 1;
  }
  npcServantFollowerEntity = 0LL;
  if ( !v10 )
    goto LABEL_55;
  self = supportMemberBase;
  if ( !supportMemberObjectList )
    goto LABEL_55;
  v11 = *(_QWORD *)&supportMemberObjectList->max_length;
  size = v10->fields._size;
  if ( (int)v11 >= 1 )
  {
    v13 = 4LL;
    v32 = isAdjustPosY;
    v14 = size > 0;
    v31 = isSimpleDisp;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)*((_QWORD *)&supportMemberObjectList->obj.klass
                                                                                     + v13);
      if ( !itemList )
        break;
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)itemList,
                                                                                       0LL);
      if ( !itemList )
        break;
      if ( v14 )
      {
        v15 = v13 - 4;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 1, 0LL);
        if ( v10->fields._size <= (unsigned int)(v13 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v17 = *((_QWORD *)&v10->fields._items->obj.klass + v13);
        if ( !v17 )
          break;
        if ( !*(_QWORD *)(v17 + 168) )
          goto LABEL_40;
        if ( v10->fields._size <= v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v18 = *(_QWORD *)(v17 + 168);
        if ( !v18 )
          break;
        v19 = *(_DWORD *)(v18 + 36);
        if ( v10->fields._size <= v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v20 = *(_QWORD *)(v17 + 168);
        if ( !v20 )
          break;
        v21 = *(_DWORD *)(v20 + 40);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (NpcServantFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
        if ( v10->fields._size <= v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)*((_QWORD *)&v10->fields._items->obj.klass
                                                                                       + v13);
        if ( !itemList )
          break;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)itemList, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(SvtId, 0LL);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)Master_WarQuestSelectionMaster;
        if ( !Master_WarQuestSelectionMaster )
          break;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                                                         Master_WarQuestSelectionMaster,
                                                                                         &npcServantFollowerEntity,
                                                                                         v19,
                                                                                         v21,
                                                                                         v23,
                                                                                         0LL);
        if ( ((unsigned __int8)itemList & 1) != 0 )
        {
          if ( !npcServantFollowerEntity )
            break;
          IsHideRarity = NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
          if ( !npcServantFollowerEntity || !itemList )
            break;
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerMaster__GetEntity_23609256(
                                                                                           (NpcFollowerMaster_o *)itemList,
                                                                                           v19,
                                                                                           v21,
                                                                                           npcServantFollowerEntity->fields.id,
                                                                                           0LL);
          if ( itemList )
          {
            itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerEntity__GetImageSvtId(
                                                                                             (NpcFollowerEntity_o *)itemList,
                                                                                             0LL);
            v25 = (int)itemList;
          }
          else
          {
            v25 = 0;
          }
        }
        else
        {
LABEL_40:
          v25 = 0;
          IsHideRarity = 0;
        }
        if ( v15 >= supportMemberObjectList->max_length )
          goto LABEL_56;
        if ( v10->fields._size <= v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        if ( !*((_QWORD *)&supportMemberObjectList->obj.klass + v13) )
          break;
        PartyOrganizationConfirmItemDraw__SetItem(
          *((PartyOrganizationConfirmItemDraw_o **)&supportMemberObjectList->obj.klass + v13),
          *((PartyOrganizationListViewItem_o **)&v10->fields._items->obj.klass + v13),
          2,
          v32,
          IsHideRarity,
          v25,
          v31,
          v16);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
      }
      v26 = v13 - 3;
      if ( (int)v13 - 3 >= (int)v11 )
        goto LABEL_50;
      ++v13;
      v14 = v26 < size;
      if ( (unsigned int)(v13 - 4) >= supportMemberObjectList->max_length )
      {
LABEL_56:
        v29 = sub_B776C8(itemList);
        sub_B77668(v29, 0LL);
      }
    }
LABEL_55:
    sub_B7769C(itemList, supportMemberObjectList);
  }
LABEL_50:
  v27 = PartyOrganizationConfirmItemDraw_TypeInfo;
  if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v28 = self;
    if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
      v27 = PartyOrganizationConfirmItemDraw_TypeInfo;
    }
  }
  else
  {
    v28 = self;
  }
  GameObjectExtensions__SetLocalPositionX(v28, (float)(v27->static_fields->ICON_OFFSET_SIZE * (1 - size)), 0LL);
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
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  __int64 v14; // x1
  UnityEngine_Component_o *gameObject; // x0
  UIWidget_o *v16; // x22
  int v17; // s0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  float v24; // s0
  float v25; // s8
  int32_t restrictionWarningMessageWidth; // s0
  UnityEngine_Transform_o *transform; // x19
  float v28; // s0
  float v29; // s1
  float v30; // s0
  float v31; // s2

  if ( (byte_438E518 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_19879/*"img_frames_mask03"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E518 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isMask, 0LL);
    if ( isMask )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_31;
      UISprite__set_atlas((UISprite_o *)gameObject, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_31;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19879/*"img_frames_mask03"*/, 0LL);
      v16 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_black(0LL);
      if ( !v16 )
        goto LABEL_31;
      UIWidget__set_color(v16, *(UnityEngine_Color_o *)&v17, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_31;
      UIWidget__set_height((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultHeight, 0LL);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_31;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
          v22 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v22, iconPosY, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
          if ( gameObject )
          {
            v23 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
            GameObjectExtensions__SetLocalPositionY(v23, msgPosY, 0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
              gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
              if ( gameObject )
              {
                if ( isScale )
                {
                  LODWORD(v24) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
                  gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
                  if ( !gameObject )
                    goto LABEL_31;
                  v25 = v24;
                  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                  restrictionWarningMessageWidth = this->fields.restrictionWarningMessageWidth;
                  transform = (UnityEngine_Transform_o *)gameObject;
                  v28 = (float)restrictionWarningMessageWidth;
                  if ( v25 > v28 )
                  {
                    v29 = 1.0;
                    v30 = v28 / v25;
                    v31 = 1.0;
                    if ( !gameObject )
                      goto LABEL_31;
                    goto LABEL_35;
                  }
                }
                else
                {
                  transform = UnityEngine_Component__get_transform(gameObject, 0LL);
                }
                *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_one(0LL);
                if ( transform )
                {
LABEL_35:
                  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v30, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B7769C(gameObject, v14);
  }
}