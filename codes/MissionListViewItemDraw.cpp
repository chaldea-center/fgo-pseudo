void __fastcall MissionListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  MissionListViewItemDraw_c *v6; // x8
  struct UnityEngine_Color_o v7; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F7BF3 & 1) == 0 )
  {
    sub_B16FFC(&MissionListViewItemDraw_TypeInfo, v1);
    byte_40F7BF3 = 1;
  }
  v8.fields.a = 1.0;
  MissionListViewItemDraw_TypeInfo->static_fields->TIME_UPDATE_ITVL_SEC = 1;
  MissionListViewItemDraw_TypeInfo->static_fields->DEFAULT_FONT_SIZE = 15;
  v8.fields.r = 0.43922;
  v7 = (struct UnityEngine_Color_o)0LL;
  v8.fields.g = 0.43922;
  v8.fields.b = 0.43922;
  UnityEngine_Color___ctor(v8, v2, v3, v4, v5, (const MethodInfo *)&v7);
  v6 = MissionListViewItemDraw_TypeInfo;
  MissionListViewItemDraw_TypeInfo->static_fields->MISSION_COND_LB_LOCK_COLOR = v7;
  v6->static_fields->MISSION_COND_LB_DEPTH_INIT = 6;
}


void __fastcall MissionListViewItemDraw___ctor(MissionListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MissionListViewItemDraw__Awake(MissionListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct UISprite_o *v10; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UISprite_o *v18; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_40F7BEA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7BEA = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v10 = this->fields.baseSprite;
    if ( !v10
      || (mAtlas = v10->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.baseAtlas,
            (System_Int32_array **)mAtlas,
            v4,
            v5,
            v6,
            v7,
            v8,
            v9),
          (v18 = this->fields.baseSprite) == 0LL) )
    {
      sub_B170D4();
    }
    mSpriteName = v18->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewItemDraw__CheckLockMissionBoard(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  UIWidget_o *missionCondLb; // x21
  UIWidget_o *v6; // x21
  int v7; // s0

  if ( (byte_40F7BEC & 1) == 0 )
  {
    sub_B16FFC(&MissionListViewItemDraw_TypeInfo, missionListViewItem);
    byte_40F7BEC = 1;
  }
  missionCondLb = (UIWidget_o *)this->fields.missionCondLb;
  if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  }
  if ( !missionCondLb
    || (UIWidget__set_depth(
          missionCondLb,
          MissionListViewItemDraw_TypeInfo->static_fields->MISSION_COND_LB_DEPTH_INIT,
          0LL),
        v6 = (UIWidget_o *)this->fields.missionCondLb,
        *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL),
        !v6)
    || (UIWidget__set_color(v6, *(UnityEngine_Color_o *)&v7, 0LL), !missionListViewItem) )
  {
    sub_B170D4();
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
  System_String_o *v6; // x0

  if ( (byte_40F7BF0 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, timrStr);
    sub_B16FFC(&StringLiteral_80/*" "*/, v5);
    byte_40F7BF0 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get(key, 0LL);
  return System_String__Concat_43746016(v6, (System_String_o *)StringLiteral_80/*" "*/, timrStr, 0LL);
}


void __fastcall MissionListViewItemDraw__InitDispResTime(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  char v10; // w1
  int64_t Time; // x0
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int64_t v13; // x21
  _BOOL4 v14; // w8
  char v15; // w23
  WebViewManager_o *Instance; // x0
  NotEndEventMissionFixMaster_o *MasterData_WarQuestSelectionMaster; // x0
  bool v18; // w22
  UnityEngine_GameObject_o *timeOverInfo; // x0
  UnityEngine_Component_o *resTimeLb; // x0
  NotEndEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F7BED & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_NotEndEventMissionFixMaster___, missionListviewItem);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F7BED = 1;
  }
  entity = 0LL;
  if ( !missionListviewItem )
    goto LABEL_28;
  if ( missionListviewItem->fields.progStatus != 4 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    eventMissionEnt = missionListviewItem->fields.eventMissionEnt;
    if ( eventMissionEnt )
    {
      v13 = Time;
      if ( Time >= eventMissionEnt->fields.startedAt )
      {
        v14 = Time < eventMissionEnt->fields.endedAt;
        if ( !this )
          goto LABEL_28;
      }
      else
      {
        v14 = 0;
        if ( !this )
          goto LABEL_28;
      }
      this->fields.isDispTime = v14;
      if ( v14 || missionListviewItem->fields.progStatus == 3 )
      {
        v15 = 0;
        this->fields.oldTime = 0LL;
      }
      else
      {
        v15 = 1;
        missionListviewItem->fields.isNowMission = 1;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = (NotEndEventMissionFixMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NotEndEventMissionFixMaster___);
        if ( MasterData_WarQuestSelectionMaster )
        {
          v18 = NotEndEventMissionFixMaster__TryGetEntity(
                  MasterData_WarQuestSelectionMaster,
                  &entity,
                  missionListviewItem->fields.currentEventId,
                  missionListviewItem->fields.currentMissionId,
                  0LL);
          ((void (__fastcall *)(MissionListViewItemDraw_o *, MissionListViewItem_o *, int64_t, Il2CppMethodPointer))this->klass->vtable._9_UpdateDispResTime.method)(
            this,
            missionListviewItem,
            v13,
            this->klass->vtable._10_SetInput.methodPtr);
          timeOverInfo = this->fields.timeOverInfo;
          if ( timeOverInfo )
          {
            UnityEngine_GameObject__SetActive(timeOverInfo, v15 & !v18, 0LL);
            resTimeLb = (UnityEngine_Component_o *)this->fields.resTimeLb;
            if ( resTimeLb )
            {
              gameObject = UnityEngine_Component__get_gameObject(resTimeLb, 0LL);
              if ( this->fields.isDispTime )
              {
                v10 = 1;
                if ( gameObject )
                  goto LABEL_26;
              }
              else
              {
                v10 = missionListviewItem->fields.progStatus == 3;
                if ( gameObject )
                  goto LABEL_26;
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_B170D4();
  }
  v7 = this->fields.timeOverInfo;
  this->fields.isDispTime = 0;
  if ( !v7 )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(v7, 0, 0LL);
  v8 = (UnityEngine_Component_o *)this->fields.resTimeLb;
  if ( !v8 )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  v10 = 0;
LABEL_26:
  UnityEngine_GameObject__SetActive(gameObject, v10, 0LL);
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
  __int64 v6; // x1
  UnityEngine_Object_o *baseSprite; // x21
  int32_t bannerGroupId; // w21
  UISprite_o *v9; // x22
  System_String_o *baseSpriteName; // x19
  UIAtlas_o *baseAtlas; // x20

  if ( (byte_40F7BEF & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, missionListviewItem);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_4555/*"DEFAULT_LOCK_BOARD_GROUP_ID"*/, v6);
    byte_40F7BEF = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL) )
  {
    if ( !missionListviewItem )
      sub_B170D4();
    bannerGroupId = missionListviewItem->fields.bannerGroupId;
    if ( (((__int64 (__fastcall *)(MissionListViewItemDraw_o *, Il2CppMethodPointer))this->klass->vtable._7_IsUseDefaultLockBoard.method)(
            this,
            this->klass->vtable._8_SetRewardStatusImg.methodPtr) & 1) != 0
      && missionListviewItem->fields.progStatus <= 1u )
    {
      bannerGroupId = ConstantMaster__getValue((System_String_o *)StringLiteral_4555/*"DEFAULT_LOCK_BOARD_GROUP_ID"*/, 0LL);
    }
    v9 = this->fields.baseSprite;
    baseAtlas = this->fields.baseAtlas;
    baseSpriteName = this->fields.baseSpriteName;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetMissionBoardSprite(v9, baseAtlas, baseSpriteName, bannerGroupId, 0LL);
  }
}


void __fastcall MissionListViewItemDraw__SetInput(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *baseButton; // x21
  UICommonButton_o *v7; // x0
  struct UICommonButton_o *v8; // x0
  const MethodInfo *v9; // x2
  MissionGiftMiniIconComponent_o *miniIconComponent; // x0
  const MethodInfo *v11; // x2
  UILabel_o *missionCondLb; // x21
  System_String_o *condMsg; // x22
  MissionListViewItemDraw_c *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UILabel_o *missionProgressLb; // x0
  float progVal; // s8
  UILabel_o *v23; // x0
  UIProgressBar_o *expBar; // x0
  UnityEngine_Object_o *rangeSprite; // x20
  UnityEngine_Component_o *v26; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *addRangeSprite; // x20
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  System_String_o *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F7BF2 & 1) == 0 )
  {
    sub_B16FFC(&MissionListViewItemDraw_TypeInfo, missionListViewItem);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F7BF2 = 1;
  }
  value = 0LL;
  if ( missionListViewItem )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      v7 = this->fields.baseButton;
      if ( v7 )
      {
        UICommonButton__SetColliderEnable(v7, missionListViewItem->fields.isColliderEnable, 1, 0LL);
        v8 = this->fields.baseButton;
        if ( v8 )
        {
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v8->klass->vtable._14_SetState.method)(
            v8,
            0LL,
            1LL,
            v8->klass->vtable._15_OnPress.methodPtr);
          ((void (__fastcall *)(MissionListViewItemDraw_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_SetRewardStatusImg.method)(
            this,
            (unsigned int)missionListViewItem->fields.progStatus,
            this->klass->vtable._9_UpdateDispResTime.methodPtr);
          miniIconComponent = this->fields.miniIconComponent;
          if ( miniIconComponent )
          {
            MissionGiftMiniIconComponent__SetMiniIcon(miniIconComponent, missionListViewItem->fields.subGiftEntity, v9);
            MissionListViewItemDraw__CheckLockMissionBoard(this, missionListViewItem, v11);
            missionCondLb = this->fields.missionCondLb;
            condMsg = missionListViewItem->fields.condMsg;
            v14 = MissionListViewItemDraw_TypeInfo;
            if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
              v14 = MissionListViewItemDraw_TypeInfo;
            }
            WrapControlText__textAdjust(missionCondLb, condMsg, v14->static_fields->DEFAULT_FONT_SIZE, 0, 0, 0LL);
            value = missionListViewItem->fields.progTxt;
            sub_B16F98(
              (BattleServantConfConponent_o *)&value,
              (System_Int32_array **)value,
              v15,
              v16,
              v17,
              v18,
              v19,
              v20);
            missionProgressLb = this->fields.missionProgressLb;
            if ( missionProgressLb )
            {
              progVal = missionListViewItem->fields.progVal;
              UILabel__set_text(missionProgressLb, value, 0LL);
              v23 = this->fields.missionProgressLb;
              if ( v23 )
              {
                UILabel__UpdateCondensedScaleComponent(v23, 0LL);
                expBar = (UIProgressBar_o *)this->fields.expBar;
                if ( expBar )
                {
                  UIProgressBar__set_value(expBar, progVal, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_33:
      sub_B170D4();
    }
  }
  else
  {
    rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL) )
    {
      v26 = (UnityEngine_Component_o *)this->fields.rangeSprite;
      if ( !v26 )
        goto LABEL_33;
      gameObject = UnityEngine_Component__get_gameObject(v26, 0LL);
      if ( !gameObject )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    }
    addRangeSprite = (UnityEngine_Object_o *)this->fields.addRangeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(addRangeSprite, 0LL, 0LL) )
    {
      v29 = (UnityEngine_Component_o *)this->fields.addRangeSprite;
      if ( !v29 )
        goto LABEL_33;
      v30 = UnityEngine_Component__get_gameObject(v29, 0LL);
      if ( !v30 )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(v30, 0, 0LL);
    }
  }
}


bool __fastcall MissionListViewItemDraw__SetItem(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int32_t mode,
        ListViewManager_o *listViewManager,
        const MethodInfo *method)
{
  __int64 v8; // x1
  UnityEngine_Object_o *rangeSprite; // x22
  UnityEngine_Component_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *addRangeSprite; // x22
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *rewardStatusInfo; // x0
  UnityEngine_GameObject_o *rewardImg; // x0
  ShiningIconComponent_o *receiveIcon; // x0
  UnityEngine_GameObject_o *rewardGetInfo; // x0
  UnityEngine_GameObject_o *rewardAchiveInfo; // x0
  UnityEngine_GameObject_o *compInfo; // x0
  UnityEngine_GameObject_o *completedImg; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *timeOverInfo; // x0
  UnityEngine_GameObject_o *lockImgInfo; // x0
  struct GiftEntity_array *giftEnts; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct GiftEntity_array *giftEntityList; // x8
  UILabel_o *missionCondLb; // x21
  System_String_o *condMsg; // x22
  MissionListViewItemDraw_c *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UILabel_o *missionProgressLb; // x0
  float progVal; // s8
  UILabel_o *v44; // x0
  UIProgressBar_o *expBar; // x0
  const MethodInfo *v46; // x2
  MissionGiftMiniIconComponent_o *miniIconComponent; // x0
  const MethodInfo *v48; // x2
  UnityEngine_Object_o *baseButton; // x21
  UICommonButton_o *v50; // x0
  struct UICommonButton_o *v51; // x0
  UnityEngine_Object_o *baseSprite; // x21
  const MethodInfo *v53; // x2
  UnityEngine_Component_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_Object_o *v57; // x20
  UnityEngine_Component_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  System_String_o *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F7BEB & 1) == 0 )
  {
    sub_B16FFC(&MissionListViewItemDraw_TypeInfo, missionListViewItem);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40F7BEB = 1;
  }
  value = 0LL;
  rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
  if ( missionListViewItem )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL) )
    {
      v10 = (UnityEngine_Component_o *)this->fields.rangeSprite;
      if ( !v10 )
        goto LABEL_65;
      gameObject = UnityEngine_Component__get_gameObject(v10, 0LL);
      if ( !gameObject )
        goto LABEL_65;
      UnityEngine_GameObject__SetActive(gameObject, mode == 0, 0LL);
    }
    addRangeSprite = (UnityEngine_Object_o *)this->fields.addRangeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(addRangeSprite, 0LL, 0LL) )
    {
      v13 = (UnityEngine_Component_o *)this->fields.addRangeSprite;
      if ( !v13 )
        goto LABEL_65;
      v14 = UnityEngine_Component__get_gameObject(v13, 0LL);
      if ( !v14 )
        goto LABEL_65;
      UnityEngine_GameObject__SetActive(v14, missionListViewItem->fields.isTerminationSpace, 0LL);
    }
    if ( !mode )
      return 1;
    rewardStatusInfo = this->fields.rewardStatusInfo;
    if ( rewardStatusInfo )
    {
      UnityEngine_GameObject__SetActive(rewardStatusInfo, 1, 0LL);
      rewardImg = this->fields.rewardImg;
      if ( rewardImg )
      {
        UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
        receiveIcon = this->fields.receiveIcon;
        if ( receiveIcon )
        {
          ShiningIconComponent__Clear(receiveIcon, 0LL);
          rewardGetInfo = this->fields.rewardGetInfo;
          if ( rewardGetInfo )
          {
            UnityEngine_GameObject__SetActive(rewardGetInfo, 0, 0LL);
            rewardAchiveInfo = this->fields.rewardAchiveInfo;
            if ( rewardAchiveInfo )
            {
              UnityEngine_GameObject__SetActive(rewardAchiveInfo, 0, 0LL);
              compInfo = this->fields.compInfo;
              if ( compInfo )
              {
                UnityEngine_GameObject__SetActive(compInfo, 0, 0LL);
                completedImg = this->fields.completedImg;
                if ( completedImg )
                {
                  v22 = UnityEngine_GameObject__get_gameObject(completedImg, 0LL);
                  if ( v22 )
                  {
                    UnityEngine_GameObject__SetActive(v22, 0, 0LL);
                    timeOverInfo = this->fields.timeOverInfo;
                    if ( timeOverInfo )
                    {
                      UnityEngine_GameObject__SetActive(timeOverInfo, 0, 0LL);
                      lockImgInfo = this->fields.lockImgInfo;
                      if ( lockImgInfo )
                      {
                        UnityEngine_GameObject__SetActive(lockImgInfo, 0, 0LL);
                        giftEnts = missionListViewItem->fields.giftEnts;
                        this->fields.giftEntityList = giftEnts;
                        sub_B16F98(
                          (BattleServantConfConponent_o *)&this->fields.giftEntityList,
                          (System_Int32_array **)giftEnts,
                          v26,
                          v27,
                          v28,
                          v29,
                          v30,
                          v31);
                        giftEntityList = this->fields.giftEntityList;
                        if ( giftEntityList )
                        {
                          this->fields.isMultipleReward = (signed int)giftEntityList->max_length > 1;
                          missionCondLb = this->fields.missionCondLb;
                          condMsg = missionListViewItem->fields.condMsg;
                          v35 = MissionListViewItemDraw_TypeInfo;
                          if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
                            v35 = MissionListViewItemDraw_TypeInfo;
                          }
                          WrapControlText__textAdjust(
                            missionCondLb,
                            condMsg,
                            v35->static_fields->DEFAULT_FONT_SIZE,
                            0,
                            0,
                            0LL);
                          ((void (__fastcall *)(MissionListViewItemDraw_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_SetRewardStatusImg.method)(
                            this,
                            (unsigned int)missionListViewItem->fields.progStatus,
                            this->klass->vtable._9_UpdateDispResTime.methodPtr);
                          value = missionListViewItem->fields.progTxt;
                          sub_B16F98(
                            (BattleServantConfConponent_o *)&value,
                            (System_Int32_array **)value,
                            v36,
                            v37,
                            v38,
                            v39,
                            v40,
                            v41);
                          missionProgressLb = this->fields.missionProgressLb;
                          if ( missionProgressLb )
                          {
                            progVal = missionListViewItem->fields.progVal;
                            UILabel__set_text(missionProgressLb, value, 0LL);
                            v44 = this->fields.missionProgressLb;
                            if ( v44 )
                            {
                              UILabel__UpdateCondensedScaleComponent(v44, 0LL);
                              expBar = (UIProgressBar_o *)this->fields.expBar;
                              if ( expBar )
                              {
                                UIProgressBar__set_value(expBar, progVal, 0LL);
                                miniIconComponent = this->fields.miniIconComponent;
                                if ( miniIconComponent )
                                {
                                  MissionGiftMiniIconComponent__SetMiniIcon(
                                    miniIconComponent,
                                    missionListViewItem->fields.subGiftEntity,
                                    v46);
                                  ((void (__fastcall *)(MissionListViewItemDraw_o *, MissionListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_InitDispResTime.method)(
                                    this,
                                    missionListViewItem,
                                    this->klass->vtable._6_SetLockMissionBoard.methodPtr);
                                  MissionListViewItemDraw__CheckLockMissionBoard(this, missionListViewItem, v48);
                                  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  }
                                  if ( !UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
                                    goto LABEL_44;
                                  v50 = this->fields.baseButton;
                                  if ( v50 )
                                  {
                                    UICommonButton__SetColliderEnable(
                                      v50,
                                      missionListViewItem->fields.isColliderEnable,
                                      1,
                                      0LL);
                                    v51 = this->fields.baseButton;
                                    if ( v51 )
                                    {
                                      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v51->klass->vtable._14_SetState.method)(
                                        v51,
                                        0LL,
                                        1LL,
                                        v51->klass->vtable._15_OnPress.methodPtr);
LABEL_44:
                                      baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
                                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                      }
                                      if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
                                        MissionListViewItemDraw__SetBoardImage(this, missionListViewItem, v53);
                                      return 1;
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
LABEL_65:
    sub_B170D4();
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL) )
  {
    v55 = (UnityEngine_Component_o *)this->fields.rangeSprite;
    if ( !v55 )
      goto LABEL_65;
    v56 = UnityEngine_Component__get_gameObject(v55, 0LL);
    if ( !v56 )
      goto LABEL_65;
    UnityEngine_GameObject__SetActive(v56, 0, 0LL);
  }
  v57 = (UnityEngine_Object_o *)this->fields.addRangeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v57, 0LL, 0LL) )
  {
    v58 = (UnityEngine_Component_o *)this->fields.addRangeSprite;
    if ( !v58 )
      goto LABEL_65;
    v59 = UnityEngine_Component__get_gameObject(v58, 0LL);
    if ( !v59 )
      goto LABEL_65;
    UnityEngine_GameObject__SetActive(v59, 0, 0LL);
  }
  return 0;
}


void __fastcall MissionListViewItemDraw__SetLockMissionBoard(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *lockImgInfo; // x0
  UnityEngine_Component_o *miniIconComponent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *closedMessageLabel; // x0
  const MethodInfo *v11; // x2
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *Child; // x20
  UIWidget_o *missionCondLb; // x21
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v17; // x19
  MissionListViewItemDraw_c *v18; // x0

  if ( (byte_40F7BEE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, missionListViewItem);
    sub_B16FFC(&MissionListViewItemDraw_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40F7BEE = 1;
  }
  lockImgInfo = this->fields.lockImgInfo;
  if ( !lockImgInfo )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(lockImgInfo, 1, 0LL);
  miniIconComponent = (UnityEngine_Component_o *)this->fields.miniIconComponent;
  if ( !miniIconComponent )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(miniIconComponent, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( !missionListViewItem )
    goto LABEL_24;
  closedMessageLabel = this->fields.closedMessageLabel;
  if ( !closedMessageLabel )
    goto LABEL_24;
  UILabel__set_text(closedMessageLabel, missionListViewItem->fields.closedMessage, 0LL);
  if ( MissionListViewItem__HasMissionConditionFlag(missionListViewItem, 64, v11) )
  {
    v12 = this->fields.lockImgInfo;
    if ( !v12 )
      goto LABEL_24;
    transform = UnityEngine_GameObject__get_transform(v12, 0LL);
    if ( !transform )
      goto LABEL_24;
    Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(transform, 0, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Child, 0LL, 0LL) )
    {
      if ( Child )
      {
        missionCondLb = (UIWidget_o *)this->fields.missionCondLb;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    Child,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( Component_WebViewObject )
        {
          if ( missionCondLb )
          {
            UIWidget__set_depth(missionCondLb, LODWORD(Component_WebViewObject[1].fields.onLoaded) + 10, 0LL);
            v17 = (UIWidget_o *)this->fields.missionCondLb;
            v18 = MissionListViewItemDraw_TypeInfo;
            if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
              v18 = MissionListViewItemDraw_TypeInfo;
            }
            if ( v17 )
            {
              UIWidget__set_color(v17, v18->static_fields->MISSION_COND_LB_LOCK_COLOR, 0LL);
              return;
            }
          }
        }
      }
LABEL_24:
      sub_B170D4();
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
      sub_B170D4();
    ItemIconComponent__SetAlpha(itemIcon, alpha, 0LL);
  }
}


void __fastcall MissionListViewItemDraw__SetRewardStatusImg(
        MissionListViewItemDraw_o *this,
        int32_t status,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *rewardImg; // x0
  ShiningIconComponent_o *receiveIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ShiningIconComponent_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *compInfo; // x0
  UnityEngine_GameObject_o *completedImg; // x0
  UnityEngine_GameObject_o *lockImgInfo; // x0
  UnityEngine_GameObject_o *rewardStatusInfo; // x0
  UnityEngine_GameObject_o *rewardGetInfo; // x0
  UnityEngine_GameObject_o *rewardAchiveInfo; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  ShiningIconComponent_o *v18; // x0
  UnityEngine_Component_o *resTimeLb; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  bool v22; // w1
  UnityEngine_GameObject_o *v23; // x0
  ShiningIconComponent_o *v24; // x0

  switch ( status )
  {
    case 2:
      rewardImg = this->fields.rewardImg;
      if ( !rewardImg )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(rewardImg, 1, 0LL);
      receiveIcon = this->fields.receiveIcon;
      if ( !receiveIcon )
        goto LABEL_32;
      ShiningIconComponent__Clear(receiveIcon, 0LL);
      gameObject = this->fields.rewardImg;
      if ( !gameObject )
        goto LABEL_32;
      goto LABEL_11;
    case 3:
      v7 = this->fields.receiveIcon;
      if ( !v7 )
        goto LABEL_32;
      ShiningIconComponent__Set(v7, 0LL);
      v8 = this->fields.rewardImg;
      if ( !v8 )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(v8, 0, 0LL);
      compInfo = this->fields.compInfo;
      if ( !compInfo )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(compInfo, 1, 0LL);
      completedImg = this->fields.completedImg;
      if ( !completedImg )
        goto LABEL_32;
      gameObject = UnityEngine_GameObject__get_gameObject(completedImg, 0LL);
      if ( !gameObject )
        goto LABEL_32;
LABEL_11:
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      lockImgInfo = this->fields.lockImgInfo;
      if ( !lockImgInfo )
LABEL_32:
        sub_B170D4();
LABEL_26:
      v22 = 0;
      break;
    case 4:
      rewardStatusInfo = this->fields.rewardStatusInfo;
      if ( !rewardStatusInfo )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(rewardStatusInfo, 0, 0LL);
      rewardGetInfo = this->fields.rewardGetInfo;
      if ( !rewardGetInfo )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(rewardGetInfo, 1, 0LL);
      rewardAchiveInfo = this->fields.rewardAchiveInfo;
      if ( !rewardAchiveInfo )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(rewardAchiveInfo, 1, 0LL);
      v15 = this->fields.compInfo;
      if ( !v15 )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(v15, 1, 0LL);
      v16 = this->fields.completedImg;
      if ( !v16 )
        goto LABEL_32;
      v17 = UnityEngine_GameObject__get_gameObject(v16, 0LL);
      if ( !v17 )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(v17, 1, 0LL);
      v18 = this->fields.receiveIcon;
      if ( !v18 )
        goto LABEL_32;
      ShiningIconComponent__Clear(v18, 0LL);
      resTimeLb = (UnityEngine_Component_o *)this->fields.resTimeLb;
      if ( !resTimeLb )
        goto LABEL_32;
      lockImgInfo = UnityEngine_Component__get_gameObject(resTimeLb, 0LL);
      if ( !lockImgInfo )
        goto LABEL_32;
      goto LABEL_26;
    case 5:
      v20 = this->fields.rewardStatusInfo;
      if ( v20 )
      {
        UnityEngine_GameObject__SetActive(v20, 0, 0LL);
        v21 = this->fields.rewardGetInfo;
        if ( v21 )
        {
          UnityEngine_GameObject__SetActive(v21, 0, 0LL);
          lockImgInfo = this->fields.rewardAchiveInfo;
          if ( lockImgInfo )
            goto LABEL_26;
        }
      }
      goto LABEL_32;
    default:
      v23 = this->fields.rewardImg;
      if ( !v23 )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(v23, 1, 0LL);
      v24 = this->fields.receiveIcon;
      if ( !v24 )
        goto LABEL_32;
      ShiningIconComponent__Clear(v24, 0LL);
      lockImgInfo = this->fields.rewardImg;
      if ( !lockImgInfo )
        goto LABEL_32;
      v22 = 1;
      break;
  }
  UnityEngine_GameObject__SetActive(lockImgInfo, v22, 0LL);
}


void __fastcall MissionListViewItemDraw__UpdateDispResTime(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t progStatus; // w9
  struct EventMissionEntity_o *eventMissionEnt; // x8
  UILabel_o *resTimeLb; // x19
  int64_t closedAt; // x20
  const MethodInfo *v13; // x2
  System_String_o *RestTime; // x20
  __int64 *v15; // x8
  int64_t endedAt; // x20
  System_String_o *TimeText; // x0

  if ( (byte_40F7BF1 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, missionListViewItem);
    sub_B16FFC(&MissionListViewItemDraw_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_13348/*"TIME_REST_QUEST"*/, v7);
    sub_B16FFC(&StringLiteral_13336/*"TIME_REST_ACHIVE"*/, v8);
    byte_40F7BF1 = 1;
  }
  if ( !missionListViewItem )
    goto LABEL_23;
  progStatus = missionListViewItem->fields.progStatus;
  if ( progStatus == 4 )
    return;
  eventMissionEnt = missionListViewItem->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    goto LABEL_23;
  resTimeLb = this->fields.resTimeLb;
  if ( progStatus == 3 )
  {
    closedAt = eventMissionEnt->fields.closedAt;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime = LocalizationManager__GetRestTime(closedAt, 0LL);
    if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
    }
    v15 = &StringLiteral_13336/*"TIME_REST_ACHIVE"*/;
  }
  else
  {
    endedAt = eventMissionEnt->fields.endedAt;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime = LocalizationManager__GetRestTime(endedAt, 0LL);
    if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
    }
    v15 = &StringLiteral_13348/*"TIME_REST_QUEST"*/;
  }
  TimeText = MissionListViewItemDraw__GetTimeText((System_String_o *)*v15, RestTime, v13);
  if ( !resTimeLb )
LABEL_23:
    sub_B170D4();
  UILabel__set_text(resTimeLb, TimeText, 0LL);
}