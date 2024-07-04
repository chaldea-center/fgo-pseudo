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

  if ( (byte_48E5B07 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E5B07 = 1;
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
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v6, v7),
          (v12 = this->fields.baseSprite) == 0LL) )
    {
      sub_1B00F28(v4, v5);
    }
    mSpriteName = v12->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.baseSpriteName, (int32_t)mSpriteName, v10, v11);
  }
}


void __fastcall MissionNaviTransitionBoardItemDraw__CheckSerializeFieldAssertion(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MissionNaviTransitionBoardItemDraw__OnClickButton(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  struct MissionNaviTransitionBoardItem_o *naviBoardItem; // x8

  naviBoardItem = this->fields.naviBoardItem;
  if ( !naviBoardItem )
    sub_1B00F28(this, method);
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

  if ( (byte_48E5B09 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, boardItem);
    byte_48E5B09 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (struct UICommonButton_o *)UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( !boardItem || (v6 = this->fields.baseButton) == 0LL )
      sub_1B00F28(v6, v7);
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

  if ( (byte_48E5B0A & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_20058/*"img_list_bg03"*/, v3);
    byte_48E5B0A = 1;
  }
  baseSprite = this->fields.baseSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(baseSprite, (System_String_o *)StringLiteral_20058/*"img_list_bg03"*/, 0LL);
  v6 = this->fields.baseSprite;
  if ( !v6 )
    sub_1B00F28(0LL, v5);
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
  int v9; // w21
  bool IsEvent; // w0
  UISprite_o *iconSprite; // x20
  System_String_o *v12; // x0
  __int64 *v13; // x8
  System_String_o *v14; // x21

  v6 = this;
  if ( (byte_48E5B0C & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, item);
    sub_1B00CCC(&StringLiteral_22955/*"shortcut_board_icon_war_"*/, v7);
    this = (MissionNaviTransitionBoardItemDraw_o *)sub_1B00CCC(&StringLiteral_22954/*"shortcut_board_icon_event_"*/, v8);
    byte_48E5B0C = 1;
  }
  if ( !item )
    goto LABEL_16;
  if ( !questInfo || item->fields._BoardType_k__BackingField != 1 )
    goto LABEL_14;
  this = (MissionNaviTransitionBoardItemDraw_o *)questInfo->fields._WarInfo_k__BackingField;
  if ( !this
    || (this = (MissionNaviTransitionBoardItemDraw_o *)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1B00F28(this, item);
  }
  v9 = (int)this;
  IsEvent = WarEntity__IsEvent((WarEntity_o *)this, 0LL);
  iconSprite = v6->fields.iconSprite;
  if ( IsEvent )
  {
    v12 = System_Int32__ToString(v9 + 96, 0LL);
    v13 = &StringLiteral_22954/*"shortcut_board_icon_event_"*/;
  }
  else
  {
    v12 = System_Int32__ToString(v9 + 16, 0LL);
    v13 = &StringLiteral_22955/*"shortcut_board_icon_war_"*/;
  }
  v14 = System_String__Concat_60325748((System_String_o *)*v13, v12, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(iconSprite, v14, 0LL);
LABEL_14:
  this = (MissionNaviTransitionBoardItemDraw_o *)v6->fields.iconSprite;
  if ( !this )
    goto LABEL_16;
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x1
  void *nameLabel; // x0
  MapControl_QuestInfo_o *v15; // x21
  UnityEngine_Object_o *rewardInformationComponent; // x21
  UnityEngine_Object_o *enemyInformationComponent; // x21
  int64_t v18; // x22
  System_String_o *v19; // x23
  System_String_o *v20; // x24
  Il2CppObject *RestTime2; // x0
  UILabel_o *restTimeLabel; // x22
  UnityEngine_Object_o *baseSprite; // x22
  const MethodInfo *v24; // x1
  UnityEngine_Object_o *enableMask; // x22
  const MethodInfo *v26; // x1
  UnityEngine_Object_o *iconSprite; // x22
  const MethodInfo *v28; // x3

  if ( (byte_48E5B08 & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, boardItem);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    sub_1B00CCC(&Method_SingletonTemplate_QuestTree__get_Instance__, v8);
    sub_1B00CCC(&StringLiteral_13124/*"TIME_REST_QUEST_BOARD_QUEST"*/, v9);
    sub_1B00CCC(&StringLiteral_8557/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, v10);
    byte_48E5B08 = 1;
  }
  if ( boardItem )
  {
    this->fields.naviBoardItem = boardItem;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&this->fields.naviBoardItem,
      (int32_t)boardItem,
      (int32_t)listViewManager,
      (int32_t)method);
    this->fields.naviListViewManager = listViewManager;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&this->fields.naviListViewManager,
      (int32_t)listViewManager,
      v11,
      v12);
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_46;
    WrapControlText__textAdjust(
      (UILabel_o *)nameLabel,
      boardItem->fields._Name_k__BackingField,
      *((_DWORD *)nameLabel + 106),
      0,
      *((_DWORD *)nameLabel + 110),
      0LL);
    nameLabel = this->fields.detailTextLabel;
    if ( !nameLabel )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)nameLabel, boardItem->fields._DetailText_k__BackingField, 0LL);
    v15 = 0LL;
    if ( boardItem->fields._BoardType_k__BackingField == 1 )
    {
      if ( !boardItem->fields._QuestId_k__BackingField )
      {
        v15 = 0LL;
        goto LABEL_32;
      }
      rewardInformationComponent = (UnityEngine_Object_o *)this->fields.rewardInformationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(rewardInformationComponent, 0LL, 0LL)
        && !boardItem->fields._IsLocked_k__BackingField )
      {
        nameLabel = this->fields.rewardInformationComponent;
        if ( !nameLabel )
          goto LABEL_46;
        HorizontalQuestInformationIconListComponent__Setup(
          (HorizontalQuestInformationIconListComponent_o *)nameLabel,
          boardItem->fields._QuestId_k__BackingField,
          0LL);
      }
      enemyInformationComponent = (UnityEngine_Object_o *)this->fields.enemyInformationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(enemyInformationComponent, 0LL, 0LL)
        && !boardItem->fields._IsLocked_k__BackingField )
      {
        nameLabel = this->fields.enemyInformationComponent;
        if ( !nameLabel )
          goto LABEL_46;
        HorizontalQuestInformationIconListComponent__Setup(
          (HorizontalQuestInformationIconListComponent_o *)nameLabel,
          boardItem->fields._QuestId_k__BackingField,
          0LL);
      }
      nameLabel = SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !nameLabel
        || (nameLabel = QuestTree__GetQuestInfo(
                          (QuestTree_o *)nameLabel,
                          boardItem->fields._QuestId_k__BackingField,
                          0LL)) == 0LL )
      {
LABEL_46:
        sub_1B00F28(nameLabel, v13);
      }
      v18 = *((_QWORD *)nameLabel + 18);
      v15 = (MapControl_QuestInfo_o *)nameLabel;
      if ( v18 >= 1 )
      {
        nameLabel = MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)nameLabel, 0LL);
        if ( !nameLabel )
          goto LABEL_46;
        if ( !QuestEntity__HasFlag((QuestEntity_o *)nameLabel, 32LL, 0LL) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8557/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, 0LL);
          v20 = LocalizationManager__Get((System_String_o *)StringLiteral_13124/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
          RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(v18, -1LL, 0LL);
          nameLabel = System_String__Format(v20, RestTime2, 0LL);
          restTimeLabel = this->fields.restTimeLabel;
          v13 = (System_String_o *)nameLabel;
          if ( boardItem->fields._IsLocked_k__BackingField )
          {
            nameLabel = System_String__Format(v19, (Il2CppObject *)nameLabel, 0LL);
            v13 = (System_String_o *)nameLabel;
          }
          if ( restTimeLabel )
          {
            UILabel__set_text(restTimeLabel, v13, 0LL);
            goto LABEL_32;
          }
          goto LABEL_46;
        }
      }
    }
LABEL_32:
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
      MissionNaviTransitionBoardItemDraw__SetBoardImage(this, v24);
    enableMask = (UnityEngine_Object_o *)this->fields.enableMask;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(enableMask, 0LL, 0LL) )
      MissionNaviTransitionBoardItemDraw__SetMaskImage(this, v26);
    iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
      MissionNaviTransitionBoardItemDraw__SetIconImage(this, boardItem, v15, v28);
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
    sub_1B00F28(this, boardItem);
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

  if ( (byte_48E5B0B & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_20058/*"img_list_bg03"*/, v3);
    byte_48E5B0B = 1;
  }
  enableMask = this->fields.enableMask;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(enableMask, (System_String_o *)StringLiteral_20058/*"img_list_bg03"*/, 0LL);
  v6 = this->fields.enableMask;
  if ( !v6 )
    sub_1B00F28(0LL, v5);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
    v6,
    v6->klass->vtable._34_get_minWidth.methodPtr);
}