void __fastcall TitleInfoEventSubmarineStatusComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TitleInfoEventSubmarineStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_49FAF10 & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v1);
    byte_49FAF10 = 1;
  }
  static_fields = TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->ENTRY_ANIMATION_TIME = xmmword_BA4270;
  static_fields->MAP_CHANGE_WAIT_TIME = 0.3;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___ctor(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FAF0F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_UIAtlas__TypeInfo, v4);
    byte_49FAF0F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.atlasList, (int32_t)v5, v6, v7);
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
  float v6; // s0
  float v7; // s1
  float v8; // s2
  struct UISprite_o *gaugeBar; // x8
  int32_t maxPoint; // w9
  int mWidth; // w8
  float v12; // s3
  int32_t minPoint; // w10
  float v14; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  *(UnityEngine_Vector3_o *)&v6 = TitleInfoEventSubmarineStatusComponent__get_BasePosition(
                                    this,
                                    *(const MethodInfo **)&point);
  gaugeBar = this->fields.gaugeBar;
  if ( !gaugeBar )
    sub_1B64324(v5);
  maxPoint = this->fields.maxPoint;
  mWidth = gaugeBar->fields.mWidth;
  v12 = 1.0;
  if ( maxPoint > point )
  {
    minPoint = this->fields.minPoint;
    v12 = 0.0;
    if ( minPoint < point )
      v12 = (float)(point - minPoint) / (float)(maxPoint - minPoint);
  }
  v14 = v6 - (float)(v12 * (float)mWidth);
  result.fields.z = v8;
  result.fields.y = v7;
  result.fields.x = v14;
  return result;
}


UnityEngine_GameObject_o *__fastcall TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  AssetData_o *mapAssetData; // x0
  Il2CppObject *Object_object__48347676; // x20
  const MethodInfo *v7; // x2
  UnityEngine_GameObject_o *v8; // x21
  struct System_String_o *GoalAnimName; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x0

  if ( (byte_49FAEFE & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, method);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49FAEFE = 1;
  }
  mapAssetData = this->fields.mapAssetData;
  if ( !mapAssetData )
    return 0LL;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              mapAssetData,
                              this->fields.goalIconAnimPrefabName,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v7);
    this->fields.animClipName = GoalAnimName;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animClipName, (int32_t)GoalAnimName, v10, v11);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = UnityEngine_Object__Instantiate_object_(
            Object_object__48347676,
            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v12 )
      sub_1B64324(0LL);
    v8 = (UnityEngine_GameObject_o *)v12;
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v12, 0LL);
    GameObjectExtensions__SafeSetParent_33381252(gameObject, this->fields.statusObj, 0LL);
    v14 = UnityEngine_GameObject__get_gameObject(v8, 0LL);
    GameObjectExtensions__ResetLocalPosition(v14, 0LL);
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__CreateSaveData(
        int32_t userPoint,
        int32_t currentQuestId,
        int32_t progressQuestId,
        bool isLastGoalPlayed,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *v6; // x19
  System_String_o *v7; // x20
  System_String_o *v8; // x21
  const MethodInfo *v9; // x4
  System_String_o *v10; // x22
  bool v12; // [xsp+8h] [xbp-38h] BYREF
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = currentQuestId;
  v15 = userPoint;
  v13 = progressQuestId;
  v12 = isLastGoalPlayed;
  if ( (byte_49FAF02 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, *(_QWORD *)&currentQuestId);
    sub_1B640C8(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v5);
    byte_49FAF02 = 1;
  }
  v6 = System_Int32__ToString((int32_t)&v15, 0LL);
  v7 = System_Int32__ToString((int32_t)&v14, 0LL);
  v8 = System_Int32__ToString((int32_t)&v13, 0LL);
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v10 = System_Boolean__ToString((bool)&v12, 0LL);
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  return TitleInfoEventSubmarineStatusComponent__CreateSaveData_36797796(v6, v7, v8, v10, v9);
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__CreateSaveData_36797796(
        System_String_o *userPoint,
        System_String_o *currentQuestId,
        System_String_o *progressQuestId,
        System_String_o *isLastGoalPlayed,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Text_StringBuilder_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_49FAF03 & 1) == 0 )
  {
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, currentQuestId);
    sub_1B640C8(&StringLiteral_869/*","*/, v9);
    byte_49FAF03 = 1;
  }
  v10 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, currentQuestId, progressQuestId);
  System_Text_StringBuilder___ctor(v10, 0LL);
  if ( !v10 )
    sub_1B64324(v11);
  System_Text_StringBuilder__Append_60536548(v10, userPoint, 0LL);
  System_Text_StringBuilder__Append_60536548(v10, (System_String_o *)StringLiteral_869/*","*/, 0LL);
  System_Text_StringBuilder__Append_60536548(v10, currentQuestId, 0LL);
  System_Text_StringBuilder__Append_60536548(v10, (System_String_o *)StringLiteral_869/*","*/, 0LL);
  System_Text_StringBuilder__Append_60536548(v10, progressQuestId, 0LL);
  System_Text_StringBuilder__Append_60536548(v10, (System_String_o *)StringLiteral_869/*","*/, 0LL);
  System_Text_StringBuilder__Append_60536548(v10, isLastGoalPlayed, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                              v10,
                              v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__DestroyGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v5; // x2
  struct System_String_o *GoalAnimName; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_GameObject_o *Component_object; // x0
  ServantStatusBattleListViewItem_o *p_goalAnimObject; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FAF00 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FAF00 = 1;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 0, v5);
    this->fields.animClipName = GoalAnimName;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animClipName, (int32_t)GoalAnimName, v7, v8);
    Component_object = this->fields.goalAnimObject;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
    {
      sub_1B64324(Component_object);
    }
    p_goalAnimObject = (ServantStatusBattleListViewItem_o *)&this->fields.goalAnimObject;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Component_object, 0LL);
    klass = (UnityEngine_Object_o *)p_goalAnimObject->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(klass, 0LL);
    p_goalAnimObject->klass = 0LL;
    sub_1B6406C(p_goalAnimObject, 0, v12, v13);
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  MissionNotifyManager_o *Instance; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t userPoint; // w8
  int32_t currentQuestId; // w9
  TerminalPramsManager_c *v23; // x0
  EventSaveData_o *v24; // x22
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  TerminalPramsManager_c *v28; // x0
  ServantStatusBattleListViewItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v30; // x0
  System_String_array *ValueByArray; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  System_String_array *v34; // x22
  int32_t v35; // w23
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x24
  System_Predicate_object__o *v37; // x25
  Il2CppObject *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  int32_t v41; // w8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v42; // x24
  System_Predicate_object__o *v43; // x25
  __int64 v44; // x1
  const MethodInfo *v45; // x4
  struct EventDetailEntity_o *eventDetailEnt; // x8
  struct UIWidget_o *mWidget; // x9
  int32_t v48; // w21
  _BOOL4 isLastGoalPlayed; // w24
  struct UIWidget_o *v50; // x20
  int32_t v51; // w2
  int32_t v52; // w3

  if ( (byte_49FAEFA & 1) == 0 )
  {
    sub_1B640C8(&EventSaveData_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v4);
    sub_1B640C8(&System_Predicate_QuestReleaseEntity__TypeInfo, v5);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
    sub_1B640C8(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v8);
    sub_1B640C8(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__, v9);
    sub_1B640C8(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__, v10);
    sub_1B640C8(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo, v11);
    byte_49FAEFA = 1;
  }
  v12 = sub_1B64314(TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_59;
  *(_QWORD *)(v12 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v14, v15);
  if ( this->fields.isGoalAnimToLoop )
  {
    this->fields.isGoalAnimToLoop = 0;
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v16);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v18);
  }
  this->fields.isAfterTakingOver = 0;
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  if ( !byte_49F9178 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v19);
    byte_49F9178 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  if ( !v23->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
  {
    v24 = (EventSaveData_o *)sub_1B64314(EventSaveData_TypeInfo, v19, v20);
    EventSaveData___ctor(v24, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9179 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v25);
      byte_49F9179 = 1;
    }
    v28 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v28 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (ServantStatusBattleListViewItem_o *)&v28->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v24;
    sub_1B6406C(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v24, v26, v27);
    v23 = TerminalPramsManager_TypeInfo;
  }
  if ( !v23->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v23);
  if ( !byte_49F9178 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v19);
    byte_49F9178 = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  Instance = (MissionNotifyManager_o *)v30->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  if ( !Instance )
LABEL_59:
    sub_1B64324(Instance);
  ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)Instance, 0x2Cu, 0LL);
  v34 = ValueByArray;
  if ( !ValueByArray )
  {
    v35 = 0;
    goto LABEL_35;
  }
  if ( (int)ValueByArray->max_length < 2 )
  {
    v35 = 0;
    goto LABEL_34;
  }
  v35 = System_Int32__Parse(ValueByArray->m_Items[1], 0LL);
  if ( (int)v34->max_length < 3 )
  {
LABEL_34:
    LODWORD(v34) = 0;
    goto LABEL_35;
  }
  LODWORD(v34) = System_Int32__Parse(v34->m_Items[2], 0LL);
LABEL_35:
  baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
  v37 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_QuestReleaseEntity__TypeInfo, v32, v33);
  System_Predicate_object____ctor(
    v37,
    (Il2CppObject *)v12,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__,
    0LL);
  if ( !baseQuestReleaseEntList )
    goto LABEL_59;
  v38 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)baseQuestReleaseEntList,
          (System_Predicate_T__o *)v37,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v41 = this->fields.currentQuestId;
  if ( v38 )
    v35 = this->fields.currentQuestId;
  if ( (int)v34 > v41 )
    v41 = (int)v34;
  *(_DWORD *)(v12 + 24) = v41;
  v42 = this->fields.baseQuestReleaseEntList;
  v43 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_QuestReleaseEntity__TypeInfo, v39, v40);
  System_Predicate_object____ctor(
    v43,
    (Il2CppObject *)v12,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__,
    0LL);
  if ( !v42 )
    goto LABEL_59;
  if ( System_Collections_Generic_List_object___Find(
         (System_Collections_Generic_List_object__o *)v42,
         (System_Predicate_T__o *)v43,
         (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
  {
    LODWORD(v34) = *(_DWORD *)(v12 + 24);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9178 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v44);
    byte_49F9178 = 1;
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
  if ( !byte_49F9178 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v44);
    Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    byte_49F9178 = 1;
  }
  if ( !LODWORD(Instance[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
  }
  v48 = this->fields.userPoint;
  isLastGoalPlayed = this->fields.isLastGoalPlayed;
  v50 = Instance[2].fields.mNoticeNumberComp[6].fields.mWidget;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  Instance = (MissionNotifyManager_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData(
                                         v48,
                                         v35,
                                         (int32_t)v34,
                                         isLastGoalPlayed,
                                         v45);
  if ( !v50 )
    goto LABEL_59;
  v50->fields.m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o *)Instance;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v50->fields.m_CancellationTokenSource, (int32_t)Instance, v51, v52);
  TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(0LL);
  ActionExtensions__Call(this->fields.onEndAnim, 0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndExitAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoEventSubmarineStatusComponent_c *v4; // x0

  if ( (byte_49FAEF4 & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventSubmarineStatusComponent_TypeInfo, method);
    sub_1B640C8(&StringLiteral_10598/*"PlayEntryAnimation"*/, v3);
    byte_49FAEF4 = 1;
  }
  TitleInfoEventSubmarineStatusComponent__DestroyGoalAnim(this, method);
  v4 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v4 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10598/*"PlayEntryAnimation"*/,
    v4->static_fields->MAP_CHANGE_WAIT_TIME,
    0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndProgressAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t userPoint; // w8
  int32_t maxPoint; // w9
  bool v7; // cc
  UnityEngine_Object_o *goalAnimObject; // x21
  struct UnityEngine_GameObject_o **p_goalAnimObject; // x20
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x2
  UnityEngine_GameObject_o *gateNextPointCounterLabel; // x0
  UnityEngine_Object_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  TitleInfoEventSubmarineStatusComponent_o *ProgressQuestReleaseEnt; // x21
  const MethodInfo *v17; // x2
  QuestReleaseEntity_o *CurrentQuestReleaseEnt; // x0
  const MethodInfo *v19; // x3
  QuestReleaseEntity_o *v20; // x1
  const MethodInfo *v21; // x1
  struct UnityEngine_GameObject_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_Object_o *v25; // x20
  const MethodInfo *v26; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v28; // x2
  TitleInfoEventSubmarineStatusComponent_c *v29; // x0

  if ( (byte_49FAEF7 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_5919/*"EndAnimation"*/, v4);
    byte_49FAEF7 = 1;
  }
  userPoint = this->fields.userPoint;
  maxPoint = this->fields.maxPoint;
  v7 = userPoint < maxPoint;
  if ( userPoint >= maxPoint )
    userPoint = this->fields.maxPoint;
  this->fields.userOldPoint = userPoint;
  if ( v7
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
  v10 = UnityEngine_Object__op_Inequality(goalAnimObject, 0LL, 0LL);
  if ( v10 )
  {
    gateNextPointCounterLabel = *p_goalAnimObject;
    if ( !*p_goalAnimObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(gateNextPointCounterLabel, 0, 0LL);
    v13 = (UnityEngine_Object_o *)*p_goalAnimObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v13, 0LL);
    *p_goalAnimObject = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.goalAnimObject, 0, v14, v15);
  }
  ProgressQuestReleaseEnt = (TitleInfoEventSubmarineStatusComponent_o *)TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
                                                                          (TitleInfoEventSubmarineStatusComponent_o *)v10,
                                                                          this->fields.baseQuestReleaseEntList,
                                                                          v11);
  CurrentQuestReleaseEnt = TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
                             ProgressQuestReleaseEnt,
                             this->fields.baseQuestReleaseEntList,
                             v17);
  if ( CurrentQuestReleaseEnt )
    v20 = CurrentQuestReleaseEnt;
  else
    v20 = (QuestReleaseEntity_o *)ProgressQuestReleaseEnt;
  if ( TitleInfoEventSubmarineStatusComponent__IsAllClear(this, v20, this->fields.userPoint, v19) )
  {
    gateNextPointCounterLabel = (UnityEngine_GameObject_o *)this->fields.gateNextPointCounterLabel;
    if ( !gateNextPointCounterLabel
      || (gateNextPointCounterLabel = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)gateNextPointCounterLabel,
                                        0LL)) == 0LL )
    {
LABEL_31:
      sub_1B64324(gateNextPointCounterLabel);
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
  v22 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v21);
  this->fields.goalAnimObject = v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.goalAnimObject, (int32_t)v22, v23, v24);
  v25 = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v26);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v28);
  }
  v29 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v29 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5919/*"EndAnimation"*/,
    v29->static_fields->GOAL_ANIMATION_TIME,
    0LL);
}


QuestReleaseEntity_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Collections_Generic_List_QuestReleaseEntity__o *baseList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _BOOL8 v8; // x0
  Il2CppObject *current; // x19
  int32_t klass; // w20
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FAF06 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, baseList);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v6);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1B640C8(
                                                         &Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__,
                                                         v7);
    byte_49FAF06 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !baseList )
    sub_1B64324(this);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)baseList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v8 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1B64324(v8);
    klass = (int32_t)v12.fields._current[1].klass;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_37285996(klass, -1, 0, 0LL) )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return (QuestReleaseEntity_o *)current;
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FAF08 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&StringLiteral_6206/*"EventUI/Prefabs/{0}"*/, v3);
    byte_49FAF08 = 1;
  }
  v6 = eventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format((System_String_o *)StringLiteral_6206/*"EventUI/Prefabs/{0}"*/, v4, 0LL);
}


UnityEngine_GameObject_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_49FAF0E & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, name);
    byte_49FAF0E = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.eventAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__48347676(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t animType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *goalIconAnimPrefabName; // x0
  __int64 *v10; // x8

  if ( (byte_49FAEFD & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16483/*"_loop"*/, *(_QWORD *)&animType);
    sub_1B640C8(&StringLiteral_16504/*"_start"*/, v5);
    sub_1B640C8(&StringLiteral_16481/*"_last"*/, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    sub_1B640C8(&StringLiteral_16468/*"_end"*/, v8);
    byte_49FAEFD = 1;
  }
  goalIconAnimPrefabName = this->fields.goalIconAnimPrefabName;
  if ( this->fields.isLastGoalPlayed )
    goalIconAnimPrefabName = System_String__Concat_61375396(
                               goalIconAnimPrefabName,
                               (System_String_o *)StringLiteral_16481/*"_last"*/,
                               0LL);
  switch ( animType )
  {
    case 3:
      v10 = &StringLiteral_16468/*"_end"*/;
      return System_String__Concat_61375396(goalIconAnimPrefabName, (System_String_o *)*v10, 0LL);
    case 2:
      v10 = &StringLiteral_16483/*"_loop"*/;
      return System_String__Concat_61375396(goalIconAnimPrefabName, (System_String_o *)*v10, 0LL);
    case 1:
      v10 = &StringLiteral_16504/*"_start"*/;
      return System_String__Concat_61375396(goalIconAnimPrefabName, (System_String_o *)*v10, 0LL);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


QuestReleaseEntity_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Collections_Generic_List_QuestReleaseEntity__o *baseList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *current; // x24
  QuestReleaseEntity_o *v9; // x19
  _BOOL8 v10; // x0
  int32_t klass; // w20
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FAF05 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, baseList);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v6);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1B640C8(
                                                         &Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__,
                                                         v7);
    byte_49FAF05 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !baseList )
    sub_1B64324(this);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)baseList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  current = 0LL;
  do
  {
    v9 = (QuestReleaseEntity_o *)current;
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1B64324(v10);
    klass = (int32_t)v13.fields._current[1].klass;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  }
  while ( CondType__IsQuestClear_37285996(klass, -1, 0, 0LL) );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v9;
}


System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  void *Instance; // x0
  System_Collections_Generic_List_QuestReleaseEntity__o *ListByTargetAndCondType; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x19
  _BOOL8 v20; // x0
  Il2CppObject *current; // x20
  __int64 QuestType; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  System_Comparison_T__o *v31; // x20
  Il2CppObject *v32; // x21
  struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FAF04 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_QuestReleaseEntity__TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__, v13);
    sub_1B640C8(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo, v14);
    byte_49FAF04 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_26;
  ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                              (QuestReleaseMaster_o *)Instance,
                              eventId,
                              85,
                              0LL);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !ListByTargetAndCondType )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_object__o *)ListByTargetAndCondType,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v20 )
      break;
    current = v38.fields._current;
    if ( !v38.fields._current )
      sub_1B64324(v20);
    QuestType = QuestMaster__GetQuestType((int32_t)v38.fields._current[1].klass, 0LL);
    if ( (_DWORD)QuestType == 2 )
    {
      if ( !v19 )
        sub_1B64324(QuestType);
      items = v19->fields._items;
      v26 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
      ++v19->fields._version;
      if ( !items )
        sub_1B64324(QuestType);
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          current,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v19->fields._size = size + 1;
        v28[4] = (Il2CppClass *)current;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)current, v23, v24);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  Instance = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
    Instance = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v31 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_QuestReleaseEntity__TypeInfo, v29, v30);
    System_Comparison_object____ctor(
      v31,
      v32,
      Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__,
      0LL);
    static_fields = TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields;
    static_fields->__9__80_0 = (struct System_Comparison_QuestReleaseEntity__o *)v31;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__80_0, (int32_t)v31, v34, v35);
  }
  if ( !v19 )
LABEL_26:
    sub_1B64324(Instance);
  System_Collections_Generic_List_object___Sort_55243320(
    v19,
    v31,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v19;
}


int32_t __fastcall TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  struct EventDetailEntity_o *eventDetailEnt; // x8

  if ( (byte_49FAEFB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventPointMaster___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FAEFB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  eventDetailEnt = this->fields.eventDetailEnt;
  if ( !eventDetailEnt || !MasterData_object )
LABEL_9:
    sub_1B64324(Instance);
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
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *baseQuestReleaseEntList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x21
  int32_t ValueInt; // w0
  int32_t klass; // w22
  int32_t v12; // w21
  _BOOL8 IsQuestClear_37285996; // x0

  if ( (byte_49FAF07 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, currentQuestReleaseEnt);
    sub_1B640C8(&Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___, v7);
    byte_49FAF07 = 1;
  }
  baseQuestReleaseEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseQuestReleaseEntList;
  if ( baseQuestReleaseEntList )
  {
    baseQuestReleaseEntList = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__LastOrDefault_object_(
                                                                                     baseQuestReleaseEntList,
                                                                                     (const MethodInfo_2E603A0 *)Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___);
    if ( baseQuestReleaseEntList )
    {
      v9 = baseQuestReleaseEntList;
      ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)baseQuestReleaseEntList, 0LL);
      klass = (int32_t)v9[1].klass;
      v12 = ValueInt;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_37285996 = CondType__IsQuestClear_37285996(klass, -1, 0, 0LL);
      if ( !currentQuestReleaseEnt )
        sub_1B64324(IsQuestClear_37285996);
      LOBYTE(baseQuestReleaseEntList) = IsQuestClear_37285996 & (v12 <= nowPoint) & (QuestReleaseEntity__getValueInt(
                                                                                       currentQuestReleaseEnt,
                                                                                       0LL) == v12);
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
  __int64 v3; // x1
  UnityEngine_Object_o *goalAnimObject; // x20
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_49FAF01 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FAF01 = 1;
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
                                                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
  {
    sub_1B64324(Component_object);
  }
  return UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)Component_object, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventSubmarineStatusComponent__LoadEventUIAssetData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x1
  System_String_o *EventUIAssetDataPath; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  AssetLoader_LoadEndDataHandler_o *v21; // x20

  if ( (byte_49FAF09 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B640C8(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v8);
    sub_1B640C8(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__, v9);
    sub_1B640C8(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo, v10);
    byte_49FAF09 = 1;
  }
  v11 = sub_1B64314(
          TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo,
          *(_QWORD *)&eventId,
          callback);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  *(_QWORD *)(v11 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 24) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)callback, v15, v16);
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  EventUIAssetDataPath = TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(eventId, v17);
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v19, v20);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)v11,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v21, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventSubmarineStatusComponent__LoadLocalAtlas(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  TitleInfoEventSubmarineStatusComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v13; // w9
  int i; // w28
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  Il2CppObject *Component_object; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v27; // x8
  int32_t v28; // [xsp+8h] [xbp-58h] BYREF
  int v29; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_49FAF0C & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_24845/*"{0:D2}"*/, v9);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1B640C8(&StringLiteral_5355/*"DownloadEventUIAtlas{0}{1}"*/, v10);
    byte_49FAF0C = 1;
  }
  if ( v4->fields.eventAssetData )
  {
    atlasList = v4->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1B64324(this);
    size = atlasList->fields._size;
    v13 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v13;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
    for ( i = 1; ; ++i )
    {
      v29 = i;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
      v16 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_24845/*"{0:D2}"*/, v15, 0LL);
      v28 = eventId;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
      v18 = System_String__Format_61389768((System_String_o *)StringLiteral_5355/*"DownloadEventUIAtlas{0}{1}"*/, v17, v16, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
                                                                 v4,
                                                                 v18,
                                                                 v19);
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
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (TitleInfoEventSubmarineStatusComponent_o *)v4->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      v24 = *(_QWORD *)&this->fields.m_CachedPtr;
      v25 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v24 )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v24 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = v24 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v27 + 32) = Component_object;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 32), (int32_t)Component_object, v22, v23);
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
    sub_1B64324(this);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  int32_t UserEventPoint; // w0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  int32_t oldQuestId; // w8
  int32_t currentQuestId; // w9
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x21
  System_Predicate_object__o *v18; // x22
  Il2CppObject *Instance; // x0
  Il2CppObject *v20; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v21; // x22
  QuestReleaseEntity_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  System_Predicate_object__o *v25; // x23
  Il2CppObject *v26; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v27; // x23
  QuestReleaseEntity_o *v28; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  System_Predicate_object__o *v31; // x24
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x23
  const MethodInfo *v35; // x1
  int32_t v36; // w8

  if ( (byte_49FAEF2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, onEndAnim);
    sub_1B640C8(&System_Predicate_QuestReleaseEntity__TypeInfo, v6);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_1B640C8(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__, v8);
    sub_1B640C8(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__, v9);
    sub_1B640C8(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__, v10);
    byte_49FAEF2 = 1;
  }
  if ( this->fields.isAfterTakingOver )
  {
    this->fields.onEndAnim = onEndAnim;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onEndAnim, (int32_t)onEndAnim, (int32_t)method, v3);
    TitleInfoEventSubmarineStatusComponent__EndAnimation(this, v11);
    return;
  }
  UserEventPoint = TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(this, (const MethodInfo *)onEndAnim);
  oldQuestId = this->fields.oldQuestId;
  currentQuestId = this->fields.currentQuestId;
  this->fields.userPoint = UserEventPoint;
  if ( oldQuestId == currentQuestId && this->fields.userOldPoint == UserEventPoint )
  {
    TitleInfoEventSubmarineStatusComponent__PlayLastMapAnimation(this, onEndAnim, v14);
    return;
  }
  baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
  v18 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_QuestReleaseEntity__TypeInfo, v13, v14);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__,
    0LL);
  if ( !baseQuestReleaseEntList )
    goto LABEL_28;
  v20 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)baseQuestReleaseEntList,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v21 = this->fields.baseQuestReleaseEntList;
  v22 = (QuestReleaseEntity_o *)v20;
  v25 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_QuestReleaseEntity__TypeInfo, v23, v24);
  System_Predicate_object____ctor(
    v25,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__,
    0LL);
  if ( !v21 )
    goto LABEL_28;
  v26 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v21,
          (System_Predicate_T__o *)v25,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v27 = this->fields.baseQuestReleaseEntList;
  v28 = (QuestReleaseEntity_o *)v26;
  v31 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_QuestReleaseEntity__TypeInfo, v29, v30);
  System_Predicate_object____ctor(
    v31,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__,
    0LL);
  if ( !v27 )
    goto LABEL_28;
  v34 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v27,
          (System_Predicate_T__o *)v31,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v22 )
    LODWORD(v22) = QuestReleaseEntity__getValueInt(v22, 0LL);
  if ( v28 )
    LODWORD(v28) = QuestReleaseEntity__getValueInt(v28, 0LL);
  if ( v34 )
    LODWORD(v34) = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v34, 0LL);
  if ( (int)v22 > (int)v34 )
  {
    ActionExtensions__Call(onEndAnim, 0LL);
    return;
  }
  this->fields.onEndAnim = onEndAnim;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onEndAnim, (int32_t)onEndAnim, v32, v33);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1B64324(Instance);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  if ( (int)v28 < (int)v34 )
  {
    v36 = this->fields.oldQuestId;
    if ( v36 )
    {
      if ( (int)v22 < (int)v34 && v36 >= 1 )
      {
        TitleInfoEventSubmarineStatusComponent__PlayExitAnimation(this, v35);
        return;
      }
    }
    else if ( this->fields.currentQuestId >= 1 )
    {
      TitleInfoEventSubmarineStatusComponent__PlayEntryAnimation(this, v35);
      return;
    }
  }
  TitleInfoEventSubmarineStatusComponent__PlayProgressAnimation(this, v35);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayEntryAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *shipPanelObj; // x20
  UnityEngine_GameObject_o *gateNextIcon; // x0
  Il2CppObject *Component_object; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_GameObject_o *v15; // x20
  TitleInfoEventSubmarineStatusComponent_c *v16; // x0
  System_Collections_Generic_List_object__o *klass; // x21
  float ENTRY_ANIMATION_TIME; // s0
  EventDelegate_o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  Il2CppObject *v26; // x20
  UnityEngine_GameObject_o *v27; // x19
  TitleInfoEventSubmarineStatusComponent_c *v28; // x0
  float v29; // s0
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FAEF5 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_5931/*"EndEntryAnimation"*/, v9);
    byte_49FAEF5 = 1;
  }
  shipPanelObj = this->fields.shipPanelObj;
  v30 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, this->fields.minPoint, v2);
  GameObjectExtensions__SetLocalPosition(shipPanelObj, v30, 0LL);
  gateNextIcon = this->fields.shipPanelObj;
  if ( !gateNextIcon )
    goto LABEL_33;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gateNextIcon,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)Component_object, 0LL);
  }
  gateNextIcon = this->fields.shipPanelObj;
  if ( !gateNextIcon )
    goto LABEL_33;
  gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                               gateNextIcon,
                                               (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !gateNextIcon )
    goto LABEL_33;
  v15 = gateNextIcon;
  gateNextIcon[5].monitor = (void *)0x3F80000000000000LL;
  v16 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v16 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  klass = (System_Collections_Generic_List_object__o *)v15[3].klass;
  ENTRY_ANIMATION_TIME = v16->static_fields->ENTRY_ANIMATION_TIME;
  LODWORD(v15[1].monitor) = 3;
  *(float *)&v15[2].monitor = ENTRY_ANIMATION_TIME;
  v19 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v13, v14);
  EventDelegate___ctor_46509032(v19, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5931/*"EndEntryAnimation"*/, 0LL);
  if ( !klass )
    goto LABEL_33;
  items = klass->fields._items;
  v23 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++klass->fields._version;
  if ( !items )
    goto LABEL_33;
  size = klass->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v19,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v19;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v19, v20, v21);
  }
  UITweener__PlayForward((UITweener_o *)v15, 0LL);
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon )
    goto LABEL_33;
  gateNextIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateNextIcon, 0LL);
  if ( !gateNextIcon )
    goto LABEL_33;
  v26 = UnityEngine_GameObject__GetComponent_object_(
          gateNextIcon,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)v26, 0LL);
  }
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon
    || (gateNextIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateNextIcon, 0LL)) == 0LL
    || (gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                     gateNextIcon,
                                                     (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___)) == 0LL )
  {
LABEL_33:
    sub_1B64324(gateNextIcon);
  }
  gateNextIcon[5].monitor = (void *)0x3F80000000000000LL;
  v27 = gateNextIcon;
  v28 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v28 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  v29 = v28->static_fields->ENTRY_ANIMATION_TIME;
  LODWORD(v27[1].monitor) = 3;
  *(float *)&v27[2].monitor = v29;
  UITweener__PlayForward((UITweener_o *)v27, 0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayExitAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *shipPanelObj; // x0
  Il2CppObject *Component_object; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_GameObject_o *v13; // x20
  TitleInfoEventSubmarineStatusComponent_c *v14; // x0
  System_Collections_Generic_List_object__o *klass; // x21
  float EXIT_ANIMATION_TIME; // s0
  EventDelegate_o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  struct UnityEngine_GameObject_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *GoalAnimName; // x1
  const MethodInfo *v31; // x2

  if ( (byte_49FAEF3 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_5941/*"EndExitAnimation"*/, v8);
    byte_49FAEF3 = 1;
  }
  shipPanelObj = this->fields.shipPanelObj;
  if ( !shipPanelObj )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       shipPanelObj,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)Component_object, 0LL);
  }
  shipPanelObj = this->fields.shipPanelObj;
  if ( !shipPanelObj )
    goto LABEL_24;
  shipPanelObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                               shipPanelObj,
                                               (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !shipPanelObj )
    goto LABEL_24;
  v13 = shipPanelObj;
  shipPanelObj[5].monitor = (void *)1065353216;
  v14 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v14 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  klass = (System_Collections_Generic_List_object__o *)v13[3].klass;
  EXIT_ANIMATION_TIME = v14->static_fields->EXIT_ANIMATION_TIME;
  LODWORD(v13[1].monitor) = 3;
  *(float *)&v13[2].monitor = EXIT_ANIMATION_TIME;
  v17 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v11, v12);
  EventDelegate___ctor_46509032(v17, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5941/*"EndExitAnimation"*/, 0LL);
  if ( !klass
    || (items = klass->fields._items,
        v21 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++klass->fields._version,
        !items) )
  {
LABEL_24:
    sub_1B64324(shipPanelObj);
  }
  size = klass->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v17,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v17;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v17, v18, v19);
  }
  UITweener__PlayForward((UITweener_o *)v13, 0LL);
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
  {
    v27 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v25);
    this->fields.goalAnimObject = v27;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.goalAnimObject, (int32_t)v27, v28, v29);
  }
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 3, v26);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v31);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *animClipName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *goalAnimObject; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_49FAEFF & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, animClipName);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FAEFF = 1;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
  {
    this->fields.animClipName = animClipName;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animClipName, (int32_t)animClipName, v7, v8);
    Component_object = this->fields.goalAnimObject;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
    {
      sub_1B64324(Component_object);
    }
    UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)Component_object, this->fields.animClipName, 0LL);
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayLastMapAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Action_o *onEndAnim,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t targetQuestId; // w21
  int32_t v9; // w2
  int32_t v10; // w3
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  struct UnityEngine_GameObject_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v18; // x2
  TitleInfoEventSubmarineStatusComponent_c *v19; // x0

  if ( (byte_49FAEF8 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, onEndAnim);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_10603/*"PlayLastMapStartedAnimation"*/, v7);
    byte_49FAEF8 = 1;
  }
  if ( this->fields.isLastGoalPlayed )
    goto LABEL_14;
  targetQuestId = this->fields.targetQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsOpen(1, targetQuestId, 0LL, 0, 0LL) )
  {
LABEL_14:
    ActionExtensions__Call(onEndAnim, 0LL);
  }
  else
  {
    this->fields.onEndAnim = onEndAnim;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onEndAnim, (int32_t)onEndAnim, v9, v10);
    goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
    {
      v14 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v12);
      this->fields.goalAnimObject = v14;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.goalAnimObject, (int32_t)v14, v15, v16);
    }
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 3, v13);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v18);
    v19 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v19 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10603/*"PlayLastMapStartedAnimation"*/,
      v19->static_fields->EXIT_ANIMATION_TIME,
      0LL);
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayLastMapStartedAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v6; // x2
  TitleInfoEventSubmarineStatusComponent_c *v7; // x0

  if ( (byte_49FAEF9 & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventSubmarineStatusComponent_TypeInfo, method);
    sub_1B640C8(&StringLiteral_5919/*"EndAnimation"*/, v4);
    byte_49FAEF9 = 1;
  }
  this->fields.isLastGoalPlayed = 1;
  this->fields.isGoalAnimToLoop = 1;
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v2);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v6);
  v7 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v7 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5919/*"EndAnimation"*/,
    v7->static_fields->GOAL_ANIMATION_TIME,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventSubmarineStatusComponent__PlayProgressAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v12; // x2
  float v13; // s0
  int v14; // s1
  int v15; // s2
  UnityEngine_GameObject_o *shipPanelObj; // x0
  float v17; // s11
  int v18; // s12
  int v19; // s13
  Il2CppObject *Component_object; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_GameObject_o *v23; // x20
  TitleInfoEventSubmarineStatusComponent_c *v24; // x0
  System_Collections_Generic_List_object__o *klass; // x21
  float PROGRESS_ANIMATION_TIME; // s0
  EventDelegate_o *v27; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  TitleInfoEventSubmarineStatusComponent_c *v34; // x0
  int32_t userOldPoint; // w8
  int v36; // w9
  UnityEngine_Object_o *gateNextPointCounterLabel; // x20
  int32_t v38; // w8
  int32_t userPoint; // w9
  int32_t maxPoint; // w10
  int v41; // w9
  int v42; // w8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FAEF6 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_5958/*"EndProgressAnimation"*/, v8);
    byte_49FAEF6 = 1;
  }
  LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.shipPanelObj, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  *(UnityEngine_Vector3_o *)&v13 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(
                                     this,
                                     this->fields.userPoint,
                                     v12);
  if ( x <= v13 )
  {
    v34 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v34 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5958/*"EndProgressAnimation"*/,
      v34->static_fields->PROGRESS_ANIMATION_TIME,
      0LL);
  }
  else
  {
    shipPanelObj = this->fields.shipPanelObj;
    if ( !shipPanelObj )
      goto LABEL_39;
    v17 = v13;
    v18 = v14;
    v19 = v15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         shipPanelObj,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)Component_object, 0LL);
    }
    shipPanelObj = this->fields.shipPanelObj;
    if ( !shipPanelObj )
      goto LABEL_39;
    shipPanelObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                 shipPanelObj,
                                                 (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    if ( !shipPanelObj )
      goto LABEL_39;
    *(float *)&shipPanelObj[5].monitor = x;
    *((float *)&shipPanelObj[5].monitor + 1) = y;
    *(float *)&shipPanelObj[5].fields.m_CachedPtr = z;
    *((float *)&shipPanelObj[5].fields + 1) = v17;
    LODWORD(shipPanelObj[6].klass) = v18;
    HIDWORD(shipPanelObj[6].klass) = v19;
    v23 = shipPanelObj;
    v24 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v24 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    klass = (System_Collections_Generic_List_object__o *)v23[3].klass;
    PROGRESS_ANIMATION_TIME = v24->static_fields->PROGRESS_ANIMATION_TIME;
    LODWORD(v23[1].monitor) = 3;
    *(float *)&v23[2].monitor = PROGRESS_ANIMATION_TIME;
    v27 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v21, v22);
    EventDelegate___ctor_46509032(v27, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5958/*"EndProgressAnimation"*/, 0LL);
    if ( !klass )
      goto LABEL_39;
    items = klass->fields._items;
    v31 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++klass->fields._version;
    if ( !items )
      goto LABEL_39;
    size = klass->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        klass,
        (Il2CppObject *)v27,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &items->obj.klass + size;
      klass->fields._size = size + 1;
      v33[4] = (Il2CppClass *)v27;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v27, v28, v29);
    }
    UITweener__PlayForward((UITweener_o *)v23, 0LL);
  }
  if ( !this->fields.isCompleatedCount )
  {
    userOldPoint = this->fields.userOldPoint;
    v36 = this->fields.userPoint - userOldPoint;
    if ( v36 )
    {
      shipPanelObj = (UnityEngine_GameObject_o *)this->fields.progressPointCounterLabel;
      this->fields.isCompleatedCount = 1;
      if ( !shipPanelObj )
        goto LABEL_39;
      LODWORD(shipPanelObj[2].monitor) = userOldPoint;
      HIDWORD(shipPanelObj[2].monitor) = v36;
      UICounterLabel__PlayAnimation((UICounterLabel_o *)shipPanelObj, 0LL);
    }
  }
  gateNextPointCounterLabel = (UnityEngine_Object_o *)this->fields.gateNextPointCounterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gateNextPointCounterLabel, 0LL, 0LL) )
  {
    v38 = this->fields.userOldPoint;
    userPoint = this->fields.userPoint;
    if ( v38 != userPoint )
    {
      maxPoint = this->fields.maxPoint;
      if ( userPoint >= maxPoint )
        userPoint = this->fields.maxPoint;
      v41 = userPoint - v38;
      if ( v41 >= 1 )
      {
        v42 = maxPoint - v38;
        if ( v42 >= 1 )
        {
          shipPanelObj = (UnityEngine_GameObject_o *)this->fields.gateNextPointCounterLabel;
          if ( shipPanelObj )
          {
            LODWORD(shipPanelObj[2].monitor) = v42;
            HIDWORD(shipPanelObj[2].monitor) = -v41;
            UICounterLabel__PlayAnimation((UICounterLabel_o *)shipPanelObj, 0LL);
            return;
          }
LABEL_39:
          sub_1B64324(shipPanelObj);
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
  __int64 v5; // x1
  System_String_o *EventUIAssetDataPath; // x19

  if ( (byte_49FAF0A & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v5);
    byte_49FAF0A = 1;
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
  if ( (byte_49FAF0B & 1) == 0 )
  {
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1B640C8(
                                                         &Method_System_Collections_Generic_List_UIAtlas__Clear__,
                                                         method);
    byte_49FAF0B = 1;
  }
  atlasList = v2->fields.atlasList;
  if ( !atlasList )
    sub_1B64324(this);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  _BOOL8 v12; // x0
  Il2CppObject *current; // x21
  UISpriteData_o *v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FAF0D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_49FAF0D = 1;
  }
  memset(&v17, 0, sizeof(v17));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v17 = v16;
  do
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v12 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v17,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1B64324(IsNullOrEmpty);
    }
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1B64324(v12);
    v14 = UIAtlas__GetSprite((UIAtlas_o *)v17.fields._current, spriteName, 0LL);
  }
  while ( !v14 );
  if ( !sprite )
    sub_1B64324(v14);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void __fastcall TitleInfoEventSubmarineStatusComponent__Setup(
        TitleInfoEventSubmarineStatusComponent_o *this,
        EventDetailEntity_o *eventDetailEntity,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  struct EventDetailEntity_o **p_eventDetailEnt; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x2
  struct System_String_o *GoalAnimName; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *statusBg; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  int32_t eventId; // w21
  System_Action_o *v37; // x22
  const MethodInfo *v38; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x3
  UILabel_o *titleLabel; // x21
  UILabel_o *progressNameLabel; // x21
  const MethodInfo *v52; // x1
  int32_t v53; // w20
  struct System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseList; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  TitleInfoEventSubmarineStatusComponent_o *v57; // x0
  const MethodInfo *v58; // x2
  TitleInfoEventSubmarineStatusComponent_o *ProgressQuestReleaseEnt; // x21
  const MethodInfo *v60; // x2
  QuestReleaseEntity_o *CurrentQuestReleaseEnt; // x0
  const MethodInfo *v62; // x1
  QuestReleaseEntity_o *v63; // x20
  const MethodInfo *v64; // x5
  int32_t questId; // w8
  int32_t ValueInt; // w0
  int32_t v67; // w0
  int32_t maxPoint; // w22
  int32_t userOldPoint; // w25
  System_String_o *v70; // x21
  Il2CppObject *v71; // x0
  System_String_o *v72; // x21
  System_String_o *v73; // x0
  struct System_String_o *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  UICounterLabel_o *gateNextPointCounterLabel; // x21
  int v78; // w22
  const MethodInfo *v79; // x3
  TitleInfoEventSubmarineStatusComponent_c *v80; // x0
  UICounterLabel_o *progressPointCounterLabel; // x20
  int32_t v82; // w21
  float PROGRESS_ANIMATION_TIME; // s8
  UnityEngine_GameObject_o *shipPanelObj; // x20
  const MethodInfo *v85; // x2
  const MethodInfo *v86; // x1
  int32_t v87; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FAEF0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, eventDetailEntity);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__, v9);
    sub_1B640C8(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_19113/*"event_goal"*/, v11);
    sub_1B640C8(&StringLiteral_19137/*"event_progressicon"*/, v12);
    sub_1B640C8(&StringLiteral_19135/*"event_progressgauge_front"*/, v13);
    sub_1B640C8(&StringLiteral_5690/*"EVENT_SUBMARINE_NEXT_DESCRIPTION"*/, v14);
    sub_1B640C8(&StringLiteral_5618/*"EVENT_POINT_COMMON_FORMAT"*/, v15);
    sub_1B640C8(&StringLiteral_1539/*"94053407"*/, v16);
    sub_1B640C8(&StringLiteral_5691/*"EVENT_SUBMARINE_NEXT_POINT"*/, v17);
    sub_1B640C8(&StringLiteral_5698/*"EVENT_SUBMARINE_STATUS_TITLE"*/, v18);
    sub_1B640C8(&StringLiteral_19178/*"event_status_point"*/, v19);
    sub_1B640C8(&StringLiteral_19132/*"event_progress_point"*/, v20);
    sub_1B640C8(&StringLiteral_19125/*"event_next"*/, v21);
    sub_1B640C8(&StringLiteral_19134/*"event_progressgauge_back"*/, v22);
    sub_1B640C8(&StringLiteral_5687/*"EVENT_SUBMARINE_GAUGE_CURRENT"*/, v23);
    sub_1B640C8(&StringLiteral_19133/*"event_progressgauge"*/, v24);
    sub_1B640C8(&StringLiteral_19136/*"event_progressgaugebg_80393"*/, v25);
    byte_49FAEF0 = 1;
  }
  this->fields.eventDetailEnt = eventDetailEntity;
  p_eventDetailEnt = &this->fields.eventDetailEnt;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventDetailEnt,
    (int32_t)eventDetailEntity,
    (int32_t)mapAssetData,
    (int32_t)method);
  this->fields.mapAssetData = mapAssetData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mapAssetData, (int32_t)mapAssetData, v27, v28);
  this->fields.isCompleatedCount = 0;
  this->fields.isGoalAnimToLoop = 0;
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 0, v29);
  this->fields.animClipName = GoalAnimName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animClipName, (int32_t)GoalAnimName, v31, v32);
  if ( !this->fields.eventDetailEnt )
    goto LABEL_48;
  eventId = this->fields.eventDetailEnt->fields.eventId;
  v37 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v34, v35);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__, 0LL);
  TitleInfoEventSubmarineStatusComponent__LoadEventUIAssetData(this, eventId, v37, v38);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_33375564(gameObject, 62.0, 0.0, 0.0, 0LL);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.statusBg,
    (System_String_o *)StringLiteral_19136/*"event_progressgaugebg_80393"*/,
    v40);
  statusBg = (System_String_o *)this->fields.statusBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.areaIcon,
    (System_String_o *)StringLiteral_1539/*"94053407"*/,
    v41);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeFrame,
    (System_String_o *)StringLiteral_19133/*"event_progressgauge"*/,
    v42);
  statusBg = (System_String_o *)this->fields.gaugeFrame;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeBar,
    (System_String_o *)StringLiteral_19135/*"event_progressgauge_front"*/,
    v43);
  statusBg = (System_String_o *)this->fields.gaugeBar;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeBg,
    (System_String_o *)StringLiteral_19134/*"event_progressgauge_back"*/,
    v44);
  statusBg = (System_String_o *)this->fields.gaugeBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.shipIcon,
    (System_String_o *)StringLiteral_19137/*"event_progressicon"*/,
    v45);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.progressPointBg,
    (System_String_o *)StringLiteral_19178/*"event_status_point"*/,
    v46);
  statusBg = (System_String_o *)this->fields.progressPointBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateNextIcon,
    (System_String_o *)StringLiteral_19125/*"event_next"*/,
    v47);
  statusBg = (System_String_o *)this->fields.gateNextIcon;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateGoalIcon,
    (System_String_o *)StringLiteral_19113/*"event_goal"*/,
    v48);
  statusBg = (System_String_o *)this->fields.gateGoalIcon;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateNextPointBg,
    (System_String_o *)StringLiteral_19132/*"event_progress_point"*/,
    v49);
  statusBg = (System_String_o *)this->fields.gateNextPointBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5698/*"EVENT_SUBMARINE_STATUS_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_48;
  UILabel__set_text(titleLabel, statusBg, 0LL);
  progressNameLabel = this->fields.progressNameLabel;
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5687/*"EVENT_SUBMARINE_GAUGE_CURRENT"*/, 0LL);
  if ( !progressNameLabel )
    goto LABEL_48;
  UILabel__set_text(progressNameLabel, statusBg, 0LL);
  if ( !*p_eventDetailEnt )
    goto LABEL_48;
  v53 = (*p_eventDetailEnt)->fields.eventId;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  QuestReleaseList = TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(v53, v52);
  this->fields.baseQuestReleaseEntList = QuestReleaseList;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseQuestReleaseEntList,
    (int32_t)QuestReleaseList,
    v55,
    v56);
  ProgressQuestReleaseEnt = (TitleInfoEventSubmarineStatusComponent_o *)TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
                                                                          v57,
                                                                          this->fields.baseQuestReleaseEntList,
                                                                          v58);
  CurrentQuestReleaseEnt = TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
                             ProgressQuestReleaseEnt,
                             this->fields.baseQuestReleaseEntList,
                             v60);
  if ( CurrentQuestReleaseEnt )
    v63 = CurrentQuestReleaseEnt;
  else
    v63 = (QuestReleaseEntity_o *)ProgressQuestReleaseEnt;
  this->fields.userPoint = TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(this, v62);
  if ( v63 )
    questId = v63->fields.questId;
  else
    questId = 0;
  this->fields.currentQuestId = questId;
  if ( ProgressQuestReleaseEnt )
    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)ProgressQuestReleaseEnt, 0LL);
  else
    ValueInt = 0;
  this->fields.minPoint = ValueInt;
  if ( v63 )
    v67 = QuestReleaseEntity__getValueInt(v63, 0LL);
  else
    v67 = 0;
  this->fields.maxPoint = v67;
  TitleInfoEventSubmarineStatusComponent__SetupOldData(
    this,
    &this->fields.userOldPoint,
    &this->fields.oldQuestId,
    &this->fields.progressQuestId,
    &this->fields.isLastGoalPlayed,
    v64);
  maxPoint = this->fields.maxPoint;
  userOldPoint = this->fields.userOldPoint;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_5690/*"EVENT_SUBMARINE_NEXT_DESCRIPTION"*/, 0LL);
  v87 = this->fields.maxPoint;
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87);
  v72 = System_String__Format(v70, v71, 0LL);
  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_5691/*"EVENT_SUBMARINE_NEXT_POINT"*/, 0LL);
  v74 = System_String__Concat_61375396(v72, v73, 0LL);
  this->fields.nextPointTextFormat = v74;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.nextPointTextFormat, (int32_t)v74, v75, v76);
  statusBg = (System_String_o *)TitleInfoEventSubmarineStatusComponent_TypeInfo;
  gateNextPointCounterLabel = this->fields.gateNextPointCounterLabel;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  if ( !gateNextPointCounterLabel )
    goto LABEL_48;
  v78 = (maxPoint - userOldPoint) & ~((maxPoint - userOldPoint) >> 31);
  UICounterLabel__Setup(
    gateNextPointCounterLabel,
    v78,
    TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields->PROGRESS_ANIMATION_TIME,
    this->fields.nextPointTextFormat,
    0,
    0LL);
  statusBg = (System_String_o *)this->fields.gateNextPointCounterLabel;
  if ( !statusBg )
    goto LABEL_48;
  UICounterLabel__SetCountLabel((UICounterLabel_o *)statusBg, v78, 0LL);
  if ( TitleInfoEventSubmarineStatusComponent__IsAllClear(this, v63, this->fields.userOldPoint, v79) )
  {
    statusBg = (System_String_o *)this->fields.gateNextPointCounterLabel;
    if ( !statusBg )
      goto LABEL_48;
    statusBg = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusBg, 0LL);
    if ( !statusBg )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusBg, 0, 0LL);
  }
  v80 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  progressPointCounterLabel = this->fields.progressPointCounterLabel;
  v82 = this->fields.userOldPoint;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v80 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  PROGRESS_ANIMATION_TIME = v80->static_fields->PROGRESS_ANIMATION_TIME;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5618/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  if ( !progressPointCounterLabel
    || (UICounterLabel__Setup(progressPointCounterLabel, v82, PROGRESS_ANIMATION_TIME, statusBg, 0, 0LL),
        (statusBg = (System_String_o *)this->fields.progressPointCounterLabel) == 0LL) )
  {
LABEL_48:
    sub_1B64324(statusBg);
  }
  UICounterLabel__SetCountLabel((UICounterLabel_o *)statusBg, this->fields.userOldPoint, 0LL);
  shipPanelObj = this->fields.shipPanelObj;
  v88 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, this->fields.userOldPoint, v85);
  GameObjectExtensions__SetLocalPosition(shipPanelObj, v88, 0LL);
  TitleInfoEventSubmarineStatusComponent__SetupAnimation(this, v86);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__SetupAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gateNextIcon; // x0
  void (__fastcall *castClass)(float); // x8
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  struct UnityEngine_GameObject_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v20; // x2
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x20
  System_Predicate_object__o *v22; // x21
  Il2CppObject *v23; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v24; // x21
  QuestReleaseEntity_o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  System_Predicate_object__o *v28; // x22
  Il2CppObject *v29; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v30; // x22
  QuestReleaseEntity_o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  System_Predicate_object__o *v34; // x23
  Il2CppObject *v35; // x22
  int32_t ValueInt; // w0
  int32_t oldQuestId; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v39; // x20
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x2
  struct UnityEngine_GameObject_o *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x1
  const MethodInfo *v46; // x2
  long double v47; // q0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FAEF1 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&System_Predicate_QuestReleaseEntity__TypeInfo, v5);
    sub_1B640C8(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__, v6);
    sub_1B640C8(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__, v7);
    sub_1B640C8(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__, v8);
    byte_49FAEF1 = 1;
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
      v16 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v14);
      this->fields.goalAnimObject = v16;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.goalAnimObject, (int32_t)v16, v17, v18);
    }
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v15);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v20);
  }
  else
  {
    castClass(1.0);
  }
  baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
  v22 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_QuestReleaseEntity__TypeInfo, v11, v12);
  System_Predicate_object____ctor(
    v22,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__,
    0LL);
  if ( !baseQuestReleaseEntList )
    goto LABEL_43;
  v23 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)baseQuestReleaseEntList,
          (System_Predicate_T__o *)v22,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v24 = this->fields.baseQuestReleaseEntList;
  v25 = (QuestReleaseEntity_o *)v23;
  v28 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_QuestReleaseEntity__TypeInfo, v26, v27);
  System_Predicate_object____ctor(
    v28,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__,
    0LL);
  if ( !v24 )
    goto LABEL_43;
  v29 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v24,
          (System_Predicate_T__o *)v28,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v30 = this->fields.baseQuestReleaseEntList;
  v31 = (QuestReleaseEntity_o *)v29;
  v34 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_QuestReleaseEntity__TypeInfo, v32, v33);
  System_Predicate_object____ctor(
    v34,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__,
    0LL);
  if ( !v30 )
    goto LABEL_43;
  v35 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v30,
          (System_Predicate_T__o *)v34,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v25 )
    LODWORD(v25) = QuestReleaseEntity__getValueInt(v25, 0LL);
  if ( v31 )
    LODWORD(v31) = QuestReleaseEntity__getValueInt(v31, 0LL);
  if ( v35 )
    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v35, 0LL);
  else
    ValueInt = 0;
  if ( (int)v31 >= ValueInt )
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
                                                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
            LODWORD(v47) = 0;
LABEL_42:
            ((void (__fastcall *)(long double))klass[1]._1.castClass)(v47);
            return;
          }
        }
      }
LABEL_43:
      sub_1B64324(gateNextIcon);
    }
LABEL_39:
    gateNextIcon = this->fields.shipPanelObj;
    if ( gateNextIcon )
    {
      gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gateNextIcon,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
      if ( gateNextIcon )
      {
        klass = gateNextIcon->klass;
        LODWORD(v47) = 1.0;
        goto LABEL_42;
      }
    }
    goto LABEL_43;
  }
  if ( (int)v25 >= ValueInt || oldQuestId < 1 )
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
                                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
  v39 = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v39, 0LL, 0LL) )
  {
    v42 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v40);
    this->fields.goalAnimObject = v42;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.goalAnimObject, (int32_t)v42, v43, v44);
  }
  v45 = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v41);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, v45, v46);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__SetupOldData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t *oldPoint,
        int32_t *oldQuestId,
        int32_t *progressQuestId,
        bool *isLastGoalPlayed,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 gateNextIcon; // x0
  __int64 v15; // x1
  TerminalPramsManager_c *v16; // x8
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x9
  struct EventDetailEntity_o *eventDetailEnt; // x10
  TerminalPramsManager_c *v19; // x0
  System_String_array *ValueByArray; // x0
  __int64 v21; // x1
  __int64 v22; // x8
  System_String_array *v23; // x23
  System_String_o *v24; // x20
  TerminalPramsManager_c *v25; // x0
  int32_t userPoint; // w8
  int32_t targetQuestId; // w20

  if ( (byte_49FAEFC & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, oldPoint);
    sub_1B640C8(&CondType_TypeInfo, v11);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v12);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v13);
    byte_49FAEFC = 1;
  }
  *oldPoint = 0;
  *oldQuestId = 0;
  *progressQuestId = 0;
  *isLastGoalPlayed = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  gateNextIcon = TerminalPramsManager__CheckEventSubmarinePointSaveData(0LL);
  v16 = TerminalPramsManager_TypeInfo;
  if ( (gateNextIcon & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9178 )
    {
      gateNextIcon = sub_1B640C8(&TerminalPramsManager_TypeInfo, v15);
      byte_49F9178 = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    if ( v16->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
    {
      if ( !v16->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v16);
      if ( !byte_49F9178 )
      {
        gateNextIcon = sub_1B640C8(&TerminalPramsManager_TypeInfo, v15);
        byte_49F9178 = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventSubmarineSaveData_k__BackingField = v16->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !BeforeEventSubmarineSaveData_k__BackingField )
        goto LABEL_53;
      eventDetailEnt = this->fields.eventDetailEnt;
      if ( !eventDetailEnt )
        goto LABEL_53;
      if ( BeforeEventSubmarineSaveData_k__BackingField->fields.eventId == eventDetailEnt->fields.eventId )
      {
        if ( !v16->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v16);
        if ( !byte_49F9178 )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v15);
          byte_49F9178 = 1;
        }
        v19 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
        }
        gateNextIcon = (__int64)v19->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
        if ( gateNextIcon )
        {
          ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)gateNextIcon, 0x2Cu, 0LL);
          if ( ValueByArray )
          {
            v22 = *(_QWORD *)&ValueByArray->max_length;
            v23 = ValueByArray;
            if ( v22 )
            {
              if ( !(_DWORD)v22 )
                sub_1B6432C(ValueByArray, v21);
              *oldPoint = System_Int32__Parse(ValueByArray->m_Items[0], 0LL);
              if ( (int)v23->max_length >= 2 )
              {
                *oldQuestId = System_Int32__Parse(v23->m_Items[1], 0LL);
                if ( (int)v23->max_length >= 3 )
                {
                  *progressQuestId = System_Int32__Parse(v23->m_Items[2], 0LL);
                  if ( (int)v23->max_length >= 4 )
                  {
                    v24 = v23->m_Items[3];
                    if ( !bool_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                    *isLastGoalPlayed = System_Boolean__Parse(v24, 0LL);
                  }
                }
              }
            }
          }
          return;
        }
LABEL_53:
        sub_1B64324(gateNextIcon);
      }
    }
  }
  if ( !v16->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v16);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v15);
    byte_49F9045 = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  if ( v25->static_fields->_QuestId_k__BackingField != this->fields.uiReleaseQuestId )
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
                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    if ( !gateNextIcon )
      goto LABEL_53;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gateNextIcon + 440LL))(
      gateNextIcon,
      *(_QWORD *)(*(_QWORD *)gateNextIcon + 448LL),
      1.0);
    targetQuestId = this->fields.targetQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(1, targetQuestId, 0LL, 0, 0LL) )
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
    sub_1B64324(this);
  return n->fields.questId == this->fields.oldQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64324(this);
  return n->fields.questId == this->fields.progressQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64324(this);
  return n->fields.questId == this->fields.currentQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_0(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64324(this);
  return n->fields.questId == this->fields.oldQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64324(this);
  return n->fields.questId == this->fields.progressQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(gaugeBar);
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
    sub_1B64324(this);
  return (float)gaugeBar->fields.mWidth;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FAF11 & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo, v1);
    byte_49FAF11 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(TitleInfoEventSubmarineStatusComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventSubmarineStatusComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return n->fields.questId == _4__this->fields.currentQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___EndAnimation_b__1(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64324(this);
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
    sub_1B64324(0LL);
  _4__this->fields.eventAssetData = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.eventAssetData, (int32_t)data, (int32_t)method, v3);
  ActionExtensions__Call(this->fields.callback, 0LL);
}