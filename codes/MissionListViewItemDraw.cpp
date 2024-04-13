void __fastcall MissionListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  float v4; // s4
  float v5; // s5
  float v6; // s6
  float v7; // s7
  MissionListViewItemDraw_c *v8; // x8
  struct UnityEngine_Color_o v9; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E8762 & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewItemDraw_TypeInfo, v1, v2, v3);
    byte_42E8762 = 1;
  }
  v10.fields.a = 1.0;
  MissionListViewItemDraw_TypeInfo->static_fields->TIME_UPDATE_ITVL_SEC = 1;
  MissionListViewItemDraw_TypeInfo->static_fields->DEFAULT_FONT_SIZE = 15;
  v10.fields.r = 0.43922;
  v9 = (struct UnityEngine_Color_o)0LL;
  v10.fields.g = 0.43922;
  v10.fields.b = 0.43922;
  UnityEngine_Color___ctor(v10, v4, v5, v6, v7, (const MethodInfo *)&v9);
  v8 = MissionListViewItemDraw_TypeInfo;
  MissionListViewItemDraw_TypeInfo->static_fields->MISSION_COND_LB_LOCK_COLOR = v9;
  v8->static_fields->MISSION_COND_LB_DEPTH_INIT = 6;
}


void __fastcall MissionListViewItemDraw___ctor(MissionListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MissionListViewItemDraw__Awake(MissionListViewItemDraw_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UISprite_o *v14; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UISprite_o *v22; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_42E8759 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8759 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( v6 )
  {
    v14 = this->fields.baseSprite;
    if ( !v14
      || (mAtlas = v14->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.baseAtlas,
            (System_Int32_array **)mAtlas,
            v8,
            v9,
            v10,
            v11,
            v12,
            v13),
          (v22 = this->fields.baseSprite) == 0LL) )
    {
      sub_B5D69C(v6, v7);
    }
    mSpriteName = v22->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionListViewItemDraw__CheckLockMissionBoard(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UIWidget_o *missionCondLb; // x21
  MissionListViewItemDraw_c *v7; // x0
  UIWidget_o *v8; // x21
  int v9; // s0

  if ( (byte_42E875B & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewItemDraw_TypeInfo, (_DWORD)missionListViewItem, (_DWORD)method, v3);
    byte_42E875B = 1;
  }
  missionCondLb = (UIWidget_o *)this->fields.missionCondLb;
  v7 = MissionListViewItemDraw_TypeInfo;
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
        v8 = (UIWidget_o *)this->fields.missionCondLb,
        *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL),
        !v8)
    || (UIWidget__set_color(v8, *(UnityEngine_Color_o *)&v9, 0LL), !missionListViewItem) )
  {
    sub_B5D69C(v7, missionListViewItem);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_o *v9; // x0

  if ( (byte_42E875F & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)timrStr, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v6, v7, v8);
    byte_42E875F = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get(key, 0LL);
  return System_String__Concat_44580072(v9, (System_String_o *)StringLiteral_81/*" "*/, timrStr, 0LL);
}


void __fastcall MissionListViewItemDraw__InitDispResTime(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MissionListViewItem_o *v4; // x20
  MissionListViewItemDraw_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct EventMissionEntity_o *eventMissionEnt; // x8
  MissionListViewItemDraw_o *v13; // x21
  _BOOL4 v14; // w8
  char v15; // w23
  bool v16; // w22
  NotEndEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = missionListviewItem;
  v5 = this;
  if ( (byte_42E875C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_NotEndEventMissionFixMaster___,
      (_DWORD)missionListviewItem,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    this = (MissionListViewItemDraw_o *)sub_B5D5C4(
                                          &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                          v9,
                                          v10,
                                          v11);
    byte_42E875C = 1;
  }
  entity = 0LL;
  if ( !v4 )
    goto LABEL_28;
  if ( v4->fields.progStatus != 4 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (MissionListViewItemDraw_o *)NetworkManager__getTime(0LL);
    eventMissionEnt = v4->fields.eventMissionEnt;
    if ( eventMissionEnt )
    {
      v13 = this;
      if ( (__int64)this >= eventMissionEnt->fields.startedAt )
      {
        v14 = (__int64)this < eventMissionEnt->fields.endedAt;
        if ( !v5 )
          goto LABEL_28;
      }
      else
      {
        v14 = 0;
        if ( !v5 )
          goto LABEL_28;
      }
      v5->fields.isDispTime = v14;
      if ( v14 || v4->fields.progStatus == 3 )
      {
        v15 = 0;
        v5->fields.oldTime = 0LL;
      }
      else
      {
        v15 = 1;
        v4->fields.isNowMission = 1;
      }
      this = (MissionListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (MissionListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NotEndEventMissionFixMaster___);
        if ( this )
        {
          v16 = NotEndEventMissionFixMaster__TryGetEntity(
                  (NotEndEventMissionFixMaster_o *)this,
                  &entity,
                  v4->fields.currentEventId,
                  v4->fields.currentMissionId,
                  0LL);
          ((void (__fastcall *)(MissionListViewItemDraw_o *, MissionListViewItem_o *, MissionListViewItemDraw_o *, Il2CppMethodPointer))v5->klass->vtable._9_UpdateDispResTime.method)(
            v5,
            v4,
            v13,
            v5->klass->vtable._10_SetInput.methodPtr);
          this = (MissionListViewItemDraw_o *)v5->fields.timeOverInfo;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v15 & !v16, 0LL);
            this = (MissionListViewItemDraw_o *)v5->fields.resTimeLb;
            if ( this )
            {
              this = (MissionListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
              if ( v5->fields.isDispTime )
              {
                missionListviewItem = (MissionListViewItem_o *)(&dword_0 + 1);
                if ( this )
                  goto LABEL_26;
              }
              else
              {
                missionListviewItem = (MissionListViewItem_o *)(v4->fields.progStatus == 3);
                if ( this )
                  goto LABEL_26;
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_B5D69C(this, missionListviewItem);
  }
  this = (MissionListViewItemDraw_o *)v5->fields.timeOverInfo;
  v5->fields.isDispTime = 0;
  if ( !this )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (MissionListViewItemDraw_o *)v5->fields.resTimeLb;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *baseSprite; // x21
  _BOOL8 v13; // x0
  __int64 v14; // x1
  int32_t bannerGroupId; // w21
  UISprite_o *v16; // x22
  System_String_o *baseSpriteName; // x19
  UIAtlas_o *baseAtlas; // x20

  if ( (byte_42E875E & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)missionListviewItem, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_4644/*"DEFAULT_LOCK_BOARD_GROUP_ID"*/, v9, v10, v11);
    byte_42E875E = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( !v13 )
  {
    if ( !missionListviewItem )
      sub_B5D69C(v13, v14);
    bannerGroupId = missionListviewItem->fields.bannerGroupId;
    if ( (((__int64 (__fastcall *)(MissionListViewItemDraw_o *, Il2CppMethodPointer))this->klass->vtable._7_IsUseDefaultLockBoard.method)(
            this,
            this->klass->vtable._8_SetRewardStatusImg.methodPtr) & 1) != 0
      && missionListviewItem->fields.progStatus <= 1u )
    {
      bannerGroupId = ConstantMaster__getValue((System_String_o *)StringLiteral_4644/*"DEFAULT_LOCK_BOARD_GROUP_ID"*/, 0LL);
    }
    v16 = this->fields.baseSprite;
    baseAtlas = this->fields.baseAtlas;
    baseSpriteName = this->fields.baseSpriteName;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetMissionBoardSprite(v16, baseAtlas, baseSpriteName, bannerGroupId, 0LL);
  }
}


void __fastcall MissionListViewItemDraw__SetInput(
        MissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *baseButton; // x21
  __int64 v10; // x1
  UICommonButton_o *miniIconComponent; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  UILabel_o *missionCondLb; // x21
  System_String_o *condMsg; // x22
  MissionListViewItemDraw_c *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  float progVal; // s8
  UnityEngine_Object_o *rangeSprite; // x20
  UnityEngine_Object_o *addRangeSprite; // x20
  System_String_o *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8761 & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewItemDraw_TypeInfo, (_DWORD)missionListViewItem, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E8761 = 1;
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
              v12);
            MissionListViewItemDraw__CheckLockMissionBoard(this, missionListViewItem, v13);
            missionCondLb = this->fields.missionCondLb;
            condMsg = missionListViewItem->fields.condMsg;
            v16 = MissionListViewItemDraw_TypeInfo;
            if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
              v16 = MissionListViewItemDraw_TypeInfo;
            }
            WrapControlText__textAdjust(missionCondLb, condMsg, v16->static_fields->DEFAULT_FONT_SIZE, 0, 0, 0LL);
            value = missionListViewItem->fields.progTxt;
            sub_B5D560(
              (BattleServantConfConponent_o *)&value,
              (System_Int32_array **)value,
              v17,
              v18,
              v19,
              v20,
              v21,
              v22);
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
      sub_B5D69C(miniIconComponent, v10);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *rangeSprite; // x22
  __int64 v12; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *addRangeSprite; // x22
  struct GiftEntity_array *giftEnts; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct GiftEntity_array *giftEntityList; // x8
  UILabel_o *missionCondLb; // x21
  System_String_o *condMsg; // x22
  MissionListViewItemDraw_c *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  float progVal; // s8
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2
  UnityEngine_Object_o *baseButton; // x21
  UnityEngine_Object_o *baseSprite; // x21
  const MethodInfo *v37; // x2
  UnityEngine_Object_o *v39; // x20
  System_String_o *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E875A & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewItemDraw_TypeInfo, (_DWORD)missionListViewItem, mode, listViewManager);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E875A = 1;
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
                        sub_B5D560(
                          (BattleServantConfConponent_o *)&this->fields.giftEntityList,
                          (System_Int32_array **)giftEnts,
                          v16,
                          v17,
                          v18,
                          v19,
                          v20,
                          v21);
                        giftEntityList = this->fields.giftEntityList;
                        if ( giftEntityList )
                        {
                          this->fields.isMultipleReward = (signed int)giftEntityList->max_length > 1;
                          missionCondLb = this->fields.missionCondLb;
                          condMsg = missionListViewItem->fields.condMsg;
                          v25 = MissionListViewItemDraw_TypeInfo;
                          if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
                            v25 = MissionListViewItemDraw_TypeInfo;
                          }
                          WrapControlText__textAdjust(
                            missionCondLb,
                            condMsg,
                            v25->static_fields->DEFAULT_FONT_SIZE,
                            0,
                            0,
                            0LL);
                          ((void (__fastcall *)(MissionListViewItemDraw_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_SetRewardStatusImg.method)(
                            this,
                            (unsigned int)missionListViewItem->fields.progStatus,
                            this->klass->vtable._9_UpdateDispResTime.methodPtr);
                          value = missionListViewItem->fields.progTxt;
                          sub_B5D560(
                            (BattleServantConfConponent_o *)&value,
                            (System_Int32_array **)value,
                            v26,
                            v27,
                            v28,
                            v29,
                            v30,
                            v31);
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
                                    v33);
                                  ((void (__fastcall *)(MissionListViewItemDraw_o *, MissionListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_InitDispResTime.method)(
                                    this,
                                    missionListViewItem,
                                    this->klass->vtable._6_SetLockMissionBoard.methodPtr);
                                  MissionListViewItemDraw__CheckLockMissionBoard(this, missionListViewItem, v34);
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
                                        MissionListViewItemDraw__SetBoardImage(this, missionListViewItem, v37);
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
    sub_B5D69C(gameObject, v12);
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
  v39 = (UnityEngine_Object_o *)this->fields.addRangeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *lockImgInfo; // x0
  const MethodInfo *v13; // x2
  UnityEngine_Object_o *Child; // x20
  UIWidget_o *missionCondLb; // x21
  UIWidget_o *v16; // x19

  if ( (byte_42E875D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, (_DWORD)missionListViewItem, (_DWORD)method, v3);
    sub_B5D5C4(&MissionListViewItemDraw_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E875D = 1;
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
  if ( MissionListViewItem__HasMissionConditionFlag(missionListViewItem, 64, v13) )
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
                                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( lockImgInfo )
        {
          if ( missionCondLb )
          {
            UIWidget__set_depth(missionCondLb, LODWORD(lockImgInfo[7].klass) + 10, 0LL);
            v16 = (UIWidget_o *)this->fields.missionCondLb;
            lockImgInfo = (UnityEngine_GameObject_o *)MissionListViewItemDraw_TypeInfo;
            if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
              lockImgInfo = (UnityEngine_GameObject_o *)MissionListViewItemDraw_TypeInfo;
            }
            if ( v16 )
            {
              UIWidget__set_color(
                v16,
                *(UnityEngine_Color_o *)(*(_QWORD *)&lockImgInfo[7].fields.m_CachedPtr + 8LL),
                0LL);
              return;
            }
          }
        }
      }
LABEL_24:
      sub_B5D69C(lockImgInfo, missionListViewItem);
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
      sub_B5D69C(0LL, method);
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
        sub_B5D69C(rewardImg, *(_QWORD *)&status);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t progStatus; // w9
  struct EventMissionEntity_o *eventMissionEnt; // x8
  UILabel_o *resTimeLb; // x19
  int64_t closedAt; // x20
  const MethodInfo *v19; // x2
  System_String_o *RestTime; // x20
  __int64 *v21; // x8
  int64_t endedAt; // x20

  v5 = this;
  if ( (byte_42E8760 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)missionListViewItem, nowTime, method);
    sub_B5D5C4(&MissionListViewItemDraw_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_13560/*"TIME_REST_QUEST"*/, v9, v10, v11);
    this = (MissionListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_13548/*"TIME_REST_ACHIVE"*/, v12, v13, v14);
    byte_42E8760 = 1;
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
    v21 = &StringLiteral_13548/*"TIME_REST_ACHIVE"*/;
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
    v21 = &StringLiteral_13560/*"TIME_REST_QUEST"*/;
  }
  this = (MissionListViewItemDraw_o *)MissionListViewItemDraw__GetTimeText((System_String_o *)*v21, RestTime, v19);
  if ( !resTimeLb )
LABEL_23:
    sub_B5D69C(this, missionListViewItem);
  UILabel__set_text(resTimeLb, (System_String_o *)this, 0LL);
}