void __fastcall TitleInfoEventSubmarineStatusComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TitleInfoEventSubmarineStatusComponent_StaticFields *static_fields; // x8

  if ( (byte_4BC6511 & 1) == 0 )
  {
    sub_1C1ABD4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v1);
    byte_4BC6511 = 1;
  }
  static_fields = TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->ENTRY_ANIMATION_TIME = xmmword_BFB6B0;
  static_fields->MAP_CHANGE_WAIT_TIME = 0.3;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___ctor(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BC6510 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_1C1ABD4(&System_Collections_Generic_List_UIAtlas__TypeInfo, v3);
    byte_4BC6510 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v4;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.atlasList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
    sub_1C1AE30(v5, v6);
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
  __int64 v3; // x1
  __int64 v4; // x1
  AssetData_o *mapAssetData; // x0
  Il2CppObject *Object_object__49812820; // x20
  const MethodInfo *v7; // x2
  UnityEngine_GameObject_o *v8; // x21
  struct System_String_o *GoalAnimName; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v19; // x0

  if ( (byte_4BC64FF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, method);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    byte_4BC64FF = 1;
  }
  mapAssetData = this->fields.mapAssetData;
  if ( !mapAssetData )
    return 0LL;
  Object_object__49812820 = AssetData__GetObject_object__49812820(
                              mapAssetData,
                              this->fields.goalIconAnimPrefabName,
                              (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49812820, 0LL, 0LL) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v7);
    this->fields.animClipName = GoalAnimName;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.animClipName,
      (int64_t)GoalAnimName,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__Instantiate_object_(
            Object_object__49812820,
            (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v16 )
      sub_1C1AE30(0LL, v17);
    v8 = (UnityEngine_GameObject_o *)v16;
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v16, 0LL);
    GameObjectExtensions__SafeSetParent_34762256(gameObject, this->fields.statusObj, 0LL);
    v19 = UnityEngine_GameObject__get_gameObject(v8, 0LL);
    GameObjectExtensions__ResetLocalPosition(v19, 0LL);
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
  if ( (byte_4BC6503 & 1) == 0 )
  {
    sub_1C1ABD4(&bool_TypeInfo, *(_QWORD *)&currentQuestId);
    sub_1C1ABD4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v5);
    byte_4BC6503 = 1;
  }
  v6 = System_Int32__ToString((int32_t)&v15, 0LL);
  v7 = System_Int32__ToString((int32_t)&v14, 0LL);
  v8 = System_Int32__ToString((int32_t)&v13, 0LL);
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  v10 = System_Boolean__ToString((bool)&v12, 0LL);
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  return TitleInfoEventSubmarineStatusComponent__CreateSaveData_38277724(v6, v7, v8, v10, v9);
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__CreateSaveData_38277724(
        System_String_o *userPoint,
        System_String_o *currentQuestId,
        System_String_o *progressQuestId,
        System_String_o *isLastGoalPlayed,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Text_StringBuilder_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4BC6504 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Text_StringBuilder_TypeInfo, currentQuestId);
    sub_1C1ABD4(&StringLiteral_866/*","*/, v9);
    byte_4BC6504 = 1;
  }
  v10 = (System_Text_StringBuilder_o *)sub_1C1AE20(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v10, 0LL);
  if ( !v10 )
    sub_1C1AE30(v11, v12);
  System_Text_StringBuilder__Append_62201520(v10, userPoint, 0LL);
  System_Text_StringBuilder__Append_62201520(v10, (System_String_o *)StringLiteral_866/*","*/, 0LL);
  System_Text_StringBuilder__Append_62201520(v10, currentQuestId, 0LL);
  System_Text_StringBuilder__Append_62201520(v10, (System_String_o *)StringLiteral_866/*","*/, 0LL);
  System_Text_StringBuilder__Append_62201520(v10, progressQuestId, 0LL);
  System_Text_StringBuilder__Append_62201520(v10, (System_String_o *)StringLiteral_866/*","*/, 0LL);
  System_Text_StringBuilder__Append_62201520(v10, isLastGoalPlayed, 0LL);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  UnityEngine_GameObject_o *Component_object; // x0
  PartyOrganizationUtility_o *p_goalAnimObject; // x19
  UnityEngine_Object_o *klass; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4BC6501 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    byte_4BC6501 = 1;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 0, v5);
    this->fields.animClipName = GoalAnimName;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.animClipName,
      (int64_t)GoalAnimName,
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
                                                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
    {
      sub_1C1AE30(Component_object, v13);
    }
    p_goalAnimObject = (PartyOrganizationUtility_o *)&this->fields.goalAnimObject;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Component_object, 0LL);
    klass = (UnityEngine_Object_o *)p_goalAnimObject->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70794412(klass, 0LL);
    p_goalAnimObject->klass = 0LL;
    sub_1C1AB78(p_goalAnimObject, 0LL, v17, v18, v19, v20, v21, v22);
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
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
  __int64 v11; // x21
  MissionNotifyManager_o *Instance; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v22; // x2
  int32_t userPoint; // w8
  int32_t currentQuestId; // w9
  TerminalPramsManager_c *v25; // x0
  EventSaveData_o *v26; // x22
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  TerminalPramsManager_c *v34; // x0
  PartyOrganizationUtility_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v36; // x0
  System_String_array *ValueByArray; // x0
  System_String_array *v38; // x22
  int32_t v39; // w23
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x24
  System_Predicate_object__o *v41; // x25
  Il2CppObject *v42; // x0
  int32_t v43; // w8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v44; // x24
  System_Predicate_object__o *v45; // x25
  const MethodInfo *v46; // x4
  struct EventDetailEntity_o *eventDetailEnt; // x8
  struct UIWidget_o *mWidget; // x9
  int32_t v49; // w21
  _BOOL4 isLastGoalPlayed; // w24
  struct UIWidget_o *v51; // x20
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7

  if ( (byte_4BC64FB & 1) == 0 )
  {
    sub_1C1ABD4(&EventSaveData_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v3);
    sub_1C1ABD4(&System_Predicate_QuestReleaseEntity__TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v6);
    sub_1C1ABD4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v7);
    sub_1C1ABD4(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__, v8);
    sub_1C1ABD4(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__, v9);
    sub_1C1ABD4(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo, v10);
    byte_4BC64FB = 1;
  }
  v11 = sub_1C1AE20(TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_59;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  if ( this->fields.isGoalAnimToLoop )
  {
    this->fields.isGoalAnimToLoop = 0;
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v20);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v22);
  }
  this->fields.isAfterTakingOver = 0;
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  if ( !byte_4BC46FE )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v13);
    byte_4BC46FE = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  if ( !v25->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
  {
    v26 = (EventSaveData_o *)sub_1C1AE20(EventSaveData_TypeInfo);
    EventSaveData___ctor(v26, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BC46FF )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v27);
      byte_4BC46FF = 1;
    }
    v34 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v34 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v34->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (PartyOrganizationUtility_c *)v26;
    sub_1C1AB78(p_BeforeEventSubmarineSaveData_k__BackingField, (int64_t)v26, v28, v29, v30, v31, v32, v33);
    v25 = TerminalPramsManager_TypeInfo;
  }
  if ( !v25->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v25);
  if ( !byte_4BC46FE )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v13);
    byte_4BC46FE = 1;
  }
  v36 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v36 = TerminalPramsManager_TypeInfo;
  }
  Instance = (MissionNotifyManager_o *)v36->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  if ( !Instance )
LABEL_59:
    sub_1C1AE30(Instance, v13);
  ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)Instance, 0x2Cu, 0LL);
  v38 = ValueByArray;
  if ( !ValueByArray )
  {
    v39 = 0;
    goto LABEL_35;
  }
  if ( (int)ValueByArray->max_length < 2 )
  {
    v39 = 0;
    goto LABEL_34;
  }
  v39 = System_Int32__Parse(ValueByArray->m_Items[1], 0LL);
  if ( (int)v38->max_length < 3 )
  {
LABEL_34:
    LODWORD(v38) = 0;
    goto LABEL_35;
  }
  LODWORD(v38) = System_Int32__Parse(v38->m_Items[2], 0LL);
LABEL_35:
  baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
  v41 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v41,
    (Il2CppObject *)v11,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__,
    0LL);
  if ( !baseQuestReleaseEntList )
    goto LABEL_59;
  v42 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)baseQuestReleaseEntList,
          (System_Predicate_T__o *)v41,
          (const MethodInfo_363CEF8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v43 = this->fields.currentQuestId;
  if ( v42 )
    v39 = this->fields.currentQuestId;
  if ( (int)v38 > v43 )
    v43 = (int)v38;
  *(_DWORD *)(v11 + 24) = v43;
  v44 = this->fields.baseQuestReleaseEntList;
  v45 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v45,
    (Il2CppObject *)v11,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__,
    0LL);
  if ( !v44 )
    goto LABEL_59;
  if ( System_Collections_Generic_List_object___Find(
         (System_Collections_Generic_List_object__o *)v44,
         (System_Predicate_T__o *)v45,
         (const MethodInfo_363CEF8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
  {
    LODWORD(v38) = *(_DWORD *)(v11 + 24);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC46FE )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v13);
    byte_4BC46FE = 1;
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
  if ( !byte_4BC46FE )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v13);
    Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    byte_4BC46FE = 1;
  }
  if ( !LODWORD(Instance[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
  }
  v49 = this->fields.userPoint;
  isLastGoalPlayed = this->fields.isLastGoalPlayed;
  v51 = Instance[2].fields.mNoticeNumberComp[6].fields.mWidget;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  Instance = (MissionNotifyManager_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData(
                                         v49,
                                         v39,
                                         (int32_t)v38,
                                         isLastGoalPlayed,
                                         v46);
  if ( !v51 )
    goto LABEL_59;
  v51->fields.m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o *)Instance;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&v51->fields.m_CancellationTokenSource,
    (int64_t)Instance,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(0LL);
  ActionExtensions__Call(this->fields.onEndAnim, 0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndExitAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoEventSubmarineStatusComponent_c *v4; // x0

  if ( (byte_4BC64F5 & 1) == 0 )
  {
    sub_1C1ABD4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_10845/*"PlayEntryAnimation"*/, v3);
    byte_4BC64F5 = 1;
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
    (System_String_o *)StringLiteral_10845/*"PlayEntryAnimation"*/,
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
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  UnityEngine_GameObject_o *gateNextPointCounterLabel; // x0
  UnityEngine_Object_o *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  TitleInfoEventSubmarineStatusComponent_o *ProgressQuestReleaseEnt; // x21
  const MethodInfo *v22; // x2
  QuestReleaseEntity_o *CurrentQuestReleaseEnt; // x0
  const MethodInfo *v24; // x3
  QuestReleaseEntity_o *v25; // x1
  const MethodInfo *v26; // x1
  struct UnityEngine_GameObject_o *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  UnityEngine_Object_o *v34; // x20
  const MethodInfo *v35; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v37; // x2
  TitleInfoEventSubmarineStatusComponent_c *v38; // x0

  if ( (byte_4BC64F8 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v3);
    sub_1C1ABD4(&StringLiteral_6093/*"EndAnimation"*/, v4);
    byte_4BC64F8 = 1;
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
    v14 = (UnityEngine_Object_o *)*p_goalAnimObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70794412(v14, 0LL);
    *p_goalAnimObject = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.goalAnimObject, 0LL, v15, v16, v17, v18, v19, v20);
  }
  ProgressQuestReleaseEnt = (TitleInfoEventSubmarineStatusComponent_o *)TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
                                                                          (TitleInfoEventSubmarineStatusComponent_o *)v10,
                                                                          this->fields.baseQuestReleaseEntList,
                                                                          v12);
  CurrentQuestReleaseEnt = TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
                             ProgressQuestReleaseEnt,
                             this->fields.baseQuestReleaseEntList,
                             v22);
  if ( CurrentQuestReleaseEnt )
    v25 = CurrentQuestReleaseEnt;
  else
    v25 = (QuestReleaseEntity_o *)ProgressQuestReleaseEnt;
  if ( TitleInfoEventSubmarineStatusComponent__IsAllClear(this, v25, this->fields.userPoint, v24) )
  {
    gateNextPointCounterLabel = (UnityEngine_GameObject_o *)this->fields.gateNextPointCounterLabel;
    if ( !gateNextPointCounterLabel
      || (gateNextPointCounterLabel = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)gateNextPointCounterLabel,
                                        0LL)) == 0LL )
    {
LABEL_31:
      sub_1C1AE30(gateNextPointCounterLabel, v11);
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
  v27 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v26);
  this->fields.goalAnimObject = v27;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.goalAnimObject, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  v34 = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v35);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v37);
  }
  v38 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v38 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6093/*"EndAnimation"*/,
    v38->static_fields->GOAL_ANIMATION_TIME,
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
  __int64 v9; // x1
  Il2CppObject *current; // x19
  int32_t klass; // w20
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BC6507 & 1) == 0 )
  {
    sub_1C1ABD4(&CondType_TypeInfo, baseList);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v6);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1C1ABD4(
                                                         &Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__,
                                                         v7);
    byte_4BC6507 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !baseList )
    sub_1C1AE30(this, baseList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)baseList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v8 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1C1AE30(v8, v9);
    klass = (int32_t)v13.fields._current[1].klass;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_38787928(klass, -1, 0, 0LL) )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return (QuestReleaseEntity_o *)current;
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BC6509 & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_6392/*"EventUI/Prefabs/{0}"*/, v6);
    byte_4BC6509 = 1;
  }
  v9 = eventId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_6392/*"EventUI/Prefabs/{0}"*/, v7, 0LL);
}


UnityEngine_GameObject_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4BC650F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, name);
    byte_4BC650F = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.eventAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__49812820(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
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

  if ( (byte_4BC64FE & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_16820/*"_loop"*/, *(_QWORD *)&animType);
    sub_1C1ABD4(&StringLiteral_16841/*"_start"*/, v5);
    sub_1C1ABD4(&StringLiteral_16818/*"_last"*/, v6);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v7);
    sub_1C1ABD4(&StringLiteral_16805/*"_end"*/, v8);
    byte_4BC64FE = 1;
  }
  goalIconAnimPrefabName = this->fields.goalIconAnimPrefabName;
  if ( this->fields.isLastGoalPlayed )
    goalIconAnimPrefabName = System_String__Concat_63040368(
                               goalIconAnimPrefabName,
                               (System_String_o *)StringLiteral_16818/*"_last"*/,
                               0LL);
  switch ( animType )
  {
    case 3:
      v10 = &StringLiteral_16805/*"_end"*/;
      return System_String__Concat_63040368(goalIconAnimPrefabName, (System_String_o *)*v10, 0LL);
    case 2:
      v10 = &StringLiteral_16820/*"_loop"*/;
      return System_String__Concat_63040368(goalIconAnimPrefabName, (System_String_o *)*v10, 0LL);
    case 1:
      v10 = &StringLiteral_16841/*"_start"*/;
      return System_String__Concat_63040368(goalIconAnimPrefabName, (System_String_o *)*v10, 0LL);
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
  __int64 v11; // x1
  int32_t klass; // w20
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BC6506 & 1) == 0 )
  {
    sub_1C1ABD4(&CondType_TypeInfo, baseList);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v6);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1C1ABD4(
                                                         &Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__,
                                                         v7);
    byte_4BC6506 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !baseList )
    sub_1C1AE30(this, baseList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)baseList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  current = 0LL;
  do
  {
    v9 = (QuestReleaseEntity_o *)current;
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v14.fields._current;
    if ( !v14.fields._current )
      sub_1C1AE30(v10, v11);
    klass = (int32_t)v14.fields._current[1].klass;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  }
  while ( CondType__IsQuestClear_38787928(klass, -1, 0, 0LL) );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
  __int64 v16; // x1
  System_Collections_Generic_List_QuestReleaseEntity__o *ListByTargetAndCondType; // x20
  System_Collections_Generic_List_object__o *v18; // x19
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x20
  __int64 QuestType; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Comparison_T__o *v34; // x20
  Il2CppObject *v35; // x21
  struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BC6505 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Comparison_QuestReleaseEntity__TypeInfo, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v10);
    sub_1C1ABD4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v11);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1C1ABD4(&Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__, v13);
    sub_1C1ABD4(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo, v14);
    byte_4BC6505 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_26;
  ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                              (QuestReleaseMaster_o *)Instance,
                              eventId,
                              85,
                              0LL);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !ListByTargetAndCondType )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    (System_Collections_Generic_List_object__o *)ListByTargetAndCondType,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v45 = v44;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v19 )
      break;
    current = v45.fields._current;
    if ( !v45.fields._current )
      sub_1C1AE30(v19, v20);
    QuestType = QuestMaster__GetQuestType((int32_t)v45.fields._current[1].klass, 0LL);
    if ( (_DWORD)QuestType == 2 )
    {
      if ( !v18 )
        sub_1C1AE30(QuestType, v23);
      items = v18->fields._items;
      v31 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
      ++v18->fields._version;
      if ( !items )
        sub_1C1AE30(QuestType, v23);
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          current,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v33[4] = (Il2CppClass *)current;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)current, v24, v25, v26, v27, v28, v29);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v45,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  Instance = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
    Instance = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
  }
  v34 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v34 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
    }
    v35 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v34 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      v34,
      v35,
      Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__,
      0LL);
    static_fields = TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields;
    static_fields->__9__80_0 = (struct System_Comparison_QuestReleaseEntity__o *)v34;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__80_0, (int64_t)v34, v37, v38, v39, v40, v41, v42);
  }
  if ( !v18 )
LABEL_26:
    sub_1C1AE30(Instance, v16);
  System_Collections_Generic_List_object___Sort_56877908(
    v18,
    v34,
    (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v18;
}


int32_t __fastcall TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  struct EventDetailEntity_o *eventDetailEnt; // x8

  if ( (byte_4BC64FC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserEventPointMaster___, method);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BC64FC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    byte_4BC2585 = 1;
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
    sub_1C1AE30(Instance, v6);
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
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *baseQuestReleaseEntList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x21
  int32_t ValueInt; // w0
  int32_t klass; // w22
  int32_t v12; // w21
  _BOOL8 IsQuestClear_38787928; // x0
  __int64 v14; // x1

  if ( (byte_4BC6508 & 1) == 0 )
  {
    sub_1C1ABD4(&CondType_TypeInfo, currentQuestReleaseEnt);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___, v7);
    byte_4BC6508 = 1;
  }
  baseQuestReleaseEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseQuestReleaseEntList;
  if ( baseQuestReleaseEntList )
  {
    baseQuestReleaseEntList = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__LastOrDefault_object_(
                                                                                     baseQuestReleaseEntList,
                                                                                     (const MethodInfo_2FC5848 *)Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___);
    if ( baseQuestReleaseEntList )
    {
      v9 = baseQuestReleaseEntList;
      ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)baseQuestReleaseEntList, 0LL);
      klass = (int32_t)v9[1].klass;
      v12 = ValueInt;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_38787928 = CondType__IsQuestClear_38787928(klass, -1, 0, 0LL);
      if ( !currentQuestReleaseEnt )
        sub_1C1AE30(IsQuestClear_38787928, v14);
      LOBYTE(baseQuestReleaseEntList) = IsQuestClear_38787928 & (v12 <= nowPoint) & (QuestReleaseEntity__getValueInt(
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
  __int64 v5; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4BC6502 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    byte_4BC6502 = 1;
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
                                                         (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
  {
    sub_1C1AE30(Component_object, v5);
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
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v28; // x20

  if ( (byte_4BC650A & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1C1ABD4(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1C1ABD4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v8);
    sub_1C1ABD4(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__, v9);
    sub_1C1ABD4(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo, v10);
    byte_4BC650A = 1;
  }
  v11 = sub_1C1AE20(TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1C1AE30(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)callback, v20, v21, v22, v23, v24, v25);
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  EventUIAssetDataPath = TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(eventId, v26);
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)v11,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v28, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  __int64 size; // x2
  int v15; // w9
  int i; // w28
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  Il2CppObject *Component_object; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v36; // x8
  int32_t v37; // [xsp+8h] [xbp-58h] BYREF
  int v38; // [xsp+Ch] [xbp-54h] BYREF

  v6 = this;
  if ( (byte_4BC650D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_1C1ABD4(&int_TypeInfo, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UIAtlas__Add__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    sub_1C1ABD4(&StringLiteral_25367/*"{0:D2}"*/, v11);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1C1ABD4(&StringLiteral_5483/*"DownloadEventUIAtlas{0}{1}"*/, v12);
    byte_4BC650D = 1;
  }
  if ( v6->fields.eventAssetData )
  {
    atlasList = v6->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1C1AE30(this, *(_QWORD *)&eventId);
    size = (unsigned int)atlasList->fields._size;
    v15 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v15;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
    for ( i = 1; ; ++i )
    {
      v38 = i;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, size, v3, v4);
      v18 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25367/*"{0:D2}"*/, v17, 0LL);
      v37 = eventId;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v19, v20, v21);
      v23 = System_String__Format_63054740((System_String_o *)StringLiteral_5483/*"DownloadEventUIAtlas{0}{1}"*/, v22, v18, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
                                                                 v6,
                                                                 v23,
                                                                 v24);
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
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (TitleInfoEventSubmarineStatusComponent_o *)v6->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      v33 = *(_QWORD *)&this->fields.m_CachedPtr;
      v34 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v33 )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v33 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = v33 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v36 + 32) = Component_object;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v36 + 32), (int64_t)Component_object, v27, v28, v29, v30, v31, v32);
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
    sub_1C1AE30(this, method);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  const MethodInfo *v15; // x1
  int32_t UserEventPoint; // w0
  const MethodInfo *v17; // x2
  int32_t oldQuestId; // w8
  int32_t currentQuestId; // w9
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x21
  System_Predicate_object__o *v21; // x22
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  Il2CppObject *v24; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v25; // x22
  QuestReleaseEntity_o *v26; // x21
  System_Predicate_object__o *v27; // x23
  Il2CppObject *v28; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v29; // x23
  QuestReleaseEntity_o *v30; // x22
  System_Predicate_object__o *v31; // x24
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  Il2CppObject *v38; // x23
  const MethodInfo *v39; // x1
  int32_t v40; // w8

  if ( (byte_4BC64F3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, onEndAnim);
    sub_1C1ABD4(&System_Predicate_QuestReleaseEntity__TypeInfo, v10);
    sub_1C1ABD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v11);
    sub_1C1ABD4(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__, v12);
    sub_1C1ABD4(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__, v13);
    sub_1C1ABD4(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__, v14);
    byte_4BC64F3 = 1;
  }
  if ( this->fields.isAfterTakingOver )
  {
    this->fields.onEndAnim = onEndAnim;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.onEndAnim,
      (int64_t)onEndAnim,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    TitleInfoEventSubmarineStatusComponent__EndAnimation(this, v15);
    return;
  }
  UserEventPoint = TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(this, (const MethodInfo *)onEndAnim);
  oldQuestId = this->fields.oldQuestId;
  currentQuestId = this->fields.currentQuestId;
  this->fields.userPoint = UserEventPoint;
  if ( oldQuestId == currentQuestId && this->fields.userOldPoint == UserEventPoint )
  {
    TitleInfoEventSubmarineStatusComponent__PlayLastMapAnimation(this, onEndAnim, v17);
    return;
  }
  baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
  v21 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v21,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__,
    0LL);
  if ( !baseQuestReleaseEntList )
    goto LABEL_28;
  v24 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)baseQuestReleaseEntList,
          (System_Predicate_T__o *)v21,
          (const MethodInfo_363CEF8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v25 = this->fields.baseQuestReleaseEntList;
  v26 = (QuestReleaseEntity_o *)v24;
  v27 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v27,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__,
    0LL);
  if ( !v25 )
    goto LABEL_28;
  v28 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v25,
          (System_Predicate_T__o *)v27,
          (const MethodInfo_363CEF8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v29 = this->fields.baseQuestReleaseEntList;
  v30 = (QuestReleaseEntity_o *)v28;
  v31 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v31,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__,
    0LL);
  if ( !v29 )
    goto LABEL_28;
  v38 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v29,
          (System_Predicate_T__o *)v31,
          (const MethodInfo_363CEF8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v26 )
    LODWORD(v26) = QuestReleaseEntity__getValueInt(v26, 0LL);
  if ( v30 )
    LODWORD(v30) = QuestReleaseEntity__getValueInt(v30, 0LL);
  if ( v38 )
    LODWORD(v38) = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v38, 0LL);
  if ( (int)v26 > (int)v38 )
  {
    ActionExtensions__Call(onEndAnim, 0LL);
    return;
  }
  this->fields.onEndAnim = onEndAnim;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.onEndAnim, (int64_t)onEndAnim, v32, v33, v34, v35, v36, v37);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1C1AE30(Instance, v23);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  if ( (int)v30 < (int)v38 )
  {
    v40 = this->fields.oldQuestId;
    if ( v40 )
    {
      if ( (int)v26 < (int)v38 && v40 >= 1 )
      {
        TitleInfoEventSubmarineStatusComponent__PlayExitAnimation(this, v39);
        return;
      }
    }
    else if ( this->fields.currentQuestId >= 1 )
    {
      TitleInfoEventSubmarineStatusComponent__PlayEntryAnimation(this, v39);
      return;
    }
  }
  TitleInfoEventSubmarineStatusComponent__PlayProgressAnimation(this, v39);
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
  __int64 v11; // x1
  UnityEngine_GameObject_o *gateNextIcon; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v14; // x20
  TitleInfoEventSubmarineStatusComponent_c *v15; // x0
  System_Collections_Generic_List_object__o *klass; // x21
  float ENTRY_ANIMATION_TIME; // s0
  EventDelegate_o *v18; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  Il2CppObject *v29; // x20
  UnityEngine_GameObject_o *v30; // x19
  TitleInfoEventSubmarineStatusComponent_c *v31; // x0
  float v32; // s0
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BC64F6 & 1) == 0 )
  {
    sub_1C1ABD4(&EventDelegate_TypeInfo, method);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v6);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v7);
    sub_1C1ABD4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v8);
    sub_1C1ABD4(&StringLiteral_6105/*"EndEntryAnimation"*/, v9);
    byte_4BC64F6 = 1;
  }
  shipPanelObj = this->fields.shipPanelObj;
  v33 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, this->fields.minPoint, v2);
  GameObjectExtensions__SetLocalPosition(shipPanelObj, v33, 0LL);
  gateNextIcon = this->fields.shipPanelObj;
  if ( !gateNextIcon )
    goto LABEL_33;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gateNextIcon,
                       (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70794412((UnityEngine_Object_o *)Component_object, 0LL);
  }
  gateNextIcon = this->fields.shipPanelObj;
  if ( !gateNextIcon )
    goto LABEL_33;
  gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                               gateNextIcon,
                                               (const MethodInfo_2FEFAD8 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !gateNextIcon )
    goto LABEL_33;
  v14 = gateNextIcon;
  gateNextIcon[5].monitor = (void *)0x3F80000000000000LL;
  v15 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v15 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  klass = (System_Collections_Generic_List_object__o *)v14[3].klass;
  ENTRY_ANIMATION_TIME = v15->static_fields->ENTRY_ANIMATION_TIME;
  LODWORD(v14[1].monitor) = 3;
  *(float *)&v14[2].monitor = ENTRY_ANIMATION_TIME;
  v18 = (EventDelegate_o *)sub_1C1AE20(EventDelegate_TypeInfo);
  EventDelegate___ctor_47893912(v18, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6105/*"EndEntryAnimation"*/, 0LL);
  if ( !klass )
    goto LABEL_33;
  items = klass->fields._items;
  v26 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++klass->fields._version;
  if ( !items )
    goto LABEL_33;
  size = klass->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v18,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v28[4] = (Il2CppClass *)v18;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)v18, v19, v20, v21, v22, v23, v24);
  }
  UITweener__PlayForward((UITweener_o *)v14, 0LL);
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon )
    goto LABEL_33;
  gateNextIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateNextIcon, 0LL);
  if ( !gateNextIcon )
    goto LABEL_33;
  v29 = UnityEngine_GameObject__GetComponent_object_(
          gateNextIcon,
          (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70794412((UnityEngine_Object_o *)v29, 0LL);
  }
  gateNextIcon = (UnityEngine_GameObject_o *)this->fields.gateNextIcon;
  if ( !gateNextIcon
    || (gateNextIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateNextIcon, 0LL)) == 0LL
    || (gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                     gateNextIcon,
                                                     (const MethodInfo_2FEFAD8 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___)) == 0LL )
  {
LABEL_33:
    sub_1C1AE30(gateNextIcon, v11);
  }
  gateNextIcon[5].monitor = (void *)0x3F80000000000000LL;
  v30 = gateNextIcon;
  v31 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v31 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  v32 = v31->static_fields->ENTRY_ANIMATION_TIME;
  LODWORD(v30[1].monitor) = 3;
  *(float *)&v30[2].monitor = v32;
  UITweener__PlayForward((UITweener_o *)v30, 0LL);
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
  UnityEngine_GameObject_o *v11; // x20
  TitleInfoEventSubmarineStatusComponent_c *v12; // x0
  System_Collections_Generic_List_object__o *klass; // x21
  float EXIT_ANIMATION_TIME; // s0
  EventDelegate_o *v15; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  struct UnityEngine_GameObject_o *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_String_o *GoalAnimName; // x1
  const MethodInfo *v37; // x2

  if ( (byte_4BC64F4 & 1) == 0 )
  {
    sub_1C1ABD4(&EventDelegate_TypeInfo, method);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___, v3);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    sub_1C1ABD4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v7);
    sub_1C1ABD4(&StringLiteral_6116/*"EndExitAnimation"*/, v8);
    byte_4BC64F4 = 1;
  }
  shipPanelObj = this->fields.shipPanelObj;
  if ( !shipPanelObj )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       shipPanelObj,
                       (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70794412((UnityEngine_Object_o *)Component_object, 0LL);
  }
  shipPanelObj = this->fields.shipPanelObj;
  if ( !shipPanelObj )
    goto LABEL_24;
  shipPanelObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                               shipPanelObj,
                                               (const MethodInfo_2FEFAD8 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !shipPanelObj )
    goto LABEL_24;
  v11 = shipPanelObj;
  shipPanelObj[5].monitor = (void *)1065353216;
  v12 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v12 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  klass = (System_Collections_Generic_List_object__o *)v11[3].klass;
  EXIT_ANIMATION_TIME = v12->static_fields->EXIT_ANIMATION_TIME;
  LODWORD(v11[1].monitor) = 3;
  *(float *)&v11[2].monitor = EXIT_ANIMATION_TIME;
  v15 = (EventDelegate_o *)sub_1C1AE20(EventDelegate_TypeInfo);
  EventDelegate___ctor_47893912(v15, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6116/*"EndExitAnimation"*/, 0LL);
  if ( !klass
    || (items = klass->fields._items,
        v23 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++klass->fields._version,
        !items) )
  {
LABEL_24:
    sub_1C1AE30(shipPanelObj, method);
  }
  size = klass->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v15,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v15;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)v15, v16, v17, v18, v19, v20, v21);
  }
  UITweener__PlayForward((UITweener_o *)v11, 0LL);
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
  {
    v29 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v27);
    this->fields.goalAnimObject = v29;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.goalAnimObject, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  }
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 3, v28);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v37);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *animClipName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *goalAnimObject; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4BC6500 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_Animation___, animClipName);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    byte_4BC6500 = 1;
  }
  goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
  {
    this->fields.animClipName = animClipName;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.animClipName,
      (int64_t)animClipName,
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
                                                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
    {
      sub_1C1AE30(Component_object, v13);
    }
    UnityEngine_Animation__Play_70538820((UnityEngine_Animation_o *)Component_object, this->fields.animClipName, 0LL);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  struct UnityEngine_GameObject_o *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v26; // x2
  TitleInfoEventSubmarineStatusComponent_c *v27; // x0

  if ( (byte_4BC64F9 & 1) == 0 )
  {
    sub_1C1ABD4(&CondType_TypeInfo, onEndAnim);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    sub_1C1ABD4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v6);
    sub_1C1ABD4(&StringLiteral_10852/*"PlayLastMapStartedAnimation"*/, v7);
    byte_4BC64F9 = 1;
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
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.onEndAnim, (int64_t)onEndAnim, v9, v10, v11, v12, v13, v14);
    goalAnimObject = (UnityEngine_Object_o *)this->fields.goalAnimObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(goalAnimObject, 0LL, 0LL) )
    {
      v18 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v16);
      this->fields.goalAnimObject = v18;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.goalAnimObject,
        (int64_t)v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 3, v17);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v26);
    v27 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v27 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10852/*"PlayLastMapStartedAnimation"*/,
      v27->static_fields->EXIT_ANIMATION_TIME,
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

  if ( (byte_4BC64FA & 1) == 0 )
  {
    sub_1C1ABD4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_6093/*"EndAnimation"*/, v4);
    byte_4BC64FA = 1;
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
    (System_String_o *)StringLiteral_6093/*"EndAnimation"*/,
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
  __int64 v13; // x1
  float v14; // s0
  int v15; // s1
  int v16; // s2
  UnityEngine_GameObject_o *shipPanelObj; // x0
  float v18; // s11
  int v19; // s12
  int v20; // s13
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v22; // x20
  TitleInfoEventSubmarineStatusComponent_c *v23; // x0
  System_Collections_Generic_List_object__o *klass; // x21
  float PROGRESS_ANIMATION_TIME; // s0
  EventDelegate_o *v26; // x22
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  TitleInfoEventSubmarineStatusComponent_c *v37; // x0
  int32_t userOldPoint; // w8
  int v39; // w9
  UnityEngine_Object_o *gateNextPointCounterLabel; // x20
  int32_t v41; // w8
  int32_t userPoint; // w9
  int32_t maxPoint; // w10
  int v44; // w9
  int v45; // w8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BC64F7 & 1) == 0 )
  {
    sub_1C1ABD4(&EventDelegate_TypeInfo, method);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v3);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    sub_1C1ABD4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v7);
    sub_1C1ABD4(&StringLiteral_6133/*"EndProgressAnimation"*/, v8);
    byte_4BC64F7 = 1;
  }
  LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.shipPanelObj, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  *(UnityEngine_Vector3_o *)&v14 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(
                                     this,
                                     this->fields.userPoint,
                                     v12);
  if ( x <= v14 )
  {
    v37 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v37 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6133/*"EndProgressAnimation"*/,
      v37->static_fields->PROGRESS_ANIMATION_TIME,
      0LL);
  }
  else
  {
    shipPanelObj = this->fields.shipPanelObj;
    if ( !shipPanelObj )
      goto LABEL_39;
    v18 = v14;
    v19 = v15;
    v20 = v16;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         shipPanelObj,
                         (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70794412((UnityEngine_Object_o *)Component_object, 0LL);
    }
    shipPanelObj = this->fields.shipPanelObj;
    if ( !shipPanelObj )
      goto LABEL_39;
    shipPanelObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                 shipPanelObj,
                                                 (const MethodInfo_2FEFAD8 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    if ( !shipPanelObj )
      goto LABEL_39;
    *(float *)&shipPanelObj[5].monitor = x;
    *((float *)&shipPanelObj[5].monitor + 1) = y;
    *(float *)&shipPanelObj[5].fields.m_CachedPtr = z;
    *((float *)&shipPanelObj[5].fields + 1) = v18;
    LODWORD(shipPanelObj[6].klass) = v19;
    HIDWORD(shipPanelObj[6].klass) = v20;
    v22 = shipPanelObj;
    v23 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v23 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    klass = (System_Collections_Generic_List_object__o *)v22[3].klass;
    PROGRESS_ANIMATION_TIME = v23->static_fields->PROGRESS_ANIMATION_TIME;
    LODWORD(v22[1].monitor) = 3;
    *(float *)&v22[2].monitor = PROGRESS_ANIMATION_TIME;
    v26 = (EventDelegate_o *)sub_1C1AE20(EventDelegate_TypeInfo);
    EventDelegate___ctor_47893912(v26, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6133/*"EndProgressAnimation"*/, 0LL);
    if ( !klass )
      goto LABEL_39;
    items = klass->fields._items;
    v34 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++klass->fields._version;
    if ( !items )
      goto LABEL_39;
    size = klass->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        klass,
        (Il2CppObject *)v26,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v36 = &items->obj.klass + size;
      klass->fields._size = size + 1;
      v36[4] = (Il2CppClass *)v26;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v26, v27, v28, v29, v30, v31, v32);
    }
    UITweener__PlayForward((UITweener_o *)v22, 0LL);
  }
  if ( !this->fields.isCompleatedCount )
  {
    userOldPoint = this->fields.userOldPoint;
    v39 = this->fields.userPoint - userOldPoint;
    if ( v39 )
    {
      shipPanelObj = (UnityEngine_GameObject_o *)this->fields.progressPointCounterLabel;
      this->fields.isCompleatedCount = 1;
      if ( !shipPanelObj )
        goto LABEL_39;
      LODWORD(shipPanelObj[2].monitor) = userOldPoint;
      HIDWORD(shipPanelObj[2].monitor) = v39;
      UICounterLabel__PlayAnimation((UICounterLabel_o *)shipPanelObj, 0LL);
    }
  }
  gateNextPointCounterLabel = (UnityEngine_Object_o *)this->fields.gateNextPointCounterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gateNextPointCounterLabel, 0LL, 0LL) )
  {
    v41 = this->fields.userOldPoint;
    userPoint = this->fields.userPoint;
    if ( v41 != userPoint )
    {
      maxPoint = this->fields.maxPoint;
      if ( userPoint >= maxPoint )
        userPoint = this->fields.maxPoint;
      v44 = userPoint - v41;
      if ( v44 >= 1 )
      {
        v45 = maxPoint - v41;
        if ( v45 >= 1 )
        {
          shipPanelObj = (UnityEngine_GameObject_o *)this->fields.gateNextPointCounterLabel;
          if ( shipPanelObj )
          {
            LODWORD(shipPanelObj[2].monitor) = v45;
            HIDWORD(shipPanelObj[2].monitor) = -v44;
            UICounterLabel__PlayAnimation((UICounterLabel_o *)shipPanelObj, 0LL);
            return;
          }
LABEL_39:
          sub_1C1AE30(shipPanelObj, v13);
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

  if ( (byte_4BC650B & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1C1ABD4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v5);
    byte_4BC650B = 1;
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
  if ( (byte_4BC650C & 1) == 0 )
  {
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_1C1ABD4(
                                                         &Method_System_Collections_Generic_List_UIAtlas__Clear__,
                                                         method);
    byte_4BC650C = 1;
  }
  atlasList = v2->fields.atlasList;
  if ( !atlasList )
    sub_1C1AE30(this, method);
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
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BC650E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_4BC650E = 1;
  }
  memset(&v20, 0, sizeof(v20));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2FAA930 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v20 = v19;
  do
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v13 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1C1AE30(IsNullOrEmpty, v12);
    }
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1C1AE30(v13, v14);
    v16 = UIAtlas__GetSprite((UIAtlas_o *)v20.fields._current, spriteName, 0LL);
  }
  while ( !v16 );
  if ( !sprite )
    sub_1C1AE30(v16, v17);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  struct EventDetailEntity_o **p_eventDetailEnt; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  const MethodInfo *v37; // x2
  struct System_String_o *GoalAnimName; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_String_o *statusBg; // x0
  const MethodInfo *v46; // x1
  int32_t eventId; // w21
  System_Action_o *v48; // x22
  const MethodInfo *v49; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x3
  UILabel_o *titleLabel; // x21
  UILabel_o *progressNameLabel; // x21
  int32_t v63; // w20
  struct System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseList; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  TitleInfoEventSubmarineStatusComponent_o *v71; // x0
  const MethodInfo *v72; // x2
  TitleInfoEventSubmarineStatusComponent_o *ProgressQuestReleaseEnt; // x21
  const MethodInfo *v74; // x2
  QuestReleaseEntity_o *CurrentQuestReleaseEnt; // x0
  const MethodInfo *v76; // x1
  QuestReleaseEntity_o *v77; // x20
  const MethodInfo *v78; // x5
  int32_t questId; // w8
  int32_t ValueInt; // w0
  int32_t v81; // w0
  int32_t maxPoint; // w22
  int32_t userOldPoint; // w25
  System_String_o *v84; // x21
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  Il2CppObject *v88; // x0
  System_String_o *v89; // x21
  System_String_o *v90; // x0
  struct System_String_o *v91; // x0
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  UICounterLabel_o *gateNextPointCounterLabel; // x21
  int v99; // w22
  const MethodInfo *v100; // x3
  TitleInfoEventSubmarineStatusComponent_c *v101; // x0
  UICounterLabel_o *progressPointCounterLabel; // x20
  int32_t v103; // w21
  float PROGRESS_ANIMATION_TIME; // s8
  UnityEngine_GameObject_o *shipPanelObj; // x20
  const MethodInfo *v106; // x2
  const MethodInfo *v107; // x1
  int32_t v108; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BC64F1 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, eventDetailEntity);
    sub_1C1ABD4(&int_TypeInfo, v11);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v12);
    sub_1C1ABD4(&Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__, v13);
    sub_1C1ABD4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v14);
    sub_1C1ABD4(&StringLiteral_19506/*"event_goal"*/, v15);
    sub_1C1ABD4(&StringLiteral_19531/*"event_progressicon"*/, v16);
    sub_1C1ABD4(&StringLiteral_19529/*"event_progressgauge_front"*/, v17);
    sub_1C1ABD4(&StringLiteral_5833/*"EVENT_SUBMARINE_NEXT_DESCRIPTION"*/, v18);
    sub_1C1ABD4(&StringLiteral_5761/*"EVENT_POINT_COMMON_FORMAT"*/, v19);
    sub_1C1ABD4(&StringLiteral_1539/*"94053407"*/, v20);
    sub_1C1ABD4(&StringLiteral_5834/*"EVENT_SUBMARINE_NEXT_POINT"*/, v21);
    sub_1C1ABD4(&StringLiteral_5841/*"EVENT_SUBMARINE_STATUS_TITLE"*/, v22);
    sub_1C1ABD4(&StringLiteral_19572/*"event_status_point"*/, v23);
    sub_1C1ABD4(&StringLiteral_19526/*"event_progress_point"*/, v24);
    sub_1C1ABD4(&StringLiteral_19518/*"event_next"*/, v25);
    sub_1C1ABD4(&StringLiteral_19528/*"event_progressgauge_back"*/, v26);
    sub_1C1ABD4(&StringLiteral_5830/*"EVENT_SUBMARINE_GAUGE_CURRENT"*/, v27);
    sub_1C1ABD4(&StringLiteral_19527/*"event_progressgauge"*/, v28);
    sub_1C1ABD4(&StringLiteral_19530/*"event_progressgaugebg_80393"*/, v29);
    byte_4BC64F1 = 1;
  }
  this->fields.eventDetailEnt = eventDetailEntity;
  p_eventDetailEnt = &this->fields.eventDetailEnt;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.eventDetailEnt,
    (int64_t)eventDetailEntity,
    (int64_t)mapAssetData,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.mapAssetData = mapAssetData;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.mapAssetData,
    (int64_t)mapAssetData,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.isCompleatedCount = 0;
  this->fields.isGoalAnimToLoop = 0;
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 0, v37);
  this->fields.animClipName = GoalAnimName;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.animClipName,
    (int64_t)GoalAnimName,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( !this->fields.eventDetailEnt )
    goto LABEL_48;
  eventId = this->fields.eventDetailEnt->fields.eventId;
  v48 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)this, Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__, 0LL);
  TitleInfoEventSubmarineStatusComponent__LoadEventUIAssetData(this, eventId, v48, v49);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_34756412(gameObject, 62.0, 0.0, 0.0, 0LL);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.statusBg,
    (System_String_o *)StringLiteral_19530/*"event_progressgaugebg_80393"*/,
    v51);
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
    v52);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeFrame,
    (System_String_o *)StringLiteral_19527/*"event_progressgauge"*/,
    v53);
  statusBg = (System_String_o *)this->fields.gaugeFrame;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeBar,
    (System_String_o *)StringLiteral_19529/*"event_progressgauge_front"*/,
    v54);
  statusBg = (System_String_o *)this->fields.gaugeBar;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeBg,
    (System_String_o *)StringLiteral_19528/*"event_progressgauge_back"*/,
    v55);
  statusBg = (System_String_o *)this->fields.gaugeBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.shipIcon,
    (System_String_o *)StringLiteral_19531/*"event_progressicon"*/,
    v56);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.progressPointBg,
    (System_String_o *)StringLiteral_19572/*"event_status_point"*/,
    v57);
  statusBg = (System_String_o *)this->fields.progressPointBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateNextIcon,
    (System_String_o *)StringLiteral_19518/*"event_next"*/,
    v58);
  statusBg = (System_String_o *)this->fields.gateNextIcon;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateGoalIcon,
    (System_String_o *)StringLiteral_19506/*"event_goal"*/,
    v59);
  statusBg = (System_String_o *)this->fields.gateGoalIcon;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateNextPointBg,
    (System_String_o *)StringLiteral_19526/*"event_progress_point"*/,
    v60);
  statusBg = (System_String_o *)this->fields.gateNextPointBg;
  if ( !statusBg )
    goto LABEL_48;
  ((void (__fastcall *)(System_String_o *, void *))statusBg->klass[1]._1.typeMetadataHandle)(
    statusBg,
    statusBg->klass[1]._1.interopData);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5841/*"EVENT_SUBMARINE_STATUS_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_48;
  UILabel__set_text(titleLabel, statusBg, 0LL);
  progressNameLabel = this->fields.progressNameLabel;
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5830/*"EVENT_SUBMARINE_GAUGE_CURRENT"*/, 0LL);
  if ( !progressNameLabel )
    goto LABEL_48;
  UILabel__set_text(progressNameLabel, statusBg, 0LL);
  if ( !*p_eventDetailEnt )
    goto LABEL_48;
  v63 = (*p_eventDetailEnt)->fields.eventId;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  QuestReleaseList = TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(v63, v46);
  this->fields.baseQuestReleaseEntList = QuestReleaseList;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseQuestReleaseEntList,
    (int64_t)QuestReleaseList,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  ProgressQuestReleaseEnt = (TitleInfoEventSubmarineStatusComponent_o *)TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
                                                                          v71,
                                                                          this->fields.baseQuestReleaseEntList,
                                                                          v72);
  CurrentQuestReleaseEnt = TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
                             ProgressQuestReleaseEnt,
                             this->fields.baseQuestReleaseEntList,
                             v74);
  if ( CurrentQuestReleaseEnt )
    v77 = CurrentQuestReleaseEnt;
  else
    v77 = (QuestReleaseEntity_o *)ProgressQuestReleaseEnt;
  this->fields.userPoint = TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(this, v76);
  if ( v77 )
    questId = v77->fields.questId;
  else
    questId = 0;
  this->fields.currentQuestId = questId;
  if ( ProgressQuestReleaseEnt )
    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)ProgressQuestReleaseEnt, 0LL);
  else
    ValueInt = 0;
  this->fields.minPoint = ValueInt;
  if ( v77 )
    v81 = QuestReleaseEntity__getValueInt(v77, 0LL);
  else
    v81 = 0;
  this->fields.maxPoint = v81;
  TitleInfoEventSubmarineStatusComponent__SetupOldData(
    this,
    &this->fields.userOldPoint,
    &this->fields.oldQuestId,
    &this->fields.progressQuestId,
    &this->fields.isLastGoalPlayed,
    v78);
  maxPoint = this->fields.maxPoint;
  userOldPoint = this->fields.userOldPoint;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v84 = LocalizationManager__Get((System_String_o *)StringLiteral_5833/*"EVENT_SUBMARINE_NEXT_DESCRIPTION"*/, 0LL);
  v108 = this->fields.maxPoint;
  v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v108, v85, v86, v87);
  v89 = System_String__Format(v84, v88, 0LL);
  v90 = LocalizationManager__Get((System_String_o *)StringLiteral_5834/*"EVENT_SUBMARINE_NEXT_POINT"*/, 0LL);
  v91 = System_String__Concat_63040368(v89, v90, 0LL);
  this->fields.nextPointTextFormat = v91;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.nextPointTextFormat,
    (int64_t)v91,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97);
  statusBg = (System_String_o *)TitleInfoEventSubmarineStatusComponent_TypeInfo;
  gateNextPointCounterLabel = this->fields.gateNextPointCounterLabel;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  if ( !gateNextPointCounterLabel )
    goto LABEL_48;
  v99 = (maxPoint - userOldPoint) & ~((maxPoint - userOldPoint) >> 31);
  UICounterLabel__Setup(
    gateNextPointCounterLabel,
    v99,
    TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields->PROGRESS_ANIMATION_TIME,
    this->fields.nextPointTextFormat,
    0,
    0LL);
  statusBg = (System_String_o *)this->fields.gateNextPointCounterLabel;
  if ( !statusBg )
    goto LABEL_48;
  UICounterLabel__SetCountLabel((UICounterLabel_o *)statusBg, v99, 0LL);
  if ( TitleInfoEventSubmarineStatusComponent__IsAllClear(this, v77, this->fields.userOldPoint, v100) )
  {
    statusBg = (System_String_o *)this->fields.gateNextPointCounterLabel;
    if ( !statusBg )
      goto LABEL_48;
    statusBg = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusBg, 0LL);
    if ( !statusBg )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusBg, 0, 0LL);
  }
  v101 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  progressPointCounterLabel = this->fields.progressPointCounterLabel;
  v103 = this->fields.userOldPoint;
  if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v101 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  PROGRESS_ANIMATION_TIME = v101->static_fields->PROGRESS_ANIMATION_TIME;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  statusBg = LocalizationManager__Get((System_String_o *)StringLiteral_5761/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  if ( !progressPointCounterLabel
    || (UICounterLabel__Setup(progressPointCounterLabel, v103, PROGRESS_ANIMATION_TIME, statusBg, 0, 0LL),
        (statusBg = (System_String_o *)this->fields.progressPointCounterLabel) == 0LL) )
  {
LABEL_48:
    sub_1C1AE30(statusBg, v46);
  }
  UICounterLabel__SetCountLabel((UICounterLabel_o *)statusBg, this->fields.userOldPoint, 0LL);
  shipPanelObj = this->fields.shipPanelObj;
  v109 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, this->fields.userOldPoint, v106);
  GameObjectExtensions__SetLocalPosition(shipPanelObj, v109, 0LL);
  TitleInfoEventSubmarineStatusComponent__SetupAnimation(this, v107);
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
  UnityEngine_Object_o *goalAnimObject; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  struct UnityEngine_GameObject_o *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v22; // x2
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x20
  System_Predicate_object__o *v24; // x21
  Il2CppObject *v25; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v26; // x21
  QuestReleaseEntity_o *v27; // x20
  System_Predicate_object__o *v28; // x22
  Il2CppObject *v29; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v30; // x22
  QuestReleaseEntity_o *v31; // x21
  System_Predicate_object__o *v32; // x23
  Il2CppObject *v33; // x22
  int32_t ValueInt; // w0
  int32_t oldQuestId; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v37; // x20
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x2
  struct UnityEngine_GameObject_o *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_String_o *v47; // x1
  const MethodInfo *v48; // x2
  long double v49; // q0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BC64F2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    sub_1C1ABD4(&System_Predicate_QuestReleaseEntity__TypeInfo, v5);
    sub_1C1ABD4(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__, v6);
    sub_1C1ABD4(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__, v7);
    sub_1C1ABD4(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__, v8);
    byte_4BC64F2 = 1;
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
      v14 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v12);
      this->fields.goalAnimObject = v14;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.goalAnimObject,
        (int64_t)v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v13);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v22);
  }
  else
  {
    castClass(1.0);
  }
  baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
  v24 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v24,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__,
    0LL);
  if ( !baseQuestReleaseEntList )
    goto LABEL_43;
  v25 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)baseQuestReleaseEntList,
          (System_Predicate_T__o *)v24,
          (const MethodInfo_363CEF8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v26 = this->fields.baseQuestReleaseEntList;
  v27 = (QuestReleaseEntity_o *)v25;
  v28 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v28,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__,
    0LL);
  if ( !v26 )
    goto LABEL_43;
  v29 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v26,
          (System_Predicate_T__o *)v28,
          (const MethodInfo_363CEF8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v30 = this->fields.baseQuestReleaseEntList;
  v31 = (QuestReleaseEntity_o *)v29;
  v32 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_object____ctor(
    v32,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__,
    0LL);
  if ( !v30 )
    goto LABEL_43;
  v33 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)v30,
          (System_Predicate_T__o *)v32,
          (const MethodInfo_363CEF8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v27 )
    LODWORD(v27) = QuestReleaseEntity__getValueInt(v27, 0LL);
  if ( v31 )
    LODWORD(v31) = QuestReleaseEntity__getValueInt(v31, 0LL);
  if ( v33 )
    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v33, 0LL);
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
                                                     (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
            LODWORD(v49) = 0;
LABEL_42:
            ((void (__fastcall *)(long double))klass[1]._1.castClass)(v49);
            return;
          }
        }
      }
LABEL_43:
      sub_1C1AE30(gateNextIcon, method);
    }
LABEL_39:
    gateNextIcon = this->fields.shipPanelObj;
    if ( gateNextIcon )
    {
      gateNextIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gateNextIcon,
                                                   (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
      if ( gateNextIcon )
      {
        klass = gateNextIcon->klass;
        LODWORD(v49) = 1.0;
        goto LABEL_42;
      }
    }
    goto LABEL_43;
  }
  if ( (int)v27 >= ValueInt || oldQuestId < 1 )
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
                                               (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
  v37 = (UnityEngine_Object_o *)this->fields.goalAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v37, 0LL, 0LL) )
  {
    v40 = TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v38);
    this->fields.goalAnimObject = v40;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.goalAnimObject, (int64_t)v40, v41, v42, v43, v44, v45, v46);
  }
  v47 = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v39);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, v47, v48);
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

  if ( (byte_4BC64FD & 1) == 0 )
  {
    sub_1C1ABD4(&bool_TypeInfo, oldPoint);
    sub_1C1ABD4(&CondType_TypeInfo, v11);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v12);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v13);
    byte_4BC64FD = 1;
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
    if ( !byte_4BC46FE )
    {
      gateNextIcon = sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v15);
      byte_4BC46FE = 1;
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
      if ( !byte_4BC46FE )
      {
        gateNextIcon = sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v15);
        byte_4BC46FE = 1;
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
        if ( !byte_4BC46FE )
        {
          sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v15);
          byte_4BC46FE = 1;
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
                sub_1C1AE38(ValueByArray, v21);
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
        sub_1C1AE30(gateNextIcon, v15);
      }
    }
  }
  if ( !v16->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v16);
  if ( !byte_4BC27F4 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v15);
    byte_4BC27F4 = 1;
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
                              (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    if ( !gateNextIcon )
      goto LABEL_53;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gateNextIcon + 440LL))(
      gateNextIcon,
      *(_QWORD *)(*(_QWORD *)gateNextIcon + 448LL),
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
    sub_1C1AE30(this, 0LL);
  return n->fields.questId == this->fields.oldQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C1AE30(this, 0LL);
  return n->fields.questId == this->fields.progressQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C1AE30(this, 0LL);
  return n->fields.questId == this->fields.currentQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_0(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C1AE30(this, 0LL);
  return n->fields.questId == this->fields.oldQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C1AE30(this, 0LL);
  return n->fields.questId == this->fields.progressQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C1AE30(this, 0LL);
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
    sub_1C1AE30(this, method);
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
    sub_1C1AE30(gaugeBar, method);
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
    sub_1C1AE30(this, method);
  return (float)gaugeBar->fields.mWidth;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC6512 & 1) == 0 )
  {
    sub_1C1ABD4(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo, v1);
    byte_4BC6512 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventSubmarineStatusComponent___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, a);
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
    sub_1C1AE30(this, n);
  return n->fields.questId == _4__this->fields.currentQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___EndAnimation_b__1(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C1AE30(this, 0LL);
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
    sub_1C1AE30(0LL, data);
  _4__this->fields.eventAssetData = data;
  sub_1C1AB78(
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