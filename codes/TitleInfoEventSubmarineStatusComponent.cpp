void __fastcall TitleInfoEventSubmarineStatusComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventSubmarineStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_4A59C29 & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    byte_4A59C29 = 1;
  }
  static_fields = TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->ENTRY_ANIMATION_TIME = xmmword_BB5AA0;
  static_fields->MAP_CHANGE_WAIT_TIME = 0.3;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___ctor(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A59C28 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    byte_4A59C28 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.atlasList, (int32_t)v3, v4, v5);
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0LL);
}


float __fastcall TitleInfoEventSubmarineStatusComponent__ConvertPointToRate(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t point,
        const MethodInfo *method)
{
  int32_t maxPoint; // w8
  float result; // s0
  int32_t minPoint; // w9

  maxPoint = this->fields.maxPoint;
  result = 1.0;
  if ( maxPoint > point )
  {
    minPoint = this->fields.minPoint;
    result = 0.0;
    if ( minPoint < point )
      return (float)(point - minPoint) / (float)(maxPoint - minPoint);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t point,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0
  float v8; // s1
  float v9; // s2
  struct UISprite_o *gaugeBar; // x8
  int32_t maxPoint; // w9
  int mWidth; // w8
  float v13; // s3
  int32_t minPoint; // w10
  float v15; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  *(UnityEngine_Vector3_o *)&v7 = TitleInfoEventSubmarineStatusComponent__get_BasePosition(
                                    this,
                                    *(const MethodInfo **)&point);
  gaugeBar = this->fields.gaugeBar;
  if ( !gaugeBar )
    sub_1B8880C(v5, v6);
  maxPoint = this->fields.maxPoint;
  mWidth = gaugeBar->fields.mWidth;
  v13 = 1.0;
  if ( maxPoint > point )
  {
    minPoint = this->fields.minPoint;
    v13 = 0.0;
    if ( minPoint < point )
      v13 = (float)(point - minPoint) / (float)(maxPoint - minPoint);
  }
  v15 = v7 - (float)(v13 * (float)mWidth);
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v15;
  return result;
}


UnityEngine_GameObject_o *__fastcall TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  AssetData_o *mapAssetData; // x0
  Il2CppObject *Object_object__48635516; // x20
  const MethodInfo *v5; // x2
  UnityEngine_GameObject_o *v6; // x21
  struct System_String_o *GoalAnimName; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x0

  if ( (byte_4A59C17 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59C17 = 1;
  }
  mapAssetData = this->fields.mapAssetData;
  if ( !mapAssetData )
    return 0LL;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              mapAssetData,
                              this->fields.goalIconAnimPrefabName,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v5);
    this->fields.animClipName = GoalAnimName;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.animClipName, (int32_t)GoalAnimName, v8, v9);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__Instantiate_object_(
            Object_object__48635516,
            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v10 )
      sub_1B8880C(0LL, v11);
    v6 = (UnityEngine_GameObject_o *)v10;
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v10, 0LL);
    GameObjectExtensions__SafeSetParent_33730068(gameObject, this->fields.statusObj, 0LL);
    v13 = UnityEngine_GameObject__get_gameObject(v6, 0LL);
    GameObjectExtensions__ResetLocalPosition(v13, 0LL);
  }
  return v6;
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__CreateSaveData(
        int32_t userPoint,
        int32_t currentQuestId,
        int32_t progressQuestId,
        bool isLastGoalPlayed,
        const MethodInfo *method)
{
  System_String_o *v5; // x19
  System_String_o *v6; // x20
  System_String_o *v7; // x21
  const MethodInfo *v8; // x4
  System_String_o *v9; // x22
  bool v11; // [xsp+8h] [xbp-38h] BYREF
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v13; // [xsp+18h] [xbp-28h] BYREF
  int32_t v14; // [xsp+1Ch] [xbp-24h] BYREF

  v13 = currentQuestId;
  v14 = userPoint;
  v12 = progressQuestId;
  v11 = isLastGoalPlayed;
  if ( (byte_4A59C1B & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    byte_4A59C1B = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v14, 0LL);
  v6 = System_Int32__ToString((int32_t)&v13, 0LL);
  v7 = System_Int32__ToString((int32_t)&v12, 0LL);
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v9 = System_Boolean__ToString((bool)&v11, 0LL);
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  return TitleInfoEventSubmarineStatusComponent__CreateSaveData_37098120(v5, v6, v7, v9, v8);
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__CreateSaveData_37098120(
        System_String_o *userPoint,
        System_String_o *currentQuestId,
        System_String_o *progressQuestId,
        System_String_o *isLastGoalPlayed,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4A59C1C & 1) == 0 )
  {
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&StringLiteral_868/*","*/);
    byte_4A59C1C = 1;
  }
  v9 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v9, 0LL);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  System_Text_StringBuilder__Append_60868928(v9, userPoint, 0LL);
  System_Text_StringBuilder__Append_60868928(v9, (System_String_o *)StringLiteral_868/*","*/, 0LL);
  System_Text_StringBuilder__Append_60868928(v9, currentQuestId, 0LL);
  System_Text_StringBuilder__Append_60868928(v9, (System_String_o *)StringLiteral_868/*","*/, 0LL);
  System_Text_StringBuilder__Append_60868928(v9, progressQuestId, 0LL);
  System_Text_StringBuilder__Append_60868928(v9, (System_String_o *)StringLiteral_868/*","*/, 0LL);
  System_Text_StringBuilder__Append_60868928(v9, isLastGoalPlayed, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                              v9,
                              v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__DestroyGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v4; // x2
  struct System_String_o *GoalAnimName; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  UnityEngine_GameObject_o *Component_object; // x0
  ServantStatusBattleListViewItem_o *p_goalAnimObject; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A59C19 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59C19 = 1;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 0, v4);
    this->fields.animClipName = GoalAnimName;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.animClipName, (int32_t)GoalAnimName, v6, v7);
    Component_object = this->fields.goalAnimObject;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
    {
      sub_1B8880C(Component_object, v8);
    }
    p_goalAnimObject = (ServantStatusBattleListViewItem_o *)&this->fields.goalAnimObject;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Component_object, 0LL);
    klass = (UnityEngine_Object_o *)p_goalAnimObject->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(klass, 0LL);
    p_goalAnimObject->klass = 0LL;
    sub_1B88554(p_goalAnimObject, 0, v12, v13);
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  MissionNotifyManager_o *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v10; // x2
  int32_t userPoint; // w8
  int32_t currentQuestId; // w9
  TerminalPramsManager_c *v13; // x0
  EventSaveData_o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  TerminalPramsManager_c *v17; // x0
  ServantStatusBattleListViewItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v19; // x0
  System_String_array *ValueByArray; // x0
  System_String_array *v21; // x22
  int32_t v22; // w23
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x24
  System_Predicate_object__o *v24; // x25
  Il2CppObject *v25; // x0
  int32_t v26; // w8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v27; // x24
  System_Predicate_object__o *v28; // x25
  const MethodInfo *v29; // x4
  struct EventDetailEntity_o *eventDetailEnt; // x8
  struct UIWidget_o *mWidget; // x9
  int32_t v32; // w21
  _BOOL4 isLastGoalPlayed; // w24
  struct UIWidget_o *v34; // x20
  int32_t v35; // w2
  int32_t v36; // w3

  if ( (byte_4A59C13 & 1) == 0 )
  {
    sub_1B885B0(&EventSaveData_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_1B885B0(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1B885B0(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__);
    sub_1B885B0(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__);
    sub_1B885B0(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo);
    byte_4A59C13 = 1;
  }
  v3 = sub_1B887FC(TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_59;
  *(_QWORD *)(v3 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  if ( this->fields.isGoalAnimToLoop )
  {
    this->fields.isGoalAnimToLoop = 0;
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v8);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v10);
  }
  this->fields.isAfterTakingOver = 0;
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  MissionNotifyManager__EndPause(Instance, 0LL);
  userPoint = this->fields.userPoint;
  currentQuestId = this->fields.currentQuestId;
  this->fields.isCompleatedCount = 0;
  this->fields.userOldPoint = userPoint;
  this->fields.oldQuestId = currentQuestId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57F0A )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57F0A = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  if ( !v13->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
  {
    v14 = (EventSaveData_o *)sub_1B887FC(EventSaveData_TypeInfo);
    EventSaveData___ctor(v14, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57F0B )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57F0B = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (ServantStatusBattleListViewItem_o *)&v17->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v14;
    sub_1B88554(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v14, v15, v16);
    v13 = TerminalPramsManager_TypeInfo;
  }
  if ( !v13->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v13);
  if ( !byte_4A57F0A )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57F0A = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  Instance = (MissionNotifyManager_o *)v19->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  if ( !Instance )
LABEL_59:
    sub_1B8880C(Instance, v5);
  ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)Instance, 0x2Cu, 0LL);
  v21 = ValueByArray;
  if ( !ValueByArray )
  {
    v22 = 0;
    goto LABEL_35;
  }
  if ( (int)ValueByArray->max_length < 2 )
  {
    v22 = 0;
    goto LABEL_34;
  }
  v22 = System_Int32__Parse(ValueByArray->m_Items[1], 0LL);
  if ( (int)v21->max_length < 3 )
  {
LABEL_34:
    LODWORD(v21) = 0;
    goto LABEL_35;
  }
  LODWORD(v21) = System_Int32__Parse(v21->m_Items[2], 0LL);
LABEL_35:
  baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
  v24 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v24,
    (Il2CppObject *)v3,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__,
    0LL);
  if ( !baseQuestReleaseEntList )
    goto LABEL_59;
  v25 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)baseQuestReleaseEntList,
          (System_Predicate_T__o *)v24,
          (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v26 = this->fields.currentQuestId;
  if ( v25 )
    v22 = this->fields.currentQuestId;
  if ( (int)v21 > v26 )
    v26 = (int)v21;
  *(_DWORD *)(v3 + 24) = v26;
  v27 = this->fields.baseQuestReleaseEntList;
  v28 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v28,
    (Il2CppObject *)v3,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__,
    0LL);
  if ( !v27 )
    goto LABEL_59;
  if ( System_Collections_Generic_List_object___Find(
         (System_Collections_Generic_List_object__o *)v27,
         (System_Predicate_T__o *)v28,
         (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
  {
    LODWORD(v21) = *(_DWORD *)(v3 + 24);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57F0A )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57F0A = 1;
  }
  Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
  }
  eventDetailEnt = this->fields.eventDetailEnt;
  if ( !eventDetailEnt )
    goto LABEL_59;
  mWidget = Instance[2].fields.mNoticeNumberComp[6].fields.mWidget;
  if ( !mWidget )
    goto LABEL_59;
  mWidget->fields.m_CachedPtr = eventDetailEnt->fields.eventId;
  if ( !byte_4A57F0A )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    byte_4A57F0A = 1;
  }
  if ( !LODWORD(Instance[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
  }
  v32 = this->fields.userPoint;
  isLastGoalPlayed = this->fields.isLastGoalPlayed;
  v34 = Instance[2].fields.mNoticeNumberComp[6].fields.mWidget;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  Instance = (MissionNotifyManager_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData(
                                         v32,
                                         v22,
                                         (int32_t)v21,
                                         isLastGoalPlayed,
                                         v29);
  if ( !v34 )
    goto LABEL_59;
  v34->fields.m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o *)Instance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v34->fields.m_CancellationTokenSource, (int32_t)Instance, v35, v36);
  TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(0LL);
  ActionExtensions__Call(this->fields.onEndAnim, 0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndExitAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventSubmarineStatusComponent_c *v3; // x0

  if ( (byte_4A59C0D & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_10649/*"PlayEntryAnimation"*/);
    byte_4A59C0D = 1;
  }
  TitleInfoEventSubmarineStatusComponent__DestroyGoalAnim(this, method);
  v3 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v3 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10649/*"PlayEntryAnimation"*/,
    v3->static_fields->MAP_CHANGE_WAIT_TIME,
    0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndProgressAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  int32_t userPoint; // w8
  int32_t maxPoint; // w9
  bool v5; // cc
  UnityEngine_Object_o *goalAnimObject; // x21
  struct UnityEngine_GameObject_o **p_goalAnimObject; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  UnityEngine_GameObject_o *gateNextPointCounterLabel; // x0
  UnityEngine_Object_o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  TitleInfoEventSubmarineStatusComponent_o *ProgressQuestReleaseEnt; // x21
  const MethodInfo *v16; // x2
  QuestReleaseEntity_o *CurrentQuestReleaseEnt; // x0
  const MethodInfo *v18; // x3
  QuestReleaseEntity_o *v19; // x1
  const MethodInfo *v20; // x1
  struct UnityEngine_GameObject_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  UnityEngine_Object_o *v24; // x20
  const MethodInfo *v25; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v27; // x2
  TitleInfoEventSubmarineStatusComponent_c *v28; // x0

  if ( (byte_4A59C10 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_5945/*"EndAnimation"*/);
    byte_4A59C10 = 1;
  }
  userPoint = this->fields.userPoint;
  maxPoint = this->fields.maxPoint;
  v5 = userPoint < maxPoint;
  if ( userPoint >= maxPoint )
    userPoint = this->fields.maxPoint;
  this->fields.userOldPoint = userPoint;
  if ( v5
    || this->fields.minPoint >= userPoint
    || TitleInfoEventSubmarineStatusComponent__IsPlayingGoalAnim(this, method) )
  {
    TitleInfoEventSubmarineStatusComponent__EndAnimation(this, method);
    return;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_goalAnimObject = &this->fields.goalAnimObject;
  v8 = UnityEngine_Object__op_Inequality(goalAnimObject, 0LL, 0LL);
  if ( v8 )
  {
    gateNextPointCounterLabel = *p_goalAnimObject;
    if ( !*p_goalAnimObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(gateNextPointCounterLabel, 0, 0LL);
    v12 = (UnityEngine_Object_o *)*p_goalAnimObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v12, 0LL);
    *p_goalAnimObject = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.goalAnimObject, 0, v13, v14);
  }
  ProgressQuestReleaseEnt = (TitleInfoEventSubmarineStatusComponent_o *)TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
                                                                          (TitleInfoEventSubmarineStatusComponent_o *)v8,
                                                                          this->fields.baseQuestReleaseEntList,
                                                                          v10);
  CurrentQuestReleaseEnt = TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
                             ProgressQuestReleaseEnt,
                             this->fields.baseQuestReleaseEntList,
                             v16);
  if ( CurrentQuestReleaseEnt )
    v19 = CurrentQuestReleaseEnt;
  else
    v19 = (QuestReleaseEntity_o *)ProgressQuestReleaseEnt;
  if ( TitleInfoEventSubmarineStatusComponent__IsAllClear(this, v19, this->fields.userPoint, v18) )
  {
    gateNextPointCounterLabel = (UnityEngine_GameObject_o *)this->fields.gateNextPointCounterLabel;
    if ( !gateNextPointCounterLabel
      || (gateNextPointCounterLabel = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)gateNextPointCounterLabel,
                                        0LL)) == 0LL )
    {
LABEL_31:
      sub_1B8880C(gateNextPointCounterLabel, v9);
    }
    UnityEngine_GameObject__SetActive(gateNextPointCounterLabel, 0, 0LL);
  }
  gateNextPointCounterLabel = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextPointCounterLabel )
    goto LABEL_31;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gateNextPointCounterLabel->klass[1]._1.castClass)(
    gateNextPointCounterLabel,
    gateNextPointCounterLabel->klass[1]._1.declaringType,
    0.0);
  this->fields.isGoalAnimToLoop = 1;
  v21 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v20);
  this->fields.goalAnimObject = v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.goalAnimObject, (int32_t)v21, v22, v23);
  v24 = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v25);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v27);
  }
  v28 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v28 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5945/*"EndAnimation"*/,
    v28->static_fields->GOAL_ANIMATION_TIME,
    0LL);
}


QuestReleaseEntity_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Collections_Generic_List_QuestReleaseEntity__o *baseList,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x19
  int32_t klass; // w20
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A59C1F & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_4A59C1F = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !baseList )
    sub_1B8880C(this, baseList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)baseList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current )
      sub_1B8880C(v4, v5);
    klass = (int32_t)v9.fields._current[1].klass;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_37596684(klass, -1, 0, 0LL) )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return (QuestReleaseEntity_o *)current;
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A59C21 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_6234/*"EventUI/Prefabs/{0}"*/);
    byte_4A59C21 = 1;
  }
  v8 = eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_6234/*"EventUI/Prefabs/{0}"*/, v6, 0LL);
}


UnityEngine_GameObject_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4A59C27 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    byte_4A59C27 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.eventAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__48635516(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  return result;
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t animType,
        const MethodInfo *method)
{
  System_String_o *goalIconAnimPrefabName; // x0
  __int64 *v6; // x8

  if ( (byte_4A59C16 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16552/*"_loop"*/);
    sub_1B885B0(&StringLiteral_16573/*"_start"*/);
    sub_1B885B0(&StringLiteral_16550/*"_last"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_16537/*"_end"*/);
    byte_4A59C16 = 1;
  }
  goalIconAnimPrefabName = this->fields.goalIconAnimPrefabName;
  if ( this->fields.isLastGoalPlayed )
    goalIconAnimPrefabName = System_String__Concat_61707032(
                               goalIconAnimPrefabName,
                               (System_String_o *)StringLiteral_16550/*"_last"*/,
                               0LL);
  switch ( animType )
  {
    case 3:
      v6 = &StringLiteral_16537/*"_end"*/;
      return System_String__Concat_61707032(goalIconAnimPrefabName, (System_String_o *)*v6, 0LL);
    case 2:
      v6 = &StringLiteral_16552/*"_loop"*/;
      return System_String__Concat_61707032(goalIconAnimPrefabName, (System_String_o *)*v6, 0LL);
    case 1:
      v6 = &StringLiteral_16573/*"_start"*/;
      return System_String__Concat_61707032(goalIconAnimPrefabName, (System_String_o *)*v6, 0LL);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


QuestReleaseEntity_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Collections_Generic_List_QuestReleaseEntity__o *baseList,
        const MethodInfo *method)
{
  Il2CppObject *current; // x24
  QuestReleaseEntity_o *v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t klass; // w20
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A59C1E & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_4A59C1E = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !baseList )
    sub_1B8880C(this, baseList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)baseList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  current = 0LL;
  do
  {
    v5 = (QuestReleaseEntity_o *)current;
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v6 )
      break;
    current = v10.fields._current;
    if ( !v10.fields._current )
      sub_1B8880C(v6, v7);
    klass = (int32_t)v10.fields._current[1].klass;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  }
  while ( CondType__IsQuestClear_37596684(klass, -1, 0, 0LL) );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v5;
}


System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
        int32_t eventId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_QuestReleaseEntity__o *ListByTargetAndCondType; // x20
  System_Collections_Generic_List_object__o *v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x20
  __int64 QuestType; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Comparison_T__o *v18; // x20
  Il2CppObject *v19; // x21
  struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A59C1D & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_QuestReleaseEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__);
    sub_1B885B0(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
    byte_4A59C1D = 1;
  }
  memset(&v25, 0, sizeof(v25));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_26;
  ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                              (QuestReleaseMaster_o *)Instance,
                              eventId,
                              85,
                              0LL);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !ListByTargetAndCondType )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)ListByTargetAndCondType,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v25,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v7 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1B8880C(v7, v8);
    QuestType = QuestMaster__GetQuestType((int32_t)v25.fields._current[1].klass, 0LL);
    if ( (_DWORD)QuestType == 2 )
    {
      if ( !v6 )
        sub_1B8880C(QuestType, v11);
      items = v6->fields._items;
      v15 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1B8880C(QuestType, v11);
      size = v6->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          current,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v17[4] = (Il2CppClass *)current;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)current, v12, v13);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  Instance = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
    Instance = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v18 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      v18,
      v19,
      Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__,
      0LL);
    static_fields = TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields;
    static_fields->__9__80_0 = (struct System_Comparison_QuestReleaseEntity__o *)v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__80_0, (int32_t)v18, v21, v22);
  }
  if ( !v6 )
LABEL_26:
    sub_1B8880C(Instance, v4);
  System_Collections_Generic_List_object___Sort_55571192(
    v6,
    v18,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v6;
}


int32_t __fastcall TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  struct EventDetailEntity_o *eventDetailEnt; // x8

  if ( (byte_4A59C14 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A59C14 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  eventDetailEnt = this->fields.eventDetailEnt;
  if ( !eventDetailEnt || !MasterData_object )
LABEL_9:
    sub_1B8880C(Instance, v4);
  return UserEventPointMaster__GetEventPointTotal(
           (UserEventPointMaster_o *)MasterData_object,
           (int64_t)Instance,
           eventDetailEnt->fields.eventId,
           -1,
           0LL);
}


bool __fastcall TitleInfoEventSubmarineStatusComponent__IsAllClear(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *currentQuestReleaseEnt,
        int32_t nowPoint,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *baseQuestReleaseEntList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x21
  int32_t ValueInt; // w0
  int32_t klass; // w22
  int32_t v11; // w21
  _BOOL8 IsQuestClear_37596684; // x0
  __int64 v13; // x1

  if ( (byte_4A59C20 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___);
    byte_4A59C20 = 1;
  }
  baseQuestReleaseEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseQuestReleaseEntList;
  if ( baseQuestReleaseEntList )
  {
    baseQuestReleaseEntList = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__LastOrDefault_object_(
                                                                                     baseQuestReleaseEntList,
                                                                                     (const MethodInfo_2EA710C *)Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___);
    if ( baseQuestReleaseEntList )
    {
      v8 = baseQuestReleaseEntList;
      ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)baseQuestReleaseEntList, 0LL);
      klass = (int32_t)v8[1].klass;
      v11 = ValueInt;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_37596684 = CondType__IsQuestClear_37596684(klass, -1, 0, 0LL);
      if ( !currentQuestReleaseEnt )
        sub_1B8880C(IsQuestClear_37596684, v13);
      LOBYTE(baseQuestReleaseEntList) = IsQuestClear_37596684 & (v11 <= nowPoint) & (QuestReleaseEntity__getValueInt(
                                                                                       currentQuestReleaseEnt,
                                                                                       0LL) == v11);
    }
  }
  return (char)baseQuestReleaseEntList;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent__IsDispPossible(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent__IsEventRaidBoss(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent__IsPlayingGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *goalAnimObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4A59C1A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59C1A = 1;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
    return 0;
  Component_object = this->fields.goalAnimObject;
  if ( !Component_object
    || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         Component_object,
                                                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
  {
    sub_1B8880C(Component_object, v4);
  }
  return UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)Component_object, 0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__LoadEventUIAssetData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v16; // x20

  if ( (byte_4A59C22 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1B885B0(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__);
    sub_1B885B0(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo);
    byte_4A59C22 = 1;
  }
  v7 = sub_1B887FC(TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  EventUIAssetDataPath = TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(eventId, v14);
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v16,
    (Il2CppObject *)v7,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v16, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventSubmarineStatusComponent__LoadLocalAtlas(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  TitleInfoEventSubmarineStatusComponent_o *v6; // x20
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  __int64 size; // x2
  int v9; // w9
  int i; // w28
  Il2CppObject *v11; // x0
  Il2CppObject *v12; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  Il2CppObject *Component_object; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v26; // x8
  int32_t v27; // [xsp+8h] [xbp-58h] BYREF
  int v28; // [xsp+Ch] [xbp-54h] BYREF

  v6 = this;
  if ( (byte_4A59C25 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_24945/*"{0:D2}"*/);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1B885B0(&StringLiteral_5380/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_4A59C25 = 1;
  }
  if ( v6->fields.eventAssetData )
  {
    atlasList = v6->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1B8880C(this, *(_QWORD *)&eventId);
    size = (unsigned int)atlasList->fields._size;
    v9 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v9;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
    for ( i = 1; ; ++i )
    {
      v28 = i;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, size, v3, v4);
      v12 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_24945/*"{0:D2}"*/, v11, 0LL);
      v27 = eventId;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v13, v14, v15);
      v17 = System_String__Format_61721404((System_String_o *)StringLiteral_5380/*"DownloadEventUIAtlas{0}{1}"*/, v16, v12, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
                                                                 v6,
                                                                 v17,
                                                                 v18);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (TitleInfoEventSubmarineStatusComponent_o *)UnityEngine_Object__op_Equality(
                                                           GameObjectFromEventUIAssetData,
                                                           0LL,
                                                           0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (TitleInfoEventSubmarineStatusComponent_o *)v6->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      v23 = *(_QWORD *)&this->fields.m_CachedPtr;
      v24 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v23 )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v23 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = v23 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v26 + 32) = Component_object;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 32), (int32_t)Component_object, v21, v22);
      }
    }
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__OnDestroy(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventDetailEntity_o *eventDetailEnt; // x8
  const MethodInfo *v5; // x1

  eventDetailEnt = this->fields.eventDetailEnt;
  if ( !eventDetailEnt )
    sub_1B8880C(this, method);
  TitleInfoEventSubmarineStatusComponent__ReleaseEventUIAssetData(this, eventDetailEnt->fields.eventId, v2);
  TitleInfoEventSubmarineStatusComponent__ReleaseLocalAtlas(this, v5);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__OnEnable(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( !System_String__IsNullOrEmpty(this->fields.animClipName, 0LL) )
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, this->fields.animClipName, v3);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Action_o *onEndAnim,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v6; // x1
  int32_t UserEventPoint; // w0
  const MethodInfo *v8; // x2
  int32_t oldQuestId; // w8
  int32_t currentQuestId; // w9
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x21
  System_Predicate_object__o *v12; // x22
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v16; // x22
  QuestReleaseEntity_o *v17; // x21
  System_Predicate_object__o *v18; // x23
  Il2CppObject *v19; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v20; // x23
  QuestReleaseEntity_o *v21; // x22
  System_Predicate_object__o *v22; // x24
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x23
  const MethodInfo *v26; // x1
  int32_t v27; // w8

  if ( (byte_4A59C0B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_1B885B0(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__);
    sub_1B885B0(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__);
    sub_1B885B0(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__);
    byte_4A59C0B = 1;
  }
  if ( this->fields.isAfterTakingOver )
  {
    this->fields.onEndAnim = onEndAnim;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onEndAnim, (int32_t)onEndAnim, (int32_t)method, v3);
    TitleInfoEventSubmarineStatusComponent__EndAnimation(this, v6);
    return;
  }
  UserEventPoint = TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(this, (const MethodInfo *)onEndAnim);
  oldQuestId = this->fields.oldQuestId;
  currentQuestId = this->fields.currentQuestId;
  this->fields.userPoint = UserEventPoint;
  if ( oldQuestId == currentQuestId && this->fields.userOldPoint == UserEventPoint )
  {
    TitleInfoEventSubmarineStatusComponent__PlayLastMapAnimation(this, onEndAnim, v8);
    return;
  }
  baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
  v12 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__,
    0LL);
  if ( !baseQuestReleaseEntList )
    goto LABEL_28;
  v15 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)baseQuestReleaseEntList,
          (System_Predicate_T__o *)v12,
          (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v16 = this->fields.baseQuestReleaseEntList;
  v17 = (QuestReleaseEntity_o *)v15;
  v18 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__,
    0LL);
  if ( !v16 )
    goto LABEL_28;
  v19 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v16,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v20 = this->fields.baseQuestReleaseEntList;
  v21 = (QuestReleaseEntity_o *)v19;
  v22 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v22,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__,
    0LL);
  if ( !v20 )
    goto LABEL_28;
  v25 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v20,
          (System_Predicate_T__o *)v22,
          (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v17 )
    LODWORD(v17) = QuestReleaseEntity__getValueInt(v17, 0LL);
  if ( v21 )
    LODWORD(v21) = QuestReleaseEntity__getValueInt(v21, 0LL);
  if ( v25 )
    LODWORD(v25) = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v25, 0LL);
  if ( (int)v17 > (int)v25 )
  {
    ActionExtensions__Call(onEndAnim, 0LL);
    return;
  }
  this->fields.onEndAnim = onEndAnim;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onEndAnim, (int32_t)onEndAnim, v23, v24);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1B8880C(Instance, v14);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  if ( (int)v21 < (int)v25 )
  {
    v27 = this->fields.oldQuestId;
    if ( v27 )
    {
      if ( (int)v17 < (int)v25 && v27 >= 1 )
      {
        TitleInfoEventSubmarineStatusComponent__PlayExitAnimation(this, v26);
        return;
      }
    }
    else if ( this->fields.currentQuestId >= 1 )
    {
      TitleInfoEventSubmarineStatusComponent__PlayEntryAnimation(this, v26);
      return;
    }
  }
  TitleInfoEventSubmarineStatusComponent__PlayProgressAnimation(this, v26);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayEntryAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *shipPanelObj; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *gateNextIcon; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v8; // x20
  TitleInfoEventSubmarineStatusComponent_c *v9; // x0
  System_Collections_Generic_List_object__o *klass; // x21
  float ENTRY_ANIMATION_TIME; // s0
  EventDelegate_o *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  Il2CppObject *v19; // x20
  UnityEngine_GameObject_o *v20; // x19
  TitleInfoEventSubmarineStatusComponent_c *v21; // x0
  float v22; // s0
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A59C0E & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_5957/*"EndEntryAnimation"*/);
    byte_4A59C0E = 1;
  }
  shipPanelObj = this->fields.shipPanelObj;
  v23 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, this->fields.minPoint, v2);
  GameObjectExtensions__SetLocalPosition(shipPanelObj, v23, 0LL);
  gateNextIcon = this->fields.shipPanelObj;
  if ( !gateNextIcon )
    goto LABEL_33;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gateNextIcon,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)Component_object, 0LL);
  }
  gateNextIcon = this->fields.shipPanelObj;
  if ( !gateNextIcon )
    goto LABEL_33;
  gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                               gateNextIcon,
                                               (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !gateNextIcon )
    goto LABEL_33;
  v8 = gateNextIcon;
  gateNextIcon[5].monitor = (void *)0x3F80000000000000LL;
  v9 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v9 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  klass = (System_Collections_Generic_List_object__o *)v8[3].klass;
  ENTRY_ANIMATION_TIME = v9->static_fields->ENTRY_ANIMATION_TIME;
  LODWORD(v8[1].monitor) = 3;
  *(float *)&v8[2].monitor = ENTRY_ANIMATION_TIME;
  v12 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
  EventDelegate___ctor_46787224(v12, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5957/*"EndEntryAnimation"*/, 0LL);
  if ( !klass )
    goto LABEL_33;
  items = klass->fields._items;
  v16 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++klass->fields._version;
  if ( !items )
    goto LABEL_33;
  size = klass->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v12,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
  }
  UITweener__PlayForward((UITweener_o *)v8, 0LL);
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon )
    goto LABEL_33;
  gateNextIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateNextIcon, 0LL);
  if ( !gateNextIcon )
    goto LABEL_33;
  v19 = UnityEngine_GameObject__GetComponent_object_(
          gateNextIcon,
          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)v19, 0LL);
  }
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon
    || (gateNextIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateNextIcon, 0LL)) == 0LL
    || (gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                     gateNextIcon,
                                                     (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___)) == 0LL )
  {
LABEL_33:
    sub_1B8880C(gateNextIcon, v5);
  }
  gateNextIcon[5].monitor = (void *)0x3F80000000000000LL;
  v20 = gateNextIcon;
  v21 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v21 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  v22 = v21->static_fields->ENTRY_ANIMATION_TIME;
  LODWORD(v20[1].monitor) = 3;
  *(float *)&v20[2].monitor = v22;
  UITweener__PlayForward((UITweener_o *)v20, 0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayExitAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *shipPanelObj; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v5; // x20
  TitleInfoEventSubmarineStatusComponent_c *v6; // x0
  System_Collections_Generic_List_object__o *klass; // x21
  float EXIT_ANIMATION_TIME; // s0
  EventDelegate_o *v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  struct UnityEngine_GameObject_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *GoalAnimName; // x1
  const MethodInfo *v23; // x2

  if ( (byte_4A59C0C & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_5967/*"EndExitAnimation"*/);
    byte_4A59C0C = 1;
  }
  shipPanelObj = this->fields.shipPanelObj;
  if ( !shipPanelObj )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       shipPanelObj,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)Component_object, 0LL);
  }
  shipPanelObj = this->fields.shipPanelObj;
  if ( !shipPanelObj )
    goto LABEL_24;
  shipPanelObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                               shipPanelObj,
                                               (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !shipPanelObj )
    goto LABEL_24;
  v5 = shipPanelObj;
  shipPanelObj[5].monitor = (void *)1065353216;
  v6 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v6 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  klass = (System_Collections_Generic_List_object__o *)v5[3].klass;
  EXIT_ANIMATION_TIME = v6->static_fields->EXIT_ANIMATION_TIME;
  LODWORD(v5[1].monitor) = 3;
  *(float *)&v5[2].monitor = EXIT_ANIMATION_TIME;
  v9 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
  EventDelegate___ctor_46787224(v9, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5967/*"EndExitAnimation"*/, 0LL);
  if ( !klass
    || (items = klass->fields._items,
        v13 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++klass->fields._version,
        !items) )
  {
LABEL_24:
    sub_1B8880C(shipPanelObj, method);
  }
  size = klass->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v9,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v9;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v9, v10, v11);
  }
  UITweener__PlayForward((UITweener_o *)v5, 0LL);
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
  {
    v19 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v17);
    this->fields.goalAnimObject = v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.goalAnimObject, (int32_t)v19, v20, v21);
  }
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 3, v18);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v23);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *animClipName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *goalAnimObject; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4A59C18 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59C18 = 1;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
  {
    this->fields.animClipName = animClipName;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.animClipName, (int32_t)animClipName, v6, v7);
    Component_object = this->fields.goalAnimObject;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
    {
      sub_1B8880C(Component_object, v8);
    }
    UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)Component_object, this->fields.animClipName, 0LL);
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayLastMapAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Action_o *onEndAnim,
        const MethodInfo *method)
{
  int32_t targetQuestId; // w21
  int32_t v6; // w2
  int32_t v7; // w3
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  struct UnityEngine_GameObject_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v15; // x2
  TitleInfoEventSubmarineStatusComponent_c *v16; // x0

  if ( (byte_4A59C11 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_10655/*"PlayLastMapStartedAnimation"*/);
    byte_4A59C11 = 1;
  }
  if ( this->fields.isLastGoalPlayed )
    goto LABEL_14;
  targetQuestId = this->fields.targetQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsOpen(1, targetQuestId, 0LL, 0, 0LL, 0LL) )
  {
LABEL_14:
    ActionExtensions__Call(onEndAnim, 0LL);
  }
  else
  {
    this->fields.onEndAnim = onEndAnim;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onEndAnim, (int32_t)onEndAnim, v6, v7);
    goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
    {
      v11 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v9);
      this->fields.goalAnimObject = v11;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.goalAnimObject, (int32_t)v11, v12, v13);
    }
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 3, v10);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v15);
    v16 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v16 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10655/*"PlayLastMapStartedAnimation"*/,
      v16->static_fields->EXIT_ANIMATION_TIME,
      0LL);
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayLastMapStartedAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v5; // x2
  TitleInfoEventSubmarineStatusComponent_c *v6; // x0

  if ( (byte_4A59C12 & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_5945/*"EndAnimation"*/);
    byte_4A59C12 = 1;
  }
  this->fields.isLastGoalPlayed = 1;
  this->fields.isGoalAnimToLoop = 1;
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v2);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v5);
  v6 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v6 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5945/*"EndAnimation"*/,
    v6->static_fields->GOAL_ANIMATION_TIME,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventSubmarineStatusComponent__PlayProgressAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  float v8; // s0
  int v9; // s1
  int v10; // s2
  UnityEngine_GameObject_o *shipPanelObj; // x0
  float v12; // s11
  int v13; // s12
  int v14; // s13
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v16; // x20
  TitleInfoEventSubmarineStatusComponent_c *v17; // x0
  System_Collections_Generic_List_object__o *klass; // x21
  float PROGRESS_ANIMATION_TIME; // s0
  EventDelegate_o *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  TitleInfoEventSubmarineStatusComponent_c *v27; // x0
  int32_t userOldPoint; // w8
  int v29; // w9
  UnityEngine_Object_o *gateNextPointCounterLabel; // x20
  int32_t v31; // w8
  int32_t userPoint; // w9
  int32_t maxPoint; // w10
  int v34; // w9
  int v35; // w8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A59C0F & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_5984/*"EndProgressAnimation"*/);
    byte_4A59C0F = 1;
  }
  LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.shipPanelObj, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  *(UnityEngine_Vector3_o *)&v8 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(
                                    this,
                                    this->fields.userPoint,
                                    v6);
  if ( x <= v8 )
  {
    v27 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v27 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5984/*"EndProgressAnimation"*/,
      v27->static_fields->PROGRESS_ANIMATION_TIME,
      0LL);
  }
  else
  {
    shipPanelObj = this->fields.shipPanelObj;
    if ( !shipPanelObj )
      goto LABEL_39;
    v12 = v8;
    v13 = v9;
    v14 = v10;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         shipPanelObj,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)Component_object, 0LL);
    }
    shipPanelObj = this->fields.shipPanelObj;
    if ( !shipPanelObj )
      goto LABEL_39;
    shipPanelObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                 shipPanelObj,
                                                 (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    if ( !shipPanelObj )
      goto LABEL_39;
    *(float *)&shipPanelObj[5].monitor = x;
    *((float *)&shipPanelObj[5].monitor + 1) = y;
    *(float *)&shipPanelObj[5].fields.m_CachedPtr = z;
    *((float *)&shipPanelObj[5].fields + 1) = v12;
    LODWORD(shipPanelObj[6].klass) = v13;
    HIDWORD(shipPanelObj[6].klass) = v14;
    v16 = shipPanelObj;
    v17 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v17 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    klass = (System_Collections_Generic_List_object__o *)v16[3].klass;
    PROGRESS_ANIMATION_TIME = v17->static_fields->PROGRESS_ANIMATION_TIME;
    LODWORD(v16[1].monitor) = 3;
    *(float *)&v16[2].monitor = PROGRESS_ANIMATION_TIME;
    v20 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
    EventDelegate___ctor_46787224(v20, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5984/*"EndProgressAnimation"*/, 0LL);
    if ( !klass )
      goto LABEL_39;
    items = klass->fields._items;
    v24 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++klass->fields._version;
    if ( !items )
      goto LABEL_39;
    size = klass->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        klass,
        (Il2CppObject *)v20,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      klass->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v20;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v20, v21, v22);
    }
    UITweener__PlayForward((UITweener_o *)v16, 0LL);
  }
  if ( !this->fields.isCompleatedCount )
  {
    userOldPoint = this->fields.userOldPoint;
    v29 = this->fields.userPoint - userOldPoint;
    if ( v29 )
    {
      shipPanelObj = (UnityEngine_GameObject_o *)this->fields.progressPointCounterLabel;
      this->fields.isCompleatedCount = 1;
      if ( !shipPanelObj )
        goto LABEL_39;
      LODWORD(shipPanelObj[2].monitor) = userOldPoint;
      HIDWORD(shipPanelObj[2].monitor) = v29;
      UICounterLabel__PlayAnimation((UICounterLabel_o *)shipPanelObj, 0LL);
    }
  }
  gateNextPointCounterLabel = (UnityEngine_Object_o *)this->fields.gateNextPointCounterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gateNextPointCounterLabel, 0LL, 0LL) )
  {
    v31 = this->fields.userOldPoint;
    userPoint = this->fields.userPoint;
    if ( v31 != userPoint )
    {
      maxPoint = this->fields.maxPoint;
      if ( userPoint >= maxPoint )
        userPoint = this->fields.maxPoint;
      v34 = userPoint - v31;
      if ( v34 >= 1 )
      {
        v35 = maxPoint - v31;
        if ( v35 >= 1 )
        {
          shipPanelObj = (UnityEngine_GameObject_o *)this->fields.gateNextPointCounterLabel;
          if ( shipPanelObj )
          {
            LODWORD(shipPanelObj[2].monitor) = v35;
            HIDWORD(shipPanelObj[2].monitor) = -v34;
            UICounterLabel__PlayAnimation((UICounterLabel_o *)shipPanelObj, 0LL);
            return;
          }
LABEL_39:
          sub_1B8880C(shipPanelObj, v7);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventSubmarineStatusComponent__ReleaseEventUIAssetData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *EventUIAssetDataPath; // x19

  if ( (byte_4A59C23 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    byte_4A59C23 = 1;
  }
  if ( this->fields.eventAssetData )
  {
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    EventUIAssetDataPath = TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(
                             eventId,
                             *(const MethodInfo **)&eventId);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0LL);
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__ReleaseLocalAtlas(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventSubmarineStatusComponent_o *v2; // x19
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4A59C24 & 1) == 0 )
  {
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    byte_4A59C24 = 1;
  }
  atlasList = v2->fields.atlasList;
  if ( !atlasList )
    sub_1B8880C(this, method);
  size = atlasList->fields._size;
  v5 = atlasList->fields._version + 1;
  atlasList->fields._size = 0;
  atlasList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
}


bool __fastcall TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
        TitleInfoEventSubmarineStatusComponent_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A59C26 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_4A59C26 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_UIAtlas___),
        ((unsigned __int8)IsNullOrEmpty & 1) == 0) )
  {
    if ( sprite )
    {
      UISprite__set_spriteName(sprite, 0LL, 0LL);
      return 1;
    }
    goto LABEL_19;
  }
  IsNullOrEmpty = this->fields.atlasList;
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v16 = v15;
  do
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v9 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1B8880C(IsNullOrEmpty, v8);
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1B8880C(v9, v10);
    v12 = UIAtlas__GetSprite((UIAtlas_o *)v16.fields._current, spriteName, 0LL);
  }
  while ( !v12 );
  if ( !sprite )
    sub_1B8880C(v12, v13);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void __fastcall TitleInfoEventSubmarineStatusComponent__Setup(
        TitleInfoEventSubmarineStatusComponent_o *this,
        EventDetailEntity_o *eventDetailEntity,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  struct EventDetailEntity_o **p_eventDetailEnt; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2
  struct System_String_o *GoalAnimName; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *statusBg; // x0
  const MethodInfo *v15; // x1
  int32_t eventId; // w21
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  UILabel_o *titleLabel; // x21
  UILabel_o *progressNameLabel; // x21
  int32_t v32; // w20
  struct System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseList; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  TitleInfoEventSubmarineStatusComponent_o *v36; // x0
  const MethodInfo *v37; // x2
  TitleInfoEventSubmarineStatusComponent_o *ProgressQuestReleaseEnt; // x21
  const MethodInfo *v39; // x2
  QuestReleaseEntity_o *CurrentQuestReleaseEnt; // x0
  const MethodInfo *v41; // x1
  QuestReleaseEntity_o *v42; // x20
  const MethodInfo *v43; // x5
  int32_t questId; // w8
  int32_t ValueInt; // w0
  int32_t v46; // w0
  int32_t maxPoint; // w22
  int32_t userOldPoint; // w25
  System_String_o *v49; // x21
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x0
  System_String_o *v54; // x21
  System_String_o *v55; // x0
  struct System_String_o *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  UICounterLabel_o *gateNextPointCounterLabel; // x21
  int v60; // w22
  const MethodInfo *v61; // x3
  TitleInfoEventSubmarineStatusComponent_c *v62; // x0
  UICounterLabel_o *progressPointCounterLabel; // x20
  int32_t v64; // w21
  float PROGRESS_ANIMATION_TIME; // s8
  UnityEngine_GameObject_o *shipPanelObj; // x20
  const MethodInfo *v67; // x2
  const MethodInfo *v68; // x1
  int32_t v69; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A59C09 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__);
    sub_1B885B0(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_19189/*"event_goal"*/);
    sub_1B885B0(&StringLiteral_19214/*"event_progressicon"*/);
    sub_1B885B0(&StringLiteral_19212/*"event_progressgauge_front"*/);
    sub_1B885B0(&StringLiteral_5716/*"EVENT_SUBMARINE_NEXT_DESCRIPTION"*/);
    sub_1B885B0(&StringLiteral_5644/*"EVENT_POINT_COMMON_FORMAT"*/);
    sub_1B885B0(&StringLiteral_1537/*"94053407"*/);
    sub_1B885B0(&StringLiteral_5717/*"EVENT_SUBMARINE_NEXT_POINT"*/);
    sub_1B885B0(&StringLiteral_5724/*"EVENT_SUBMARINE_STATUS_TITLE"*/);
    sub_1B885B0(&StringLiteral_19255/*"event_status_point"*/);
    sub_1B885B0(&StringLiteral_19209/*"event_progress_point"*/);
    sub_1B885B0(&StringLiteral_19201/*"event_next"*/);
    sub_1B885B0(&StringLiteral_19211/*"event_progressgauge_back"*/);
    sub_1B885B0(&StringLiteral_5713/*"EVENT_SUBMARINE_GAUGE_CURRENT"*/);
    sub_1B885B0(&StringLiteral_19210/*"event_progressgauge"*/);
    sub_1B885B0(&StringLiteral_19213/*"event_progressgaugebg_80393"*/);
    byte_4A59C09 = 1;
  }
  this->fields.eventDetailEnt = eventDetailEntity;
  p_eventDetailEnt = &this->fields.eventDetailEnt;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventDetailEnt,
    (int32_t)eventDetailEntity,
    (int32_t)mapAssetData,
    (int32_t)method);
  this->fields.mapAssetData = mapAssetData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mapAssetData, (int32_t)mapAssetData, v8, v9);
  this->fields.isCompleatedCount = 0;
  this->fields.isGoalAnimToLoop = 0;
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 0, v10);
  this->fields.animClipName = GoalAnimName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.animClipName, (int32_t)GoalAnimName, v12, v13);
  if ( !this->fields.eventDetailEnt )
    goto LABEL_48;
  eventId = this->fields.eventDetailEnt->fields.eventId;
  v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__, 0LL);
  TitleInfoEventSubmarineStatusComponent__LoadEventUIAssetData(this, eventId, v17, v18);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_33724224(gameObject, 62.0, 0.0, 0.0, 0LL);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.statusBg,
    (System_String_o *)StringLiteral_19213/*"event_progressgaugebg_80393"*/,
    v20);
  statusBg = (System_String_o *)this->fields.statusBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.areaIcon,
    (System_String_o *)StringLiteral_1537/*"94053407"*/,
    v21);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeFrame,
    (System_String_o *)StringLiteral_19210/*"event_progressgauge"*/,
    v22);
  statusBg = (System_String_o *)this->fields.gaugeFrame;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeBar,
    (System_String_o *)StringLiteral_19212/*"event_progressgauge_front"*/,
    v23);
  statusBg = (System_String_o *)this->fields.gaugeBar;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeBg,
    (System_String_o *)StringLiteral_19211/*"event_progressgauge_back"*/,
    v24);
  statusBg = (System_String_o *)this->fields.gaugeBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.shipIcon,
    (System_String_o *)StringLiteral_19214/*"event_progressicon"*/,
    v25);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.progressPointBg,
    (System_String_o *)StringLiteral_19255/*"event_status_point"*/,
    v26);
  statusBg = (System_String_o *)this->fields.progressPointBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateNextIcon,
    (System_String_o *)StringLiteral_19201/*"event_next"*/,
    v27);
  statusBg = (System_String_o *)this->fields.gateNextIcon;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateGoalIcon,
    (System_String_o *)StringLiteral_19189/*"event_goal"*/,
    v28);
  statusBg = (System_String_o *)this->fields.gateGoalIcon;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateNextPointBg,
    (System_String_o *)StringLiteral_19209/*"event_progress_point"*/,
    v29);
  statusBg = (System_String_o *)this->fields.gateNextPointBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5724/*"EVENT_SUBMARINE_STATUS_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_48;
  UILabel__set_text(titleLabel, statusBg, 0LL);
  progressNameLabel = this->fields.progressNameLabel;
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5713/*"EVENT_SUBMARINE_GAUGE_CURRENT"*/, 0LL);
  if ( !progressNameLabel )
    goto LABEL_48;
  UILabel__set_text(progressNameLabel, statusBg, 0LL);
  if ( !*p_eventDetailEnt )
    goto LABEL_48;
  v32 = (*p_eventDetailEnt)->fields.eventId;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  QuestReleaseList = TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(v32, v15);
  this->fields.baseQuestReleaseEntList = QuestReleaseList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseQuestReleaseEntList,
    (int32_t)QuestReleaseList,
    v34,
    v35);
  ProgressQuestReleaseEnt = (TitleInfoEventSubmarineStatusComponent_o *)TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
                                                                          v36,
                                                                          this->fields.baseQuestReleaseEntList,
                                                                          v37);
  CurrentQuestReleaseEnt = TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
                             ProgressQuestReleaseEnt,
                             this->fields.baseQuestReleaseEntList,
                             v39);
  if ( CurrentQuestReleaseEnt )
    v42 = CurrentQuestReleaseEnt;
  else
    v42 = (QuestReleaseEntity_o *)ProgressQuestReleaseEnt;
  this->fields.userPoint = TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(this, v41);
  if ( v42 )
    questId = v42->fields.questId;
  else
    questId = 0;
  this->fields.currentQuestId = questId;
  if ( ProgressQuestReleaseEnt )
    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)ProgressQuestReleaseEnt, 0LL);
  else
    ValueInt = 0;
  this->fields.minPoint = ValueInt;
  if ( v42 )
    v46 = QuestReleaseEntity__getValueInt(v42, 0LL);
  else
    v46 = 0;
  this->fields.maxPoint = v46;
  TitleInfoEventSubmarineStatusComponent__SetupOldData(
    this,
    &this->fields.userOldPoint,
    &this->fields.oldQuestId,
    &this->fields.progressQuestId,
    &this->fields.isLastGoalPlayed,
    v43);
  maxPoint = this->fields.maxPoint;
  userOldPoint = this->fields.userOldPoint;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_5716/*"EVENT_SUBMARINE_NEXT_DESCRIPTION"*/, 0LL);
  v69 = this->fields.maxPoint;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v50, v51, v52);
  v54 = System_String__Format(v49, v53, 0LL);
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_5717/*"EVENT_SUBMARINE_NEXT_POINT"*/, 0LL);
  v56 = System_String__Concat_61707032(v54, v55, 0LL);
  this->fields.nextPointTextFormat = v56;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.nextPointTextFormat, (int32_t)v56, v57, v58);
  statusBg = (System_String_o *)TitleInfoEventSubmarineStatusComponent_TypeInfo;
  gateNextPointCounterLabel = this->fields.gateNextPointCounterLabel;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  if ( !gateNextPointCounterLabel )
    goto LABEL_48;
  v60 = (maxPoint - userOldPoint) & ~((maxPoint - userOldPoint) >> 31);
  UICounterLabel__Setup(
    gateNextPointCounterLabel,
    v60,
    TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields->PROGRESS_ANIMATION_TIME,
    this->fields.nextPointTextFormat,
    0,
    0LL);
  statusBg = (System_String_o *)this->fields.gateNextPointCounterLabel;
  if ( !statusBg )
    goto LABEL_48;
  UICounterLabel__SetCountLabel((UICounterLabel_o *)statusBg, v60, 0LL);
  if ( TitleInfoEventSubmarineStatusComponent__IsAllClear(this, v42, this->fields.userOldPoint, v61) )
  {
    statusBg = (System_String_o *)this->fields.gateNextPointCounterLabel;
    if ( !statusBg )
      goto LABEL_48;
    statusBg = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusBg, 0LL);
    if ( !statusBg )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusBg, 0, 0LL);
  }
  v62 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  progressPointCounterLabel = this->fields.progressPointCounterLabel;
  v64 = this->fields.userOldPoint;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v62 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  PROGRESS_ANIMATION_TIME = v62->static_fields->PROGRESS_ANIMATION_TIME;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  if ( !progressPointCounterLabel
    || (UICounterLabel__Setup(progressPointCounterLabel, v64, PROGRESS_ANIMATION_TIME, statusBg, 0, 0LL),
        (statusBg = (System_String_o *)this->fields.progressPointCounterLabel) == 0LL) )
  {
LABEL_48:
    sub_1B8880C(statusBg, v15);
  }
  UICounterLabel__SetCountLabel((UICounterLabel_o *)statusBg, this->fields.userOldPoint, 0LL);
  shipPanelObj = this->fields.shipPanelObj;
  v70 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, this->fields.userOldPoint, v67);
  GameObjectExtensions__SetLocalPosition(shipPanelObj, v70, 0LL);
  TitleInfoEventSubmarineStatusComponent__SetupAnimation(this, v68);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__SetupAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gateNextIcon; // x0
  void (__fastcall *castClass)(float); // x8
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct UnityEngine_GameObject_o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v12; // x2
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x20
  System_Predicate_object__o *v14; // x21
  Il2CppObject *v15; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v16; // x21
  QuestReleaseEntity_o *v17; // x20
  System_Predicate_object__o *v18; // x22
  Il2CppObject *v19; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v20; // x22
  QuestReleaseEntity_o *v21; // x21
  System_Predicate_object__o *v22; // x23
  Il2CppObject *v23; // x22
  int32_t ValueInt; // w0
  int32_t oldQuestId; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v27; // x20
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  struct UnityEngine_GameObject_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x1
  const MethodInfo *v34; // x2
  long double v35; // q0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A59C0A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_1B885B0(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__);
    sub_1B885B0(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__);
    sub_1B885B0(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__);
    byte_4A59C0A = 1;
  }
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon )
    goto LABEL_43;
  castClass = (void (__fastcall *)(float))gateNextIcon->klass[1]._1.castClass;
  if ( this->fields.userOldPoint >= this->fields.maxPoint )
  {
    castClass(0.0);
    goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
    {
      v8 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v6);
      this->fields.goalAnimObject = v8;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.goalAnimObject, (int32_t)v8, v9, v10);
    }
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v7);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v12);
  }
  else
  {
    castClass(1.0);
  }
  baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
  v14 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__,
    0LL);
  if ( !baseQuestReleaseEntList )
    goto LABEL_43;
  v15 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)baseQuestReleaseEntList,
          (System_Predicate_T__o *)v14,
          (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v16 = this->fields.baseQuestReleaseEntList;
  v17 = (QuestReleaseEntity_o *)v15;
  v18 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__,
    0LL);
  if ( !v16 )
    goto LABEL_43;
  v19 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v16,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v20 = this->fields.baseQuestReleaseEntList;
  v21 = (QuestReleaseEntity_o *)v19;
  v22 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v22,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__,
    0LL);
  if ( !v20 )
    goto LABEL_43;
  v23 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v20,
          (System_Predicate_T__o *)v22,
          (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v17 )
    LODWORD(v17) = QuestReleaseEntity__getValueInt(v17, 0LL);
  if ( v21 )
    LODWORD(v21) = QuestReleaseEntity__getValueInt(v21, 0LL);
  if ( v23 )
    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v23, 0LL);
  else
    ValueInt = 0;
  if ( (int)v21 >= ValueInt )
    goto LABEL_39;
  oldQuestId = this->fields.oldQuestId;
  if ( !oldQuestId )
  {
    if ( this->fields.currentQuestId >= 1 )
    {
      gateNextIcon = this->fields.shipPanelObj;
      if ( gateNextIcon )
      {
        gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     gateNextIcon,
                                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
        if ( gateNextIcon )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gateNextIcon->klass[1]._1.castClass)(
            gateNextIcon,
            gateNextIcon->klass[1]._1.declaringType,
            0.0);
          gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
          if ( gateNextIcon )
          {
            klass = gateNextIcon->klass;
            LODWORD(v35) = 0;
LABEL_42:
            ((void (__fastcall *)(long double))klass[1]._1.castClass)(v35);
            return;
          }
        }
      }
LABEL_43:
      sub_1B8880C(gateNextIcon, method);
    }
LABEL_39:
    gateNextIcon = this->fields.shipPanelObj;
    if ( gateNextIcon )
    {
      gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gateNextIcon,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
      if ( gateNextIcon )
      {
        klass = gateNextIcon->klass;
        LODWORD(v35) = 1.0;
        goto LABEL_42;
      }
    }
    goto LABEL_43;
  }
  if ( (int)v17 >= ValueInt || oldQuestId < 1 )
    goto LABEL_39;
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gaugeBar;
  if ( !gateNextIcon )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateNextIcon, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition(this->fields.shipPanelObj, LocalPosition, 0LL);
  gateNextIcon = this->fields.shipPanelObj;
  if ( !gateNextIcon )
    goto LABEL_43;
  gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gateNextIcon,
                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !gateNextIcon )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gateNextIcon->klass[1]._1.castClass)(
    gateNextIcon,
    gateNextIcon->klass[1]._1.declaringType,
    1.0);
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gateNextIcon->klass[1]._1.castClass)(
    gateNextIcon,
    gateNextIcon->klass[1]._1.declaringType,
    0.0);
  v27 = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v27, 0LL, 0LL) )
  {
    v30 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v28);
    this->fields.goalAnimObject = v30;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.goalAnimObject, (int32_t)v30, v31, v32);
  }
  v33 = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v29);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, v33, v34);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__SetupOldData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t *oldPoint,
        int32_t *oldQuestId,
        int32_t *progressQuestId,
        bool *isLastGoalPlayed,
        const MethodInfo *method)
{
  EventSaveData_o *gateNextIcon; // x0
  __int64 v12; // x1
  TerminalPramsManager_c *v13; // x8
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x9
  struct EventDetailEntity_o *eventDetailEnt; // x10
  TerminalPramsManager_c *v16; // x0
  System_String_array *ValueByArray; // x0
  __int64 v18; // x1
  __int64 v19; // x8
  System_String_array *v20; // x23
  System_String_o *v21; // x20
  TerminalPramsManager_c *v22; // x0
  int32_t userPoint; // w8
  int32_t targetQuestId; // w20

  if ( (byte_4A59C15 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A59C15 = 1;
  }
  *oldPoint = 0;
  *oldQuestId = 0;
  *progressQuestId = 0;
  *isLastGoalPlayed = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  gateNextIcon = (EventSaveData_o *)TerminalPramsManager__CheckEventSubmarinePointSaveData(0LL);
  v13 = TerminalPramsManager_TypeInfo;
  if ( ((unsigned __int8)gateNextIcon & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57F0A )
    {
      gateNextIcon = (EventSaveData_o *)sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57F0A = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    if ( v13->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
    {
      if ( !v13->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v13);
      if ( !byte_4A57F0A )
      {
        gateNextIcon = (EventSaveData_o *)sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57F0A = 1;
      }
      v13 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v13 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventSubmarineSaveData_k__BackingField = v13->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !BeforeEventSubmarineSaveData_k__BackingField )
        goto LABEL_53;
      eventDetailEnt = this->fields.eventDetailEnt;
      if ( !eventDetailEnt )
        goto LABEL_53;
      if ( BeforeEventSubmarineSaveData_k__BackingField->fields.eventId == eventDetailEnt->fields.eventId )
      {
        if ( !v13->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v13);
        if ( !byte_4A57F0A )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A57F0A = 1;
        }
        v16 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v16 = TerminalPramsManager_TypeInfo;
        }
        gateNextIcon = v16->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
        if ( gateNextIcon )
        {
          ValueByArray = EventSaveData__GetValueByArray(gateNextIcon, 0x2Cu, 0LL);
          if ( ValueByArray )
          {
            v19 = *(_QWORD *)&ValueByArray->max_length;
            v20 = ValueByArray;
            if ( v19 )
            {
              if ( !(_DWORD)v19 )
                sub_1B88814(ValueByArray, v18);
              *oldPoint = System_Int32__Parse(ValueByArray->m_Items[0], 0LL);
              if ( (int)v20->max_length >= 2 )
              {
                *oldQuestId = System_Int32__Parse(v20->m_Items[1], 0LL);
                if ( (int)v20->max_length >= 3 )
                {
                  *progressQuestId = System_Int32__Parse(v20->m_Items[2], 0LL);
                  if ( (int)v20->max_length >= 4 )
                  {
                    v21 = v20->m_Items[3];
                    if ( !bool_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                    *isLastGoalPlayed = System_Boolean__Parse(v21, 0LL);
                  }
                }
              }
            }
          }
          return;
        }
LABEL_53:
        sub_1B8880C(gateNextIcon, v12);
      }
    }
  }
  if ( !v13->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v13);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  if ( v22->static_fields->_QuestId_k__BackingField != this->fields.uiReleaseQuestId )
  {
    userPoint = this->fields.userPoint;
    this->fields.isAfterTakingOver = 1;
    *oldPoint = userPoint;
    *oldQuestId = this->fields.currentQuestId;
    *progressQuestId = this->fields.currentQuestId;
    gateNextIcon = (EventSaveData_o *)this->fields.gateNextIcon;
    if ( !gateNextIcon )
      goto LABEL_53;
    ((void (__fastcall *)(EventSaveData_o *, Il2CppClass *, float))gateNextIcon->klass[1]._1.castClass)(
      gateNextIcon,
      gateNextIcon->klass[1]._1.declaringType,
      0.0);
    gateNextIcon = (EventSaveData_o *)this->fields.shipPanelObj;
    if ( !gateNextIcon )
      goto LABEL_53;
    gateNextIcon = (EventSaveData_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)gateNextIcon,
                                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    if ( !gateNextIcon )
      goto LABEL_53;
    ((void (__fastcall *)(EventSaveData_o *, Il2CppClass *, float))gateNextIcon->klass[1]._1.castClass)(
      gateNextIcon,
      gateNextIcon->klass[1]._1.declaringType,
      1.0);
    targetQuestId = this->fields.targetQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(1, targetQuestId, 0LL, 0, 0LL, 0LL) )
      *isLastGoalPlayed = 1;
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__UpdateDisp(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_0(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B8880C(this, 0LL);
  return n->fields.questId == this->fields.oldQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B8880C(this, 0LL);
  return n->fields.questId == this->fields.progressQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B8880C(this, 0LL);
  return n->fields.questId == this->fields.currentQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_0(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B8880C(this, 0LL);
  return n->fields.questId == this->fields.oldQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B8880C(this, 0LL);
  return n->fields.questId == this->fields.progressQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B8880C(this, 0LL);
  return n->fields.questId == this->fields.currentQuestId;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___Setup_b__54_0(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventDetailEntity_o *eventDetailEnt; // x8

  eventDetailEnt = this->fields.eventDetailEnt;
  if ( !eventDetailEnt )
    sub_1B8880C(this, method);
  TitleInfoEventSubmarineStatusComponent__LoadLocalAtlas(this, eventDetailEnt->fields.eventId, v2);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall TitleInfoEventSubmarineStatusComponent__get_BasePosition(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *gaugeBar; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float v5; // s0
  float v6; // s1
  float v7; // s2
  struct UISprite_o *v8; // x8
  float v9; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  gaugeBar = (UnityEngine_Component_o *)this->fields.gaugeBar;
  if ( !gaugeBar
    || (gameObject = UnityEngine_Component__get_gameObject(gaugeBar, 0LL),
        *(UnityEngine_Vector3_o *)&v5 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL),
        (v8 = this->fields.gaugeBar) == 0LL) )
  {
    sub_1B8880C(gaugeBar, method);
  }
  v9 = v5 + (float)v8->fields.mWidth;
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v9;
  return result;
}


float __fastcall TitleInfoEventSubmarineStatusComponent__get_GaugeWidth(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *gaugeBar; // x8

  gaugeBar = this->fields.gaugeBar;
  if ( !gaugeBar )
    sub_1B8880C(this, method);
  return (float)gaugeBar->fields.mWidth;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A59C2A & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
    byte_4A59C2A = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventSubmarineStatusComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall TitleInfoEventSubmarineStatusComponent___c___ctor(
        TitleInfoEventSubmarineStatusComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall TitleInfoEventSubmarineStatusComponent___c___GetQuestReleaseList_b__80_0(
        TitleInfoEventSubmarineStatusComponent___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (TitleInfoEventSubmarineStatusComponent___c_o *)QuestReleaseEntity__getValueInt(a, 0LL), !b) )
    sub_1B8880C(this, a);
  return (_DWORD)this - QuestReleaseEntity__getValueInt(b, 0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___ctor(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___EndAnimation_b__0(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  struct TitleInfoEventSubmarineStatusComponent_o *_4__this; // x8

  if ( !n || (_4__this = this->fields.__4__this) == 0LL )
    sub_1B8880C(this, n);
  return n->fields.questId == _4__this->fields.currentQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___EndAnimation_b__1(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B8880C(this, 0LL);
  return n->fields.questId == this->fields.tmpProgressQuestId;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0___ctor(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0___LoadEventUIAssetData_b__0(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct TitleInfoEventSubmarineStatusComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, data);
  _4__this->fields.eventAssetData = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.eventAssetData, (int32_t)data, (int32_t)method, v3);
  ActionExtensions__Call(this->fields.callback, 0LL);
}