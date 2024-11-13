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
  __int64 v2; // x2
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct UISprite_o *v13; // x8
  struct UIAtlas_o *mAtlas; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct UISprite_o *v21; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4B19C84 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19C84 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( v5 )
  {
    v13 = this->fields.baseSprite;
    if ( !v13
      || (mAtlas = v13->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseAtlas, (int64_t)mAtlas, v7, v8, v9, v10, v11, v12),
          (v21 = this->fields.baseSprite) == 0LL) )
    {
      sub_1BCAA3C(v5, v6);
    }
    mSpriteName = v21->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.baseSpriteName,
      (int64_t)mSpriteName,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
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
  __int64 v2; // x2
  UnityEngine_Object_o *rewardInformationComponent; // x20
  __int64 v5; // x1
  HorizontalQuestInformationIconListComponent_o *v6; // x0
  UnityEngine_Object_o *enemyInformationComponent; // x20

  if ( (byte_4B19C8C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19C8C = 1;
  }
  rewardInformationComponent = (UnityEngine_Object_o *)this->fields.rewardInformationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(rewardInformationComponent, 0LL, 0LL) )
  {
    v6 = this->fields.rewardInformationComponent;
    if ( !v6 )
      goto LABEL_14;
    HorizontalQuestInformationIconListComponent__DeleteCallback(v6, 0LL);
  }
  enemyInformationComponent = (UnityEngine_Object_o *)this->fields.enemyInformationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(enemyInformationComponent, 0LL, 0LL) )
  {
    v6 = this->fields.enemyInformationComponent;
    if ( v6 )
    {
      HorizontalQuestInformationIconListComponent__DeleteCallback(v6, 0LL);
      return;
    }
LABEL_14:
    sub_1BCAA3C(v6, v5);
  }
}


System_String_o *__fastcall MissionNaviTransitionBoardItemDraw__GetIconNameByWarInfo(
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  WarEntity_o *Mine; // x0
  __int64 v13; // x1
  WarEntity_o *v14; // x19
  __int64 v15; // x1
  BalanceConfig_c *v16; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 id; // x1
  int32_t v19; // w0
  __int64 *v20; // x19
  System_String_o *v21; // x0

  if ( (byte_4B19C8B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v4, v5);
    sub_1BCA7E0(&StringLiteral_24892/*"war_"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_19342/*"event_"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B19C8B = 1;
  }
  if ( !warInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  Mine = MapControl_WarInfo__GetMine(warInfo, 0LL);
  if ( !Mine )
    sub_1BCAA3C(0LL, v13);
  v14 = Mine;
  if ( !WarEntity__IsEvent(Mine, 0LL) )
    goto LABEL_12;
  v16 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15);
    v16 = BalanceConfig_TypeInfo;
  }
  static_fields = v16->static_fields;
  id = (unsigned int)v14->fields.id;
  if ( static_fields->FesWarId == (_DWORD)id )
    goto LABEL_12;
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16, id);
    LODWORD(id) = v14->fields.id;
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  if ( System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->MainChaptersWithEventId,
         id,
         (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___) )
  {
LABEL_12:
    v19 = (_DWORD)v14 + 16;
    v20 = &StringLiteral_24892/*"war_"*/;
  }
  else
  {
    v19 = (_DWORD)v14 + 96;
    v20 = &StringLiteral_19342/*"event_"*/;
  }
  v21 = System_Int32__ToString(v19, 0LL);
  return System_String__Concat_62401220((System_String_o *)*v20, v21, 0LL);
}


void __fastcall MissionNaviTransitionBoardItemDraw__OnClickButton(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct MissionNaviTransitionBoardItem_o *naviBoardItem; // x8

  if ( (byte_4B19C8A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B19C8A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetMissionNaviTransitionConfirmDialogState((CommonUI_o *)Instance, 4, 0LL),
        (naviBoardItem = this->fields.naviBoardItem) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
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

  if ( (byte_4B19C86 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, boardItem, method);
    byte_4B19C86 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, boardItem);
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
      sub_1BCAA3C(v6, v7);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UISprite_o *baseSprite; // x20
  __int64 v7; // x1
  struct UISprite_o *v8; // x0

  if ( (byte_4B19C87 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_20553/*"img_list_bg03"*/, v4, v5);
    byte_4B19C87 = 1;
  }
  baseSprite = this->fields.baseSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
  AtlasManager__SetBanner(baseSprite, (System_String_o *)StringLiteral_20553/*"img_list_bg03"*/, 0LL);
  v8 = this->fields.baseSprite;
  if ( !v8 )
    sub_1BCAA3C(0LL, v7);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._33_MakePixelPerfect.method)(
    v8,
    v8->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall MissionNaviTransitionBoardItemDraw__SetIconImage(
        MissionNaviTransitionBoardItemDraw_o *this,
        MissionNaviTransitionBoardItem_o *item,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItemDraw_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t QuestType; // w0
  __int64 *v20; // x8
  UISprite_o *iconSprite; // x20
  __int64 v22; // x1
  System_String_o *v23; // x21
  UISprite_o *v24; // x0
  System_String_o *v25; // x1
  System_String_o *v26; // x20
  int v27; // w20
  System_String_o *v28; // x0
  __int64 *v29; // x8
  UISprite_o *v30; // x21

  v6 = this;
  if ( (byte_4B19C89 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, questInfo);
    sub_1BCA7E0(&StringLiteral_23529/*"shortcut_board_icon_"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_23536/*"shortcut_board_icon_mainquest"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_23546/*"shortcut_board_icon_war_"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_23531/*"shortcut_board_icon_event_"*/, v15, v16);
    this = (MissionNaviTransitionBoardItemDraw_o *)sub_1BCA7E0(&StringLiteral_23532/*"shortcut_board_icon_freequest"*/, v17, v18);
    byte_4B19C89 = 1;
  }
  if ( !item )
    goto LABEL_27;
  if ( !System_String__IsNullOrEmpty(item->fields._IconName_k__BackingField, 0LL) )
  {
    iconSprite = v6->fields.iconSprite;
    v23 = System_String__Concat_62401220(
            (System_String_o *)StringLiteral_23529/*"shortcut_board_icon_"*/,
            item->fields._IconName_k__BackingField,
            0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22);
    v24 = iconSprite;
    v25 = v23;
    goto LABEL_24;
  }
  if ( questInfo && item->fields._BoardType_k__BackingField == 1 )
  {
    QuestType = MapControl_QuestInfo__GetQuestType(questInfo, 0LL);
    if ( QuestType == 1 )
    {
      v20 = &StringLiteral_23536/*"shortcut_board_icon_mainquest"*/;
      goto LABEL_14;
    }
    if ( QuestType == 2 )
    {
      v20 = &StringLiteral_23532/*"shortcut_board_icon_freequest"*/;
LABEL_14:
      v26 = (System_String_o *)*v20;
      goto LABEL_21;
    }
    this = (MissionNaviTransitionBoardItemDraw_o *)questInfo->fields._WarInfo_k__BackingField;
    if ( this )
    {
      this = (MissionNaviTransitionBoardItemDraw_o *)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
      if ( this )
      {
        v27 = (int)this;
        if ( WarEntity__IsEvent((WarEntity_o *)this, 0LL) )
        {
          v28 = System_Int32__ToString(v27 + 96, 0LL);
          v29 = &StringLiteral_23531/*"shortcut_board_icon_event_"*/;
        }
        else
        {
          v28 = System_Int32__ToString(v27 + 16, 0LL);
          v29 = &StringLiteral_23546/*"shortcut_board_icon_war_"*/;
        }
        v26 = System_String__Concat_62401220((System_String_o *)*v29, v28, 0LL);
LABEL_21:
        v30 = v6->fields.iconSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item);
        v24 = v30;
        v25 = v26;
LABEL_24:
        AtlasManager__SetBanner(v24, v25, 0LL);
        goto LABEL_25;
      }
    }
LABEL_27:
    sub_1BCAA3C(this, item);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  void *Instance; // x0
  System_String_o *v28; // x1
  System_String_o *Name_k__BackingField; // x21
  __int64 v30; // x2
  struct UILabel_o *nameLabel; // x8
  int mFontSize; // w9
  struct System_String_o *v33; // x8
  int stringLength; // w8
  float v35; // s8
  float v36; // s8
  System_String_o *v37; // x2
  unsigned int v38; // w8
  MapControl_QuestInfo_o *v39; // x21
  UnityEngine_Object_o *rewardInformationComponent; // x21
  UnityEngine_Object_o *enemyInformationComponent; // x21
  int64_t v42; // x22
  System_String_o *v43; // x23
  System_String_o *v44; // x24
  Il2CppObject *RestTime2; // x0
  UILabel_o *restTimeLabel; // x22
  UnityEngine_Object_o *baseSprite; // x22
  const MethodInfo *v48; // x1
  UnityEngine_Object_o *enableMask; // x22
  const MethodInfo *v50; // x1
  UnityEngine_Object_o *iconSprite; // x22
  const MethodInfo *v52; // x3

  if ( (byte_4B19C85 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, boardItem, listViewManager);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_13504/*"TIME_REST_QUEST_BOARD_QUEST"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_8780/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, v19, v20);
    byte_4B19C85 = 1;
  }
  if ( boardItem )
  {
    this->fields.naviBoardItem = boardItem;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.naviBoardItem,
      (int64_t)boardItem,
      (int64_t)listViewManager,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.naviListViewManager = listViewManager;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.naviListViewManager,
      (int64_t)listViewManager,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
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
      v28 = mFontSize < 1 ? 0LL : (System_String_o *)(unsigned int)(nameLabel->fields.mWidth / mFontSize);
      v33 = boardItem->fields._Name_k__BackingField;
      if ( !v33 )
        goto LABEL_64;
      stringLength = v33->fields._stringLength;
      if ( stringLength <= 2 * (int)v28 )
      {
        if ( stringLength <= (int)v28 )
          goto LABEL_22;
        v37 = (System_String_o *)StringLiteral_43/*"\n"*/;
      }
      else
      {
        v35 = (float)stringLength;
        if ( !byte_4B1103A )
        {
          sub_1BCA7E0(&System_Math_TypeInfo, v28, v30);
          byte_4B1103A = 1;
        }
        v36 = v35 * 0.5;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v28);
        v37 = (System_String_o *)StringLiteral_43/*"\n"*/;
        v38 = vcvtps_s32_f32(v36);
        if ( ceilf(v36) == INFINITY )
          LODWORD(v28) = 0x80000000;
        else
          LODWORD(v28) = v38;
      }
      Name_k__BackingField = System_String__Insert(Name_k__BackingField, (int32_t)v28, v37, 0LL);
    }
LABEL_22:
    Instance = this->fields.nameLabel;
    if ( !Instance )
      goto LABEL_64;
    UILabel__set_text((UILabel_o *)Instance, Name_k__BackingField, 0LL);
    v39 = 0LL;
    if ( boardItem->fields._BoardType_k__BackingField == 1 )
    {
      if ( !boardItem->fields._QuestId_k__BackingField )
      {
        v39 = 0LL;
        goto LABEL_50;
      }
      if ( !boardItem->fields._IsNotDisplayQuestInfo_k__BackingField )
      {
        rewardInformationComponent = (UnityEngine_Object_o *)this->fields.rewardInformationComponent;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
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
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance
        || (Instance = QuestTree__GetQuestInfo((QuestTree_o *)Instance, boardItem->fields._QuestId_k__BackingField, 0LL)) == 0LL )
      {
LABEL_64:
        sub_1BCAA3C(Instance, v28);
      }
      v42 = *((_QWORD *)Instance + 18);
      v39 = (MapControl_QuestInfo_o *)Instance;
      if ( v42 >= 1 )
      {
        Instance = MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_64;
        if ( !QuestEntity__HasFlag((QuestEntity_o *)Instance, 32LL, 0LL) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
          v43 = LocalizationManager__Get((System_String_o *)StringLiteral_8780/*"MISSION_NAVI_BOARD_TIME_DISABLE_COLOR"*/, 0LL);
          v44 = LocalizationManager__Get((System_String_o *)StringLiteral_13504/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
          RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(v42, -1LL, 0LL);
          Instance = System_String__Format(v44, RestTime2, 0LL);
          restTimeLabel = this->fields.restTimeLabel;
          v28 = (System_String_o *)Instance;
          if ( boardItem->fields._IsLocked_k__BackingField )
          {
            Instance = System_String__Format(v43, (Il2CppObject *)Instance, 0LL);
            v28 = (System_String_o *)Instance;
          }
          if ( restTimeLabel )
          {
            UILabel__set_text(restTimeLabel, v28, 0LL);
            goto LABEL_50;
          }
          goto LABEL_64;
        }
      }
    }
LABEL_50:
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
      MissionNaviTransitionBoardItemDraw__SetBoardImage(this, v48);
    enableMask = (UnityEngine_Object_o *)this->fields.enableMask;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
    if ( UnityEngine_Object__op_Inequality(enableMask, 0LL, 0LL) )
      MissionNaviTransitionBoardItemDraw__SetMaskImage(this, v50);
    iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
    if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
      MissionNaviTransitionBoardItemDraw__SetIconImage(this, boardItem, v39, v52);
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
    sub_1BCAA3C(this, boardItem);
  }
}


void __fastcall MissionNaviTransitionBoardItemDraw__SetMaskImage(
        MissionNaviTransitionBoardItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UISprite_o *enableMask; // x20
  __int64 v7; // x1
  struct UISprite_o *v8; // x0

  if ( (byte_4B19C88 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_20553/*"img_list_bg03"*/, v4, v5);
    byte_4B19C88 = 1;
  }
  enableMask = this->fields.enableMask;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
  AtlasManager__SetBanner(enableMask, (System_String_o *)StringLiteral_20553/*"img_list_bg03"*/, 0LL);
  v8 = this->fields.enableMask;
  if ( !v8 )
    sub_1BCAA3C(0LL, v7);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._33_MakePixelPerfect.method)(
    v8,
    v8->klass->vtable._34_get_minWidth.methodPtr);
}