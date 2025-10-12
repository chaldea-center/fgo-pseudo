void MissionListViewItemDraw___cctor(const MethodInfo *method)
{
  MissionListViewItemDraw_c *v1; // x8
  struct MissionListViewItemDraw_StaticFields *static_fields; // x9

  if ( (byte_4C3AC63 & 1) == 0 )
  {
    sub_1C32C20(&MissionListViewItemDraw_TypeInfo);
    byte_4C3AC63 = 1;
  }
  v1 = MissionListViewItemDraw_TypeInfo;
  static_fields = MissionListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TIME_UPDATE_ITVL_SEC = 0xF00000001LL;
  static_fields->MISSION_COND_LB_LOCK_COLOR = (struct UnityEngine_Color_o)xmmword_C0C890;
  v1->static_fields->MISSION_COND_LB_DEPTH_INIT = 6;
}


void MissionListViewItemDraw___ctor(MissionListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MissionListViewItemDraw__Awake(MissionListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct UISprite_o *v7; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UISprite_o *v11; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4C3AC58 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AC58 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( v4 )
  {
    v7 = this->fields.baseSprite;
    if ( !v7
      || (mAtlas = v7->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v5, v6),
          (v11 = this->fields.baseSprite) == 0) )
    {
      sub_1C32E7C(v4);
    }
    mSpriteName = v11->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseSpriteName, (int32_t)mSpriteName, v9, v10);
  }
}


void MissionListViewItemDraw__CheckLockMissionBoard(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  UIWidget_o *v5; // x0
  UIWidget_o *missionCondLb; // x21
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3AC5A & 1) == 0 )
  {
    sub_1C32C20(&MissionListViewItemDraw_TypeInfo);
    byte_4C3AC5A = 1;
  }
  v5 = (UIWidget_o *)MissionListViewItemDraw_TypeInfo;
  missionCondLb = (UIWidget_o *)this->fields.missionCondLb;
  if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  if ( !missionCondLb
    || (UIWidget__set_depth(
          missionCondLb,
          MissionListViewItemDraw_TypeInfo->static_fields->MISSION_COND_LB_DEPTH_INIT,
          0),
        (v5 = (UIWidget_o *)this->fields.missionCondLb) == 0)
    || (v7.fields.r = 1.0,
        v7.fields.g = 1.0,
        v7.fields.b = 1.0,
        v7.fields.a = 1.0,
        UIWidget__set_color(v5, v7, 0),
        !missionListViewItem) )
  {
    sub_1C32E7C(v5);
  }
  if ( missionListViewItem->fields.progStatus <= 1u && this->fields.isDispTime )
    ((void (__fastcall *)(MissionListViewItemDraw_o *, MissionListViewItem_o *, const MethodInfo *))this->klass->vtable._6_SetLockMissionBoard.methodPtr)(
      this,
      missionListViewItem,
      this->klass->vtable._6_SetLockMissionBoard.method);
}


System_String_o *MissionListViewItemDraw__GetTimeText(
        System_String_o *key,
        System_String_o *timrStr,
        const MethodInfo *method)
{
  System_String_o *v5; // x0

  if ( (byte_4C3AC5E & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    byte_4C3AC5E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get(key, 0);
  return System_String__Concat_63556792(v5, (System_String_o *)StringLiteral_113/*" "*/, timrStr, 0);
}


void MissionListViewItemDraw__InitDispResTime(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  MissionListViewItemDraw_o *v4; // x20
  char v5; // w1
  struct EventMissionEntity_o *eventMissionEnt; // x8
  MissionListViewItemDraw_o *v7; // x21
  bool *p_isDispTime; // x23
  __int64 endedAt; // x8
  char v10; // w24
  bool v11; // w22
  NotEndEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4C3AC5B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_NotEndEventMissionFixMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    this = (MissionListViewItemDraw_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3AC5B = 1;
  }
  entity = 0;
  if ( !missionListviewItem )
    goto LABEL_28;
  if ( missionListviewItem->fields.progStatus != 4 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (MissionListViewItemDraw_o *)NetworkManager__getTime(0);
    eventMissionEnt = missionListviewItem->fields.eventMissionEnt;
    if ( !eventMissionEnt )
      goto LABEL_28;
    v7 = this;
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
    if ( missionListviewItem->fields.progStatus != 3 )
    {
      v10 = 1;
      missionListviewItem->fields.isNowMission = 1;
      goto LABEL_20;
    }
LABEL_18:
    v10 = 0;
    v4->fields.oldTime = 0;
LABEL_20:
    this = (MissionListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (MissionListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_NotEndEventMissionFixMaster___);
      if ( this )
      {
        v11 = NotEndEventMissionFixMaster__TryGetEntity(
                (NotEndEventMissionFixMaster_o *)this,
                &entity,
                missionListviewItem->fields.currentEventId,
                missionListviewItem->fields.currentMissionId,
                0);
        ((void (__fastcall *)(MissionListViewItemDraw_o *, MissionListViewItem_o *, MissionListViewItemDraw_o *, const MethodInfo *))v4->klass->vtable._9_UpdateDispResTime.methodPtr)(
          v4,
          missionListviewItem,
          v7,
          v4->klass->vtable._9_UpdateDispResTime.method);
        this = (MissionListViewItemDraw_o *)v4->fields.timeOverInfo;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v10 & !v11, 0);
          this = (MissionListViewItemDraw_o *)v4->fields.resTimeLb;
          if ( this )
          {
            this = (MissionListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
            if ( *p_isDispTime )
            {
              v5 = 1;
              if ( this )
                goto LABEL_26;
            }
            else
            {
              v5 = missionListviewItem->fields.progStatus == 3;
              if ( this )
                goto LABEL_26;
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C32E7C(this);
  }
  this = (MissionListViewItemDraw_o *)v4->fields.timeOverInfo;
  v4->fields.isDispTime = 0;
  if ( !this )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (MissionListViewItemDraw_o *)v4->fields.resTimeLb;
  if ( !this )
    goto LABEL_28;
  this = (MissionListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_28;
  v5 = 0;
LABEL_26:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v5, 0);
}


bool MissionListViewItemDraw__IsUseDefaultLockBoard(MissionListViewItemDraw_o *this, const MethodInfo *method)
{
  return 1;
}


void MissionListViewItemDraw__SetBoardImage(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x21
  _BOOL8 v6; // x0
  int32_t bannerGroupId; // w21
  UISprite_o *v8; // x22
  System_String_o *baseSpriteName; // x19
  UIAtlas_o *baseAtlas; // x20

  if ( (byte_4C3AC5D & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_4977/*"DEFAULT_LOCK_BOARD_GROUP_ID"*/);
    byte_4C3AC5D = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(baseSprite, 0, 0);
  if ( !v6 )
  {
    if ( !missionListviewItem )
      sub_1C32E7C(v6);
    bannerGroupId = missionListviewItem->fields.bannerGroupId;
    if ( (((__int64 (__fastcall *)(MissionListViewItemDraw_o *, const MethodInfo *))this->klass->vtable._7_IsUseDefaultLockBoard.methodPtr)(
            this,
            this->klass->vtable._7_IsUseDefaultLockBoard.method)
        & 1) != 0
      && missionListviewItem->fields.progStatus <= 1u )
    {
      bannerGroupId = ConstantMaster__getValue((System_String_o *)StringLiteral_4977/*"DEFAULT_LOCK_BOARD_GROUP_ID"*/, 0);
    }
    v8 = this->fields.baseSprite;
    baseAtlas = this->fields.baseAtlas;
    baseSpriteName = this->fields.baseSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetMissionBoardSprite(v8, baseAtlas, baseSpriteName, bannerGroupId, 0);
  }
}


void MissionListViewItemDraw__SetChallengeButtonActive(
        MissionListViewItemDraw_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *challengeButtonBg; // x21
  UISprite_o *v6; // x21
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4C3AC61 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_17554/*"btn_txt_challenge"*/);
    sub_1C32C20(&StringLiteral_17454/*"btn_bg_challenge"*/);
    byte_4C3AC61 = 1;
  }
  challengeButtonBg = (UnityEngine_Object_o *)this->fields.challengeButtonBg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(challengeButtonBg, 0, 0) )
  {
    v6 = this->fields.challengeButtonBg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v6, (System_String_o *)StringLiteral_17454/*"btn_bg_challenge"*/, 0);
    AtlasManager__SetBanner(this->fields.challengeButtonText, (System_String_o *)StringLiteral_17554/*"btn_txt_challenge"*/, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.challengeButtonBg;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C32E7C(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0);
  }
}


void MissionListViewItemDraw__SetInput(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  UICommonButton_o *miniIconComponent; // x0
  const MethodInfo *v7; // x2
  UILabel_o *missionCondLb; // x21
  System_String_o *condMsg; // x22
  MissionListViewItemDraw_c *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  float progVal; // s8
  UnityEngine_Object_o *rangeSprite; // x20
  UnityEngine_Object_o *addRangeSprite; // x20
  System_String_o *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3AC60 & 1) == 0 )
  {
    sub_1C32C20(&MissionListViewItemDraw_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AC60 = 1;
  }
  value = 0;
  if ( missionListViewItem )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      miniIconComponent = this->fields.baseButton;
      if ( miniIconComponent )
      {
        UICommonButton__SetColliderEnable(miniIconComponent, missionListViewItem->fields.isColliderEnable, 1, 0);
        miniIconComponent = this->fields.baseButton;
        if ( miniIconComponent )
        {
          ((void (__fastcall *)(UICommonButton_o *, _QWORD, __int64, const MethodInfo *))miniIconComponent->klass->vtable._14_SetState.methodPtr)(
            miniIconComponent,
            0,
            1,
            miniIconComponent->klass->vtable._14_SetState.method);
          ((void (__fastcall *)(MissionListViewItemDraw_o *, _QWORD, const MethodInfo *))this->klass->vtable._8_SetRewardStatusImg.methodPtr)(
            this,
            (unsigned int)missionListViewItem->fields.progStatus,
            this->klass->vtable._8_SetRewardStatusImg.method);
          miniIconComponent = (UICommonButton_o *)this->fields.miniIconComponent;
          if ( miniIconComponent )
          {
            MissionGiftMiniIconComponent__SetMiniIcon(
              (MissionGiftMiniIconComponent_o *)miniIconComponent,
              missionListViewItem->fields.subGiftEntity,
              0);
            miniIconComponent = (UICommonButton_o *)this->fields.miniIconComponent;
            if ( miniIconComponent )
            {
              miniIconComponent = (UICommonButton_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)miniIconComponent,
                                                        0);
              if ( miniIconComponent )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)miniIconComponent,
                  missionListViewItem->fields.subGiftEntity != 0,
                  0);
                MissionListViewItemDraw__CheckLockMissionBoard(this, missionListViewItem, v7);
                missionCondLb = this->fields.missionCondLb;
                condMsg = missionListViewItem->fields.condMsg;
                v10 = MissionListViewItemDraw_TypeInfo;
                if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
                  v10 = MissionListViewItemDraw_TypeInfo;
                }
                WrapControlText__textAdjust(missionCondLb, condMsg, v10->static_fields->DEFAULT_FONT_SIZE, 0, 0);
                value = missionListViewItem->fields.progTxt;
                sub_1C32BC4((CGThumbnailListItem_o *)&value, (int32_t)value, v11, v12);
                miniIconComponent = (UICommonButton_o *)this->fields.missionProgressLb;
                if ( miniIconComponent )
                {
                  progVal = missionListViewItem->fields.progVal;
                  UILabel__set_text((UILabel_o *)miniIconComponent, value, 0);
                  miniIconComponent = (UICommonButton_o *)this->fields.missionProgressLb;
                  if ( miniIconComponent )
                  {
                    UILabel__UpdateCondensedScaleComponent((UILabel_o *)miniIconComponent, 0);
                    miniIconComponent = (UICommonButton_o *)this->fields.expBar;
                    if ( miniIconComponent )
                    {
                      UIProgressBar__set_value((UIProgressBar_o *)miniIconComponent, progVal, 0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_31:
      sub_1C32E7C(miniIconComponent);
    }
  }
  else
  {
    rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rangeSprite, 0, 0) )
    {
      miniIconComponent = (UICommonButton_o *)this->fields.rangeSprite;
      if ( !miniIconComponent )
        goto LABEL_31;
      miniIconComponent = (UICommonButton_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)miniIconComponent,
                                                0);
      if ( !miniIconComponent )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)miniIconComponent, 0, 0);
    }
    addRangeSprite = (UnityEngine_Object_o *)this->fields.addRangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(addRangeSprite, 0, 0) )
    {
      miniIconComponent = (UICommonButton_o *)this->fields.addRangeSprite;
      if ( !miniIconComponent )
        goto LABEL_31;
      miniIconComponent = (UICommonButton_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)miniIconComponent,
                                                0);
      if ( !miniIconComponent )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)miniIconComponent, 0, 0);
    }
  }
}


bool MissionListViewItemDraw__SetItem(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int32_t mode,
        ListViewManager_o *listViewManager,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rangeSprite; // x23
  bool v10; // w0
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *v12; // x23
  struct GiftEntity_array *giftEnts; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct GiftEntity_array *giftEntityList; // x8
  UILabel_o *missionCondLb; // x22
  System_String_o *condMsg; // x23
  MissionListViewItemDraw_c *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  float progVal; // s8
  const MethodInfo *v23; // x2
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *challengeButtonBg; // x22
  const MethodInfo *v27; // x3
  __int64 naturalAligment; // x9
  bool v29; // w0
  UnityEngine_Object_o *addRangeSprite; // x20
  bool result; // w0
  bool v32; // w21
  const MethodInfo *v33; // x2
  UnityEngine_Object_o *baseSprite; // x21
  const MethodInfo *v35; // x2
  MasterMissionListViewItemDraw_o *v36; // x0
  MasterMissionListViewItem_o *v37; // x1
  MasterMissionListViewManager_o *v38; // x2
  const MethodInfo *v39; // x3
  System_Action_o *naviAction; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *value; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C3AC59 & 1) == 0 )
  {
    sub_1C32C20(&MissionListViewItemDraw_TypeInfo);
    sub_1C32C20(&MissionListViewManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AC59 = 1;
  }
  value = 0;
  naviAction = 0;
  rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality(rangeSprite, 0, 0);
  if ( !missionListViewItem )
  {
    if ( v10 )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_71;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    addRangeSprite = (UnityEngine_Object_o *)this->fields.addRangeSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(addRangeSprite, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.addRangeSprite;
      if ( !gameObject )
        goto LABEL_71;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    return 0;
  }
  if ( v10 )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.rangeSprite;
    if ( !gameObject )
      goto LABEL_71;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_71;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, mode == 0, 0);
  }
  v12 = (UnityEngine_Object_o *)this->fields.addRangeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.addRangeSprite;
    if ( !gameObject )
      goto LABEL_71;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_71;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)gameObject,
      missionListViewItem->fields.isTerminationSpace,
      0);
  }
  if ( !mode )
    return 1;
  gameObject = (UnityEngine_Component_o *)this->fields.rewardStatusInfo;
  if ( !gameObject )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.rewardImg;
  if ( !gameObject )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.receiveIcon;
  if ( !gameObject )
    goto LABEL_71;
  ShiningIconComponent__Clear((ShiningIconComponent_o *)gameObject, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.rewardGetInfo;
  if ( !gameObject )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.rewardAchiveInfo;
  if ( !gameObject )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.compInfo;
  if ( !gameObject )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.completedImg;
  if ( !gameObject )
    goto LABEL_71;
  gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)gameObject,
                                            0);
  if ( !gameObject )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.timeOverInfo;
  if ( !gameObject )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.lockImgInfo;
  if ( !gameObject )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  giftEnts = missionListViewItem->fields.giftEnts;
  this->fields.giftEntityList = giftEnts;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.giftEntityList, (int32_t)giftEnts, v14, v15);
  giftEntityList = this->fields.giftEntityList;
  if ( !giftEntityList )
    goto LABEL_71;
  this->fields.isMultipleReward = SLODWORD(giftEntityList->max_length) > 1;
  missionCondLb = this->fields.missionCondLb;
  condMsg = missionListViewItem->fields.condMsg;
  v19 = MissionListViewItemDraw_TypeInfo;
  if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
    v19 = MissionListViewItemDraw_TypeInfo;
  }
  WrapControlText__textAdjust(missionCondLb, condMsg, v19->static_fields->DEFAULT_FONT_SIZE, 0, 0);
  ((void (__fastcall *)(MissionListViewItemDraw_o *, _QWORD, const MethodInfo *))this->klass->vtable._8_SetRewardStatusImg.methodPtr)(
    this,
    (unsigned int)missionListViewItem->fields.progStatus,
    this->klass->vtable._8_SetRewardStatusImg.method);
  value = missionListViewItem->fields.progTxt;
  sub_1C32BC4((CGThumbnailListItem_o *)&value, (int32_t)value, v20, v21);
  gameObject = (UnityEngine_Component_o *)this->fields.missionProgressLb;
  if ( !gameObject )
    goto LABEL_71;
  progVal = missionListViewItem->fields.progVal;
  UILabel__set_text((UILabel_o *)gameObject, value, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.missionProgressLb;
  if ( !gameObject )
    goto LABEL_71;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.expBar;
  if ( !gameObject )
    goto LABEL_71;
  UIProgressBar__set_value((UIProgressBar_o *)gameObject, progVal, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.miniIconComponent;
  if ( !gameObject )
    goto LABEL_71;
  MissionGiftMiniIconComponent__SetMiniIcon(
    (MissionGiftMiniIconComponent_o *)gameObject,
    missionListViewItem->fields.subGiftEntity,
    0);
  gameObject = (UnityEngine_Component_o *)this->fields.miniIconComponent;
  if ( !gameObject )
    goto LABEL_71;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)gameObject,
    missionListViewItem->fields.subGiftEntity != 0,
    0);
  ((void (__fastcall *)(MissionListViewItemDraw_o *, MissionListViewItem_o *, const MethodInfo *))this->klass->vtable._5_InitDispResTime.methodPtr)(
    this,
    missionListViewItem,
    this->klass->vtable._5_InitDispResTime.method);
  MissionListViewItemDraw__CheckLockMissionBoard(this, missionListViewItem, v23);
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_71;
    UICommonButton__SetColliderEnable(
      (UICommonButton_o *)gameObject,
      missionListViewItem->fields.isColliderEnable,
      1,
      0);
    gameObject = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_71;
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
      gameObject,
      0,
      1,
      gameObject->klass[1]._1.implementedInterfaces);
  }
  if ( !missionListViewItem->fields.isChallengeButtonObjectExist )
    goto LABEL_65;
  challengeButtonBg = (UnityEngine_Object_o *)this->fields.challengeButtonBg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(challengeButtonBg, 0, 0) )
    goto LABEL_65;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                            (UnityEngine_Object_o *)listViewManager,
                                            0,
                                            0);
  if ( ((unsigned __int8)gameObject & 1) == 0 || missionListViewItem->fields.progStatus != 2 )
  {
LABEL_65:
    v29 = 0;
    goto LABEL_66;
  }
  if ( !listViewManager )
LABEL_71:
    sub_1C32E7C(gameObject);
  naturalAligment = MissionListViewManager_TypeInfo->_2.naturalAligment;
  if ( listViewManager->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (MissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[naturalAligment - 1] == MissionListViewManager_TypeInfo )
  {
    v29 = MissionListViewManager__TrySetupMissionCondNaviAction(
            (MissionListViewManager_o *)listViewManager,
            missionListViewItem,
            &naviAction,
            v27);
LABEL_66:
    v32 = v29;
    MissionListViewItemDraw__SetItemIconColliderActive(this, v29, v25);
    MissionListViewItemDraw__SetChallengeButtonActive(this, v32, v33);
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
      MissionListViewItemDraw__SetBoardImage(this, missionListViewItem, v35);
    return 1;
  }
  sub_1C3313C(listViewManager);
  MasterMissionListViewItemDraw__SetRewardItemIcon(v36, v37, v38, v39);
  return result;
}


void MissionListViewItemDraw__SetItemIconColliderActive(
        MissionListViewItemDraw_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Component_o *itemIcon; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4C3AC62 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AC62 = 1;
  }
  itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
  if ( !itemIcon )
    goto LABEL_10;
  itemIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(itemIcon, 0);
  if ( !itemIcon )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)itemIcon,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  itemIcon = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)itemIcon & 1) == 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isActive, 0);
      return;
    }
LABEL_10:
    sub_1C32E7C(itemIcon);
  }
}


void MissionListViewItemDraw__SetLockMissionBoard(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *lockImgInfo; // x0
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *Child; // x20
  UnityEngine_GameObject_o *v8; // x8
  int monitor; // w21
  UIWidget_o *missionCondLb; // x20

  if ( (byte_4C3AC5C & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C32C20(&MissionListViewItemDraw_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AC5C = 1;
  }
  lockImgInfo = this->fields.lockImgInfo;
  if ( !lockImgInfo )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(lockImgInfo, 1, 0);
  lockImgInfo = (UnityEngine_GameObject_o *)this->fields.miniIconComponent;
  if ( !lockImgInfo )
    goto LABEL_23;
  lockImgInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lockImgInfo, 0);
  if ( !lockImgInfo )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(lockImgInfo, 0, 0);
  if ( !missionListViewItem )
    goto LABEL_23;
  lockImgInfo = (UnityEngine_GameObject_o *)this->fields.closedMessageLabel;
  if ( !lockImgInfo )
    goto LABEL_23;
  UILabel__set_text((UILabel_o *)lockImgInfo, missionListViewItem->fields.closedMessage, 0);
  if ( MissionListViewItem__HasMissionConditionFlag(missionListViewItem, 64, v6) )
  {
    lockImgInfo = this->fields.lockImgInfo;
    if ( !lockImgInfo )
      goto LABEL_23;
    lockImgInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(lockImgInfo, 0);
    if ( !lockImgInfo )
      goto LABEL_23;
    Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)lockImgInfo, 0, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    lockImgInfo = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Child, 0, 0);
    if ( ((unsigned __int8)lockImgInfo & 1) != 0 )
    {
      if ( Child )
      {
        lockImgInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)Child,
                                                    (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( lockImgInfo )
        {
          v8 = lockImgInfo;
          lockImgInfo = (UnityEngine_GameObject_o *)this->fields.missionCondLb;
          if ( lockImgInfo )
          {
            monitor = (int)v8[7].monitor;
            UIWidget__set_depth((UIWidget_o *)lockImgInfo, monitor + 10, 0);
            missionCondLb = (UIWidget_o *)this->fields.missionCondLb;
            lockImgInfo = (UnityEngine_GameObject_o *)MissionListViewItemDraw_TypeInfo;
            if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
              lockImgInfo = (UnityEngine_GameObject_o *)MissionListViewItemDraw_TypeInfo;
            }
            if ( missionCondLb )
            {
              UIWidget__set_color(missionCondLb, *(UnityEngine_Color_o *)(lockImgInfo[7].fields.m_CachedPtr + 8), 0);
              lockImgInfo = (UnityEngine_GameObject_o *)this->fields.closedMessageLabel;
              if ( lockImgInfo )
              {
                UIWidget__set_depth((UIWidget_o *)lockImgInfo, monitor + 20, 0);
                return;
              }
            }
          }
        }
      }
LABEL_23:
      sub_1C32E7C(lockImgInfo);
    }
  }
}


void MissionListViewItemDraw__SetRewardIconAlpha(
        MissionListViewItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  if ( this->fields.isMultipleReward )
  {
    itemIcon = this->fields.itemIcon;
    if ( !itemIcon )
      sub_1C32E7C(0);
    ItemIconComponent__SetAlpha(itemIcon, alpha, 0);
  }
}


void MissionListViewItemDraw__SetRewardStatusImg(
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
      UnityEngine_GameObject__SetActive(rewardImg, 1, 0);
      rewardImg = (UnityEngine_GameObject_o *)this->fields.receiveIcon;
      if ( !rewardImg )
        goto LABEL_32;
      ShiningIconComponent__Clear((ShiningIconComponent_o *)rewardImg, 0);
      rewardImg = this->fields.rewardImg;
      if ( !rewardImg )
        goto LABEL_32;
      goto LABEL_15;
    case 3:
      rewardImg = (UnityEngine_GameObject_o *)this->fields.receiveIcon;
      if ( !rewardImg )
        goto LABEL_32;
      ShiningIconComponent__Set((ShiningIconComponent_o *)rewardImg, 0);
      rewardImg = this->fields.rewardImg;
      if ( !rewardImg )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(rewardImg, 0, 0);
      rewardImg = this->fields.compInfo;
      if ( !rewardImg )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(rewardImg, 1, 0);
      rewardImg = this->fields.completedImg;
      if ( !rewardImg )
        goto LABEL_32;
      rewardImg = UnityEngine_GameObject__get_gameObject(rewardImg, 0);
      if ( !rewardImg )
        goto LABEL_32;
LABEL_15:
      UnityEngine_GameObject__SetActive(rewardImg, 1, 0);
      rewardImg = this->fields.lockImgInfo;
      if ( !rewardImg )
LABEL_32:
        sub_1C32E7C(rewardImg);
LABEL_30:
      v5 = 0;
      break;
    case 4:
      rewardImg = this->fields.rewardStatusInfo;
      if ( !rewardImg )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(rewardImg, 0, 0);
      rewardImg = this->fields.rewardGetInfo;
      if ( !rewardImg )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(rewardImg, 1, 0);
      rewardImg = this->fields.rewardAchiveInfo;
      if ( !rewardImg )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(rewardImg, 1, 0);
      rewardImg = this->fields.compInfo;
      if ( !rewardImg )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(rewardImg, 1, 0);
      rewardImg = this->fields.completedImg;
      if ( !rewardImg )
        goto LABEL_32;
      rewardImg = UnityEngine_GameObject__get_gameObject(rewardImg, 0);
      if ( !rewardImg )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(rewardImg, 1, 0);
      rewardImg = (UnityEngine_GameObject_o *)this->fields.receiveIcon;
      if ( !rewardImg )
        goto LABEL_32;
      ShiningIconComponent__Clear((ShiningIconComponent_o *)rewardImg, 0);
      rewardImg = (UnityEngine_GameObject_o *)this->fields.resTimeLb;
      if ( !rewardImg )
        goto LABEL_32;
      rewardImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardImg, 0);
      if ( !rewardImg )
        goto LABEL_32;
      goto LABEL_30;
    case 5:
      rewardImg = this->fields.rewardStatusInfo;
      if ( rewardImg )
      {
        UnityEngine_GameObject__SetActive(rewardImg, 0, 0);
        rewardImg = this->fields.rewardGetInfo;
        if ( rewardImg )
        {
          UnityEngine_GameObject__SetActive(rewardImg, 0, 0);
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
      UnityEngine_GameObject__SetActive(rewardImg, 1, 0);
      rewardImg = (UnityEngine_GameObject_o *)this->fields.receiveIcon;
      if ( !rewardImg )
        goto LABEL_32;
      ShiningIconComponent__Clear((ShiningIconComponent_o *)rewardImg, 0);
      rewardImg = this->fields.rewardImg;
      if ( !rewardImg )
        goto LABEL_32;
      v5 = 1;
      break;
  }
  UnityEngine_GameObject__SetActive(rewardImg, v5, 0);
}


void MissionListViewItemDraw__UpdateDispResTime(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int64_t nowTime,
        const MethodInfo *method)
{
  MissionListViewItemDraw_o *v5; // x19
  int32_t progStatus; // w9
  struct EventMissionEntity_o *eventMissionEnt; // x8
  UILabel_o *resTimeLb; // x19
  int64_t closedAt; // x20
  const MethodInfo *v10; // x2
  System_String_o *RestTime; // x20
  __int64 *v12; // x8
  int64_t endedAt; // x20

  v5 = this;
  if ( (byte_4C3AC5F & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&MissionListViewItemDraw_TypeInfo);
    sub_1C32C20(&StringLiteral_13426/*"TIME_REST_QUEST"*/);
    this = (MissionListViewItemDraw_o *)sub_1C32C20(&StringLiteral_13414/*"TIME_REST_ACHIVE"*/);
    byte_4C3AC5F = 1;
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime = LocalizationManager__GetRestTime(closedAt, 0);
    if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
    v12 = &StringLiteral_13414/*"TIME_REST_ACHIVE"*/;
  }
  else
  {
    endedAt = eventMissionEnt->fields.endedAt;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime = LocalizationManager__GetRestTime(endedAt, 0);
    if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
    v12 = &StringLiteral_13426/*"TIME_REST_QUEST"*/;
  }
  this = (MissionListViewItemDraw_o *)MissionListViewItemDraw__GetTimeText((System_String_o *)*v12, RestTime, v10);
  if ( !resTimeLb )
LABEL_19:
    sub_1C32E7C(this);
  UILabel__set_text(resTimeLb, (System_String_o *)this, 0);
}