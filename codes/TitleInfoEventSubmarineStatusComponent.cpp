void __fastcall TitleInfoEventSubmarineStatusComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventSubmarineStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_4BDAFA6 & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    byte_4BDAFA6 = 1;
  }
  static_fields = TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->ENTRY_ANIMATION_TIME = xmmword_BFF5D0;
  static_fields->MAP_CHANGE_WAIT_TIME = 0.3;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___ctor(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDAFA5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    byte_4BDAFA5 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.atlasList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
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
    sub_1C22094(v5, v6);
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
  Il2CppObject *Object_object__49880776; // x20
  const MethodInfo *v5; // x2
  UnityEngine_GameObject_o *v6; // x21
  struct System_String_o *GoalAnimName; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v17; // x0

  if ( (byte_4BDAF94 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDAF94 = 1;
  }
  mapAssetData = this->fields.mapAssetData;
  if ( !mapAssetData )
    return 0LL;
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              mapAssetData,
                              this->fields.goalIconAnimPrefabName,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49880776, 0LL, 0LL) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v5);
    this->fields.animClipName = GoalAnimName;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.animClipName,
      (int64_t)GoalAnimName,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__Instantiate_object_(
            Object_object__49880776,
            (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v14 )
      sub_1C22094(0LL, v15);
    v6 = (UnityEngine_GameObject_o *)v14;
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v14, 0LL);
    GameObjectExtensions__SafeSetParent_34803616(gameObject, this->fields.statusObj, 0LL);
    v17 = UnityEngine_GameObject__get_gameObject(v6, 0LL);
    GameObjectExtensions__ResetLocalPosition(v17, 0LL);
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
  if ( (byte_4BDAF98 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    byte_4BDAF98 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v14, 0LL);
  v6 = System_Int32__ToString((int32_t)&v13, 0LL);
  v7 = System_Int32__ToString((int32_t)&v12, 0LL);
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v9 = System_Boolean__ToString((bool)&v11, 0LL);
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  return TitleInfoEventSubmarineStatusComponent__CreateSaveData_38323224(v5, v6, v7, v9, v8);
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__CreateSaveData_38323224(
        System_String_o *userPoint,
        System_String_o *currentQuestId,
        System_String_o *progressQuestId,
        System_String_o *isLastGoalPlayed,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4BDAF99 & 1) == 0 )
  {
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&StringLiteral_866/*","*/);
    byte_4BDAF99 = 1;
  }
  v9 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v9, 0LL);
  if ( !v9 )
    sub_1C22094(v10, v11);
  System_Text_StringBuilder__Append_62276628(v9, userPoint, 0LL);
  System_Text_StringBuilder__Append_62276628(v9, (System_String_o *)StringLiteral_866/*","*/, 0LL);
  System_Text_StringBuilder__Append_62276628(v9, currentQuestId, 0LL);
  System_Text_StringBuilder__Append_62276628(v9, (System_String_o *)StringLiteral_866/*","*/, 0LL);
  System_Text_StringBuilder__Append_62276628(v9, progressQuestId, 0LL);
  System_Text_StringBuilder__Append_62276628(v9, (System_String_o *)StringLiteral_866/*","*/, 0LL);
  System_Text_StringBuilder__Append_62276628(v9, isLastGoalPlayed, 0LL);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1
  UnityEngine_GameObject_o *Component_object; // x0
  PartyOrganizationUtility_o *p_goalAnimObject; // x19
  UnityEngine_Object_o *klass; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4BDAF96 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDAF96 = 1;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 0, v4);
    this->fields.animClipName = GoalAnimName;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.animClipName,
      (int64_t)GoalAnimName,
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
                                                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
    {
      sub_1C22094(Component_object, v12);
    }
    p_goalAnimObject = (PartyOrganizationUtility_o *)&this->fields.goalAnimObject;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Component_object, 0LL);
    klass = (UnityEngine_Object_o *)p_goalAnimObject->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(klass, 0LL);
    p_goalAnimObject->klass = 0LL;
    sub_1C21DDC(p_goalAnimObject, 0LL, v16, v17, v18, v19, v20, v21);
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  MissionNotifyManager_o *Instance; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  const MethodInfo *v12; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v14; // x2
  int32_t userPoint; // w8
  int32_t currentQuestId; // w9
  TerminalPramsManager_c *v17; // x0
  EventSaveData_o *v18; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  TerminalPramsManager_c *v25; // x0
  PartyOrganizationUtility_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
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
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7

  if ( (byte_4BDAF90 & 1) == 0 )
  {
    sub_1C21E38(&EventSaveData_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_1C21E38(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C21E38(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__);
    sub_1C21E38(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__);
    sub_1C21E38(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo);
    byte_4BDAF90 = 1;
  }
  v3 = sub_1C22084(TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_59;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.isGoalAnimToLoop )
  {
    this->fields.isGoalAnimToLoop = 0;
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v12);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v14);
  }
  this->fields.isAfterTakingOver = 0;
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  if ( !byte_4BD918D )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD918D = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  if ( !v17->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
  {
    v18 = (EventSaveData_o *)sub_1C22084(EventSaveData_TypeInfo);
    EventSaveData___ctor(v18, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD918E )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD918E = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v25 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v25->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (PartyOrganizationUtility_c *)v18;
    sub_1C21DDC(p_BeforeEventSubmarineSaveData_k__BackingField, (int64_t)v18, v19, v20, v21, v22, v23, v24);
    v17 = TerminalPramsManager_TypeInfo;
  }
  if ( !v17->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v17);
  if ( !byte_4BD918D )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD918D = 1;
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
    sub_1C22094(Instance, v5);
  ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)Instance, 0x2Cu, 0LL);
  v29 = ValueByArray;
  if ( !ValueByArray )
  {
    v30 = 0;
    goto LABEL_35;
  }
  if ( (int)ValueByArray->max_length < 2 )
  {
    v30 = 0;
    goto LABEL_34;
  }
  v30 = System_Int32__Parse(ValueByArray->m_Items[1], 0LL);
  if ( (int)v29->max_length < 3 )
  {
LABEL_34:
    LODWORD(v29) = 0;
    goto LABEL_35;
  }
  LODWORD(v29) = System_Int32__Parse(v29->m_Items[2], 0LL);
LABEL_35:
  baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
  v32 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v32,
    (Il2CppObject *)v3,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__,
    0LL);
  if ( !baseQuestReleaseEntList )
    goto LABEL_59;
  v33 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)baseQuestReleaseEntList,
          (System_Predicate_T__o *)v32,
          (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v34 = this->fields.currentQuestId;
  if ( v33 )
    v30 = this->fields.currentQuestId;
  if ( (int)v29 > v34 )
    v34 = (int)v29;
  *(_DWORD *)(v3 + 24) = v34;
  v35 = this->fields.baseQuestReleaseEntList;
  v36 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v36,
    (Il2CppObject *)v3,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__,
    0LL);
  if ( !v35 )
    goto LABEL_59;
  if ( System_Collections_Generic_List_object___Find(
         (System_Collections_Generic_List_object__o *)v35,
         (System_Predicate_T__o *)v36,
         (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
  {
    LODWORD(v29) = *(_DWORD *)(v3 + 24);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD918D )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD918D = 1;
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
  if ( !byte_4BD918D )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    byte_4BD918D = 1;
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
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v42->fields.m_CancellationTokenSource,
    (int64_t)Instance,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(0LL);
  ActionExtensions__Call(this->fields.onEndAnim, 0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndExitAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventSubmarineStatusComponent_c *v3; // x0

  if ( (byte_4BDAF8A & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_10855/*"PlayEntryAnimation"*/);
    byte_4BDAF8A = 1;
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
    (System_String_o *)StringLiteral_10855/*"PlayEntryAnimation"*/,
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  TitleInfoEventSubmarineStatusComponent_o *ProgressQuestReleaseEnt; // x21
  const MethodInfo *v20; // x2
  QuestReleaseEntity_o *CurrentQuestReleaseEnt; // x0
  const MethodInfo *v22; // x3
  QuestReleaseEntity_o *v23; // x1
  const MethodInfo *v24; // x1
  struct UnityEngine_GameObject_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UnityEngine_Object_o *v32; // x20
  const MethodInfo *v33; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v35; // x2
  TitleInfoEventSubmarineStatusComponent_c *v36; // x0

  if ( (byte_4BDAF8D & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_6103/*"EndAnimation"*/);
    byte_4BDAF8D = 1;
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
    UnityEngine_Object__Destroy_70869612(v12, 0LL);
    *p_goalAnimObject = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.goalAnimObject, 0LL, v13, v14, v15, v16, v17, v18);
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
                                        0LL)) == 0LL )
    {
LABEL_31:
      sub_1C22094(gateNextPointCounterLabel, v9);
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
  v25 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v24);
  this->fields.goalAnimObject = v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.goalAnimObject, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
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
    (System_String_o *)StringLiteral_6103/*"EndAnimation"*/,
    v36->static_fields->GOAL_ANIMATION_TIME,
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

  if ( (byte_4BDAF9C & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_4BDAF9C = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !baseList )
    sub_1C22094(this, baseList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)baseList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current )
      sub_1C22094(v4, v5);
    klass = (int32_t)v9.fields._current[1].klass;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_38834244(klass, -1, 0, 0LL) )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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

  if ( (byte_4BDAF9E & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_6402/*"EventUI/Prefabs/{0}"*/);
    byte_4BDAF9E = 1;
  }
  v8 = eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_6402/*"EventUI/Prefabs/{0}"*/, v6, 0LL);
}


UnityEngine_GameObject_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4BDAFA4 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    byte_4BDAFA4 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.eventAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__49880776(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  return result;
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t animType,
        const MethodInfo *method)
{
  System_String_o *goalIconAnimPrefabName; // x0
  __int64 *v6; // x8

  if ( (byte_4BDAF93 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_16832/*"_loop"*/);
    sub_1C21E38(&StringLiteral_16853/*"_start"*/);
    sub_1C21E38(&StringLiteral_16830/*"_last"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_16817/*"_end"*/);
    byte_4BDAF93 = 1;
  }
  goalIconAnimPrefabName = this->fields.goalIconAnimPrefabName;
  if ( this->fields.isLastGoalPlayed )
    goalIconAnimPrefabName = System_String__Concat_63115476(
                               goalIconAnimPrefabName,
                               (System_String_o *)StringLiteral_16830/*"_last"*/,
                               0LL);
  switch ( animType )
  {
    case 3:
      v6 = &StringLiteral_16817/*"_end"*/;
      return System_String__Concat_63115476(goalIconAnimPrefabName, (System_String_o *)*v6, 0LL);
    case 2:
      v6 = &StringLiteral_16832/*"_loop"*/;
      return System_String__Concat_63115476(goalIconAnimPrefabName, (System_String_o *)*v6, 0LL);
    case 1:
      v6 = &StringLiteral_16853/*"_start"*/;
      return System_String__Concat_63115476(goalIconAnimPrefabName, (System_String_o *)*v6, 0LL);
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

  if ( (byte_4BDAF9B & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_4BDAF9B = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !baseList )
    sub_1C22094(this, baseList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)baseList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  current = 0LL;
  do
  {
    v5 = (QuestReleaseEntity_o *)current;
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v6 )
      break;
    current = v10.fields._current;
    if ( !v10.fields._current )
      sub_1C22094(v6, v7);
    klass = (int32_t)v10.fields._current[1].klass;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  }
  while ( CondType__IsQuestClear_38834244(klass, -1, 0, 0LL) );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Comparison_T__o *v22; // x20
  Il2CppObject *v23; // x21
  struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BDAF9A & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_QuestReleaseEntity__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__);
    sub_1C21E38(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
    byte_4BDAF9A = 1;
  }
  memset(&v33, 0, sizeof(v33));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_26;
  ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                              (QuestReleaseMaster_o *)Instance,
                              eventId,
                              85,
                              0LL);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !ListByTargetAndCondType )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)ListByTargetAndCondType,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v33,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v7 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_1C22094(v7, v8);
    QuestType = QuestMaster__GetQuestType((int32_t)v33.fields._current[1].klass, 0LL);
    if ( (_DWORD)QuestType == 2 )
    {
      if ( !v6 )
        sub_1C22094(QuestType, v11);
      items = v6->fields._items;
      v19 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C22094(QuestType, v11);
      size = v6->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          current,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v21[4] = (Il2CppClass *)current;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 4), (int64_t)current, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
    v22 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      v22,
      v23,
      Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__,
      0LL);
    static_fields = TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields;
    static_fields->__9__80_0 = (struct System_Comparison_QuestReleaseEntity__o *)v22;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__80_0, (int64_t)v22, v25, v26, v27, v28, v29, v30);
  }
  if ( !v6 )
LABEL_26:
    sub_1C22094(Instance, v4);
  System_Collections_Generic_List_object___Sort_56953720(
    v6,
    v22,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
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

  if ( (byte_4BDAF91 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDAF91 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
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
    sub_1C22094(Instance, v4);
  return UserEventPointMaster__GetEventPointTotal(
           (UserEventPointMaster_o *)MasterData_object,
           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
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
  _BOOL8 IsQuestClear_38834244; // x0
  __int64 v13; // x1

  if ( (byte_4BDAF9D & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___);
    byte_4BDAF9D = 1;
  }
  baseQuestReleaseEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseQuestReleaseEntList;
  if ( baseQuestReleaseEntList )
  {
    baseQuestReleaseEntList = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__LastOrDefault_object_(
                                                                                     baseQuestReleaseEntList,
                                                                                     (const MethodInfo_2FD61BC *)Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___);
    if ( baseQuestReleaseEntList )
    {
      v8 = baseQuestReleaseEntList;
      ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)baseQuestReleaseEntList, 0LL);
      klass = (int32_t)v8[1].klass;
      v11 = ValueInt;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_38834244 = CondType__IsQuestClear_38834244(klass, -1, 0, 0LL);
      if ( !currentQuestReleaseEnt )
        sub_1C22094(IsQuestClear_38834244, v13);
      LOBYTE(baseQuestReleaseEntList) = IsQuestClear_38834244 & (v11 <= nowPoint) & (QuestReleaseEntity__getValueInt(
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

  if ( (byte_4BDAF97 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDAF97 = 1;
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
                                                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
  {
    sub_1C22094(Component_object, v4);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  const MethodInfo *v22; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v24; // x20

  if ( (byte_4BDAF9F & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C21E38(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__);
    sub_1C21E38(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo);
    byte_4BDAF9F = 1;
  }
  v7 = sub_1C22084(TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)callback, v16, v17, v18, v19, v20, v21);
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  EventUIAssetDataPath = TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(eventId, v22);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v7,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v24, 1, 0LL) )
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v30; // x8
  int32_t v31; // [xsp+8h] [xbp-58h] BYREF
  int v32; // [xsp+Ch] [xbp-54h] BYREF

  v6 = this;
  if ( (byte_4BDAFA2 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_25389/*"{0:D2}"*/);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1C21E38(&StringLiteral_5493/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_4BDAFA2 = 1;
  }
  if ( v6->fields.eventAssetData )
  {
    atlasList = v6->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1C22094(this, *(_QWORD *)&eventId);
    size = (unsigned int)atlasList->fields._size;
    v9 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v9;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
    for ( i = 1; ; ++i )
    {
      v32 = i;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, size, v3, v4);
      v12 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25389/*"{0:D2}"*/, v11, 0LL);
      v31 = eventId;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v13, v14, v15);
      v17 = System_String__Format_63129848((System_String_o *)StringLiteral_5493/*"DownloadEventUIAtlas{0}{1}"*/, v16, v12, 0LL);
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
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (TitleInfoEventSubmarineStatusComponent_o *)v6->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      v27 = *(_QWORD *)&this->fields.m_CachedPtr;
      v28 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v27 )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v27 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = v27 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v30 + 32) = Component_object;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 32), (int64_t)Component_object, v21, v22, v23, v24, v25, v26);
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
    sub_1C22094(this, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  Il2CppObject *v33; // x23
  const MethodInfo *v34; // x1
  int32_t v35; // w8

  if ( (byte_4BDAF88 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_1C21E38(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__);
    sub_1C21E38(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__);
    sub_1C21E38(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__);
    byte_4BDAF88 = 1;
  }
  if ( this->fields.isAfterTakingOver )
  {
    this->fields.onEndAnim = onEndAnim;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.onEndAnim,
      (int64_t)onEndAnim,
      (int64_t)method,
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
  v16 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__,
    0LL);
  if ( !baseQuestReleaseEntList )
    goto LABEL_28;
  v19 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)baseQuestReleaseEntList,
          (System_Predicate_T__o *)v16,
          (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v20 = this->fields.baseQuestReleaseEntList;
  v21 = (QuestReleaseEntity_o *)v19;
  v22 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v22,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__,
    0LL);
  if ( !v20 )
    goto LABEL_28;
  v23 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v20,
          (System_Predicate_T__o *)v22,
          (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v24 = this->fields.baseQuestReleaseEntList;
  v25 = (QuestReleaseEntity_o *)v23;
  v26 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v26,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__,
    0LL);
  if ( !v24 )
    goto LABEL_28;
  v33 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v24,
          (System_Predicate_T__o *)v26,
          (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v21 )
    LODWORD(v21) = QuestReleaseEntity__getValueInt(v21, 0LL);
  if ( v25 )
    LODWORD(v25) = QuestReleaseEntity__getValueInt(v25, 0LL);
  if ( v33 )
    LODWORD(v33) = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v33, 0LL);
  if ( (int)v21 > (int)v33 )
  {
    ActionExtensions__Call(onEndAnim, 0LL);
    return;
  }
  this->fields.onEndAnim = onEndAnim;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.onEndAnim, (int64_t)onEndAnim, v27, v28, v29, v30, v31, v32);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1C22094(Instance, v18);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  Il2CppObject *v23; // x20
  UnityEngine_GameObject_o *v24; // x19
  TitleInfoEventSubmarineStatusComponent_c *v25; // x0
  float v26; // s0
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDAF8B & 1) == 0 )
  {
    sub_1C21E38(&EventDelegate_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_6115/*"EndEntryAnimation"*/);
    byte_4BDAF8B = 1;
  }
  shipPanelObj = this->fields.shipPanelObj;
  v27 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, this->fields.minPoint, v2);
  GameObjectExtensions__SetLocalPosition(shipPanelObj, v27, 0LL);
  gateNextIcon = this->fields.shipPanelObj;
  if ( !gateNextIcon )
    goto LABEL_33;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gateNextIcon,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)Component_object, 0LL);
  }
  gateNextIcon = this->fields.shipPanelObj;
  if ( !gateNextIcon )
    goto LABEL_33;
  gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                               gateNextIcon,
                                               (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
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
  v12 = (EventDelegate_o *)sub_1C22084(EventDelegate_TypeInfo);
  EventDelegate___ctor_47961868(v12, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6115/*"EndEntryAnimation"*/, 0LL);
  if ( !klass )
    goto LABEL_33;
  items = klass->fields._items;
  v20 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++klass->fields._version;
  if ( !items )
    goto LABEL_33;
  size = klass->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v12,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v12;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 4), (int64_t)v12, v13, v14, v15, v16, v17, v18);
  }
  UITweener__PlayForward((UITweener_o *)v8, 0LL);
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon )
    goto LABEL_33;
  gateNextIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateNextIcon, 0LL);
  if ( !gateNextIcon )
    goto LABEL_33;
  v23 = UnityEngine_GameObject__GetComponent_object_(
          gateNextIcon,
          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)v23, 0LL);
  }
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon
    || (gateNextIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateNextIcon, 0LL)) == 0LL
    || (gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                     gateNextIcon,
                                                     (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___)) == 0LL )
  {
LABEL_33:
    sub_1C22094(gateNextIcon, v5);
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
  UITweener__PlayForward((UITweener_o *)v24, 0LL);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  struct UnityEngine_GameObject_o *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_String_o *GoalAnimName; // x1
  const MethodInfo *v31; // x2

  if ( (byte_4BDAF89 & 1) == 0 )
  {
    sub_1C21E38(&EventDelegate_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_6126/*"EndExitAnimation"*/);
    byte_4BDAF89 = 1;
  }
  shipPanelObj = this->fields.shipPanelObj;
  if ( !shipPanelObj )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       shipPanelObj,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)Component_object, 0LL);
  }
  shipPanelObj = this->fields.shipPanelObj;
  if ( !shipPanelObj )
    goto LABEL_24;
  shipPanelObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                               shipPanelObj,
                                               (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
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
  v9 = (EventDelegate_o *)sub_1C22084(EventDelegate_TypeInfo);
  EventDelegate___ctor_47961868(v9, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6126/*"EndExitAnimation"*/, 0LL);
  if ( !klass
    || (items = klass->fields._items,
        v17 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++klass->fields._version,
        !items) )
  {
LABEL_24:
    sub_1C22094(shipPanelObj, method);
  }
  size = klass->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v9,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v9;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 4), (int64_t)v9, v10, v11, v12, v13, v14, v15);
  }
  UITweener__PlayForward((UITweener_o *)v5, 0LL);
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
  {
    v23 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v21);
    this->fields.goalAnimObject = v23;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.goalAnimObject, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  }
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 3, v22);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v31);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *animClipName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *goalAnimObject; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4BDAF95 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDAF95 = 1;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
  {
    this->fields.animClipName = animClipName;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.animClipName,
      (int64_t)animClipName,
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
                                                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
    {
      sub_1C22094(Component_object, v12);
    }
    UnityEngine_Animation__Play_70614020((UnityEngine_Animation_o *)Component_object, this->fields.animClipName, 0LL);
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayLastMapAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Action_o *onEndAnim,
        const MethodInfo *method)
{
  int32_t targetQuestId; // w21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  struct UnityEngine_GameObject_o *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v23; // x2
  TitleInfoEventSubmarineStatusComponent_c *v24; // x0

  if ( (byte_4BDAF8E & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_10862/*"PlayLastMapStartedAnimation"*/);
    byte_4BDAF8E = 1;
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
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.onEndAnim, (int64_t)onEndAnim, v6, v7, v8, v9, v10, v11);
    goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
    {
      v15 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v13);
      this->fields.goalAnimObject = v15;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.goalAnimObject,
        (int64_t)v15,
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
      (System_String_o *)StringLiteral_10862/*"PlayLastMapStartedAnimation"*/,
      v24->static_fields->EXIT_ANIMATION_TIME,
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

  if ( (byte_4BDAF8F & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_6103/*"EndAnimation"*/);
    byte_4BDAF8F = 1;
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
    (System_String_o *)StringLiteral_6103/*"EndAnimation"*/,
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  TitleInfoEventSubmarineStatusComponent_c *v31; // x0
  int32_t userOldPoint; // w8
  int v33; // w9
  UnityEngine_Object_o *gateNextPointCounterLabel; // x20
  int32_t v35; // w8
  int32_t userPoint; // w9
  int32_t maxPoint; // w10
  int v38; // w9
  int v39; // w8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDAF8C & 1) == 0 )
  {
    sub_1C21E38(&EventDelegate_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_6143/*"EndProgressAnimation"*/);
    byte_4BDAF8C = 1;
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
    v31 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v31 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6143/*"EndProgressAnimation"*/,
      v31->static_fields->PROGRESS_ANIMATION_TIME,
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
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)Component_object, 0LL);
    }
    shipPanelObj = this->fields.shipPanelObj;
    if ( !shipPanelObj )
      goto LABEL_39;
    shipPanelObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                 shipPanelObj,
                                                 (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
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
    v20 = (EventDelegate_o *)sub_1C22084(EventDelegate_TypeInfo);
    EventDelegate___ctor_47961868(v20, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6143/*"EndProgressAnimation"*/, 0LL);
    if ( !klass )
      goto LABEL_39;
    items = klass->fields._items;
    v28 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++klass->fields._version;
    if ( !items )
      goto LABEL_39;
    size = klass->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        klass,
        (Il2CppObject *)v20,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + size;
      klass->fields._size = size + 1;
      v30[4] = (Il2CppClass *)v20;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v20, v21, v22, v23, v24, v25, v26);
    }
    UITweener__PlayForward((UITweener_o *)v16, 0LL);
  }
  if ( !this->fields.isCompleatedCount )
  {
    userOldPoint = this->fields.userOldPoint;
    v33 = this->fields.userPoint - userOldPoint;
    if ( v33 )
    {
      shipPanelObj = (UnityEngine_GameObject_o *)this->fields.progressPointCounterLabel;
      this->fields.isCompleatedCount = 1;
      if ( !shipPanelObj )
        goto LABEL_39;
      LODWORD(shipPanelObj[2].monitor) = userOldPoint;
      HIDWORD(shipPanelObj[2].monitor) = v33;
      UICounterLabel__PlayAnimation((UICounterLabel_o *)shipPanelObj, 0LL);
    }
  }
  gateNextPointCounterLabel = (UnityEngine_Object_o *)this->fields.gateNextPointCounterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gateNextPointCounterLabel, 0LL, 0LL) )
  {
    v35 = this->fields.userOldPoint;
    userPoint = this->fields.userPoint;
    if ( v35 != userPoint )
    {
      maxPoint = this->fields.maxPoint;
      if ( userPoint >= maxPoint )
        userPoint = this->fields.maxPoint;
      v38 = userPoint - v35;
      if ( v38 >= 1 )
      {
        v39 = maxPoint - v35;
        if ( v39 >= 1 )
        {
          shipPanelObj = (UnityEngine_GameObject_o *)this->fields.gateNextPointCounterLabel;
          if ( shipPanelObj )
          {
            LODWORD(shipPanelObj[2].monitor) = v39;
            HIDWORD(shipPanelObj[2].monitor) = -v38;
            UICounterLabel__PlayAnimation((UICounterLabel_o *)shipPanelObj, 0LL);
            return;
          }
LABEL_39:
          sub_1C22094(shipPanelObj, v7);
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

  if ( (byte_4BDAFA0 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    byte_4BDAFA0 = 1;
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
  if ( (byte_4BDAFA1 & 1) == 0 )
  {
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1C21E38(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    byte_4BDAFA1 = 1;
  }
  atlasList = v2->fields.atlasList;
  if ( !atlasList )
    sub_1C22094(this, method);
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

  if ( (byte_4BDAFA3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_4BDAFA3 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v16 = v15;
  do
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v9 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1C22094(IsNullOrEmpty, v8);
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1C22094(v9, v10);
    v12 = UIAtlas__GetSprite((UIAtlas_o *)v16.fields._current, spriteName, 0LL);
  }
  while ( !v12 );
  if ( !sprite )
    sub_1C22094(v12, v13);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void __fastcall TitleInfoEventSubmarineStatusComponent__Setup(
        TitleInfoEventSubmarineStatusComponent_o *this,
        EventDetailEntity_o *eventDetailEntity,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EventDetailEntity_o **p_eventDetailEnt; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x2
  struct System_String_o *GoalAnimName; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
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
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
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
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  Il2CppObject *v69; // x0
  System_String_o *v70; // x21
  System_String_o *v71; // x0
  struct System_String_o *v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  UICounterLabel_o *gateNextPointCounterLabel; // x21
  int v80; // w22
  const MethodInfo *v81; // x3
  TitleInfoEventSubmarineStatusComponent_c *v82; // x0
  UICounterLabel_o *progressPointCounterLabel; // x20
  int32_t v84; // w21
  float PROGRESS_ANIMATION_TIME; // s8
  UnityEngine_GameObject_o *shipPanelObj; // x20
  const MethodInfo *v87; // x2
  const MethodInfo *v88; // x1
  int32_t v89; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDAF86 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__);
    sub_1C21E38(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_19521/*"event_goal"*/);
    sub_1C21E38(&StringLiteral_19546/*"event_progressicon"*/);
    sub_1C21E38(&StringLiteral_19544/*"event_progressgauge_front"*/);
    sub_1C21E38(&StringLiteral_5843/*"EVENT_SUBMARINE_NEXT_DESCRIPTION"*/);
    sub_1C21E38(&StringLiteral_5771/*"EVENT_POINT_COMMON_FORMAT"*/);
    sub_1C21E38(&StringLiteral_1539/*"94053407"*/);
    sub_1C21E38(&StringLiteral_5844/*"EVENT_SUBMARINE_NEXT_POINT"*/);
    sub_1C21E38(&StringLiteral_5851/*"EVENT_SUBMARINE_STATUS_TITLE"*/);
    sub_1C21E38(&StringLiteral_19587/*"event_status_point"*/);
    sub_1C21E38(&StringLiteral_19541/*"event_progress_point"*/);
    sub_1C21E38(&StringLiteral_19533/*"event_next"*/);
    sub_1C21E38(&StringLiteral_19543/*"event_progressgauge_back"*/);
    sub_1C21E38(&StringLiteral_5840/*"EVENT_SUBMARINE_GAUGE_CURRENT"*/);
    sub_1C21E38(&StringLiteral_19542/*"event_progressgauge"*/);
    sub_1C21E38(&StringLiteral_19545/*"event_progressgaugebg_80393"*/);
    byte_4BDAF86 = 1;
  }
  this->fields.eventDetailEnt = eventDetailEntity;
  p_eventDetailEnt = &this->fields.eventDetailEnt;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.eventDetailEnt,
    (int64_t)eventDetailEntity,
    (int64_t)mapAssetData,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.mapAssetData = mapAssetData;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.mapAssetData,
    (int64_t)mapAssetData,
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
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.animClipName,
    (int64_t)GoalAnimName,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( !this->fields.eventDetailEnt )
    goto LABEL_48;
  eventId = this->fields.eventDetailEnt->fields.eventId;
  v29 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__, 0LL);
  TitleInfoEventSubmarineStatusComponent__LoadEventUIAssetData(this, eventId, v29, v30);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_34797772(gameObject, 62.0, 0.0, 0.0, 0LL);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.statusBg,
    (System_String_o *)StringLiteral_19545/*"event_progressgaugebg_80393"*/,
    v32);
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
    v33);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeFrame,
    (System_String_o *)StringLiteral_19542/*"event_progressgauge"*/,
    v34);
  statusBg = (System_String_o *)this->fields.gaugeFrame;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeBar,
    (System_String_o *)StringLiteral_19544/*"event_progressgauge_front"*/,
    v35);
  statusBg = (System_String_o *)this->fields.gaugeBar;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeBg,
    (System_String_o *)StringLiteral_19543/*"event_progressgauge_back"*/,
    v36);
  statusBg = (System_String_o *)this->fields.gaugeBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.shipIcon,
    (System_String_o *)StringLiteral_19546/*"event_progressicon"*/,
    v37);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.progressPointBg,
    (System_String_o *)StringLiteral_19587/*"event_status_point"*/,
    v38);
  statusBg = (System_String_o *)this->fields.progressPointBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateNextIcon,
    (System_String_o *)StringLiteral_19533/*"event_next"*/,
    v39);
  statusBg = (System_String_o *)this->fields.gateNextIcon;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateGoalIcon,
    (System_String_o *)StringLiteral_19521/*"event_goal"*/,
    v40);
  statusBg = (System_String_o *)this->fields.gateGoalIcon;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateNextPointBg,
    (System_String_o *)StringLiteral_19541/*"event_progress_point"*/,
    v41);
  statusBg = (System_String_o *)this->fields.gateNextPointBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5851/*"EVENT_SUBMARINE_STATUS_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_48;
  UILabel__set_text(titleLabel, statusBg, 0LL);
  progressNameLabel = this->fields.progressNameLabel;
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5840/*"EVENT_SUBMARINE_GAUGE_CURRENT"*/, 0LL);
  if ( !progressNameLabel )
    goto LABEL_48;
  UILabel__set_text(progressNameLabel, statusBg, 0LL);
  if ( !*p_eventDetailEnt )
    goto LABEL_48;
  v44 = (*p_eventDetailEnt)->fields.eventId;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  QuestReleaseList = TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(v44, v27);
  this->fields.baseQuestReleaseEntList = QuestReleaseList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.baseQuestReleaseEntList,
    (int64_t)QuestReleaseList,
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
    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)ProgressQuestReleaseEnt, 0LL);
  else
    ValueInt = 0;
  this->fields.minPoint = ValueInt;
  if ( v58 )
    v62 = QuestReleaseEntity__getValueInt(v58, 0LL);
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
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_5843/*"EVENT_SUBMARINE_NEXT_DESCRIPTION"*/, 0LL);
  v89 = this->fields.maxPoint;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v89, v66, v67, v68);
  v70 = System_String__Format(v65, v69, 0LL);
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_5844/*"EVENT_SUBMARINE_NEXT_POINT"*/, 0LL);
  v72 = System_String__Concat_63115476(v70, v71, 0LL);
  this->fields.nextPointTextFormat = v72;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.nextPointTextFormat,
    (int64_t)v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  statusBg = (System_String_o *)TitleInfoEventSubmarineStatusComponent_TypeInfo;
  gateNextPointCounterLabel = this->fields.gateNextPointCounterLabel;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  if ( !gateNextPointCounterLabel )
    goto LABEL_48;
  v80 = (maxPoint - userOldPoint) & ~((maxPoint - userOldPoint) >> 31);
  UICounterLabel__Setup(
    gateNextPointCounterLabel,
    v80,
    TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields->PROGRESS_ANIMATION_TIME,
    this->fields.nextPointTextFormat,
    0,
    0LL);
  statusBg = (System_String_o *)this->fields.gateNextPointCounterLabel;
  if ( !statusBg )
    goto LABEL_48;
  UICounterLabel__SetCountLabel((UICounterLabel_o *)statusBg, v80, 0LL);
  if ( TitleInfoEventSubmarineStatusComponent__IsAllClear(this, v58, this->fields.userOldPoint, v81) )
  {
    statusBg = (System_String_o *)this->fields.gateNextPointCounterLabel;
    if ( !statusBg )
      goto LABEL_48;
    statusBg = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusBg, 0LL);
    if ( !statusBg )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusBg, 0, 0LL);
  }
  v82 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  progressPointCounterLabel = this->fields.progressPointCounterLabel;
  v84 = this->fields.userOldPoint;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v82 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  PROGRESS_ANIMATION_TIME = v82->static_fields->PROGRESS_ANIMATION_TIME;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5771/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  if ( !progressPointCounterLabel
    || (UICounterLabel__Setup(progressPointCounterLabel, v84, PROGRESS_ANIMATION_TIME, statusBg, 0, 0LL),
        (statusBg = (System_String_o *)this->fields.progressPointCounterLabel) == 0LL) )
  {
LABEL_48:
    sub_1C22094(statusBg, v27);
  }
  UICounterLabel__SetCountLabel((UICounterLabel_o *)statusBg, this->fields.userOldPoint, 0LL);
  shipPanelObj = this->fields.shipPanelObj;
  v90 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, this->fields.userOldPoint, v87);
  GameObjectExtensions__SetLocalPosition(shipPanelObj, v90, 0LL);
  TitleInfoEventSubmarineStatusComponent__SetupAnimation(this, v88);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
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
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_String_o *v41; // x1
  const MethodInfo *v42; // x2
  long double v43; // q0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDAF87 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_1C21E38(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__);
    sub_1C21E38(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__);
    sub_1C21E38(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__);
    byte_4BDAF87 = 1;
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
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.goalAnimObject, (int64_t)v8, v9, v10, v11, v12, v13, v14);
    }
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v7);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v16);
  }
  else
  {
    castClass(1.0);
  }
  baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
  v18 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__,
    0LL);
  if ( !baseQuestReleaseEntList )
    goto LABEL_43;
  v19 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)baseQuestReleaseEntList,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v20 = this->fields.baseQuestReleaseEntList;
  v21 = (QuestReleaseEntity_o *)v19;
  v22 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v22,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__,
    0LL);
  if ( !v20 )
    goto LABEL_43;
  v23 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v20,
          (System_Predicate_T__o *)v22,
          (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v24 = this->fields.baseQuestReleaseEntList;
  v25 = (QuestReleaseEntity_o *)v23;
  v26 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v26,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__,
    0LL);
  if ( !v24 )
    goto LABEL_43;
  v27 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v24,
          (System_Predicate_T__o *)v26,
          (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v21 )
    LODWORD(v21) = QuestReleaseEntity__getValueInt(v21, 0LL);
  if ( v25 )
    LODWORD(v25) = QuestReleaseEntity__getValueInt(v25, 0LL);
  if ( v27 )
    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v27, 0LL);
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
                                                     (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
            LODWORD(v43) = 0;
LABEL_42:
            ((void (__fastcall *)(long double))klass[1]._1.castClass)(v43);
            return;
          }
        }
      }
LABEL_43:
      sub_1C22094(gateNextIcon, method);
    }
LABEL_39:
    gateNextIcon = this->fields.shipPanelObj;
    if ( gateNextIcon )
    {
      gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gateNextIcon,
                                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateNextIcon, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition(this->fields.shipPanelObj, LocalPosition, 0LL);
  gateNextIcon = this->fields.shipPanelObj;
  if ( !gateNextIcon )
    goto LABEL_43;
  gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gateNextIcon,
                                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
  v31 = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v31, 0LL, 0LL) )
  {
    v34 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v32);
    this->fields.goalAnimObject = v34;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.goalAnimObject, (int64_t)v34, v35, v36, v37, v38, v39, v40);
  }
  v41 = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v33);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, v41, v42);
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

  if ( (byte_4BDAF92 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDAF92 = 1;
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
    if ( !byte_4BD918D )
    {
      gateNextIcon = (EventSaveData_o *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD918D = 1;
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
      if ( !byte_4BD918D )
      {
        gateNextIcon = (EventSaveData_o *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD918D = 1;
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
        if ( !byte_4BD918D )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD918D = 1;
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
                sub_1C2209C(ValueByArray, v18);
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
        sub_1C22094(gateNextIcon, v12);
      }
    }
  }
  if ( !v13->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v13);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
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
                                        (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
    sub_1C22094(this, 0LL);
  return n->fields.questId == this->fields.oldQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C22094(this, 0LL);
  return n->fields.questId == this->fields.progressQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C22094(this, 0LL);
  return n->fields.questId == this->fields.currentQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_0(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C22094(this, 0LL);
  return n->fields.questId == this->fields.oldQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C22094(this, 0LL);
  return n->fields.questId == this->fields.progressQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, method);
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
    sub_1C22094(gaugeBar, method);
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
    sub_1C22094(this, method);
  return (float)gaugeBar->fields.mWidth;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDAFA7 & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
    byte_4BDAFA7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventSubmarineStatusComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, a);
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
    sub_1C22094(this, n);
  return n->fields.questId == _4__this->fields.currentQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___EndAnimation_b__1(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C22094(this, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct TitleInfoEventSubmarineStatusComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, data);
  _4__this->fields.eventAssetData = data;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&_4__this->fields.eventAssetData,
    (int64_t)data,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.callback, 0LL);
}