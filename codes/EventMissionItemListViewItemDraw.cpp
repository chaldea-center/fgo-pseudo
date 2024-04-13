void __fastcall EventMissionItemListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9026 & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionItemListViewItemDraw_TypeInfo, v1, v2, v3);
    byte_42E9026 = 1;
  }
  EventMissionItemListViewItemDraw_TypeInfo->static_fields->TIME_UPDATE_ITVL_SEC = 60;
}


void __fastcall EventMissionItemListViewItemDraw___ctor(
        EventMissionItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9025 & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewItemDraw_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9025 = 1;
  }
  if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  }
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0LL);
}


void __fastcall EventMissionItemListViewItemDraw__Awake(
        EventMissionItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *stampSprite; // x20
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
  UnityEngine_Object_o *boardMaskSprite; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UISprite_o *v31; // x8
  struct UIAtlas_o *v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UISprite_o *v39; // x8
  struct System_String_o *v40; // x1

  if ( (byte_42E901A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E901A = 1;
  }
  MissionListViewItemDraw__Awake((MissionListViewItemDraw_o *)this, 0LL);
  stampSprite = (UnityEngine_Object_o *)this->fields.stampSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(stampSprite, 0LL, 0LL);
  if ( v6 )
  {
    v14 = this->fields.stampSprite;
    if ( !v14 )
      goto LABEL_18;
    mAtlas = v14->fields.mAtlas;
    this->fields.baseStampSpriteAtlas = mAtlas;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.baseStampSpriteAtlas,
      (System_Int32_array **)mAtlas,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v22 = this->fields.stampSprite;
    if ( !v22 )
      goto LABEL_18;
    mSpriteName = v22->fields.mSpriteName;
    this->fields.baseStampSpriteName = mSpriteName;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.baseStampSpriteName,
      (System_Int32_array **)mSpriteName,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  boardMaskSprite = (UnityEngine_Object_o *)this->fields.boardMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(boardMaskSprite, 0LL, 0LL);
  if ( v6 )
  {
    v31 = this->fields.boardMaskSprite;
    if ( v31 )
    {
      v32 = v31->fields.mAtlas;
      this->fields.baseBoardMaskSpriteAtlas = v32;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.baseBoardMaskSpriteAtlas,
        (System_Int32_array **)v32,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      v39 = this->fields.boardMaskSprite;
      if ( v39 )
      {
        v40 = v39->fields.mSpriteName;
        this->fields.baseBoardMaskSpriteName = v40;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.baseBoardMaskSpriteName,
          (System_Int32_array **)v40,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        return;
      }
    }
LABEL_18:
    sub_B5D69C(v6, v7);
  }
}


void __fastcall EventMissionItemListViewItemDraw__ChangeNextRewardIcon(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x20
  EventMissionItemListViewItemDraw_o *v4; // x19
  GiftEntity_o *v5; // x9
  int num; // w8
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x0

  if ( !this->fields.isMultipleReward )
    return;
  giftEntityList = this->fields.giftEntityList;
  v4 = this;
  if ( !giftEntityList || !manager )
    goto LABEL_18;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                 (MissionListViewManager_o *)manager,
                                                 giftEntityList->max_length,
                                                 0LL);
  if ( (unsigned int)this >= giftEntityList->max_length )
  {
    v9 = sub_B5D6C8(this);
    sub_B5D668(v9, 0LL);
  }
  v5 = giftEntityList->m_Items[(int)this];
  if ( !v5 )
    goto LABEL_18;
  manager = (EventMissionItemListViewManager_o *)(unsigned int)v5->fields.prioredIconId;
  this = (EventMissionItemListViewItemDraw_o *)v4->fields.itemIcon;
  num = v5->fields.num;
  if ( (int)manager >= 1 )
  {
    if ( this )
    {
      if ( num <= 1 )
        v7 = -1;
      else
        v7 = v5->fields.num;
      ItemIconComponent__SetItemImage_28499576((ItemIconComponent_o *)this, (int32_t)manager, v7, 0LL);
      return;
    }
LABEL_18:
    sub_B5D69C(this, manager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v8 = -1;
  else
    v8 = v5->fields.num;
  ItemIconComponent__SetGiftDesignSize((ItemIconComponent_o *)this, v5->fields.type, v5->fields.objectId, v8, 0LL);
}


System_String_o *__fastcall EventMissionItemListViewItemDraw__GetAchiveTimeText(
        int64_t closeTime,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *v11; // x20
  System_String_o *RestTime; // x2

  if ( (byte_42E9020 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_13548/*"TIME_REST_ACHIVE"*/, v8, v9, v10);
    byte_42E9020 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_13548/*"TIME_REST_ACHIVE"*/, 0LL);
  RestTime = LocalizationManager__GetRestTime(closeTime, 0LL);
  return System_String__Concat_44580072(v11, (System_String_o *)StringLiteral_81/*" "*/, RestTime, 0LL);
}


System_String_o *__fastcall EventMissionItemListViewItemDraw__GetRestTimeText(
        int64_t endTime,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *v8; // x20
  System_String_o *RestTime; // x1

  if ( (byte_42E901F & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_13560/*"TIME_REST_QUEST"*/, v5, v6, v7);
    byte_42E901F = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_13560/*"TIME_REST_QUEST"*/, 0LL);
  RestTime = LocalizationManager__GetRestTime(endTime, 0LL);
  return System_String__Concat_44577788(v8, RestTime, 0LL);
}


void __fastcall EventMissionItemListViewItemDraw__InitDispResTime(
        EventMissionItemListViewItemDraw_o *this,
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int64_t Time; // x0
  MethodInfo *AchiveTimeText; // x1
  int64_t v17; // x21
  bool *p_isDispTime; // x22
  int64_t v19; // x8
  int64_t v20; // x21
  System_String_o *RestTimeText; // x0
  int64_t v22; // x21
  int32_t *p_progStatus; // x21
  int v24; // w8
  int64_t v25; // x20
  UILabel_o *timeOverLb; // x20

  if ( (byte_42E901C & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionItemListViewItemDraw_TypeInfo, (_DWORD)missionListviewItem, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_8844/*"MISSION_PERIOD_END"*/, v12, v13, v14);
    byte_42E901C = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  this->fields.isAchiveTime = 0;
  if ( !missionListviewItem )
    goto LABEL_49;
  v17 = Time;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !Time )
    goto LABEL_49;
  if ( v17 >= *(_QWORD *)(Time + 56) )
  {
    Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
    if ( !Time )
      goto LABEL_49;
    v19 = *(_QWORD *)(Time + 64);
    this->fields.isDispTime = v17 < v19;
    p_isDispTime = &this->fields.isDispTime;
    if ( v17 < v19 )
    {
      Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
      if ( !Time )
        goto LABEL_49;
      v20 = *(_QWORD *)(Time + 64);
      if ( (BYTE3(EventMissionItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
      }
      RestTimeText = EventMissionItemListViewItemDraw__GetRestTimeText(v20, AchiveTimeText);
      if ( missionListviewItem->fields.progStatus == 3 )
      {
        Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
        if ( !Time )
          goto LABEL_49;
        v22 = *(_QWORD *)(Time + 72);
        if ( (BYTE3(EventMissionItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
        }
        AchiveTimeText = (MethodInfo *)EventMissionItemListViewItemDraw__GetAchiveTimeText(v22, AchiveTimeText);
        this->fields.isAchiveTime = 1;
      }
      else
      {
        AchiveTimeText = (MethodInfo *)RestTimeText;
      }
      Time = (int64_t)this->fields.resTimeLb;
      if ( !Time )
LABEL_49:
        sub_B5D69C(Time, AchiveTimeText);
      p_progStatus = &missionListviewItem->fields.progStatus;
      goto LABEL_33;
    }
  }
  else
  {
    this->fields.isDispTime = 0;
    p_isDispTime = &this->fields.isDispTime;
  }
  p_progStatus = &missionListviewItem->fields.progStatus;
  v24 = 1;
  if ( (unsigned int)(missionListviewItem->fields.progStatus - 3) >= 2 )
  {
    missionListviewItem->fields.isNowMission = 1;
    goto LABEL_34;
  }
  this->fields.isAchiveTime = 1;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !Time )
    goto LABEL_49;
  v25 = *(_QWORD *)(Time + 72);
  if ( (BYTE3(EventMissionItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
  }
  Time = (int64_t)EventMissionItemListViewItemDraw__GetAchiveTimeText(v25, AchiveTimeText);
  if ( !this->fields.resTimeLb )
    goto LABEL_49;
  AchiveTimeText = (MethodInfo *)Time;
  Time = (int64_t)this->fields.resTimeLb;
LABEL_33:
  UILabel__set_text((UILabel_o *)Time, (System_String_o *)AchiveTimeText, 0LL);
  v24 = 0;
  this->fields.oldTime = 0LL;
LABEL_34:
  if ( *p_progStatus == 4 )
  {
    this->fields.isDispTime = 0;
    this->fields.isAchiveTime = 0;
  }
  Time = (int64_t)this->fields.timeOverInfo;
  if ( !Time )
    goto LABEL_49;
  if ( v24 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
    timeOverLb = this->fields.timeOverLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8844/*"MISSION_PERIOD_END"*/, 0LL);
    if ( !timeOverLb )
      goto LABEL_49;
    UILabel__set_text(timeOverLb, (System_String_o *)Time, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  }
  Time = (int64_t)this->fields.resTimeLb;
  if ( !Time )
    goto LABEL_49;
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
  if ( !*p_isDispTime )
  {
    AchiveTimeText = (MethodInfo *)this->fields.isAchiveTime;
    if ( Time )
      goto LABEL_47;
    goto LABEL_49;
  }
  AchiveTimeText = (MethodInfo *)(&dword_0 + 1);
  if ( !Time )
    goto LABEL_49;
LABEL_47:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, (bool)AchiveTimeText, 0LL);
}


bool __fastcall EventMissionItemListViewItemDraw__IsUseDefaultLockBoard(
        EventMissionItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall EventMissionItemListViewItemDraw__ModifyBoardImage(
        EventMissionItemListViewItemDraw_o *this,
        int32_t bannerGroupId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *baseSprite; // x21
  UnityEngine_Object_o *stampSprite; // x21
  UnityEngine_Object_o *boardMaskSprite; // x21
  UISprite_o *v12; // x23
  System_String_o *baseSpriteName; // x21
  UIAtlas_o *baseAtlas; // x22

  if ( (byte_42E9024 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, bannerGroupId, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E9024 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL) )
  {
    stampSprite = (UnityEngine_Object_o *)this->fields.stampSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(stampSprite, 0LL, 0LL) )
    {
      boardMaskSprite = (UnityEngine_Object_o *)this->fields.boardMaskSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(boardMaskSprite, 0LL, 0LL) )
      {
        v12 = this->fields.baseSprite;
        baseAtlas = this->fields.baseAtlas;
        baseSpriteName = this->fields.baseSpriteName;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetMissionBoardSprite(v12, baseAtlas, baseSpriteName, bannerGroupId, 0LL);
        AtlasManager__SetMissionBoardStampSprite(
          this->fields.stampSprite,
          this->fields.baseStampSpriteAtlas,
          this->fields.baseStampSpriteName,
          bannerGroupId,
          0LL);
        AtlasManager__SetMissionBoardMaskSprite(
          this->fields.boardMaskSprite,
          this->fields.baseBoardMaskSpriteAtlas,
          this->fields.baseBoardMaskSpriteName,
          bannerGroupId,
          0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewItemDraw__OnChangeAlphaAnim(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewItem_o *item,
        int32_t mode,
        EventMissionItemListViewManager_o *manager,
        const MethodInfo *method)
{
  EventMissionItemListViewItemDraw__ChangeNextRewardIcon(this, manager, *(const MethodInfo **)&mode);
}


void __fastcall EventMissionItemListViewItemDraw__SetInput(
        EventMissionItemListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x10
  UnityEngine_Object_o *baseButton; // x21
  const MethodInfo *v11; // x2

  if ( (byte_42E9022 & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionItemListViewItem_TypeInfo, (_DWORD)missionListViewItem, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E9022 = 1;
  }
  if ( missionListViewItem
    && (v9 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&missionListViewItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9)
    && (EventMissionItemListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[v9 - 1] == EventMissionItemListViewItem_TypeInfo )
  {
    MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, missionListViewItem, 0LL);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
      EventMissionItemListViewItemDraw__UpdateNewIcon(this, (EventMissionItemListViewItem_o *)missionListViewItem, v11);
  }
  else
  {
    MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, 0LL, 0LL);
  }
}


bool __fastcall EventMissionItemListViewItemDraw__SetItem(
        EventMissionItemListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int32_t mode,
        ListViewManager_o *listViewManager,
        const MethodInfo *method)
{
  ListViewManager_o *v5; // x22
  MissionListViewItem_o *v7; // x20
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x10
  __int64 v22; // x10
  __int64 v23; // x1
  UnityEngine_Component_o *iconLabel; // x0
  int v26; // w21
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  UISprite_o *rewardBackSprite; // x21
  int32_t Type; // w0
  int32_t rewardObjectId; // w23
  int32_t klass; // w22
  int32_t v33; // w24
  UnityEngine_Object_o *stampSprite; // x21
  UISprite_o *v35; // x24
  System_String_o *baseStampSpriteName; // x21
  UIAtlas_o *baseStampSpriteAtlas; // x23
  int32_t bannerGroupId; // w22
  UnityEngine_Object_o *boardMaskSprite; // x21
  UISprite_o *v40; // x22
  System_String_o *baseBoardMaskSpriteName; // x19
  UIAtlas_o *baseBoardMaskSpriteAtlas; // x21
  int32_t v43; // w20

  v5 = listViewManager;
  v7 = missionListViewItem;
  if ( (byte_42E901B & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)missionListViewItem, mode, listViewManager);
    sub_B5D5C4(&EventMissionItemListViewItem_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&EventMissionItemListViewManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&EventRewardRootComponent_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    byte_42E901B = 1;
  }
  if ( !MissionListViewItemDraw__SetItem((MissionListViewItemDraw_o *)this, v7, mode, v5, 0LL) )
    return 0;
  if ( !v7 )
  {
LABEL_7:
    if ( !v5 )
      goto LABEL_8;
LABEL_13:
    v22 = *(&EventMissionItemListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v5->klass->_2.bitflags2 + 1) >= (unsigned int)v22 )
    {
      if ( (EventMissionItemListViewManager_c *)v5->klass->_2.typeHierarchy[v22 - 1] != EventMissionItemListViewManager_TypeInfo )
        v5 = 0LL;
      if ( !v7 )
        return 0;
    }
    else
    {
      v5 = 0LL;
      if ( !v7 )
        return 0;
    }
    goto LABEL_19;
  }
  v21 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v21 )
  {
    v7 = 0LL;
    goto LABEL_7;
  }
  if ( (EventMissionItemListViewItem_c *)v7->klass->_2.typeHierarchy[v21 - 1] != EventMissionItemListViewItem_TypeInfo )
    v7 = 0LL;
  if ( v5 )
    goto LABEL_13;
LABEL_8:
  if ( !v7 )
    return 0;
LABEL_19:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v5, 0LL, 0LL) )
    return 0;
  if ( mode )
  {
    iconLabel = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( iconLabel )
    {
      v26 = BYTE1(v7[1].monitor);
      iconLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(iconLabel, 0LL);
      if ( iconLabel )
      {
        if ( v26 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLabel, 0, 0LL);
          goto LABEL_31;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLabel, 1, 0LL);
        iconLabel = (UnityEngine_Component_o *)this->fields.iconLabel;
        if ( iconLabel )
        {
          UIIconLabel__Set_41886452((UIIconLabel_o *)iconLabel, 57, v7->fields.dispNo, 0, 0, 0LL, 0, 0, 0, 0LL);
LABEL_31:
          EventMissionItemListViewItemDraw__SetRewardItemIcon(
            this,
            (EventMissionItemListViewItem_o *)v7,
            (EventMissionItemListViewManager_o *)v5,
            v27);
          EventMissionItemListViewItemDraw__UpdateNewIcon(this, (EventMissionItemListViewItem_o *)v7, v28);
          rewardBackSprite = this->fields.rewardBackSprite;
          Type = MissionListViewItem__get_Type(v7, 0LL);
          rewardObjectId = v7->fields.rewardObjectId;
          klass = (int32_t)v7[1].klass;
          v33 = Type;
          if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          }
          EventRewardRootComponent__SetRewardRaritySprite(rewardBackSprite, v33, rewardObjectId, klass, 0LL);
          goto LABEL_35;
        }
      }
    }
    sub_B5D69C(iconLabel, v23);
  }
LABEL_35:
  stampSprite = (UnityEngine_Object_o *)this->fields.stampSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(stampSprite, 0LL, 0LL) )
  {
    v35 = this->fields.stampSprite;
    baseStampSpriteAtlas = this->fields.baseStampSpriteAtlas;
    baseStampSpriteName = this->fields.baseStampSpriteName;
    bannerGroupId = v7->fields.bannerGroupId;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetMissionBoardStampSprite(v35, baseStampSpriteAtlas, baseStampSpriteName, bannerGroupId, 0LL);
  }
  boardMaskSprite = (UnityEngine_Object_o *)this->fields.boardMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(boardMaskSprite, 0LL, 0LL) )
  {
    v40 = this->fields.boardMaskSprite;
    baseBoardMaskSpriteAtlas = this->fields.baseBoardMaskSpriteAtlas;
    baseBoardMaskSpriteName = this->fields.baseBoardMaskSpriteName;
    v43 = v7->fields.bannerGroupId;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetMissionBoardMaskSprite(v40, baseBoardMaskSpriteAtlas, baseBoardMaskSpriteName, v43, 0LL);
  }
  return 1;
}


void __fastcall EventMissionItemListViewItemDraw__SetLockMissionBoard(
        EventMissionItemListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *lockImgInfo; // x0

  lockImgInfo = this->fields.lockImgInfo;
  if ( !lockImgInfo )
    sub_B5D69C(0LL, missionListViewItem);
  UnityEngine_GameObject__SetActive(lockImgInfo, 1, 0LL);
}


void __fastcall EventMissionItemListViewItemDraw__SetRewardItemIcon(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewItem_o *item,
        EventMissionItemListViewManager_o *manager,
        const MethodInfo *method)
{
  EventMissionItemListViewItem_o *v5; // x19
  EventMissionItemListViewItemDraw_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct EventMissionEntity_o *eventMissionEnt; // x8
  struct EventMissionEntity_o *v17; // x8
  int32_t iconId; // w1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x22
  System_Int32_array **GiftListById; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x8
  EventMissionAddMaster_o *v29; // x23
  int32_t m_CachedPtr; // w24
  System_String_o *v31; // x23
  struct GiftEntity_array *v32; // x22
  GiftEntity_o *v33; // x9
  int num; // w8
  int32_t v35; // w2
  struct GiftEntity_array *v36; // x8
  GiftEntity_o *v37; // x8
  ItemIconComponent_o *itemIcon; // x21
  int v39; // w8
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v44; // w23
  __int64 v45; // x0

  v5 = item;
  v6 = this;
  if ( (byte_42E901D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMissionAddMaster___, (_DWORD)item, (_DWORD)manager, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_GiftMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    this = (EventMissionItemListViewItemDraw_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    byte_42E901D = 1;
  }
  if ( !v5 )
    goto LABEL_69;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventRewardType(
                                                 (MissionListViewItem_o *)v5,
                                                 0LL);
  if ( (_DWORD)this != 1 )
    goto LABEL_9;
  eventMissionEnt = v5->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    goto LABEL_69;
  if ( ((v5->fields.progStatus < 2u) & ((unsigned int)eventMissionEnt->fields.flag >> 1)) != 0 )
  {
    this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
    v6->fields.isMultipleReward = 0;
    if ( !this )
      goto LABEL_69;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0LL);
    goto LABEL_9;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftMaster___);
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)v5,
                                                 0LL);
  if ( !this )
    goto LABEL_69;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_69;
  GiftListById = (System_Int32_array **)GiftMaster__GetGiftListById(
                                          Master_WarQuestSelectionMaster,
                                          HIDWORD(this->fields.iconLabel),
                                          0LL);
  v6->fields.giftEntityList = (struct GiftEntity_array *)GiftListById;
  p_giftEntityList = &v6->fields.giftEntityList;
  sub_B5D560((BattleServantConfConponent_o *)&v6->fields.giftEntityList, GiftListById, v22, v23, v24, v25, v26, v27);
  if ( !v6->fields.giftEntityList )
    goto LABEL_69;
  v28 = *(_QWORD *)&v6->fields.giftEntityList->max_length;
  if ( !v28 )
    return;
  v6->fields.isMultipleReward = (int)v28 > 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v29 = (EventMissionAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMissionAddMaster___);
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)v5,
                                                 0LL);
  if ( !this )
    goto LABEL_69;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)v5,
                                                 0LL);
  if ( !this || !v29 )
    goto LABEL_69;
  v31 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          v29,
          m_CachedPtr,
          HIDWORD(this->fields.baseSprite),
          0,
          0LL);
  if ( !System_String__IsNullOrEmpty(v31, 0LL) )
  {
    v6->fields.isMultipleReward = 0;
    v5->fields.isHideRewardDetail = 1;
  }
  if ( v6->fields.isMultipleReward )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (EventMissionItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)manager,
                                                   0LL,
                                                   0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_9;
    v32 = *p_giftEntityList;
    if ( !v32 || !manager )
      goto LABEL_69;
    this = (EventMissionItemListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                   (MissionListViewManager_o *)manager,
                                                   v32->max_length,
                                                   0LL);
    if ( (unsigned int)this < v32->max_length )
    {
      v33 = v32->m_Items[(int)this];
      if ( !v33 )
        goto LABEL_69;
      item = (EventMissionItemListViewItem_o *)(unsigned int)v33->fields.prioredIconId;
      this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
      num = v33->fields.num;
      if ( (int)item < 1 )
      {
        if ( !this )
          goto LABEL_69;
        if ( num <= 1 )
          v41 = -1;
        else
          v41 = v33->fields.num;
        ItemIconComponent__SetGiftDesignSize(
          (ItemIconComponent_o *)this,
          v33->fields.type,
          v33->fields.objectId,
          v41,
          0LL);
      }
      else
      {
        if ( !this )
          goto LABEL_69;
        if ( num <= 1 )
          v35 = -1;
        else
          v35 = v33->fields.num;
        ItemIconComponent__SetItemImage_28499576((ItemIconComponent_o *)this, (int32_t)item, v35, 0LL);
      }
      goto LABEL_9;
    }
LABEL_70:
    v45 = sub_B5D6C8(this);
    sub_B5D668(v45, 0LL);
  }
  this = (EventMissionItemListViewItemDraw_o *)System_String__IsNullOrEmpty(v31, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v36 = *p_giftEntityList;
    if ( !*p_giftEntityList )
      goto LABEL_69;
    if ( !v36->max_length )
      goto LABEL_70;
    v37 = v36->m_Items[0];
    if ( !v37 )
      goto LABEL_69;
    item = (EventMissionItemListViewItem_o *)(unsigned int)v37->fields.prioredIconId;
    itemIcon = v6->fields.itemIcon;
    if ( (int)item < 1 )
    {
      Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v5, 0LL);
      rewardObjectId = v5->fields.rewardObjectId;
      v44 = Type;
      this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                     (MissionListViewItem_o *)v5,
                                                     0LL);
      if ( !itemIcon )
        goto LABEL_69;
      ItemIconComponent__SetGiftDesignSize(itemIcon, v44, rewardObjectId, (int32_t)this, 0LL);
    }
    else
    {
      if ( !itemIcon )
        goto LABEL_69;
      v39 = v37->fields.num;
      if ( v39 <= 1 )
        v40 = -1;
      else
        v40 = v39;
      ItemIconComponent__SetItemImage_28499576(v6->fields.itemIcon, (int32_t)item, v40, 0LL);
    }
  }
  else
  {
    this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
    if ( !this )
      goto LABEL_69;
    ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v31, 0LL);
  }
  this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
  if ( !this )
    goto LABEL_69;
  ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0LL);
LABEL_9:
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventRewardType(
                                                 (MissionListViewItem_o *)v5,
                                                 0LL);
  if ( (_DWORD)this == 3 )
  {
    v17 = v5->fields.eventMissionEnt;
    if ( v17 )
    {
      if ( ((v5->fields.progStatus < 2u) & ((unsigned int)v17->fields.flag >> 1)) != 0 )
      {
        this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
        v6->fields.isMultipleReward = 0;
        if ( this )
        {
          iconId = 99;
LABEL_47:
          ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, iconId, 0LL);
          return;
        }
      }
      else
      {
        this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
        if ( this )
        {
          iconId = v5->fields.iconId;
          goto LABEL_47;
        }
      }
    }
LABEL_69:
    sub_B5D69C(this, item);
  }
}


void __fastcall EventMissionItemListViewItemDraw__SetRewardStatusImg(
        EventMissionItemListViewItemDraw_o *this,
        int32_t status,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x1
  UnityEngine_GameObject_o *lockImgInfo; // x0
  UILabel_o *timeOverLb; // x19

  if ( (byte_42E901E & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, status, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_8844/*"MISSION_PERIOD_END"*/, v6, v7, v8);
    byte_42E901E = 1;
  }
  MissionListViewItemDraw__SetRewardStatusImg((MissionListViewItemDraw_o *)this, status, 0LL);
  if ( status == 5 )
  {
    lockImgInfo = this->fields.lockImgInfo;
    if ( !lockImgInfo )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive(lockImgInfo, 0, 0LL);
    lockImgInfo = this->fields.timeOverInfo;
    if ( !lockImgInfo )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive(lockImgInfo, 1, 0LL);
    timeOverLb = this->fields.timeOverLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    lockImgInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8844/*"MISSION_PERIOD_END"*/, 0LL);
    if ( !timeOverLb )
LABEL_12:
      sub_B5D69C(lockImgInfo, v9);
    UILabel__set_text(timeOverLb, (System_String_o *)lockImgInfo, 0LL);
  }
}


void __fastcall EventMissionItemListViewItemDraw__UpdateItem(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  EventMissionEntity_o *EventMissionEntity; // x0
  const MethodInfo *v17; // x1
  UnityEngine_Component_o *resTimeLb; // x0
  UnityEngine_Component_o *v19; // x21
  int64_t oldTime; // x23
  int64_t v21; // x22
  EventMissionItemListViewItemDraw_c *v22; // x8
  UILabel_o *v23; // x23
  int64_t klass; // x24
  int64_t v25; // x24
  int64_t v26; // x21
  System_String_o *RestTime; // x21

  if ( (byte_42E9021 & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionItemListViewItemDraw_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&NetworkManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_13567/*"TIME_REST_TIMEOVER"*/, v13, v14, v15);
    byte_42E9021 = 1;
  }
  if ( item )
  {
    EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0LL);
    if ( mode )
    {
      if ( EventMissionEntity )
      {
        resTimeLb = (UnityEngine_Component_o *)this->fields.resTimeLb;
        if ( !resTimeLb )
          goto LABEL_38;
        resTimeLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resTimeLb, 0LL);
        if ( !resTimeLb )
          goto LABEL_38;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)resTimeLb, 0LL) )
        {
          resTimeLb = (UnityEngine_Component_o *)MissionListViewItem__get_EventMissionEntity(
                                                   (MissionListViewItem_o *)item,
                                                   0LL);
          if ( !this->fields.resTimeLb )
            goto LABEL_38;
          v19 = resTimeLb;
          resTimeLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this->fields.resTimeLb,
                                                   0LL);
          if ( !resTimeLb )
            goto LABEL_38;
          if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)resTimeLb, 0LL) )
          {
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            resTimeLb = (UnityEngine_Component_o *)NetworkManager__getTime(0LL);
            oldTime = this->fields.oldTime;
            v21 = (int64_t)resTimeLb;
            v22 = EventMissionItemListViewItemDraw_TypeInfo;
            if ( (BYTE3(EventMissionItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
              v22 = EventMissionItemListViewItemDraw_TypeInfo;
            }
            if ( v21 - oldTime >= v22->static_fields->TIME_UPDATE_ITVL_SEC )
            {
              if ( !v19 )
                goto LABEL_38;
              v23 = this->fields.resTimeLb;
              if ( this->fields.isAchiveTime )
              {
                klass = (int64_t)v19[3].klass;
                if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v22);
                resTimeLb = (UnityEngine_Component_o *)EventMissionItemListViewItemDraw__GetAchiveTimeText(klass, v17);
              }
              else
              {
                v25 = *(_QWORD *)&v19[2].fields.m_CachedPtr;
                if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v22);
                resTimeLb = (UnityEngine_Component_o *)EventMissionItemListViewItemDraw__GetRestTimeText(v25, v17);
              }
              v17 = (const MethodInfo *)resTimeLb;
              if ( !v23 )
                goto LABEL_38;
              UILabel__set_text(v23, (System_String_o *)resTimeLb, 0LL);
              this->fields.oldTime = v21;
              v26 = *(_QWORD *)&v19[2].fields.m_CachedPtr;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              RestTime = LocalizationManager__GetRestTime(v26, 0LL);
              resTimeLb = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_13567/*"TIME_REST_TIMEOVER"*/,
                                                       0LL);
              if ( !RestTime )
                goto LABEL_38;
              if ( System_String__Equals_44565128(RestTime, (System_String_o *)resTimeLb, 0LL) )
              {
                ((void (__fastcall *)(EventMissionItemListViewItemDraw_o *, EventMissionItemListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_InitDispResTime.method)(
                  this,
                  item,
                  this->klass->vtable._6_SetLockMissionBoard.methodPtr);
                ((void (__fastcall *)(EventMissionItemListViewItem_o *, Il2CppMethodPointer))item->klass->vtable._6_CheckMissionCond.method)(
                  item,
                  item->klass->vtable._7_SetGiftData.methodPtr);
                resTimeLb = (UnityEngine_Component_o *)this->fields.lockImgInfo;
                if ( resTimeLb )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resTimeLb, 0, 0LL);
                  ((void (__fastcall *)(EventMissionItemListViewItemDraw_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_SetRewardStatusImg.method)(
                    this,
                    (unsigned int)item->fields.progStatus,
                    this->klass->vtable._9_UpdateDispResTime.methodPtr);
                  MissionListViewItemDraw__CheckLockMissionBoard(
                    (MissionListViewItemDraw_o *)this,
                    (MissionListViewItem_o *)item,
                    0LL);
                  return;
                }
LABEL_38:
                sub_B5D69C(resTimeLb, v17);
              }
            }
          }
        }
      }
    }
  }
}


void __fastcall EventMissionItemListViewItemDraw__UpdateNewIcon(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *newIcon; // x21
  ShiningIconComponent_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_42E9023 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    byte_42E9023 = 1;
  }
  newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (ShiningIconComponent_o *)UnityEngine_Object__op_Inequality(newIcon, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    if ( !item )
      goto LABEL_15;
    if ( item->fields.isNew && this->fields.isDispTime )
    {
      v7 = this->fields.newIcon;
      if ( v7 )
      {
        ShiningIconComponent__Set(v7, 0LL);
        return;
      }
LABEL_15:
      sub_B5D69C(v7, v8);
    }
    v7 = this->fields.newIcon;
    if ( !v7 )
      goto LABEL_15;
    ShiningIconComponent__Clear(v7, 0LL);
  }
}