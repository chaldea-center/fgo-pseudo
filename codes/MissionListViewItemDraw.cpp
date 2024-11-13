void __fastcall MissionListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MissionListViewItemDraw_c *v3; // x8
  struct MissionListViewItemDraw_StaticFields *static_fields; // x9

  if ( (byte_4B193CE & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListViewItemDraw_TypeInfo, v1, v2);
    byte_4B193CE = 1;
  }
  v3 = MissionListViewItemDraw_TypeInfo;
  static_fields = MissionListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TIME_UPDATE_ITVL_SEC = 0xF00000001LL;
  static_fields->MISSION_COND_LB_LOCK_COLOR = (struct UnityEngine_Color_o)xmmword_BD26A0;
  v3->static_fields->MISSION_COND_LB_DEPTH_INIT = 6;
}


void __fastcall MissionListViewItemDraw___ctor(MissionListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MissionListViewItemDraw__Awake(MissionListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct UISprite_o *v13; // x8
  struct UIAtlas_o *mAtlas; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct UISprite_o *v21; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4B193C3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B193C3 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( v5 )
  {
    v13 = this->fields.baseSprite;
    if ( !v13
      || (mAtlas = v13->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseAtlas, (int64_t)mAtlas, v7, v8, v9, v10, v11, v12),
          (v21 = this->fields.baseSprite) == 0LL) )
    {
      sub_1BCAA3C(v5, v6);
    }
    mSpriteName = v21->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.baseSpriteName,
      (int64_t)mSpriteName,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
}


void __fastcall MissionListViewItemDraw__CheckLockMissionBoard(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  UIWidget_o *v5; // x0
  UIWidget_o *missionCondLb; // x21
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B193C5 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListViewItemDraw_TypeInfo, missionListViewItem, method);
    byte_4B193C5 = 1;
  }
  v5 = (UIWidget_o *)MissionListViewItemDraw_TypeInfo;
  missionCondLb = (UIWidget_o *)this->fields.missionCondLb;
  if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, missionListViewItem);
  if ( !missionCondLb
    || (UIWidget__set_depth(
          missionCondLb,
          MissionListViewItemDraw_TypeInfo->static_fields->MISSION_COND_LB_DEPTH_INIT,
          0LL),
        (v5 = (UIWidget_o *)this->fields.missionCondLb) == 0LL)
    || (v7.fields.r = 1.0,
        v7.fields.g = 1.0,
        v7.fields.b = 1.0,
        v7.fields.a = 1.0,
        UIWidget__set_color(v5, v7, 0LL),
        !missionListViewItem) )
  {
    sub_1BCAA3C(v5, missionListViewItem);
  }
  if ( missionListViewItem->fields.progStatus <= 1u && this->fields.isDispTime )
    ((void (__fastcall *)(MissionListViewItemDraw_o *, MissionListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._6_SetLockMissionBoard.method)(
      this,
      missionListViewItem,
      this->klass->vtable._7_IsUseDefaultLockBoard.methodPtr);
}


System_String_o *__fastcall MissionListViewItemDraw__GetTimeText(
        System_String_o *key,
        System_String_o *timrStr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *v7; // x0

  if ( (byte_4B193C9 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, timrStr, method);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v5, v6);
    byte_4B193C9 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, timrStr);
  v7 = LocalizationManager__Get(key, 0LL);
  return System_String__Concat_62412480(v7, (System_String_o *)StringLiteral_116/*" "*/, timrStr, 0LL);
}


void __fastcall MissionListViewItemDraw__InitDispResTime(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  MissionListViewItem_o *v3; // x19
  MissionListViewItemDraw_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct EventMissionEntity_o *eventMissionEnt; // x8
  MissionListViewItemDraw_o *v10; // x21
  bool *p_isDispTime; // x23
  __int64 endedAt; // x8
  char v13; // w24
  bool v14; // w22
  NotEndEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = missionListviewItem;
  v4 = this;
  if ( (byte_4B193C6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NotEndEventMissionFixMaster___, missionListviewItem, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    this = (MissionListViewItemDraw_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B193C6 = 1;
  }
  entity = 0LL;
  if ( !v3 )
    goto LABEL_28;
  if ( v3->fields.progStatus != 4 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, missionListviewItem);
    this = (MissionListViewItemDraw_o *)NetworkManager__getTime(0LL);
    eventMissionEnt = v3->fields.eventMissionEnt;
    if ( !eventMissionEnt )
      goto LABEL_28;
    v10 = this;
    if ( (__int64)this >= eventMissionEnt->fields.startedAt )
    {
      if ( !v4 )
        goto LABEL_28;
      endedAt = eventMissionEnt->fields.endedAt;
      v4->fields.isDispTime = (__int64)this < endedAt;
      p_isDispTime = &v4->fields.isDispTime;
      if ( (__int64)this < endedAt )
        goto LABEL_18;
    }
    else
    {
      if ( !v4 )
        goto LABEL_28;
      v4->fields.isDispTime = 0;
      p_isDispTime = &v4->fields.isDispTime;
    }
    if ( v3->fields.progStatus != 3 )
    {
      v13 = 1;
      v3->fields.isNowMission = 1;
      goto LABEL_20;
    }
LABEL_18:
    v13 = 0;
    v4->fields.oldTime = 0LL;
LABEL_20:
    this = (MissionListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (MissionListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NotEndEventMissionFixMaster___);
      if ( this )
      {
        v14 = NotEndEventMissionFixMaster__TryGetEntity(
                (NotEndEventMissionFixMaster_o *)this,
                &entity,
                v3->fields.currentEventId,
                v3->fields.currentMissionId,
                0LL);
        ((void (__fastcall *)(MissionListViewItemDraw_o *, MissionListViewItem_o *, MissionListViewItemDraw_o *, Il2CppMethodPointer))v4->klass->vtable._9_UpdateDispResTime.method)(
          v4,
          v3,
          v10,
          v4->klass->vtable._10_SetInput.methodPtr);
        this = (MissionListViewItemDraw_o *)v4->fields.timeOverInfo;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v13 & !v14, 0LL);
          this = (MissionListViewItemDraw_o *)v4->fields.resTimeLb;
          if ( this )
          {
            this = (MissionListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
            if ( *p_isDispTime )
            {
              missionListviewItem = (MissionListViewItem_o *)(&dword_0 + 1);
              if ( this )
                goto LABEL_26;
            }
            else
            {
              missionListviewItem = (MissionListViewItem_o *)(v3->fields.progStatus == 3);
              if ( this )
                goto LABEL_26;
            }
          }
        }
      }
    }
LABEL_28:
    sub_1BCAA3C(this, missionListviewItem);
  }
  this = (MissionListViewItemDraw_o *)v4->fields.timeOverInfo;
  v4->fields.isDispTime = 0;
  if ( !this )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (MissionListViewItemDraw_o *)v4->fields.resTimeLb;
  if ( !this )
    goto LABEL_28;
  this = (MissionListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_28;
  LOBYTE(missionListviewItem) = 0;
LABEL_26:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)missionListviewItem, 0LL);
}


bool __fastcall MissionListViewItemDraw__IsUseDefaultLockBoard(
        MissionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall MissionListViewItemDraw__SetBoardImage(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *baseSprite; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  int32_t bannerGroupId; // w21
  __int64 v13; // x1
  UISprite_o *v14; // x22
  System_String_o *baseSpriteName; // x19
  UIAtlas_o *baseAtlas; // x20

  if ( (byte_4B193C8 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, missionListviewItem, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_5083/*"DEFAULT_LOCK_BOARD_GROUP_ID"*/, v7, v8);
    byte_4B193C8 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, missionListviewItem);
  v10 = UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( !v10 )
  {
    if ( !missionListviewItem )
      sub_1BCAA3C(v10, v11);
    bannerGroupId = missionListviewItem->fields.bannerGroupId;
    if ( (((__int64 (__fastcall *)(MissionListViewItemDraw_o *, Il2CppMethodPointer))this->klass->vtable._7_IsUseDefaultLockBoard.method)(
            this,
            this->klass->vtable._8_SetRewardStatusImg.methodPtr) & 1) != 0
      && missionListviewItem->fields.progStatus <= 1u )
    {
      bannerGroupId = ConstantMaster__getValue((System_String_o *)StringLiteral_5083/*"DEFAULT_LOCK_BOARD_GROUP_ID"*/, 0LL);
    }
    v14 = this->fields.baseSprite;
    baseAtlas = this->fields.baseAtlas;
    baseSpriteName = this->fields.baseSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13);
    AtlasManager__SetMissionBoardSprite(v14, baseAtlas, baseSpriteName, bannerGroupId, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewItemDraw__SetChallengeButtonActive(
        MissionListViewItemDraw_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *challengeButtonBg; // x21
  __int64 v12; // x1
  UISprite_o *v13; // x21
  __int64 v14; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4B193CC & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, isActive, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_17745/*"btn_txt_challenge"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_17660/*"btn_bg_challenge"*/, v9, v10);
    byte_4B193CC = 1;
  }
  challengeButtonBg = (UnityEngine_Object_o *)this->fields.challengeButtonBg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
  if ( !UnityEngine_Object__op_Equality(challengeButtonBg, 0LL, 0LL) )
  {
    v13 = this->fields.challengeButtonBg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
    AtlasManager__SetBanner(v13, (System_String_o *)StringLiteral_17660/*"btn_bg_challenge"*/, 0LL);
    AtlasManager__SetBanner(this->fields.challengeButtonText, (System_String_o *)StringLiteral_17745/*"btn_txt_challenge"*/, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.challengeButtonBg;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v14);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0LL);
  }
}


void __fastcall MissionListViewItemDraw__SetInput(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *baseButton; // x21
  __int64 v8; // x1
  UICommonButton_o *miniIconComponent; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  UILabel_o *missionCondLb; // x21
  System_String_o *condMsg; // x22
  MissionListViewItemDraw_c *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  float progVal; // s8
  UnityEngine_Object_o *rangeSprite; // x20
  UnityEngine_Object_o *addRangeSprite; // x20
  System_String_o *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B193CB & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListViewItemDraw_TypeInfo, missionListViewItem, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B193CB = 1;
  }
  value = 0LL;
  if ( missionListViewItem )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, missionListViewItem);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      miniIconComponent = this->fields.baseButton;
      if ( miniIconComponent )
      {
        UICommonButton__SetColliderEnable(miniIconComponent, missionListViewItem->fields.isColliderEnable, 1, 0LL);
        miniIconComponent = this->fields.baseButton;
        if ( miniIconComponent )
        {
          ((void (__fastcall *)(UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))miniIconComponent->klass->vtable._14_SetState.method)(
            miniIconComponent,
            0LL,
            1LL,
            miniIconComponent->klass->vtable._15_OnPress.methodPtr);
          ((void (__fastcall *)(MissionListViewItemDraw_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_SetRewardStatusImg.method)(
            this,
            (unsigned int)missionListViewItem->fields.progStatus,
            this->klass->vtable._9_UpdateDispResTime.methodPtr);
          miniIconComponent = (UICommonButton_o *)this->fields.miniIconComponent;
          if ( miniIconComponent )
          {
            MissionGiftMiniIconComponent__SetMiniIcon(
              (MissionGiftMiniIconComponent_o *)miniIconComponent,
              missionListViewItem->fields.subGiftEntity,
              0LL);
            MissionListViewItemDraw__CheckLockMissionBoard(this, missionListViewItem, v10);
            missionCondLb = this->fields.missionCondLb;
            condMsg = missionListViewItem->fields.condMsg;
            v14 = MissionListViewItemDraw_TypeInfo;
            if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, v11);
              v14 = MissionListViewItemDraw_TypeInfo;
            }
            WrapControlText__textAdjust(missionCondLb, condMsg, v14->static_fields->DEFAULT_FONT_SIZE, 0, 0, 0LL);
            value = missionListViewItem->fields.progTxt;
            sub_1BCA784((PartyOrganizationUtility_o *)&value, (int64_t)value, v15, v16, v17, v18, v19, v20);
            miniIconComponent = (UICommonButton_o *)this->fields.missionProgressLb;
            if ( miniIconComponent )
            {
              progVal = missionListViewItem->fields.progVal;
              UILabel__set_text((UILabel_o *)miniIconComponent, value, 0LL);
              miniIconComponent = (UICommonButton_o *)this->fields.missionProgressLb;
              if ( miniIconComponent )
              {
                UILabel__UpdateCondensedScaleComponent((UILabel_o *)miniIconComponent, 0LL);
                miniIconComponent = (UICommonButton_o *)this->fields.expBar;
                if ( miniIconComponent )
                {
                  UIProgressBar__set_value((UIProgressBar_o *)miniIconComponent, progVal, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_29:
      sub_1BCAA3C(miniIconComponent, v8);
    }
  }
  else
  {
    rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, missionListViewItem);
    if ( UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL) )
    {
      miniIconComponent = (UICommonButton_o *)this->fields.rangeSprite;
      if ( !miniIconComponent )
        goto LABEL_29;
      miniIconComponent = (UICommonButton_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)miniIconComponent,
                                                0LL);
      if ( !miniIconComponent )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)miniIconComponent, 0, 0LL);
    }
    addRangeSprite = (UnityEngine_Object_o *)this->fields.addRangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(addRangeSprite, 0LL, 0LL) )
    {
      miniIconComponent = (UICommonButton_o *)this->fields.addRangeSprite;
      if ( !miniIconComponent )
        goto LABEL_29;
      miniIconComponent = (UICommonButton_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)miniIconComponent,
                                                0LL);
      if ( !miniIconComponent )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)miniIconComponent, 0, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionListViewItemDraw__SetItem(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int32_t mode,
        ListViewManager_o *listViewManager,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *rangeSprite; // x23
  bool v14; // w0
  __int64 v15; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *v17; // x23
  struct GiftEntity_array *giftEnts; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct GiftEntity_array *giftEntityList; // x8
  UILabel_o *missionCondLb; // x22
  System_String_o *condMsg; // x23
  MissionListViewItemDraw_c *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  float progVal; // s8
  const MethodInfo *v36; // x2
  __int64 v37; // x1
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v39; // x2
  UnityEngine_Object_o *challengeButtonBg; // x22
  __int64 v41; // x1
  const MethodInfo *v42; // x3
  __int64 methodPtr_low; // x9
  bool v44; // w0
  UnityEngine_Object_o *addRangeSprite; // x20
  bool result; // w0
  bool v47; // w21
  const MethodInfo *v48; // x2
  __int64 v49; // x1
  UnityEngine_Object_o *baseSprite; // x21
  const MethodInfo *v51; // x2
  MissionListViewItemDraw_o *v52; // x0
  MissionListViewItem_o *v53; // x1
  const MethodInfo *v54; // x2
  System_Action_o *naviAction; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *value; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B193C4 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListViewItemDraw_TypeInfo, missionListViewItem, *(_QWORD *)&mode);
    sub_1BCA7E0(&MissionListViewManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B193C4 = 1;
  }
  value = 0LL;
  naviAction = 0LL;
  rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, missionListViewItem);
  v14 = UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL);
  if ( !missionListViewItem )
  {
    if ( v14 )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_69;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    addRangeSprite = (UnityEngine_Object_o *)this->fields.addRangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    if ( UnityEngine_Object__op_Inequality(addRangeSprite, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.addRangeSprite;
      if ( !gameObject )
        goto LABEL_69;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    return 0;
  }
  if ( v14 )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.rangeSprite;
    if ( !gameObject )
      goto LABEL_69;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, mode == 0, 0LL);
  }
  v17 = (UnityEngine_Object_o *)this->fields.addRangeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.addRangeSprite;
    if ( !gameObject )
      goto LABEL_69;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)gameObject,
      missionListViewItem->fields.isTerminationSpace,
      0LL);
  }
  if ( !mode )
    return 1;
  gameObject = (UnityEngine_Component_o *)this->fields.rewardStatusInfo;
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.rewardImg;
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.receiveIcon;
  if ( !gameObject )
    goto LABEL_69;
  ShiningIconComponent__Clear((ShiningIconComponent_o *)gameObject, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.rewardGetInfo;
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.rewardAchiveInfo;
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.compInfo;
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.completedImg;
  if ( !gameObject )
    goto LABEL_69;
  gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)gameObject,
                                            0LL);
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.timeOverInfo;
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.lockImgInfo;
  if ( !gameObject )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  giftEnts = missionListViewItem->fields.giftEnts;
  this->fields.giftEntityList = giftEnts;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.giftEntityList,
    (int64_t)giftEnts,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  giftEntityList = this->fields.giftEntityList;
  if ( !giftEntityList )
    goto LABEL_69;
  this->fields.isMultipleReward = (signed int)giftEntityList->max_length > 1;
  missionCondLb = this->fields.missionCondLb;
  condMsg = missionListViewItem->fields.condMsg;
  v28 = MissionListViewItemDraw_TypeInfo;
  if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, v15);
    v28 = MissionListViewItemDraw_TypeInfo;
  }
  WrapControlText__textAdjust(missionCondLb, condMsg, v28->static_fields->DEFAULT_FONT_SIZE, 0, 0, 0LL);
  ((void (__fastcall *)(MissionListViewItemDraw_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_SetRewardStatusImg.method)(
    this,
    (unsigned int)missionListViewItem->fields.progStatus,
    this->klass->vtable._9_UpdateDispResTime.methodPtr);
  value = missionListViewItem->fields.progTxt;
  sub_1BCA784((PartyOrganizationUtility_o *)&value, (int64_t)value, v29, v30, v31, v32, v33, v34);
  gameObject = (UnityEngine_Component_o *)this->fields.missionProgressLb;
  if ( !gameObject )
    goto LABEL_69;
  progVal = missionListViewItem->fields.progVal;
  UILabel__set_text((UILabel_o *)gameObject, value, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.missionProgressLb;
  if ( !gameObject )
    goto LABEL_69;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.expBar;
  if ( !gameObject )
    goto LABEL_69;
  UIProgressBar__set_value((UIProgressBar_o *)gameObject, progVal, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.miniIconComponent;
  if ( !gameObject )
    goto LABEL_69;
  MissionGiftMiniIconComponent__SetMiniIcon(
    (MissionGiftMiniIconComponent_o *)gameObject,
    missionListViewItem->fields.subGiftEntity,
    0LL);
  ((void (__fastcall *)(MissionListViewItemDraw_o *, MissionListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_InitDispResTime.method)(
    this,
    missionListViewItem,
    this->klass->vtable._6_SetLockMissionBoard.methodPtr);
  MissionListViewItemDraw__CheckLockMissionBoard(this, missionListViewItem, v36);
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_69;
    UICommonButton__SetColliderEnable(
      (UICommonButton_o *)gameObject,
      missionListViewItem->fields.isColliderEnable,
      1,
      0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_69;
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
      gameObject,
      0LL,
      1LL,
      gameObject->klass[1]._1.interfaceOffsets);
  }
  if ( !missionListViewItem->fields.isChallengeButtonObjectExist )
    goto LABEL_63;
  challengeButtonBg = (UnityEngine_Object_o *)this->fields.challengeButtonBg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( !UnityEngine_Object__op_Inequality(challengeButtonBg, 0LL, 0LL) )
    goto LABEL_63;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                            (UnityEngine_Object_o *)listViewManager,
                                            0LL,
                                            0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 || missionListViewItem->fields.progStatus != 2 )
  {
LABEL_63:
    v44 = 0;
    goto LABEL_64;
  }
  if ( !listViewManager )
LABEL_69:
    sub_1BCAA3C(gameObject, v15);
  methodPtr_low = LOBYTE(MissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (MissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[methodPtr_low - 1] == MissionListViewManager_TypeInfo )
  {
    v44 = MissionListViewManager__TrySetupMissionCondNaviAction(
            (MissionListViewManager_o *)listViewManager,
            missionListViewItem,
            &naviAction,
            v42);
LABEL_64:
    v47 = v44;
    MissionListViewItemDraw__SetItemIconColliderActive(this, v44, v39);
    MissionListViewItemDraw__SetChallengeButtonActive(this, v47, v48);
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
      MissionListViewItemDraw__SetBoardImage(this, missionListViewItem, v51);
    return 1;
  }
  sub_1BCACFC(listViewManager);
  MissionListViewItemDraw__CheckLockMissionBoard(v52, v53, v54);
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewItemDraw__SetItemIconColliderActive(
        MissionListViewItemDraw_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Component_o *itemIcon; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4B193CD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isActive, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B193CD = 1;
  }
  itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
  if ( !itemIcon )
    goto LABEL_10;
  itemIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(itemIcon, 0LL);
  if ( !itemIcon )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)itemIcon,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  itemIcon = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0LL,
                                          0LL);
  if ( ((unsigned __int8)itemIcon & 1) == 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isActive, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(itemIcon, isActive);
  }
}


void __fastcall MissionListViewItemDraw__SetLockMissionBoard(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *lockImgInfo; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  UnityEngine_Object_o *Child; // x20
  UnityEngine_GameObject_o *v13; // x8
  int monitor; // w21
  UIWidget_o *missionCondLb; // x20

  if ( (byte_4B193C7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, missionListViewItem, method);
    sub_1BCA7E0(&MissionListViewItemDraw_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B193C7 = 1;
  }
  lockImgInfo = this->fields.lockImgInfo;
  if ( !lockImgInfo )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(lockImgInfo, 1, 0LL);
  lockImgInfo = (UnityEngine_GameObject_o *)this->fields.miniIconComponent;
  if ( !lockImgInfo )
    goto LABEL_23;
  lockImgInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lockImgInfo, 0LL);
  if ( !lockImgInfo )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(lockImgInfo, 0, 0LL);
  if ( !missionListViewItem )
    goto LABEL_23;
  lockImgInfo = (UnityEngine_GameObject_o *)this->fields.closedMessageLabel;
  if ( !lockImgInfo )
    goto LABEL_23;
  UILabel__set_text((UILabel_o *)lockImgInfo, missionListViewItem->fields.closedMessage, 0LL);
  if ( MissionListViewItem__HasMissionConditionFlag(missionListViewItem, 64, v10) )
  {
    lockImgInfo = this->fields.lockImgInfo;
    if ( !lockImgInfo )
      goto LABEL_23;
    lockImgInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(lockImgInfo, 0LL);
    if ( !lockImgInfo )
      goto LABEL_23;
    Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)lockImgInfo, 0, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    lockImgInfo = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Child, 0LL, 0LL);
    if ( ((unsigned __int8)lockImgInfo & 1) != 0 )
    {
      if ( Child )
      {
        lockImgInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)Child,
                                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( lockImgInfo )
        {
          v13 = lockImgInfo;
          lockImgInfo = (UnityEngine_GameObject_o *)this->fields.missionCondLb;
          if ( lockImgInfo )
          {
            monitor = (int)v13[7].monitor;
            UIWidget__set_depth((UIWidget_o *)lockImgInfo, monitor + 10, 0LL);
            missionCondLb = (UIWidget_o *)this->fields.missionCondLb;
            lockImgInfo = (UnityEngine_GameObject_o *)MissionListViewItemDraw_TypeInfo;
            if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, missionListViewItem);
              lockImgInfo = (UnityEngine_GameObject_o *)MissionListViewItemDraw_TypeInfo;
            }
            if ( missionCondLb )
            {
              UIWidget__set_color(
                missionCondLb,
                *(UnityEngine_Color_o *)(*(_QWORD *)&lockImgInfo[7].fields.m_CachedPtr + 8LL),
                0LL);
              lockImgInfo = (UnityEngine_GameObject_o *)this->fields.closedMessageLabel;
              if ( lockImgInfo )
              {
                UIWidget__set_depth((UIWidget_o *)lockImgInfo, monitor + 20, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_23:
      sub_1BCAA3C(lockImgInfo, missionListViewItem);
    }
  }
}


void __fastcall MissionListViewItemDraw__SetRewardIconAlpha(
        MissionListViewItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  if ( this->fields.isMultipleReward )
  {
    itemIcon = this->fields.itemIcon;
    if ( !itemIcon )
      sub_1BCAA3C(0LL, method);
    ItemIconComponent__SetAlpha(itemIcon, alpha, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewItemDraw__SetRewardStatusImg(
        MissionListViewItemDraw_o *this,
        int32_t status,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *rewardImg; // x0
  bool v5; // w1

  switch ( status )
  {
    case 2:
      rewardImg = this->fields.rewardImg;
      if ( !rewardImg )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(rewardImg, 1, 0LL);
      rewardImg = (UnityEngine_GameObject_o *)this->fields.receiveIcon;
      if ( !rewardImg )
        goto LABEL_32;
      ShiningIconComponent__Clear((ShiningIconComponent_o *)rewardImg, 0LL);
      rewardImg = this->fields.rewardImg;
      if ( !rewardImg )
        goto LABEL_32;
      goto LABEL_15;
    case 3:
      rewardImg = (UnityEngine_GameObject_o *)this->fields.receiveIcon;
      if ( !rewardImg )
        goto LABEL_32;
      ShiningIconComponent__Set((ShiningIconComponent_o *)rewardImg, 0LL);
      rewardImg = this->fields.rewardImg;
      if ( !rewardImg )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
      rewardImg = this->fields.compInfo;
      if ( !rewardImg )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(rewardImg, 1, 0LL);
      rewardImg = this->fields.completedImg;
      if ( !rewardImg )
        goto LABEL_32;
      rewardImg = UnityEngine_GameObject__get_gameObject(rewardImg, 0LL);
      if ( !rewardImg )
        goto LABEL_32;
LABEL_15:
      UnityEngine_GameObject__SetActive(rewardImg, 1, 0LL);
      rewardImg = this->fields.lockImgInfo;
      if ( !rewardImg )
LABEL_32:
        sub_1BCAA3C(rewardImg, *(_QWORD *)&status);
LABEL_30:
      v5 = 0;
      break;
    case 4:
      rewardImg = this->fields.rewardStatusInfo;
      if ( !rewardImg )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
      rewardImg = this->fields.rewardGetInfo;
      if ( !rewardImg )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(rewardImg, 1, 0LL);
      rewardImg = this->fields.rewardAchiveInfo;
      if ( !rewardImg )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(rewardImg, 1, 0LL);
      rewardImg = this->fields.compInfo;
      if ( !rewardImg )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(rewardImg, 1, 0LL);
      rewardImg = this->fields.completedImg;
      if ( !rewardImg )
        goto LABEL_32;
      rewardImg = UnityEngine_GameObject__get_gameObject(rewardImg, 0LL);
      if ( !rewardImg )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(rewardImg, 1, 0LL);
      rewardImg = (UnityEngine_GameObject_o *)this->fields.receiveIcon;
      if ( !rewardImg )
        goto LABEL_32;
      ShiningIconComponent__Clear((ShiningIconComponent_o *)rewardImg, 0LL);
      rewardImg = (UnityEngine_GameObject_o *)this->fields.resTimeLb;
      if ( !rewardImg )
        goto LABEL_32;
      rewardImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardImg, 0LL);
      if ( !rewardImg )
        goto LABEL_32;
      goto LABEL_30;
    case 5:
      rewardImg = this->fields.rewardStatusInfo;
      if ( rewardImg )
      {
        UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
        rewardImg = this->fields.rewardGetInfo;
        if ( rewardImg )
        {
          UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
          rewardImg = this->fields.rewardAchiveInfo;
          if ( rewardImg )
            goto LABEL_30;
        }
      }
      goto LABEL_32;
    default:
      rewardImg = this->fields.rewardImg;
      if ( !rewardImg )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(rewardImg, 1, 0LL);
      rewardImg = (UnityEngine_GameObject_o *)this->fields.receiveIcon;
      if ( !rewardImg )
        goto LABEL_32;
      ShiningIconComponent__Clear((ShiningIconComponent_o *)rewardImg, 0LL);
      rewardImg = this->fields.rewardImg;
      if ( !rewardImg )
        goto LABEL_32;
      v5 = 1;
      break;
  }
  UnityEngine_GameObject__SetActive(rewardImg, v5, 0LL);
}


void __fastcall MissionListViewItemDraw__UpdateDispResTime(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int64_t nowTime,
        const MethodInfo *method)
{
  MissionListViewItemDraw_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t progStatus; // w9
  struct EventMissionEntity_o *eventMissionEnt; // x8
  UILabel_o *resTimeLb; // x19
  int64_t closedAt; // x20
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  System_String_o *RestTime; // x20
  __int64 *v19; // x8
  int64_t endedAt; // x20
  __int64 v21; // x1

  v5 = this;
  if ( (byte_4B193CA & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, missionListViewItem, nowTime);
    sub_1BCA7E0(&MissionListViewItemDraw_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_13500/*"TIME_REST_QUEST"*/, v8, v9);
    this = (MissionListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_13488/*"TIME_REST_ACHIVE"*/, v10, v11);
    byte_4B193CA = 1;
  }
  if ( !missionListViewItem )
    goto LABEL_19;
  progStatus = missionListViewItem->fields.progStatus;
  if ( progStatus == 4 )
    return;
  eventMissionEnt = missionListViewItem->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    goto LABEL_19;
  resTimeLb = v5->fields.resTimeLb;
  if ( progStatus == 3 )
  {
    closedAt = eventMissionEnt->fields.closedAt;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, missionListViewItem);
    RestTime = LocalizationManager__GetRestTime(closedAt, 0LL);
    if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, v16);
    v19 = &StringLiteral_13488/*"TIME_REST_ACHIVE"*/;
  }
  else
  {
    endedAt = eventMissionEnt->fields.endedAt;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, missionListViewItem);
    RestTime = LocalizationManager__GetRestTime(endedAt, 0LL);
    if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, v21);
    v19 = &StringLiteral_13500/*"TIME_REST_QUEST"*/;
  }
  this = (MissionListViewItemDraw_o *)MissionListViewItemDraw__GetTimeText((System_String_o *)*v19, RestTime, v17);
  if ( !resTimeLb )
LABEL_19:
    sub_1BCAA3C(this, missionListViewItem);
  UILabel__set_text(resTimeLb, (System_String_o *)this, 0LL);
}