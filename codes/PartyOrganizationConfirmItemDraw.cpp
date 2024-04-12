void __fastcall PartyOrganizationConfirmItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_42B3567 & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationConfirmItemDraw_TypeInfo);
    byte_42B3567 = 1;
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

  if ( (byte_42B3561 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3561 = 1;
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
    sub_B52920(
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
    sub_B52A5C(restrictionMaskMessageText, v4);
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

  if ( (byte_42B3563 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B3563 = 1;
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
    sub_B52A5C(gameObject, v4);
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
  PartyOrganizationListViewItem_o *v13; // x20
  PartyOrganizationConfirmItemDraw_o *v14; // x19
  ServantFaceIconComponent_o *servantFaceIcon; // x24
  struct FollowerInfo_o *followerInfo; // x8
  UnityEngine_Object_o *typeSprite; // x24
  struct FollowerInfo_o *v18; // x8
  int32_t type; // w8
  __int64 *v20; // x8
  UnityEngine_Object_o *v21; // x23
  UserServantEntity_o *userServantEntity; // x23
  ServantFaceIconComponent_o *v23; // x24
  const MethodInfo *v24; // x1
  System_Int32_array *v25; // x0
  UnityEngine_Object_o *v26; // x23
  System_Int32_array *v27; // x24
  UISprite_o *v28; // x0
  System_String_o *v29; // x1
  UnityEngine_Object_o *v30; // x23
  UnityEngine_Object_c *v31; // x0
  __int64 *v32; // x8
  System_String_o *v33; // x23
  UnityEngine_Object_o *v34; // x24
  ServantEntity_o *servantEntity; // x0
  const MethodInfo *v36; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v38; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v40; // w0
  System_Int32_array *CommandCardList; // x0
  UnityEngine_Object_o *supportSprite; // x25
  System_String_o *v43; // x1
  UnityEngine_Object_o *v44; // x23
  UnityEngine_Object_o *v45; // x23
  int32_t v46; // w23
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // kr10_16
  ServantFaceIconComponent_o *v49; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // kr20_16
  int32_t v51; // w0
  int32_t svtLimitCount; // w26
  int32_t v53; // w27
  const MethodInfo *v54; // x1
  UnityEngine_Object_o *v55; // x23
  bool v56; // w1
  struct UILabel_array *commandLabelList; // x8
  __int64 v58; // x26
  int32_t v59; // w21
  int max_length; // w9
  UILabel_o *v61; // x22
  UnityEngine_Object_o *memberTypeBaseSprite; // x21
  int32_t index; // w21
  System_String_o **v64; // x8
  UISprite_o *memberTypeSprite; // x21
  System_String_o *v66; // x0
  UnityEngine_Object_o *restrictionMaskSprite; // x21
  const MethodInfo *v68; // x1
  UserServantEntity_o *v69; // x0
  __int64 *v70; // x8
  System_String_o *v71; // x21
  const MethodInfo *v72; // x5
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  PartyOrganizationConfirmItemDraw_o *v77; // x0
  System_String_o *v78; // x1
  System_String_o *v79; // x3
  int v80; // w24
  const MethodInfo *v81; // x1
  System_String_o *v82; // x0
  System_String_o *v83; // x21
  const MethodInfo *v84; // x5
  int v85; // s0
  PartyOrganizationConfirmItemDraw_o *v89; // x0
  System_String_o *v90; // x1
  System_String_o *v91; // x3
  bool v92; // w4
  __int64 *v93; // x8
  System_String_o *v94; // x1
  const MethodInfo *v95; // x4
  float v96; // s0
  float v97; // s1
  PartyOrganizationConfirmItemDraw_o *v98; // x0
  bool v99; // w3
  int64_t fatigureTime; // x21
  System_String_o *v101; // x0
  UnityEngine_Object_o *classCompatibilityIcon; // x21
  _DWORD *v103; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v104; // x21
  const MethodInfo *v105; // x1
  struct UISprite_o *v106; // x22
  struct UISprite_o *v107; // x23
  int32_t SvtClassId; // w21
  UserServantEntity_o *v109; // x0
  __int64 v110; // x9
  PartyOrganizationConfirmItemDraw_c *klass; // x22
  int32_t namespaze; // w22
  int32_t v113; // w20
  PartyOrganizationConfirmItemDraw_o *v114; // x8
  System_String_o *v115; // x21
  Il2CppObject *v116; // x0
  __int64 v117; // x0
  PartyOrganizationCommandCardMenu_o *v118; // x0
  const MethodInfo *v119; // x1
  int32_t TimesToRestart_k__BackingField; // [xsp+44h] [xbp-6Ch] BYREF
  UnityEngine_Color_o color; // [xsp+48h] [xbp-68h] BYREF
  int v122; // [xsp+5Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16

  v13 = item;
  v14 = this;
  if ( (byte_42B3562 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&PartyOrganizationRootComponent_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_19523/*"icon_support_02"*/);
    sub_B52984(&StringLiteral_10428/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/);
    sub_B52984(&StringLiteral_10431/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_B52984(&StringLiteral_11723/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/);
    sub_B52984(&StringLiteral_11724/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_B52984(&StringLiteral_11718/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_B52984(&StringLiteral_19636/*"img_frames_mask11"*/);
    sub_B52984(&StringLiteral_10427/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_B52984(&StringLiteral_20619/*"member_txt_"*/);
    sub_B52984(&StringLiteral_11717/*"SELECT_NO_SORTIE"*/);
    sub_B52984(&StringLiteral_19522/*"icon_support_01"*/);
    sub_B52984(&StringLiteral_19487/*"icon_eventjoin_02"*/);
    sub_B52984(&StringLiteral_18991/*"formation_txtbg_03"*/);
    sub_B52984(&StringLiteral_18961/*"formation_blank_small"*/);
    sub_B52984(&StringLiteral_18008/*"datalost_svt_select"*/);
    sub_B52984(&StringLiteral_356/*"#042484"*/);
    sub_B52984(&StringLiteral_18989/*"formation_support_small"*/);
    sub_B52984(&StringLiteral_18990/*"formation_txtbg_02"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_10429/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/);
    sub_B52984(&StringLiteral_19489/*"icon_friend"*/);
    sub_B52984(&StringLiteral_10430/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/);
    this = (PartyOrganizationConfirmItemDraw_o *)sub_B52984(&StringLiteral_19488/*"icon_follow"*/);
    byte_42B3562 = 1;
  }
  v122 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  if ( !v13 || !mode )
    return;
  if ( v13->fields.isFollower )
  {
    servantFaceIcon = v14->fields.servantFaceIcon;
    if ( v13->fields.followerInfo )
    {
      this = (PartyOrganizationConfirmItemDraw_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                     v13,
                                                     (const MethodInfo *)item);
      followerInfo = v13->fields.followerInfo;
      if ( !followerInfo || !servantFaceIcon )
        goto LABEL_150;
      ServantFaceIconComponent__Set_30396768(
        servantFaceIcon,
        (ServantLeaderInfo_o *)this,
        0LL,
        0LL,
        0,
        followerInfo->fields.imageSvtId,
        0LL);
      typeSprite = (UnityEngine_Object_o *)v14->fields.typeSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (PartyOrganizationConfirmItemDraw_o *)UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v18 = v13->fields.followerInfo;
        if ( !v18 )
          goto LABEL_150;
        type = v18->fields.type;
        if ( (unsigned int)(type - 3) < 2 )
        {
          this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
          if ( !this )
            goto LABEL_150;
          this = (PartyOrganizationConfirmItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
          if ( !this )
            goto LABEL_150;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
          if ( !this )
            goto LABEL_150;
          v20 = &StringLiteral_19522/*"icon_support_01"*/;
          goto LABEL_75;
        }
        if ( type == 5 )
        {
          this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
          if ( !this )
            goto LABEL_150;
          this = (PartyOrganizationConfirmItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
          if ( !this )
            goto LABEL_150;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
          if ( !this )
            goto LABEL_150;
          v20 = &StringLiteral_19488/*"icon_follow"*/;
          goto LABEL_75;
        }
        if ( type == 1 )
        {
          this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
          if ( !this )
            goto LABEL_150;
          this = (PartyOrganizationConfirmItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
          if ( !this )
            goto LABEL_150;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
          if ( !this )
            goto LABEL_150;
          v20 = &StringLiteral_19489/*"icon_friend"*/;
LABEL_75:
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v20, 0LL);
          this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
          if ( !this )
            goto LABEL_150;
          ((void (__fastcall *)(PartyOrganizationConfirmItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          goto LABEL_77;
        }
        this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
        if ( !this )
          goto LABEL_150;
        this = (PartyOrganizationConfirmItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
        if ( !this )
          goto LABEL_150;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
LABEL_77:
      CommandCardList = PartyOrganizationListViewItem__GetCommandCardList(v13, (const MethodInfo *)item);
      supportSprite = (UnityEngine_Object_o *)v14->fields.supportSprite;
      v27 = CommandCardList;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(supportSprite, 0LL, 0LL) )
      {
        this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.supportSprite;
        if ( !this )
          goto LABEL_150;
        if ( v13->fields.isFollower )
          v43 = (System_String_o *)StringLiteral_19523/*"icon_support_02"*/;
        else
          v43 = 0LL;
        UISprite__set_spriteName((UISprite_o *)this, v43, 0LL);
      }
      if ( isSimpleDisp )
      {
        v44 = (UnityEngine_Object_o *)v14->fields.typeSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v44, 0LL, 0LL) )
        {
          this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
          if ( !this )
            goto LABEL_150;
          this = (PartyOrganizationConfirmItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
          if ( !this )
            goto LABEL_150;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        v45 = (UnityEngine_Object_o *)v14->fields.supportSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
        {
          this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.supportSprite;
          if ( !this )
            goto LABEL_150;
          UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
        }
        this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
        if ( !this )
LABEL_150:
          sub_B52A5C(this, item);
        ServantFaceIconComponent__ClearEquip((ServantFaceIconComponent_o *)this, 0LL);
      }
LABEL_102:
      v33 = 0LL;
      if ( !isAdjustPosY )
        goto LABEL_131;
      goto LABEL_126;
    }
    if ( !servantFaceIcon )
      goto LABEL_150;
    ServantFaceIconComponent__Clear(v14->fields.servantFaceIcon, 0LL);
    v30 = (UnityEngine_Object_o *)v14->fields.typeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
    {
      this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
      if ( !this )
        goto LABEL_150;
      this = (PartyOrganizationConfirmItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
      if ( !this )
        goto LABEL_150;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    v31 = UnityEngine_Object_TypeInfo;
    v32 = &StringLiteral_18989/*"formation_support_small"*/;
    goto LABEL_47;
  }
  v21 = (UnityEngine_Object_o *)v14->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.typeSprite;
    if ( !this )
      goto LABEL_150;
    this = (PartyOrganizationConfirmItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
    if ( !this )
      goto LABEL_150;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  userServantEntity = v13->fields.userServantEntity;
  if ( userServantEntity )
  {
    v23 = v14->fields.servantFaceIcon;
    this = (PartyOrganizationConfirmItemDraw_o *)PartyOrganizationListViewItem__GetEquipList(
                                                   v13,
                                                   (const MethodInfo *)item);
    if ( !v23 )
      goto LABEL_150;
    ServantFaceIconComponent__Set(
      v23,
      userServantEntity,
      (System_Int64_array *)this,
      v13->fields.questRestrictionInfo,
      0LL,
      0LL,
      0LL);
    v25 = PartyOrganizationListViewItem__GetCommandCardList(v13, v24);
    v26 = (UnityEngine_Object_o *)v14->fields.supportSprite;
    v27 = v25;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
    {
      this = (PartyOrganizationConfirmItemDraw_o *)v13->fields.userServantEntity;
      if ( !this )
        goto LABEL_150;
      this = (PartyOrganizationConfirmItemDraw_o *)UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0LL);
      if ( !v14->fields.supportSprite )
        goto LABEL_150;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v28 = v14->fields.supportSprite;
        v29 = (System_String_o *)StringLiteral_19487/*"icon_eventjoin_02"*/;
      }
      else
      {
        v28 = v14->fields.supportSprite;
        v29 = 0LL;
      }
      UISprite__set_spriteName(v28, v29, 0LL);
    }
    goto LABEL_102;
  }
  servantEntity = v13->fields.servantEntity;
  if ( !servantEntity )
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_150;
    ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)this, 0LL);
    v31 = UnityEngine_Object_TypeInfo;
    v32 = &StringLiteral_18961/*"formation_blank_small"*/;
LABEL_47:
    v33 = (System_String_o *)*v32;
    v34 = (UnityEngine_Object_o *)v14->fields.supportSprite;
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v31);
    if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
    {
      this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.supportSprite;
      if ( !this )
        goto LABEL_150;
      UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
    }
    goto LABEL_125;
  }
  if ( v13->fields.questRestrictionInfo )
  {
    if ( ServantEntity__checkIsHeroineSvt(servantEntity, 0LL) )
    {
      this = (PartyOrganizationConfirmItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_150;
      MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)this,
                                                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
      SvtId = PartyOrganizationListViewItem__get_SvtId(v13, v38);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      this = (PartyOrganizationConfirmItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                     SvtId,
                                                     0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_150;
      this = (PartyOrganizationConfirmItemDraw_o *)UserServantMaster__getHeroineData(
                                                     MasterData_WarQuestSelectionMaster,
                                                     (int32_t)this,
                                                     0LL);
      if ( !v13->fields.questRestrictionInfo )
        goto LABEL_150;
      v40 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34167368(
              v13->fields.questRestrictionInfo,
              (UserServantEntity_o *)this,
              0LL);
    }
    else
    {
      questRestrictionInfo = v13->fields.questRestrictionInfo;
      v48 = PartyOrganizationListViewItem__get_SvtId(v13, v36);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      this = (PartyOrganizationConfirmItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                     v48,
                                                     0LL);
      if ( !questRestrictionInfo )
        goto LABEL_150;
      v40 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount(questRestrictionInfo, (int32_t)this, 0LL);
    }
    v46 = v40;
  }
  else
  {
    v46 = -1;
  }
  v49 = v14->fields.servantFaceIcon;
  v50 = PartyOrganizationListViewItem__get_SvtId(v13, (const MethodInfo *)item);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v50, 0LL);
  svtLimitCount = v13->fields.svtLimitCount;
  v53 = v51;
  this = (PartyOrganizationConfirmItemDraw_o *)PartyOrganizationListViewItem__get_Level(v13, v54);
  if ( !v49 )
    goto LABEL_150;
  ServantFaceIconComponent__Set_30467316(
    v49,
    v53,
    svtLimitCount,
    v46,
    0,
    0LL,
    0LL,
    2,
    0,
    0,
    0LL,
    1,
    (int32_t)this,
    imageSvtId,
    0,
    0LL);
  v55 = (UnityEngine_Object_o *)v14->fields.supportSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v55, 0LL, 0LL) )
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.supportSprite;
    if ( !this )
      goto LABEL_150;
    UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
  }
  v33 = 0LL;
LABEL_125:
  v27 = 0LL;
  if ( !isAdjustPosY )
    goto LABEL_131;
LABEL_126:
  this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_150;
  if ( !ServantFaceIconComponent__IsUseEquip((ServantFaceIconComponent_o *)this, 0LL) )
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_150;
    ServantFaceIconComponent__AdjustRaritySpritePosY((ServantFaceIconComponent_o *)this, -55.0, 0LL);
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_150;
    ServantFaceIconComponent__AdjustDispLimitCountSpritePosY((ServantFaceIconComponent_o *)this, -34.0, 0LL);
  }
LABEL_131:
  this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_150;
  ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)this, !isRarityHide, 0LL);
  if ( v13->fields._IsNotSupportSingle_k__BackingField || !v13->fields._IsDataLost_k__BackingField )
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_150;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)this, 1, 0LL);
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_150;
    v56 = 1;
  }
  else
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_150;
    ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)this, 0, 0LL);
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_150;
    v56 = 0;
  }
  ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)this, v56, 0LL);
  commandLabelList = v14->fields.commandLabelList;
  if ( !commandLabelList )
    goto LABEL_150;
  v58 = 0LL;
  v59 = (_DWORD)v27 + 32;
  while ( 1 )
  {
    max_length = commandLabelList->max_length;
    if ( (int)v58 >= max_length )
      break;
    if ( (unsigned int)v58 >= max_length )
      goto LABEL_281;
    v61 = commandLabelList->m_Items[v58];
    if ( v27 )
    {
      if ( (unsigned int)v58 >= v27->max_length )
      {
LABEL_281:
        v117 = sub_B52A88(this);
        sub_B52A28(v117, 0LL);
      }
      this = (PartyOrganizationConfirmItemDraw_o *)System_Int32__ToString(v59, 0LL);
      item = (PartyOrganizationListViewItem_o *)this;
      if ( !v61 )
        goto LABEL_150;
    }
    else
    {
      item = (PartyOrganizationListViewItem_o *)StringLiteral_1/*""*/;
      if ( !v61 )
        goto LABEL_150;
    }
    UILabel__set_text(v61, (System_String_o *)item, 0LL);
    commandLabelList = v14->fields.commandLabelList;
    ++v58;
    v59 += 4;
    if ( !commandLabelList )
      goto LABEL_150;
  }
  this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.baseSprite;
  if ( !this )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  if ( v33 )
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.baseSprite;
    if ( !this )
      goto LABEL_150;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.baseSprite;
    if ( !this )
      goto LABEL_150;
    UISprite__set_spriteName((UISprite_o *)this, v33, 0LL);
  }
  memberTypeBaseSprite = (UnityEngine_Object_o *)v14->fields.memberTypeBaseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(memberTypeBaseSprite, 0LL, 0LL) )
  {
    index = v13->fields.index;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.memberTypeBaseSprite;
    if ( !this )
      goto LABEL_150;
    v64 = (System_String_o **)(index >= BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax
                             ? &StringLiteral_18991/*"formation_txtbg_03"*/
                             : &StringLiteral_18990/*"formation_txtbg_02"*/);
    UISprite__set_spriteName((UISprite_o *)this, *v64, 0LL);
    memberTypeSprite = v14->fields.memberTypeSprite;
    v122 = v13->fields.index + 1;
    v66 = System_Int32__ToString((int32_t)&v122, 0LL);
    this = (PartyOrganizationConfirmItemDraw_o *)System_String__Concat_44568316(
                                                   (System_String_o *)StringLiteral_20619/*"member_txt_"*/,
                                                   v66,
                                                   0LL);
    if ( !memberTypeSprite )
      goto LABEL_150;
    UISprite__set_spriteName(memberTypeSprite, (System_String_o *)this, 0LL);
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.memberTypeSprite;
    if ( !this )
      goto LABEL_150;
    ((void (__fastcall *)(PartyOrganizationConfirmItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
      this,
      this->klass[2]._1.interopData);
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)v14->fields.restrictionMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
    goto LABEL_225;
  v69 = v13->fields.userServantEntity;
  if ( !v69 || !UserServantEntity__IsLeave(v69, 0LL) )
  {
    if ( PartyOrganizationListViewItem__get_IsQuestRestriction(v13, v68)
      && (v13->fields.userServantEntity || v13->fields.isFollower) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v82 = LocalizationManager__Get((System_String_o *)StringLiteral_10427/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
LABEL_189:
      v83 = v82;
      *(UnityEngine_Color_o *)&v85 = UnityEngine_Color__get_black(0LL);
      v89 = v14;
      v90 = v83;
      v91 = 0LL;
      v92 = 0;
LABEL_190:
      v80 = 1;
      PartyOrganizationConfirmItemDraw__SetMaskMessage(v89, v90, *(UnityEngine_Color_o *)&v85, 1, v91, v92, v84);
      goto LABEL_226;
    }
    if ( v13->fields.isUniqueSvtRestriction || v13->fields.isUniqueIndividualityRestriction )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v93 = &StringLiteral_10428/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_197:
      v94 = LocalizationManager__Get((System_String_o *)*v93, 0LL);
      v96 = 0.0;
      v97 = 0.0;
      v98 = v14;
      v99 = 0;
LABEL_198:
      v80 = 1;
      PartyOrganizationConfirmItemDraw__SetWarningMessage(v98, v94, 1, v99, v96, v97, v95);
      goto LABEL_226;
    }
    if ( v13->fields.isFixedSupportPositionRestriction )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v93 = &StringLiteral_10429/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING3"*/;
      goto LABEL_197;
    }
    if ( v13->fields.isFixedServantPositionRestriction )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v93 = &StringLiteral_10430/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/;
      goto LABEL_197;
    }
    fatigureTime = v13->fields.fatigureTime;
    if ( (fatigureTime & 0x8000000000000000LL) != 0 )
    {
      if ( v13->fields._IsAllOutBattle_k__BackingField )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v70 = &StringLiteral_11718/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
        goto LABEL_180;
      }
      if ( v13->fields._IsNotSupportSingle_k__BackingField )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v94 = LocalizationManager__Get((System_String_o *)StringLiteral_10431/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
        v96 = 10.0;
        v97 = -22.0;
        v99 = 1;
        v98 = v14;
        goto LABEL_198;
      }
      if ( v13->fields._IsDataLost_k__BackingField )
      {
        *(UnityEngine_Color_o *)&v85 = UnityEngine_Color__get_white(0LL);
        v90 = (System_String_o *)StringLiteral_1/*""*/;
        v92 = 1;
        v89 = v14;
        v91 = (System_String_o *)StringLiteral_18008/*"datalost_svt_select"*/;
        goto LABEL_190;
      }
      if ( v13->fields._TimesToRestart_k__BackingField >= 1 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v115 = LocalizationManager__Get((System_String_o *)StringLiteral_11724/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
        TimesToRestart_k__BackingField = v13->fields._TimesToRestart_k__BackingField;
        v116 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
        v82 = System_String__Format(v115, v116, 0LL);
        goto LABEL_189;
      }
    }
    else
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( fatigureTime > NetworkManager__getTime(0LL) )
      {
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_356/*"#042484"*/, &color, 0LL);
        color.fields.a = 0.69804;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v101 = LocalizationManager__Get((System_String_o *)StringLiteral_11723/*"SELECT_NO_SORTIE_REASON_FATIGUE"*/, 0LL);
        r = color.fields.r;
        g = color.fields.g;
        b = color.fields.b;
        a = color.fields.a;
        v78 = v101;
        v77 = v14;
        v79 = (System_String_o *)StringLiteral_19636/*"img_frames_mask11"*/;
        goto LABEL_181;
      }
      v13->fields.fatigureTime = -1LL;
    }
    PartyOrganizationConfirmItemDraw__ClearMessage(v14, v81);
LABEL_225:
    v80 = 0;
    goto LABEL_226;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v70 = &StringLiteral_11717/*"SELECT_NO_SORTIE"*/;
LABEL_180:
  v71 = LocalizationManager__Get((System_String_o *)*v70, 0LL);
  *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_black(0LL);
  v77 = v14;
  v78 = v71;
  v79 = 0LL;
LABEL_181:
  PartyOrganizationConfirmItemDraw__SetMaskMessage(v77, v78, *(UnityEngine_Color_o *)&r, 0, v79, 0, v72);
  v80 = 1;
LABEL_226:
  classCompatibilityIcon = (UnityEngine_Object_o *)v14->fields.classCompatibilityIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
    return;
  if ( !v13->fields.isFollower )
  {
    v109 = v13->fields.userServantEntity;
    if ( v109 )
    {
      SvtClassId = UserServantEntity__getSvtClassId(v109, 0LL);
    }
    else
    {
      v103 = v13->fields.servantEntity;
      if ( !v103 )
        goto LABEL_246;
      SvtClassId = v103[20];
    }
    LODWORD(v103) = 0;
    goto LABEL_247;
  }
  v103 = v13->fields.followerInfo;
  if ( !v103 )
  {
LABEL_246:
    SvtClassId = 0;
    goto LABEL_247;
  }
  this = (PartyOrganizationConfirmItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_150;
  v104 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  this = (PartyOrganizationConfirmItemDraw_o *)PartyOrganizationListViewItem__get_ServantLeader(v13, v105);
  if ( !this )
    goto LABEL_150;
  v107 = this->fields.memberTypeSprite;
  v106 = this->fields.supportSprite;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v123.fields.currentCryptoKey = v107;
  *(_QWORD *)&v123.fields.fakeValue = v106;
  this = (PartyOrganizationConfirmItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                 v123,
                                                 0LL);
  if ( !v104 )
    goto LABEL_150;
  this = (PartyOrganizationConfirmItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 v104,
                                                 (int32_t)this,
                                                 (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_150;
  SvtClassId = (int32_t)this->fields.restrictionMaskSprite;
  this = (PartyOrganizationConfirmItemDraw_o *)PartyOrganizationListViewItem__get_ServantLeader(
                                                 v13,
                                                 (const MethodInfo *)item);
  if ( !this )
    goto LABEL_150;
  LODWORD(v103) = ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)this, 0LL);
LABEL_247:
  if ( (unsigned int)v103 | v80 | (SvtClassId == 0) )
  {
    this = (PartyOrganizationConfirmItemDraw_o *)v14->fields.classCompatibilityIcon;
    if ( !this )
      goto LABEL_150;
    goto LABEL_267;
  }
  this = (PartyOrganizationConfirmItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_150;
  this = (PartyOrganizationConfirmItemDraw_o *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)this, 40, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_264;
  this = (PartyOrganizationConfirmItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_150;
  this = (PartyOrganizationConfirmItemDraw_o *)this->fields.baseSprite;
  if ( !this )
    goto LABEL_150;
  item = (PartyOrganizationListViewItem_o *)PartyOrganizationRootComponent_TypeInfo;
  v110 = *(&PartyOrganizationRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v110
    || (PartyOrganizationRootComponent_c *)this->klass->_2.typeHierarchy[v110 - 1] != PartyOrganizationRootComponent_TypeInfo )
  {
    sub_B52D50(this);
    PartyOrganizationCommandCardMenu__EndOpen(v118, v119);
    return;
  }
  klass = this[3].klass;
  if ( !klass
    || (this = (PartyOrganizationConfirmItemDraw_o *)BattleSetupInfo__TargetQuestId(
                                                       (BattleSetupInfo_o *)this[3].klass,
                                                       0LL),
        !(_DWORD)this)
    || (namespaze = (int32_t)klass->_1.namespaze) == 0 )
  {
LABEL_264:
    v114 = (PartyOrganizationConfirmItemDraw_o *)v14->fields.classCompatibilityIcon;
    goto LABEL_265;
  }
  v113 = (int)this;
  this = (PartyOrganizationConfirmItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_150;
  this = (PartyOrganizationConfirmItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !this )
    goto LABEL_150;
  this = (PartyOrganizationConfirmItemDraw_o *)QuestPhaseMaster__GetEntity(
                                                 (QuestPhaseMaster_o *)this,
                                                 v113,
                                                 namespaze,
                                                 0LL);
  v114 = (PartyOrganizationConfirmItemDraw_o *)v14->fields.classCompatibilityIcon;
  if ( !this )
  {
LABEL_265:
    if ( !v114 )
      goto LABEL_150;
    this = v114;
LABEL_267:
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)this, 0LL);
    return;
  }
  if ( !v114 )
    goto LABEL_150;
  ServantClassCompatibilityIconComponent__SetIcon(
    v14->fields.classCompatibilityIcon,
    SvtClassId,
    (System_Int32_array *)this->fields.memberTypeSprite,
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
  if ( (byte_42B3564 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_B52984(&StringLiteral_18008/*"datalost_svt_select"*/);
    sub_B52984(&StringLiteral_19632/*"img_frames_mask03"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B3564 = 1;
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
      AtlasManager__SetPartyOrganizationImage(v19, (System_String_o *)StringLiteral_18008/*"datalost_svt_select"*/, 0LL);
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
      v22 = maskName ? maskName : (System_String_o *)StringLiteral_19632/*"img_frames_mask03"*/;
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
    sub_B52A5C(gameObject, v17);
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
  if ( (byte_42B3566 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_B52984(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__get_Item__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)sub_B52984(&PartyOrganizationConfirmItemDraw_TypeInfo);
    byte_42B3566 = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v17 = *((_QWORD *)&v10->fields._items->obj.klass + v13);
        if ( !v17 )
          break;
        if ( !*(_QWORD *)(v17 + 160) )
          goto LABEL_40;
        if ( v10->fields._size <= v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v18 = *(_QWORD *)(v17 + 160);
        if ( !v18 )
          break;
        v19 = *(_DWORD *)(v18 + 36);
        if ( v10->fields._size <= v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v20 = *(_QWORD *)(v17 + 160);
        if ( !v20 )
          break;
        v21 = *(_DWORD *)(v20 + 40);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (NpcServantFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
        if ( v10->fields._size <= v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)*((_QWORD *)&v10->fields._items->obj.klass
                                                                                       + v13);
        if ( !itemList )
          break;
        SvtId = PartyOrganizationListViewItem__get_SvtId(
                  (PartyOrganizationListViewItem_o *)itemList,
                  (const MethodInfo *)supportMemberObjectList);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(SvtId, 0LL);
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
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
          if ( !npcServantFollowerEntity || !itemList )
            break;
          itemList = (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)NpcFollowerMaster__GetEntity_20742188(
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
        v29 = sub_B52A88(itemList);
        sub_B52A28(v29, 0LL);
      }
    }
LABEL_55:
    sub_B52A5C(itemList, supportMemberObjectList);
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

  if ( (byte_42B3565 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_19632/*"img_frames_mask03"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B3565 = 1;
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
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_19632/*"img_frames_mask03"*/, 0LL);
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
    sub_B52A5C(gameObject, v14);
  }
}