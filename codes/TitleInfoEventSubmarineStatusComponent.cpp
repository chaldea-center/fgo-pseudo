void __fastcall TitleInfoEventSubmarineStatusComponent___cctor(const MethodInfo *method)
{
  TitleInfoEventSubmarineStatusComponent_c *v1; // x8

  if ( (byte_43502B7 & 1) == 0 )
  {
    sub_B70694(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    byte_43502B7 = 1;
  }
  TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields->ENTRY_ANIMATION_TIME = 0.3;
  TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields->PROGRESS_ANIMATION_TIME = 1.0;
  v1 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields->EXIT_ANIMATION_TIME = 0.5;
  v1->static_fields->GOAL_ANIMATION_TIME = 0.3;
  v1->static_fields->MAP_CHANGE_WAIT_TIME = 0.3;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___ctor(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_43502B6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_B70694(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    byte_43502B6 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  *(_QWORD *)&this->fields.minPoint = v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.minPoint, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0LL);
}


float __fastcall TitleInfoEventSubmarineStatusComponent__ConvertPointToRate(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t point,
        const MethodInfo *method)
{
  int32_t userPoint; // w8
  int32_t userOldPoint; // w9
  float result; // s0

  userPoint = this->fields.userPoint;
  if ( userPoint <= point )
    return 1.0;
  userOldPoint = this->fields.userOldPoint;
  result = 0.0;
  if ( userOldPoint < point )
    return (float)(point - userOldPoint) / (float)(userPoint - userOldPoint);
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
  struct UISprite_o *shipIcon; // x9
  int32_t userPoint; // w8
  float mWidth; // s3
  int32_t userOldPoint; // w9
  float v14; // s4
  float v15; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  *(UnityEngine_Vector3_o *)&v7 = TitleInfoEventSubmarineStatusComponent__get_BasePosition(
                                    this,
                                    *(const MethodInfo **)&point);
  shipIcon = this->fields.shipIcon;
  if ( !shipIcon )
    sub_B7076C(v5, v6);
  userPoint = this->fields.userPoint;
  mWidth = (float)shipIcon->fields.mWidth;
  if ( userPoint <= point )
  {
    v14 = 1.0;
  }
  else
  {
    userOldPoint = this->fields.userOldPoint;
    v14 = 0.0;
    if ( userOldPoint < point )
      v14 = (float)(point - userOldPoint) / (float)(userPoint - userOldPoint);
  }
  v15 = v7 - (float)(v14 * mWidth);
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v15;
  return result;
}


UnityEngine_GameObject_o *__fastcall TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  AssetData_o *eventAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  const MethodInfo *v5; // x2
  UnityEngine_GameObject_o *v6; // x21
  System_Int32_array **GoalAnimName; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_GameObject_o *v14; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v17; // x0

  if ( (byte_43502A5 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43502A5 = 1;
  }
  eventAssetData = this->fields.eventAssetData;
  if ( !eventAssetData )
    return 0LL;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               eventAssetData,
                                                                               *(System_String_o **)&this->fields.targetQuestId,
                                                                               (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
  {
    GoalAnimName = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v5);
    *(_QWORD *)&this->fields.isAfterTakingOver = GoalAnimName;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.isAfterTakingOver,
      GoalAnimName,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v14 )
      sub_B7076C(0LL, v15);
    v6 = v14;
    gameObject = UnityEngine_GameObject__get_gameObject(v14, 0LL);
    GameObjectExtensions__SafeSetParent_32503456(gameObject, (UnityEngine_GameObject_o *)this->fields.statusBg, 0LL);
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
  bool v11; // [xsp+0h] [xbp-30h] BYREF
  int32_t v12; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v13; // [xsp+8h] [xbp-28h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v13 = currentQuestId;
  v14 = userPoint;
  v12 = progressQuestId;
  v11 = isLastGoalPlayed;
  if ( (byte_43502A9 & 1) == 0 )
  {
    sub_B70694(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    byte_43502A9 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v14, 0LL);
  v6 = System_Int32__ToString((int32_t)&v13, 0LL);
  v7 = System_Int32__ToString((int32_t)&v12, 0LL);
  v9 = System_Boolean__ToString((bool)&v11, 0LL);
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  }
  return TitleInfoEventSubmarineStatusComponent__CreateSaveData_22330964(v5, v6, v7, v9, v8);
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__CreateSaveData_22330964(
        System_String_o *userPoint,
        System_String_o *currentQuestId,
        System_String_o *progressQuestId,
        System_String_o *isLastGoalPlayed,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_43502AA & 1) == 0 )
  {
    sub_B70694(&System_Text_StringBuilder_TypeInfo);
    sub_B70694(&StringLiteral_712/*","*/);
    byte_43502AA = 1;
  }
  v9 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v9, 0LL);
  if ( !v9 )
    sub_B7076C(v10, v11);
  System_Text_StringBuilder__Append_42601980(v9, userPoint, 0LL);
  System_Text_StringBuilder__Append_42601980(v9, (System_String_o *)StringLiteral_712/*","*/, 0LL);
  System_Text_StringBuilder__Append_42601980(v9, currentQuestId, 0LL);
  System_Text_StringBuilder__Append_42601980(v9, (System_String_o *)StringLiteral_712/*","*/, 0LL);
  System_Text_StringBuilder__Append_42601980(v9, progressQuestId, 0LL);
  System_Text_StringBuilder__Append_42601980(v9, (System_String_o *)StringLiteral_712/*","*/, 0LL);
  System_Text_StringBuilder__Append_42601980(v9, isLastGoalPlayed, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                              v9,
                              v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__DestroyGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  const MethodInfo *v4; // x2
  System_Int32_array **GoalAnimName; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  BattleServantConfConponent_o *p_isCompleatedCount; // x19
  UnityEngine_Object_o *klass; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_43502A7 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43502A7 = 1;
  }
  v3 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v3, 0LL, 0LL) )
  {
    GoalAnimName = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 0, v4);
    *(_QWORD *)&this->fields.isAfterTakingOver = GoalAnimName;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.isAfterTakingOver, GoalAnimName, v6, v7, v8, v9, v10, v11);
    Component_srcLineSprite = *(UnityEngine_GameObject_o **)&this->fields.isCompleatedCount;
    if ( !Component_srcLineSprite
      || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  Component_srcLineSprite,
                                                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
    {
      sub_B7076C(Component_srcLineSprite, v12);
    }
    p_isCompleatedCount = (BattleServantConfConponent_o *)&this->fields.isCompleatedCount;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Component_srcLineSprite, 0LL);
    klass = (UnityEngine_Object_o *)p_isCompleatedCount->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(klass, 0LL);
    p_isCompleatedCount->klass = 0LL;
    sub_B70630(p_isCompleatedCount, 0LL, v16, v17, v18, v19, v20, v21);
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  MissionNotifyManager_o *BeforeEventSubmarineSaveData_k__BackingField; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v14; // x2
  int onEndAnim_high; // w8
  int32_t progressQuestId; // w9
  TerminalPramsManager_c *v17; // x0
  EventSaveData_o *v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  TerminalPramsManager_c *v25; // x0
  BattleServantConfConponent_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v27; // x0
  System_String_array *ValueByArray; // x0
  System_String_array *v29; // x22
  int32_t v30; // w23
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v31; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v32; // x25
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v33; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v34; // x25
  const MethodInfo *v35; // x4
  struct AssetData_o *mapAssetData; // x8
  __int64 v37; // x9
  int32_t v38; // w21
  int v39; // w24
  __int64 v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_43502A1 & 1) == 0 )
  {
    sub_B70694(&EventSaveData_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_B70694(&Method_System_Predicate_QuestReleaseEntity___ctor__);
    sub_B70694(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_B70694(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__);
    sub_B70694(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__);
    sub_B70694(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo);
    byte_43502A1 = 1;
  }
  v3 = sub_B70764(TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo);
  TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___ctor(
    (TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_70;
  *(_QWORD *)(v3 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  if ( LOBYTE(this->fields.animClipName) )
  {
    LOBYTE(this->fields.animClipName) = 0;
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v12);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v14);
  }
  LOBYTE(this[1].klass) = 0;
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  BeforeEventSubmarineSaveData_k__BackingField = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
    goto LABEL_70;
  MissionNotifyManager__EndPause(BeforeEventSubmarineSaveData_k__BackingField, 0LL);
  onEndAnim_high = HIDWORD(this->fields.onEndAnim);
  progressQuestId = this->fields.progressQuestId;
  LOBYTE(this->fields.baseQuestReleaseEntList) = 0;
  LODWORD(this->fields.onEndAnim) = onEndAnim_high;
  *(_DWORD *)&this->fields.isLastGoalPlayed = progressQuestId;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434EFC4 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434EFC4 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  if ( !v17->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
  {
    v18 = (EventSaveData_o *)sub_B70764(EventSaveData_TypeInfo);
    EventSaveData___ctor(v18, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_434EFA1 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434EFA1 = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v25 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (BattleServantConfConponent_o *)&v25->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (BattleServantConfConponent_c *)v18;
    sub_B70630(p_BeforeEventSubmarineSaveData_k__BackingField, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
    v17 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v17);
  if ( !byte_434EFC4 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434EFC4 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventSubmarineSaveData_k__BackingField = (MissionNotifyManager_o *)v27->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
LABEL_70:
    sub_B7076C(BeforeEventSubmarineSaveData_k__BackingField, v5);
  ValueByArray = EventSaveData__GetValueByArray(
                   (EventSaveData_o *)BeforeEventSubmarineSaveData_k__BackingField,
                   0x2Cu,
                   0LL);
  v29 = ValueByArray;
  if ( !ValueByArray )
  {
    v30 = 0;
    goto LABEL_44;
  }
  if ( (int)ValueByArray->max_length < 2 )
  {
    v30 = 0;
    goto LABEL_43;
  }
  v30 = System_Int32__Parse(ValueByArray->m_Items[1], 0LL);
  if ( (int)v29->max_length < 3 )
  {
LABEL_43:
    LODWORD(v29) = 0;
    goto LABEL_44;
  }
  LODWORD(v29) = System_Int32__Parse(v29->m_Items[2], 0LL);
LABEL_44:
  v31 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v32 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v32,
    (Il2CppObject *)v3,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v31 )
    goto LABEL_70;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         v31,
         (System_Predicate_T__o *)v32,
         (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
  {
    v30 = this->fields.progressQuestId;
  }
  *(_DWORD *)(v3 + 24) = UnityEngine_Mathf__Max_41127884((int32_t)v29, this->fields.progressQuestId, 0LL);
  v33 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v34 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v34,
    (Il2CppObject *)v3,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v33 )
    goto LABEL_70;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         v33,
         (System_Predicate_T__o *)v34,
         (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
  {
    LODWORD(v29) = *(_DWORD *)(v3 + 24);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434EFC4 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434EFC4 = 1;
  }
  BeforeEventSubmarineSaveData_k__BackingField = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    BeforeEventSubmarineSaveData_k__BackingField = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
  }
  mapAssetData = this->fields.mapAssetData;
  if ( !mapAssetData )
    goto LABEL_70;
  v37 = *(_QWORD *)&BeforeEventSubmarineSaveData_k__BackingField[2].fields.mNoDispInfos[10].fields._size;
  if ( !v37 )
    goto LABEL_70;
  *(_DWORD *)(v37 + 16) = mapAssetData->fields.type;
  if ( !byte_434EFC4 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    BeforeEventSubmarineSaveData_k__BackingField = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    byte_434EFC4 = 1;
  }
  if ( (BeforeEventSubmarineSaveData_k__BackingField[3].fields.dispInfosIndex & 0x4000000) != 0
    && !BeforeEventSubmarineSaveData_k__BackingField[2].fields.dispInfosIndex )
  {
    j_il2cpp_runtime_class_init_0(BeforeEventSubmarineSaveData_k__BackingField);
    BeforeEventSubmarineSaveData_k__BackingField = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
  }
  v38 = HIDWORD(this->fields.onEndAnim);
  v39 = BYTE4(this->fields.goalAnimObject);
  v40 = *(_QWORD *)&BeforeEventSubmarineSaveData_k__BackingField[2].fields.mNoDispInfos[10].fields._size;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  }
  BeforeEventSubmarineSaveData_k__BackingField = (MissionNotifyManager_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData(
                                                                             v38,
                                                                             v30,
                                                                             (int32_t)v29,
                                                                             v39 != 0,
                                                                             v35);
  if ( !v40 )
    goto LABEL_70;
  *(_QWORD *)(v40 + 24) = BeforeEventSubmarineSaveData_k__BackingField;
  sub_B70630(
    (BattleServantConfConponent_o *)(v40 + 24),
    (System_Int32_array **)BeforeEventSubmarineSaveData_k__BackingField,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(0LL);
  ActionExtensions__Call((System_Action_o *)this->fields.nextPointTextFormat, 0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndExitAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventSubmarineStatusComponent_c *v3; // x0

  if ( (byte_435029B & 1) == 0 )
  {
    sub_B70694(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_B70694(&StringLiteral_10822/*"PlayEntryAnimation"*/);
    byte_435029B = 1;
  }
  TitleInfoEventSubmarineStatusComponent__DestroyGoalAnim(this, method);
  v3 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v3 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10822/*"PlayEntryAnimation"*/,
    v3->static_fields->MAP_CHANGE_WAIT_TIME,
    0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndProgressAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w0
  const MethodInfo *v4; // x1
  int32_t userOldPoint; // w8
  UnityEngine_Object_o *v6; // x21
  bool *p_isCompleatedCount; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  UnityEngine_GameObject_o *goalIconAnimPrefabName; // x0
  UnityEngine_Object_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  TitleInfoEventSubmarineStatusComponent_o *ProgressQuestReleaseEnt; // x21
  const MethodInfo *v20; // x2
  QuestReleaseEntity_o *CurrentQuestReleaseEnt; // x0
  const MethodInfo *v22; // x3
  QuestReleaseEntity_o *v23; // x1
  const MethodInfo *v24; // x1
  System_Int32_array **GoalAnimObject; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Object_o *v32; // x20
  const MethodInfo *v33; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v35; // x2
  TitleInfoEventSubmarineStatusComponent_c *v36; // x0

  if ( (byte_435029E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_B70694(&StringLiteral_6027/*"EndAnimation"*/);
    byte_435029E = 1;
  }
  v3 = UnityEngine_Mathf__Min_41127788(HIDWORD(this->fields.onEndAnim), this->fields.userPoint, 0LL);
  userOldPoint = this->fields.userOldPoint;
  LODWORD(this->fields.onEndAnim) = v3;
  if ( userOldPoint >= v3
    || this->fields.userPoint > v3
    || TitleInfoEventSubmarineStatusComponent__IsPlayingGoalAnim(this, v4) )
  {
    TitleInfoEventSubmarineStatusComponent__EndAnimation(this, v4);
    return;
  }
  v6 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_isCompleatedCount = &this->fields.isCompleatedCount;
  v8 = UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( v8 )
  {
    goalIconAnimPrefabName = *(UnityEngine_GameObject_o **)p_isCompleatedCount;
    if ( !*(_QWORD *)p_isCompleatedCount )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(goalIconAnimPrefabName, 0, 0LL);
    v12 = *(UnityEngine_Object_o **)p_isCompleatedCount;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(v12, 0LL);
    *(_QWORD *)p_isCompleatedCount = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.isCompleatedCount, 0LL, v13, v14, v15, v16, v17, v18);
  }
  ProgressQuestReleaseEnt = (TitleInfoEventSubmarineStatusComponent_o *)TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
                                                                          (TitleInfoEventSubmarineStatusComponent_o *)v8,
                                                                          *(System_Collections_Generic_List_QuestReleaseEntity__o **)&this->fields.isGoalAnimToLoop,
                                                                          v10);
  CurrentQuestReleaseEnt = TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
                             ProgressQuestReleaseEnt,
                             *(System_Collections_Generic_List_QuestReleaseEntity__o **)&this->fields.isGoalAnimToLoop,
                             v20);
  if ( CurrentQuestReleaseEnt )
    v23 = CurrentQuestReleaseEnt;
  else
    v23 = (QuestReleaseEntity_o *)ProgressQuestReleaseEnt;
  if ( TitleInfoEventSubmarineStatusComponent__IsAllClear(this, v23, HIDWORD(this->fields.onEndAnim), v22) )
  {
    goalIconAnimPrefabName = (UnityEngine_GameObject_o *)this->fields.goalIconAnimPrefabName;
    if ( !goalIconAnimPrefabName
      || (goalIconAnimPrefabName = UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)goalIconAnimPrefabName,
                                     0LL)) == 0LL )
    {
LABEL_33:
      sub_B7076C(goalIconAnimPrefabName, v9);
    }
    UnityEngine_GameObject__SetActive(goalIconAnimPrefabName, 0, 0LL);
  }
  goalIconAnimPrefabName = (UnityEngine_GameObject_o *)this->fields.gateGoalIcon;
  if ( !goalIconAnimPrefabName )
    goto LABEL_33;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))goalIconAnimPrefabName->klass[1]._1.castClass)(
    goalIconAnimPrefabName,
    goalIconAnimPrefabName->klass[1]._1.declaringType,
    0.0);
  LOBYTE(this->fields.animClipName) = 1;
  GoalAnimObject = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v24);
  *(_QWORD *)&this->fields.isCompleatedCount = GoalAnimObject;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.isCompleatedCount,
    GoalAnimObject,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v33);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v35);
  }
  v36 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v36 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6027/*"EndAnimation"*/,
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
  Il2CppObject *current; // x20
  int32_t klass; // w19
  int v8; // w19
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_43502AD & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_43502AD = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !baseList )
    sub_B7076C(this, baseList);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)baseList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v4 )
      break;
    current = v10.fields.current;
    if ( !v10.fields.current )
      sub_B7076C(v4, v5);
    klass = (int32_t)v10.fields.current[1].klass;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_24296868(klass, -1, 0, 0LL) )
    {
      v8 = 3;
      goto LABEL_13;
    }
  }
  current = 0LL;
  v8 = 1;
LABEL_13:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  if ( (unsigned int)(v8 + 1) >> 2 )
    return (QuestReleaseEntity_o *)current;
  else
    return 0LL;
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_43502AF & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_6299/*"EventUI/Prefabs/{0}"*/);
    byte_43502AF = 1;
  }
  v6 = eventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6, v2);
  return System_String__Format((System_String_o *)StringLiteral_6299/*"EventUI/Prefabs/{0}"*/, v4, 0LL);
}


UnityEngine_GameObject_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_43502B5 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    byte_43502B5 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.atlasList;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  return result;
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t animType,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_43502A4 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_16391/*"_loop"*/);
    sub_B70694(&StringLiteral_16415/*"_start"*/);
    sub_B70694(&StringLiteral_16389/*"_last"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_16378/*"_end"*/);
    byte_43502A4 = 1;
  }
  v5 = *(System_String_o **)&this->fields.targetQuestId;
  if ( BYTE4(this->fields.goalAnimObject) )
    v5 = System_String__Concat_44758168(v5, (System_String_o *)StringLiteral_16389/*"_last"*/, 0LL);
  switch ( animType )
  {
    case 3:
      v6 = &StringLiteral_16378/*"_end"*/;
      return System_String__Concat_44758168(v5, (System_String_o *)*v6, 0LL);
    case 2:
      v6 = &StringLiteral_16391/*"_loop"*/;
      return System_String__Concat_44758168(v5, (System_String_o *)*v6, 0LL);
    case 1:
      v6 = &StringLiteral_16415/*"_start"*/;
      return System_String__Concat_44758168(v5, (System_String_o *)*v6, 0LL);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


QuestReleaseEntity_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Collections_Generic_List_QuestReleaseEntity__o *baseList,
        const MethodInfo *method)
{
  Il2CppObject *current; // x23
  QuestReleaseEntity_o *v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t klass; // w20
  int v9; // w21
  QuestReleaseEntity_o *v10; // x20
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_43502AC & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_43502AC = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !baseList )
    sub_B7076C(this, baseList);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)baseList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  current = 0LL;
  while ( 1 )
  {
    v5 = (QuestReleaseEntity_o *)current;
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v12,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v6 )
      break;
    current = v12.fields.current;
    if ( !v12.fields.current )
      sub_B7076C(v6, v7);
    klass = (int32_t)v12.fields.current[1].klass;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_24296868(klass, -1, 0, 0LL) )
    {
      v9 = 3;
      v10 = v5;
      goto LABEL_13;
    }
  }
  v10 = 0LL;
  v9 = 1;
LABEL_13:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  if ( (unsigned int)(v9 + 1) >> 2 )
    return v10;
  return v5;
}


System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
        int32_t eventId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_QuestReleaseEntity__o *ListByTargetAndCondType; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x20
  __int64 QuestType; // x0
  __int64 v11; // x1
  struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__80_0; // x20
  Il2CppObject *v14; // x21
  struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_43502AB & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_QuestReleaseEntity___ctor__);
    sub_B70694(&System_Comparison_QuestReleaseEntity__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__);
    sub_B70694(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
    byte_43502AB = 1;
  }
  memset(&v24, 0, sizeof(v24));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_24;
  ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                              (QuestReleaseMaster_o *)Instance,
                              eventId,
                              85,
                              0LL);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !ListByTargetAndCondType )
    goto LABEL_24;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ListByTargetAndCondType,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v24,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v7 )
      break;
    current = v24.fields.current;
    if ( !v24.fields.current )
      sub_B7076C(v7, v8);
    QuestType = QuestMaster__GetQuestType((int32_t)v24.fields.current[1].klass, 0LL);
    if ( (_DWORD)QuestType == 2 )
    {
      if ( !v6 )
        sub_B7076C(QuestType, v11);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v6,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  Instance = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
    Instance = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
  }
  static_fields = (struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__80_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__80_0;
  if ( !_9__80_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__80_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__80_0,
      v14,
      Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_QuestReleaseEntity___ctor__);
    v15 = TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields;
    v15->__9__80_0 = (struct System_Comparison_QuestReleaseEntity__o *)_9__80_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v15->__9__80_0,
      (System_Int32_array **)_9__80_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v6 )
LABEL_24:
    sub_B7076C(Instance, v4);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v6,
    (System_Comparison_T__o *)_9__80_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v6;
}


int32_t __fastcall TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct AssetData_o *mapAssetData; // x8

  if ( (byte_43502A2 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43502A2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  mapAssetData = this->fields.mapAssetData;
  if ( !mapAssetData || !MasterData_WarQuestSelectionMaster )
LABEL_10:
    sub_B7076C(Instance, v4);
  return UserEventPointMaster__GetEventPointTotal(
           MasterData_WarQuestSelectionMaster,
           (int64_t)Instance,
           mapAssetData->fields.type,
           -1,
           0LL);
}


bool __fastcall TitleInfoEventSubmarineStatusComponent__IsAllClear(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *currentQuestReleaseEnt,
        int32_t nowPoint,
        const MethodInfo *method)
{
  MyRoomStateMaterial_DummyFolderState_o *v7; // x0
  MyRoomStateMaterial_DummyFolderState_o *v8; // x21
  int32_t ValueInt; // w0
  int32_t beforeSelectWarId; // w22
  int32_t v11; // w21
  _BOOL8 IsQuestClear_24296868; // x0
  __int64 v13; // x1

  if ( (byte_43502AE & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___);
    byte_43502AE = 1;
  }
  v7 = *(MyRoomStateMaterial_DummyFolderState_o **)&this->fields.isGoalAnimToLoop;
  if ( v7 )
  {
    v7 = System_Linq_Enumerable__LastOrDefault_MyRoomStateMaterial_DummyFolderState_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7,
           (const MethodInfo_1CBE9E0 *)Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___);
    if ( v7 )
    {
      v8 = v7;
      ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v7, 0LL);
      beforeSelectWarId = v8->fields.beforeSelectWarId;
      v11 = ValueInt;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_24296868 = CondType__IsQuestClear_24296868(beforeSelectWarId, -1, 0, 0LL);
      if ( !currentQuestReleaseEnt )
        sub_B7076C(IsQuestClear_24296868, v13);
      LOBYTE(v7) = IsQuestClear_24296868 & (v11 <= nowPoint) & (QuestReleaseEntity__getValueInt(
                                                                  currentQuestReleaseEnt,
                                                                  0LL) == v11);
    }
  }
  return (char)v7;
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
  UnityEngine_Object_o *v3; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0

  if ( (byte_43502A8 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43502A8 = 1;
  }
  v3 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v3, 0LL, 0LL) )
    return 0;
  Component_srcLineSprite = *(UnityEngine_GameObject_o **)&this->fields.isCompleatedCount;
  if ( !Component_srcLineSprite
    || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                Component_srcLineSprite,
                                                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
  {
    sub_B7076C(Component_srcLineSprite, v4);
  }
  return UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)Component_srcLineSprite, 0LL);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v24; // x21

  if ( (byte_43502B0 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_B70694(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__);
    sub_B70694(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo);
    byte_43502B0 = 1;
  }
  v7 = sub_B70764(TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo);
  TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0___ctor(
    (TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_o *)v7,
    0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  }
  EventUIAssetDataPath = TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(eventId, v22);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v7,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
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
  System_Collections_Generic_List_XWeaponTrail_Element__o *v5; // x0
  __int64 v6; // x2
  int i; // w22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x21
  __int64 v11; // x2
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v16; // [xsp+8h] [xbp-58h] BYREF
  int v17; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_43502B3 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_23884/*"{0:D2}"*/);
    sub_B70694(&StringLiteral_5467/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_43502B3 = 1;
  }
  if ( this->fields.atlasList )
  {
    v5 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.minPoint;
    if ( !v5 )
LABEL_18:
      sub_B7076C(v5, *(_QWORD *)&eventId);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v5,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v17 = i;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v6);
      v10 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23884/*"{0:D2}"*/, v9, 0LL);
      v16 = eventId;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v11);
      v13 = System_String__Format_44753704((System_String_o *)StringLiteral_5467/*"DownloadEventUIAtlas{0}{1}"*/, v12, v10, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v13,
                                                                 v14);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v5 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Object__op_Equality(
                                                                        GameObjectFromEventUIAssetData,
                                                                        0LL,
                                                                        0LL);
      if ( ((unsigned __int8)v5 & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_18;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
        break;
      v5 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.minPoint;
      if ( !v5 )
        goto LABEL_18;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v5,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
    }
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__OnDestroy(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct AssetData_o *mapAssetData; // x8
  const MethodInfo *v5; // x1

  mapAssetData = this->fields.mapAssetData;
  if ( !mapAssetData )
    sub_B7076C(this, method);
  TitleInfoEventSubmarineStatusComponent__ReleaseEventUIAssetData(this, mapAssetData->fields.type, v2);
  TitleInfoEventSubmarineStatusComponent__ReleaseLocalAtlas(this, v5);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__OnEnable(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( !System_String__IsNullOrEmpty(*(System_String_o **)&this->fields.isAfterTakingOver, 0LL) )
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, *(System_String_o **)&this->fields.isAfterTakingOver, v3);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Action_o *onEndAnim,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x1
  int32_t UserEventPoint; // w0
  const MethodInfo *v12; // x2
  int v13; // w8
  int32_t progressQuestId; // w9
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v15; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v16; // x22
  MissionNotifyManager_o *v17; // x0
  __int64 v18; // x1
  peRenderTexture_ChangeLayerObject_o *v19; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v20; // x22
  QuestReleaseEntity_o *v21; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x23
  peRenderTexture_ChangeLayerObject_o *v23; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v24; // x23
  QuestReleaseEntity_o *v25; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x24
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  QuestReleaseEntity_o *v33; // x23
  const MethodInfo *v34; // x1
  int v35; // w8

  if ( (byte_4350299 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_B70694(&Method_System_Predicate_QuestReleaseEntity___ctor__);
    sub_B70694(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B70694(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__);
    sub_B70694(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__);
    sub_B70694(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__);
    byte_4350299 = 1;
  }
  if ( LOBYTE(this[1].klass) )
  {
    this->fields.nextPointTextFormat = (struct System_String_o *)onEndAnim;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.nextPointTextFormat,
      (System_Int32_array **)onEndAnim,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    TitleInfoEventSubmarineStatusComponent__EndAnimation(this, v10);
    return;
  }
  UserEventPoint = TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(this, (const MethodInfo *)onEndAnim);
  v13 = *(_DWORD *)&this->fields.isLastGoalPlayed;
  progressQuestId = this->fields.progressQuestId;
  HIDWORD(this->fields.onEndAnim) = UserEventPoint;
  if ( v13 == progressQuestId && LODWORD(this->fields.onEndAnim) == UserEventPoint )
  {
    TitleInfoEventSubmarineStatusComponent__PlayLastMapAnimation(this, onEndAnim, v12);
    return;
  }
  v15 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v16,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v15 )
    goto LABEL_31;
  v19 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          v15,
          (System_Predicate_T__o *)v16,
          (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v20 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v21 = (QuestReleaseEntity_o *)v19;
  v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v22,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v20 )
    goto LABEL_31;
  v23 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          v20,
          (System_Predicate_T__o *)v22,
          (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v24 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v25 = (QuestReleaseEntity_o *)v23;
  v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v26,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v24 )
    goto LABEL_31;
  v33 = (QuestReleaseEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v24,
                                  (System_Predicate_T__o *)v26,
                                  (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v21 )
    LODWORD(v21) = QuestReleaseEntity__getValueInt(v21, 0LL);
  if ( v25 )
    LODWORD(v25) = QuestReleaseEntity__getValueInt(v25, 0LL);
  if ( v33 )
    LODWORD(v33) = QuestReleaseEntity__getValueInt(v33, 0LL);
  if ( (int)v21 > (int)v33 )
  {
    ActionExtensions__Call(onEndAnim, 0LL);
    return;
  }
  this->fields.nextPointTextFormat = (struct System_String_o *)onEndAnim;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.nextPointTextFormat,
    (System_Int32_array **)onEndAnim,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v17 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v17 )
LABEL_31:
    sub_B7076C(v17, v18);
  MissionNotifyManager__StartPause(v17, 0LL);
  if ( (int)v25 < (int)v33 )
  {
    v35 = *(_DWORD *)&this->fields.isLastGoalPlayed;
    if ( v35 )
    {
      if ( (int)v21 < (int)v33 && v35 >= 1 )
      {
        TitleInfoEventSubmarineStatusComponent__PlayExitAnimation(this, v34);
        return;
      }
    }
    else if ( this->fields.progressQuestId >= 1 )
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
  UnityEngine_GameObject_o *progressPointBg; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *gateGoalIcon; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v8; // x20
  TitleInfoEventSubmarineStatusComponent_c *v9; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  float ENTRY_ANIMATION_TIME; // w8
  EventDelegate_o *v12; // x22
  UnityEngine_Object_o *v13; // x20
  UnityEngine_GameObject_o *v14; // x19
  TitleInfoEventSubmarineStatusComponent_c *v15; // x0
  float v16; // w8
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_435029C & 1) == 0 )
  {
    sub_B70694(&EventDelegate_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_B70694(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_B70694(&StringLiteral_6039/*"EndEntryAnimation"*/);
    byte_435029C = 1;
  }
  progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  v17 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, this->fields.userOldPoint, v2);
  GameObjectExtensions__SetLocalPosition(progressPointBg, v17, 0LL);
  gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  if ( !gateGoalIcon )
    goto LABEL_35;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gateGoalIcon,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(Component_srcLineSprite, 0LL);
  }
  gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  if ( !gateGoalIcon )
    goto LABEL_35;
  gateGoalIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                               gateGoalIcon,
                                               (const MethodInfo_1D4AD2C *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !gateGoalIcon )
    goto LABEL_35;
  v8 = gateGoalIcon;
  gateGoalIcon[5].klass = (UnityEngine_GameObject_c *)0x3F80000000000000LL;
  v9 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v9 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  v10 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v8[2].fields.m_CachedPtr;
  ENTRY_ANIMATION_TIME = v9->static_fields->ENTRY_ANIMATION_TIME;
  LODWORD(v8[1].klass) = 3;
  *(float *)&v8[2].klass = ENTRY_ANIMATION_TIME;
  v12 = (EventDelegate_o *)sub_B70764(EventDelegate_TypeInfo);
  EventDelegate___ctor_29875464(v12, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6039/*"EndEntryAnimation"*/, 0LL);
  if ( !v10 )
    goto LABEL_35;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  UITweener__PlayForward((UITweener_o *)v8, 0LL);
  gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.gateGoalIcon;
  if ( !gateGoalIcon )
    goto LABEL_35;
  gateGoalIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateGoalIcon, 0LL);
  if ( !gateGoalIcon )
    goto LABEL_35;
  v13 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  gateGoalIcon,
                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(v13, 0LL);
  }
  gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.gateGoalIcon;
  if ( !gateGoalIcon
    || (gateGoalIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateGoalIcon, 0LL)) == 0LL
    || (gateGoalIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                     gateGoalIcon,
                                                     (const MethodInfo_1D4AD2C *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___)) == 0LL )
  {
LABEL_35:
    sub_B7076C(gateGoalIcon, v5);
  }
  gateGoalIcon[5].klass = (UnityEngine_GameObject_c *)0x3F80000000000000LL;
  v14 = gateGoalIcon;
  v15 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v15 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  v16 = v15->static_fields->ENTRY_ANIMATION_TIME;
  LODWORD(v14[1].klass) = 3;
  *(float *)&v14[2].klass = v16;
  UITweener__PlayForward((UITweener_o *)v14, 0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayExitAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *progressPointBg; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v5; // x20
  TitleInfoEventSubmarineStatusComponent_c *v6; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  float EXIT_ANIMATION_TIME; // w8
  EventDelegate_o *v9; // x22
  UnityEngine_Object_o *v10; // x20
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  System_Int32_array **GoalAnimObject; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_o *GoalAnimName; // x1
  const MethodInfo *v21; // x2

  if ( (byte_435029A & 1) == 0 )
  {
    sub_B70694(&EventDelegate_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_B70694(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_B70694(&StringLiteral_6049/*"EndExitAnimation"*/);
    byte_435029A = 1;
  }
  progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  if ( !progressPointBg )
    goto LABEL_24;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      progressPointBg,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(Component_srcLineSprite, 0LL);
  }
  progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  if ( !progressPointBg )
    goto LABEL_24;
  progressPointBg = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                  progressPointBg,
                                                  (const MethodInfo_1D4AD2C *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !progressPointBg )
    goto LABEL_24;
  v5 = progressPointBg;
  progressPointBg[5].klass = (UnityEngine_GameObject_c *)1065353216;
  v6 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v6 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  v7 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v5[2].fields.m_CachedPtr;
  EXIT_ANIMATION_TIME = v6->static_fields->EXIT_ANIMATION_TIME;
  LODWORD(v5[1].klass) = 3;
  *(float *)&v5[2].klass = EXIT_ANIMATION_TIME;
  v9 = (EventDelegate_o *)sub_B70764(EventDelegate_TypeInfo);
  EventDelegate___ctor_29875464(v9, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6049/*"EndExitAnimation"*/, 0LL);
  if ( !v7 )
LABEL_24:
    sub_B7076C(progressPointBg, method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v7,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  UITweener__PlayForward((UITweener_o *)v5, 0LL);
  v10 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v10, 0LL, 0LL) )
  {
    GoalAnimObject = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v11);
    *(_QWORD *)&this->fields.isCompleatedCount = GoalAnimObject;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.isCompleatedCount,
      GoalAnimObject,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 3, v12);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v21);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *animClipName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0

  if ( (byte_43502A6 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43502A6 = 1;
  }
  v5 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    *(_QWORD *)&this->fields.isAfterTakingOver = animClipName;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.isAfterTakingOver,
      (System_Int32_array **)animClipName,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    Component_srcLineSprite = *(UnityEngine_GameObject_o **)&this->fields.isCompleatedCount;
    if ( !Component_srcLineSprite
      || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  Component_srcLineSprite,
                                                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
    {
      sub_B7076C(Component_srcLineSprite, v12);
    }
    UnityEngine_Animation__Play_51542184(
      (UnityEngine_Animation_o *)Component_srcLineSprite,
      *(System_String_o **)&this->fields.isAfterTakingOver,
      0LL);
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayLastMapAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Action_o *onEndAnim,
        const MethodInfo *method)
{
  int32_t eventDetailEnt; // w21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Object_o *v12; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  System_Int32_array **GoalAnimObject; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v23; // x2
  TitleInfoEventSubmarineStatusComponent_c *v24; // x0

  if ( (byte_435029F & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_B70694(&StringLiteral_10827/*"PlayLastMapStartedAnimation"*/);
    byte_435029F = 1;
  }
  if ( BYTE4(this->fields.goalAnimObject) )
    goto LABEL_17;
  eventDetailEnt = (int32_t)this->fields.eventDetailEnt;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsOpen(1, eventDetailEnt, 0LL, 0, 0LL) )
  {
LABEL_17:
    ActionExtensions__Call(onEndAnim, 0LL);
  }
  else
  {
    this->fields.nextPointTextFormat = (struct System_String_o *)onEndAnim;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.nextPointTextFormat,
      (System_Int32_array **)onEndAnim,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v12 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v12, 0LL, 0LL) )
    {
      GoalAnimObject = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v13);
      *(_QWORD *)&this->fields.isCompleatedCount = GoalAnimObject;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.isCompleatedCount,
        GoalAnimObject,
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
    if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v24 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10827/*"PlayLastMapStartedAnimation"*/,
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

  if ( (byte_43502A0 & 1) == 0 )
  {
    sub_B70694(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_B70694(&StringLiteral_6027/*"EndAnimation"*/);
    byte_43502A0 = 1;
  }
  BYTE4(this->fields.goalAnimObject) = 1;
  LOBYTE(this->fields.animClipName) = 1;
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v2);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v5);
  v6 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v6 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6027/*"EndAnimation"*/,
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
  intptr_t v9; // s1
  int v10; // s2
  UnityEngine_GameObject_o *progressPointBg; // x0
  float v12; // s11
  intptr_t v13; // s12
  int v14; // s13
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v16; // x20
  TitleInfoEventSubmarineStatusComponent_c *v17; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  float PROGRESS_ANIMATION_TIME; // w8
  EventDelegate_o *v20; // x22
  TitleInfoEventSubmarineStatusComponent_c *v21; // x0
  int onEndAnim; // w9
  int v23; // w8
  struct UISprite_o *gateBg; // x10
  struct UISprite_o *v25; // x9
  struct System_String_o *goalIconAnimPrefabName; // x20
  int32_t onEndAnim_high; // w0
  int v28; // w9
  int v29; // w8
  int v30; // w9
  struct System_String_o *v31; // x10
  struct System_String_o *v32; // x9
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_435029D & 1) == 0 )
  {
    sub_B70694(&EventDelegate_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B70694(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_B70694(&StringLiteral_6064/*"EndProgressAnimation"*/);
    byte_435029D = 1;
  }
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)this->fields.progressPointBg, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  *(UnityEngine_Vector3_o *)&v8 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(
                                    this,
                                    HIDWORD(this->fields.onEndAnim),
                                    v6);
  if ( x <= v8 )
  {
    v21 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v21 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6064/*"EndProgressAnimation"*/,
      v21->static_fields->PROGRESS_ANIMATION_TIME,
      0LL);
  }
  else
  {
    progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
    if ( !progressPointBg )
      goto LABEL_42;
    v12 = v8;
    v13 = v9;
    v14 = v10;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        progressPointBg,
                                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(Component_srcLineSprite, 0LL);
    }
    progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
    if ( !progressPointBg )
      goto LABEL_42;
    progressPointBg = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                    progressPointBg,
                                                    (const MethodInfo_1D4AD2C *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    if ( !progressPointBg )
      goto LABEL_42;
    *(float *)&progressPointBg[5].klass = x;
    *((float *)&progressPointBg[5].klass + 1) = y;
    *(float *)&progressPointBg[5].monitor = z;
    *((float *)&progressPointBg[5].monitor + 1) = v12;
    progressPointBg[5].fields.m_CachedPtr = v13;
    *((_DWORD *)&progressPointBg[5].fields + 1) = v14;
    v16 = progressPointBg;
    v17 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v17 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    v18 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v16[2].fields.m_CachedPtr;
    PROGRESS_ANIMATION_TIME = v17->static_fields->PROGRESS_ANIMATION_TIME;
    LODWORD(v16[1].klass) = 3;
    *(float *)&v16[2].klass = PROGRESS_ANIMATION_TIME;
    v20 = (EventDelegate_o *)sub_B70764(EventDelegate_TypeInfo);
    EventDelegate___ctor_29875464(v20, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6064/*"EndProgressAnimation"*/, 0LL);
    if ( !v18 )
      goto LABEL_42;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v18,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    UITweener__PlayForward((UITweener_o *)v16, 0LL);
  }
  if ( !LOBYTE(this->fields.baseQuestReleaseEntList) )
  {
    onEndAnim = (int)this->fields.onEndAnim;
    v23 = HIDWORD(this->fields.onEndAnim) - onEndAnim;
    if ( v23 )
    {
      gateBg = this->fields.gateBg;
      LOBYTE(this->fields.baseQuestReleaseEntList) = 1;
      if ( !gateBg )
        goto LABEL_42;
      LODWORD(gateBg->fields.topAnchor) = onEndAnim;
      v25 = this->fields.gateBg;
      if ( !v25 )
        goto LABEL_42;
      HIDWORD(v25->fields.topAnchor) = v23;
      progressPointBg = (UnityEngine_GameObject_o *)this->fields.gateBg;
      if ( !progressPointBg )
        goto LABEL_42;
      UICounterLabel__PlayAnimation((UICounterLabel_o *)progressPointBg, 0LL);
    }
  }
  goalIconAnimPrefabName = this->fields.goalIconAnimPrefabName;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)goalIconAnimPrefabName, 0LL, 0LL) )
  {
    onEndAnim_high = HIDWORD(this->fields.onEndAnim);
    if ( LODWORD(this->fields.onEndAnim) != onEndAnim_high )
    {
      progressPointBg = (UnityEngine_GameObject_o *)UnityEngine_Mathf__Min_41127788(
                                                      onEndAnim_high,
                                                      this->fields.userPoint,
                                                      0LL);
      v28 = (int)this->fields.onEndAnim;
      v29 = (_DWORD)progressPointBg - v28;
      if ( (int)progressPointBg - v28 >= 1 )
      {
        v30 = this->fields.userPoint - v28;
        if ( v30 >= 1 )
        {
          v31 = this->fields.goalIconAnimPrefabName;
          if ( v31 )
          {
            LODWORD(v31[2].klass) = v30;
            v32 = this->fields.goalIconAnimPrefabName;
            if ( v32 )
            {
              HIDWORD(v32[2].klass) = -v29;
              progressPointBg = (UnityEngine_GameObject_o *)this->fields.goalIconAnimPrefabName;
              if ( progressPointBg )
              {
                UICounterLabel__PlayAnimation((UICounterLabel_o *)progressPointBg, 0LL);
                return;
              }
            }
          }
LABEL_42:
          sub_B7076C(progressPointBg, v7);
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

  if ( (byte_43502B1 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    byte_43502B1 = 1;
  }
  if ( this->fields.atlasList )
  {
    if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    }
    EventUIAssetDataPath = TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(
                             eventId,
                             *(const MethodInfo **)&eventId);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0LL);
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__ReleaseLocalAtlas(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_XWeaponTrail_Element__o *v3; // x0

  if ( (byte_43502B2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    byte_43502B2 = 1;
  }
  v3 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.minPoint;
  if ( !v3 )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    v3,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
}


bool __fastcall TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
        TitleInfoEventSubmarineStatusComponent_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v12; // x0
  __int64 v13; // x1
  bool v14; // w20
  int v15; // w21
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_43502B4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_43502B4 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  IsNullOrEmpty = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_String__IsNullOrEmpty(
                                                                                                   spriteName,
                                                                                                   0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(*(System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.minPoint, (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
        ((unsigned __int8)IsNullOrEmpty & 1) == 0) )
  {
    if ( !sprite )
      goto LABEL_20;
    UISprite__set_spriteName(sprite, 0LL, 0LL);
    return 1;
  }
  else
  {
    IsNullOrEmpty = *(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&this->fields.minPoint;
    if ( !IsNullOrEmpty )
      goto LABEL_20;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v17,
      IsNullOrEmpty,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v18 = v17;
    do
    {
      v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v18,
             (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
      if ( !v9 )
      {
        v14 = 0;
        v15 = 8;
        goto LABEL_16;
      }
      current = v18.fields.current;
      if ( !v18.fields.current )
        sub_B7076C(v9, v10);
      v12 = UIAtlas__GetSprite((UIAtlas_o *)v18.fields.current, spriteName, 0LL);
    }
    while ( !v12 );
    if ( !sprite )
      sub_B7076C(v12, v13);
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v14 = 1;
    v15 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v15 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B7076C(IsNullOrEmpty, v8);
    }
  }
  return v14;
}


void __fastcall TitleInfoEventSubmarineStatusComponent__Setup(
        TitleInfoEventSubmarineStatusComponent_o *this,
        EventDetailEntity_o *eventDetailEntity,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct AssetData_o **p_mapAssetData; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2
  System_Int32_array **GoalAnimName; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_o *areaIcon; // x0
  const MethodInfo *v27; // x1
  int32_t type; // w21
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
  UILabel_o *gaugeFrame; // x21
  UILabel_o *progressPointLabel; // x21
  int32_t v44; // w20
  System_Int32_array **QuestReleaseList; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
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
  int32_t v63; // w21
  System_String_o *v64; // x22
  __int64 v65; // x2
  Il2CppObject *v66; // x0
  System_String_o *v67; // x22
  System_String_o *v68; // x0
  System_Int32_array **v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct System_String_o *goalIconAnimPrefabName; // x22
  const MethodInfo *v77; // x3
  TitleInfoEventSubmarineStatusComponent_c *v78; // x0
  UICounterLabel_o *gateBg; // x20
  int32_t onEndAnim; // w21
  float PROGRESS_ANIMATION_TIME; // s8
  UnityEngine_GameObject_o *progressPointBg; // x20
  const MethodInfo *v83; // x2
  const MethodInfo *v84; // x1
  int32_t userPoint; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4350297 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__);
    sub_B70694(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_B70694(&StringLiteral_18803/*"event_goal"*/);
    sub_B70694(&StringLiteral_18827/*"event_progressicon"*/);
    sub_B70694(&StringLiteral_18825/*"event_progressgauge_front"*/);
    sub_B70694(&StringLiteral_5812/*"EVENT_SUBMARINE_NEXT_DESCRIPTION"*/);
    sub_B70694(&StringLiteral_5740/*"EVENT_POINT_COMMON_FORMAT"*/);
    sub_B70694(&StringLiteral_1243/*"94053407"*/);
    sub_B70694(&StringLiteral_5813/*"EVENT_SUBMARINE_NEXT_POINT"*/);
    sub_B70694(&StringLiteral_5820/*"EVENT_SUBMARINE_STATUS_TITLE"*/);
    sub_B70694(&StringLiteral_18868/*"event_status_point"*/);
    sub_B70694(&StringLiteral_18822/*"event_progress_point"*/);
    sub_B70694(&StringLiteral_18815/*"event_next"*/);
    sub_B70694(&StringLiteral_18824/*"event_progressgauge_back"*/);
    sub_B70694(&StringLiteral_5809/*"EVENT_SUBMARINE_GAUGE_CURRENT"*/);
    sub_B70694(&StringLiteral_18823/*"event_progressgauge"*/);
    sub_B70694(&StringLiteral_18826/*"event_progressgaugebg_80393"*/);
    byte_4350297 = 1;
  }
  this->fields.mapAssetData = (struct AssetData_o *)eventDetailEntity;
  p_mapAssetData = &this->fields.mapAssetData;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mapAssetData,
    (System_Int32_array **)eventDetailEntity,
    (System_String_array **)mapAssetData,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.eventAssetData = mapAssetData;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.eventAssetData,
    (System_Int32_array **)mapAssetData,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  LOBYTE(this->fields.baseQuestReleaseEntList) = 0;
  LOBYTE(this->fields.animClipName) = 0;
  GoalAnimName = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 0, v18);
  *(_QWORD *)&this->fields.isAfterTakingOver = GoalAnimName;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.isAfterTakingOver,
    GoalAnimName,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( !this->fields.mapAssetData )
    goto LABEL_54;
  type = this->fields.mapAssetData->fields.type;
  v29 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__, 0LL);
  TitleInfoEventSubmarineStatusComponent__LoadEventUIAssetData(this, type, v29, v30);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_32497536(gameObject, 62.0, 0.0, 0.0, 0LL);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.areaIcon,
    (System_String_o *)StringLiteral_18826/*"event_progressgaugebg_80393"*/,
    v32);
  areaIcon = (System_String_o *)this->fields.areaIcon;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.titleLabel,
    (System_String_o *)StringLiteral_1243/*"94053407"*/,
    v33);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeBg,
    (System_String_o *)StringLiteral_18823/*"event_progressgauge"*/,
    v34);
  areaIcon = (System_String_o *)this->fields.gaugeBg;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.shipIcon,
    (System_String_o *)StringLiteral_18825/*"event_progressgauge_front"*/,
    v35);
  areaIcon = (System_String_o *)this->fields.shipIcon;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeBar,
    (System_String_o *)StringLiteral_18824/*"event_progressgauge_back"*/,
    v36);
  areaIcon = (System_String_o *)this->fields.gaugeBar;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.shipPanelObj,
    (System_String_o *)StringLiteral_18827/*"event_progressicon"*/,
    v37);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.progressNameLabel,
    (System_String_o *)StringLiteral_18868/*"event_status_point"*/,
    v38);
  areaIcon = (System_String_o *)this->fields.progressNameLabel;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateGoalIcon,
    (System_String_o *)StringLiteral_18815/*"event_next"*/,
    v39);
  areaIcon = (System_String_o *)this->fields.gateGoalIcon;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateNextPointBg,
    (System_String_o *)StringLiteral_18803/*"event_goal"*/,
    v40);
  areaIcon = (System_String_o *)this->fields.gateNextPointBg;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.gateNextPointLabel,
    (System_String_o *)StringLiteral_18822/*"event_progress_point"*/,
    v41);
  areaIcon = (System_String_o *)this->fields.gateNextPointLabel;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  gaugeFrame = (UILabel_o *)this->fields.gaugeFrame;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  areaIcon = LocalizationManager__Get((System_String_o *)StringLiteral_5820/*"EVENT_SUBMARINE_STATUS_TITLE"*/, 0LL);
  if ( !gaugeFrame )
    goto LABEL_54;
  UILabel__set_text(gaugeFrame, areaIcon, 0LL);
  progressPointLabel = this->fields.progressPointLabel;
  areaIcon = LocalizationManager__Get((System_String_o *)StringLiteral_5809/*"EVENT_SUBMARINE_GAUGE_CURRENT"*/, 0LL);
  if ( !progressPointLabel )
    goto LABEL_54;
  UILabel__set_text(progressPointLabel, areaIcon, 0LL);
  if ( !*p_mapAssetData )
    goto LABEL_54;
  v44 = (*p_mapAssetData)->fields.type;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  }
  QuestReleaseList = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(v44, v27);
  *(_QWORD *)&this->fields.isGoalAnimToLoop = QuestReleaseList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.isGoalAnimToLoop,
    QuestReleaseList,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  ProgressQuestReleaseEnt = (TitleInfoEventSubmarineStatusComponent_o *)TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
                                                                          v52,
                                                                          *(System_Collections_Generic_List_QuestReleaseEntity__o **)&this->fields.isGoalAnimToLoop,
                                                                          v53);
  CurrentQuestReleaseEnt = TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
                             ProgressQuestReleaseEnt,
                             *(System_Collections_Generic_List_QuestReleaseEntity__o **)&this->fields.isGoalAnimToLoop,
                             v55);
  if ( CurrentQuestReleaseEnt )
    v58 = CurrentQuestReleaseEnt;
  else
    v58 = (QuestReleaseEntity_o *)ProgressQuestReleaseEnt;
  HIDWORD(this->fields.onEndAnim) = TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(this, v57);
  if ( v58 )
    questId = v58->fields.questId;
  else
    questId = 0;
  this->fields.progressQuestId = questId;
  if ( ProgressQuestReleaseEnt )
    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)ProgressQuestReleaseEnt, 0LL);
  else
    ValueInt = 0;
  this->fields.userOldPoint = ValueInt;
  if ( v58 )
    v62 = QuestReleaseEntity__getValueInt(v58, 0LL);
  else
    v62 = 0;
  this->fields.userPoint = v62;
  TitleInfoEventSubmarineStatusComponent__SetupOldData(
    this,
    (int32_t *)&this->fields.onEndAnim,
    (int32_t *)&this->fields.isLastGoalPlayed,
    (int32_t *)&this->fields.goalAnimObject,
    (bool *)&this->fields.goalAnimObject + 4,
    v59);
  v63 = UnityEngine_Mathf__Max_41127884(0, this->fields.userPoint - LODWORD(this->fields.onEndAnim), 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_5812/*"EVENT_SUBMARINE_NEXT_DESCRIPTION"*/, 0LL);
  userPoint = this->fields.userPoint;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userPoint, v65);
  v67 = System_String__Format(v64, v66, 0LL);
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_5813/*"EVENT_SUBMARINE_NEXT_POINT"*/, 0LL);
  v69 = (System_Int32_array **)System_String__Concat_44758168(v67, v68, 0LL);
  *(_QWORD *)&this->fields.currentQuestId = v69;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.currentQuestId, v69, v70, v71, v72, v73, v74, v75);
  areaIcon = (System_String_o *)TitleInfoEventSubmarineStatusComponent_TypeInfo;
  goalIconAnimPrefabName = this->fields.goalIconAnimPrefabName;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  }
  if ( !goalIconAnimPrefabName )
    goto LABEL_54;
  UICounterLabel__Setup(
    (UICounterLabel_o *)goalIconAnimPrefabName,
    v63,
    TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields->PROGRESS_ANIMATION_TIME,
    *(System_String_o **)&this->fields.currentQuestId,
    0,
    0LL);
  areaIcon = this->fields.goalIconAnimPrefabName;
  if ( !areaIcon )
    goto LABEL_54;
  UICounterLabel__SetCountLabel((UICounterLabel_o *)areaIcon, v63, 0LL);
  if ( TitleInfoEventSubmarineStatusComponent__IsAllClear(this, v58, (int32_t)this->fields.onEndAnim, v77) )
  {
    areaIcon = this->fields.goalIconAnimPrefabName;
    if ( !areaIcon )
      goto LABEL_54;
    areaIcon = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)areaIcon, 0LL);
    if ( !areaIcon )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)areaIcon, 0, 0LL);
  }
  v78 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  gateBg = (UICounterLabel_o *)this->fields.gateBg;
  onEndAnim = (int32_t)this->fields.onEndAnim;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v78 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  PROGRESS_ANIMATION_TIME = v78->static_fields->PROGRESS_ANIMATION_TIME;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  areaIcon = LocalizationManager__Get((System_String_o *)StringLiteral_5740/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  if ( !gateBg
    || (UICounterLabel__Setup(gateBg, onEndAnim, PROGRESS_ANIMATION_TIME, areaIcon, 0, 0LL),
        (areaIcon = (System_String_o *)this->fields.gateBg) == 0LL) )
  {
LABEL_54:
    sub_B7076C(areaIcon, v27);
  }
  UICounterLabel__SetCountLabel((UICounterLabel_o *)areaIcon, (int32_t)this->fields.onEndAnim, 0LL);
  progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  v86 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, (int32_t)this->fields.onEndAnim, v83);
  GameObjectExtensions__SetLocalPosition(progressPointBg, v86, 0LL);
  TitleInfoEventSubmarineStatusComponent__SetupAnimation(this, v84);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__SetupAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gateGoalIcon; // x0
  void (__fastcall *castClass)(float); // x8
  UnityEngine_Object_o *v5; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  System_Int32_array **GoalAnimObject; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v17; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x21
  peRenderTexture_ChangeLayerObject_o *v19; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v20; // x21
  QuestReleaseEntity_o *v21; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x22
  peRenderTexture_ChangeLayerObject_o *v23; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v24; // x22
  QuestReleaseEntity_o *v25; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x23
  QuestReleaseEntity_o *v27; // x22
  int32_t ValueInt; // w0
  int v29; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v31; // x20
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_o *v41; // x1
  const MethodInfo *v42; // x2
  long double v43; // q0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4350298 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Predicate_QuestReleaseEntity___ctor__);
    sub_B70694(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_B70694(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__);
    sub_B70694(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__);
    sub_B70694(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__);
    byte_4350298 = 1;
  }
  gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.gateGoalIcon;
  if ( !gateGoalIcon )
    goto LABEL_45;
  castClass = (void (__fastcall *)(float))gateGoalIcon->klass[1]._1.castClass;
  if ( SLODWORD(this->fields.onEndAnim) >= this->fields.userPoint )
  {
    castClass(0.0);
    v5 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
    {
      GoalAnimObject = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v6);
      *(_QWORD *)&this->fields.isCompleatedCount = GoalAnimObject;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.isCompleatedCount,
        GoalAnimObject,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v7);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v16);
  }
  else
  {
    castClass(1.0);
  }
  v17 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v18,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v17 )
    goto LABEL_45;
  v19 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          v17,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v20 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v21 = (QuestReleaseEntity_o *)v19;
  v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v22,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v20 )
    goto LABEL_45;
  v23 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          v20,
          (System_Predicate_T__o *)v22,
          (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v24 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v25 = (QuestReleaseEntity_o *)v23;
  v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v26,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v24 )
    goto LABEL_45;
  v27 = (QuestReleaseEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v24,
                                  (System_Predicate_T__o *)v26,
                                  (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v21 )
    LODWORD(v21) = QuestReleaseEntity__getValueInt(v21, 0LL);
  if ( v25 )
    LODWORD(v25) = QuestReleaseEntity__getValueInt(v25, 0LL);
  if ( v27 )
    ValueInt = QuestReleaseEntity__getValueInt(v27, 0LL);
  else
    ValueInt = 0;
  if ( (int)v25 >= ValueInt )
    goto LABEL_41;
  v29 = *(_DWORD *)&this->fields.isLastGoalPlayed;
  if ( !v29 )
  {
    if ( this->fields.progressQuestId >= 1 )
    {
      gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
      if ( gateGoalIcon )
      {
        gateGoalIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     gateGoalIcon,
                                                     (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
        if ( gateGoalIcon )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gateGoalIcon->klass[1]._1.castClass)(
            gateGoalIcon,
            gateGoalIcon->klass[1]._1.declaringType,
            0.0);
          gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.gateGoalIcon;
          if ( gateGoalIcon )
          {
            klass = gateGoalIcon->klass;
            LODWORD(v43) = 0;
LABEL_44:
            ((void (__fastcall *)(long double))klass[1]._1.castClass)(v43);
            return;
          }
        }
      }
LABEL_45:
      sub_B7076C(gateGoalIcon, method);
    }
LABEL_41:
    gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
    if ( gateGoalIcon )
    {
      gateGoalIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   gateGoalIcon,
                                                   (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
      if ( gateGoalIcon )
      {
        klass = gateGoalIcon->klass;
        LODWORD(v43) = 1.0;
        goto LABEL_44;
      }
    }
    goto LABEL_45;
  }
  if ( (int)v21 >= ValueInt || v29 < 1 )
    goto LABEL_41;
  gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.shipIcon;
  if ( !gateGoalIcon )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateGoalIcon, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)this->fields.progressPointBg, LocalPosition, 0LL);
  gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  if ( !gateGoalIcon )
    goto LABEL_45;
  gateGoalIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               gateGoalIcon,
                                               (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !gateGoalIcon )
    goto LABEL_45;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gateGoalIcon->klass[1]._1.castClass)(
    gateGoalIcon,
    gateGoalIcon->klass[1]._1.declaringType,
    1.0);
  gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.gateGoalIcon;
  if ( !gateGoalIcon )
    goto LABEL_45;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gateGoalIcon->klass[1]._1.castClass)(
    gateGoalIcon,
    gateGoalIcon->klass[1]._1.declaringType,
    0.0);
  v31 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v31, 0LL, 0LL) )
  {
    v34 = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v32);
    *(_QWORD *)&this->fields.isCompleatedCount = v34;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.isCompleatedCount, v34, v35, v36, v37, v38, v39, v40);
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
  __int64 gateGoalIcon; // x0
  __int64 v12; // x1
  TerminalPramsManager_c *v13; // x8
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x9
  struct AssetData_o *mapAssetData; // x10
  TerminalPramsManager_c *v16; // x0
  System_String_array *ValueByArray; // x0
  __int64 v18; // x8
  System_String_array *v19; // x23
  System_String_o *v20; // x20
  TerminalPramsManager_c *v21; // x0
  int32_t onEndAnim_high; // w8
  int32_t eventDetailEnt; // w20
  __int64 v24; // x0

  if ( (byte_43502A3 & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_43502A3 = 1;
  }
  *oldPoint = 0;
  *oldQuestId = 0;
  *progressQuestId = 0;
  *isLastGoalPlayed = 0;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  gateGoalIcon = TerminalPramsManager__CheckEventSubmarinePointSaveData(0LL);
  v13 = TerminalPramsManager_TypeInfo;
  if ( (gateGoalIcon & 1) != 0 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_434EFC4 )
    {
      gateGoalIcon = sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434EFC4 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    if ( v13->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v13);
      if ( !byte_434EFC4 )
      {
        gateGoalIcon = sub_B70694(&TerminalPramsManager_TypeInfo);
        byte_434EFC4 = 1;
      }
      v13 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v13 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventSubmarineSaveData_k__BackingField = v13->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !BeforeEventSubmarineSaveData_k__BackingField )
        goto LABEL_64;
      mapAssetData = this->fields.mapAssetData;
      if ( !mapAssetData )
        goto LABEL_64;
      if ( BeforeEventSubmarineSaveData_k__BackingField->fields.eventId == mapAssetData->fields.type )
      {
        if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v13);
        if ( !byte_434EFC4 )
        {
          sub_B70694(&TerminalPramsManager_TypeInfo);
          byte_434EFC4 = 1;
        }
        v16 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v16 = TerminalPramsManager_TypeInfo;
        }
        gateGoalIcon = (__int64)v16->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
        if ( gateGoalIcon )
        {
          ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)gateGoalIcon, 0x2Cu, 0LL);
          if ( ValueByArray )
          {
            v18 = *(_QWORD *)&ValueByArray->max_length;
            v19 = ValueByArray;
            if ( v18 )
            {
              if ( !(_DWORD)v18 )
              {
                v24 = sub_B70798(ValueByArray);
                sub_B70738(v24, 0LL);
              }
              *oldPoint = System_Int32__Parse(ValueByArray->m_Items[0], 0LL);
              if ( (int)v19->max_length >= 2 )
              {
                *oldQuestId = System_Int32__Parse(v19->m_Items[1], 0LL);
                if ( (int)v19->max_length >= 3 )
                {
                  *progressQuestId = System_Int32__Parse(v19->m_Items[2], 0LL);
                  if ( (int)v19->max_length >= 4 )
                  {
                    v20 = v19->m_Items[3];
                    if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !bool_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                    }
                    *isLastGoalPlayed = System_Boolean__Parse(v20, 0LL);
                  }
                }
              }
            }
          }
          return;
        }
LABEL_64:
        sub_B7076C(gateGoalIcon, v12);
      }
    }
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v13);
  if ( !byte_434DEB6 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEB6 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  if ( v21->static_fields->_QuestId_k__BackingField != HIDWORD(this->fields.eventDetailEnt) )
  {
    onEndAnim_high = HIDWORD(this->fields.onEndAnim);
    LOBYTE(this[1].klass) = 1;
    *oldPoint = onEndAnim_high;
    *oldQuestId = this->fields.progressQuestId;
    *progressQuestId = this->fields.progressQuestId;
    gateGoalIcon = (__int64)this->fields.gateGoalIcon;
    if ( !gateGoalIcon )
      goto LABEL_64;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gateGoalIcon + 440LL))(
      gateGoalIcon,
      *(_QWORD *)(*(_QWORD *)gateGoalIcon + 448LL),
      0.0);
    gateGoalIcon = (__int64)this->fields.progressPointBg;
    if ( !gateGoalIcon )
      goto LABEL_64;
    gateGoalIcon = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)gateGoalIcon,
                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    if ( !gateGoalIcon )
      goto LABEL_64;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gateGoalIcon + 440LL))(
      gateGoalIcon,
      *(_QWORD *)(*(_QWORD *)gateGoalIcon + 448LL),
      1.0);
    eventDetailEnt = (int32_t)this->fields.eventDetailEnt;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(1, eventDetailEnt, 0LL, 0, 0LL) )
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
    sub_B7076C(this, 0LL);
  return n->fields.questId == *(_DWORD *)&this->fields.isLastGoalPlayed;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B7076C(this, 0LL);
  return n->fields.questId == LODWORD(this->fields.goalAnimObject);
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B7076C(this, 0LL);
  return n->fields.questId == this->fields.progressQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_0(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B7076C(this, 0LL);
  return n->fields.questId == *(_DWORD *)&this->fields.isLastGoalPlayed;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B7076C(this, 0LL);
  return n->fields.questId == LODWORD(this->fields.goalAnimObject);
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B7076C(this, 0LL);
  return n->fields.questId == this->fields.progressQuestId;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___Setup_b__54_0(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct AssetData_o *mapAssetData; // x8

  mapAssetData = this->fields.mapAssetData;
  if ( !mapAssetData )
    sub_B7076C(this, method);
  TitleInfoEventSubmarineStatusComponent__LoadLocalAtlas(this, mapAssetData->fields.type, v2);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall TitleInfoEventSubmarineStatusComponent__get_BasePosition(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *shipIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float v5; // s0
  float v6; // s1
  float v7; // s2
  struct UISprite_o *v8; // x8
  float v9; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  shipIcon = (UnityEngine_Component_o *)this->fields.shipIcon;
  if ( !shipIcon
    || (gameObject = UnityEngine_Component__get_gameObject(shipIcon, 0LL),
        *(UnityEngine_Vector3_o *)&v5 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL),
        (v8 = this->fields.shipIcon) == 0LL) )
  {
    sub_B7076C(shipIcon, method);
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
  struct UISprite_o *shipIcon; // x8

  shipIcon = this->fields.shipIcon;
  if ( !shipIcon )
    sub_B7076C(this, method);
  return (float)shipIcon->fields.mWidth;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *static_fields; // x0

  if ( (byte_434F28A & 1) == 0 )
  {
    sub_B70694(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
    byte_434F28A = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TitleInfoEventSubmarineStatusComponent___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, a);
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
    sub_B7076C(this, n);
  return n->fields.questId == _4__this->fields.progressQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___EndAnimation_b__1(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B7076C(this, 0LL);
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
  struct TitleInfoEventSubmarineStatusComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, data);
  _4__this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)data;
  sub_B70630(&_4__this->fields.atlasList);
  ActionExtensions__Call(this->fields.callback, 0LL);
}