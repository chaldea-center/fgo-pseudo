void MissionNaviTransitionBoardItemDraw___ctor(MissionNaviTransitionBoardItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MissionNaviTransitionBoardItemDraw__Awake(MissionNaviTransitionBoardItemDraw_o *this, const MethodInfo *method)
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

  if ( (byte_4C3B4B0 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B4B0 = 1;
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


void MissionNaviTransitionBoardItemDraw__CheckSerializeFieldAssertion(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void MissionNaviTransitionBoardItemDraw__DeleteCallback(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rewardInformationComponent; // x20
  HorizontalQuestInformationIconListComponent_o *v4; // x0
  UnityEngine_Object_o *enemyInformationComponent; // x20

  if ( (byte_4C3B4B8 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B4B8 = 1;
  }
  rewardInformationComponent = (UnityEngine_Object_o *)this->fields.rewardInformationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rewardInformationComponent, 0, 0) )
  {
    v4 = this->fields.rewardInformationComponent;
    if ( !v4 )
      goto LABEL_14;
    HorizontalQuestInformationIconListComponent__DeleteCallback(v4, 0);
  }
  enemyInformationComponent = (UnityEngine_Object_o *)this->fields.enemyInformationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(enemyInformationComponent, 0, 0) )
  {
    v4 = this->fields.enemyInformationComponent;
    if ( v4 )
    {
      HorizontalQuestInformationIconListComponent__DeleteCallback(v4, 0);
      return;
    }
LABEL_14:
    sub_1C32E7C(v4);
  }
}


System_String_o *MissionNaviTransitionBoardItemDraw__GetIconNameByWarInfo(
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  WarEntity_o *Mine; // x0
  WarEntity_o *v4; // x19
  BalanceConfig_c *v5; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t id; // w1
  int32_t v8; // w0
  __int64 *v9; // x19
  System_String_o *v10; // x0

  if ( (byte_4C3B4B7 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&StringLiteral_24753/*"war_"*/);
    sub_1C32C20(&StringLiteral_19157/*"event_"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3B4B7 = 1;
  }
  if ( !warInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  Mine = MapControl_WarInfo__GetMine(warInfo, 0);
  if ( !Mine )
    sub_1C32E7C(0);
  v4 = Mine;
  if ( !WarEntity__IsEvent(Mine, 0) )
    goto LABEL_12;
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  static_fields = v5->static_fields;
  id = v4->fields.id;
  if ( static_fields->FesWarId == id )
    goto LABEL_12;
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    id = v4->fields.id;
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  if ( System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->MainChaptersWithEventId,
         id,
         (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
LABEL_12:
    v8 = (_DWORD)v4 + 16;
    v9 = &StringLiteral_24753/*"war_"*/;
  }
  else
  {
    v8 = (_DWORD)v4 + 96;
    v9 = &StringLiteral_19157/*"event_"*/;
  }
  v10 = System_Int32__ToString(v8, 0);
  return System_String__Concat_63518544((System_String_o *)*v9, v10, 0);
}


void MissionNaviTransitionBoardItemDraw__OnClickButton(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct MissionNaviTransitionBoardItem_o *naviBoardItem; // x8

  if ( (byte_4C3B4B6 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3B4B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetMissionNaviTransitionConfirmDialogState((CommonUI_o *)Instance, 4, 0),
        (naviBoardItem = this->fields.naviBoardItem) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  ActionExtensions__Call(naviBoardItem->fields._NaviAction_k__BackingField, 0);
}


void MissionNaviTransitionBoardItemDraw__SetBaseButtonState(
        MissionNaviTransitionBoardItemDraw_o *this,
        MissionNaviTransitionBoardItem_o *boardItem,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  struct UICommonButton_o *v6; // x0
  struct UICommonButton_o *v7; // x8
  float v8; // s1

  if ( (byte_4C3B4B2 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B4B2 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (struct UICommonButton_o *)UnityEngine_Object__op_Equality(baseButton, 0, 0);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( !boardItem )
      goto LABEL_12;
    v7 = this->fields.baseButton;
    v8 = 0.5;
    if ( boardItem->fields._IsLocked_k__BackingField )
      v8 = 1.0;
    if ( !v7
      || (v7->fields.specifyDisabledColor.fields.r = v8,
          v7->fields.specifyDisabledColor.fields.g = v8,
          v7->fields.specifyDisabledColor.fields.b = v8,
          v7->fields.specifyDisabledColor.fields.a = 1.0,
          (v6 = this->fields.baseButton) == 0) )
    {
LABEL_12:
      sub_1C32E7C(v6);
    }
    ((void (__fastcall *)(struct UICommonButton_o *, bool, const MethodInfo *))v6->klass->vtable._5_set_isEnabled.methodPtr)(
      v6,
      !boardItem->fields._IsLocked_k__BackingField,
      v6->klass->vtable._5_set_isEnabled.method);
  }
}


void MissionNaviTransitionBoardItemDraw__SetBoardImage(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  UISprite_o *baseSprite; // x20
  struct UISprite_o *v4; // x0

  if ( (byte_4C3B4B3 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&StringLiteral_20426/*"img_list_bg03"*/);
    byte_4C3B4B3 = 1;
  }
  baseSprite = this->fields.baseSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(baseSprite, (System_String_o *)StringLiteral_20426/*"img_list_bg03"*/, 0);
  v4 = this->fields.baseSprite;
  if ( !v4 )
    sub_1C32E7C(0);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v4->klass->vtable._33_MakePixelPerfect.methodPtr)(
    v4,
    v4->klass->vtable._33_MakePixelPerfect.method);
}


void MissionNaviTransitionBoardItemDraw__SetIconImage(
        MissionNaviTransitionBoardItemDraw_o *this,
        MissionNaviTransitionBoardItem_o *item,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItemDraw_o *v6; // x19
  int32_t QuestType; // w0
  __int64 *v8; // x8
  UISprite_o *iconSprite; // x20
  System_String_o *v10; // x21
  UISprite_o *v11; // x0
  System_String_o *v12; // x1
  System_String_o *v13; // x20
  int v14; // w20
  System_String_o *v15; // x0
  __int64 *v16; // x8
  UISprite_o *v17; // x21

  v6 = this;
  if ( (byte_4C3B4B5 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&StringLiteral_23451/*"shortcut_board_icon_"*/);
    sub_1C32C20(&StringLiteral_23458/*"shortcut_board_icon_mainquest"*/);
    sub_1C32C20(&StringLiteral_23468/*"shortcut_board_icon_war_"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_23453/*"shortcut_board_icon_event_"*/);
    this = (MissionNaviTransitionBoardItemDraw_o *)sub_1C32C20(&StringLiteral_23454/*"shortcut_board_icon_freequest"*/);
    byte_4C3B4B5 = 1;
  }
  if ( !item )
    goto LABEL_27;
  if ( !System_String__IsNullOrEmpty(item->fields._IconName_k__BackingField, 0) )
  {
    iconSprite = v6->fields.iconSprite;
    v10 = System_String__Concat_63518544(
            (System_String_o *)StringLiteral_23451/*"shortcut_board_icon_"*/,
            item->fields._IconName_k__BackingField,
            0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v11 = iconSprite;
    v12 = v10;
    goto LABEL_24;
  }
  if ( questInfo && item->fields._BoardType_k__BackingField == 1 )
  {
    QuestType = MapControl_QuestInfo__GetQuestType(questInfo, 0);
    if ( QuestType == 1 )
    {
      v8 = &StringLiteral_23458/*"shortcut_board_icon_mainquest"*/;
      goto LABEL_14;
    }
    if ( QuestType == 2 )
    {
      v8 = &StringLiteral_23454/*"shortcut_board_icon_freequest"*/;
LABEL_14:
      v13 = (System_String_o *)*v8;
      goto LABEL_21;
    }
    this = (MissionNaviTransitionBoardItemDraw_o *)questInfo->fields._WarInfo_k__BackingField;
    if ( this )
    {
      this = (MissionNaviTransitionBoardItemDraw_o *)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0);
      if ( this )
      {
        v14 = (int)this;
        if ( WarEntity__IsEvent((WarEntity_o *)this, 0) )
        {
          v15 = System_Int32__ToString(v14 + 96, 0);
          v16 = &StringLiteral_23453/*"shortcut_board_icon_event_"*/;
        }
        else
        {
          v15 = System_Int32__ToString(v14 + 16, 0);
          v16 = &StringLiteral_23468/*"shortcut_board_icon_war_"*/;
        }
        v13 = System_String__Concat_63518544((System_String_o *)*v16, v15, 0);
LABEL_21:
        v17 = v6->fields.iconSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v11 = v17;
        v12 = v13;
LABEL_24:
        AtlasManager__SetBanner(v11, v12, 0);
        goto LABEL_25;
      }
    }
LABEL_27:
    sub_1C32E7C(this);
  }
LABEL_25:
  this = (MissionNaviTransitionBoardItemDraw_o *)v6->fields.iconSprite;
  if ( !this )
    goto LABEL_27;
  ((void (__fastcall *)(MissionNaviTransitionBoardItemDraw_o *, void *))this->klass[2]._1.namespaze)(
    this,
    this->klass[2]._1.byval_arg.data);
}


bool MissionNaviTransitionBoardItemDraw__SetItem(
        MissionNaviTransitionBoardItemDraw_o *this,
        MissionNaviTransitionBoardItem_o *boardItem,
        ListViewManager_o *listViewManager,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UILabel_o *Instance; // x0
  System_String_o *Name_k__BackingField; // x21
  struct UILabel_o *nameLabel; // x8
  int mFontSize; // w9
  int32_t v13; // w1
  struct System_String_o *v14; // x8
  int stringLength; // w8
  float v16; // s8
  float v17; // s8
  System_String_o *v18; // x2
  unsigned int v19; // w8
  MapControl_QuestInfo_o *v20; // x21
  UnityEngine_Object_o *rewardInformationComponent; // x21
  UnityEngine_Object_o *enemyInformationComponent; // x21
  MapControl_QuestInfo_o *QuestInfo; // x0
  Il2CppObject *Empty; // x22
  System_String_o *v25; // x22
  int64_t v26; // x23
  System_String_o *v27; // x0
  Il2CppObject *RestTime2; // x0
  UILabel_o *restTimeLabel; // x23
  UnityEngine_Object_o *baseSprite; // x22
  const MethodInfo *v31; // x1
  UnityEngine_Object_o *enableMask; // x22
  const MethodInfo *v33; // x1
  UnityEngine_Object_o *iconSprite; // x22
  const MethodInfo *v35; // x3
  System_String_o *infoText; // [xsp+8h] [xbp-58h] BYREF
  int64_t endedAt; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4C3B4B1 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    sub_1C32C20(&StringLiteral_13430/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C32C20(&StringLiteral_8684/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/);
    byte_4C3B4B1 = 1;
  }
  endedAt = 0;
  infoText = 0;
  if ( boardItem )
  {
    this->fields.naviBoardItem = boardItem;
    sub_1C32BC4(
      (CGThumbnailListItem_o *)&this->fields.naviBoardItem,
      (int32_t)boardItem,
      (int32_t)listViewManager,
      method);
    this->fields.naviListViewManager = listViewManager;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.naviListViewManager, (int32_t)listViewManager, v7, v8);
    Name_k__BackingField = boardItem->fields._Name_k__BackingField;
    if ( !Name_k__BackingField )
      goto LABEL_72;
    Instance = (UILabel_o *)System_String__Contains(
                              boardItem->fields._Name_k__BackingField,
                              (System_String_o *)StringLiteral_43/*"\n"*/,
                              0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      goto LABEL_22;
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_72;
    mFontSize = nameLabel->fields.mFontSize;
    v13 = mFontSize < 1 ? 0 : nameLabel->fields.mWidth / mFontSize;
    v14 = boardItem->fields._Name_k__BackingField;
    if ( !v14 )
      goto LABEL_72;
    stringLength = v14->fields._stringLength;
    if ( stringLength <= 2 * v13 )
    {
      if ( stringLength <= v13 )
      {
LABEL_22:
        Instance = this->fields.nameLabel;
        if ( !Instance )
          goto LABEL_72;
        UILabel__set_text(Instance, Name_k__BackingField, 0);
        v20 = 0;
        if ( boardItem->fields._BoardType_k__BackingField != 1 )
          goto LABEL_58;
        if ( !boardItem->fields._QuestId_k__BackingField )
        {
          v20 = 0;
          goto LABEL_58;
        }
        if ( !boardItem->fields._IsNotDisplayQuestInfo_k__BackingField )
        {
          rewardInformationComponent = (UnityEngine_Object_o *)this->fields.rewardInformationComponent;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(rewardInformationComponent, 0, 0)
            && !boardItem->fields._IsLocked_k__BackingField )
          {
            Instance = (UILabel_o *)this->fields.rewardInformationComponent;
            if ( !Instance )
              goto LABEL_72;
            HorizontalQuestInformationIconListComponent__Setup(
              (HorizontalQuestInformationIconListComponent_o *)Instance,
              boardItem->fields._QuestId_k__BackingField,
              0);
          }
          enemyInformationComponent = (UnityEngine_Object_o *)this->fields.enemyInformationComponent;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(enemyInformationComponent, 0, 0)
            && !boardItem->fields._IsLocked_k__BackingField )
          {
            Instance = (UILabel_o *)this->fields.enemyInformationComponent;
            if ( !Instance )
              goto LABEL_72;
            HorizontalQuestInformationIconListComponent__Setup(
              (HorizontalQuestInformationIconListComponent_o *)Instance,
              boardItem->fields._QuestId_k__BackingField,
              0);
          }
        }
        Instance = (UILabel_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Instance )
LABEL_72:
          sub_1C32E7C(Instance);
        QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, boardItem->fields._QuestId_k__BackingField, 0);
        v20 = QuestInfo;
        if ( !QuestInfo )
          goto LABEL_58;
        Instance = (UILabel_o *)MapControl_QuestInfo__GetMine(QuestInfo, 0);
        if ( !Instance )
          goto LABEL_72;
        if ( QuestEntity__HasFlag((QuestEntity_o *)Instance, 32, 0) )
        {
LABEL_58:
          baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
            MissionNaviTransitionBoardItemDraw__SetBoardImage(this, v31);
          enableMask = (UnityEngine_Object_o *)this->fields.enableMask;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(enableMask, 0, 0) )
            MissionNaviTransitionBoardItemDraw__SetMaskImage(this, v33);
          iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
            MissionNaviTransitionBoardItemDraw__SetIconImage(this, boardItem, v20, v35);
          ((void (__fastcall *)(MissionNaviTransitionBoardItemDraw_o *, MissionNaviTransitionBoardItem_o *, const MethodInfo *))this->klass->vtable._5_SetLockNaviBoard.methodPtr)(
            this,
            boardItem,
            this->klass->vtable._5_SetLockNaviBoard.method);
          return boardItem != 0;
        }
        endedAt = 0;
        Empty = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
        if ( QuestMaster__TryGetPrivilegePeriodMessage(&infoText, &endedAt, v20->fields.questId, 0) )
        {
          v25 = infoText;
          v26 = endedAt;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        else
        {
          endedAt = v20->fields.endTime;
          if ( endedAt < 1 )
            goto LABEL_51;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13430/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0);
          v26 = endedAt;
          v25 = v27;
        }
        RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(v26, -1, 0);
        Empty = (Il2CppObject *)System_String__Format(v25, RestTime2, 0);
LABEL_51:
        if ( !System_String__IsNullOrEmpty((System_String_o *)Empty, 0) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8684/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, 0);
          restTimeLabel = this->fields.restTimeLabel;
          if ( boardItem->fields._IsLocked_k__BackingField )
          {
            Instance = (UILabel_o *)System_String__Format((System_String_o *)Instance, Empty, 0);
            Empty = (Il2CppObject *)Instance;
          }
          if ( restTimeLabel )
          {
            UILabel__set_text(restTimeLabel, (System_String_o *)Empty, 0);
            goto LABEL_58;
          }
          goto LABEL_72;
        }
        goto LABEL_58;
      }
      v18 = (System_String_o *)StringLiteral_43/*"\n"*/;
    }
    else
    {
      v16 = (float)stringLength;
      if ( !byte_4C31A98 )
      {
        sub_1C32C20(&System_Math_TypeInfo);
        byte_4C31A98 = 1;
      }
      v17 = v16 * 0.5;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v18 = (System_String_o *)StringLiteral_43/*"\n"*/;
      v19 = vcvtps_s32_f32(v17);
      if ( ceilf(v17) == INFINITY )
        v13 = 0x80000000;
      else
        v13 = v19;
    }
    Name_k__BackingField = System_String__Insert(Name_k__BackingField, v13, v18, 0);
    goto LABEL_22;
  }
  return boardItem != 0;
}


void MissionNaviTransitionBoardItemDraw__SetLockNaviBoard(
        MissionNaviTransitionBoardItemDraw_o *this,
        MissionNaviTransitionBoardItem_o *boardItem,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItemDraw_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( !boardItem )
    goto LABEL_8;
  if ( boardItem->fields._IsLocked_k__BackingField )
  {
    v4 = this;
    this = (MissionNaviTransitionBoardItemDraw_o *)this->fields.closedMessageLabel;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, boardItem->fields._ClosedMessage_k__BackingField, 0);
      this = (MissionNaviTransitionBoardItemDraw_o *)v4->fields.enableMask;
      if ( this )
      {
        this = (MissionNaviTransitionBoardItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          MissionNaviTransitionBoardItemDraw__SetBaseButtonState(v4, boardItem, v5);
          return;
        }
      }
    }
LABEL_8:
    sub_1C32E7C(this);
  }
}


void MissionNaviTransitionBoardItemDraw__SetMaskImage(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  UISprite_o *enableMask; // x20
  struct UISprite_o *v4; // x0

  if ( (byte_4C3B4B4 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&StringLiteral_20426/*"img_list_bg03"*/);
    byte_4C3B4B4 = 1;
  }
  enableMask = this->fields.enableMask;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(enableMask, (System_String_o *)StringLiteral_20426/*"img_list_bg03"*/, 0);
  v4 = this->fields.enableMask;
  if ( !v4 )
    sub_1C32E7C(0);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v4->klass->vtable._33_MakePixelPerfect.methodPtr)(
    v4,
    v4->klass->vtable._33_MakePixelPerfect.method);
}