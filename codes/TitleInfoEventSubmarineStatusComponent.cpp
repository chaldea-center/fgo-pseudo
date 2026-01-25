void TitleInfoEventSubmarineStatusComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventSubmarineStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_4CECFED & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    byte_4CECFED = 1;
  }
  static_fields = TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->ENTRY_ANIMATION_TIME = xmmword_CF6EF0;
  static_fields->MAP_CHANGE_WAIT_TIME = 0.3;
}


void TitleInfoEventSubmarineStatusComponent___ctor(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CECFEC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    byte_4CECFEC = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.atlasList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0);
}


float TitleInfoEventSubmarineStatusComponent__ConvertPointToRate(
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
UnityEngine_Vector3_o TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t point,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct UISprite_o *gaugeBar; // x8
  int32_t maxPoint; // w9
  int mWidth; // w8
  float v10; // s3
  int32_t minPoint; // w10
  float v12; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  result = TitleInfoEventSubmarineStatusComponent__get_BasePosition(this, *(const MethodInfo **)&point);
  gaugeBar = this->fields.gaugeBar;
  if ( !gaugeBar )
    sub_1C7BD40(v5, v6);
  maxPoint = this->fields.maxPoint;
  mWidth = gaugeBar->fields.mWidth;
  v10 = 1.0;
  if ( maxPoint > point )
  {
    minPoint = this->fields.minPoint;
    v10 = 0.0;
    if ( minPoint < point )
      v10 = (float)(point - minPoint) / (float)(maxPoint - minPoint);
  }
  v12 = result.fields.x - (float)(v10 * (float)mWidth);
  result.fields.x = v12;
  return result;
}


UnityEngine_GameObject_o *TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  AssetData_o *mapAssetData; // x0
  Il2CppObject *Object_object__51713432; // x20
  const MethodInfo *v5; // x2
  UnityEngine_GameObject_o *v6; // x21
  struct System_String_o *GoalAnimName; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v17; // x0

  if ( (byte_4CECFDB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CECFDB = 1;
  }
  mapAssetData = this->fields.mapAssetData;
  if ( !mapAssetData )
    return 0;
  Object_object__51713432 = AssetData__GetObject_object__51713432(
                              mapAssetData,
                              this->fields.goalIconAnimPrefabName,
                              (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51713432, 0, 0) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v5);
    this->fields.animClipName = GoalAnimName;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.animClipName,
      (int32_t)GoalAnimName,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__Instantiate_object_(
            Object_object__51713432,
            (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v14 )
      sub_1C7BD40(0, v15);
    v6 = (UnityEngine_GameObject_o *)v14;
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v14, 0);
    GameObjectExtensions__SafeSetParent_36529116(gameObject, this->fields.statusObj, 0);
    v17 = UnityEngine_GameObject__get_gameObject(v6, 0);
    GameObjectExtensions__ResetLocalPosition(v17, 0);
  }
  return v6;
}


System_String_o *TitleInfoEventSubmarineStatusComponent__CreateSaveData(
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
  if ( (byte_4CECFDF & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    sub_1C7BAE8(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    byte_4CECFDF = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v14, 0);
  v6 = System_Int32__ToString((int32_t)&v13, 0);
  v7 = System_Int32__ToString((int32_t)&v12, 0);
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v9 = System_Boolean__ToString((bool)&v11, 0);
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  return TitleInfoEventSubmarineStatusComponent__CreateSaveData_40351564(v5, v6, v7, v9, v8);
}


System_String_o *TitleInfoEventSubmarineStatusComponent__CreateSaveData_40351564(
        System_String_o *userPoint,
        System_String_o *currentQuestId,
        System_String_o *progressQuestId,
        System_String_o *isLastGoalPlayed,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4CECFE0 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&StringLiteral_809/*","*/);
    byte_4CECFE0 = 1;
  }
  v9 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v9, 0);
  if ( !v9 )
    sub_1C7BD40(v10, v11);
  System_Text_StringBuilder__Append_64260872(v9, userPoint, 0);
  System_Text_StringBuilder__Append_64260872(v9, (System_String_o *)StringLiteral_809/*","*/, 0);
  System_Text_StringBuilder__Append_64260872(v9, currentQuestId, 0);
  System_Text_StringBuilder__Append_64260872(v9, (System_String_o *)StringLiteral_809/*","*/, 0);
  System_Text_StringBuilder__Append_64260872(v9, progressQuestId, 0);
  System_Text_StringBuilder__Append_64260872(v9, (System_String_o *)StringLiteral_809/*","*/, 0);
  System_Text_StringBuilder__Append_64260872(v9, isLastGoalPlayed, 0);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v9->klass->vtable._3_ToString.methodPtr)(
                              v9,
                              v9->klass->vtable._3_ToString.method);
}


void TitleInfoEventSubmarineStatusComponent__DestroyGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v4; // x2
  struct System_String_o *GoalAnimName; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1
  UnityEngine_GameObject_o *Component_object; // x0
  GrandQuestFolderBoardItem_o *p_goalAnimObject; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4CECFDD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CECFDD = 1;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(goalAnimObject, 0, 0) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 0, v4);
    this->fields.animClipName = GoalAnimName;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.animClipName,
      (int32_t)GoalAnimName,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    Component_object = this->fields.goalAnimObject;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0 )
    {
      sub_1C7BD40(Component_object, v12);
    }
    p_goalAnimObject = (GrandQuestFolderBoardItem_o *)&this->fields.goalAnimObject;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Component_object, 0);
    klass = (UnityEngine_Object_o *)p_goalAnimObject->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(klass, 0);
    p_goalAnimObject->klass = 0;
    sub_1C7BA8C(p_goalAnimObject, 0, v16, v17, v18, v19, v20, v21);
  }
}


void TitleInfoEventSubmarineStatusComponent__EndAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  MissionNotifyManager_o *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v14; // x2
  int32_t userPoint; // w8
  int32_t currentQuestId; // w9
  TerminalPramsManager_c *v17; // x0
  EventSaveData_o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  TerminalPramsManager_c *v25; // x0
  GrandQuestFolderBoardItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v27; // x0
  System_String_array *ValueByArray; // x0
  System_String_array *v29; // x22
  int32_t v30; // w23
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x24
  System_Predicate_object__o *v32; // x25
  Il2CppObject *v33; // x0
  int32_t v34; // w8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v35; // x24
  System_Predicate_object__o *v36; // x25
  const MethodInfo *v37; // x4
  struct EventDetailEntity_o *eventDetailEnt; // x8
  struct UIWidget_o *mWidget; // x9
  int32_t v40; // w21
  _BOOL4 isLastGoalPlayed; // w24
  struct UIWidget_o *v42; // x20
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7

  if ( (byte_4CECFD7 & 1) == 0 )
  {
    sub_1C7BAE8(&EventSaveData_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_1C7BAE8(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C7BAE8(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__);
    sub_1C7BAE8(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__);
    sub_1C7BAE8(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo);
    byte_4CECFD7 = 1;
  }
  v3 = sub_1C7BD34(TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_59;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.isGoalAnimToLoop )
  {
    this->fields.isGoalAnimToLoop = 0;
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v12);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v14);
  }
  this->fields.isAfterTakingOver = 0;
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  MissionNotifyManager__EndPause(Instance, 0);
  userPoint = this->fields.userPoint;
  currentQuestId = this->fields.currentQuestId;
  this->fields.isCompleatedCount = 0;
  this->fields.userOldPoint = userPoint;
  this->fields.oldQuestId = currentQuestId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CEAF5F )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEAF5F = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  if ( !v17->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
  {
    v18 = (EventSaveData_o *)sub_1C7BD34(EventSaveData_TypeInfo);
    EventSaveData___ctor(v18, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CEAF60 )
    {
      sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      byte_4CEAF60 = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v25 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (GrandQuestFolderBoardItem_o *)&v25->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v18;
    sub_1C7BA8C(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v18, v19, v20, v21, v22, v23, v24);
    v17 = TerminalPramsManager_TypeInfo;
  }
  if ( !v17->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v17);
  if ( !byte_4CEAF5F )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEAF5F = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  Instance = (MissionNotifyManager_o *)v27->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  if ( !Instance )
LABEL_59:
    sub_1C7BD40(Instance, v5);
  ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)Instance, 0x2Cu, 0);
  v29 = ValueByArray;
  if ( !ValueByArray )
  {
    v30 = 0;
    goto LABEL_35;
  }
  if ( SLODWORD(ValueByArray->max_length) < 2 )
  {
    v30 = 0;
    goto LABEL_34;
  }
  v30 = System_Int32__Parse(ValueByArray->m_Items[1], 0);
  if ( SLODWORD(v29->max_length) < 3 )
  {
LABEL_34:
    LODWORD(v29) = 0;
    goto LABEL_35;
  }
  LODWORD(v29) = System_Int32__Parse(v29->m_Items[2], 0);
LABEL_35:
  baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
  v32 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v32,
    (Il2CppObject *)v3,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__,
    0);
  if ( !baseQuestReleaseEntList )
    goto LABEL_59;
  v33 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)baseQuestReleaseEntList,
          (System_Predicate_T__o *)v32,
          (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v34 = this->fields.currentQuestId;
  if ( v33 )
    v30 = this->fields.currentQuestId;
  if ( (int)v29 > v34 )
    v34 = (int)v29;
  *(_DWORD *)(v3 + 24) = v34;
  v35 = this->fields.baseQuestReleaseEntList;
  v36 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v36,
    (Il2CppObject *)v3,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__,
    0);
  if ( !v35 )
    goto LABEL_59;
  if ( System_Collections_Generic_List_object___Find(
         (System_Collections_Generic_List_object__o *)v35,
         (System_Predicate_T__o *)v36,
         (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
  {
    LODWORD(v29) = *(_DWORD *)(v3 + 24);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CEAF5F )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEAF5F = 1;
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
  LODWORD(mWidget->fields.m_CachedPtr) = eventDetailEnt->fields.eventId;
  if ( !byte_4CEAF5F )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    byte_4CEAF5F = 1;
  }
  if ( !LODWORD(Instance[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
  }
  v40 = this->fields.userPoint;
  isLastGoalPlayed = this->fields.isLastGoalPlayed;
  v42 = Instance[2].fields.mNoticeNumberComp[6].fields.mWidget;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  Instance = (MissionNotifyManager_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData(
                                         v40,
                                         v30,
                                         (int32_t)v29,
                                         isLastGoalPlayed,
                                         v37);
  if ( !v42 )
    goto LABEL_59;
  v42->fields.m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o *)Instance;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v42->fields.m_CancellationTokenSource,
    (int32_t)Instance,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(0);
  ActionExtensions__Call(this->fields.onEndAnim, 0);
}


void TitleInfoEventSubmarineStatusComponent__EndExitAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventSubmarineStatusComponent_c *v3; // x0

  if ( (byte_4CECFD1 & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10695/*"PlayEntryAnimation"*/);
    byte_4CECFD1 = 1;
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
    (System_String_o *)StringLiteral_10695/*"PlayEntryAnimation"*/,
    v3->static_fields->MAP_CHANGE_WAIT_TIME,
    0);
}


void TitleInfoEventSubmarineStatusComponent__EndProgressAnimation(
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
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  TitleInfoEventSubmarineStatusComponent_o *ProgressQuestReleaseEnt; // x21
  const MethodInfo *v20; // x2
  QuestReleaseEntity_o *CurrentQuestReleaseEnt; // x0
  const MethodInfo *v22; // x3
  QuestReleaseEntity_o *v23; // x1
  const MethodInfo *v24; // x1
  struct UnityEngine_GameObject_o *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  UnityEngine_Object_o *v32; // x20
  const MethodInfo *v33; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v35; // x2
  TitleInfoEventSubmarineStatusComponent_c *v36; // x0

  if ( (byte_4CECFD4 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5990/*"EndAnimation"*/);
    byte_4CECFD4 = 1;
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
  v8 = UnityEngine_Object__op_Inequality(goalAnimObject, 0, 0);
  if ( v8 )
  {
    gateNextPointCounterLabel = *p_goalAnimObject;
    if ( !*p_goalAnimObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(gateNextPointCounterLabel, 0, 0);
    v12 = (UnityEngine_Object_o *)*p_goalAnimObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(v12, 0);
    *p_goalAnimObject = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.goalAnimObject, 0, v13, v14, v15, v16, v17, v18);
  }
  ProgressQuestReleaseEnt = (TitleInfoEventSubmarineStatusComponent_o *)TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
                                                                          (TitleInfoEventSubmarineStatusComponent_o *)v8,
                                                                          this->fields.baseQuestReleaseEntList,
                                                                          v10);
  CurrentQuestReleaseEnt = TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
                             ProgressQuestReleaseEnt,
                             this->fields.baseQuestReleaseEntList,
                             v20);
  if ( CurrentQuestReleaseEnt )
    v23 = CurrentQuestReleaseEnt;
  else
    v23 = (QuestReleaseEntity_o *)ProgressQuestReleaseEnt;
  if ( TitleInfoEventSubmarineStatusComponent__IsAllClear(this, v23, this->fields.userPoint, v22) )
  {
    gateNextPointCounterLabel = (UnityEngine_GameObject_o *)this->fields.gateNextPointCounterLabel;
    if ( !gateNextPointCounterLabel
      || (gateNextPointCounterLabel = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)gateNextPointCounterLabel,
                                        0)) == 0 )
    {
LABEL_31:
      sub_1C7BD40(gateNextPointCounterLabel, v9);
    }
    UnityEngine_GameObject__SetActive(gateNextPointCounterLabel, 0, 0);
  }
  gateNextPointCounterLabel = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextPointCounterLabel )
    goto LABEL_31;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gateNextPointCounterLabel->klass[1]._1.element_class)(
    gateNextPointCounterLabel,
    gateNextPointCounterLabel->klass[1]._1.castClass,
    0.0);
  this->fields.isGoalAnimToLoop = 1;
  v25 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v24);
  this->fields.goalAnimObject = v25;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.goalAnimObject, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v32, 0, 0) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v33);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v35);
  }
  v36 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v36 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5990/*"EndAnimation"*/,
    v36->static_fields->GOAL_ANIMATION_TIME,
    0);
}


QuestReleaseEntity_o *TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Collections_Generic_List_QuestReleaseEntity__o *baseList,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x19
  int32_t v7; // w20
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CECFE3 & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_4CECFE3 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !baseList )
    sub_1C7BD40(this, baseList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)baseList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current )
      sub_1C7BD40(v4, v5);
    v7 = *(_DWORD *)((char *)&v9.fields._current->klass + (unsigned __int64)&word_10);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_40887944(v7, -1, 0, 0) )
      goto LABEL_12;
  }
  current = 0;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return (QuestReleaseEntity_o *)current;
}


System_String_o *TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CECFE5 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6283/*"EventUI/Prefabs/{0}"*/);
    byte_4CECFE5 = 1;
  }
  v5 = eventId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v5);
  return System_String__Format((System_String_o *)StringLiteral_6283/*"EventUI/Prefabs/{0}"*/, v3, 0);
}


UnityEngine_GameObject_o *TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4CECFEB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    byte_4CECFEB = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.eventAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__51713432(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  return result;
}


System_String_o *TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t animType,
        const MethodInfo *method)
{
  System_String_o *goalIconAnimPrefabName; // x0
  __int64 *v6; // x8

  if ( (byte_4CECFDA & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_16625/*"_loop"*/);
    sub_1C7BAE8(&StringLiteral_16644/*"_start"*/);
    sub_1C7BAE8(&StringLiteral_16623/*"_last"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_16609/*"_end"*/);
    byte_4CECFDA = 1;
  }
  goalIconAnimPrefabName = this->fields.goalIconAnimPrefabName;
  if ( this->fields.isLastGoalPlayed )
    goalIconAnimPrefabName = System_String__Concat_64176912(
                               goalIconAnimPrefabName,
                               (System_String_o *)StringLiteral_16623/*"_last"*/,
                               0);
  switch ( animType )
  {
    case 3:
      v6 = &StringLiteral_16609/*"_end"*/;
      return System_String__Concat_64176912(goalIconAnimPrefabName, (System_String_o *)*v6, 0);
    case 2:
      v6 = &StringLiteral_16625/*"_loop"*/;
      return System_String__Concat_64176912(goalIconAnimPrefabName, (System_String_o *)*v6, 0);
    case 1:
      v6 = &StringLiteral_16644/*"_start"*/;
      return System_String__Concat_64176912(goalIconAnimPrefabName, (System_String_o *)*v6, 0);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


QuestReleaseEntity_o *TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Collections_Generic_List_QuestReleaseEntity__o *baseList,
        const MethodInfo *method)
{
  Il2CppObject *current; // x24
  QuestReleaseEntity_o *v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w20
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CECFE2 & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_4CECFE2 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !baseList )
    sub_1C7BD40(this, baseList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)baseList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  current = 0;
  do
  {
    v5 = (QuestReleaseEntity_o *)current;
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v6 )
      break;
    current = v10.fields._current;
    if ( !v10.fields._current )
      sub_1C7BD40(v6, v7);
    v8 = *(_DWORD *)((char *)&v10.fields._current->klass + (unsigned __int64)&word_10);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  }
  while ( CondType__IsQuestClear_40887944(v8, -1, 0, 0) );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v5;
}


System_Collections_Generic_List_QuestReleaseEntity__o *TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
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
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Comparison_T__o *v22; // x20
  Il2CppObject *v23; // x21
  struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CECFE1 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Comparison_QuestReleaseEntity__TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__);
    sub_1C7BAE8(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
    byte_4CECFE1 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_26;
  ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                              (QuestReleaseMaster_o *)Instance,
                              eventId,
                              85,
                              0);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !ListByTargetAndCondType )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)ListByTargetAndCondType,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v33,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v7 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_1C7BD40(v7, v8);
    QuestType = QuestMaster__GetQuestType((int32_t)v33.fields._current[1].klass, 0);
    if ( (_DWORD)QuestType == 2 )
    {
      if ( !v6 )
        sub_1C7BD40(QuestType, v11);
      items = v6->fields._items;
      v19 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C7BD40(QuestType, v11);
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          current,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v21[4] = (Il2CppClass *)current;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)current, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  Instance = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
    Instance = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
  }
  v22 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v22 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
    }
    v23 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v22 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      v22,
      v23,
      Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__,
      0);
    static_fields = TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields;
    static_fields->__9__80_0 = (struct System_Comparison_QuestReleaseEntity__o *)v22;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__80_0, (int32_t)v22, v25, v26, v27, v28, v29, v30);
  }
  if ( !v6 )
LABEL_26:
    sub_1C7BD40(Instance, v4);
  System_Collections_Generic_List_object___Sort_58984640(
    v6,
    v22,
    (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v6;
}


int32_t TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  struct EventDetailEntity_o *eventDetailEnt; // x8

  if ( (byte_4CECFD8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CECFD8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  eventDetailEnt = this->fields.eventDetailEnt;
  if ( !eventDetailEnt || !MasterData_object )
LABEL_13:
    sub_1C7BD40(Instance, v4);
  return UserEventPointMaster__GetEventPointTotal(
           (UserEventPointMaster_o *)MasterData_object,
           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
           eventDetailEnt->fields.eventId,
           -1,
           0);
}


bool TitleInfoEventSubmarineStatusComponent__IsAllClear(
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
  _BOOL8 IsQuestClear_40887944; // x0
  __int64 v13; // x1

  if ( (byte_4CECFE4 & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___);
    byte_4CECFE4 = 1;
  }
  baseQuestReleaseEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseQuestReleaseEntList;
  if ( baseQuestReleaseEntList )
  {
    baseQuestReleaseEntList = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__LastOrDefault_object_(
                                                                                     baseQuestReleaseEntList,
                                                                                     (const MethodInfo_319C160 *)Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___);
    if ( baseQuestReleaseEntList )
    {
      v8 = baseQuestReleaseEntList;
      ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)baseQuestReleaseEntList, 0);
      klass = (int32_t)v8[1].klass;
      v11 = ValueInt;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_40887944 = CondType__IsQuestClear_40887944(klass, -1, 0, 0);
      if ( !currentQuestReleaseEnt )
        sub_1C7BD40(IsQuestClear_40887944, v13);
      LOBYTE(baseQuestReleaseEntList) = IsQuestClear_40887944
                                      & (v11 <= nowPoint)
                                      & (QuestReleaseEntity__getValueInt(currentQuestReleaseEnt, 0) == v11);
    }
  }
  return (char)baseQuestReleaseEntList;
}


bool TitleInfoEventSubmarineStatusComponent__IsDispPossible(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool TitleInfoEventSubmarineStatusComponent__IsEventRaidBoss(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool TitleInfoEventSubmarineStatusComponent__IsPlayingGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *goalAnimObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4CECFDE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CECFDE = 1;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(goalAnimObject, 0, 0) )
    return 0;
  Component_object = this->fields.goalAnimObject;
  if ( !Component_object
    || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         Component_object,
                                                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0 )
  {
    sub_1C7BD40(Component_object, v4);
  }
  return UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)Component_object, 0);
}


void TitleInfoEventSubmarineStatusComponent__LoadEventUIAssetData(
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
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v24; // x20

  if ( (byte_4CECFE6 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C7BAE8(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C7BAE8(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__);
    sub_1C7BAE8(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo);
    byte_4CECFE6 = 1;
  }
  v7 = sub_1C7BD34(TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C7BD40(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  EventUIAssetDataPath = TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(eventId, v22);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v7,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v24, 1, 0) )
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventSubmarineStatusComponent__LoadLocalAtlas(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  TitleInfoEventSubmarineStatusComponent_o *v4; // x20
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v7; // w9
  int i; // w28
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  Il2CppObject *Component_object; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v23; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v25; // x8
  int32_t v26; // [xsp+8h] [xbp-58h] BYREF
  int v27; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4CECFE9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25320/*"{0:D2}"*/);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1C7BAE8(&StringLiteral_5350/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_4CECFE9 = 1;
  }
  if ( v4->fields.eventAssetData )
  {
    atlasList = v4->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1C7BD40(this, *(_QWORD *)&eventId);
    size = atlasList->fields._size;
    v7 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0);
    for ( i = 1; ; ++i )
    {
      v27 = i;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
      v10 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25320/*"{0:D2}"*/, v9, 0);
      v26 = eventId;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
      v12 = System_String__Format_64218220((System_String_o *)StringLiteral_5350/*"DownloadEventUIAtlas{0}{1}"*/, v11, v10, 0);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
                                                                 v4,
                                                                 v12,
                                                                 v13);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (TitleInfoEventSubmarineStatusComponent_o *)UnityEngine_Object__op_Equality(
                                                           GameObjectFromEventUIAssetData,
                                                           0,
                                                           0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
        break;
      this = (TitleInfoEventSubmarineStatusComponent_o *)v4->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      m_CachedPtr = this->fields.m_CachedPtr;
      v23 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v25 + 32) = Component_object;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v25 + 32), (int32_t)Component_object, v16, v17, v18, v19, v20, v21);
      }
    }
  }
}


void TitleInfoEventSubmarineStatusComponent__OnDestroy(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventDetailEntity_o *eventDetailEnt; // x8
  const MethodInfo *v5; // x1

  eventDetailEnt = this->fields.eventDetailEnt;
  if ( !eventDetailEnt )
    sub_1C7BD40(this, method);
  TitleInfoEventSubmarineStatusComponent__ReleaseEventUIAssetData(this, eventDetailEnt->fields.eventId, v2);
  TitleInfoEventSubmarineStatusComponent__ReleaseLocalAtlas(this, v5);
}


void TitleInfoEventSubmarineStatusComponent__OnEnable(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( !System_String__IsNullOrEmpty(this->fields.animClipName, 0) )
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, this->fields.animClipName, v3);
}


void TitleInfoEventSubmarineStatusComponent__PlayAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Action_o *onEndAnim,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x1
  int32_t UserEventPoint; // w0
  const MethodInfo *v12; // x2
  int32_t oldQuestId; // w8
  int32_t currentQuestId; // w9
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x21
  System_Predicate_object__o *v16; // x22
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v20; // x22
  QuestReleaseEntity_o *v21; // x21
  System_Predicate_object__o *v22; // x23
  Il2CppObject *v23; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v24; // x23
  QuestReleaseEntity_o *v25; // x22
  System_Predicate_object__o *v26; // x24
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  Il2CppObject *v33; // x23
  const MethodInfo *v34; // x1
  int32_t v35; // w8

  if ( (byte_4CECFCF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_1C7BAE8(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C7BAE8(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__);
    sub_1C7BAE8(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__);
    sub_1C7BAE8(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__);
    byte_4CECFCF = 1;
  }
  if ( this->fields.isAfterTakingOver )
  {
    this->fields.onEndAnim = onEndAnim;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.onEndAnim,
      (int32_t)onEndAnim,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    TitleInfoEventSubmarineStatusComponent__EndAnimation(this, v10);
    return;
  }
  UserEventPoint = TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(this, (const MethodInfo *)onEndAnim);
  oldQuestId = this->fields.oldQuestId;
  currentQuestId = this->fields.currentQuestId;
  this->fields.userPoint = UserEventPoint;
  if ( oldQuestId == currentQuestId && this->fields.userOldPoint == UserEventPoint )
  {
    TitleInfoEventSubmarineStatusComponent__PlayLastMapAnimation(this, onEndAnim, v12);
    return;
  }
  baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
  v16 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__,
    0);
  if ( !baseQuestReleaseEntList )
    goto LABEL_28;
  v19 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)baseQuestReleaseEntList,
          (System_Predicate_T__o *)v16,
          (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v20 = this->fields.baseQuestReleaseEntList;
  v21 = (QuestReleaseEntity_o *)v19;
  v22 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v22,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__,
    0);
  if ( !v20 )
    goto LABEL_28;
  v23 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v20,
          (System_Predicate_T__o *)v22,
          (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v24 = this->fields.baseQuestReleaseEntList;
  v25 = (QuestReleaseEntity_o *)v23;
  v26 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v26,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__,
    0);
  if ( !v24 )
    goto LABEL_28;
  v33 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v24,
          (System_Predicate_T__o *)v26,
          (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v21 )
    LODWORD(v21) = QuestReleaseEntity__getValueInt(v21, 0);
  if ( v25 )
    LODWORD(v25) = QuestReleaseEntity__getValueInt(v25, 0);
  if ( v33 )
    LODWORD(v33) = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v33, 0);
  if ( (int)v21 > (int)v33 )
  {
    ActionExtensions__Call(onEndAnim, 0);
    return;
  }
  this->fields.onEndAnim = onEndAnim;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.onEndAnim, (int32_t)onEndAnim, v27, v28, v29, v30, v31, v32);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1C7BD40(Instance, v18);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  if ( (int)v25 < (int)v33 )
  {
    v35 = this->fields.oldQuestId;
    if ( v35 )
    {
      if ( (int)v21 < (int)v33 && v35 >= 1 )
      {
        TitleInfoEventSubmarineStatusComponent__PlayExitAnimation(this, v34);
        return;
      }
    }
    else if ( this->fields.currentQuestId >= 1 )
    {
      TitleInfoEventSubmarineStatusComponent__PlayEntryAnimation(this, v34);
      return;
    }
  }
  TitleInfoEventSubmarineStatusComponent__PlayProgressAnimation(this, v34);
}


void TitleInfoEventSubmarineStatusComponent__PlayEntryAnimation(
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
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  Il2CppObject *v23; // x20
  UnityEngine_GameObject_o *v24; // x19
  TitleInfoEventSubmarineStatusComponent_c *v25; // x0
  float v26; // s0
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CECFD2 & 1) == 0 )
  {
    sub_1C7BAE8(&EventDelegate_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6000/*"EndEntryAnimation"*/);
    byte_4CECFD2 = 1;
  }
  shipPanelObj = this->fields.shipPanelObj;
  v27 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, this->fields.minPoint, v2);
  GameObjectExtensions__SetLocalPosition(shipPanelObj, v27, 0);
  gateNextIcon = this->fields.shipPanelObj;
  if ( !gateNextIcon )
    goto LABEL_33;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gateNextIcon,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148((UnityEngine_Object_o *)Component_object, 0);
  }
  gateNextIcon = this->fields.shipPanelObj;
  if ( !gateNextIcon )
    goto LABEL_33;
  gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                               gateNextIcon,
                                               (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
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
  v12 = (EventDelegate_o *)sub_1C7BD34(EventDelegate_TypeInfo);
  EventDelegate___ctor_49793316(v12, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6000/*"EndEntryAnimation"*/, 0);
  if ( !klass )
    goto LABEL_33;
  items = klass->fields._items;
  v20 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++klass->fields._version;
  if ( !items )
    goto LABEL_33;
  size = klass->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v12,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v12;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
  }
  UITweener__PlayForward((UITweener_o *)v8, 0);
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon )
    goto LABEL_33;
  gateNextIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateNextIcon, 0);
  if ( !gateNextIcon )
    goto LABEL_33;
  v23 = UnityEngine_GameObject__GetComponent_object_(
          gateNextIcon,
          (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148((UnityEngine_Object_o *)v23, 0);
  }
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon
    || (gateNextIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateNextIcon, 0)) == 0
    || (gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                     gateNextIcon,
                                                     (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___)) == 0 )
  {
LABEL_33:
    sub_1C7BD40(gateNextIcon, v5);
  }
  gateNextIcon[5].monitor = (void *)0x3F80000000000000LL;
  v24 = gateNextIcon;
  v25 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v25 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  v26 = v25->static_fields->ENTRY_ANIMATION_TIME;
  LODWORD(v24[1].monitor) = 3;
  *(float *)&v24[2].monitor = v26;
  UITweener__PlayForward((UITweener_o *)v24, 0);
}


void TitleInfoEventSubmarineStatusComponent__PlayExitAnimation(
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
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  struct UnityEngine_GameObject_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_String_o *GoalAnimName; // x1
  const MethodInfo *v31; // x2

  if ( (byte_4CECFD0 & 1) == 0 )
  {
    sub_1C7BAE8(&EventDelegate_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6010/*"EndExitAnimation"*/);
    byte_4CECFD0 = 1;
  }
  shipPanelObj = this->fields.shipPanelObj;
  if ( !shipPanelObj )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       shipPanelObj,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148((UnityEngine_Object_o *)Component_object, 0);
  }
  shipPanelObj = this->fields.shipPanelObj;
  if ( !shipPanelObj )
    goto LABEL_24;
  shipPanelObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                               shipPanelObj,
                                               (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
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
  v9 = (EventDelegate_o *)sub_1C7BD34(EventDelegate_TypeInfo);
  EventDelegate___ctor_49793316(v9, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6010/*"EndExitAnimation"*/, 0);
  if ( !klass
    || (items = klass->fields._items,
        v17 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++klass->fields._version,
        !items) )
  {
LABEL_24:
    sub_1C7BD40(shipPanelObj, method);
  }
  size = klass->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v9,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v9;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
  }
  UITweener__PlayForward((UITweener_o *)v5, 0);
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(goalAnimObject, 0, 0) )
  {
    v23 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v21);
    this->fields.goalAnimObject = v23;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.goalAnimObject, (int32_t)v23, v24, v25, v26, v27, v28, v29);
  }
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 3, v22);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v31);
}


void TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *animClipName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *goalAnimObject; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4CECFDC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CECFDC = 1;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(goalAnimObject, 0, 0) )
  {
    this->fields.animClipName = animClipName;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.animClipName,
      (int32_t)animClipName,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    Component_object = this->fields.goalAnimObject;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0 )
    {
      sub_1C7BD40(Component_object, v12);
    }
    UnityEngine_Animation__Play_71613624((UnityEngine_Animation_o *)Component_object, this->fields.animClipName, 0);
  }
}


void TitleInfoEventSubmarineStatusComponent__PlayLastMapAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Action_o *onEndAnim,
        const MethodInfo *method)
{
  int32_t targetQuestId; // w21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  struct UnityEngine_GameObject_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v23; // x2
  TitleInfoEventSubmarineStatusComponent_c *v24; // x0

  if ( (byte_4CECFD5 & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10702/*"PlayLastMapStartedAnimation"*/);
    byte_4CECFD5 = 1;
  }
  if ( this->fields.isLastGoalPlayed )
    goto LABEL_14;
  targetQuestId = this->fields.targetQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsOpen(1, targetQuestId, 0, 0, 0, 0) )
  {
LABEL_14:
    ActionExtensions__Call(onEndAnim, 0);
  }
  else
  {
    this->fields.onEndAnim = onEndAnim;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.onEndAnim, (int32_t)onEndAnim, v6, v7, v8, v9, v10, v11);
    goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(goalAnimObject, 0, 0) )
    {
      v15 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v13);
      this->fields.goalAnimObject = v15;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.goalAnimObject,
        (int32_t)v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 3, v14);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v23);
    v24 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v24 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10702/*"PlayLastMapStartedAnimation"*/,
      v24->static_fields->EXIT_ANIMATION_TIME,
      0);
  }
}


void TitleInfoEventSubmarineStatusComponent__PlayLastMapStartedAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v5; // x2
  TitleInfoEventSubmarineStatusComponent_c *v6; // x0

  if ( (byte_4CECFD6 & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5990/*"EndAnimation"*/);
    byte_4CECFD6 = 1;
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
    (System_String_o *)StringLiteral_5990/*"EndAnimation"*/,
    v6->static_fields->GOAL_ANIMATION_TIME,
    0);
}


void TitleInfoEventSubmarineStatusComponent__PlayProgressAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  UnityEngine_GameObject_o *shipPanelObj; // x0
  float v9; // s11
  float v10; // s12
  float v11; // s13
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v13; // x20
  TitleInfoEventSubmarineStatusComponent_c *v14; // x0
  System_Collections_Generic_List_object__o *klass; // x21
  float PROGRESS_ANIMATION_TIME; // s0
  EventDelegate_o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  TitleInfoEventSubmarineStatusComponent_c *v28; // x0
  int32_t userOldPoint; // w8
  int v30; // w9
  UnityEngine_Object_o *gateNextPointCounterLabel; // x20
  int32_t v32; // w8
  int32_t userPoint; // w9
  int32_t maxPoint; // w10
  int v35; // w9
  int v36; // w8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CECFD3 & 1) == 0 )
  {
    sub_1C7BAE8(&EventDelegate_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6027/*"EndProgressAnimation"*/);
    byte_4CECFD3 = 1;
  }
  LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.shipPanelObj, 0);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  v38 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, this->fields.userPoint, v6);
  if ( x <= v38.fields.x )
  {
    v28 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v28 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6027/*"EndProgressAnimation"*/,
      v28->static_fields->PROGRESS_ANIMATION_TIME,
      0);
  }
  else
  {
    shipPanelObj = this->fields.shipPanelObj;
    if ( !shipPanelObj )
      goto LABEL_39;
    v9 = v38.fields.x;
    v10 = v38.fields.y;
    v11 = v38.fields.z;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         shipPanelObj,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71870148((UnityEngine_Object_o *)Component_object, 0);
    }
    shipPanelObj = this->fields.shipPanelObj;
    if ( !shipPanelObj )
      goto LABEL_39;
    shipPanelObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                 shipPanelObj,
                                                 (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    if ( !shipPanelObj )
      goto LABEL_39;
    *(float *)&shipPanelObj[5].monitor = x;
    *((float *)&shipPanelObj[5].monitor + 1) = y;
    *(float *)&shipPanelObj[5].fields.m_CachedPtr = z;
    *((float *)&shipPanelObj[5].fields.m_CachedPtr + 1) = v9;
    *(float *)&shipPanelObj[6].klass = v10;
    *((float *)&shipPanelObj[6].klass + 1) = v11;
    v13 = shipPanelObj;
    v14 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v14 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    klass = (System_Collections_Generic_List_object__o *)v13[3].klass;
    PROGRESS_ANIMATION_TIME = v14->static_fields->PROGRESS_ANIMATION_TIME;
    LODWORD(v13[1].monitor) = 3;
    *(float *)&v13[2].monitor = PROGRESS_ANIMATION_TIME;
    v17 = (EventDelegate_o *)sub_1C7BD34(EventDelegate_TypeInfo);
    EventDelegate___ctor_49793316(v17, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6027/*"EndProgressAnimation"*/, 0);
    if ( !klass )
      goto LABEL_39;
    items = klass->fields._items;
    v25 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++klass->fields._version;
    if ( !items )
      goto LABEL_39;
    size = klass->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        klass,
        (Il2CppObject *)v17,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &items->obj.klass + size;
      klass->fields._size = size + 1;
      v27[4] = (Il2CppClass *)v17;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)v17, v18, v19, v20, v21, v22, v23);
    }
    UITweener__PlayForward((UITweener_o *)v13, 0);
  }
  if ( !this->fields.isCompleatedCount )
  {
    userOldPoint = this->fields.userOldPoint;
    v30 = this->fields.userPoint - userOldPoint;
    if ( v30 )
    {
      shipPanelObj = (UnityEngine_GameObject_o *)this->fields.progressPointCounterLabel;
      this->fields.isCompleatedCount = 1;
      if ( !shipPanelObj )
        goto LABEL_39;
      LODWORD(shipPanelObj[2].monitor) = userOldPoint;
      HIDWORD(shipPanelObj[2].monitor) = v30;
      UICounterLabel__PlayAnimation((UICounterLabel_o *)shipPanelObj, 0);
    }
  }
  gateNextPointCounterLabel = (UnityEngine_Object_o *)this->fields.gateNextPointCounterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gateNextPointCounterLabel, 0, 0) )
  {
    v32 = this->fields.userOldPoint;
    userPoint = this->fields.userPoint;
    if ( v32 != userPoint )
    {
      maxPoint = this->fields.maxPoint;
      if ( userPoint >= maxPoint )
        userPoint = this->fields.maxPoint;
      v35 = userPoint - v32;
      if ( v35 >= 1 )
      {
        v36 = maxPoint - v32;
        if ( v36 >= 1 )
        {
          shipPanelObj = (UnityEngine_GameObject_o *)this->fields.gateNextPointCounterLabel;
          if ( shipPanelObj )
          {
            LODWORD(shipPanelObj[2].monitor) = v36;
            HIDWORD(shipPanelObj[2].monitor) = -v35;
            UICounterLabel__PlayAnimation((UICounterLabel_o *)shipPanelObj, 0);
            return;
          }
LABEL_39:
          sub_1C7BD40(shipPanelObj, v7);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventSubmarineStatusComponent__ReleaseEventUIAssetData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *EventUIAssetDataPath; // x19

  if ( (byte_4CECFE7 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    byte_4CECFE7 = 1;
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
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0);
  }
}


void TitleInfoEventSubmarineStatusComponent__ReleaseLocalAtlas(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventSubmarineStatusComponent_o *v2; // x19
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4CECFE8 & 1) == 0 )
  {
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    byte_4CECFE8 = 1;
  }
  atlasList = v2->fields.atlasList;
  if ( !atlasList )
    sub_1C7BD40(this, method);
  size = atlasList->fields._size;
  v5 = atlasList->fields._version + 1;
  atlasList->fields._size = 0;
  atlasList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0);
}


bool TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
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

  if ( (byte_4CECFEA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_4CECFEA = 1;
  }
  memset(&v16, 0, sizeof(v16));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_317C204 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
        ((unsigned __int8)IsNullOrEmpty & 1) == 0) )
  {
    if ( sprite )
    {
      UISprite__set_spriteName(sprite, 0, 0);
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
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v16 = v15;
  do
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v9 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0, 0);
        return 0;
      }
LABEL_19:
      sub_1C7BD40(IsNullOrEmpty, v8);
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1C7BD40(v9, v10);
    v12 = UIAtlas__GetSprite((UIAtlas_o *)v16.fields._current, spriteName, 0);
  }
  while ( !v12 );
  if ( !sprite )
    sub_1C7BD40(v12, v13);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0);
  UISprite__set_spriteName(sprite, spriteName, 0);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void TitleInfoEventSubmarineStatusComponent__Setup(
        TitleInfoEventSubmarineStatusComponent_o *this,
        EventDetailEntity_o *eventDetailEntity,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct EventDetailEntity_o **p_eventDetailEnt; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x2
  struct System_String_o *GoalAnimName; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_String_o *statusBg; // x0
  const MethodInfo *v27; // x1
  int32_t eventId; // w21
  System_Action_o *v29; // x22
  const MethodInfo *v30; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  UILabel_o *titleLabel; // x21
  UILabel_o *progressNameLabel; // x21
  int32_t v44; // w20
  struct System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseList; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  TitleInfoEventSubmarineStatusComponent_o *v52; // x0
  const MethodInfo *v53; // x2
  TitleInfoEventSubmarineStatusComponent_o *ProgressQuestReleaseEnt; // x21
  const MethodInfo *v55; // x2
  QuestReleaseEntity_o *CurrentQuestReleaseEnt; // x0
  const MethodInfo *v57; // x1
  QuestReleaseEntity_o *v58; // x20
  const MethodInfo *v59; // x5
  int32_t questId; // w8
  int32_t ValueInt; // w0
  int32_t v62; // w0
  int32_t maxPoint; // w22
  int32_t userOldPoint; // w25
  System_String_o *v65; // x21
  Il2CppObject *v66; // x0
  System_String_o *v67; // x21
  System_String_o *v68; // x0
  struct System_String_o *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  UICounterLabel_o *gateNextPointCounterLabel; // x21
  int32_t v77; // w22
  const MethodInfo *v78; // x3
  TitleInfoEventSubmarineStatusComponent_c *v79; // x0
  UICounterLabel_o *progressPointCounterLabel; // x20
  int32_t v81; // w21
  float PROGRESS_ANIMATION_TIME; // s8
  UnityEngine_GameObject_o *shipPanelObj; // x20
  const MethodInfo *v84; // x2
  const MethodInfo *v85; // x1
  int32_t v86; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CECFCD & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__);
    sub_1C7BAE8(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19351/*"event_goal"*/);
    sub_1C7BAE8(&StringLiteral_19376/*"event_progressicon"*/);
    sub_1C7BAE8(&StringLiteral_19374/*"event_progressgauge_front"*/);
    sub_1C7BAE8(&StringLiteral_5729/*"EVENT_SUBMARINE_NEXT_DESCRIPTION"*/);
    sub_1C7BAE8(&StringLiteral_5647/*"EVENT_POINT_COMMON_FORMAT"*/);
    sub_1C7BAE8(&StringLiteral_1444/*"94053407"*/);
    sub_1C7BAE8(&StringLiteral_5730/*"EVENT_SUBMARINE_NEXT_POINT"*/);
    sub_1C7BAE8(&StringLiteral_5737/*"EVENT_SUBMARINE_STATUS_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_19417/*"event_status_point"*/);
    sub_1C7BAE8(&StringLiteral_19371/*"event_progress_point"*/);
    sub_1C7BAE8(&StringLiteral_19363/*"event_next"*/);
    sub_1C7BAE8(&StringLiteral_19373/*"event_progressgauge_back"*/);
    sub_1C7BAE8(&StringLiteral_5726/*"EVENT_SUBMARINE_GAUGE_CURRENT"*/);
    sub_1C7BAE8(&StringLiteral_19372/*"event_progressgauge"*/);
    sub_1C7BAE8(&StringLiteral_19375/*"event_progressgaugebg_80393"*/);
    byte_4CECFCD = 1;
  }
  this->fields.eventDetailEnt = eventDetailEntity;
  p_eventDetailEnt = &this->fields.eventDetailEnt;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventDetailEnt,
    (int32_t)eventDetailEntity,
    (int32_t)mapAssetData,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.mapAssetData = mapAssetData;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mapAssetData,
    (int32_t)mapAssetData,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.isCompleatedCount = 0;
  this->fields.isGoalAnimToLoop = 0;
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 0, v18);
  this->fields.animClipName = GoalAnimName;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.animClipName,
    (int32_t)GoalAnimName,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( !this->fields.eventDetailEnt )
    goto LABEL_48;
  eventId = this->fields.eventDetailEnt->fields.eventId;
  v29 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__, 0);
  TitleInfoEventSubmarineStatusComponent__LoadEventUIAssetData(this, eventId, v29, v30);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPosition_36523428(gameObject, 62.0, 0.0, 0.0, 0);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.statusBg,
    (System_String_o *)StringLiteral_19375/*"event_progressgaugebg_80393"*/,
    v32);
  statusBg = (System_String_o *)this->fields.statusBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.generic_class)(
    statusBg,
    statusBg->klass[1]._1.typeMetadataHandle);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.areaIcon,
    (System_String_o *)StringLiteral_1444/*"94053407"*/,
    v33);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeFrame,
    (System_String_o *)StringLiteral_19372/*"event_progressgauge"*/,
    v34);
  statusBg = (System_String_o *)this->fields.gaugeFrame;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.generic_class)(
    statusBg,
    statusBg->klass[1]._1.typeMetadataHandle);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeBar,
    (System_String_o *)StringLiteral_19374/*"event_progressgauge_front"*/,
    v35);
  statusBg = (System_String_o *)this->fields.gaugeBar;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.generic_class)(
    statusBg,
    statusBg->klass[1]._1.typeMetadataHandle);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeBg,
    (System_String_o *)StringLiteral_19373/*"event_progressgauge_back"*/,
    v36);
  statusBg = (System_String_o *)this->fields.gaugeBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.generic_class)(
    statusBg,
    statusBg->klass[1]._1.typeMetadataHandle);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.shipIcon,
    (System_String_o *)StringLiteral_19376/*"event_progressicon"*/,
    v37);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.progressPointBg,
    (System_String_o *)StringLiteral_19417/*"event_status_point"*/,
    v38);
  statusBg = (System_String_o *)this->fields.progressPointBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.generic_class)(
    statusBg,
    statusBg->klass[1]._1.typeMetadataHandle);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateNextIcon,
    (System_String_o *)StringLiteral_19363/*"event_next"*/,
    v39);
  statusBg = (System_String_o *)this->fields.gateNextIcon;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.generic_class)(
    statusBg,
    statusBg->klass[1]._1.typeMetadataHandle);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateGoalIcon,
    (System_String_o *)StringLiteral_19351/*"event_goal"*/,
    v40);
  statusBg = (System_String_o *)this->fields.gateGoalIcon;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.generic_class)(
    statusBg,
    statusBg->klass[1]._1.typeMetadataHandle);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateNextPointBg,
    (System_String_o *)StringLiteral_19371/*"event_progress_point"*/,
    v41);
  statusBg = (System_String_o *)this->fields.gateNextPointBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.generic_class)(
    statusBg,
    statusBg->klass[1]._1.typeMetadataHandle);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5737/*"EVENT_SUBMARINE_STATUS_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_48;
  UILabel__set_text(titleLabel, statusBg, 0);
  progressNameLabel = this->fields.progressNameLabel;
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5726/*"EVENT_SUBMARINE_GAUGE_CURRENT"*/, 0);
  if ( !progressNameLabel )
    goto LABEL_48;
  UILabel__set_text(progressNameLabel, statusBg, 0);
  if ( !*p_eventDetailEnt )
    goto LABEL_48;
  v44 = (*p_eventDetailEnt)->fields.eventId;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  QuestReleaseList = TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(v44, v27);
  this->fields.baseQuestReleaseEntList = QuestReleaseList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseQuestReleaseEntList,
    (int32_t)QuestReleaseList,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  ProgressQuestReleaseEnt = (TitleInfoEventSubmarineStatusComponent_o *)TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
                                                                          v52,
                                                                          this->fields.baseQuestReleaseEntList,
                                                                          v53);
  CurrentQuestReleaseEnt = TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
                             ProgressQuestReleaseEnt,
                             this->fields.baseQuestReleaseEntList,
                             v55);
  if ( CurrentQuestReleaseEnt )
    v58 = CurrentQuestReleaseEnt;
  else
    v58 = (QuestReleaseEntity_o *)ProgressQuestReleaseEnt;
  this->fields.userPoint = TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(this, v57);
  if ( v58 )
    questId = v58->fields.questId;
  else
    questId = 0;
  this->fields.currentQuestId = questId;
  if ( ProgressQuestReleaseEnt )
    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)ProgressQuestReleaseEnt, 0);
  else
    ValueInt = 0;
  this->fields.minPoint = ValueInt;
  if ( v58 )
    v62 = QuestReleaseEntity__getValueInt(v58, 0);
  else
    v62 = 0;
  this->fields.maxPoint = v62;
  TitleInfoEventSubmarineStatusComponent__SetupOldData(
    this,
    &this->fields.userOldPoint,
    &this->fields.oldQuestId,
    &this->fields.progressQuestId,
    &this->fields.isLastGoalPlayed,
    v59);
  maxPoint = this->fields.maxPoint;
  userOldPoint = this->fields.userOldPoint;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_5729/*"EVENT_SUBMARINE_NEXT_DESCRIPTION"*/, 0);
  v86 = this->fields.maxPoint;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86);
  v67 = System_String__Format(v65, v66, 0);
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_5730/*"EVENT_SUBMARINE_NEXT_POINT"*/, 0);
  v69 = System_String__Concat_64176912(v67, v68, 0);
  this->fields.nextPointTextFormat = v69;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.nextPointTextFormat,
    (int32_t)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  statusBg = (System_String_o *)TitleInfoEventSubmarineStatusComponent_TypeInfo;
  gateNextPointCounterLabel = this->fields.gateNextPointCounterLabel;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  if ( !gateNextPointCounterLabel )
    goto LABEL_48;
  v77 = (maxPoint - userOldPoint) & ~((maxPoint - userOldPoint) >> 31);
  UICounterLabel__Setup(
    gateNextPointCounterLabel,
    v77,
    TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields->PROGRESS_ANIMATION_TIME,
    this->fields.nextPointTextFormat,
    0,
    0);
  statusBg = (System_String_o *)this->fields.gateNextPointCounterLabel;
  if ( !statusBg )
    goto LABEL_48;
  UICounterLabel__SetCountLabel((UICounterLabel_o *)statusBg, v77, 0);
  if ( TitleInfoEventSubmarineStatusComponent__IsAllClear(this, v58, this->fields.userOldPoint, v78) )
  {
    statusBg = (System_String_o *)this->fields.gateNextPointCounterLabel;
    if ( !statusBg )
      goto LABEL_48;
    statusBg = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusBg, 0);
    if ( !statusBg )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusBg, 0, 0);
  }
  v79 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  progressPointCounterLabel = this->fields.progressPointCounterLabel;
  v81 = this->fields.userOldPoint;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v79 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  PROGRESS_ANIMATION_TIME = v79->static_fields->PROGRESS_ANIMATION_TIME;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5647/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
  if ( !progressPointCounterLabel
    || (UICounterLabel__Setup(progressPointCounterLabel, v81, PROGRESS_ANIMATION_TIME, statusBg, 0, 0),
        (statusBg = (System_String_o *)this->fields.progressPointCounterLabel) == 0) )
  {
LABEL_48:
    sub_1C7BD40(statusBg, v27);
  }
  UICounterLabel__SetCountLabel((UICounterLabel_o *)statusBg, this->fields.userOldPoint, 0);
  shipPanelObj = this->fields.shipPanelObj;
  v87 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, this->fields.userOldPoint, v84);
  GameObjectExtensions__SetLocalPosition(shipPanelObj, v87, 0);
  TitleInfoEventSubmarineStatusComponent__SetupAnimation(this, v85);
}


void TitleInfoEventSubmarineStatusComponent__SetupAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gateNextIcon; // x0
  void (__fastcall *element_class)(float); // x8
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct UnityEngine_GameObject_o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v16; // x2
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x20
  System_Predicate_object__o *v18; // x21
  Il2CppObject *v19; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v20; // x21
  QuestReleaseEntity_o *v21; // x20
  System_Predicate_object__o *v22; // x22
  Il2CppObject *v23; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v24; // x22
  QuestReleaseEntity_o *v25; // x21
  System_Predicate_object__o *v26; // x23
  Il2CppObject *v27; // x22
  int32_t ValueInt; // w0
  int32_t oldQuestId; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v31; // x20
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  struct UnityEngine_GameObject_o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_String_o *v41; // x1
  const MethodInfo *v42; // x2
  long double v43; // q0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CECFCE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_1C7BAE8(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__);
    sub_1C7BAE8(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__);
    sub_1C7BAE8(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__);
    byte_4CECFCE = 1;
  }
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon )
    goto LABEL_43;
  element_class = (void (__fastcall *)(float))gateNextIcon->klass[1]._1.element_class;
  if ( this->fields.userOldPoint >= this->fields.maxPoint )
  {
    element_class(0.0);
    goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(goalAnimObject, 0, 0) )
    {
      v8 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v6);
      this->fields.goalAnimObject = v8;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.goalAnimObject, (int32_t)v8, v9, v10, v11, v12, v13, v14);
    }
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v7);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v16);
  }
  else
  {
    element_class(1.0);
  }
  baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
  v18 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__,
    0);
  if ( !baseQuestReleaseEntList )
    goto LABEL_43;
  v19 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)baseQuestReleaseEntList,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v20 = this->fields.baseQuestReleaseEntList;
  v21 = (QuestReleaseEntity_o *)v19;
  v22 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v22,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__,
    0);
  if ( !v20 )
    goto LABEL_43;
  v23 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v20,
          (System_Predicate_T__o *)v22,
          (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v24 = this->fields.baseQuestReleaseEntList;
  v25 = (QuestReleaseEntity_o *)v23;
  v26 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v26,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__,
    0);
  if ( !v24 )
    goto LABEL_43;
  v27 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v24,
          (System_Predicate_T__o *)v26,
          (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v21 )
    LODWORD(v21) = QuestReleaseEntity__getValueInt(v21, 0);
  if ( v25 )
    LODWORD(v25) = QuestReleaseEntity__getValueInt(v25, 0);
  if ( v27 )
    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v27, 0);
  else
    ValueInt = 0;
  if ( (int)v25 >= ValueInt )
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
                                                     (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
        if ( gateNextIcon )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gateNextIcon->klass[1]._1.element_class)(
            gateNextIcon,
            gateNextIcon->klass[1]._1.castClass,
            0.0);
          gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
          if ( gateNextIcon )
          {
            klass = gateNextIcon->klass;
            LODWORD(v43) = 0;
LABEL_42:
            ((void (__fastcall *)(long double))klass[1]._1.element_class)(v43);
            return;
          }
        }
      }
LABEL_43:
      sub_1C7BD40(gateNextIcon, method);
    }
LABEL_39:
    gateNextIcon = this->fields.shipPanelObj;
    if ( gateNextIcon )
    {
      gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gateNextIcon,
                                                   (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
      if ( gateNextIcon )
      {
        klass = gateNextIcon->klass;
        LODWORD(v43) = 1.0;
        goto LABEL_42;
      }
    }
    goto LABEL_43;
  }
  if ( (int)v21 >= ValueInt || oldQuestId < 1 )
    goto LABEL_39;
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gaugeBar;
  if ( !gateNextIcon )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateNextIcon, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
  GameObjectExtensions__SetLocalPosition(this->fields.shipPanelObj, LocalPosition, 0);
  gateNextIcon = this->fields.shipPanelObj;
  if ( !gateNextIcon )
    goto LABEL_43;
  gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gateNextIcon,
                                               (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !gateNextIcon )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gateNextIcon->klass[1]._1.element_class)(
    gateNextIcon,
    gateNextIcon->klass[1]._1.castClass,
    1.0);
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gateNextIcon->klass[1]._1.element_class)(
    gateNextIcon,
    gateNextIcon->klass[1]._1.castClass,
    0.0);
  v31 = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v31, 0, 0) )
  {
    v34 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v32);
    this->fields.goalAnimObject = v34;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.goalAnimObject, (int32_t)v34, v35, v36, v37, v38, v39, v40);
  }
  v41 = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v33);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, v41, v42);
}


void TitleInfoEventSubmarineStatusComponent__SetupOldData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t *oldPoint,
        int32_t *oldQuestId,
        int32_t *progressQuestId,
        bool *isLastGoalPlayed,
        const MethodInfo *method)
{
  __int64 gateNextIcon; // x0
  __int64 v12; // x1
  TerminalPramsManager_c *v13; // x8
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x9
  struct EventDetailEntity_o *eventDetailEnt; // x10
  TerminalPramsManager_c *v16; // x0
  System_String_array *ValueByArray; // x0
  il2cpp_array_size_t max_length; // x8
  System_String_array *v19; // x23
  System_String_o *v20; // x20
  TerminalPramsManager_c *v21; // x0
  int32_t userPoint; // w8
  int32_t targetQuestId; // w20

  if ( (byte_4CECFD9 & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CECFD9 = 1;
  }
  *oldPoint = 0;
  *oldQuestId = 0;
  *progressQuestId = 0;
  *isLastGoalPlayed = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  gateNextIcon = TerminalPramsManager__CheckEventSubmarinePointSaveData(0);
  v13 = TerminalPramsManager_TypeInfo;
  if ( (gateNextIcon & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CEAF5F )
    {
      gateNextIcon = sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      byte_4CEAF5F = 1;
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
      if ( !byte_4CEAF5F )
      {
        gateNextIcon = sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        byte_4CEAF5F = 1;
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
        if ( !byte_4CEAF5F )
        {
          sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
          byte_4CEAF5F = 1;
        }
        v16 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v16 = TerminalPramsManager_TypeInfo;
        }
        gateNextIcon = (__int64)v16->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
        if ( gateNextIcon )
        {
          ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)gateNextIcon, 0x2Cu, 0);
          if ( ValueByArray )
          {
            max_length = ValueByArray->max_length;
            v19 = ValueByArray;
            if ( max_length )
            {
              if ( !(_DWORD)max_length )
                sub_1C7BD48(ValueByArray);
              *oldPoint = System_Int32__Parse(ValueByArray->m_Items[0], 0);
              if ( SLODWORD(v19->max_length) >= 2 )
              {
                *oldQuestId = System_Int32__Parse(v19->m_Items[1], 0);
                if ( SLODWORD(v19->max_length) >= 3 )
                {
                  *progressQuestId = System_Int32__Parse(v19->m_Items[2], 0);
                  if ( SLODWORD(v19->max_length) >= 4 )
                  {
                    v20 = v19->m_Items[3];
                    if ( !bool_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                    *isLastGoalPlayed = System_Boolean__Parse(v20, 0);
                  }
                }
              }
            }
          }
          return;
        }
LABEL_53:
        sub_1C7BD40(gateNextIcon, v12);
      }
    }
  }
  if ( !v13->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v13);
  if ( !byte_4CE84EC )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CE84EC = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  if ( v21->static_fields->_QuestId_k__BackingField != this->fields.uiReleaseQuestId )
  {
    userPoint = this->fields.userPoint;
    this->fields.isAfterTakingOver = 1;
    *oldPoint = userPoint;
    *oldQuestId = this->fields.currentQuestId;
    *progressQuestId = this->fields.currentQuestId;
    gateNextIcon = (__int64)this->fields.gateNextIcon;
    if ( !gateNextIcon )
      goto LABEL_53;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gateNextIcon + 440LL))(
      gateNextIcon,
      *(_QWORD *)(*(_QWORD *)gateNextIcon + 448LL),
      0.0);
    gateNextIcon = (__int64)this->fields.shipPanelObj;
    if ( !gateNextIcon )
      goto LABEL_53;
    gateNextIcon = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)gateNextIcon,
                              (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    if ( !gateNextIcon )
      goto LABEL_53;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gateNextIcon + 440LL))(
      gateNextIcon,
      *(_QWORD *)(*(_QWORD *)gateNextIcon + 448LL),
      1.0);
    targetQuestId = this->fields.targetQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(1, targetQuestId, 0, 0, 0, 0) )
      *isLastGoalPlayed = 1;
  }
}


void TitleInfoEventSubmarineStatusComponent__UpdateDisp(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  ;
}


bool TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_0(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C7BD40(this, 0);
  return n->fields.questId == this->fields.oldQuestId;
}


bool TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C7BD40(this, 0);
  return n->fields.questId == this->fields.progressQuestId;
}


bool TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C7BD40(this, 0);
  return n->fields.questId == this->fields.currentQuestId;
}


bool TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_0(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C7BD40(this, 0);
  return n->fields.questId == this->fields.oldQuestId;
}


bool TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C7BD40(this, 0);
  return n->fields.questId == this->fields.progressQuestId;
}


bool TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C7BD40(this, 0);
  return n->fields.questId == this->fields.currentQuestId;
}


void TitleInfoEventSubmarineStatusComponent___Setup_b__54_0(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventDetailEntity_o *eventDetailEnt; // x8

  eventDetailEnt = this->fields.eventDetailEnt;
  if ( !eventDetailEnt )
    sub_1C7BD40(this, method);
  TitleInfoEventSubmarineStatusComponent__LoadLocalAtlas(this, eventDetailEnt->fields.eventId, v2);
}


UnityEngine_Vector3_o TitleInfoEventSubmarineStatusComponent__get_BasePosition(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *gaugeBar; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_o *v5; // x8
  float v6; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  gaugeBar = (UnityEngine_Component_o *)this->fields.gaugeBar;
  if ( !gaugeBar
    || (gameObject = UnityEngine_Component__get_gameObject(gaugeBar, 0),
        result = GameObjectExtensions__GetLocalPosition(gameObject, 0),
        (v5 = this->fields.gaugeBar) == 0) )
  {
    sub_1C7BD40(gaugeBar, method);
  }
  v6 = result.fields.x + (float)v5->fields.mWidth;
  result.fields.x = v6;
  return result;
}


float TitleInfoEventSubmarineStatusComponent__get_GaugeWidth(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *gaugeBar; // x8

  gaugeBar = this->fields.gaugeBar;
  if ( !gaugeBar )
    sub_1C7BD40(this, method);
  return (float)gaugeBar->fields.mWidth;
}


void TitleInfoEventSubmarineStatusComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CECFEE & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
    byte_4CECFEE = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventSubmarineStatusComponent___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TitleInfoEventSubmarineStatusComponent___c___ctor(
        TitleInfoEventSubmarineStatusComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t TitleInfoEventSubmarineStatusComponent___c___GetQuestReleaseList_b__80_0(
        TitleInfoEventSubmarineStatusComponent___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (TitleInfoEventSubmarineStatusComponent___c_o *)QuestReleaseEntity__getValueInt(a, 0), !b) )
    sub_1C7BD40(this, a);
  return (_DWORD)this - QuestReleaseEntity__getValueInt(b, 0);
}


void TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___ctor(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___EndAnimation_b__0(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  struct TitleInfoEventSubmarineStatusComponent_o *_4__this; // x8

  if ( !n || (_4__this = this->fields.__4__this) == 0 )
    sub_1C7BD40(this, n);
  return n->fields.questId == _4__this->fields.currentQuestId;
}


bool TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___EndAnimation_b__1(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C7BD40(this, 0);
  return n->fields.questId == this->fields.tmpProgressQuestId;
}


void TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0___ctor(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0___LoadEventUIAssetData_b__0(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct TitleInfoEventSubmarineStatusComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C7BD40(0, data);
  _4__this->fields.eventAssetData = data;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&_4__this->fields.eventAssetData,
    (int32_t)data,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.callback, 0);
}