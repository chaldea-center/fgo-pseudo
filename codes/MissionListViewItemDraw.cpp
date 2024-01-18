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

  if ( (byte_4187315 & 1) == 0 )
  {
    sub_B2C35C(&MissionListViewItemDraw_TypeInfo, v1);
    byte_4187315 = 1;
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
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UISprite_o *v20; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_418730C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418730C = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( v4 )
  {
    v12 = this->fields.baseSprite;
    if ( !v12
      || (mAtlas = v12->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.baseAtlas,
            (System_Int32_array **)mAtlas,
            v6,
            v7,
            v8,
            v9,
            v10,
            v11),
          (v20 = this->fields.baseSprite) == 0LL) )
    {
      sub_B2C434(v4, v5);
    }
    mSpriteName = v20->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewItemDraw__CheckLockMissionBoard(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  UIWidget_o *missionCondLb; // x21
  MissionListViewItemDraw_c *v6; // x0
  UIWidget_o *v7; // x21
  int v8; // s0

  if ( (byte_418730E & 1) == 0 )
  {
    sub_B2C35C(&MissionListViewItemDraw_TypeInfo, missionListViewItem);
    byte_418730E = 1;
  }
  missionCondLb = (UIWidget_o *)this->fields.missionCondLb;
  v6 = MissionListViewItemDraw_TypeInfo;
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
        v7 = (UIWidget_o *)this->fields.missionCondLb,
        *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL),
        !v7)
    || (UIWidget__set_color(v7, *(UnityEngine_Color_o *)&v8, 0LL), !missionListViewItem) )
  {
    sub_B2C434(v6, missionListViewItem);
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

  if ( (byte_4187312 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, timrStr);
    sub_B2C35C(&StringLiteral_80/*" "*/, v5);
    byte_4187312 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get(key, 0LL);
  return System_String__Concat_44307816(v6, (System_String_o *)StringLiteral_80/*" "*/, timrStr, 0LL);
}


void __fastcall MissionListViewItemDraw__InitDispResTime(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  MissionListViewItem_o *v3; // x20
  MissionListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct EventMissionEntity_o *eventMissionEnt; // x8
  MissionListViewItemDraw_o *v8; // x21
  _BOOL4 v9; // w8
  char v10; // w23
  bool v11; // w22
  NotEndEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = missionListviewItem;
  v4 = this;
  if ( (byte_418730F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_NotEndEventMissionFixMaster___, missionListviewItem);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    this = (MissionListViewItemDraw_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418730F = 1;
  }
  entity = 0LL;
  if ( !v3 )
    goto LABEL_28;
  if ( v3->fields.progStatus != 4 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (MissionListViewItemDraw_o *)NetworkManager__getTime(0LL);
    eventMissionEnt = v3->fields.eventMissionEnt;
    if ( eventMissionEnt )
    {
      v8 = this;
      if ( (__int64)this >= eventMissionEnt->fields.startedAt )
      {
        v9 = (__int64)this < eventMissionEnt->fields.endedAt;
        if ( !v4 )
          goto LABEL_28;
      }
      else
      {
        v9 = 0;
        if ( !v4 )
          goto LABEL_28;
      }
      v4->fields.isDispTime = v9;
      if ( v9 || v3->fields.progStatus == 3 )
      {
        v10 = 0;
        v4->fields.oldTime = 0LL;
      }
      else
      {
        v10 = 1;
        v3->fields.isNowMission = 1;
      }
      this = (MissionListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (MissionListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NotEndEventMissionFixMaster___);
        if ( this )
        {
          v11 = NotEndEventMissionFixMaster__TryGetEntity(
                  (NotEndEventMissionFixMaster_o *)this,
                  &entity,
                  v3->fields.currentEventId,
                  v3->fields.currentMissionId,
                  0LL);
          ((void (__fastcall *)(MissionListViewItemDraw_o *, MissionListViewItem_o *, MissionListViewItemDraw_o *, Il2CppMethodPointer))v4->klass->vtable._9_UpdateDispResTime.method)(
            v4,
            v3,
            v8,
            v4->klass->vtable._10_SetInput.methodPtr);
          this = (MissionListViewItemDraw_o *)v4->fields.timeOverInfo;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v10 & !v11, 0LL);
            this = (MissionListViewItemDraw_o *)v4->fields.resTimeLb;
            if ( this )
            {
              this = (MissionListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
              if ( v4->fields.isDispTime )
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
    }
LABEL_28:
    sub_B2C434(this, missionListviewItem);
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
  __int64 v6; // x1
  UnityEngine_Object_o *baseSprite; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int32_t bannerGroupId; // w21
  UISprite_o *v11; // x22
  System_String_o *baseSpriteName; // x19
  UIAtlas_o *baseAtlas; // x20

  if ( (byte_4187311 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, missionListviewItem);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_4570/*"DEFAULT_LOCK_BOARD_GROUP_ID"*/, v6);
    byte_4187311 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !missionListviewItem )
      sub_B2C434(v8, v9);
    bannerGroupId = missionListviewItem->fields.bannerGroupId;
    if ( (((__int64 (__fastcall *)(MissionListViewItemDraw_o *, Il2CppMethodPointer))this->klass->vtable._7_IsUseDefaultLockBoard.method)(
            this,
            this->klass->vtable._8_SetRewardStatusImg.methodPtr) & 1) != 0
      && missionListviewItem->fields.progStatus <= 1u )
    {
      bannerGroupId = ConstantMaster__getValue((System_String_o *)StringLiteral_4570/*"DEFAULT_LOCK_BOARD_GROUP_ID"*/, 0LL);
    }
    v11 = this->fields.baseSprite;
    baseAtlas = this->fields.baseAtlas;
    baseSpriteName = this->fields.baseSpriteName;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetMissionBoardSprite(v11, baseAtlas, baseSpriteName, bannerGroupId, 0LL);
  }
}


void __fastcall MissionListViewItemDraw__SetInput(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *baseButton; // x21
  __int64 v7; // x1
  UICommonButton_o *miniIconComponent; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  UILabel_o *missionCondLb; // x21
  System_String_o *condMsg; // x22
  MissionListViewItemDraw_c *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  float progVal; // s8
  UnityEngine_Object_o *rangeSprite; // x20
  UnityEngine_Object_o *addRangeSprite; // x20
  System_String_o *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4187314 & 1) == 0 )
  {
    sub_B2C35C(&MissionListViewItemDraw_TypeInfo, missionListViewItem);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4187314 = 1;
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
              v9);
            MissionListViewItemDraw__CheckLockMissionBoard(this, missionListViewItem, v10);
            missionCondLb = this->fields.missionCondLb;
            condMsg = missionListViewItem->fields.condMsg;
            v13 = MissionListViewItemDraw_TypeInfo;
            if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
              v13 = MissionListViewItemDraw_TypeInfo;
            }
            WrapControlText__textAdjust(missionCondLb, condMsg, v13->static_fields->DEFAULT_FONT_SIZE, 0, 0, 0LL);
            value = missionListViewItem->fields.progTxt;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&value,
              (System_Int32_array **)value,
              v14,
              v15,
              v16,
              v17,
              v18,
              v19);
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
LABEL_33:
      sub_B2C434(miniIconComponent, v7);
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
      miniIconComponent = (UICommonButton_o *)this->fields.rangeSprite;
      if ( !miniIconComponent )
        goto LABEL_33;
      miniIconComponent = (UICommonButton_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)miniIconComponent,
                                                0LL);
      if ( !miniIconComponent )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)miniIconComponent, 0, 0LL);
    }
    addRangeSprite = (UnityEngine_Object_o *)this->fields.addRangeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(addRangeSprite, 0LL, 0LL) )
    {
      miniIconComponent = (UICommonButton_o *)this->fields.addRangeSprite;
      if ( !miniIconComponent )
        goto LABEL_33;
      miniIconComponent = (UICommonButton_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)miniIconComponent,
                                                0LL);
      if ( !miniIconComponent )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)miniIconComponent, 0, 0LL);
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
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *addRangeSprite; // x22
  struct GiftEntity_array *giftEnts; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct GiftEntity_array *giftEntityList; // x8
  UILabel_o *missionCondLb; // x21
  System_String_o *condMsg; // x22
  MissionListViewItemDraw_c *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  float progVal; // s8
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  UnityEngine_Object_o *baseButton; // x21
  UnityEngine_Object_o *baseSprite; // x21
  const MethodInfo *v35; // x2
  UnityEngine_Object_o *v37; // x20
  System_String_o *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418730D & 1) == 0 )
  {
    sub_B2C35C(&MissionListViewItemDraw_TypeInfo, missionListViewItem);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_418730D = 1;
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
      gameObject = (UnityEngine_Component_o *)this->fields.rangeSprite;
      if ( !gameObject )
        goto LABEL_65;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_65;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, mode == 0, 0LL);
    }
    addRangeSprite = (UnityEngine_Object_o *)this->fields.addRangeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(addRangeSprite, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.addRangeSprite;
      if ( !gameObject )
        goto LABEL_65;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_65;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)gameObject,
        missionListViewItem->fields.isTerminationSpace,
        0LL);
    }
    if ( !mode )
      return 1;
    gameObject = (UnityEngine_Component_o *)this->fields.rewardStatusInfo;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.rewardImg;
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.receiveIcon;
        if ( gameObject )
        {
          ShiningIconComponent__Clear((ShiningIconComponent_o *)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.rewardGetInfo;
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
            gameObject = (UnityEngine_Component_o *)this->fields.rewardAchiveInfo;
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
              gameObject = (UnityEngine_Component_o *)this->fields.compInfo;
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                gameObject = (UnityEngine_Component_o *)this->fields.completedImg;
                if ( gameObject )
                {
                  gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                            (UnityEngine_GameObject_o *)gameObject,
                                                            0LL);
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                    gameObject = (UnityEngine_Component_o *)this->fields.timeOverInfo;
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                      gameObject = (UnityEngine_Component_o *)this->fields.lockImgInfo;
                      if ( gameObject )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
                        giftEnts = missionListViewItem->fields.giftEnts;
                        this->fields.giftEntityList = giftEnts;
                        sub_B2C2F8(
                          (BattleServantConfConponent_o *)&this->fields.giftEntityList,
                          (System_Int32_array **)giftEnts,
                          v14,
                          v15,
                          v16,
                          v17,
                          v18,
                          v19);
                        giftEntityList = this->fields.giftEntityList;
                        if ( giftEntityList )
                        {
                          this->fields.isMultipleReward = (signed int)giftEntityList->max_length > 1;
                          missionCondLb = this->fields.missionCondLb;
                          condMsg = missionListViewItem->fields.condMsg;
                          v23 = MissionListViewItemDraw_TypeInfo;
                          if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
                            v23 = MissionListViewItemDraw_TypeInfo;
                          }
                          WrapControlText__textAdjust(
                            missionCondLb,
                            condMsg,
                            v23->static_fields->DEFAULT_FONT_SIZE,
                            0,
                            0,
                            0LL);
                          ((void (__fastcall *)(MissionListViewItemDraw_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_SetRewardStatusImg.method)(
                            this,
                            (unsigned int)missionListViewItem->fields.progStatus,
                            this->klass->vtable._9_UpdateDispResTime.methodPtr);
                          value = missionListViewItem->fields.progTxt;
                          sub_B2C2F8(
                            (BattleServantConfConponent_o *)&value,
                            (System_Int32_array **)value,
                            v24,
                            v25,
                            v26,
                            v27,
                            v28,
                            v29);
                          gameObject = (UnityEngine_Component_o *)this->fields.missionProgressLb;
                          if ( gameObject )
                          {
                            progVal = missionListViewItem->fields.progVal;
                            UILabel__set_text((UILabel_o *)gameObject, value, 0LL);
                            gameObject = (UnityEngine_Component_o *)this->fields.missionProgressLb;
                            if ( gameObject )
                            {
                              UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0LL);
                              gameObject = (UnityEngine_Component_o *)this->fields.expBar;
                              if ( gameObject )
                              {
                                UIProgressBar__set_value((UIProgressBar_o *)gameObject, progVal, 0LL);
                                gameObject = (UnityEngine_Component_o *)this->fields.miniIconComponent;
                                if ( gameObject )
                                {
                                  MissionGiftMiniIconComponent__SetMiniIcon(
                                    (MissionGiftMiniIconComponent_o *)gameObject,
                                    missionListViewItem->fields.subGiftEntity,
                                    v31);
                                  ((void (__fastcall *)(MissionListViewItemDraw_o *, MissionListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_InitDispResTime.method)(
                                    this,
                                    missionListViewItem,
                                    this->klass->vtable._6_SetLockMissionBoard.methodPtr);
                                  MissionListViewItemDraw__CheckLockMissionBoard(this, missionListViewItem, v32);
                                  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  }
                                  if ( !UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
                                    goto LABEL_44;
                                  gameObject = (UnityEngine_Component_o *)this->fields.baseButton;
                                  if ( gameObject )
                                  {
                                    UICommonButton__SetColliderEnable(
                                      (UICommonButton_o *)gameObject,
                                      missionListViewItem->fields.isColliderEnable,
                                      1,
                                      0LL);
                                    gameObject = (UnityEngine_Component_o *)this->fields.baseButton;
                                    if ( gameObject )
                                    {
                                      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
                                        gameObject,
                                        0LL,
                                        1LL,
                                        gameObject->klass[1]._1.interfaceOffsets);
LABEL_44:
                                      baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
                                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                      }
                                      if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
                                        MissionListViewItemDraw__SetBoardImage(this, missionListViewItem, v35);
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
    sub_B2C434(gameObject, v10);
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.rangeSprite;
    if ( !gameObject )
      goto LABEL_65;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_65;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v37 = (UnityEngine_Object_o *)this->fields.addRangeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v37, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.addRangeSprite;
    if ( !gameObject )
      goto LABEL_65;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_65;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
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
  const MethodInfo *v8; // x2
  UnityEngine_Object_o *Child; // x20
  UIWidget_o *missionCondLb; // x21
  UIWidget_o *v11; // x19

  if ( (byte_4187310 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, missionListViewItem);
    sub_B2C35C(&MissionListViewItemDraw_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4187310 = 1;
  }
  lockImgInfo = this->fields.lockImgInfo;
  if ( !lockImgInfo )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(lockImgInfo, 1, 0LL);
  lockImgInfo = (UnityEngine_GameObject_o *)this->fields.miniIconComponent;
  if ( !lockImgInfo )
    goto LABEL_24;
  lockImgInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lockImgInfo, 0LL);
  if ( !lockImgInfo )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(lockImgInfo, 0, 0LL);
  if ( !missionListViewItem )
    goto LABEL_24;
  lockImgInfo = (UnityEngine_GameObject_o *)this->fields.closedMessageLabel;
  if ( !lockImgInfo )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)lockImgInfo, missionListViewItem->fields.closedMessage, 0LL);
  if ( MissionListViewItem__HasMissionConditionFlag(missionListViewItem, 64, v8) )
  {
    lockImgInfo = this->fields.lockImgInfo;
    if ( !lockImgInfo )
      goto LABEL_24;
    lockImgInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(lockImgInfo, 0LL);
    if ( !lockImgInfo )
      goto LABEL_24;
    Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)lockImgInfo, 0, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    lockImgInfo = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Child, 0LL, 0LL);
    if ( ((unsigned __int8)lockImgInfo & 1) != 0 )
    {
      if ( Child )
      {
        missionCondLb = (UIWidget_o *)this->fields.missionCondLb;
        lockImgInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    (UnityEngine_Component_o *)Child,
                                                    (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( lockImgInfo )
        {
          if ( missionCondLb )
          {
            UIWidget__set_depth(missionCondLb, LODWORD(lockImgInfo[7].klass) + 10, 0LL);
            v11 = (UIWidget_o *)this->fields.missionCondLb;
            lockImgInfo = (UnityEngine_GameObject_o *)MissionListViewItemDraw_TypeInfo;
            if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
              lockImgInfo = (UnityEngine_GameObject_o *)MissionListViewItemDraw_TypeInfo;
            }
            if ( v11 )
            {
              UIWidget__set_color(
                v11,
                *(UnityEngine_Color_o *)(*(_QWORD *)&lockImgInfo[7].fields.m_CachedPtr + 8LL),
                0LL);
              return;
            }
          }
        }
      }
LABEL_24:
      sub_B2C434(lockImgInfo, missionListViewItem);
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
      sub_B2C434(0LL, method);
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
      goto LABEL_11;
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
LABEL_11:
      UnityEngine_GameObject__SetActive(rewardImg, 1, 0LL);
      rewardImg = this->fields.lockImgInfo;
      if ( !rewardImg )
LABEL_32:
        sub_B2C434(rewardImg, *(_QWORD *)&status);
LABEL_26:
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
      goto LABEL_26;
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
            goto LABEL_26;
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

  v5 = this;
  if ( (byte_4187313 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, missionListViewItem);
    sub_B2C35C(&MissionListViewItemDraw_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_13404/*"TIME_REST_QUEST"*/, v7);
    this = (MissionListViewItemDraw_o *)sub_B2C35C(&StringLiteral_13392/*"TIME_REST_ACHIVE"*/, v8);
    byte_4187313 = 1;
  }
  if ( !missionListViewItem )
    goto LABEL_23;
  progStatus = missionListViewItem->fields.progStatus;
  if ( progStatus == 4 )
    return;
  eventMissionEnt = missionListViewItem->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    goto LABEL_23;
  resTimeLb = v5->fields.resTimeLb;
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
    v15 = &StringLiteral_13392/*"TIME_REST_ACHIVE"*/;
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
    v15 = &StringLiteral_13404/*"TIME_REST_QUEST"*/;
  }
  this = (MissionListViewItemDraw_o *)MissionListViewItemDraw__GetTimeText((System_String_o *)*v15, RestTime, v13);
  if ( !resTimeLb )
LABEL_23:
    sub_B2C434(this, missionListViewItem);
  UILabel__set_text(resTimeLb, (System_String_o *)this, 0LL);
}