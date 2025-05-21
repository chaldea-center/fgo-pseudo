void __fastcall MissionNaviTransitionBoardItemDraw___ctor(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MissionNaviTransitionBoardItemDraw__Awake(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UISprite_o *v8; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UISprite_o *v12; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4B486D7 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B486D7 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( v4 )
  {
    v8 = this->fields.baseSprite;
    if ( !v8
      || (mAtlas = v8->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v6, v7),
          (v12 = this->fields.baseSprite) == 0LL) )
    {
      sub_1BDBAD4(v4, v5);
    }
    mSpriteName = v12->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.baseSpriteName, (int32_t)mSpriteName, v10, v11);
  }
}


void __fastcall MissionNaviTransitionBoardItemDraw__CheckSerializeFieldAssertion(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MissionNaviTransitionBoardItemDraw__DeleteCallback(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rewardInformationComponent; // x20
  __int64 v4; // x1
  HorizontalQuestInformationIconListComponent_o *v5; // x0
  UnityEngine_Object_o *enemyInformationComponent; // x20

  if ( (byte_4B486DF & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B486DF = 1;
  }
  rewardInformationComponent = (UnityEngine_Object_o *)this->fields.rewardInformationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rewardInformationComponent, 0LL, 0LL) )
  {
    v5 = this->fields.rewardInformationComponent;
    if ( !v5 )
      goto LABEL_14;
    HorizontalQuestInformationIconListComponent__DeleteCallback(v5, 0LL);
  }
  enemyInformationComponent = (UnityEngine_Object_o *)this->fields.enemyInformationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(enemyInformationComponent, 0LL, 0LL) )
  {
    v5 = this->fields.enemyInformationComponent;
    if ( v5 )
    {
      HorizontalQuestInformationIconListComponent__DeleteCallback(v5, 0LL);
      return;
    }
LABEL_14:
    sub_1BDBAD4(v5, v4);
  }
}


System_String_o *__fastcall MissionNaviTransitionBoardItemDraw__GetIconNameByWarInfo(
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarEntity_o *Mine; // x0
  __int64 v8; // x1
  WarEntity_o *v9; // x19
  BalanceConfig_c *v10; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t id; // w1
  int32_t v13; // w0
  __int64 *v14; // x19
  System_String_o *v15; // x0

  if ( (byte_4B486DE & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&Method_System_Linq_Enumerable_Contains_int___, v3);
    sub_1BDB878(&StringLiteral_24833/*"war_"*/, v4);
    sub_1BDB878(&StringLiteral_19165/*"event_"*/, v5);
    sub_1BDB878(&StringLiteral_1/*""*/, v6);
    byte_4B486DE = 1;
  }
  if ( !warInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  Mine = MapControl_WarInfo__GetMine(warInfo, 0LL);
  if ( !Mine )
    sub_1BDBAD4(0LL, v8);
  v9 = Mine;
  if ( !WarEntity__IsEvent(Mine, 0LL) )
    goto LABEL_12;
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  static_fields = v10->static_fields;
  id = v9->fields.id;
  if ( static_fields->FesWarId == id )
    goto LABEL_12;
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    id = v9->fields.id;
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  if ( System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->MainChaptersWithEventId,
         id,
         (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
LABEL_12:
    v13 = (_DWORD)v9 + 16;
    v14 = &StringLiteral_24833/*"war_"*/;
  }
  else
  {
    v13 = (_DWORD)v9 + 96;
    v14 = &StringLiteral_19165/*"event_"*/;
  }
  v15 = System_Int32__ToString(v13, 0LL);
  return System_String__Concat_62572260((System_String_o *)*v14, v15, 0LL);
}


void __fastcall MissionNaviTransitionBoardItemDraw__OnClickButton(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct MissionNaviTransitionBoardItem_o *naviBoardItem; // x8

  if ( (byte_4B486DD & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B486DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetMissionNaviTransitionConfirmDialogState((CommonUI_o *)Instance, 4, 0LL),
        (naviBoardItem = this->fields.naviBoardItem) == 0LL) )
  {
    sub_1BDBAD4(Instance, v4);
  }
  ActionExtensions__Call(naviBoardItem->fields._NaviAction_k__BackingField, 0LL);
}


void __fastcall MissionNaviTransitionBoardItemDraw__SetBaseButtonState(
        MissionNaviTransitionBoardItemDraw_o *this,
        MissionNaviTransitionBoardItem_o *boardItem,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  struct UICommonButton_o *v6; // x0
  __int64 v7; // x1
  struct UICommonButton_o *v8; // x8
  float v9; // s1

  if ( (byte_4B486D9 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, boardItem);
    byte_4B486D9 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (struct UICommonButton_o *)UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( !boardItem )
      goto LABEL_12;
    v8 = this->fields.baseButton;
    v9 = 0.5;
    if ( boardItem->fields._IsLocked_k__BackingField )
      v9 = 1.0;
    if ( !v8
      || (v8->fields.specifyDisabledColor.fields.r = v9,
          v8->fields.specifyDisabledColor.fields.g = v9,
          v8->fields.specifyDisabledColor.fields.b = v9,
          v8->fields.specifyDisabledColor.fields.a = 1.0,
          (v6 = this->fields.baseButton) == 0LL) )
    {
LABEL_12:
      sub_1BDBAD4(v6, v7);
    }
    ((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))v6->klass->vtable._5_set_isEnabled.method)(
      v6,
      !boardItem->fields._IsLocked_k__BackingField,
      v6->klass->vtable._6_OnInit.methodPtr);
  }
}


void __fastcall MissionNaviTransitionBoardItemDraw__SetBoardImage(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *baseSprite; // x20
  __int64 v5; // x1
  struct UISprite_o *v6; // x0

  if ( (byte_4B486DA & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_20440/*"img_list_bg03"*/, v3);
    byte_4B486DA = 1;
  }
  baseSprite = this->fields.baseSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(baseSprite, (System_String_o *)StringLiteral_20440/*"img_list_bg03"*/, 0LL);
  v6 = this->fields.baseSprite;
  if ( !v6 )
    sub_1BDBAD4(0LL, v5);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
    v6,
    v6->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall MissionNaviTransitionBoardItemDraw__SetIconImage(
        MissionNaviTransitionBoardItemDraw_o *this,
        MissionNaviTransitionBoardItem_o *item,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItemDraw_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t QuestType; // w0
  __int64 *v14; // x8
  UISprite_o *iconSprite; // x20
  System_String_o *v16; // x21
  UISprite_o *v17; // x0
  System_String_o *v18; // x1
  System_String_o *v19; // x20
  int v20; // w20
  System_String_o *v21; // x0
  __int64 *v22; // x8
  UISprite_o *v23; // x21

  v6 = this;
  if ( (byte_4B486DC & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, item);
    sub_1BDB878(&StringLiteral_23484/*"shortcut_board_icon_"*/, v7);
    sub_1BDB878(&StringLiteral_23491/*"shortcut_board_icon_mainquest"*/, v8);
    sub_1BDB878(&StringLiteral_23501/*"shortcut_board_icon_war_"*/, v9);
    sub_1BDB878(&StringLiteral_1/*""*/, v10);
    sub_1BDB878(&StringLiteral_23486/*"shortcut_board_icon_event_"*/, v11);
    this = (MissionNaviTransitionBoardItemDraw_o *)sub_1BDB878(&StringLiteral_23487/*"shortcut_board_icon_freequest"*/, v12);
    byte_4B486DC = 1;
  }
  if ( !item )
    goto LABEL_27;
  if ( !System_String__IsNullOrEmpty(item->fields._IconName_k__BackingField, 0LL) )
  {
    iconSprite = v6->fields.iconSprite;
    v16 = System_String__Concat_62572260(
            (System_String_o *)StringLiteral_23484/*"shortcut_board_icon_"*/,
            item->fields._IconName_k__BackingField,
            0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v17 = iconSprite;
    v18 = v16;
    goto LABEL_24;
  }
  if ( questInfo && item->fields._BoardType_k__BackingField == 1 )
  {
    QuestType = MapControl_QuestInfo__GetQuestType(questInfo, 0LL);
    if ( QuestType == 1 )
    {
      v14 = &StringLiteral_23491/*"shortcut_board_icon_mainquest"*/;
      goto LABEL_14;
    }
    if ( QuestType == 2 )
    {
      v14 = &StringLiteral_23487/*"shortcut_board_icon_freequest"*/;
LABEL_14:
      v19 = (System_String_o *)*v14;
      goto LABEL_21;
    }
    this = (MissionNaviTransitionBoardItemDraw_o *)questInfo->fields._WarInfo_k__BackingField;
    if ( this )
    {
      this = (MissionNaviTransitionBoardItemDraw_o *)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
      if ( this )
      {
        v20 = (int)this;
        if ( WarEntity__IsEvent((WarEntity_o *)this, 0LL) )
        {
          v21 = System_Int32__ToString(v20 + 96, 0LL);
          v22 = &StringLiteral_23486/*"shortcut_board_icon_event_"*/;
        }
        else
        {
          v21 = System_Int32__ToString(v20 + 16, 0LL);
          v22 = &StringLiteral_23501/*"shortcut_board_icon_war_"*/;
        }
        v19 = System_String__Concat_62572260((System_String_o *)*v22, v21, 0LL);
LABEL_21:
        v23 = v6->fields.iconSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v17 = v23;
        v18 = v19;
LABEL_24:
        AtlasManager__SetBanner(v17, v18, 0LL);
        goto LABEL_25;
      }
    }
LABEL_27:
    sub_1BDBAD4(this, item);
  }
LABEL_25:
  this = (MissionNaviTransitionBoardItemDraw_o *)v6->fields.iconSprite;
  if ( !this )
    goto LABEL_27;
  (*(void (__fastcall **)(MissionNaviTransitionBoardItemDraw_o *, void *))&this->klass[2]._1.byval_arg.bits)(
    this,
    this->klass[2]._1.this_arg.data);
}


bool __fastcall MissionNaviTransitionBoardItemDraw__SetItem(
        MissionNaviTransitionBoardItemDraw_o *this,
        MissionNaviTransitionBoardItem_o *boardItem,
        ListViewManager_o *listViewManager,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UILabel_o *Instance; // x0
  __int64 v16; // x1
  System_String_o *Name_k__BackingField; // x21
  struct UILabel_o *nameLabel; // x8
  int mFontSize; // w9
  struct System_String_o *v20; // x8
  int stringLength; // w8
  float v22; // s8
  float v23; // s8
  System_String_o *v24; // x2
  unsigned int v25; // w8
  MapControl_QuestInfo_o *v26; // x21
  UnityEngine_Object_o *rewardInformationComponent; // x21
  UnityEngine_Object_o *enemyInformationComponent; // x21
  MapControl_QuestInfo_o *QuestInfo; // x0
  Il2CppObject *Empty; // x22
  System_String_o *v31; // x22
  int64_t v32; // x23
  System_String_o *v33; // x0
  Il2CppObject *RestTime2; // x0
  UILabel_o *restTimeLabel; // x23
  UnityEngine_Object_o *baseSprite; // x22
  const MethodInfo *v37; // x1
  UnityEngine_Object_o *enableMask; // x22
  const MethodInfo *v39; // x1
  UnityEngine_Object_o *iconSprite; // x22
  const MethodInfo *v41; // x3
  System_String_o *infoText; // [xsp+8h] [xbp-58h] BYREF
  int64_t endedAt; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4B486D8 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, boardItem);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    sub_1BDB878(&Method_SingletonTemplate_QuestTree__get_Instance__, v8);
    sub_1BDB878(&string_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_43/*"\n"*/, v10);
    sub_1BDB878(&StringLiteral_13402/*"TIME_REST_QUEST_BOARD_QUEST"*/, v11);
    sub_1BDB878(&StringLiteral_8677/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, v12);
    byte_4B486D8 = 1;
  }
  endedAt = 0LL;
  infoText = 0LL;
  if ( boardItem )
  {
    this->fields.naviBoardItem = boardItem;
    sub_1BDB81C(
      (CGThumbnailListItem_o *)&this->fields.naviBoardItem,
      (int32_t)boardItem,
      (int32_t)listViewManager,
      method);
    this->fields.naviListViewManager = listViewManager;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.naviListViewManager, (int32_t)listViewManager, v13, v14);
    Name_k__BackingField = boardItem->fields._Name_k__BackingField;
    if ( !Name_k__BackingField )
      goto LABEL_72;
    Instance = (UILabel_o *)System_String__Contains(
                              boardItem->fields._Name_k__BackingField,
                              (System_String_o *)StringLiteral_43/*"\n"*/,
                              0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      goto LABEL_22;
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_72;
    mFontSize = nameLabel->fields.mFontSize;
    v16 = mFontSize < 1 ? 0LL : (unsigned int)(nameLabel->fields.mWidth / mFontSize);
    v20 = boardItem->fields._Name_k__BackingField;
    if ( !v20 )
      goto LABEL_72;
    stringLength = v20->fields._stringLength;
    if ( stringLength <= 2 * (int)v16 )
    {
      if ( stringLength <= (int)v16 )
      {
LABEL_22:
        Instance = this->fields.nameLabel;
        if ( !Instance )
          goto LABEL_72;
        UILabel__set_text(Instance, Name_k__BackingField, 0LL);
        v26 = 0LL;
        if ( boardItem->fields._BoardType_k__BackingField != 1 )
          goto LABEL_58;
        if ( !boardItem->fields._QuestId_k__BackingField )
        {
          v26 = 0LL;
          goto LABEL_58;
        }
        if ( !boardItem->fields._IsNotDisplayQuestInfo_k__BackingField )
        {
          rewardInformationComponent = (UnityEngine_Object_o *)this->fields.rewardInformationComponent;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(rewardInformationComponent, 0LL, 0LL)
            && !boardItem->fields._IsLocked_k__BackingField )
          {
            Instance = (UILabel_o *)this->fields.rewardInformationComponent;
            if ( !Instance )
              goto LABEL_72;
            HorizontalQuestInformationIconListComponent__Setup(
              (HorizontalQuestInformationIconListComponent_o *)Instance,
              boardItem->fields._QuestId_k__BackingField,
              0LL);
          }
          enemyInformationComponent = (UnityEngine_Object_o *)this->fields.enemyInformationComponent;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(enemyInformationComponent, 0LL, 0LL)
            && !boardItem->fields._IsLocked_k__BackingField )
          {
            Instance = (UILabel_o *)this->fields.enemyInformationComponent;
            if ( !Instance )
              goto LABEL_72;
            HorizontalQuestInformationIconListComponent__Setup(
              (HorizontalQuestInformationIconListComponent_o *)Instance,
              boardItem->fields._QuestId_k__BackingField,
              0LL);
          }
        }
        Instance = (UILabel_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Instance )
LABEL_72:
          sub_1BDBAD4(Instance, v16);
        QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, boardItem->fields._QuestId_k__BackingField, 0LL);
        v26 = QuestInfo;
        if ( !QuestInfo )
          goto LABEL_58;
        Instance = (UILabel_o *)MapControl_QuestInfo__GetMine(QuestInfo, 0LL);
        if ( !Instance )
          goto LABEL_72;
        if ( QuestEntity__HasFlag((QuestEntity_o *)Instance, 32LL, 0LL) )
        {
LABEL_58:
          baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
            MissionNaviTransitionBoardItemDraw__SetBoardImage(this, v37);
          enableMask = (UnityEngine_Object_o *)this->fields.enableMask;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(enableMask, 0LL, 0LL) )
            MissionNaviTransitionBoardItemDraw__SetMaskImage(this, v39);
          iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
            MissionNaviTransitionBoardItemDraw__SetIconImage(this, boardItem, v26, v41);
          ((void (__fastcall *)(MissionNaviTransitionBoardItemDraw_o *, MissionNaviTransitionBoardItem_o *, void *))this->klass->vtable._5_SetLockNaviBoard.method)(
            this,
            boardItem,
            this->klass[1]._1.image);
          return boardItem != 0LL;
        }
        endedAt = 0LL;
        Empty = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
        if ( QuestMaster__TryGetPrivilegePeriodMessage(&infoText, &endedAt, v26->fields.questId, 0LL) )
        {
          v31 = infoText;
          v32 = endedAt;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        else
        {
          endedAt = v26->fields.endTime;
          if ( endedAt < 1 )
            goto LABEL_51;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v33 = LocalizationManager__Get((System_String_o *)StringLiteral_13402/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
          v32 = endedAt;
          v31 = v33;
        }
        RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(v32, -1LL, 0LL);
        Empty = (Il2CppObject *)System_String__Format(v31, RestTime2, 0LL);
LABEL_51:
        if ( !System_String__IsNullOrEmpty((System_String_o *)Empty, 0LL) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8677/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, 0LL);
          restTimeLabel = this->fields.restTimeLabel;
          if ( boardItem->fields._IsLocked_k__BackingField )
          {
            Instance = (UILabel_o *)System_String__Format((System_String_o *)Instance, Empty, 0LL);
            Empty = (Il2CppObject *)Instance;
          }
          if ( restTimeLabel )
          {
            UILabel__set_text(restTimeLabel, (System_String_o *)Empty, 0LL);
            goto LABEL_58;
          }
          goto LABEL_72;
        }
        goto LABEL_58;
      }
      v24 = (System_String_o *)StringLiteral_43/*"\n"*/;
    }
    else
    {
      v22 = (float)stringLength;
      if ( !byte_4B3EFD1 )
      {
        sub_1BDB878(&System_Math_TypeInfo, v16);
        byte_4B3EFD1 = 1;
      }
      v23 = v22 * 0.5;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v24 = (System_String_o *)StringLiteral_43/*"\n"*/;
      v25 = vcvtps_s32_f32(v23);
      if ( ceilf(v23) == INFINITY )
        LODWORD(v16) = 0x80000000;
      else
        LODWORD(v16) = v25;
    }
    Name_k__BackingField = System_String__Insert(Name_k__BackingField, v16, v24, 0LL);
    goto LABEL_22;
  }
  return boardItem != 0LL;
}


void __fastcall MissionNaviTransitionBoardItemDraw__SetLockNaviBoard(
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
      UILabel__set_text((UILabel_o *)this, boardItem->fields._ClosedMessage_k__BackingField, 0LL);
      this = (MissionNaviTransitionBoardItemDraw_o *)v4->fields.enableMask;
      if ( this )
      {
        this = (MissionNaviTransitionBoardItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          MissionNaviTransitionBoardItemDraw__SetBaseButtonState(v4, boardItem, v5);
          return;
        }
      }
    }
LABEL_8:
    sub_1BDBAD4(this, boardItem);
  }
}


void __fastcall MissionNaviTransitionBoardItemDraw__SetMaskImage(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *enableMask; // x20
  __int64 v5; // x1
  struct UISprite_o *v6; // x0

  if ( (byte_4B486DB & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_20440/*"img_list_bg03"*/, v3);
    byte_4B486DB = 1;
  }
  enableMask = this->fields.enableMask;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(enableMask, (System_String_o *)StringLiteral_20440/*"img_list_bg03"*/, 0LL);
  v6 = this->fields.enableMask;
  if ( !v6 )
    sub_1BDBAD4(0LL, v5);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
    v6,
    v6->klass->vtable._34_get_minWidth.methodPtr);
}