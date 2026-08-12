void MissionNaviTransitionBoardItemDraw___ctor(MissionNaviTransitionBoardItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MissionNaviTransitionBoardItemDraw__Awake(MissionNaviTransitionBoardItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct UISprite_o *v13; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct UISprite_o *v21; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_596A0DC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A0DC = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( v5 )
  {
    v13 = this->fields.baseSprite;
    if ( !v13
      || (mAtlas = v13->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.baseAtlas,
            (int32_t)mAtlas,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12),
          (v21 = this->fields.baseSprite) == 0) )
    {
      sub_2213CDC(v5, v6);
    }
    mSpriteName = v21->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseSpriteName,
      (int32_t)mSpriteName,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
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
  __int64 v2; // x2
  UnityEngine_Object_o *rewardInformationComponent; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  HorizontalQuestInformationIconListComponent_o *v7; // x0
  UnityEngine_Object_o *enemyInformationComponent; // x20

  if ( (byte_596A0E4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A0E4 = 1;
  }
  rewardInformationComponent = (UnityEngine_Object_o *)this->fields.rewardInformationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(rewardInformationComponent, 0, 0) )
  {
    v7 = this->fields.rewardInformationComponent;
    if ( !v7 )
      goto LABEL_14;
    HorizontalQuestInformationIconListComponent__DeleteCallback(v7, 0);
  }
  enemyInformationComponent = (UnityEngine_Object_o *)this->fields.enemyInformationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(enemyInformationComponent, 0, 0) )
  {
    v7 = this->fields.enemyInformationComponent;
    if ( v7 )
    {
      HorizontalQuestInformationIconListComponent__DeleteCallback(v7, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(v7, v5);
  }
}


System_String_o *MissionNaviTransitionBoardItemDraw__GetIconNameByWarInfo(
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  WarEntity_o *Mine; // x0
  __int64 v4; // x1
  WarEntity_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  BalanceConfig_c *v8; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 id; // x1
  int32_t v11; // w0
  __int64 *v12; // x20
  System_String_o *v13; // x0

  if ( (byte_596A0E3 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&StringLiteral_26130/*"war_"*/);
    sub_2213A60(&StringLiteral_20051/*"event_"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A0E3 = 1;
  }
  if ( !warInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  Mine = MapControl_WarInfo__GetMine(warInfo, 0);
  if ( !Mine )
    sub_2213CDC(0, v4);
  v5 = Mine;
  if ( !WarEntity__IsEvent(Mine, 0) )
    goto LABEL_12;
  v8 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v7);
    v8 = BalanceConfig_TypeInfo;
  }
  static_fields = v8->static_fields;
  id = (unsigned int)v5->fields.id;
  if ( static_fields->FesWarId == (_DWORD)id )
    goto LABEL_12;
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, id, v7);
    LODWORD(id) = v5->fields.id;
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  if ( System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->MainChaptersWithEventId,
         id,
         (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
LABEL_12:
    v11 = (_DWORD)v5 + 16;
    v12 = &StringLiteral_26130/*"war_"*/;
  }
  else
  {
    v11 = (_DWORD)v5 + 96;
    v12 = &StringLiteral_20051/*"event_"*/;
  }
  v13 = System_Int32__ToString(v11, 0);
  return System_String__Concat_75651716((System_String_o *)*v12, v13, 0);
}


void MissionNaviTransitionBoardItemDraw__OnClickButton(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct MissionNaviTransitionBoardItem_o *naviBoardItem; // x8

  if ( (byte_596A0E2 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A0E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetMissionNaviTransitionConfirmDialogState((CommonUI_o *)Instance, 4, 0),
        (naviBoardItem = this->fields.naviBoardItem) == 0) )
  {
    sub_2213CDC(Instance, v4);
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
  __int64 v7; // x1
  struct UICommonButton_o *v8; // x8
  float v9; // s0

  if ( (byte_596A0DE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A0DE = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, boardItem, method);
  v6 = (struct UICommonButton_o *)UnityEngine_Object__op_Equality(baseButton, 0, 0);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( !boardItem )
      goto LABEL_12;
    v8 = this->fields.baseButton;
    if ( !v8 )
      goto LABEL_12;
    v9 = 1.0;
    if ( !boardItem->fields._IsLocked_k__BackingField )
      v9 = 0.5;
    v8->fields.specifyDisabledColor.fields.a = 1.0;
    v8->fields.specifyDisabledColor.fields.r = v9;
    v8->fields.specifyDisabledColor.fields.g = v9;
    v8->fields.specifyDisabledColor.fields.b = v9;
    v6 = this->fields.baseButton;
    if ( !v6 )
LABEL_12:
      sub_2213CDC(v6, v7);
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
  __int64 v2; // x2
  UISprite_o *baseSprite; // x20
  __int64 v5; // x1
  struct UISprite_o *v6; // x0

  if ( (byte_596A0DF & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_21411/*"img_list_bg03"*/);
    byte_596A0DF = 1;
  }
  baseSprite = this->fields.baseSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v2);
  AtlasManager__SetBanner(baseSprite, (System_String_o *)StringLiteral_21411/*"img_list_bg03"*/, 0);
  v6 = this->fields.baseSprite;
  if ( !v6 )
    sub_2213CDC(0, v5);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
    v6,
    v6->klass->vtable._33_MakePixelPerfect.method);
}


void MissionNaviTransitionBoardItemDraw__SetIconImage(
        MissionNaviTransitionBoardItemDraw_o *this,
        MissionNaviTransitionBoardItem_o *item,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItemDraw_o *v6; // x19
  int32_t QuestType; // w0
  __int64 v8; // x2
  __int64 *v9; // x8
  UISprite_o *iconSprite; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *v13; // x21
  UISprite_o *v14; // x0
  System_String_o *v15; // x1
  System_String_o *v16; // x20
  int v17; // w20
  System_String_o *v18; // x0
  __int64 *v19; // x8
  UISprite_o *v20; // x21

  v6 = this;
  if ( (byte_596A0E1 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_24683/*"shortcut_board_icon_"*/);
    sub_2213A60(&StringLiteral_24690/*"shortcut_board_icon_mainquest"*/);
    sub_2213A60(&StringLiteral_24700/*"shortcut_board_icon_war_"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_24685/*"shortcut_board_icon_event_"*/);
    this = (MissionNaviTransitionBoardItemDraw_o *)sub_2213A60(&StringLiteral_24686/*"shortcut_board_icon_freequest"*/);
    byte_596A0E1 = 1;
  }
  if ( !item )
    goto LABEL_27;
  if ( !System_String__IsNullOrEmpty(item->fields._IconName_k__BackingField, 0) )
  {
    iconSprite = v6->fields.iconSprite;
    v13 = System_String__Concat_75651716(
            (System_String_o *)StringLiteral_24683/*"shortcut_board_icon_"*/,
            item->fields._IconName_k__BackingField,
            0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11, v12);
    v14 = iconSprite;
    v15 = v13;
    goto LABEL_24;
  }
  if ( questInfo && item->fields._BoardType_k__BackingField == 1 )
  {
    QuestType = MapControl_QuestInfo__GetQuestType(questInfo, 0);
    if ( QuestType == 1 )
    {
      v9 = &StringLiteral_24690/*"shortcut_board_icon_mainquest"*/;
      goto LABEL_14;
    }
    if ( QuestType == 2 )
    {
      v9 = &StringLiteral_24686/*"shortcut_board_icon_freequest"*/;
LABEL_14:
      v16 = (System_String_o *)*v9;
      goto LABEL_21;
    }
    this = (MissionNaviTransitionBoardItemDraw_o *)questInfo->fields._WarInfo_k__BackingField;
    if ( this )
    {
      this = (MissionNaviTransitionBoardItemDraw_o *)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0);
      if ( this )
      {
        v17 = (int)this;
        if ( WarEntity__IsEvent((WarEntity_o *)this, 0) )
        {
          v18 = System_Int32__ToString(v17 + 96, 0);
          v19 = &StringLiteral_24685/*"shortcut_board_icon_event_"*/;
        }
        else
        {
          v18 = System_Int32__ToString(v17 + 16, 0);
          v19 = &StringLiteral_24700/*"shortcut_board_icon_war_"*/;
        }
        v16 = System_String__Concat_75651716((System_String_o *)*v19, v18, 0);
LABEL_21:
        v20 = v6->fields.iconSprite;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item, v8);
        v14 = v20;
        v15 = v16;
LABEL_24:
        AtlasManager__SetBanner(v14, v15, 0);
        goto LABEL_25;
      }
    }
LABEL_27:
    sub_2213CDC(this, item);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UILabel_o *Instance; // x0
  __int64 v18; // x1
  System_String_o *Name_k__BackingField; // x21
  __int64 v20; // x2
  struct UILabel_o *nameLabel; // x8
  int mFontSize; // w9
  struct System_String_o *v23; // x8
  signed int stringLength; // w23
  float v25; // s8
  unsigned int v26; // w9
  __int64 v27; // x1
  __int64 v28; // x2
  MapControl_QuestInfo_o *v29; // x21
  UnityEngine_Object_o *rewardInformationComponent; // x21
  __int64 v31; // x2
  UnityEngine_Object_o *enemyInformationComponent; // x21
  MapControl_QuestInfo_o *QuestInfo; // x0
  int32_t questId; // w2
  Il2CppObject *v35; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  System_String_o *v38; // x22
  int64_t v39; // x23
  System_String_o *v40; // x0
  Il2CppObject *RestTime2; // x0
  UILabel_o *restTimeLabel; // x23
  UnityEngine_Object_o *baseSprite; // x22
  const MethodInfo *v44; // x1
  __int64 v45; // x2
  UnityEngine_Object_o *enableMask; // x22
  const MethodInfo *v47; // x1
  __int64 v48; // x2
  UnityEngine_Object_o *iconSprite; // x22
  const MethodInfo *v50; // x3
  System_String_o *v52; // [xsp+0h] [xbp-50h] BYREF
  int64_t endedAt; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596A0DD & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_13987/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_2213A60(&StringLiteral_9048/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/);
    byte_596A0DD = 1;
  }
  v52 = 0;
  endedAt = 0;
  if ( boardItem )
  {
    this->fields.naviBoardItem = boardItem;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.naviBoardItem,
      (int32_t)boardItem,
      (System_String_o *)listViewManager,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.naviListViewManager = listViewManager;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.naviListViewManager,
      (int32_t)listViewManager,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    Name_k__BackingField = boardItem->fields._Name_k__BackingField;
    if ( !Name_k__BackingField )
      goto LABEL_71;
    Instance = (UILabel_o *)System_String__Contains(
                              boardItem->fields._Name_k__BackingField,
                              (System_String_o *)StringLiteral_43/*"\n"*/,
                              0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      goto LABEL_21;
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_71;
    mFontSize = nameLabel->fields.mFontSize;
    v18 = mFontSize < 1 ? 0LL : (unsigned int)(nameLabel->fields.mWidth / mFontSize);
    v23 = boardItem->fields._Name_k__BackingField;
    if ( !v23 )
      goto LABEL_71;
    stringLength = v23->fields._stringLength;
    if ( stringLength <= 2 * (int)v18 )
    {
      if ( stringLength <= (int)v18 )
      {
LABEL_21:
        Instance = this->fields.nameLabel;
        if ( !Instance )
          goto LABEL_71;
        UILabel__set_text(Instance, Name_k__BackingField, 0);
        v29 = 0;
        if ( boardItem->fields._BoardType_k__BackingField != 1 )
          goto LABEL_57;
        if ( !boardItem->fields._QuestId_k__BackingField )
        {
          v29 = 0;
          goto LABEL_57;
        }
        if ( !boardItem->fields._IsNotDisplayQuestInfo_k__BackingField )
        {
          rewardInformationComponent = (UnityEngine_Object_o *)this->fields.rewardInformationComponent;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
          if ( UnityEngine_Object__op_Inequality(rewardInformationComponent, 0, 0)
            && !boardItem->fields._IsLocked_k__BackingField )
          {
            Instance = (UILabel_o *)this->fields.rewardInformationComponent;
            if ( !Instance )
              goto LABEL_71;
            HorizontalQuestInformationIconListComponent__Setup(
              (HorizontalQuestInformationIconListComponent_o *)Instance,
              boardItem->fields._QuestId_k__BackingField,
              0);
          }
          enemyInformationComponent = (UnityEngine_Object_o *)this->fields.enemyInformationComponent;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v31);
          if ( UnityEngine_Object__op_Inequality(enemyInformationComponent, 0, 0)
            && !boardItem->fields._IsLocked_k__BackingField )
          {
            Instance = (UILabel_o *)this->fields.enemyInformationComponent;
            if ( !Instance )
              goto LABEL_71;
            HorizontalQuestInformationIconListComponent__Setup(
              (HorizontalQuestInformationIconListComponent_o *)Instance,
              boardItem->fields._QuestId_k__BackingField,
              0);
          }
        }
        Instance = (UILabel_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Instance )
LABEL_71:
          sub_2213CDC(Instance, v18);
        QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, boardItem->fields._QuestId_k__BackingField, 0);
        v29 = QuestInfo;
        if ( !QuestInfo )
          goto LABEL_57;
        Instance = (UILabel_o *)MapControl_QuestInfo__GetMine(QuestInfo, 0);
        if ( !Instance )
          goto LABEL_71;
        if ( QuestEntity__HasFlag((QuestEntity_o *)Instance, 32, 0) )
        {
LABEL_57:
          baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
          if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
            MissionNaviTransitionBoardItemDraw__SetBoardImage(this, v44);
          enableMask = (UnityEngine_Object_o *)this->fields.enableMask;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44, v45);
          if ( UnityEngine_Object__op_Inequality(enableMask, 0, 0) )
            MissionNaviTransitionBoardItemDraw__SetMaskImage(this, v47);
          iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47, v48);
          if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
            MissionNaviTransitionBoardItemDraw__SetIconImage(this, boardItem, v29, v50);
          ((void (__fastcall *)(MissionNaviTransitionBoardItemDraw_o *, MissionNaviTransitionBoardItem_o *, const MethodInfo *))this->klass->vtable._5_SetLockNaviBoard.methodPtr)(
            this,
            boardItem,
            this->klass->vtable._5_SetLockNaviBoard.method);
          return boardItem != 0;
        }
        questId = v29->fields.questId;
        endedAt = 0;
        v35 = **(Il2CppObject ***)(qword_5984390 + 184);
        if ( QuestMaster__TryGetPrivilegePeriodMessage(&v52, &endedAt, questId, 0) )
        {
          v38 = v52;
          v39 = endedAt;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36, v37);
        }
        else
        {
          endedAt = v29->fields.endTime;
          if ( endedAt < 1 )
            goto LABEL_50;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36, v37);
          v40 = LocalizationManager__Get((System_String_o *)StringLiteral_13987/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0);
          v39 = endedAt;
          v38 = v40;
        }
        RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(v39, -1, 0);
        v35 = (Il2CppObject *)System_String__Format(v38, RestTime2, 0);
LABEL_50:
        if ( !System_String__IsNullOrEmpty((System_String_o *)v35, 0) )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
          Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9048/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, 0);
          restTimeLabel = this->fields.restTimeLabel;
          if ( boardItem->fields._IsLocked_k__BackingField )
          {
            Instance = (UILabel_o *)System_String__Format((System_String_o *)Instance, v35, 0);
            v35 = (Il2CppObject *)Instance;
          }
          if ( restTimeLabel )
          {
            UILabel__set_text(restTimeLabel, (System_String_o *)v35, 0);
            goto LABEL_57;
          }
          goto LABEL_71;
        }
        goto LABEL_57;
      }
    }
    else
    {
      if ( !byte_596A15B )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_596A15B = 1;
      }
      v25 = vcvts_n_f32_s32(stringLength, 1u);
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v18, v20);
      v26 = vcvtps_s32_f32(v25);
      if ( ceilf(v25) == INFINITY )
        LODWORD(v18) = 0x80000000;
      else
        LODWORD(v18) = v26;
    }
    Name_k__BackingField = System_String__Insert(Name_k__BackingField, v18, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
    goto LABEL_21;
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
    sub_2213CDC(this, boardItem);
  }
}


void MissionNaviTransitionBoardItemDraw__SetMaskImage(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UISprite_o *enableMask; // x20
  __int64 v5; // x1
  struct UISprite_o *v6; // x0

  if ( (byte_596A0E0 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_21411/*"img_list_bg03"*/);
    byte_596A0E0 = 1;
  }
  enableMask = this->fields.enableMask;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v2);
  AtlasManager__SetBanner(enableMask, (System_String_o *)StringLiteral_21411/*"img_list_bg03"*/, 0);
  v6 = this->fields.enableMask;
  if ( !v6 )
    sub_2213CDC(0, v5);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
    v6,
    v6->klass->vtable._33_MakePixelPerfect.method);
}