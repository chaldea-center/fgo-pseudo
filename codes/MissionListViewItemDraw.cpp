void MissionListViewItemDraw___cctor(const MethodInfo *method)
{
  MissionListViewItemDraw_c *v1; // x8
  struct MissionListViewItemDraw_StaticFields *static_fields; // x10
  struct MissionListViewItemDraw_StaticFields *v3; // x8

  if ( (byte_593C0FE & 1) == 0 )
  {
    sub_21FFC50(&MissionListViewItemDraw_TypeInfo);
    byte_593C0FE = 1;
  }
  v1 = MissionListViewItemDraw_TypeInfo;
  static_fields = MissionListViewItemDraw_TypeInfo->static_fields;
  static_fields->MISSION_COND_LB_LOCK_COLOR = (struct UnityEngine_Color_o)xmmword_E92CD0;
  v3 = v1->static_fields;
  *(_QWORD *)&static_fields->TIME_UPDATE_ITVL_SEC = 0xF00000001LL;
  v3->MISSION_COND_LB_DEPTH_INIT = 6;
}


void MissionListViewItemDraw___ctor(MissionListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MissionListViewItemDraw__Awake(MissionListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct UISprite_o *v20; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_593C0F3 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C0F3 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( v4 )
  {
    v12 = this->fields.baseSprite;
    if ( !v12
      || (mAtlas = v12->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.baseAtlas,
            (int32_t)mAtlas,
            v6,
            v7,
            v8,
            v9,
            v10,
            v11),
          (v20 = this->fields.baseSprite) == 0) )
    {
      sub_21FFECC(v4, v5);
    }
    mSpriteName = v20->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseSpriteName,
      (int32_t)mSpriteName,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
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

  if ( (byte_593C0F5 & 1) == 0 )
  {
    sub_21FFC50(&MissionListViewItemDraw_TypeInfo);
    byte_593C0F5 = 1;
  }
  v5 = (UIWidget_o *)MissionListViewItemDraw_TypeInfo;
  missionCondLb = (UIWidget_o *)this->fields.missionCondLb;
  if ( !*(&MissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, missionListViewItem);
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
    sub_21FFECC(v5, missionListViewItem);
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

  if ( (byte_593C0F9 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    byte_593C0F9 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, timrStr);
  v5 = LocalizationManager__Get(key, 0);
  return System_String__Concat_75481624(v5, (System_String_o *)StringLiteral_113/*" "*/, timrStr, 0);
}


void MissionListViewItemDraw__InitDispResTime(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  MissionListViewItem_o *v3; // x19
  MissionListViewItemDraw_o *v4; // x20
  struct EventMissionEntity_o *eventMissionEnt; // x8
  MissionListViewItemDraw_o *v6; // x21
  bool *p_isDispTime; // x23
  __int64 endedAt; // x8
  char v9; // w24
  bool v10; // w22
  NotEndEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = missionListviewItem;
  v4 = this;
  if ( (byte_593C0F6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_NotEndEventMissionFixMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    this = (MissionListViewItemDraw_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593C0F6 = 1;
  }
  entity = 0;
  if ( !v3 )
    goto LABEL_28;
  if ( v3->fields.progStatus == 4 )
  {
    this = (MissionListViewItemDraw_o *)v4->fields.timeOverInfo;
    v4->fields.isDispTime = 0;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (MissionListViewItemDraw_o *)v4->fields.resTimeLb;
      if ( this )
      {
        this = (MissionListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          return;
        }
      }
    }
LABEL_28:
    sub_21FFECC(this, missionListviewItem);
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, missionListviewItem);
  this = (MissionListViewItemDraw_o *)NetworkManager__getTime(0);
  eventMissionEnt = v3->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    goto LABEL_28;
  v6 = this;
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
    v9 = 1;
    v3->fields.isNowMission = 1;
    goto LABEL_20;
  }
LABEL_18:
  v9 = 0;
  v4->fields.oldTime = 0;
LABEL_20:
  this = (MissionListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (MissionListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_NotEndEventMissionFixMaster___);
  if ( !this )
    goto LABEL_28;
  v10 = NotEndEventMissionFixMaster__TryGetEntity(
          (NotEndEventMissionFixMaster_o *)this,
          &entity,
          v3->fields.currentEventId,
          v3->fields.currentMissionId,
          0);
  ((void (__fastcall *)(MissionListViewItemDraw_o *, MissionListViewItem_o *, MissionListViewItemDraw_o *, const MethodInfo *))v4->klass->vtable._9_UpdateDispResTime.methodPtr)(
    v4,
    v3,
    v6,
    v4->klass->vtable._9_UpdateDispResTime.method);
  this = (MissionListViewItemDraw_o *)v4->fields.timeOverInfo;
  if ( !this )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v9 & !v10, 0);
  this = (MissionListViewItemDraw_o *)v4->fields.resTimeLb;
  if ( !this )
    goto LABEL_28;
  this = (MissionListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( *p_isDispTime )
  {
    missionListviewItem = (MissionListViewItem_o *)(&dword_0 + 1);
    if ( !this )
      goto LABEL_28;
  }
  else
  {
    missionListviewItem = (MissionListViewItem_o *)(v3->fields.progStatus == 3);
    if ( !this )
      goto LABEL_28;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)missionListviewItem, 0);
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
  __int64 v7; // x1
  int32_t bannerGroupId; // w21
  __int64 v9; // x1
  UISprite_o *v10; // x20
  System_String_o *baseSpriteName; // x19
  UIAtlas_o *baseAtlas; // x22

  if ( (byte_593C0F8 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_5152/*"DEFAULT_LOCK_BOARD_GROUP_ID"*/);
    byte_593C0F8 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, missionListviewItem);
  v6 = UnityEngine_Object__op_Equality(baseSprite, 0, 0);
  if ( !v6 )
  {
    if ( !missionListviewItem )
      sub_21FFECC(v6, v7);
    bannerGroupId = missionListviewItem->fields.bannerGroupId;
    if ( (((__int64 (__fastcall *)(MissionListViewItemDraw_o *, const MethodInfo *))this->klass->vtable._7_IsUseDefaultLockBoard.methodPtr)(
            this,
            this->klass->vtable._7_IsUseDefaultLockBoard.method)
        & 1) != 0
      && missionListviewItem->fields.progStatus <= 1u )
    {
      bannerGroupId = ConstantMaster__getValue((System_String_o *)StringLiteral_5152/*"DEFAULT_LOCK_BOARD_GROUP_ID"*/, 0);
    }
    v10 = this->fields.baseSprite;
    baseAtlas = this->fields.baseAtlas;
    baseSpriteName = this->fields.baseSpriteName;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9);
    AtlasManager__SetMissionBoardSprite(v10, baseAtlas, baseSpriteName, bannerGroupId, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void MissionListViewItemDraw__SetChallengeButtonActive(
        MissionListViewItemDraw_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *challengeButtonBg; // x21
  __int64 v6; // x1
  UISprite_o *v7; // x21
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_593C0FC & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_18290/*"btn_txt_challenge"*/);
    sub_21FFC50(&StringLiteral_18182/*"btn_bg_challenge"*/);
    byte_593C0FC = 1;
  }
  challengeButtonBg = (UnityEngine_Object_o *)this->fields.challengeButtonBg;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
  if ( !UnityEngine_Object__op_Equality(challengeButtonBg, 0, 0) )
  {
    v7 = this->fields.challengeButtonBg;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6);
    AtlasManager__SetBanner(v7, (System_String_o *)StringLiteral_18182/*"btn_bg_challenge"*/, 0);
    AtlasManager__SetBanner(this->fields.challengeButtonText, (System_String_o *)StringLiteral_18290/*"btn_txt_challenge"*/, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.challengeButtonBg;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_21FFECC(gameObject, v8);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0);
  }
}


void MissionListViewItemDraw__SetInput(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  int v5; // w8
  UnityEngine_Object_o *baseButton; // x21
  __int64 v7; // x1
  UICommonButton_o *miniIconComponent; // x0
  const MethodInfo *v9; // x2
  __int64 v10; // x1
  UILabel_o *missionCondLb; // x21
  System_String_o *condMsg; // x22
  MissionListViewItemDraw_c *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  float progVal; // s8
  UnityEngine_Object_o *rangeSprite; // x20
  UnityEngine_Object_o *addRangeSprite; // x20
  System_String_o *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593C0FB & 1) == 0 )
  {
    sub_21FFC50(&MissionListViewItemDraw_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C0FB = 1;
  }
  value = 0;
  v5 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( missionListViewItem )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, missionListViewItem);
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
                MissionListViewItemDraw__CheckLockMissionBoard(this, missionListViewItem, v9);
                missionCondLb = this->fields.missionCondLb;
                condMsg = missionListViewItem->fields.condMsg;
                v13 = MissionListViewItemDraw_TypeInfo;
                if ( !*(&MissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, v10);
                  v13 = MissionListViewItemDraw_TypeInfo;
                }
                WrapControlText__textAdjust(missionCondLb, condMsg, v13->static_fields->DEFAULT_FONT_SIZE, 0, 0);
                value = missionListViewItem->fields.progTxt;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&value, (int32_t)value, v14, v15, v16, v17, v18, v19);
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
      sub_21FFECC(miniIconComponent, v7);
    }
  }
  else
  {
    rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, missionListViewItem);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
  int v10; // w8
  __int64 v11; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *addRangeSprite; // x23
  struct GiftEntity_array *giftEnts; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct GiftEntity_array *giftEntityList; // x8
  UILabel_o *missionCondLb; // x22
  System_String_o *condMsg; // x23
  MissionListViewItemDraw_c *v24; // x0
  bool v25; // w9
  int v26; // w8
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  float progVal; // s8
  const MethodInfo *v34; // x2
  __int64 v35; // x1
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v37; // x2
  UnityEngine_Object_o *challengeButtonBg; // x22
  __int64 v39; // x1
  MissionListViewManager_o *v40; // x0
  const MethodInfo *v41; // x3
  bool v42; // w21
  UnityEngine_Object_o *v43; // x21
  const MethodInfo *v44; // x2
  __int64 v45; // x1
  UnityEngine_Object_o *baseSprite; // x21
  const MethodInfo *v47; // x2
  System_Action_o *naviAction; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *value; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_593C0F4 & 1) == 0 )
  {
    sub_21FFC50(&MissionListViewItemDraw_TypeInfo);
    sub_21FFC50(&MissionListViewManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C0F4 = 1;
  }
  rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
  value = 0;
  naviAction = 0;
  v10 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( missionListViewItem )
  {
    if ( !v10 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, missionListViewItem);
    if ( UnityEngine_Object__op_Inequality(rangeSprite, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_70;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_70;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, mode == 0, 0);
    }
    addRangeSprite = (UnityEngine_Object_o *)this->fields.addRangeSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(addRangeSprite, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.addRangeSprite;
      if ( !gameObject )
        goto LABEL_70;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_70;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)gameObject,
        missionListViewItem->fields.isTerminationSpace,
        0);
    }
    if ( !mode )
      return missionListViewItem != 0;
    gameObject = (UnityEngine_Component_o *)this->fields.rewardStatusInfo;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.rewardImg;
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.receiveIcon;
        if ( gameObject )
        {
          ShiningIconComponent__Clear((ShiningIconComponent_o *)gameObject, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.rewardGetInfo;
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
            gameObject = (UnityEngine_Component_o *)this->fields.rewardAchiveInfo;
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
              gameObject = (UnityEngine_Component_o *)this->fields.compInfo;
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
                gameObject = (UnityEngine_Component_o *)this->fields.completedImg;
                if ( gameObject )
                {
                  gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                            (UnityEngine_GameObject_o *)gameObject,
                                                            0);
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
                    gameObject = (UnityEngine_Component_o *)this->fields.timeOverInfo;
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
                      gameObject = (UnityEngine_Component_o *)this->fields.lockImgInfo;
                      if ( gameObject )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
                        giftEnts = missionListViewItem->fields.giftEnts;
                        this->fields.giftEntityList = giftEnts;
                        sub_21FFBF4(
                          (MissionNaviTransitionBoardItem_o *)&this->fields.giftEntityList,
                          (int32_t)giftEnts,
                          v15,
                          v16,
                          v17,
                          v18,
                          v19,
                          v20);
                        giftEntityList = this->fields.giftEntityList;
                        if ( giftEntityList )
                        {
                          missionCondLb = this->fields.missionCondLb;
                          condMsg = missionListViewItem->fields.condMsg;
                          v24 = MissionListViewItemDraw_TypeInfo;
                          v25 = SLODWORD(giftEntityList->max_length) > 1;
                          v26 = *(&MissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1);
                          this->fields.isMultipleReward = v25;
                          if ( !v26 )
                          {
                            j_il2cpp_runtime_class_init_0(v24, v11);
                            v24 = MissionListViewItemDraw_TypeInfo;
                          }
                          WrapControlText__textAdjust(
                            missionCondLb,
                            condMsg,
                            v24->static_fields->DEFAULT_FONT_SIZE,
                            0,
                            0);
                          ((void (__fastcall *)(MissionListViewItemDraw_o *, _QWORD, const MethodInfo *))this->klass->vtable._8_SetRewardStatusImg.methodPtr)(
                            this,
                            (unsigned int)missionListViewItem->fields.progStatus,
                            this->klass->vtable._8_SetRewardStatusImg.method);
                          value = missionListViewItem->fields.progTxt;
                          sub_21FFBF4(
                            (MissionNaviTransitionBoardItem_o *)&value,
                            (int32_t)value,
                            v27,
                            v28,
                            v29,
                            v30,
                            v31,
                            v32);
                          gameObject = (UnityEngine_Component_o *)this->fields.missionProgressLb;
                          if ( gameObject )
                          {
                            progVal = missionListViewItem->fields.progVal;
                            UILabel__set_text((UILabel_o *)gameObject, value, 0);
                            gameObject = (UnityEngine_Component_o *)this->fields.missionProgressLb;
                            if ( gameObject )
                            {
                              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0);
                              gameObject = (UnityEngine_Component_o *)this->fields.expBar;
                              if ( gameObject )
                              {
                                UIProgressBar__set_value((UIProgressBar_o *)gameObject, progVal, 0);
                                gameObject = (UnityEngine_Component_o *)this->fields.miniIconComponent;
                                if ( gameObject )
                                {
                                  MissionGiftMiniIconComponent__SetMiniIcon(
                                    (MissionGiftMiniIconComponent_o *)gameObject,
                                    missionListViewItem->fields.subGiftEntity,
                                    0);
                                  gameObject = (UnityEngine_Component_o *)this->fields.miniIconComponent;
                                  if ( gameObject )
                                  {
                                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                              gameObject,
                                                                              0);
                                    if ( gameObject )
                                    {
                                      UnityEngine_GameObject__SetActive(
                                        (UnityEngine_GameObject_o *)gameObject,
                                        missionListViewItem->fields.subGiftEntity != 0,
                                        0);
                                      ((void (__fastcall *)(MissionListViewItemDraw_o *, MissionListViewItem_o *, const MethodInfo *))this->klass->vtable._5_InitDispResTime.methodPtr)(
                                        this,
                                        missionListViewItem,
                                        this->klass->vtable._5_InitDispResTime.method);
                                      MissionListViewItemDraw__CheckLockMissionBoard(this, missionListViewItem, v34);
                                      baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
                                      if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
                                      {
                                        gameObject = (UnityEngine_Component_o *)this->fields.baseButton;
                                        if ( !gameObject )
                                          goto LABEL_70;
                                        UICommonButton__SetColliderEnable(
                                          (UICommonButton_o *)gameObject,
                                          missionListViewItem->fields.isColliderEnable,
                                          1,
                                          0);
                                        gameObject = (UnityEngine_Component_o *)this->fields.baseButton;
                                        if ( !gameObject )
                                          goto LABEL_70;
                                        ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
                                          gameObject,
                                          0,
                                          1,
                                          gameObject->klass[1]._1.implementedInterfaces);
                                      }
                                      if ( !missionListViewItem->fields.isChallengeButtonObjectExist )
                                        goto LABEL_64;
                                      challengeButtonBg = (UnityEngine_Object_o *)this->fields.challengeButtonBg;
                                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
                                      if ( !UnityEngine_Object__op_Inequality(challengeButtonBg, 0, 0) )
                                        goto LABEL_64;
                                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
                                      if ( !UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)listViewManager,
                                              0,
                                              0)
                                        || missionListViewItem->fields.progStatus != 2 )
                                      {
LABEL_64:
                                        v42 = 0;
                                        goto LABEL_65;
                                      }
                                      gameObject = (UnityEngine_Component_o *)sub_1FEB9C0(
                                                                                listViewManager,
                                                                                MissionListViewManager_TypeInfo);
                                      if ( gameObject )
                                      {
                                        v40 = (MissionListViewManager_o *)sub_1FEB9C0(
                                                                            listViewManager,
                                                                            MissionListViewManager_TypeInfo);
                                        v42 = MissionListViewManager__TrySetupMissionCondNaviAction(
                                                v40,
                                                missionListViewItem,
                                                &naviAction,
                                                v41);
LABEL_65:
                                        MissionListViewItemDraw__SetItemIconColliderActive(this, v42, v37);
                                        MissionListViewItemDraw__SetChallengeButtonActive(this, v42, v44);
                                        baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
                                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
                                        if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
                                          MissionListViewItemDraw__SetBoardImage(this, missionListViewItem, v47);
                                        return missionListViewItem != 0;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_70:
    sub_21FFECC(gameObject, v11);
  }
  if ( !v10 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, missionListViewItem);
  if ( UnityEngine_Object__op_Inequality(rangeSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.rangeSprite;
    if ( !gameObject )
      goto LABEL_70;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v43 = (UnityEngine_Object_o *)this->fields.addRangeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(v43, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.addRangeSprite;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        return missionListViewItem != 0;
      }
    }
    goto LABEL_70;
  }
  return missionListViewItem != 0;
}


// local variable allocation has failed, the output may be wrong!
void MissionListViewItemDraw__SetItemIconColliderActive(
        MissionListViewItemDraw_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Component_o *itemIcon; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_593C0FD & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C0FD = 1;
  }
  itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
  if ( !itemIcon )
    goto LABEL_10;
  itemIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(itemIcon, 0);
  if ( !itemIcon )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)itemIcon,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  itemIcon = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)itemIcon & 1) == 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isActive, 0);
      return;
    }
LABEL_10:
    sub_21FFECC(itemIcon, isActive);
  }
}


void MissionListViewItemDraw__SetLockMissionBoard(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *lockImgInfo; // x0
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  UnityEngine_Object_o *Child; // x20
  UnityEngine_GameObject_o *v9; // x8
  int monitor; // w21
  UIWidget_o *missionCondLb; // x20

  if ( (byte_593C0F7 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_21FFC50(&MissionListViewItemDraw_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C0F7 = 1;
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    lockImgInfo = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Child, 0, 0);
    if ( ((unsigned __int8)lockImgInfo & 1) != 0 )
    {
      if ( Child )
      {
        lockImgInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)Child,
                                                    (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( lockImgInfo )
        {
          v9 = lockImgInfo;
          lockImgInfo = (UnityEngine_GameObject_o *)this->fields.missionCondLb;
          if ( lockImgInfo )
          {
            monitor = (int)v9[7].monitor;
            UIWidget__set_depth((UIWidget_o *)lockImgInfo, monitor + 10, 0);
            missionCondLb = (UIWidget_o *)this->fields.missionCondLb;
            lockImgInfo = (UnityEngine_GameObject_o *)MissionListViewItemDraw_TypeInfo;
            if ( !*(&MissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, missionListViewItem);
            if ( missionCondLb )
            {
              UIWidget__set_color(
                missionCondLb,
                MissionListViewItemDraw_TypeInfo->static_fields->MISSION_COND_LB_LOCK_COLOR,
                0);
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
      sub_21FFECC(lockImgInfo, missionListViewItem);
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
      sub_21FFECC(0, method);
    ItemIconComponent__SetAlpha(itemIcon, alpha, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void MissionListViewItemDraw__SetRewardStatusImg(
        MissionListViewItemDraw_o *this,
        int32_t status,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *rewardStatusInfo; // x0
  bool v5; // w1

  if ( status > 3 )
  {
    if ( status == 4 )
    {
      rewardStatusInfo = this->fields.rewardStatusInfo;
      if ( !rewardStatusInfo )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive(rewardStatusInfo, 0, 0);
      rewardStatusInfo = this->fields.rewardGetInfo;
      if ( !rewardStatusInfo )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive(rewardStatusInfo, 1, 0);
      rewardStatusInfo = this->fields.rewardAchiveInfo;
      if ( !rewardStatusInfo )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive(rewardStatusInfo, 1, 0);
      rewardStatusInfo = this->fields.compInfo;
      if ( !rewardStatusInfo )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive(rewardStatusInfo, 1, 0);
      rewardStatusInfo = this->fields.completedImg;
      if ( !rewardStatusInfo )
        goto LABEL_36;
      rewardStatusInfo = UnityEngine_GameObject__get_gameObject(rewardStatusInfo, 0);
      if ( !rewardStatusInfo )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive(rewardStatusInfo, 1, 0);
      rewardStatusInfo = (UnityEngine_GameObject_o *)this->fields.receiveIcon;
      if ( !rewardStatusInfo )
        goto LABEL_36;
      ShiningIconComponent__Clear((ShiningIconComponent_o *)rewardStatusInfo, 0);
      rewardStatusInfo = (UnityEngine_GameObject_o *)this->fields.resTimeLb;
      if ( !rewardStatusInfo )
        goto LABEL_36;
      rewardStatusInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardStatusInfo, 0);
      if ( !rewardStatusInfo )
        goto LABEL_36;
    }
    else
    {
      if ( status != 5 )
        goto LABEL_16;
      rewardStatusInfo = this->fields.rewardStatusInfo;
      if ( !rewardStatusInfo
        || (UnityEngine_GameObject__SetActive(rewardStatusInfo, 0, 0),
            (rewardStatusInfo = this->fields.rewardGetInfo) == 0)
        || (UnityEngine_GameObject__SetActive(rewardStatusInfo, 0, 0),
            (rewardStatusInfo = this->fields.rewardAchiveInfo) == 0) )
      {
LABEL_36:
        sub_21FFECC(rewardStatusInfo, *(_QWORD *)&status);
      }
    }
LABEL_34:
    v5 = 0;
    goto LABEL_35;
  }
  if ( status == 2 )
  {
    rewardStatusInfo = this->fields.rewardImg;
    if ( rewardStatusInfo )
    {
      UnityEngine_GameObject__SetActive(rewardStatusInfo, 1, 0);
      rewardStatusInfo = (UnityEngine_GameObject_o *)this->fields.receiveIcon;
      if ( rewardStatusInfo )
      {
        ShiningIconComponent__Clear((ShiningIconComponent_o *)rewardStatusInfo, 0);
        rewardStatusInfo = this->fields.rewardImg;
        if ( rewardStatusInfo )
        {
LABEL_23:
          UnityEngine_GameObject__SetActive(rewardStatusInfo, 1, 0);
          rewardStatusInfo = this->fields.lockImgInfo;
          if ( !rewardStatusInfo )
            goto LABEL_36;
          goto LABEL_34;
        }
      }
    }
    goto LABEL_36;
  }
  if ( status == 3 )
  {
    rewardStatusInfo = (UnityEngine_GameObject_o *)this->fields.receiveIcon;
    if ( !rewardStatusInfo )
      goto LABEL_36;
    ShiningIconComponent__Set((ShiningIconComponent_o *)rewardStatusInfo, 0);
    rewardStatusInfo = this->fields.rewardImg;
    if ( !rewardStatusInfo )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive(rewardStatusInfo, 0, 0);
    rewardStatusInfo = this->fields.compInfo;
    if ( !rewardStatusInfo )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive(rewardStatusInfo, 1, 0);
    rewardStatusInfo = this->fields.completedImg;
    if ( !rewardStatusInfo )
      goto LABEL_36;
    rewardStatusInfo = UnityEngine_GameObject__get_gameObject(rewardStatusInfo, 0);
    if ( !rewardStatusInfo )
      goto LABEL_36;
    goto LABEL_23;
  }
LABEL_16:
  rewardStatusInfo = this->fields.rewardImg;
  if ( !rewardStatusInfo )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(rewardStatusInfo, 1, 0);
  rewardStatusInfo = (UnityEngine_GameObject_o *)this->fields.receiveIcon;
  if ( !rewardStatusInfo )
    goto LABEL_36;
  ShiningIconComponent__Clear((ShiningIconComponent_o *)rewardStatusInfo, 0);
  rewardStatusInfo = this->fields.rewardImg;
  if ( !rewardStatusInfo )
    goto LABEL_36;
  v5 = 1;
LABEL_35:
  UnityEngine_GameObject__SetActive(rewardStatusInfo, v5, 0);
}


void MissionListViewItemDraw__UpdateDispResTime(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int64_t nowTime,
        const MethodInfo *method)
{
  MissionListViewItemDraw_o *v5; // x19
  int32_t progStatus; // w8
  struct EventMissionEntity_o *eventMissionEnt; // x8
  UILabel_o *resTimeLb; // x19
  int64_t closedAt; // x20
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_String_o *RestTime; // x20
  __int64 *v13; // x8
  struct EventMissionEntity_o *v14; // x8
  int64_t endedAt; // x20
  __int64 v16; // x1

  v5 = this;
  if ( (byte_593C0FA & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&MissionListViewItemDraw_TypeInfo);
    sub_21FFC50(&StringLiteral_13953/*"TIME_REST_QUEST"*/);
    this = (MissionListViewItemDraw_o *)sub_21FFC50(&StringLiteral_13941/*"TIME_REST_ACHIVE"*/);
    byte_593C0FA = 1;
  }
  if ( !missionListViewItem )
    goto LABEL_21;
  progStatus = missionListViewItem->fields.progStatus;
  if ( progStatus != 4 )
  {
    if ( progStatus == 3 )
    {
      eventMissionEnt = missionListViewItem->fields.eventMissionEnt;
      if ( !eventMissionEnt )
        goto LABEL_21;
      resTimeLb = v5->fields.resTimeLb;
      closedAt = eventMissionEnt->fields.closedAt;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, missionListViewItem);
      RestTime = LocalizationManager__GetRestTime(closedAt, 0);
      if ( !*(&MissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, v10);
      v13 = &StringLiteral_13941/*"TIME_REST_ACHIVE"*/;
    }
    else
    {
      v14 = missionListViewItem->fields.eventMissionEnt;
      if ( !v14 )
        goto LABEL_21;
      resTimeLb = v5->fields.resTimeLb;
      endedAt = v14->fields.endedAt;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, missionListViewItem);
      RestTime = LocalizationManager__GetRestTime(endedAt, 0);
      if ( !*(&MissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, v16);
      v13 = &StringLiteral_13953/*"TIME_REST_QUEST"*/;
    }
    this = (MissionListViewItemDraw_o *)MissionListViewItemDraw__GetTimeText((System_String_o *)*v13, RestTime, v11);
    if ( resTimeLb )
    {
      UILabel__set_text(resTimeLb, (System_String_o *)this, 0);
      return;
    }
LABEL_21:
    sub_21FFECC(this, missionListViewItem);
  }
}