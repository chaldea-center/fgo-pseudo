void __fastcall PartyOrganizationConfirmItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4BD819A & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationConfirmItemDraw_TypeInfo);
    byte_4BD819A = 1;
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
  struct UISprite_o *v6; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v8; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4BD8194 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8194 = 1;
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
    v6 = this->fields.restrictionMaskSprite;
    if ( !v6 )
      goto LABEL_16;
    mAtlas = v6->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    restrictionMaskMessageText = (UIWidget_o *)sub_1C21DDC(&this->fields.maskSpriteDefaultAtlas, mAtlas);
    v8 = this->fields.restrictionMaskSprite;
    if ( !v8 )
      goto LABEL_16;
    this->fields.maskSpriteDefaultHeight = v8->fields.mHeight;
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
    sub_1C22094(restrictionMaskMessageText, v4);
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

  if ( (byte_4BD8196 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8196 = 1;
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
    sub_1C22094(gameObject, v4);
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
  const MethodInfo *v30; // x1
  UnityEngine_Object_o *v31; // x23
  UnityEngine_Object_o *v32; // x23
  UILabel_o *v33; // x23
  const MethodInfo *v34; // x1
  Il2CppObject *Master_object; // x23
  NetworkManager_c *v36; // x0
  int64_t userIdNumber; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  ServantFaceIconComponent_o *v39; // x23
  UserServantCollectionEntity_o *v40; // x25
  UserServantEntity_o *v41; // x24
  UnityEngine_Object_o *v42; // x23
  UnityEngine_Object_o *maskEquipSprite; // x23
  UISprite_o *v44; // x23
  UnityEngine_Object_o *v45; // x23
  UILabel_o *v46; // x23
  System_Int32_array *v47; // x0
  UnityEngine_Object_o *v48; // x23
  System_Int32_array *v49; // x24
  UISprite_o *v50; // x0
  System_String_o *v51; // x1
  UnityEngine_Object_o *v52; // x23
  UnityEngine_Object_c *v53; // x0
  __int64 *v54; // x8
  System_String_o *v55; // x23
  UnityEngine_Object_o *v56; // x24
  ServantEntity_o *servantEntity; // x0
  const MethodInfo *v58; // x1
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v60; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v62; // w0
  System_Int32_array *CommandCardList; // x0
  UnityEngine_Object_o *supportSprite; // x25
  System_String_o *v65; // x1
  UnityEngine_Object_o *v66; // x23
  UnityEngine_Object_o *v67; // x23
  int32_t v68; // w23
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // kr20_16
  ServantFaceIconComponent_o *v71; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // kr30_16
  int32_t v73; // w0
  int32_t svtLimitCount; // w26
  int32_t v75; // w27
  const MethodInfo *v76; // x1
  UnityEngine_Object_o *v77; // x23
  bool v78; // w1
  struct UILabel_array *commandLabelList; // x8
  __int64 v80; // x26
  int32_t v81; // w21
  int max_length; // w9
  UILabel_o *v83; // x22
  UnityEngine_Object_o *memberTypeBaseSprite; // x21
  int32_t index; // w21
  System_String_o **v86; // x8
  UISprite_o *memberTypeSprite; // x21
  System_String_o *v88; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  const MethodInfo *v90; // x1
  UserServantEntity_o *v91; // x0
  __int64 *v92; // x8
  System_String_o *v93; // x1
  const MethodInfo *v94; // x5
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  PartyOrganizationConfirmItemDraw_o *v99; // x0
  System_String_o *v100; // x3
  int v101; // w24
  const MethodInfo *v102; // x1
  const MethodInfo *v103; // x5
  System_String_o *v104; // x0
  System_String_o *v105; // x1
  float v106; // s0
  float v107; // s1
  float v108; // s2
  float v109; // s3
  PartyOrganizationConfirmItemDraw_o *v110; // x0
  System_String_o *v111; // x3
  bool v112; // w4
  __int64 *v113; // x8
  System_String_o *v114; // x1
  const MethodInfo *v115; // x4
  float v116; // s0
  float v117; // s1
  PartyOrganizationConfirmItemDraw_o *v118; // x0
  bool v119; // w3
  int64_t fatigureTime; // x21
  System_String_o *v121; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  _DWORD *v123; // x8
  Il2CppObject *v124; // x21
  const MethodInfo *v125; // x1
  __int64 v126; // x22
  __int64 v127; // x23
  int32_t SvtClassId; // w21
  UserServantEntity_o *v129; // x0
  __int64 methodPtr_low; // x9
  __int64 v131; // x22
  int32_t v132; // w22
  int32_t v133; // w20
  struct ServantClassCompatibilityIconComponent_o *v134; // x8
  System_String_o *v135; // x21
  __int64 v136; // x2
  __int64 v137; // x3
  __int64 v138; // x4
  Il2CppObject *v139; // x0
  PartyOrganizationCommandCardMenu_o *v140; // x0
  const MethodInfo *v141; // x1
  int32_t TimesToRestart_k__BackingField; // [xsp+54h] [xbp-7Ch] BYREF
  UnityEngine_Color_o color; // [xsp+58h] [xbp-78h] BYREF
  int v144; // [xsp+6Ch] [xbp-64h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16

  if ( (byte_4BD8195 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&PartyOrganizationRootComponent_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&UserServantEntity_TypeInfo);
    sub_1C21E38(&StringLiteral_20546/*"icon_support_02"*/);
    sub_1C21E38(&StringLiteral_15773/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/);
    sub_1C21E38(&StringLiteral_10486/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/);
    sub_1C21E38(&StringLiteral_10489/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1C21E38(&StringLiteral_11731/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/);
    sub_1C21E38(&StringLiteral_11732/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1C21E38(&StringLiteral_11726/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_1C21E38(&StringLiteral_20676/*"img_frames_mask11"*/);
    sub_1C21E38(&StringLiteral_10485/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1C21E38(&StringLiteral_21771/*"member_txt_"*/);
    sub_1C21E38(&StringLiteral_11725/*"SELECT_NO_SORTIE"*/);
    sub_1C21E38(&StringLiteral_20545/*"icon_support_01"*/);
    sub_1C21E38(&StringLiteral_20505/*"icon_eventjoin_02"*/);
    sub_1C21E38(&StringLiteral_19919/*"formation_txtbg_03"*/);
    sub_1C21E38(&StringLiteral_15771/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/);
    sub_1C21E38(&StringLiteral_19888/*"formation_blank_small"*/);
    sub_1C21E38(&StringLiteral_20679/*"img_frames_mask14"*/);
    sub_1C21E38(&StringLiteral_18788/*"datalost_svt_select"*/);
    sub_1C21E38(&StringLiteral_435/*"#042484"*/);
    sub_1C21E38(&StringLiteral_19916/*"formation_support_small"*/);
    sub_1C21E38(&StringLiteral_19918/*"formation_txtbg_02"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_10487/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/);
    sub_1C21E38(&StringLiteral_20507/*"icon_friend"*/);
    sub_1C21E38(&StringLiteral_10488/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/);
    sub_1C21E38(&StringLiteral_20506/*"icon_follow"*/);
    byte_4BD8195 = 1;
  }
  entity = 0LL;
  v144 = 0;
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
      lv = PartyOrganizationListViewItem__get_ServantLeader(item, (const MethodInfo *)v16);
      followerInfo = item->fields.followerInfo;
      if ( !followerInfo || !servantFaceIcon )
        goto LABEL_203;
      ServantFaceIconComponent__Set_39468548(
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
        v24 = item->fields.followerInfo;
        if ( !v24 )
          goto LABEL_203;
        type = v24->fields.type;
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
          v26 = &StringLiteral_20545/*"icon_support_01"*/;
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
          v26 = &StringLiteral_20506/*"icon_follow"*/;
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
          v26 = &StringLiteral_20507/*"icon_friend"*/;
LABEL_134:
          UISprite__set_spriteName((UISprite_o *)lv, (System_String_o *)*v26, 0LL);
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
      CommandCardList = PartyOrganizationListViewItem__GetCommandCardList(item, (const MethodInfo *)v16);
      supportSprite = (UnityEngine_Object_o *)this->fields.supportSprite;
      v49 = CommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
      {
        lv = this->fields.supportSprite;
        if ( !lv )
          goto LABEL_203;
        if ( item->fields.isFollower )
          v65 = (System_String_o *)StringLiteral_20546/*"icon_support_02"*/;
        else
          v65 = 0LL;
        UISprite__set_spriteName((UISprite_o *)lv, v65, 0LL);
      }
      if ( isSimpleDisp )
      {
        v66 = (UnityEngine_Object_o *)this->fields.typeSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v66, 0LL, 0LL) )
        {
          lv = this->fields.typeSprite;
          if ( !lv )
            goto LABEL_203;
          lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
          if ( !lv )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
        }
        v67 = (UnityEngine_Object_o *)this->fields.supportSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v67, 0LL, 0LL) )
        {
          lv = this->fields.supportSprite;
          if ( !lv )
            goto LABEL_203;
          UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
        }
        lv = this->fields.servantFaceIcon;
        if ( !lv )
LABEL_203:
          sub_1C22094(lv, v16);
        ServantFaceIconComponent__ClearEquip((ServantFaceIconComponent_o *)lv, 0LL);
      }
LABEL_161:
      v55 = 0LL;
      if ( !isAdjustPosY )
        goto LABEL_184;
      goto LABEL_179;
    }
    if ( !servantFaceIcon )
      goto LABEL_203;
    ServantFaceIconComponent__Clear(this->fields.servantFaceIcon, 0LL);
    v52 = (UnityEngine_Object_o *)this->fields.typeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v52, 0LL, 0LL) )
    {
      lv = this->fields.typeSprite;
      if ( !lv )
        goto LABEL_203;
      lv = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lv, 0LL);
      if ( !lv )
        goto LABEL_203;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 0, 0LL);
    }
    v53 = UnityEngine_Object_TypeInfo;
    v54 = &StringLiteral_19916/*"formation_support_small"*/;
    goto LABEL_108;
  }
  v27 = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
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
    v29 = this->fields.servantFaceIcon;
    lv = PartyOrganizationListViewItem__GetEquipList(item, (const MethodInfo *)v16);
    if ( !v29 )
      goto LABEL_203;
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
      v31 = (UnityEngine_Object_o *)this->fields.maskServantObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
      {
        lv = this->fields.maskServantObj;
        if ( !lv )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lv, 1, 0LL);
      }
      v32 = (UnityEngine_Object_o *)this->fields.maskServantLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
      {
        v33 = this->fields.maskServantLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        lv = LocalizationManager__Get((System_String_o *)StringLiteral_15773/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0LL);
        if ( !v33 )
          goto LABEL_203;
        UILabel__set_text(v33, (System_String_o *)lv, 0LL);
      }
    }
    if ( item->fields._IsDisappearEquip_k__BackingField )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      v36 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v36 = NetworkManager_TypeInfo;
      }
      userIdNumber = v36->static_fields->userIdNumber;
      EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(item, v34);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(EquipSvtId, 0LL);
      if ( !Master_object )
        goto LABEL_203;
      if ( UserServantCollectionMaster__TryGetEntity(
             (UserServantCollectionMaster_o *)Master_object,
             &entity,
             userIdNumber,
             (int32_t)lv,
             0LL) )
      {
        v39 = this->fields.servantFaceIcon;
        v40 = entity;
        v41 = (UserServantEntity_o *)sub_1C22084(UserServantEntity_TypeInfo);
        UserServantEntity___ctor_41466424(v41, v40, 0LL);
        if ( !v39 )
          goto LABEL_203;
        ServantFaceIconComponent__SetEquip(v39, v41, 0LL);
        v42 = (UnityEngine_Object_o *)this->fields.maskEquipObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
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
          v44 = this->fields.maskEquipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(v44, (System_String_o *)StringLiteral_20679/*"img_frames_mask14"*/, 0LL);
        }
        v45 = (UnityEngine_Object_o *)this->fields.maskEquipLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
        {
          v46 = this->fields.maskEquipLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          lv = LocalizationManager__Get((System_String_o *)StringLiteral_15771/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0LL);
          if ( !v46 )
            goto LABEL_203;
          UILabel__set_text(v46, (System_String_o *)lv, 0LL);
        }
      }
    }
    v47 = PartyOrganizationListViewItem__GetCommandCardList(item, v30);
    v48 = (UnityEngine_Object_o *)this->fields.supportSprite;
    v49 = v47;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
    {
      lv = item->fields.userServantEntity;
      if ( !lv )
        goto LABEL_203;
      lv = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)lv, 0LL);
      if ( !this->fields.supportSprite )
        goto LABEL_203;
      if ( ((unsigned __int8)lv & 1) != 0 )
      {
        v50 = this->fields.supportSprite;
        v51 = (System_String_o *)StringLiteral_20505/*"icon_eventjoin_02"*/;
      }
      else
      {
        v50 = this->fields.supportSprite;
        v51 = 0LL;
      }
      UISprite__set_spriteName(v50, v51, 0LL);
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
    v53 = UnityEngine_Object_TypeInfo;
    v54 = &StringLiteral_19888/*"formation_blank_small"*/;
LABEL_108:
    v55 = (System_String_o *)*v54;
    v56 = (UnityEngine_Object_o *)this->fields.supportSprite;
    if ( !v53->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v53);
    if ( UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
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
      lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !lv )
        goto LABEL_203;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)lv,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(item, v60);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(SvtId, 0LL);
      if ( !MasterData_object )
        goto LABEL_203;
      lv = UserServantMaster__getHeroineData((UserServantMaster_o *)MasterData_object, (int32_t)lv, 0LL);
      if ( !item->fields.questRestrictionInfo )
        goto LABEL_203;
      v62 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41734096(
              item->fields.questRestrictionInfo,
              (UserServantEntity_o *)lv,
              0LL);
    }
    else
    {
      questRestrictionInfo = item->fields.questRestrictionInfo;
      v70 = PartyOrganizationListViewItem__get_SvtId(item, v58);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v70, 0LL);
      if ( !questRestrictionInfo )
        goto LABEL_203;
      v62 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount(questRestrictionInfo, (int32_t)lv, 0LL);
    }
    v68 = v62;
  }
  else
  {
    v68 = -1;
  }
  v71 = this->fields.servantFaceIcon;
  v72 = PartyOrganizationListViewItem__get_SvtId(item, (const MethodInfo *)v16);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v72, 0LL);
  svtLimitCount = item->fields.svtLimitCount;
  v75 = v73;
  lv = (void *)PartyOrganizationListViewItem__get_Level(item, v76);
  if ( !v71 )
    goto LABEL_203;
  ServantFaceIconComponent__Set_39461076(
    v71,
    v75,
    svtLimitCount,
    v68,
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
  v77 = (UnityEngine_Object_o *)this->fields.supportSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v77, 0LL, 0LL) )
  {
    lv = this->fields.supportSprite;
    if ( !lv )
      goto LABEL_203;
    UISprite__set_spriteName((UISprite_o *)lv, 0LL, 0LL);
  }
  v55 = 0LL;
LABEL_178:
  v49 = 0LL;
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
    v78 = 1;
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
    v78 = 0;
  }
  ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)lv, v78, 0LL);
  commandLabelList = this->fields.commandLabelList;
  if ( !commandLabelList )
    goto LABEL_203;
  v80 = 0LL;
  v81 = (_DWORD)v49 + 32;
  while ( 1 )
  {
    max_length = commandLabelList->max_length;
    if ( (int)v80 >= max_length )
      break;
    if ( (unsigned int)v80 >= max_length )
      goto LABEL_319;
    v83 = commandLabelList->m_Items[v80];
    if ( v49 )
    {
      if ( (unsigned int)v80 >= v49->max_length )
LABEL_319:
        sub_1C2209C(lv, v16);
      lv = System_Int32__ToString(v81, 0LL);
      v16 = (PartyOrganizationRootComponent_c *)lv;
      if ( !v83 )
        goto LABEL_203;
    }
    else
    {
      v16 = (PartyOrganizationRootComponent_c *)StringLiteral_1/*""*/;
      if ( !v83 )
        goto LABEL_203;
    }
    UILabel__set_text(v83, (System_String_o *)v16, 0LL);
    commandLabelList = this->fields.commandLabelList;
    ++v80;
    v81 += 4;
    if ( !commandLabelList )
      goto LABEL_203;
  }
  lv = this->fields.baseSprite;
  if ( !lv )
    goto LABEL_203;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 0, 0LL);
  if ( v55 )
  {
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_203;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)lv, 1, 0LL);
    lv = this->fields.baseSprite;
    if ( !lv )
      goto LABEL_203;
    UISprite__set_spriteName((UISprite_o *)lv, v55, 0LL);
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
    v86 = (System_String_o **)(index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax
                             ? &StringLiteral_19919/*"formation_txtbg_03"*/
                             : &StringLiteral_19918/*"formation_txtbg_02"*/);
    UISprite__set_spriteName((UISprite_o *)lv, *v86, 0LL);
    memberTypeSprite = this->fields.memberTypeSprite;
    v144 = item->fields.index + 1;
    v88 = System_Int32__ToString((int32_t)&v144, 0LL);
    lv = System_String__Concat_63115476((System_String_o *)StringLiteral_21771/*"member_txt_"*/, v88, 0LL);
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
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    v91 = item->fields.userServantEntity;
    if ( v91 && UserServantEntity__IsLeave(v91, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v92 = &StringLiteral_11725/*"SELECT_NO_SORTIE"*/;
LABEL_229:
      v93 = LocalizationManager__Get((System_String_o *)*v92, 0LL);
      r = 0.0;
      g = 0.0;
      b = 0.0;
      a = 1.0;
      v99 = this;
      v100 = 0LL;
LABEL_230:
      PartyOrganizationConfirmItemDraw__SetMaskMessage(v99, v93, *(UnityEngine_Color_o *)&r, 0, v100, 0, v94);
      v101 = 1;
      goto LABEL_268;
    }
    if ( PartyOrganizationListViewItem__get_IsQuestRestriction(item, v90)
      && (item->fields.userServantEntity || item->fields.isFollower) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v104 = LocalizationManager__Get((System_String_o *)StringLiteral_10485/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
LABEL_237:
      v105 = v104;
      v106 = 0.0;
      v107 = 0.0;
      v108 = 0.0;
      v109 = 1.0;
      v110 = this;
      v111 = 0LL;
      v112 = 0;
LABEL_238:
      v101 = 1;
      PartyOrganizationConfirmItemDraw__SetMaskMessage(v110, v105, *(UnityEngine_Color_o *)&v106, 1, v111, v112, v103);
      goto LABEL_268;
    }
    if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v113 = &StringLiteral_10486/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_244:
      v114 = LocalizationManager__Get((System_String_o *)*v113, 0LL);
      v116 = 0.0;
      v117 = 0.0;
      v118 = this;
      v119 = 0;
LABEL_245:
      v101 = 1;
      PartyOrganizationConfirmItemDraw__SetWarningMessage(v118, v114, 1, v119, v116, v117, v115);
      goto LABEL_268;
    }
    if ( item->fields.isFixedSupportPositionRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v113 = &StringLiteral_10487/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/;
      goto LABEL_244;
    }
    if ( item->fields.isFixedServantPositionRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v113 = &StringLiteral_10488/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/;
      goto LABEL_244;
    }
    fatigureTime = item->fields.fatigureTime;
    if ( (fatigureTime & 0x8000000000000000LL) != 0 )
    {
      if ( item->fields._IsAllOutBattle_k__BackingField )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v92 = &StringLiteral_11726/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
        goto LABEL_229;
      }
      if ( item->fields._IsNotSupportSingle_k__BackingField )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v114 = LocalizationManager__Get((System_String_o *)StringLiteral_10489/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
        v116 = 10.0;
        v117 = -22.0;
        v119 = 1;
        v118 = this;
        goto LABEL_245;
      }
      if ( item->fields._IsDataLost_k__BackingField )
      {
        v105 = (System_String_o *)StringLiteral_1/*""*/;
        v106 = 1.0;
        v107 = 1.0;
        v108 = 1.0;
        v111 = (System_String_o *)StringLiteral_18788/*"datalost_svt_select"*/;
        v109 = 1.0;
        v112 = 1;
        v110 = this;
        goto LABEL_238;
      }
      if ( item->fields._TimesToRestart_k__BackingField >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v135 = LocalizationManager__Get((System_String_o *)StringLiteral_11732/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
        TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
        v139 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v136, v137, v138);
        v104 = System_String__Format(v135, v139, 0LL);
        goto LABEL_237;
      }
    }
    else
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( fatigureTime > NetworkManager__getTime(0LL) )
      {
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_435/*"#042484"*/, &color, 0LL);
        color.fields.a = 0.69804;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v121 = LocalizationManager__Get((System_String_o *)StringLiteral_11731/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, 0LL);
        r = color.fields.r;
        g = color.fields.g;
        b = color.fields.b;
        a = color.fields.a;
        v93 = v121;
        v99 = this;
        v100 = (System_String_o *)StringLiteral_20676/*"img_frames_mask11"*/;
        goto LABEL_230;
      }
      item->fields.fatigureTime = -1LL;
    }
    PartyOrganizationConfirmItemDraw__ClearMessage(this, v102);
  }
  v101 = 0;
LABEL_268:
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
    return;
  if ( !item->fields.isFollower )
  {
    v129 = item->fields.userServantEntity;
    if ( v129 )
    {
      SvtClassId = UserServantEntity__getSvtClassId(v129, 0, 0LL);
    }
    else
    {
      v123 = item->fields.servantEntity;
      if ( !v123 )
        goto LABEL_286;
      SvtClassId = v123[20];
    }
    LODWORD(v123) = 0;
    goto LABEL_287;
  }
  v123 = item->fields.followerInfo;
  if ( !v123 )
  {
LABEL_286:
    SvtClassId = 0;
    goto LABEL_287;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_203;
  v124 = DataManager__GetMasterData_object_(
           (DataManager_o *)lv,
           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, v125);
  if ( !lv )
    goto LABEL_203;
  v127 = *((_QWORD *)lv + 6);
  v126 = *((_QWORD *)lv + 7);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v146.fields.currentCryptoKey = v127;
  *(_QWORD *)&v146.fields.fakeValue = v126;
  lv = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v146, 0LL);
  if ( !v124 )
    goto LABEL_203;
  lv = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v124,
         (int32_t)lv,
         (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !lv )
    goto LABEL_203;
  SvtClassId = *((_DWORD *)lv + 20);
  lv = PartyOrganizationListViewItem__get_ServantLeader(item, (const MethodInfo *)v16);
  if ( !lv )
    goto LABEL_203;
  LODWORD(v123) = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)lv, 0LL);
LABEL_287:
  if ( (unsigned int)v123 | v101 | (SvtClassId == 0) )
  {
    lv = this->fields.classCompatibilityIcon;
    if ( !lv )
      goto LABEL_203;
    goto LABEL_307;
  }
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_203;
  lv = (void *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)lv, 40, 0LL);
  if ( ((unsigned __int8)lv & 1) == 0 )
    goto LABEL_304;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !lv )
    goto LABEL_203;
  lv = (void *)*((_QWORD *)lv + 4);
  if ( !lv )
    goto LABEL_203;
  v16 = PartyOrganizationRootComponent_TypeInfo;
  methodPtr_low = LOBYTE(PartyOrganizationRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)lv + 304LL) < (unsigned int)methodPtr_low
    || *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)lv + 200LL) + 8 * methodPtr_low - 8) != PartyOrganizationRootComponent_TypeInfo )
  {
    v140 = (PartyOrganizationCommandCardMenu_o *)sub_1C22354(lv);
    PartyOrganizationCommandCardMenu__EndOpen(v140, v141);
    return;
  }
  v131 = *((_QWORD *)lv + 62);
  if ( !v131
    || (lv = (void *)BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)lv + 62), 0LL), !(_DWORD)lv)
    || (v132 = *(_DWORD *)(v131 + 24)) == 0 )
  {
LABEL_304:
    v134 = this->fields.classCompatibilityIcon;
    goto LABEL_305;
  }
  v133 = (int)lv;
  lv = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lv )
    goto LABEL_203;
  lv = DataManager__GetMasterData_object_(
         (DataManager_o *)lv,
         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !lv )
    goto LABEL_203;
  lv = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)lv, v133, v132, 0LL);
  v134 = this->fields.classCompatibilityIcon;
  if ( !lv )
  {
LABEL_305:
    if ( !v134 )
      goto LABEL_203;
    lv = v134;
LABEL_307:
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)lv, 0LL);
    return;
  }
  if ( !v134 )
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
  UnityEngine_Object_o *restrictionMaskSprite; // x24
  __int64 v17; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v19; // x24
  UIWidget_o *v20; // x22
  int32_t *p_DATA_LOST_MASK_HEIGHT; // x8
  System_String_o *v22; // x1
  float v23; // s0
  float v24; // s8
  UnityEngine_Transform_o *v25; // x20
  float restrictionMaskMessageWidth; // s0
  float x; // s0
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
  if ( (byte_4BD8197 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1C21E38(&StringLiteral_18788/*"datalost_svt_select"*/);
    sub_1C21E38(&StringLiteral_20672/*"img_frames_mask03"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8197 = 1;
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
    v19 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(v19, (System_String_o *)StringLiteral_18788/*"datalost_svt_select"*/, 0LL);
      v20 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)PartyOrganizationConfirmItemDraw_TypeInfo;
      if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
      if ( !v20 )
        goto LABEL_46;
      p_DATA_LOST_MASK_HEIGHT = &PartyOrganizationConfirmItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT;
    }
    else
    {
      if ( !v19 )
        goto LABEL_46;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_46;
      v22 = maskName ? maskName : (System_String_o *)StringLiteral_20672/*"img_frames_mask03"*/;
      UISprite__set_spriteName((UISprite_o *)gameObject, v22, 0LL);
      v20 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( !v20 )
        goto LABEL_46;
      p_DATA_LOST_MASK_HEIGHT = &this->fields.maskSpriteDefaultHeight;
    }
    UIWidget__set_height(v20, *p_DATA_LOST_MASK_HEIGHT, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_46;
    v33.fields.r = r;
    v33.fields.g = g;
    v33.fields.b = b;
    v33.fields.a = a;
    UIWidget__set_color((UIWidget_o *)gameObject, v33, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_46;
    if ( isScale )
    {
      LODWORD(v23) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_46;
      v24 = v23;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v25 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v24 <= restrictionMaskMessageWidth )
      {
        if ( !byte_4BD6BB6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB6 = 1;
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
        goto LABEL_46;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v25 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4BD6BB6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB6 = 1;
      }
      if ( !v25 )
        goto LABEL_46;
      v30 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v30->oneVector.fields.y;
      z = v30->oneVector.fields.z;
      x = v30->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v25, *(UnityEngine_Vector3_o *)&x, 0LL);
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
    sub_1C22094(gameObject, v17);
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
  __int64 v11; // x22
  int32_t size; // w21
  il2cpp_array_size_t v13; // w23
  bool v14; // w26
  il2cpp_array_size_t v15; // w24
  Il2CppClass **v16; // x19
  PartyOrganizationConfirmItemDraw_o **v17; // x19
  System_Collections_Generic_List_PartyOrganizationListViewItem__o *v18; // t1
  _DWORD *monitor; // x8
  int32_t v20; // w25
  _DWORD *v21; // x8
  Il2CppObject *Master_object; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  bool IsHideRarity; // w27
  int32_t v25; // w25
  PartyOrganizationConfirmItemDraw_o *v26; // x26
  const MethodInfo *v27; // x7
  PartyOrganizationConfirmItemDraw_c *v29; // x0
  UnityEngine_GameObject_o *self; // [xsp+8h] [xbp-88h]
  __int64 v31; // [xsp+10h] [xbp-80h]
  bool v32; // [xsp+1Ch] [xbp-74h]
  bool v33; // [xsp+20h] [xbp-70h]
  int32_t questPhase; // [xsp+24h] [xbp-6Ch]
  NpcServantFollowerEntity_o *npcServantFollowerEntity; // [xsp+28h] [xbp-68h] BYREF

  v10 = (System_Collections_Generic_List_object__o *)itemList;
  if ( (byte_4BD8199 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)sub_1C21E38(&PartyOrganizationConfirmItemDraw_TypeInfo);
    byte_4BD8199 = 1;
  }
  npcServantFollowerEntity = 0LL;
  if ( !v10 )
    goto LABEL_44;
  self = supportMemberBase;
  if ( !supportMemberObjectList )
    goto LABEL_44;
  v11 = *(_QWORD *)&supportMemberObjectList->max_length;
  size = v10->fields._size;
  if ( (int)v11 >= 1 )
  {
    v13 = 1;
    v14 = size > 0;
    v32 = isSimpleDisp;
    v33 = isAdjustPosY;
    v31 = *(_QWORD *)&supportMemberObjectList->max_length;
    while ( 1 )
    {
      v15 = v13 - 1;
      v16 = &supportMemberObjectList->obj.klass + (int)(v13 - 1);
      v18 = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v16[4];
      v17 = (PartyOrganizationConfirmItemDraw_o **)(v16 + 4);
      itemList = v18;
      if ( !v18 )
        break;
      itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)itemList,
                                                                                       0LL);
      if ( !itemList )
        break;
      if ( v14 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 1, 0LL);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v15,
                                                                                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !itemList )
          break;
        if ( itemList[4].monitor )
        {
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                           v10,
                                                                                           v15,
                                                                                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
          if ( !itemList )
            break;
          monitor = itemList[4].monitor;
          if ( !monitor )
            break;
          v20 = monitor[9];
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                           v10,
                                                                                           v15,
                                                                                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
          if ( !itemList )
            break;
          v21 = itemList[4].monitor;
          if ( !v21 )
            break;
          questPhase = v21[10];
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                           v10,
                                                                                           v15,
                                                                                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
          if ( !itemList )
            break;
          SvtId = PartyOrganizationListViewItem__get_SvtId(
                    (PartyOrganizationListViewItem_o *)itemList,
                    (const MethodInfo *)supportMemberObjectList);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                                                           SvtId,
                                                                                           0LL);
          if ( !Master_object )
            break;
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
                                                                                           (NpcServantFollowerMaster_o *)Master_object,
                                                                                           &npcServantFollowerEntity,
                                                                                           v20,
                                                                                           questPhase,
                                                                                           (int32_t)itemList,
                                                                                           0LL);
          if ( ((unsigned __int8)itemList & 1) != 0 )
          {
            LODWORD(v11) = v31;
            if ( !npcServantFollowerEntity )
              break;
            IsHideRarity = NpcServantFollowerEntity__IsHideRarity(npcServantFollowerEntity->fields.flag, 0LL);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
            if ( !npcServantFollowerEntity || !itemList )
              break;
            itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerMaster__GetEntity_40696044(
                                                                                             (NpcFollowerMaster_o *)itemList,
                                                                                             v20,
                                                                                             questPhase,
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
            LODWORD(v11) = v31;
            v25 = 0;
            IsHideRarity = 0;
          }
        }
        else
        {
          v25 = 0;
          IsHideRarity = 0;
        }
        if ( v15 >= supportMemberObjectList->max_length )
          goto LABEL_40;
        v26 = *v17;
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)System_Collections_Generic_List_object___get_Item(
                                                                                         v10,
                                                                                         v15,
                                                                                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
        if ( !v26 )
          break;
        PartyOrganizationConfirmItemDraw__SetItem(
          v26,
          (PartyOrganizationListViewItem_o *)itemList,
          2,
          v33,
          IsHideRarity,
          v25,
          v32,
          v27);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
      }
      if ( (_DWORD)v11 == v13 )
        goto LABEL_41;
      v14 = (int)v13 < size;
      if ( v13++ >= supportMemberObjectList->max_length )
LABEL_40:
        sub_1C2209C(itemList, supportMemberObjectList);
    }
LABEL_44:
    sub_1C22094(itemList, supportMemberObjectList);
  }
LABEL_41:
  v29 = PartyOrganizationConfirmItemDraw_TypeInfo;
  if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
    v29 = PartyOrganizationConfirmItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(self, (float)(v29->static_fields->ICON_OFFSET_SIZE * (1 - size)), 0LL);
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
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  float v19; // s0
  float v20; // s8
  int32_t restrictionWarningMessageWidth; // s0
  UnityEngine_Transform_o *v22; // x19
  float v23; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v27; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD8198 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_20672/*"img_frames_mask03"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8198 = 1;
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
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20672/*"img_frames_mask03"*/, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_39;
      v29.fields.r = 0.0;
      v29.fields.g = 0.0;
      v29.fields.b = 0.0;
      v29.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, v29, 0LL);
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
          v17 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v17, iconPosY, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
          if ( gameObject )
          {
            v18 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
            GameObjectExtensions__SetLocalPositionY(v18, msgPosY, 0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
              gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
              if ( gameObject )
              {
                if ( isScale )
                {
                  LODWORD(v19) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
                  gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
                  if ( gameObject )
                  {
                    v20 = v19;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                    restrictionWarningMessageWidth = this->fields.restrictionWarningMessageWidth;
                    v22 = (UnityEngine_Transform_o *)gameObject;
                    v23 = (float)restrictionWarningMessageWidth;
                    if ( v20 <= v23 )
                    {
                      if ( !byte_4BD6BB6 )
                      {
                        gameObject = (UnityEngine_Component_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                        byte_4BD6BB6 = 1;
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
                      goto LABEL_38;
                  }
                }
                else
                {
                  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
                  v22 = (UnityEngine_Transform_o *)gameObject;
                  if ( !byte_4BD6BB6 )
                  {
                    gameObject = (UnityEngine_Component_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                    byte_4BD6BB6 = 1;
                  }
                  if ( v22 )
                  {
                    v27 = UnityEngine_Vector3_TypeInfo->static_fields;
                    y = v27->oneVector.fields.y;
                    z = v27->oneVector.fields.z;
                    x = v27->oneVector.fields.x;
LABEL_38:
                    UnityEngine_Transform__set_localScale(v22, *(UnityEngine_Vector3_o *)&x, 0LL);
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
    sub_1C22094(gameObject, v14);
  }
}