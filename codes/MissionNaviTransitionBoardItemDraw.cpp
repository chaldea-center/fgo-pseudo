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
  int32_t v7; // w3
  struct UISprite_o *v8; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct UISprite_o *v12; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4A5E42C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E42C = 1;
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
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v6, v7),
          (v12 = this->fields.baseSprite) == 0LL) )
    {
      sub_1B8880C(v4, v5);
    }
    mSpriteName = v12->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseSpriteName, (int32_t)mSpriteName, v10, v11);
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

  if ( (byte_4A5E434 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E434 = 1;
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
    sub_1B8880C(v5, v4);
  }
}


System_String_o *__fastcall MissionNaviTransitionBoardItemDraw__GetIconNameByWarInfo(
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  WarEntity_o *Mine; // x0
  __int64 v4; // x1
  WarEntity_o *v5; // x19
  BalanceConfig_c *v6; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t id; // w1
  int32_t v9; // w0
  __int64 *v10; // x19
  System_String_o *v11; // x0

  if ( (byte_4A5E433 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&StringLiteral_24638/*"war_"*/);
    sub_1B885B0(&StringLiteral_19145/*"event_"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E433 = 1;
  }
  if ( !warInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  Mine = MapControl_WarInfo__GetMine(warInfo, 0LL);
  if ( !Mine )
    sub_1B8880C(0LL, v4);
  v5 = Mine;
  if ( !WarEntity__IsEvent(Mine, 0LL) )
    goto LABEL_12;
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  static_fields = v6->static_fields;
  id = v5->fields.id;
  if ( static_fields->FesWarId == id )
    goto LABEL_12;
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    id = v5->fields.id;
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  if ( System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->MainChaptersWithEventId,
         id,
         (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
LABEL_12:
    v9 = (_DWORD)v5 + 16;
    v10 = &StringLiteral_24638/*"war_"*/;
  }
  else
  {
    v9 = (_DWORD)v5 + 96;
    v10 = &StringLiteral_19145/*"event_"*/;
  }
  v11 = System_Int32__ToString(v9, 0LL);
  return System_String__Concat_61707032((System_String_o *)*v10, v11, 0LL);
}


void __fastcall MissionNaviTransitionBoardItemDraw__OnClickButton(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct MissionNaviTransitionBoardItem_o *naviBoardItem; // x8

  if ( (byte_4A5E432 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E432 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetMissionNaviTransitionConfirmDialogState((CommonUI_o *)Instance, 4, 0LL),
        (naviBoardItem = this->fields.naviBoardItem) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
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

  if ( (byte_4A5E42E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E42E = 1;
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
      sub_1B8880C(v6, v7);
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
  UISprite_o *baseSprite; // x20
  __int64 v4; // x1
  struct UISprite_o *v5; // x0

  if ( (byte_4A5E42F & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&StringLiteral_20334/*"img_list_bg03"*/);
    byte_4A5E42F = 1;
  }
  baseSprite = this->fields.baseSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(baseSprite, (System_String_o *)StringLiteral_20334/*"img_list_bg03"*/, 0LL);
  v5 = this->fields.baseSprite;
  if ( !v5 )
    sub_1B8880C(0LL, v4);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v5->klass->vtable._33_MakePixelPerfect.method)(
    v5,
    v5->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall MissionNaviTransitionBoardItemDraw__SetIconImage(
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
  if ( (byte_4A5E431 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&StringLiteral_23281/*"shortcut_board_icon_"*/);
    sub_1B885B0(&StringLiteral_23288/*"shortcut_board_icon_mainquest"*/);
    sub_1B885B0(&StringLiteral_23298/*"shortcut_board_icon_war_"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_23283/*"shortcut_board_icon_event_"*/);
    this = (MissionNaviTransitionBoardItemDraw_o *)sub_1B885B0(&StringLiteral_23284/*"shortcut_board_icon_freequest"*/);
    byte_4A5E431 = 1;
  }
  if ( !item )
    goto LABEL_27;
  if ( !System_String__IsNullOrEmpty(item->fields._IconName_k__BackingField, 0LL) )
  {
    iconSprite = v6->fields.iconSprite;
    v10 = System_String__Concat_61707032(
            (System_String_o *)StringLiteral_23281/*"shortcut_board_icon_"*/,
            item->fields._IconName_k__BackingField,
            0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v11 = iconSprite;
    v12 = v10;
    goto LABEL_24;
  }
  if ( questInfo && item->fields._BoardType_k__BackingField == 1 )
  {
    QuestType = MapControl_QuestInfo__GetQuestType(questInfo, 0LL);
    if ( QuestType == 1 )
    {
      v8 = &StringLiteral_23288/*"shortcut_board_icon_mainquest"*/;
      goto LABEL_14;
    }
    if ( QuestType == 2 )
    {
      v8 = &StringLiteral_23284/*"shortcut_board_icon_freequest"*/;
LABEL_14:
      v13 = (System_String_o *)*v8;
      goto LABEL_21;
    }
    this = (MissionNaviTransitionBoardItemDraw_o *)questInfo->fields._WarInfo_k__BackingField;
    if ( this )
    {
      this = (MissionNaviTransitionBoardItemDraw_o *)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
      if ( this )
      {
        v14 = (int)this;
        if ( WarEntity__IsEvent((WarEntity_o *)this, 0LL) )
        {
          v15 = System_Int32__ToString(v14 + 96, 0LL);
          v16 = &StringLiteral_23283/*"shortcut_board_icon_event_"*/;
        }
        else
        {
          v15 = System_Int32__ToString(v14 + 16, 0LL);
          v16 = &StringLiteral_23298/*"shortcut_board_icon_war_"*/;
        }
        v13 = System_String__Concat_61707032((System_String_o *)*v16, v15, 0LL);
LABEL_21:
        v17 = v6->fields.iconSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v11 = v17;
        v12 = v13;
LABEL_24:
        AtlasManager__SetBanner(v11, v12, 0LL);
        goto LABEL_25;
      }
    }
LABEL_27:
    sub_1B8880C(this, item);
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
  int32_t v7; // w2
  int32_t v8; // w3
  void *Instance; // x0
  System_String_o *v10; // x1
  System_String_o *Name_k__BackingField; // x21
  struct UILabel_o *nameLabel; // x8
  int mFontSize; // w9
  struct System_String_o *v14; // x8
  int stringLength; // w8
  float v16; // s8
  float v17; // s8
  System_String_o *v18; // x2
  unsigned int v19; // w8
  MapControl_QuestInfo_o *v20; // x21
  UnityEngine_Object_o *rewardInformationComponent; // x21
  UnityEngine_Object_o *enemyInformationComponent; // x21
  int64_t v23; // x22
  System_String_o *v24; // x23
  System_String_o *v25; // x24
  Il2CppObject *RestTime2; // x0
  UILabel_o *restTimeLabel; // x22
  UnityEngine_Object_o *baseSprite; // x22
  const MethodInfo *v29; // x1
  UnityEngine_Object_o *enableMask; // x22
  const MethodInfo *v31; // x1
  UnityEngine_Object_o *iconSprite; // x22
  const MethodInfo *v33; // x3

  if ( (byte_4A5E42D & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_13341/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1B885B0(&StringLiteral_8654/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/);
    byte_4A5E42D = 1;
  }
  if ( boardItem )
  {
    this->fields.naviBoardItem = boardItem;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.naviBoardItem,
      (int32_t)boardItem,
      (int32_t)listViewManager,
      (int32_t)method);
    this->fields.naviListViewManager = listViewManager;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.naviListViewManager,
      (int32_t)listViewManager,
      v7,
      v8);
    Name_k__BackingField = boardItem->fields._Name_k__BackingField;
    if ( !Name_k__BackingField )
      goto LABEL_64;
    Instance = (void *)System_String__Contains(
                         boardItem->fields._Name_k__BackingField,
                         (System_String_o *)StringLiteral_43/*"\n"*/,
                         0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      nameLabel = this->fields.nameLabel;
      if ( !nameLabel )
        goto LABEL_64;
      mFontSize = nameLabel->fields.mFontSize;
      v10 = mFontSize < 1 ? 0LL : (System_String_o *)(unsigned int)(nameLabel->fields.mWidth / mFontSize);
      v14 = boardItem->fields._Name_k__BackingField;
      if ( !v14 )
        goto LABEL_64;
      stringLength = v14->fields._stringLength;
      if ( stringLength <= 2 * (int)v10 )
      {
        if ( stringLength <= (int)v10 )
          goto LABEL_22;
        v18 = (System_String_o *)StringLiteral_43/*"\n"*/;
      }
      else
      {
        v16 = (float)stringLength;
        if ( !byte_4A5638E )
        {
          sub_1B885B0(&System_Math_TypeInfo);
          byte_4A5638E = 1;
        }
        v17 = v16 * 0.5;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v18 = (System_String_o *)StringLiteral_43/*"\n"*/;
        v19 = vcvtps_s32_f32(v17);
        if ( ceilf(v17) == INFINITY )
          LODWORD(v10) = 0x80000000;
        else
          LODWORD(v10) = v19;
      }
      Name_k__BackingField = System_String__Insert(Name_k__BackingField, (int32_t)v10, v18, 0LL);
    }
LABEL_22:
    Instance = this->fields.nameLabel;
    if ( !Instance )
      goto LABEL_64;
    UILabel__set_text((UILabel_o *)Instance, Name_k__BackingField, 0LL);
    v20 = 0LL;
    if ( boardItem->fields._BoardType_k__BackingField == 1 )
    {
      if ( !boardItem->fields._QuestId_k__BackingField )
      {
        v20 = 0LL;
        goto LABEL_50;
      }
      if ( !boardItem->fields._IsNotDisplayQuestInfo_k__BackingField )
      {
        rewardInformationComponent = (UnityEngine_Object_o *)this->fields.rewardInformationComponent;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(rewardInformationComponent, 0LL, 0LL)
          && !boardItem->fields._IsLocked_k__BackingField )
        {
          Instance = this->fields.rewardInformationComponent;
          if ( !Instance )
            goto LABEL_64;
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
          Instance = this->fields.enemyInformationComponent;
          if ( !Instance )
            goto LABEL_64;
          HorizontalQuestInformationIconListComponent__Setup(
            (HorizontalQuestInformationIconListComponent_o *)Instance,
            boardItem->fields._QuestId_k__BackingField,
            0LL);
        }
      }
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance
        || (Instance = QuestTree__GetQuestInfo((QuestTree_o *)Instance, boardItem->fields._QuestId_k__BackingField, 0LL)) == 0LL )
      {
LABEL_64:
        sub_1B8880C(Instance, v10);
      }
      v23 = *((_QWORD *)Instance + 18);
      v20 = (MapControl_QuestInfo_o *)Instance;
      if ( v23 >= 1 )
      {
        Instance = MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_64;
        if ( !QuestEntity__HasFlag((QuestEntity_o *)Instance, 32LL, 0LL) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v24 = LocalizationManager__Get((System_String_o *)StringLiteral_8654/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, 0LL);
          v25 = LocalizationManager__Get((System_String_o *)StringLiteral_13341/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
          RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(v23, -1LL, 0LL);
          Instance = System_String__Format(v25, RestTime2, 0LL);
          restTimeLabel = this->fields.restTimeLabel;
          v10 = (System_String_o *)Instance;
          if ( boardItem->fields._IsLocked_k__BackingField )
          {
            Instance = System_String__Format(v24, (Il2CppObject *)Instance, 0LL);
            v10 = (System_String_o *)Instance;
          }
          if ( restTimeLabel )
          {
            UILabel__set_text(restTimeLabel, v10, 0LL);
            goto LABEL_50;
          }
          goto LABEL_64;
        }
      }
    }
LABEL_50:
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
      MissionNaviTransitionBoardItemDraw__SetBoardImage(this, v29);
    enableMask = (UnityEngine_Object_o *)this->fields.enableMask;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(enableMask, 0LL, 0LL) )
      MissionNaviTransitionBoardItemDraw__SetMaskImage(this, v31);
    iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
      MissionNaviTransitionBoardItemDraw__SetIconImage(this, boardItem, v20, v33);
    ((void (__fastcall *)(MissionNaviTransitionBoardItemDraw_o *, MissionNaviTransitionBoardItem_o *, void *))this->klass->vtable._5_SetLockNaviBoard.method)(
      this,
      boardItem,
      this->klass[1]._1.image);
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
    sub_1B8880C(this, boardItem);
  }
}


void __fastcall MissionNaviTransitionBoardItemDraw__SetMaskImage(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  UISprite_o *enableMask; // x20
  __int64 v4; // x1
  struct UISprite_o *v5; // x0

  if ( (byte_4A5E430 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&StringLiteral_20334/*"img_list_bg03"*/);
    byte_4A5E430 = 1;
  }
  enableMask = this->fields.enableMask;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(enableMask, (System_String_o *)StringLiteral_20334/*"img_list_bg03"*/, 0LL);
  v5 = this->fields.enableMask;
  if ( !v5 )
    sub_1B8880C(0LL, v4);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v5->klass->vtable._33_MakePixelPerfect.method)(
    v5,
    v5->klass->vtable._34_get_minWidth.methodPtr);
}