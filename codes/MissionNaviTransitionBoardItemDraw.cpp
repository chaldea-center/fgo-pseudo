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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct UISprite_o *v20; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4B3AC74 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B3AC74 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( v4 )
  {
    v12 = this->fields.baseSprite;
    if ( !v12
      || (mAtlas = v12->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.baseAtlas, (int64_t)mAtlas, v6, v7, v8, v9, v10, v11),
          (v20 = this->fields.baseSprite) == 0LL) )
    {
      sub_1BD36B4(v4, v5);
    }
    mSpriteName = v20->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&this->fields.baseSpriteName,
      (int64_t)mSpriteName,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
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

  if ( (byte_4B3AC7C & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B3AC7C = 1;
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
    sub_1BD36B4(v5, v4);
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

  if ( (byte_4B3AC7B & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, method);
    sub_1BD3458(&Method_System_Linq_Enumerable_Contains_int___, v3);
    sub_1BD3458(&StringLiteral_24927/*"war_"*/, v4);
    sub_1BD3458(&StringLiteral_19371/*"event_"*/, v5);
    sub_1BD3458(&StringLiteral_1/*""*/, v6);
    byte_4B3AC7B = 1;
  }
  if ( !warInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  Mine = MapControl_WarInfo__GetMine(warInfo, 0LL);
  if ( !Mine )
    sub_1BD36B4(0LL, v8);
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
         (const MethodInfo_2F49970 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
LABEL_12:
    v13 = (_DWORD)v9 + 16;
    v14 = &StringLiteral_24927/*"war_"*/;
  }
  else
  {
    v13 = (_DWORD)v9 + 96;
    v14 = &StringLiteral_19371/*"event_"*/;
  }
  v15 = System_Int32__ToString(v13, 0LL);
  return System_String__Concat_62525248((System_String_o *)*v14, v15, 0LL);
}


void __fastcall MissionNaviTransitionBoardItemDraw__OnClickButton(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct MissionNaviTransitionBoardItem_o *naviBoardItem; // x8

  if ( (byte_4B3AC7A & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B3AC7A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetMissionNaviTransitionConfirmDialogState((CommonUI_o *)Instance, 4, 0LL),
        (naviBoardItem = this->fields.naviBoardItem) == 0LL) )
  {
    sub_1BD36B4(Instance, v4);
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

  if ( (byte_4B3AC76 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, boardItem);
    byte_4B3AC76 = 1;
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
      sub_1BD36B4(v6, v7);
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

  if ( (byte_4B3AC77 & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_20583/*"img_list_bg03"*/, v3);
    byte_4B3AC77 = 1;
  }
  baseSprite = this->fields.baseSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(baseSprite, (System_String_o *)StringLiteral_20583/*"img_list_bg03"*/, 0LL);
  v6 = this->fields.baseSprite;
  if ( !v6 )
    sub_1BD36B4(0LL, v5);
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
  if ( (byte_4B3AC79 & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, item);
    sub_1BD3458(&StringLiteral_23564/*"shortcut_board_icon_"*/, v7);
    sub_1BD3458(&StringLiteral_23571/*"shortcut_board_icon_mainquest"*/, v8);
    sub_1BD3458(&StringLiteral_23581/*"shortcut_board_icon_war_"*/, v9);
    sub_1BD3458(&StringLiteral_1/*""*/, v10);
    sub_1BD3458(&StringLiteral_23566/*"shortcut_board_icon_event_"*/, v11);
    this = (MissionNaviTransitionBoardItemDraw_o *)sub_1BD3458(&StringLiteral_23567/*"shortcut_board_icon_freequest"*/, v12);
    byte_4B3AC79 = 1;
  }
  if ( !item )
    goto LABEL_27;
  if ( !System_String__IsNullOrEmpty(item->fields._IconName_k__BackingField, 0LL) )
  {
    iconSprite = v6->fields.iconSprite;
    v16 = System_String__Concat_62525248(
            (System_String_o *)StringLiteral_23564/*"shortcut_board_icon_"*/,
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
      v14 = &StringLiteral_23571/*"shortcut_board_icon_mainquest"*/;
      goto LABEL_14;
    }
    if ( QuestType == 2 )
    {
      v14 = &StringLiteral_23567/*"shortcut_board_icon_freequest"*/;
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
          v22 = &StringLiteral_23566/*"shortcut_board_icon_event_"*/;
        }
        else
        {
          v21 = System_Int32__ToString(v20 + 16, 0LL);
          v22 = &StringLiteral_23581/*"shortcut_board_icon_war_"*/;
        }
        v19 = System_String__Concat_62525248((System_String_o *)*v22, v21, 0LL);
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
    sub_1BD36B4(this, item);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  void *Instance; // x0
  System_String_o *v23; // x1
  System_String_o *Name_k__BackingField; // x21
  struct UILabel_o *nameLabel; // x8
  int mFontSize; // w9
  struct System_String_o *v27; // x8
  int stringLength; // w8
  float v29; // s8
  float v30; // s8
  System_String_o *v31; // x2
  unsigned int v32; // w8
  MapControl_QuestInfo_o *v33; // x21
  UnityEngine_Object_o *rewardInformationComponent; // x21
  UnityEngine_Object_o *enemyInformationComponent; // x21
  int64_t v36; // x22
  System_String_o *v37; // x23
  System_String_o *v38; // x24
  Il2CppObject *RestTime2; // x0
  UILabel_o *restTimeLabel; // x22
  UnityEngine_Object_o *baseSprite; // x22
  const MethodInfo *v42; // x1
  UnityEngine_Object_o *enableMask; // x22
  const MethodInfo *v44; // x1
  UnityEngine_Object_o *iconSprite; // x22
  const MethodInfo *v46; // x3

  if ( (byte_4B3AC75 & 1) == 0 )
  {
    sub_1BD3458(&LocalizationManager_TypeInfo, boardItem);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v11);
    sub_1BD3458(&Method_SingletonTemplate_QuestTree__get_Instance__, v12);
    sub_1BD3458(&StringLiteral_43/*"\n"*/, v13);
    sub_1BD3458(&StringLiteral_13523/*"TIME_REST_QUEST_BOARD_QUEST"*/, v14);
    sub_1BD3458(&StringLiteral_8794/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, v15);
    byte_4B3AC75 = 1;
  }
  if ( boardItem )
  {
    this->fields.naviBoardItem = boardItem;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&this->fields.naviBoardItem,
      (int64_t)boardItem,
      (int64_t)listViewManager,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.naviListViewManager = listViewManager;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&this->fields.naviListViewManager,
      (int64_t)listViewManager,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
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
      v23 = mFontSize < 1 ? 0LL : (System_String_o *)(unsigned int)(nameLabel->fields.mWidth / mFontSize);
      v27 = boardItem->fields._Name_k__BackingField;
      if ( !v27 )
        goto LABEL_64;
      stringLength = v27->fields._stringLength;
      if ( stringLength <= 2 * (int)v23 )
      {
        if ( stringLength <= (int)v23 )
          goto LABEL_22;
        v31 = (System_String_o *)StringLiteral_43/*"\n"*/;
      }
      else
      {
        v29 = (float)stringLength;
        if ( !byte_4B31FBE )
        {
          sub_1BD3458(&System_Math_TypeInfo, v23);
          byte_4B31FBE = 1;
        }
        v30 = v29 * 0.5;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v31 = (System_String_o *)StringLiteral_43/*"\n"*/;
        v32 = vcvtps_s32_f32(v30);
        if ( ceilf(v30) == INFINITY )
          LODWORD(v23) = 0x80000000;
        else
          LODWORD(v23) = v32;
      }
      Name_k__BackingField = System_String__Insert(Name_k__BackingField, (int32_t)v23, v31, 0LL);
    }
LABEL_22:
    Instance = this->fields.nameLabel;
    if ( !Instance )
      goto LABEL_64;
    UILabel__set_text((UILabel_o *)Instance, Name_k__BackingField, 0LL);
    v33 = 0LL;
    if ( boardItem->fields._BoardType_k__BackingField == 1 )
    {
      if ( !boardItem->fields._QuestId_k__BackingField )
      {
        v33 = 0LL;
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
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance
        || (Instance = QuestTree__GetQuestInfo((QuestTree_o *)Instance, boardItem->fields._QuestId_k__BackingField, 0LL)) == 0LL )
      {
LABEL_64:
        sub_1BD36B4(Instance, v23);
      }
      v36 = *((_QWORD *)Instance + 18);
      v33 = (MapControl_QuestInfo_o *)Instance;
      if ( v36 >= 1 )
      {
        Instance = MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_64;
        if ( !QuestEntity__HasFlag((QuestEntity_o *)Instance, 32LL, 0LL) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v37 = LocalizationManager__Get((System_String_o *)StringLiteral_8794/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, 0LL);
          v38 = LocalizationManager__Get((System_String_o *)StringLiteral_13523/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
          RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(v36, -1LL, 0LL);
          Instance = System_String__Format(v38, RestTime2, 0LL);
          restTimeLabel = this->fields.restTimeLabel;
          v23 = (System_String_o *)Instance;
          if ( boardItem->fields._IsLocked_k__BackingField )
          {
            Instance = System_String__Format(v37, (Il2CppObject *)Instance, 0LL);
            v23 = (System_String_o *)Instance;
          }
          if ( restTimeLabel )
          {
            UILabel__set_text(restTimeLabel, v23, 0LL);
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
      MissionNaviTransitionBoardItemDraw__SetBoardImage(this, v42);
    enableMask = (UnityEngine_Object_o *)this->fields.enableMask;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(enableMask, 0LL, 0LL) )
      MissionNaviTransitionBoardItemDraw__SetMaskImage(this, v44);
    iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
      MissionNaviTransitionBoardItemDraw__SetIconImage(this, boardItem, v33, v46);
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
    sub_1BD36B4(this, boardItem);
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

  if ( (byte_4B3AC78 & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_20583/*"img_list_bg03"*/, v3);
    byte_4B3AC78 = 1;
  }
  enableMask = this->fields.enableMask;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(enableMask, (System_String_o *)StringLiteral_20583/*"img_list_bg03"*/, 0LL);
  v6 = this->fields.enableMask;
  if ( !v6 )
    sub_1BD36B4(0LL, v5);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
    v6,
    v6->klass->vtable._34_get_minWidth.methodPtr);
}