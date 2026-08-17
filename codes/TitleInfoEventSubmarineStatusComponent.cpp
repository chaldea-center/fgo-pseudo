void TitleInfoEventSubmarineStatusComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventSubmarineStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_596F0F1 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    byte_596F0F1 = 1;
  }
  static_fields = TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->ENTRY_ANIMATION_TIME = xmmword_E9C210;
  static_fields->MAP_CHANGE_WAIT_TIME = 0.3;
}


void TitleInfoEventSubmarineStatusComponent___ctor(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596F0F0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    byte_596F0F0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.atlasList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
    result = 0.0;
    minPoint = this->fields.minPoint;
    if ( point > minPoint )
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
  float v9; // s3
  int mWidth; // w8
  int32_t minPoint; // w10
  float v12; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  result = TitleInfoEventSubmarineStatusComponent__get_BasePosition(this, *(const MethodInfo **)&point);
  gaugeBar = this->fields.gaugeBar;
  if ( !gaugeBar )
    sub_2213CDC(v5, v6);
  maxPoint = this->fields.maxPoint;
  v9 = 1.0;
  mWidth = gaugeBar->fields.mWidth;
  if ( maxPoint > point )
  {
    v9 = 0.0;
    minPoint = this->fields.minPoint;
    if ( point > minPoint )
      v9 = (float)(point - minPoint) / (float)(maxPoint - minPoint);
  }
  v12 = result.fields.x - (float)(v9 * (float)mWidth);
  result.fields.x = v12;
  return result;
}


UnityEngine_GameObject_o *TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  AssetData_o *mapAssetData; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Object_object__58532980; // x20
  const MethodInfo *v7; // x2
  UnityEngine_GameObject_o *v8; // x21
  struct System_String_o *GoalAnimName; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x0

  if ( (byte_596F0DF & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F0DF = 1;
  }
  mapAssetData = this->fields.mapAssetData;
  if ( !mapAssetData )
    return 0;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              mapAssetData,
                              this->fields.goalIconAnimPrefabName,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  v8 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v7);
    this->fields.animClipName = GoalAnimName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.animClipName,
      (int32_t)GoalAnimName,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
    v18 = UnityEngine_Object__Instantiate_object_(
            Object_object__58532980,
            (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v18 )
      sub_2213CDC(0, v19);
    v8 = (UnityEngine_GameObject_o *)v18;
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v18, 0);
    GameObjectExtensions__SafeSetParent_42897308(gameObject, this->fields.statusObj, 0);
    v21 = UnityEngine_GameObject__get_gameObject(v8, 0);
    GameObjectExtensions__ResetLocalPosition(v21, 0);
  }
  return v8;
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
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x4
  System_String_o *v13; // x22
  bool v15; // [xsp+8h] [xbp-38h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v17; // [xsp+18h] [xbp-28h] BYREF
  int32_t v18; // [xsp+1Ch] [xbp-24h] BYREF

  v17 = currentQuestId;
  v18 = userPoint;
  v16 = progressQuestId;
  v15 = isLastGoalPlayed;
  if ( (byte_596F0E3 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    byte_596F0E3 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v18, 0);
  v6 = System_Int32__ToString((int32_t)&v17, 0);
  v9 = System_Int32__ToString((int32_t)&v16, 0);
  if ( !*(_DWORD *)(qword_5984328 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984328, v7, v8);
  v13 = System_Boolean__ToString((bool)&v15, 0);
  if ( !*(&TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v10, v11);
  return TitleInfoEventSubmarineStatusComponent__CreateSaveData_46736808(v5, v6, v9, v13, v12);
}


System_String_o *TitleInfoEventSubmarineStatusComponent__CreateSaveData_46736808(
        System_String_o *userPoint,
        System_String_o *currentQuestId,
        System_String_o *progressQuestId,
        System_String_o *isLastGoalPlayed,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_596F0E4 & 1) == 0 )
  {
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_869/*","*/);
    byte_596F0E4 = 1;
  }
  v9 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v9, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  System_Text_StringBuilder__Append_75735064(v9, userPoint, 0);
  System_Text_StringBuilder__Append_75735064(v9, (System_String_o *)StringLiteral_869/*","*/, 0);
  System_Text_StringBuilder__Append_75735064(v9, currentQuestId, 0);
  System_Text_StringBuilder__Append_75735064(v9, (System_String_o *)StringLiteral_869/*","*/, 0);
  System_Text_StringBuilder__Append_75735064(v9, progressQuestId, 0);
  System_Text_StringBuilder__Append_75735064(v9, (System_String_o *)StringLiteral_869/*","*/, 0);
  System_Text_StringBuilder__Append_75735064(v9, isLastGoalPlayed, 0);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v9->klass->vtable._3_ToString.methodPtr)(
                              v9,
                              v9->klass->vtable._3_ToString.method);
}


void TitleInfoEventSubmarineStatusComponent__DestroyGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v5; // x2
  struct System_String_o *GoalAnimName; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596F0E1 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F0E1 = 1;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(goalAnimObject, 0, 0) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 0, v5);
    this->fields.animClipName = GoalAnimName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.animClipName,
      (int32_t)GoalAnimName,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    Component_object = this->fields.goalAnimObject;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0 )
    {
      sub_2213CDC(Component_object, v13);
    }
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Component_object, 0);
    v17 = (UnityEngine_Object_o *)this->fields.goalAnimObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
    UnityEngine_Object__Destroy_83459800(v17, 0);
    this->fields.goalAnimObject = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.goalAnimObject, 0, v18, v19, v20, v21, v22, v23);
  }
}


void TitleInfoEventSubmarineStatusComponent__EndAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  MissionNotifyManager_o *Instance; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v14; // x2
  const MethodInfo_47A2F30 *v15; // x0
  __int64 v16; // x2
  TerminalPramsManager_c *v17; // x0
  int32_t userPoint; // w8
  int32_t currentQuestId; // w9
  int v20; // w10
  TerminalPramsManager_c *v21; // x0
  EventSaveData_o *v22; // x22
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  TerminalPramsManager_c *v30; // x0
  MissionNaviTransitionBoardItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v32; // x0
  System_String_array *ValueByArray; // x0
  System_String_array *v34; // x22
  int32_t v35; // w23
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x24
  System_Predicate_object__o *v37; // x25
  Il2CppObject *v38; // x0
  int32_t v39; // w8
  bool v40; // zf
  System_Predicate_QuestReleaseEntity__c *v41; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v42; // x24
  System_Predicate_object__o *v43; // x25
  __int64 v44; // x2
  const MethodInfo *v45; // x4
  struct EventDetailEntity_o *eventDetailEnt; // x8
  NoticeNumberComponent_c *klass; // x9
  int v48; // w10
  int32_t v49; // w21
  _BOOL4 isLastGoalPlayed; // w24
  NoticeNumberComponent_c *v51; // x20
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7

  if ( (byte_596F0DB & 1) == 0 )
  {
    sub_2213A60(&EventSaveData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_2213A60(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__);
    sub_2213A60(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__);
    sub_2213A60(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo);
    byte_596F0DB = 1;
  }
  v3 = sub_2213CCC(TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_59;
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.isGoalAnimToLoop )
  {
    this->fields.isGoalAnimToLoop = 0;
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v12);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v14);
  }
  v15 = (const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__;
  this->fields.isAfterTakingOver = 0;
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance(v15);
  if ( !Instance )
    goto LABEL_59;
  MissionNotifyManager__EndPause(Instance, 0);
  v17 = TerminalPramsManager_TypeInfo;
  userPoint = this->fields.userPoint;
  currentQuestId = this->fields.currentQuestId;
  this->fields.isCompleatedCount = 0;
  v20 = *(&v17->_2.cctor_finished + 1);
  this->fields.userOldPoint = userPoint;
  this->fields.oldQuestId = currentQuestId;
  if ( !v20 )
    j_il2cpp_runtime_class_init_0(v17, v5, v16);
  if ( !byte_596CFDA )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CFDA = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v16);
    v21 = TerminalPramsManager_TypeInfo;
  }
  if ( !v21->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
  {
    v22 = (EventSaveData_o *)sub_2213CCC(EventSaveData_TypeInfo);
    EventSaveData___ctor(v22, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v23, v24);
    if ( !byte_596CFDB )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CFDB = 1;
    }
    v30 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v23, v24);
      v30 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v30->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (MissionNaviTransitionBoardItem_c *)v22;
    sub_2213A04(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v22, v24, v25, v26, v27, v28, v29);
    v21 = TerminalPramsManager_TypeInfo;
  }
  if ( !*(&v21->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v21, v5, v16);
  if ( !byte_596CFDA )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CFDA = 1;
  }
  v32 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v16);
    v32 = TerminalPramsManager_TypeInfo;
  }
  Instance = (MissionNotifyManager_o *)v32->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  if ( !Instance )
LABEL_59:
    sub_2213CDC(Instance, v5);
  ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)Instance, 0x2Cu, 0);
  v34 = ValueByArray;
  if ( !ValueByArray )
  {
    v35 = 0;
    goto LABEL_35;
  }
  if ( SLODWORD(ValueByArray->max_length) < 2 )
  {
    v35 = 0;
    goto LABEL_34;
  }
  v35 = System_Int32__Parse(ValueByArray->m_Items[1], 0);
  if ( SLODWORD(v34->max_length) < 3 )
  {
LABEL_34:
    LODWORD(v34) = 0;
    goto LABEL_35;
  }
  LODWORD(v34) = System_Int32__Parse(v34->m_Items[2], 0);
LABEL_35:
  baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
  v37 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v37,
    (Il2CppObject *)v3,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__,
    0);
  if ( !baseQuestReleaseEntList )
    goto LABEL_59;
  v38 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)baseQuestReleaseEntList,
          (System_Predicate_T__o *)v37,
          (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v39 = this->fields.currentQuestId;
  v40 = v38 == 0;
  v41 = System_Predicate_QuestReleaseEntity__TypeInfo;
  v42 = this->fields.baseQuestReleaseEntList;
  if ( !v40 )
    v35 = this->fields.currentQuestId;
  if ( (int)v34 > v39 )
    v39 = (int)v34;
  *(_DWORD *)(v3 + 24) = v39;
  v43 = (System_Predicate_object__o *)sub_2213CCC(v41);
  System_Predicate_object____ctor(
    v43,
    (Il2CppObject *)v3,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__,
    0);
  if ( !v42 )
    goto LABEL_59;
  if ( System_Collections_Generic_List_object___Find(
         (System_Collections_Generic_List_object__o *)v42,
         (System_Predicate_T__o *)v43,
         (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
  {
    LODWORD(v34) = *(_DWORD *)(v3 + 24);
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v44);
  if ( !byte_596CFDA )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CFDA = 1;
  }
  Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v44);
    Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
  }
  eventDetailEnt = this->fields.eventDetailEnt;
  if ( !eventDetailEnt )
    goto LABEL_59;
  klass = Instance[2].fields.mNoticeNumberComp[7].klass;
  if ( !klass )
    goto LABEL_59;
  v48 = (unsigned __int8)byte_596CFDA;
  LODWORD(klass->_1.name) = eventDetailEnt->fields.eventId;
  if ( !v48 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    byte_596CFDA = 1;
  }
  if ( !HIDWORD(Instance[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Instance, v5, v44);
    Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
  }
  v49 = this->fields.userPoint;
  isLastGoalPlayed = this->fields.isLastGoalPlayed;
  v51 = Instance[2].fields.mNoticeNumberComp[7].klass;
  if ( !*(&TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v5, v44);
  Instance = (MissionNotifyManager_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData(
                                         v49,
                                         v35,
                                         (int32_t)v34,
                                         isLastGoalPlayed,
                                         v45);
  if ( !v51 )
    goto LABEL_59;
  v51->_1.namespaze = (const char *)Instance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v51->_1.namespaze, (int32_t)Instance, v52, v53, v54, v55, v56, v57);
  TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(0);
  ActionExtensions__Call(this->fields.onEndAnim, 0);
}


void TitleInfoEventSubmarineStatusComponent__EndExitAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  TitleInfoEventSubmarineStatusComponent_c *v5; // x0

  if ( (byte_596F0D5 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_2213A60(&StringLiteral_11104/*"PlayEntryAnimation"*/);
    byte_596F0D5 = 1;
  }
  TitleInfoEventSubmarineStatusComponent__DestroyGoalAnim(this, method);
  v5 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !*(&TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v3, v4);
    v5 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11104/*"PlayEntryAnimation"*/,
    v5->static_fields->MAP_CHANGE_WAIT_TIME,
    0);
}


void TitleInfoEventSubmarineStatusComponent__EndProgressAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  int32_t maxPoint; // w9
  int32_t minPoint; // w10
  int32_t userPoint; // w8
  int32_t v6; // w11
  __int64 v7; // x2
  UnityEngine_Object_o *goalAnimObject; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  UnityEngine_GameObject_o *gateNextPointCounterLabel; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *v15; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  TitleInfoEventSubmarineStatusComponent_o *ProgressQuestReleaseEnt; // x20
  const MethodInfo *v23; // x2
  QuestReleaseEntity_o *CurrentQuestReleaseEnt; // x0
  const MethodInfo *v25; // x3
  QuestReleaseEntity_o *v26; // x1
  const MethodInfo *v27; // x1
  struct UnityEngine_GameObject_o *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x1
  __int64 v36; // x2
  UnityEngine_Object_o *v37; // x20
  __int64 v38; // x1
  const MethodInfo *v39; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v41; // x2
  TitleInfoEventSubmarineStatusComponent_c *v42; // x0

  if ( (byte_596F0D8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_2213A60(&StringLiteral_6236/*"EndAnimation"*/);
    byte_596F0D8 = 1;
  }
  minPoint = this->fields.minPoint;
  maxPoint = this->fields.maxPoint;
  userPoint = this->fields.userPoint;
  if ( userPoint >= maxPoint )
    v6 = this->fields.maxPoint;
  else
    v6 = this->fields.userPoint;
  this->fields.userOldPoint = v6;
  if ( minPoint >= v6 || userPoint < maxPoint || TitleInfoEventSubmarineStatusComponent__IsPlayingGoalAnim(this, method) )
  {
    TitleInfoEventSubmarineStatusComponent__EndAnimation(this, method);
    return;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v7);
  v9 = UnityEngine_Object__op_Inequality(goalAnimObject, 0, 0);
  if ( v9 )
  {
    gateNextPointCounterLabel = this->fields.goalAnimObject;
    if ( !gateNextPointCounterLabel )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(gateNextPointCounterLabel, 0, 0);
    v15 = (UnityEngine_Object_o *)this->fields.goalAnimObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    UnityEngine_Object__Destroy_83459800(v15, 0);
    this->fields.goalAnimObject = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.goalAnimObject, 0, v16, v17, v18, v19, v20, v21);
  }
  ProgressQuestReleaseEnt = (TitleInfoEventSubmarineStatusComponent_o *)TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
                                                                          (TitleInfoEventSubmarineStatusComponent_o *)v9,
                                                                          this->fields.baseQuestReleaseEntList,
                                                                          v11);
  CurrentQuestReleaseEnt = TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
                             ProgressQuestReleaseEnt,
                             this->fields.baseQuestReleaseEntList,
                             v23);
  if ( CurrentQuestReleaseEnt )
    v26 = CurrentQuestReleaseEnt;
  else
    v26 = (QuestReleaseEntity_o *)ProgressQuestReleaseEnt;
  if ( TitleInfoEventSubmarineStatusComponent__IsAllClear(this, v26, this->fields.userPoint, v25) )
  {
    gateNextPointCounterLabel = (UnityEngine_GameObject_o *)this->fields.gateNextPointCounterLabel;
    if ( !gateNextPointCounterLabel
      || (gateNextPointCounterLabel = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)gateNextPointCounterLabel,
                                        0)) == 0 )
    {
LABEL_32:
      sub_2213CDC(gateNextPointCounterLabel, v10);
    }
    UnityEngine_GameObject__SetActive(gateNextPointCounterLabel, 0, 0);
  }
  gateNextPointCounterLabel = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextPointCounterLabel )
    goto LABEL_32;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, double))gateNextPointCounterLabel->klass[1]._1.element_class)(
    gateNextPointCounterLabel,
    gateNextPointCounterLabel->klass[1]._1.castClass,
    0.0);
  this->fields.isGoalAnimToLoop = 1;
  v28 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v27);
  this->fields.goalAnimObject = v28;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.goalAnimObject,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v37 = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35, v36);
  if ( UnityEngine_Object__op_Inequality(v37, 0, 0) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v39);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v41);
  }
  v42 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !*(&TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v38, v39);
    v42 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6236/*"EndAnimation"*/,
    v42->static_fields->GOAL_ANIMATION_TIME,
    0);
}


QuestReleaseEntity_o *TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Collections_Generic_List_QuestReleaseEntity__o *baseList,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *current; // x19
  int32_t v8; // w20
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596F0E7 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_596F0E7 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !baseList )
    sub_2213CDC(this, baseList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)baseList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v4 )
      break;
    current = v10.fields._current;
    if ( !v10.fields._current )
      sub_2213CDC(v4, v5);
    v8 = *(_DWORD *)((char *)&v10.fields._current->klass + (unsigned __int64)&word_10);
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v5, v6);
    if ( !CondType__IsQuestClear_47284152(v8, -1, 0, 0) )
      goto LABEL_12;
  }
  current = 0;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return (QuestReleaseEntity_o *)current;
}


System_String_o *TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596F0E9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6538/*"EventUI/Prefabs/{0}"*/);
    byte_596F0E9 = 1;
  }
  v5 = eventId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v5);
  return System_String__Format((System_String_o *)StringLiteral_6538/*"EventUI/Prefabs/{0}"*/, v3, 0);
}


UnityEngine_GameObject_o *TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_596F0EF & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    byte_596F0EF = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.eventAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__58532980(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  return result;
}


System_String_o *TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t animType,
        const MethodInfo *method)
{
  System_String_o *goalIconAnimPrefabName; // x0
  __int64 *v6; // x8

  if ( (byte_596F0DE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17237/*"_loop"*/);
    sub_2213A60(&StringLiteral_17256/*"_start"*/);
    sub_2213A60(&StringLiteral_17235/*"_last"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_17220/*"_end"*/);
    byte_596F0DE = 1;
  }
  goalIconAnimPrefabName = this->fields.goalIconAnimPrefabName;
  if ( this->fields.isLastGoalPlayed )
    goalIconAnimPrefabName = System_String__Concat_75651716(
                               goalIconAnimPrefabName,
                               (System_String_o *)StringLiteral_17235/*"_last"*/,
                               0);
  switch ( animType )
  {
    case 3:
      v6 = &StringLiteral_17220/*"_end"*/;
      return System_String__Concat_75651716(goalIconAnimPrefabName, (System_String_o *)*v6, 0);
    case 2:
      v6 = &StringLiteral_17237/*"_loop"*/;
      return System_String__Concat_75651716(goalIconAnimPrefabName, (System_String_o *)*v6, 0);
    case 1:
      v6 = &StringLiteral_17256/*"_start"*/;
      return System_String__Concat_75651716(goalIconAnimPrefabName, (System_String_o *)*v6, 0);
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
  __int64 v8; // x2
  int32_t v9; // w20
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_596F0E6 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_596F0E6 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !baseList )
    sub_2213CDC(this, baseList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)baseList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  current = 0;
  do
  {
    v5 = (QuestReleaseEntity_o *)current;
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v6 )
      break;
    current = v11.fields._current;
    if ( !v11.fields._current )
      sub_2213CDC(v6, v7);
    v9 = *(_DWORD *)((char *)&v11.fields._current->klass + (unsigned __int64)&word_10);
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v7, v8);
  }
  while ( CondType__IsQuestClear_47284152(v9, -1, 0, 0) );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  __int64 v22; // x2
  struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__80_0; // x20
  Il2CppObject *v25; // x21
  struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596F0E5 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_QuestReleaseEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__);
    sub_2213A60(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
    byte_596F0E5 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_25;
  ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                              (QuestReleaseMaster_o *)Instance,
                              eventId,
                              85,
                              0);
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !ListByTargetAndCondType )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)ListByTargetAndCondType,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v35 = v34;
  v34.fields._list = 0;
  *(_QWORD *)&v34.fields._index = &v35;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v35,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v7 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_2213CDC(v7, v8);
    QuestType = QuestMaster__GetQuestType((int32_t)v35.fields._current[1].klass, 0);
    if ( (_DWORD)QuestType == 2 )
    {
      if ( !v6
        || (items = v6->fields._items,
            v19 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__,
            ++v6->fields._version,
            !items) )
      {
        sub_2213CDC(QuestType, v11);
      }
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          current,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v21[4] = (Il2CppClass *)current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)current, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  Instance = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
  if ( !*(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent___c_TypeInfo, v4, v22);
    Instance = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
  }
  static_fields = (struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__80_0 = (System_Comparison_T__o *)static_fields->__9__80_0;
  if ( !_9__80_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v4, v22);
      static_fields = TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__80_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__80_0,
      v25,
      Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__,
      0);
    v26 = TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields;
    v26->__9__80_0 = (struct System_Comparison_QuestReleaseEntity__o *)_9__80_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__80_0, (int32_t)_9__80_0, v27, v28, v29, v30, v31, v32);
  }
  if ( !v6 )
LABEL_25:
    sub_2213CDC(Instance, v4);
  System_Collections_Generic_List_object___Sort_71849708(
    v6,
    _9__80_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v6;
}


int32_t TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *MasterData_object; // x20
  struct EventDetailEntity_o *eventDetailEnt; // x8

  if ( (byte_596F0DC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F0DC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  eventDetailEnt = this->fields.eventDetailEnt;
  if ( !eventDetailEnt || !MasterData_object )
LABEL_13:
    sub_2213CDC(Instance, v4);
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
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t klass; // w22
  int32_t v13; // w21
  _BOOL8 IsQuestClear_47284152; // x0
  __int64 v15; // x1
  bool v16; // w22
  int32_t v17; // w0
  bool v19; // w8

  if ( (byte_596F0E8 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___);
    byte_596F0E8 = 1;
  }
  baseQuestReleaseEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseQuestReleaseEntList;
  if ( baseQuestReleaseEntList )
  {
    baseQuestReleaseEntList = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__LastOrDefault_object_(
                                                                                     baseQuestReleaseEntList,
                                                                                     (const MethodInfo_3885C38 *)Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___);
    if ( baseQuestReleaseEntList )
    {
      v8 = baseQuestReleaseEntList;
      ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)baseQuestReleaseEntList, 0);
      klass = (int32_t)v8[1].klass;
      v13 = ValueInt;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10, v11);
      IsQuestClear_47284152 = CondType__IsQuestClear_47284152(klass, -1, 0, 0);
      if ( !currentQuestReleaseEnt )
        sub_2213CDC(IsQuestClear_47284152, v15);
      v16 = IsQuestClear_47284152;
      v17 = QuestReleaseEntity__getValueInt(currentQuestReleaseEnt, 0);
      v19 = v13 <= nowPoint && v17 == v13;
      LOBYTE(baseQuestReleaseEntList) = v16 && v19;
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
  __int64 v2; // x2
  UnityEngine_Object_o *goalAnimObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_596F0E2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F0E2 = 1;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(goalAnimObject, 0, 0) )
    return 0;
  Component_object = this->fields.goalAnimObject;
  if ( !Component_object
    || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         Component_object,
                                                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0 )
  {
    sub_2213CDC(Component_object, v5);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2

  if ( (byte_596F0EA & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__);
    sub_2213A60(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo);
    byte_596F0EA = 1;
  }
  v7 = sub_2213CCC(TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  if ( !*(&TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v22, v23);
  EventUIAssetDataPath = TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(eventId, v22);
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v25,
    (Il2CppObject *)v7,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v26, v27);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v25, 1, 0, 0) )
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
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Component_object; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v27; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v29; // x8
  int32_t v30; // [xsp+8h] [xbp-58h] BYREF
  int v31; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_596F0ED & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_26446/*"{0:D2}"*/);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_2213A60(&StringLiteral_5538/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_596F0ED = 1;
  }
  if ( v4->fields.eventAssetData )
  {
    atlasList = v4->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_2213CDC(this, *(_QWORD *)&eventId);
    size = atlasList->fields._size;
    v7 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0);
    for ( i = 1; ; ++i )
    {
      v31 = i;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v31);
      v10 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_26446/*"{0:D2}"*/, v9, 0);
      v30 = eventId;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v30);
      v12 = System_String__Format_75697880((System_String_o *)StringLiteral_5538/*"DownloadEventUIAtlas{0}{1}"*/, v11, v10, 0);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
                                                                 v4,
                                                                 v12,
                                                                 v13);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
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
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
        break;
      this = (TitleInfoEventSubmarineStatusComponent_o *)v4->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      m_CachedPtr = this->fields.m_CachedPtr;
      v27 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v29 + 32) = Component_object;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v29 + 32),
          (int32_t)Component_object,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
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
    sub_2213CDC(this, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  Il2CppObject *v33; // x23
  const MethodInfo *v34; // x1
  int32_t v35; // w8

  if ( (byte_596F0D3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_2213A60(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__);
    sub_2213A60(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__);
    sub_2213A60(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__);
    byte_596F0D3 = 1;
  }
  if ( this->fields.isAfterTakingOver )
  {
    this->fields.onEndAnim = onEndAnim;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onEndAnim,
      (int32_t)onEndAnim,
      (System_String_o *)method,
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
  v16 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_QuestReleaseEntity__TypeInfo);
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
          (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v20 = this->fields.baseQuestReleaseEntList;
  v21 = (QuestReleaseEntity_o *)v19;
  v22 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_QuestReleaseEntity__TypeInfo);
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
          (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v24 = this->fields.baseQuestReleaseEntList;
  v25 = (QuestReleaseEntity_o *)v23;
  v26 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_QuestReleaseEntity__TypeInfo);
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
          (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onEndAnim,
    (int32_t)onEndAnim,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_2213CDC(Instance, v18);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  if ( (int)v25 < (int)v33 )
  {
    v35 = this->fields.oldQuestId;
    if ( v35 )
    {
      if ( v35 >= 1 && (int)v21 < (int)v33 )
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
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Component_object; // x20
  __int64 v10; // x2
  __int64 v11; // x2
  UnityEngine_GameObject_o *v12; // x20
  TitleInfoEventSubmarineStatusComponent_c *v13; // x0
  int v14; // w8
  int *static_fields; // x8
  EventDelegate_c *v16; // x0
  System_Collections_Generic_List_object__o *klass; // x21
  int v18; // s0
  EventDelegate_o *v19; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  Il2CppObject *v32; // x20
  __int64 v33; // x2
  __int64 v34; // x2
  UnityEngine_GameObject_o *v35; // x19
  TitleInfoEventSubmarineStatusComponent_c *v36; // x0
  float ENTRY_ANIMATION_TIME; // s0
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596F0D6 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_2213A60(&StringLiteral_6246/*"EndEntryAnimation"*/);
    byte_596F0D6 = 1;
  }
  shipPanelObj = this->fields.shipPanelObj;
  v38 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, this->fields.minPoint, v2);
  GameObjectExtensions__SetLocalPosition(shipPanelObj, v38, 0);
  gateNextIcon = this->fields.shipPanelObj;
  if ( !gateNextIcon )
    goto LABEL_33;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gateNextIcon,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v10);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)Component_object, 0);
  }
  gateNextIcon = this->fields.shipPanelObj;
  if ( !gateNextIcon )
    goto LABEL_33;
  gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                               gateNextIcon,
                                               (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !gateNextIcon )
    goto LABEL_33;
  v12 = gateNextIcon;
  v13 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  v14 = *(&TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished + 1);
  v12[5].monitor = (void *)0x3F80000000000000LL;
  if ( !v14 )
  {
    j_il2cpp_runtime_class_init_0(v13, v5, v11);
    v13 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  static_fields = (int *)v13->static_fields;
  v16 = EventDelegate_TypeInfo;
  klass = (System_Collections_Generic_List_object__o *)v12[3].klass;
  v18 = *static_fields;
  LODWORD(v12[1].monitor) = 3;
  LODWORD(v12[2].monitor) = v18;
  v19 = (EventDelegate_o *)sub_2213CCC(v16);
  EventDelegate___ctor_56337752(v19, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6246/*"EndEntryAnimation"*/, 0);
  if ( !klass )
    goto LABEL_33;
  items = klass->fields._items;
  v27 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++klass->fields._version;
  if ( !items )
    goto LABEL_33;
  size = klass->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v19,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v19;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v19, v20, v21, v22, v23, v24, v25);
  }
  UITweener__PlayForward((UITweener_o *)v12, 0);
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon )
    goto LABEL_33;
  gateNextIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateNextIcon, 0);
  if ( !gateNextIcon )
    goto LABEL_33;
  v32 = UnityEngine_GameObject__GetComponent_object_(
          gateNextIcon,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v32, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v33);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)v32, 0);
  }
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon
    || (gateNextIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateNextIcon, 0)) == 0
    || (gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                     gateNextIcon,
                                                     (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___)) == 0 )
  {
LABEL_33:
    sub_2213CDC(gateNextIcon, v5);
  }
  v35 = gateNextIcon;
  v36 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  v35[5].monitor = (void *)0x3F80000000000000LL;
  if ( !*(&v36->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v36, v5, v34);
    v36 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  ENTRY_ANIMATION_TIME = v36->static_fields->ENTRY_ANIMATION_TIME;
  LODWORD(v35[1].monitor) = 3;
  *(float *)&v35[2].monitor = ENTRY_ANIMATION_TIME;
  UITweener__PlayForward((UITweener_o *)v35, 0);
}


void TitleInfoEventSubmarineStatusComponent__PlayExitAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *shipPanelObj; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Component_object; // x20
  __int64 v7; // x2
  __int64 v8; // x2
  UnityEngine_GameObject_o *v9; // x20
  TitleInfoEventSubmarineStatusComponent_c *v10; // x0
  int v11; // w8
  struct TitleInfoEventSubmarineStatusComponent_StaticFields *static_fields; // x8
  EventDelegate_c *v13; // x0
  System_Collections_Generic_List_object__o *klass; // x21
  float EXIT_ANIMATION_TIME; // s0
  EventDelegate_o *v16; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2
  struct UnityEngine_GameObject_o *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *GoalAnimName; // x1
  const MethodInfo *v40; // x2

  if ( (byte_596F0D4 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_2213A60(&StringLiteral_6256/*"EndExitAnimation"*/);
    byte_596F0D4 = 1;
  }
  shipPanelObj = this->fields.shipPanelObj;
  if ( !shipPanelObj )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       shipPanelObj,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v7);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)Component_object, 0);
  }
  shipPanelObj = this->fields.shipPanelObj;
  if ( !shipPanelObj )
    goto LABEL_24;
  shipPanelObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                               shipPanelObj,
                                               (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !shipPanelObj )
    goto LABEL_24;
  v9 = shipPanelObj;
  v10 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  v11 = *(&TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished + 1);
  v9[5].monitor = (void *)1065353216;
  if ( !v11 )
  {
    j_il2cpp_runtime_class_init_0(v10, method, v8);
    v10 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  static_fields = v10->static_fields;
  v13 = EventDelegate_TypeInfo;
  klass = (System_Collections_Generic_List_object__o *)v9[3].klass;
  EXIT_ANIMATION_TIME = static_fields->EXIT_ANIMATION_TIME;
  LODWORD(v9[1].monitor) = 3;
  *(float *)&v9[2].monitor = EXIT_ANIMATION_TIME;
  v16 = (EventDelegate_o *)sub_2213CCC(v13);
  EventDelegate___ctor_56337752(v16, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6256/*"EndExitAnimation"*/, 0);
  if ( !klass
    || (items = klass->fields._items,
        v24 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++klass->fields._version,
        !items) )
  {
LABEL_24:
    sub_2213CDC(shipPanelObj, method);
  }
  size = klass->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v16,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v16, v17, v18, v19, v20, v21, v22);
  }
  UITweener__PlayForward((UITweener_o *)v9, 0);
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
  if ( UnityEngine_Object__op_Equality(goalAnimObject, 0, 0) )
  {
    v32 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v30);
    this->fields.goalAnimObject = v32;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.goalAnimObject,
      (int32_t)v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 3, v31);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v40);
}


void TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *animClipName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *goalAnimObject; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_596F0E0 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F0E0 = 1;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, animClipName, method);
  if ( !UnityEngine_Object__op_Equality(goalAnimObject, 0, 0) )
  {
    this->fields.animClipName = animClipName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.animClipName,
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
                                                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0 )
    {
      sub_2213CDC(Component_object, v12);
    }
    UnityEngine_Animation__Play_83078544((UnityEngine_Animation_o *)Component_object, this->fields.animClipName, 0);
  }
}


void TitleInfoEventSubmarineStatusComponent__PlayLastMapAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Action_o *onEndAnim,
        const MethodInfo *method)
{
  int32_t targetQuestId; // w21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  struct UnityEngine_GameObject_o *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  TitleInfoEventSubmarineStatusComponent_c *v28; // x0

  if ( (byte_596F0D9 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_2213A60(&StringLiteral_11111/*"PlayLastMapStartedAnimation"*/);
    byte_596F0D9 = 1;
  }
  if ( this->fields.isLastGoalPlayed )
    goto LABEL_14;
  targetQuestId = this->fields.targetQuestId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, onEndAnim, method);
  if ( !CondType__IsOpen(1, targetQuestId, 0, 0, 0, 0) )
  {
LABEL_14:
    ActionExtensions__Call(onEndAnim, 0);
  }
  else
  {
    this->fields.onEndAnim = onEndAnim;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onEndAnim,
      (int32_t)onEndAnim,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
    if ( UnityEngine_Object__op_Equality(goalAnimObject, 0, 0) )
    {
      v17 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v15);
      this->fields.goalAnimObject = v17;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.goalAnimObject,
        (int32_t)v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 3, v16);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v25);
    v28 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( !*(&TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v26, v27);
      v28 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11111/*"PlayLastMapStartedAnimation"*/,
      v28->static_fields->EXIT_ANIMATION_TIME,
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
  __int64 v6; // x1
  __int64 v7; // x2
  TitleInfoEventSubmarineStatusComponent_c *v8; // x0

  if ( (byte_596F0DA & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_2213A60(&StringLiteral_6236/*"EndAnimation"*/);
    byte_596F0DA = 1;
  }
  this->fields.isLastGoalPlayed = 1;
  this->fields.isGoalAnimToLoop = 1;
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v2);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v5);
  v8 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !*(&TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v6, v7);
    v8 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6236/*"EndAnimation"*/,
    v8->static_fields->GOAL_ANIMATION_TIME,
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
  __int64 v8; // x2
  UnityEngine_GameObject_o *shipPanelObj; // x0
  float v10; // s13
  float v11; // s11
  float v12; // s12
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Component_object; // x20
  __int64 v16; // x2
  __int64 v17; // x2
  UnityEngine_GameObject_o *v18; // x20
  TitleInfoEventSubmarineStatusComponent_c *v19; // x0
  System_Collections_Generic_List_object__o *klass; // x21
  float PROGRESS_ANIMATION_TIME; // s0
  EventDelegate_c *v22; // x0
  EventDelegate_o *v23; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  TitleInfoEventSubmarineStatusComponent_c *v34; // x0
  __int64 v35; // x2
  int32_t userOldPoint; // w8
  int v37; // w9
  UnityEngine_Object_o *gateNextPointCounterLabel; // x20
  int32_t userPoint; // w8
  int32_t v40; // w9
  int32_t maxPoint; // w10
  int v42; // w8
  int v43; // w9
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596F0D7 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_2213A60(&StringLiteral_6273/*"EndProgressAnimation"*/);
    byte_596F0D7 = 1;
  }
  LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.shipPanelObj, 0);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  v45 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, this->fields.userPoint, v6);
  if ( x <= v45.fields.x )
  {
    v34 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( !*(&TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v7, v8);
      v34 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6273/*"EndProgressAnimation"*/,
      v34->static_fields->PROGRESS_ANIMATION_TIME,
      0);
  }
  else
  {
    shipPanelObj = this->fields.shipPanelObj;
    if ( !shipPanelObj )
      goto LABEL_39;
    v10 = v45.fields.x;
    v11 = v45.fields.y;
    v12 = v45.fields.z;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         shipPanelObj,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v16);
      UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)Component_object, 0);
    }
    shipPanelObj = this->fields.shipPanelObj;
    if ( !shipPanelObj )
      goto LABEL_39;
    shipPanelObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                 shipPanelObj,
                                                 (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    if ( !shipPanelObj )
      goto LABEL_39;
    v18 = shipPanelObj;
    *(float *)&shipPanelObj[5].monitor = x;
    *((float *)&shipPanelObj[5].monitor + 1) = y;
    *(float *)&shipPanelObj[5].fields.m_CachedPtr = z;
    *((float *)&shipPanelObj[5].fields.m_CachedPtr + 1) = v10;
    v19 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    *(float *)&v18[6].klass = v11;
    *((float *)&v18[6].klass + 1) = v12;
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v7, v17);
      v19 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    klass = (System_Collections_Generic_List_object__o *)v18[3].klass;
    PROGRESS_ANIMATION_TIME = v19->static_fields->PROGRESS_ANIMATION_TIME;
    v22 = EventDelegate_TypeInfo;
    LODWORD(v18[1].monitor) = 3;
    *(float *)&v18[2].monitor = PROGRESS_ANIMATION_TIME;
    v23 = (EventDelegate_o *)sub_2213CCC(v22);
    EventDelegate___ctor_56337752(v23, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6273/*"EndProgressAnimation"*/, 0);
    if ( !klass )
      goto LABEL_39;
    items = klass->fields._items;
    v31 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++klass->fields._version;
    if ( !items )
      goto LABEL_39;
    size = klass->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        klass,
        (Il2CppObject *)v23,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &items->obj.klass + size;
      klass->fields._size = size + 1;
      v33[4] = (Il2CppClass *)v23;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v23, v24, v25, v26, v27, v28, v29);
    }
    UITweener__PlayForward((UITweener_o *)v18, 0);
  }
  if ( !this->fields.isCompleatedCount )
  {
    userOldPoint = this->fields.userOldPoint;
    v37 = this->fields.userPoint - userOldPoint;
    if ( v37 )
    {
      shipPanelObj = (UnityEngine_GameObject_o *)this->fields.progressPointCounterLabel;
      this->fields.isCompleatedCount = 1;
      if ( !shipPanelObj )
        goto LABEL_39;
      LODWORD(shipPanelObj[2].monitor) = userOldPoint;
      HIDWORD(shipPanelObj[2].monitor) = v37;
      UICounterLabel__PlayAnimation((UICounterLabel_o *)shipPanelObj, 0);
    }
  }
  gateNextPointCounterLabel = (UnityEngine_Object_o *)this->fields.gateNextPointCounterLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v35);
  if ( UnityEngine_Object__op_Inequality(gateNextPointCounterLabel, 0, 0) )
  {
    v40 = this->fields.userOldPoint;
    userPoint = this->fields.userPoint;
    if ( v40 != userPoint )
    {
      maxPoint = this->fields.maxPoint;
      if ( userPoint >= maxPoint )
        userPoint = this->fields.maxPoint;
      v42 = userPoint - v40;
      if ( v42 >= 1 )
      {
        v43 = maxPoint - v40;
        if ( v43 >= 1 )
        {
          shipPanelObj = (UnityEngine_GameObject_o *)this->fields.gateNextPointCounterLabel;
          if ( shipPanelObj )
          {
            LODWORD(shipPanelObj[2].monitor) = v43;
            HIDWORD(shipPanelObj[2].monitor) = -v42;
            UICounterLabel__PlayAnimation((UICounterLabel_o *)shipPanelObj, 0);
            return;
          }
LABEL_39:
          sub_2213CDC(shipPanelObj, v7);
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
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *EventUIAssetDataPath; // x19

  if ( (byte_596F0EB & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    byte_596F0EB = 1;
  }
  if ( this->fields.eventAssetData )
  {
    if ( !*(&TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, *(_QWORD *)&eventId, method);
    EventUIAssetDataPath = TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(
                             eventId,
                             *(const MethodInfo **)&eventId);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5, v6);
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
  if ( (byte_596F0EC & 1) == 0 )
  {
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    byte_596F0EC = 1;
  }
  atlasList = v2->fields.atlasList;
  if ( !atlasList )
    sub_2213CDC(this, method);
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

  if ( (byte_596F0EE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_596F0EE = 1;
  }
  memset(&v16, 0, sizeof(v16));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v16 = v15;
  v15.fields._list = 0;
  *(_QWORD *)&v15.fields._index = &v16;
  do
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v9 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0, 0);
        return 0;
      }
LABEL_19:
      sub_2213CDC(IsNullOrEmpty, v8);
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_2213CDC(v9, v10);
    v12 = UIAtlas__GetSprite((UIAtlas_o *)v16.fields._current, spriteName, 0);
  }
  while ( !v12 );
  if ( !sprite )
    sub_2213CDC(v12, v13);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0);
  UISprite__set_spriteName(sprite, spriteName, 0);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void TitleInfoEventSubmarineStatusComponent__Setup(
        TitleInfoEventSubmarineStatusComponent_o *this,
        EventDetailEntity_o *eventDetailEntity,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventDetailEntity_o **p_eventDetailEnt; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x2
  struct System_String_o *GoalAnimName; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
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
  __int64 v42; // x1
  __int64 v43; // x2
  UILabel_o *titleLabel; // x21
  UILabel_o *progressNameLabel; // x21
  __int64 v46; // x2
  int32_t v47; // w20
  struct System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseList; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  TitleInfoEventSubmarineStatusComponent_o *v55; // x0
  const MethodInfo *v56; // x2
  TitleInfoEventSubmarineStatusComponent_o *ProgressQuestReleaseEnt; // x21
  const MethodInfo *v58; // x2
  QuestReleaseEntity_o *CurrentQuestReleaseEnt; // x0
  const MethodInfo *v60; // x1
  QuestReleaseEntity_o *v61; // x20
  const MethodInfo *v62; // x5
  int32_t questId; // w8
  int32_t ValueInt; // w0
  int32_t v65; // w0
  __int64 v66; // x1
  __int64 v67; // x2
  int32_t maxPoint; // w22
  int32_t userOldPoint; // w25
  System_String_o *v70; // x21
  Il2CppObject *v71; // x0
  System_String_o *v72; // x21
  System_String_o *v73; // x0
  struct System_String_o *v74; // x0
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  __int64 v81; // x2
  UICounterLabel_o *gateNextPointCounterLabel; // x21
  int32_t v83; // w22
  const MethodInfo *v84; // x3
  __int64 v85; // x2
  TitleInfoEventSubmarineStatusComponent_c *v86; // x0
  UICounterLabel_o *progressPointCounterLabel; // x20
  int32_t v88; // w21
  float PROGRESS_ANIMATION_TIME; // s8
  UnityEngine_GameObject_o *shipPanelObj; // x20
  const MethodInfo *v91; // x2
  const MethodInfo *v92; // x1
  int32_t v93; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596F0D1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__);
    sub_2213A60(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_2213A60(&StringLiteral_20102/*"event_goal"*/);
    sub_2213A60(&StringLiteral_20127/*"event_progressicon"*/);
    sub_2213A60(&StringLiteral_20125/*"event_progressgauge_front"*/);
    sub_2213A60(&StringLiteral_5952/*"EVENT_SUBMARINE_NEXT_DESCRIPTION"*/);
    sub_2213A60(&StringLiteral_5870/*"EVENT_POINT_COMMON_FORMAT"*/);
    sub_2213A60(&StringLiteral_1526/*"94053407"*/);
    sub_2213A60(&StringLiteral_5953/*"EVENT_SUBMARINE_NEXT_POINT"*/);
    sub_2213A60(&StringLiteral_5960/*"EVENT_SUBMARINE_STATUS_TITLE"*/);
    sub_2213A60(&StringLiteral_20168/*"event_status_point"*/);
    sub_2213A60(&StringLiteral_20122/*"event_progress_point"*/);
    sub_2213A60(&StringLiteral_20114/*"event_next"*/);
    sub_2213A60(&StringLiteral_20124/*"event_progressgauge_back"*/);
    sub_2213A60(&StringLiteral_5949/*"EVENT_SUBMARINE_GAUGE_CURRENT"*/);
    sub_2213A60(&StringLiteral_20123/*"event_progressgauge"*/);
    sub_2213A60(&StringLiteral_20126/*"event_progressgaugebg_80393"*/);
    byte_596F0D1 = 1;
  }
  this->fields.eventDetailEnt = eventDetailEntity;
  p_eventDetailEnt = &this->fields.eventDetailEnt;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventDetailEnt,
    (int32_t)eventDetailEntity,
    (System_String_o *)mapAssetData,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.mapAssetData = mapAssetData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mapAssetData,
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.animClipName,
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
  v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__, 0);
  TitleInfoEventSubmarineStatusComponent__LoadEventUIAssetData(this, eventId, v29, v30);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPosition_42891620(gameObject, 62.0, 0.0, 0.0, 0);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.statusBg,
    (System_String_o *)StringLiteral_20126/*"event_progressgaugebg_80393"*/,
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
    (System_String_o *)StringLiteral_1526/*"94053407"*/,
    v33);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeFrame,
    (System_String_o *)StringLiteral_20123/*"event_progressgauge"*/,
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
    (System_String_o *)StringLiteral_20125/*"event_progressgauge_front"*/,
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
    (System_String_o *)StringLiteral_20124/*"event_progressgauge_back"*/,
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
    (System_String_o *)StringLiteral_20127/*"event_progressicon"*/,
    v37);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.progressPointBg,
    (System_String_o *)StringLiteral_20168/*"event_status_point"*/,
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
    (System_String_o *)StringLiteral_20114/*"event_next"*/,
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
    (System_String_o *)StringLiteral_20102/*"event_goal"*/,
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
    (System_String_o *)StringLiteral_20122/*"event_progress_point"*/,
    v41);
  statusBg = (System_String_o *)this->fields.gateNextPointBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.generic_class)(
    statusBg,
    statusBg->klass[1]._1.typeMetadataHandle);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42, v43);
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5960/*"EVENT_SUBMARINE_STATUS_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_48;
  UILabel__set_text(titleLabel, statusBg, 0);
  progressNameLabel = this->fields.progressNameLabel;
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5949/*"EVENT_SUBMARINE_GAUGE_CURRENT"*/, 0);
  if ( !progressNameLabel )
    goto LABEL_48;
  UILabel__set_text(progressNameLabel, statusBg, 0);
  if ( !*p_eventDetailEnt )
    goto LABEL_48;
  v47 = (*p_eventDetailEnt)->fields.eventId;
  if ( !*(&TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v27, v46);
  QuestReleaseList = TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(v47, v27);
  this->fields.baseQuestReleaseEntList = QuestReleaseList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseQuestReleaseEntList,
    (int32_t)QuestReleaseList,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  ProgressQuestReleaseEnt = (TitleInfoEventSubmarineStatusComponent_o *)TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
                                                                          v55,
                                                                          this->fields.baseQuestReleaseEntList,
                                                                          v56);
  CurrentQuestReleaseEnt = TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
                             ProgressQuestReleaseEnt,
                             this->fields.baseQuestReleaseEntList,
                             v58);
  if ( CurrentQuestReleaseEnt )
    v61 = CurrentQuestReleaseEnt;
  else
    v61 = (QuestReleaseEntity_o *)ProgressQuestReleaseEnt;
  this->fields.userPoint = TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(this, v60);
  if ( v61 )
    questId = v61->fields.questId;
  else
    questId = 0;
  this->fields.currentQuestId = questId;
  if ( ProgressQuestReleaseEnt )
    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)ProgressQuestReleaseEnt, 0);
  else
    ValueInt = 0;
  this->fields.minPoint = ValueInt;
  if ( v61 )
    v65 = QuestReleaseEntity__getValueInt(v61, 0);
  else
    v65 = 0;
  this->fields.maxPoint = v65;
  TitleInfoEventSubmarineStatusComponent__SetupOldData(
    this,
    &this->fields.userOldPoint,
    &this->fields.oldQuestId,
    &this->fields.progressQuestId,
    &this->fields.isLastGoalPlayed,
    v62);
  maxPoint = this->fields.maxPoint;
  userOldPoint = this->fields.userOldPoint;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v66, v67);
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_5952/*"EVENT_SUBMARINE_NEXT_DESCRIPTION"*/, 0);
  v93 = this->fields.maxPoint;
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v93);
  v72 = System_String__Format(v70, v71, 0);
  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_5953/*"EVENT_SUBMARINE_NEXT_POINT"*/, 0);
  v74 = System_String__Concat_75651716(v72, v73, 0);
  this->fields.nextPointTextFormat = v74;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nextPointTextFormat,
    (int32_t)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  statusBg = (System_String_o *)TitleInfoEventSubmarineStatusComponent_TypeInfo;
  gateNextPointCounterLabel = this->fields.gateNextPointCounterLabel;
  if ( !*(&TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v27, v81);
  if ( !gateNextPointCounterLabel )
    goto LABEL_48;
  v83 = (maxPoint - userOldPoint) & ~((maxPoint - userOldPoint) >> 31);
  UICounterLabel__Setup(
    gateNextPointCounterLabel,
    v83,
    TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields->PROGRESS_ANIMATION_TIME,
    this->fields.nextPointTextFormat,
    0,
    0);
  statusBg = (System_String_o *)this->fields.gateNextPointCounterLabel;
  if ( !statusBg )
    goto LABEL_48;
  UICounterLabel__SetCountLabel((UICounterLabel_o *)statusBg, v83, 0);
  if ( TitleInfoEventSubmarineStatusComponent__IsAllClear(this, v61, this->fields.userOldPoint, v84) )
  {
    statusBg = (System_String_o *)this->fields.gateNextPointCounterLabel;
    if ( !statusBg )
      goto LABEL_48;
    statusBg = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusBg, 0);
    if ( !statusBg )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusBg, 0, 0);
  }
  v86 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  progressPointCounterLabel = this->fields.progressPointCounterLabel;
  v88 = this->fields.userOldPoint;
  if ( !*(&TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v27, v85);
    v86 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  PROGRESS_ANIMATION_TIME = v86->static_fields->PROGRESS_ANIMATION_TIME;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v85);
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5870/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
  if ( !progressPointCounterLabel
    || (UICounterLabel__Setup(progressPointCounterLabel, v88, PROGRESS_ANIMATION_TIME, statusBg, 0, 0),
        (statusBg = (System_String_o *)this->fields.progressPointCounterLabel) == 0) )
  {
LABEL_48:
    sub_2213CDC(statusBg, v27);
  }
  UICounterLabel__SetCountLabel((UICounterLabel_o *)statusBg, this->fields.userOldPoint, 0);
  shipPanelObj = this->fields.shipPanelObj;
  v94 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, this->fields.userOldPoint, v91);
  GameObjectExtensions__SetLocalPosition(shipPanelObj, v94, 0);
  TitleInfoEventSubmarineStatusComponent__SetupAnimation(this, v92);
}


void TitleInfoEventSubmarineStatusComponent__SetupAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gateNextIcon; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  struct UnityEngine_GameObject_o *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v17; // x2
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x20
  System_Predicate_object__o *v19; // x21
  Il2CppObject *v20; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v21; // x21
  QuestReleaseEntity_o *v22; // x20
  System_Predicate_object__o *v23; // x22
  Il2CppObject *v24; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v25; // x22
  QuestReleaseEntity_o *v26; // x21
  System_Predicate_object__o *v27; // x23
  Il2CppObject *v28; // x22
  int32_t ValueInt; // w0
  int32_t oldQuestId; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_Object_o *v34; // x20
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  struct UnityEngine_GameObject_o *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x1
  const MethodInfo *v45; // x2
  long double v46; // q0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596F0D2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_2213A60(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__);
    sub_2213A60(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__);
    sub_2213A60(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__);
    byte_596F0D2 = 1;
  }
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( this->fields.userOldPoint >= this->fields.maxPoint )
  {
    if ( !gateNextIcon )
      goto LABEL_44;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, double))gateNextIcon->klass[1]._1.element_class)(
      gateNextIcon,
      gateNextIcon->klass[1]._1.castClass,
      0.0);
    goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
    if ( UnityEngine_Object__op_Equality(goalAnimObject, 0, 0) )
    {
      v9 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v7);
      this->fields.goalAnimObject = v9;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.goalAnimObject,
        (int32_t)v9,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v8);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v17);
  }
  else
  {
    if ( !gateNextIcon )
      goto LABEL_44;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gateNextIcon->klass[1]._1.element_class)(
      gateNextIcon,
      gateNextIcon->klass[1]._1.castClass,
      1.0);
  }
  baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
  v19 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__,
    0);
  if ( !baseQuestReleaseEntList )
    goto LABEL_44;
  v20 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)baseQuestReleaseEntList,
          (System_Predicate_T__o *)v19,
          (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v21 = this->fields.baseQuestReleaseEntList;
  v22 = (QuestReleaseEntity_o *)v20;
  v23 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v23,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__,
    0);
  if ( !v21 )
    goto LABEL_44;
  v24 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v21,
          (System_Predicate_T__o *)v23,
          (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v25 = this->fields.baseQuestReleaseEntList;
  v26 = (QuestReleaseEntity_o *)v24;
  v27 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v27,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__,
    0);
  if ( !v25 )
    goto LABEL_44;
  v28 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v25,
          (System_Predicate_T__o *)v27,
          (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v22 )
    LODWORD(v22) = QuestReleaseEntity__getValueInt(v22, 0);
  if ( v26 )
    LODWORD(v26) = QuestReleaseEntity__getValueInt(v26, 0);
  if ( v28 )
    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v28, 0);
  else
    ValueInt = 0;
  if ( (int)v26 >= ValueInt )
    goto LABEL_40;
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
                                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
        if ( gateNextIcon )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, double))gateNextIcon->klass[1]._1.element_class)(
            gateNextIcon,
            gateNextIcon->klass[1]._1.castClass,
            0.0);
          gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
          if ( gateNextIcon )
          {
            klass = gateNextIcon->klass;
            *(_QWORD *)&v46 = 0;
LABEL_43:
            ((void (__fastcall *)(long double))klass[1]._1.element_class)(v46);
            return;
          }
        }
      }
LABEL_44:
      sub_2213CDC(gateNextIcon, method);
    }
LABEL_40:
    gateNextIcon = this->fields.shipPanelObj;
    if ( gateNextIcon )
    {
      gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gateNextIcon,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
      if ( gateNextIcon )
      {
        klass = gateNextIcon->klass;
        LODWORD(v46) = 1.0;
        goto LABEL_43;
      }
    }
    goto LABEL_44;
  }
  if ( oldQuestId < 1 || (int)v22 >= ValueInt )
    goto LABEL_40;
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gaugeBar;
  if ( !gateNextIcon )
    goto LABEL_44;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateNextIcon, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
  GameObjectExtensions__SetLocalPosition(this->fields.shipPanelObj, LocalPosition, 0);
  gateNextIcon = this->fields.shipPanelObj;
  if ( !gateNextIcon )
    goto LABEL_44;
  gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gateNextIcon,
                                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !gateNextIcon )
    goto LABEL_44;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gateNextIcon->klass[1]._1.element_class)(
    gateNextIcon,
    gateNextIcon->klass[1]._1.castClass,
    1.0);
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon )
    goto LABEL_44;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, double))gateNextIcon->klass[1]._1.element_class)(
    gateNextIcon,
    gateNextIcon->klass[1]._1.castClass,
    0.0);
  v34 = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
  if ( UnityEngine_Object__op_Equality(v34, 0, 0) )
  {
    v37 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v35);
    this->fields.goalAnimObject = v37;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.goalAnimObject,
      (int32_t)v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  v44 = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v36);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, v44, v45);
}


void TitleInfoEventSubmarineStatusComponent__SetupOldData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t *oldPoint,
        int32_t *oldQuestId,
        int32_t *progressQuestId,
        bool *isLastGoalPlayed,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  bool v13; // w8
  UnityEngine_GameObject_o *gateNextIcon; // x0
  __int64 v15; // x8
  struct EventDetailEntity_o *eventDetailEnt; // x9
  TerminalPramsManager_c *v17; // x0
  System_String_array *ValueByArray; // x0
  il2cpp_array_size_t max_length; // x8
  System_String_array *v20; // x23
  int32_t v21; // w0
  int v22; // w8
  int32_t v23; // w0
  int v24; // w8
  int32_t v25; // w0
  __int64 v26; // x1
  __int64 v27; // x2
  int v28; // w8
  System_String_o *v29; // x20
  char v30; // w20
  TerminalPramsManager_c *v31; // x0
  int32_t currentQuestId; // w9
  __int64 v33; // x1
  __int64 v34; // x2
  int32_t targetQuestId; // w20
  int32_t v36; // w1

  if ( (byte_596F0DD & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596F0DD = 1;
  }
  *oldPoint = 0;
  *oldQuestId = 0;
  *progressQuestId = 0;
  *isLastGoalPlayed = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, oldPoint, oldQuestId);
  v13 = TerminalPramsManager__CheckEventSubmarinePointSaveData(0);
  gateNextIcon = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  if ( !v13 )
    goto LABEL_57;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
  if ( !byte_596CFDA )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CFDA = 1;
  }
  gateNextIcon = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
    gateNextIcon = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_QWORD *)(gateNextIcon[7].fields.m_CachedPtr + 448) )
    goto LABEL_57;
  if ( !HIDWORD(gateNextIcon[9].monitor) )
    j_il2cpp_runtime_class_init_0(gateNextIcon, v11, v12);
  if ( !byte_596CFDA )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CFDA = 1;
  }
  gateNextIcon = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
    gateNextIcon = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  }
  v15 = *(_QWORD *)(gateNextIcon[7].fields.m_CachedPtr + 448);
  if ( !v15 )
    goto LABEL_53;
  eventDetailEnt = this->fields.eventDetailEnt;
  if ( !eventDetailEnt )
    goto LABEL_53;
  if ( *(_DWORD *)(v15 + 16) != eventDetailEnt->fields.eventId )
  {
LABEL_57:
    if ( !HIDWORD(gateNextIcon[9].monitor) )
      j_il2cpp_runtime_class_init_0(gateNextIcon, v11, v12);
    if ( !byte_596A92E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92E = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
      v31 = TerminalPramsManager_TypeInfo;
    }
    if ( v31->static_fields->_QuestId_k__BackingField == this->fields.uiReleaseQuestId )
      return;
    gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
    *oldPoint = this->fields.userPoint;
    currentQuestId = this->fields.currentQuestId;
    this->fields.isAfterTakingOver = 1;
    *oldQuestId = currentQuestId;
    *progressQuestId = currentQuestId;
    if ( gateNextIcon )
    {
      ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, double))gateNextIcon->klass[1]._1.element_class)(
        gateNextIcon,
        gateNextIcon->klass[1]._1.castClass,
        0.0);
      gateNextIcon = this->fields.shipPanelObj;
      if ( gateNextIcon )
      {
        gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     gateNextIcon,
                                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
        if ( gateNextIcon )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gateNextIcon->klass[1]._1.element_class)(
            gateNextIcon,
            gateNextIcon->klass[1]._1.castClass,
            1.0);
          targetQuestId = this->fields.targetQuestId;
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v33, v34);
          v36 = targetQuestId;
          v30 = 1;
          if ( CondType__IsOpen(1, v36, 0, 0, 0, 0) )
            goto LABEL_51;
          return;
        }
      }
    }
LABEL_53:
    sub_2213CDC(gateNextIcon, v11);
  }
  if ( !HIDWORD(gateNextIcon[9].monitor) )
    j_il2cpp_runtime_class_init_0(gateNextIcon, v11, v12);
  if ( !byte_596CFDA )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CFDA = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
    v17 = TerminalPramsManager_TypeInfo;
  }
  gateNextIcon = (UnityEngine_GameObject_o *)v17->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  if ( !gateNextIcon )
    goto LABEL_53;
  ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)gateNextIcon, 0x2Cu, 0);
  if ( ValueByArray )
  {
    max_length = ValueByArray->max_length;
    v20 = ValueByArray;
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
        sub_2213CE4(ValueByArray);
      v21 = System_Int32__Parse(ValueByArray->m_Items[0], 0);
      v22 = v20->max_length;
      *oldPoint = v21;
      if ( v22 >= 2 )
      {
        v23 = System_Int32__Parse(v20->m_Items[1], 0);
        v24 = v20->max_length;
        *oldQuestId = v23;
        if ( v24 >= 3 )
        {
          v25 = System_Int32__Parse(v20->m_Items[2], 0);
          v28 = v20->max_length;
          *progressQuestId = v25;
          if ( v28 >= 4 )
          {
            v29 = v20->m_Items[3];
            if ( !*(_DWORD *)(qword_5984328 + 228) )
              j_il2cpp_runtime_class_init_0(qword_5984328, v26, v27);
            v30 = System_Boolean__Parse(v29, 0);
LABEL_51:
            *isLastGoalPlayed = v30;
          }
        }
      }
    }
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
    sub_2213CDC(this, 0);
  return n->fields.questId == this->fields.oldQuestId;
}


bool TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_2213CDC(this, 0);
  return n->fields.questId == this->fields.progressQuestId;
}


bool TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_2213CDC(this, 0);
  return n->fields.questId == this->fields.currentQuestId;
}


bool TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_0(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_2213CDC(this, 0);
  return n->fields.questId == this->fields.oldQuestId;
}


bool TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_2213CDC(this, 0);
  return n->fields.questId == this->fields.progressQuestId;
}


bool TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(gaugeBar, method);
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
    sub_2213CDC(this, method);
  return (float)gaugeBar->fields.mWidth;
}


void TitleInfoEventSubmarineStatusComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596F0F2 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
    byte_596F0F2 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventSubmarineStatusComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, a);
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
    sub_2213CDC(this, n);
  return n->fields.questId == _4__this->fields.currentQuestId;
}


bool TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___EndAnimation_b__1(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_2213CDC(this, 0);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct TitleInfoEventSubmarineStatusComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, data);
  _4__this->fields.eventAssetData = data;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.eventAssetData,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.callback, 0);
}