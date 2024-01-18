void __fastcall TitleInfoEventSubmarineStatusComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  TitleInfoEventSubmarineStatusComponent_c *v2; // x8

  if ( (byte_4186385 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v1);
    byte_4186385 = 1;
  }
  TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields->ENTRY_ANIMATION_TIME = 0.3;
  TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields->PROGRESS_ANIMATION_TIME = 1.0;
  v2 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields->EXIT_ANIMATION_TIME = 0.5;
  v2->static_fields->GOAL_ANIMATION_TIME = 0.3;
  v2->static_fields->MAP_CHANGE_WAIT_TIME = 0.3;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___ctor(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4186384 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_UIAtlas__TypeInfo, v3);
    byte_4186384 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  *(_QWORD *)&this->fields.minPoint = v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.minPoint, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
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
    sub_B2C434(v5, v6);
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
  __int64 v3; // x1
  __int64 v4; // x1
  AssetData_o *eventAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  const MethodInfo *v7; // x2
  UnityEngine_GameObject_o *v8; // x21
  System_Int32_array **GoalAnimName; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_GameObject_o *v16; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v19; // x0

  if ( (byte_4186373 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_4186373 = 1;
  }
  eventAssetData = this->fields.eventAssetData;
  if ( !eventAssetData )
    return 0LL;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               eventAssetData,
                                                                               *(System_String_o **)&this->fields.targetQuestId,
                                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
  {
    GoalAnimName = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v7);
    *(_QWORD *)&this->fields.isAfterTakingOver = GoalAnimName;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.isAfterTakingOver,
      GoalAnimName,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v16 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v16 )
      sub_B2C434(0LL, v17);
    v8 = v16;
    gameObject = UnityEngine_GameObject__get_gameObject(v16, 0LL);
    GameObjectExtensions__SafeSetParent_31331952(gameObject, (UnityEngine_GameObject_o *)this->fields.statusBg, 0LL);
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
  if ( (byte_4186377 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventSubmarineStatusComponent_TypeInfo, *(_QWORD *)&currentQuestId);
    byte_4186377 = 1;
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
  return TitleInfoEventSubmarineStatusComponent__CreateSaveData_22175660(v5, v6, v7, v9, v8);
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__CreateSaveData_22175660(
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

  if ( (byte_4186378 & 1) == 0 )
  {
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, currentQuestId);
    sub_B2C35C(&StringLiteral_699/*","*/, v9);
    byte_4186378 = 1;
  }
  v10 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v10, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  System_Text_StringBuilder__Append_42408700(v10, userPoint, 0LL);
  System_Text_StringBuilder__Append_42408700(v10, (System_String_o *)StringLiteral_699/*","*/, 0LL);
  System_Text_StringBuilder__Append_42408700(v10, currentQuestId, 0LL);
  System_Text_StringBuilder__Append_42408700(v10, (System_String_o *)StringLiteral_699/*","*/, 0LL);
  System_Text_StringBuilder__Append_42408700(v10, progressQuestId, 0LL);
  System_Text_StringBuilder__Append_42408700(v10, (System_String_o *)StringLiteral_699/*","*/, 0LL);
  System_Text_StringBuilder__Append_42408700(v10, isLastGoalPlayed, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                              v10,
                              v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__DestroyGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *v4; // x20
  const MethodInfo *v5; // x2
  System_Int32_array **GoalAnimName; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  BattleServantConfConponent_o *p_isCompleatedCount; // x19
  UnityEngine_Object_o *klass; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4186375 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4186375 = 1;
  }
  v4 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
  {
    GoalAnimName = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 0, v5);
    *(_QWORD *)&this->fields.isAfterTakingOver = GoalAnimName;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.isAfterTakingOver, GoalAnimName, v7, v8, v9, v10, v11, v12);
    Component_srcLineSprite = *(UnityEngine_GameObject_o **)&this->fields.isCompleatedCount;
    if ( !Component_srcLineSprite
      || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  Component_srcLineSprite,
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
    {
      sub_B2C434(Component_srcLineSprite, v13);
    }
    p_isCompleatedCount = (BattleServantConfConponent_o *)&this->fields.isCompleatedCount;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Component_srcLineSprite, 0LL);
    klass = (UnityEngine_Object_o *)p_isCompleatedCount->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(klass, 0LL);
    p_isCompleatedCount->klass = 0LL;
    sub_B2C2F8(p_isCompleatedCount, 0LL, v17, v18, v19, v20, v21, v22);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  MissionNotifyManager_o *BeforeEventSubmarineSaveData_k__BackingField; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v24; // x2
  int onEndAnim_high; // w8
  int32_t progressQuestId; // w9
  TerminalPramsManager_c *v27; // x0
  EventSaveData_o *v28; // x22
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  TerminalPramsManager_c *v36; // x0
  BattleServantConfConponent_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v38; // x0
  System_String_array *ValueByArray; // x0
  System_String_array *v40; // x22
  int32_t v41; // w23
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v42; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v43; // x25
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v44; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v45; // x25
  const MethodInfo *v46; // x4
  struct AssetData_o *mapAssetData; // x8
  _DWORD *monitor; // x9
  int32_t v49; // w21
  int v50; // w24
  char *v51; // x20
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7

  if ( (byte_418636F & 1) == 0 )
  {
    sub_B2C35C(&EventSaveData_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v3);
    sub_B2C35C(&Method_System_Predicate_QuestReleaseEntity___ctor__, v4);
    sub_B2C35C(&System_Predicate_QuestReleaseEntity__TypeInfo, v5);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v7);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    sub_B2C35C(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v9);
    sub_B2C35C(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__, v10);
    sub_B2C35C(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__, v11);
    sub_B2C35C(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo, v12);
    byte_418636F = 1;
  }
  v13 = sub_B2C42C(TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo);
  TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___ctor(
    (TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_70;
  *(_QWORD *)(v13 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  if ( LOBYTE(this->fields.animClipName) )
  {
    LOBYTE(this->fields.animClipName) = 0;
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v22);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v24);
  }
  LOBYTE(this[1].klass) = 0;
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  BeforeEventSubmarineSaveData_k__BackingField = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  if ( !byte_418472F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v15);
    byte_418472F = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  if ( !v27->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
  {
    v28 = (EventSaveData_o *)sub_B2C42C(EventSaveData_TypeInfo);
    EventSaveData___ctor(v28, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4184707 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v29);
      byte_4184707 = 1;
    }
    v36 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v36 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (BattleServantConfConponent_o *)&v36->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (BattleServantConfConponent_c *)v28;
    sub_B2C2F8(p_BeforeEventSubmarineSaveData_k__BackingField, (System_Int32_array **)v28, v30, v31, v32, v33, v34, v35);
    v27 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v27);
  if ( !byte_418472F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v15);
    byte_418472F = 1;
  }
  v38 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v38 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventSubmarineSaveData_k__BackingField = (MissionNotifyManager_o *)v38->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
LABEL_70:
    sub_B2C434(BeforeEventSubmarineSaveData_k__BackingField, v15);
  ValueByArray = EventSaveData__GetValueByArray(
                   (EventSaveData_o *)BeforeEventSubmarineSaveData_k__BackingField,
                   0x2Cu,
                   0LL);
  v40 = ValueByArray;
  if ( !ValueByArray )
  {
    v41 = 0;
    goto LABEL_44;
  }
  if ( (int)ValueByArray->max_length < 2 )
  {
    v41 = 0;
    goto LABEL_43;
  }
  v41 = System_Int32__Parse(ValueByArray->m_Items[1], 0LL);
  if ( (int)v40->max_length < 3 )
  {
LABEL_43:
    LODWORD(v40) = 0;
    goto LABEL_44;
  }
  LODWORD(v40) = System_Int32__Parse(v40->m_Items[2], 0LL);
LABEL_44:
  v42 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v43 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v43,
    (Il2CppObject *)v13,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v42 )
    goto LABEL_70;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         v42,
         (System_Predicate_T__o *)v43,
         (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
  {
    v41 = this->fields.progressQuestId;
  }
  *(_DWORD *)(v13 + 24) = UnityEngine_Mathf__Max_40694800((int32_t)v40, this->fields.progressQuestId, 0LL);
  v44 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v45 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v45,
    (Il2CppObject *)v13,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v44 )
    goto LABEL_70;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         v44,
         (System_Predicate_T__o *)v45,
         (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
  {
    LODWORD(v40) = *(_DWORD *)(v13 + 24);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_418472F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v15);
    byte_418472F = 1;
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
  monitor = BeforeEventSubmarineSaveData_k__BackingField[2].fields.mNoDispInfos[10].monitor;
  if ( !monitor )
    goto LABEL_70;
  monitor[4] = mapAssetData->fields.type;
  if ( !byte_418472F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v15);
    BeforeEventSubmarineSaveData_k__BackingField = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    byte_418472F = 1;
  }
  if ( (BeforeEventSubmarineSaveData_k__BackingField[3].fields.dispInfosIndex & 0x4000000) != 0
    && !BeforeEventSubmarineSaveData_k__BackingField[2].fields.dispInfosIndex )
  {
    j_il2cpp_runtime_class_init_0(BeforeEventSubmarineSaveData_k__BackingField);
    BeforeEventSubmarineSaveData_k__BackingField = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
  }
  v49 = HIDWORD(this->fields.onEndAnim);
  v50 = BYTE4(this->fields.goalAnimObject);
  v51 = (char *)BeforeEventSubmarineSaveData_k__BackingField[2].fields.mNoDispInfos[10].monitor;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  }
  BeforeEventSubmarineSaveData_k__BackingField = (MissionNotifyManager_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData(
                                                                             v49,
                                                                             v41,
                                                                             (int32_t)v40,
                                                                             v50 != 0,
                                                                             v46);
  if ( !v51 )
    goto LABEL_70;
  *((_QWORD *)v51 + 3) = BeforeEventSubmarineSaveData_k__BackingField;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v51 + 24),
    (System_Int32_array **)BeforeEventSubmarineSaveData_k__BackingField,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(0LL);
  ActionExtensions__Call((System_Action_o *)this->fields.nextPointTextFormat, 0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndExitAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoEventSubmarineStatusComponent_c *v4; // x0

  if ( (byte_4186369 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventSubmarineStatusComponent_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10675/*"PlayEntryAnimation"*/, v3);
    byte_4186369 = 1;
  }
  TitleInfoEventSubmarineStatusComponent__DestroyGoalAnim(this, method);
  v4 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v4 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10675/*"PlayEntryAnimation"*/,
    v4->static_fields->MAP_CHANGE_WAIT_TIME,
    0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndProgressAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t v5; // w0
  const MethodInfo *v6; // x1
  int32_t userOldPoint; // w8
  UnityEngine_Object_o *v8; // x21
  bool *p_isCompleatedCount; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  UnityEngine_GameObject_o *goalIconAnimPrefabName; // x0
  UnityEngine_Object_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  TitleInfoEventSubmarineStatusComponent_o *ProgressQuestReleaseEnt; // x21
  const MethodInfo *v22; // x2
  QuestReleaseEntity_o *CurrentQuestReleaseEnt; // x0
  const MethodInfo *v24; // x3
  QuestReleaseEntity_o *v25; // x1
  const MethodInfo *v26; // x1
  System_Int32_array **GoalAnimObject; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Object_o *v34; // x20
  const MethodInfo *v35; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v37; // x2
  TitleInfoEventSubmarineStatusComponent_c *v38; // x0

  if ( (byte_418636C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_5935/*"EndAnimation"*/, v4);
    byte_418636C = 1;
  }
  v5 = UnityEngine_Mathf__Min_40694704(HIDWORD(this->fields.onEndAnim), this->fields.userPoint, 0LL);
  userOldPoint = this->fields.userOldPoint;
  LODWORD(this->fields.onEndAnim) = v5;
  if ( userOldPoint >= v5
    || this->fields.userPoint > v5
    || TitleInfoEventSubmarineStatusComponent__IsPlayingGoalAnim(this, v6) )
  {
    TitleInfoEventSubmarineStatusComponent__EndAnimation(this, v6);
    return;
  }
  v8 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_isCompleatedCount = &this->fields.isCompleatedCount;
  v10 = UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( v10 )
  {
    goalIconAnimPrefabName = *(UnityEngine_GameObject_o **)p_isCompleatedCount;
    if ( !*(_QWORD *)p_isCompleatedCount )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(goalIconAnimPrefabName, 0, 0LL);
    v14 = *(UnityEngine_Object_o **)p_isCompleatedCount;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v14, 0LL);
    *(_QWORD *)p_isCompleatedCount = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.isCompleatedCount, 0LL, v15, v16, v17, v18, v19, v20);
  }
  ProgressQuestReleaseEnt = (TitleInfoEventSubmarineStatusComponent_o *)TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
                                                                          (TitleInfoEventSubmarineStatusComponent_o *)v10,
                                                                          *(System_Collections_Generic_List_QuestReleaseEntity__o **)&this->fields.isGoalAnimToLoop,
                                                                          v12);
  CurrentQuestReleaseEnt = TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
                             ProgressQuestReleaseEnt,
                             *(System_Collections_Generic_List_QuestReleaseEntity__o **)&this->fields.isGoalAnimToLoop,
                             v22);
  if ( CurrentQuestReleaseEnt )
    v25 = CurrentQuestReleaseEnt;
  else
    v25 = (QuestReleaseEntity_o *)ProgressQuestReleaseEnt;
  if ( TitleInfoEventSubmarineStatusComponent__IsAllClear(this, v25, HIDWORD(this->fields.onEndAnim), v24) )
  {
    goalIconAnimPrefabName = (UnityEngine_GameObject_o *)this->fields.goalIconAnimPrefabName;
    if ( !goalIconAnimPrefabName
      || (goalIconAnimPrefabName = UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)goalIconAnimPrefabName,
                                     0LL)) == 0LL )
    {
LABEL_33:
      sub_B2C434(goalIconAnimPrefabName, v11);
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
  GoalAnimObject = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v26);
  *(_QWORD *)&this->fields.isCompleatedCount = GoalAnimObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.isCompleatedCount,
    GoalAnimObject,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v35);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v37);
  }
  v38 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v38 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5935/*"EndAnimation"*/,
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
  Il2CppObject *current; // x20
  int32_t klass; // w19
  int v12; // w19
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418637B & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, baseList);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v6);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_B2C35C(
                                                         &Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__,
                                                         v7);
    byte_418637B = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !baseList )
    sub_B2C434(this, baseList);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)baseList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v14,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v8 )
      break;
    current = v14.fields.current;
    if ( !v14.fields.current )
      sub_B2C434(v8, v9);
    klass = (int32_t)v14.fields.current[1].klass;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_25746984(klass, -1, 0, 0LL) )
    {
      v12 = 3;
      goto LABEL_13;
    }
  }
  current = 0LL;
  v12 = 1;
LABEL_13:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  if ( (unsigned int)(v12 + 1) >> 2 )
    return (QuestReleaseEntity_o *)current;
  else
    return 0LL;
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418637D & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6207/*"EventUI/Prefabs/{0}"*/, v3);
    byte_418637D = 1;
  }
  v6 = eventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format((System_String_o *)StringLiteral_6207/*"EventUI/Prefabs/{0}"*/, v4, 0LL);
}


UnityEngine_GameObject_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4186383 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, name);
    byte_4186383 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.atlasList;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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
  System_String_o *v9; // x0
  __int64 *v10; // x8

  if ( (byte_4186372 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16154/*"_loop"*/, *(_QWORD *)&animType);
    sub_B2C35C(&StringLiteral_16178/*"_start"*/, v5);
    sub_B2C35C(&StringLiteral_16152/*"_last"*/, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    sub_B2C35C(&StringLiteral_16141/*"_end"*/, v8);
    byte_4186372 = 1;
  }
  v9 = *(System_String_o **)&this->fields.targetQuestId;
  if ( BYTE4(this->fields.goalAnimObject) )
    v9 = System_String__Concat_44305532(v9, (System_String_o *)StringLiteral_16152/*"_last"*/, 0LL);
  switch ( animType )
  {
    case 3:
      v10 = &StringLiteral_16141/*"_end"*/;
      return System_String__Concat_44305532(v9, (System_String_o *)*v10, 0LL);
    case 2:
      v10 = &StringLiteral_16154/*"_loop"*/;
      return System_String__Concat_44305532(v9, (System_String_o *)*v10, 0LL);
    case 1:
      v10 = &StringLiteral_16178/*"_start"*/;
      return System_String__Concat_44305532(v9, (System_String_o *)*v10, 0LL);
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
  Il2CppObject *current; // x23
  QuestReleaseEntity_o *v9; // x19
  _BOOL8 v10; // x0
  __int64 v11; // x1
  int32_t klass; // w20
  int v13; // w21
  QuestReleaseEntity_o *v14; // x20
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418637A & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, baseList);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v6);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_B2C35C(
                                                         &Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__,
                                                         v7);
    byte_418637A = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !baseList )
    sub_B2C434(this, baseList);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)baseList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  current = 0LL;
  while ( 1 )
  {
    v9 = (QuestReleaseEntity_o *)current;
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v16.fields.current;
    if ( !v16.fields.current )
      sub_B2C434(v10, v11);
    klass = (int32_t)v16.fields.current[1].klass;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_25746984(klass, -1, 0, 0LL) )
    {
      v13 = 3;
      v14 = v9;
      goto LABEL_13;
    }
  }
  v14 = 0LL;
  v13 = 1;
LABEL_13:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  if ( (unsigned int)(v13 + 1) >> 2 )
    return v14;
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
  __int64 v15; // x1
  void *Instance; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_QuestReleaseEntity__o *ListByTargetAndCondType; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x20
  __int64 QuestType; // x0
  __int64 v24; // x1
  struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__80_0; // x20
  Il2CppObject *v27; // x21
  struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4186379 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_QuestReleaseEntity___ctor__, method);
    sub_B2C35C(&System_Comparison_QuestReleaseEntity__TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__, v14);
    sub_B2C35C(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo, v15);
    byte_4186379 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_24;
  ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                              (QuestReleaseMaster_o *)Instance,
                              eventId,
                              85,
                              0LL);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !ListByTargetAndCondType )
    goto LABEL_24;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ListByTargetAndCondType,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v20 )
      break;
    current = v37.fields.current;
    if ( !v37.fields.current )
      sub_B2C434(v20, v21);
    QuestType = QuestMaster__GetQuestType((int32_t)v37.fields.current[1].klass, 0LL);
    if ( (_DWORD)QuestType == 2 )
    {
      if ( !v19 )
        sub_B2C434(QuestType, v24);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v19,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
    v27 = (Il2CppObject *)static_fields->__9;
    _9__80_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__80_0,
      v27,
      Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_QuestReleaseEntity___ctor__);
    v28 = TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields;
    v28->__9__80_0 = (struct System_Comparison_QuestReleaseEntity__o *)_9__80_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v28->__9__80_0,
      (System_Int32_array **)_9__80_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( !v19 )
LABEL_24:
    sub_B2C434(Instance, v17);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v19,
    (System_Comparison_T__o *)_9__80_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v19;
}


int32_t __fastcall TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct AssetData_o *mapAssetData; // x8

  if ( (byte_4186370 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventPointMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4186370 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  mapAssetData = this->fields.mapAssetData;
  if ( !mapAssetData || !MasterData_WarQuestSelectionMaster )
LABEL_10:
    sub_B2C434(Instance, v6);
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
  __int64 v7; // x1
  MyRoomStateMaterial_DummyFolderState_o *v8; // x0
  MyRoomStateMaterial_DummyFolderState_o *v9; // x21
  int32_t ValueInt; // w0
  int32_t beforeSelectWarId; // w22
  int32_t v12; // w21
  _BOOL8 IsQuestClear_25746984; // x0
  __int64 v14; // x1

  if ( (byte_418637C & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, currentQuestReleaseEnt);
    sub_B2C35C(&Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___, v7);
    byte_418637C = 1;
  }
  v8 = *(MyRoomStateMaterial_DummyFolderState_o **)&this->fields.isGoalAnimToLoop;
  if ( v8 )
  {
    v8 = System_Linq_Enumerable__LastOrDefault_MyRoomStateMaterial_DummyFolderState_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v8,
           (const MethodInfo_1A924EC *)Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___);
    if ( v8 )
    {
      v9 = v8;
      ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v8, 0LL);
      beforeSelectWarId = v9->fields.beforeSelectWarId;
      v12 = ValueInt;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_25746984 = CondType__IsQuestClear_25746984(beforeSelectWarId, -1, 0, 0LL);
      if ( !currentQuestReleaseEnt )
        sub_B2C434(IsQuestClear_25746984, v14);
      LOBYTE(v8) = IsQuestClear_25746984 & (v12 <= nowPoint) & (QuestReleaseEntity__getValueInt(
                                                                  currentQuestReleaseEnt,
                                                                  0LL) == v12);
    }
  }
  return (char)v8;
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
  UnityEngine_Object_o *v4; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0

  if ( (byte_4186376 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4186376 = 1;
  }
  v4 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
    return 0;
  Component_srcLineSprite = *(UnityEngine_GameObject_o **)&this->fields.isCompleatedCount;
  if ( !Component_srcLineSprite
    || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                Component_srcLineSprite,
                                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
  {
    sub_B2C434(Component_srcLineSprite, v5);
  }
  return UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)Component_srcLineSprite, 0LL);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v28; // x21

  if ( (byte_418637E & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B2C35C(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v8);
    sub_B2C35C(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__, v9);
    sub_B2C35C(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo, v10);
    byte_418637E = 1;
  }
  v11 = sub_B2C42C(TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo);
  TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0___ctor(
    (TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_o *)v11,
    0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)callback, v20, v21, v22, v23, v24, v25);
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  }
  EventUIAssetDataPath = TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(eventId, v26);
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)v11,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v11; // x0
  int i; // w22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v20; // [xsp+8h] [xbp-58h] BYREF
  int v21; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4186381 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_23501/*"{0:D2}"*/, v9);
    sub_B2C35C(&StringLiteral_5380/*"DownloadEventUIAtlas{0}{1}"*/, v10);
    byte_4186381 = 1;
  }
  if ( this->fields.atlasList )
  {
    v11 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.minPoint;
    if ( !v11 )
LABEL_18:
      sub_B2C434(v11, *(_QWORD *)&eventId);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v11,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v21 = i;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v15 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23501/*"{0:D2}"*/, v14, 0LL);
      v20 = eventId;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
      v17 = System_String__Format_44301068((System_String_o *)StringLiteral_5380/*"DownloadEventUIAtlas{0}{1}"*/, v16, v15, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v17,
                                                                 v18);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v11 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Object__op_Equality(
                                                                         GameObjectFromEventUIAssetData,
                                                                         0LL,
                                                                         0LL);
      if ( ((unsigned __int8)v11 & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_18;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
        break;
      v11 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.minPoint;
      if ( !v11 )
        goto LABEL_18;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v11,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
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
    sub_B2C434(this, method);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  const MethodInfo *v17; // x1
  int32_t UserEventPoint; // w0
  const MethodInfo *v19; // x2
  int v20; // w8
  int32_t progressQuestId; // w9
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v22; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v23; // x22
  MissionNotifyManager_o *v24; // x0
  __int64 v25; // x1
  peRenderTexture_ChangeLayerObject_o *v26; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v27; // x22
  QuestReleaseEntity_o *v28; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v29; // x23
  peRenderTexture_ChangeLayerObject_o *v30; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v31; // x23
  QuestReleaseEntity_o *v32; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v33; // x24
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  QuestReleaseEntity_o *v40; // x23
  const MethodInfo *v41; // x1
  int v42; // w8

  if ( (byte_4186367 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, onEndAnim);
    sub_B2C35C(&Method_System_Predicate_QuestReleaseEntity___ctor__, v10);
    sub_B2C35C(&System_Predicate_QuestReleaseEntity__TypeInfo, v11);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v12);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v13);
    sub_B2C35C(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__, v14);
    sub_B2C35C(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__, v15);
    sub_B2C35C(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__, v16);
    byte_4186367 = 1;
  }
  if ( LOBYTE(this[1].klass) )
  {
    this->fields.nextPointTextFormat = (struct System_String_o *)onEndAnim;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.nextPointTextFormat,
      (System_Int32_array **)onEndAnim,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    TitleInfoEventSubmarineStatusComponent__EndAnimation(this, v17);
    return;
  }
  UserEventPoint = TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(this, (const MethodInfo *)onEndAnim);
  v20 = *(_DWORD *)&this->fields.isLastGoalPlayed;
  progressQuestId = this->fields.progressQuestId;
  HIDWORD(this->fields.onEndAnim) = UserEventPoint;
  if ( v20 == progressQuestId && LODWORD(this->fields.onEndAnim) == UserEventPoint )
  {
    TitleInfoEventSubmarineStatusComponent__PlayLastMapAnimation(this, onEndAnim, v19);
    return;
  }
  v22 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v23 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v23,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v22 )
    goto LABEL_31;
  v26 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          v22,
          (System_Predicate_T__o *)v23,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v27 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v28 = (QuestReleaseEntity_o *)v26;
  v29 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v29,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v27 )
    goto LABEL_31;
  v30 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          v27,
          (System_Predicate_T__o *)v29,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v31 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v32 = (QuestReleaseEntity_o *)v30;
  v33 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v33,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v31 )
    goto LABEL_31;
  v40 = (QuestReleaseEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v31,
                                  (System_Predicate_T__o *)v33,
                                  (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v28 )
    LODWORD(v28) = QuestReleaseEntity__getValueInt(v28, 0LL);
  if ( v32 )
    LODWORD(v32) = QuestReleaseEntity__getValueInt(v32, 0LL);
  if ( v40 )
    LODWORD(v40) = QuestReleaseEntity__getValueInt(v40, 0LL);
  if ( (int)v28 > (int)v40 )
  {
    ActionExtensions__Call(onEndAnim, 0LL);
    return;
  }
  this->fields.nextPointTextFormat = (struct System_String_o *)onEndAnim;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.nextPointTextFormat,
    (System_Int32_array **)onEndAnim,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v24 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v24 )
LABEL_31:
    sub_B2C434(v24, v25);
  MissionNotifyManager__StartPause(v24, 0LL);
  if ( (int)v32 < (int)v40 )
  {
    v42 = *(_DWORD *)&this->fields.isLastGoalPlayed;
    if ( v42 )
    {
      if ( (int)v28 < (int)v40 && v42 >= 1 )
      {
        TitleInfoEventSubmarineStatusComponent__PlayExitAnimation(this, v41);
        return;
      }
    }
    else if ( this->fields.progressQuestId >= 1 )
    {
      TitleInfoEventSubmarineStatusComponent__PlayEntryAnimation(this, v41);
      return;
    }
  }
  TitleInfoEventSubmarineStatusComponent__PlayProgressAnimation(this, v41);
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
  UnityEngine_GameObject_o *progressPointBg; // x20
  __int64 v11; // x1
  UnityEngine_GameObject_o *gateGoalIcon; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v14; // x20
  TitleInfoEventSubmarineStatusComponent_c *v15; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x21
  float ENTRY_ANIMATION_TIME; // w8
  EventDelegate_o *v18; // x22
  UnityEngine_Object_o *v19; // x20
  UnityEngine_GameObject_o *v20; // x19
  TitleInfoEventSubmarineStatusComponent_c *v21; // x0
  float v22; // w8
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418636A & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_5947/*"EndEntryAnimation"*/, v9);
    byte_418636A = 1;
  }
  progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  v23 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, this->fields.userOldPoint, v2);
  GameObjectExtensions__SetLocalPosition(progressPointBg, v23, 0LL);
  gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  if ( !gateGoalIcon )
    goto LABEL_35;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gateGoalIcon,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
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
    UnityEngine_Object__Destroy_35314896(Component_srcLineSprite, 0LL);
  }
  gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  if ( !gateGoalIcon )
    goto LABEL_35;
  gateGoalIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                               gateGoalIcon,
                                               (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !gateGoalIcon )
    goto LABEL_35;
  v14 = gateGoalIcon;
  gateGoalIcon[5].klass = (UnityEngine_GameObject_c *)0x3F80000000000000LL;
  v15 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v15 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  v16 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v14[2].fields.m_CachedPtr;
  ENTRY_ANIMATION_TIME = v15->static_fields->ENTRY_ANIMATION_TIME;
  LODWORD(v14[1].klass) = 3;
  *(float *)&v14[2].klass = ENTRY_ANIMATION_TIME;
  v18 = (EventDelegate_o *)sub_B2C42C(EventDelegate_TypeInfo);
  EventDelegate___ctor_29723868(v18, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5947/*"EndEntryAnimation"*/, 0LL);
  if ( !v16 )
    goto LABEL_35;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v16,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  UITweener__PlayForward((UITweener_o *)v14, 0LL);
  gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.gateGoalIcon;
  if ( !gateGoalIcon )
    goto LABEL_35;
  gateGoalIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateGoalIcon, 0LL);
  if ( !gateGoalIcon )
    goto LABEL_35;
  v19 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  gateGoalIcon,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v19, 0LL);
  }
  gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.gateGoalIcon;
  if ( !gateGoalIcon
    || (gateGoalIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateGoalIcon, 0LL)) == 0LL
    || (gateGoalIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                     gateGoalIcon,
                                                     (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___)) == 0LL )
  {
LABEL_35:
    sub_B2C434(gateGoalIcon, v11);
  }
  gateGoalIcon[5].klass = (UnityEngine_GameObject_c *)0x3F80000000000000LL;
  v20 = gateGoalIcon;
  v21 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v21 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  v22 = v21->static_fields->ENTRY_ANIMATION_TIME;
  LODWORD(v20[1].klass) = 3;
  *(float *)&v20[2].klass = v22;
  UITweener__PlayForward((UITweener_o *)v20, 0LL);
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
  UnityEngine_GameObject_o *progressPointBg; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v11; // x20
  TitleInfoEventSubmarineStatusComponent_c *v12; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  float EXIT_ANIMATION_TIME; // w8
  EventDelegate_o *v15; // x22
  UnityEngine_Object_o *v16; // x20
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  System_Int32_array **GoalAnimObject; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_o *GoalAnimName; // x1
  const MethodInfo *v27; // x2

  if ( (byte_4186368 & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_5957/*"EndExitAnimation"*/, v8);
    byte_4186368 = 1;
  }
  progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  if ( !progressPointBg )
    goto LABEL_24;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      progressPointBg,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
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
    UnityEngine_Object__Destroy_35314896(Component_srcLineSprite, 0LL);
  }
  progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  if ( !progressPointBg )
    goto LABEL_24;
  progressPointBg = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                  progressPointBg,
                                                  (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !progressPointBg )
    goto LABEL_24;
  v11 = progressPointBg;
  progressPointBg[5].klass = (UnityEngine_GameObject_c *)1065353216;
  v12 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v12 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  v13 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v11[2].fields.m_CachedPtr;
  EXIT_ANIMATION_TIME = v12->static_fields->EXIT_ANIMATION_TIME;
  LODWORD(v11[1].klass) = 3;
  *(float *)&v11[2].klass = EXIT_ANIMATION_TIME;
  v15 = (EventDelegate_o *)sub_B2C42C(EventDelegate_TypeInfo);
  EventDelegate___ctor_29723868(v15, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5957/*"EndExitAnimation"*/, 0LL);
  if ( !v13 )
LABEL_24:
    sub_B2C434(progressPointBg, method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v13,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  UITweener__PlayForward((UITweener_o *)v11, 0LL);
  v16 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
  {
    GoalAnimObject = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v17);
    *(_QWORD *)&this->fields.isCompleatedCount = GoalAnimObject;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.isCompleatedCount,
      GoalAnimObject,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 3, v18);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v27);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *animClipName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0

  if ( (byte_4186374 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, animClipName);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4186374 = 1;
  }
  v6 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
  {
    *(_QWORD *)&this->fields.isAfterTakingOver = animClipName;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.isAfterTakingOver,
      (System_Int32_array **)animClipName,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    Component_srcLineSprite = *(UnityEngine_GameObject_o **)&this->fields.isCompleatedCount;
    if ( !Component_srcLineSprite
      || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  Component_srcLineSprite,
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
    {
      sub_B2C434(Component_srcLineSprite, v13);
    }
    UnityEngine_Animation__Play_50201580(
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t eventDetailEnt; // w21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *v15; // x20
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  System_Int32_array **GoalAnimObject; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v26; // x2
  TitleInfoEventSubmarineStatusComponent_c *v27; // x0

  if ( (byte_418636D & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, onEndAnim);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_10680/*"PlayLastMapStartedAnimation"*/, v7);
    byte_418636D = 1;
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
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.nextPointTextFormat,
      (System_Int32_array **)onEndAnim,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    v15 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v15, 0LL, 0LL) )
    {
      GoalAnimObject = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v16);
      *(_QWORD *)&this->fields.isCompleatedCount = GoalAnimObject;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.isCompleatedCount,
        GoalAnimObject,
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
    if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v27 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10680/*"PlayLastMapStartedAnimation"*/,
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

  if ( (byte_418636E & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventSubmarineStatusComponent_TypeInfo, method);
    sub_B2C35C(&StringLiteral_5935/*"EndAnimation"*/, v4);
    byte_418636E = 1;
  }
  BYTE4(this->fields.goalAnimObject) = 1;
  LOBYTE(this->fields.animClipName) = 1;
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v2);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v6);
  v7 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v7 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5935/*"EndAnimation"*/,
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
  intptr_t v15; // s1
  int v16; // s2
  UnityEngine_GameObject_o *progressPointBg; // x0
  float v18; // s11
  intptr_t v19; // s12
  int v20; // s13
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v22; // x20
  TitleInfoEventSubmarineStatusComponent_c *v23; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  float PROGRESS_ANIMATION_TIME; // w8
  EventDelegate_o *v26; // x22
  TitleInfoEventSubmarineStatusComponent_c *v27; // x0
  int onEndAnim; // w9
  int v29; // w8
  struct UISprite_o *gateBg; // x10
  struct UISprite_o *v31; // x9
  struct System_String_o *goalIconAnimPrefabName; // x20
  int32_t onEndAnim_high; // w0
  int v34; // w9
  int v35; // w8
  int v36; // w9
  struct System_String_o *v37; // x10
  struct System_String_o *v38; // x9
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418636B & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_5972/*"EndProgressAnimation"*/, v8);
    byte_418636B = 1;
  }
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)this->fields.progressPointBg, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  *(UnityEngine_Vector3_o *)&v14 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(
                                     this,
                                     HIDWORD(this->fields.onEndAnim),
                                     v12);
  if ( x <= v14 )
  {
    v27 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v27 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5972/*"EndProgressAnimation"*/,
      v27->static_fields->PROGRESS_ANIMATION_TIME,
      0LL);
  }
  else
  {
    progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
    if ( !progressPointBg )
      goto LABEL_42;
    v18 = v14;
    v19 = v15;
    v20 = v16;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        progressPointBg,
                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
      UnityEngine_Object__Destroy_35314896(Component_srcLineSprite, 0LL);
    }
    progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
    if ( !progressPointBg )
      goto LABEL_42;
    progressPointBg = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                    progressPointBg,
                                                    (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    if ( !progressPointBg )
      goto LABEL_42;
    *(float *)&progressPointBg[5].klass = x;
    *((float *)&progressPointBg[5].klass + 1) = y;
    *(float *)&progressPointBg[5].monitor = z;
    *((float *)&progressPointBg[5].monitor + 1) = v18;
    progressPointBg[5].fields.m_CachedPtr = v19;
    *((_DWORD *)&progressPointBg[5].fields + 1) = v20;
    v22 = progressPointBg;
    v23 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v23 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    v24 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v22[2].fields.m_CachedPtr;
    PROGRESS_ANIMATION_TIME = v23->static_fields->PROGRESS_ANIMATION_TIME;
    LODWORD(v22[1].klass) = 3;
    *(float *)&v22[2].klass = PROGRESS_ANIMATION_TIME;
    v26 = (EventDelegate_o *)sub_B2C42C(EventDelegate_TypeInfo);
    EventDelegate___ctor_29723868(v26, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5972/*"EndProgressAnimation"*/, 0LL);
    if ( !v24 )
      goto LABEL_42;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v24,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    UITweener__PlayForward((UITweener_o *)v22, 0LL);
  }
  if ( !LOBYTE(this->fields.baseQuestReleaseEntList) )
  {
    onEndAnim = (int)this->fields.onEndAnim;
    v29 = HIDWORD(this->fields.onEndAnim) - onEndAnim;
    if ( v29 )
    {
      gateBg = this->fields.gateBg;
      LOBYTE(this->fields.baseQuestReleaseEntList) = 1;
      if ( !gateBg )
        goto LABEL_42;
      LODWORD(gateBg->fields.topAnchor) = onEndAnim;
      v31 = this->fields.gateBg;
      if ( !v31 )
        goto LABEL_42;
      HIDWORD(v31->fields.topAnchor) = v29;
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
      progressPointBg = (UnityEngine_GameObject_o *)UnityEngine_Mathf__Min_40694704(
                                                      onEndAnim_high,
                                                      this->fields.userPoint,
                                                      0LL);
      v34 = (int)this->fields.onEndAnim;
      v35 = (_DWORD)progressPointBg - v34;
      if ( (int)progressPointBg - v34 >= 1 )
      {
        v36 = this->fields.userPoint - v34;
        if ( v36 >= 1 )
        {
          v37 = this->fields.goalIconAnimPrefabName;
          if ( v37 )
          {
            LODWORD(v37[2].klass) = v36;
            v38 = this->fields.goalIconAnimPrefabName;
            if ( v38 )
            {
              HIDWORD(v38[2].klass) = -v35;
              progressPointBg = (UnityEngine_GameObject_o *)this->fields.goalIconAnimPrefabName;
              if ( progressPointBg )
              {
                UICounterLabel__PlayAnimation((UICounterLabel_o *)progressPointBg, 0LL);
                return;
              }
            }
          }
LABEL_42:
          sub_B2C434(progressPointBg, v13);
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

  if ( (byte_418637F & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v5);
    byte_418637F = 1;
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

  if ( (byte_4186380 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Clear__, method);
    byte_4186380 = 1;
  }
  v3 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.minPoint;
  if ( !v3 )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    v3,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *IsNullOrEmpty; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v16; // x0
  __int64 v17; // x1
  bool v18; // w20
  int v19; // w21
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4186382 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_4186382 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  IsNullOrEmpty = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_String__IsNullOrEmpty(
                                                                                                   spriteName,
                                                                                                   0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(*(System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.minPoint, (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
      &v21,
      IsNullOrEmpty,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v22 = v21;
    do
    {
      v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
      if ( !v13 )
      {
        v18 = 0;
        v19 = 8;
        goto LABEL_16;
      }
      current = v22.fields.current;
      if ( !v22.fields.current )
        sub_B2C434(v13, v14);
      v16 = UIAtlas__GetSprite((UIAtlas_o *)v22.fields.current, spriteName, 0LL);
    }
    while ( !v16 );
    if ( !sprite )
      sub_B2C434(v16, v17);
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v18 = 1;
    v19 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v19 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B2C434(IsNullOrEmpty, v12);
    }
  }
  return v18;
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
  struct AssetData_o **p_mapAssetData; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x2
  System_Int32_array **GoalAnimName; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_o *areaIcon; // x0
  const MethodInfo *v46; // x1
  int32_t type; // w21
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
  UILabel_o *gaugeFrame; // x21
  UILabel_o *progressPointLabel; // x21
  int32_t v63; // w20
  System_Int32_array **QuestReleaseList; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
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
  int32_t v82; // w21
  System_String_o *v83; // x22
  Il2CppObject *v84; // x0
  System_String_o *v85; // x22
  System_String_o *v86; // x0
  System_Int32_array **v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct System_String_o *goalIconAnimPrefabName; // x22
  const MethodInfo *v95; // x3
  TitleInfoEventSubmarineStatusComponent_c *v96; // x0
  UICounterLabel_o *gateBg; // x20
  int32_t onEndAnim; // w21
  float PROGRESS_ANIMATION_TIME; // s8
  UnityEngine_GameObject_o *progressPointBg; // x20
  const MethodInfo *v101; // x2
  const MethodInfo *v102; // x1
  int32_t userPoint; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4186365 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, eventDetailEntity);
    sub_B2C35C(&int_TypeInfo, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__, v13);
    sub_B2C35C(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_18522/*"event_goal"*/, v15);
    sub_B2C35C(&StringLiteral_18546/*"event_progressicon"*/, v16);
    sub_B2C35C(&StringLiteral_18544/*"event_progressgauge_front"*/, v17);
    sub_B2C35C(&StringLiteral_5723/*"EVENT_SUBMARINE_NEXT_DESCRIPTION"*/, v18);
    sub_B2C35C(&StringLiteral_5651/*"EVENT_POINT_COMMON_FORMAT"*/, v19);
    sub_B2C35C(&StringLiteral_1218/*"94053407"*/, v20);
    sub_B2C35C(&StringLiteral_5724/*"EVENT_SUBMARINE_NEXT_POINT"*/, v21);
    sub_B2C35C(&StringLiteral_5731/*"EVENT_SUBMARINE_STATUS_TITLE"*/, v22);
    sub_B2C35C(&StringLiteral_18587/*"event_status_point"*/, v23);
    sub_B2C35C(&StringLiteral_18541/*"event_progress_point"*/, v24);
    sub_B2C35C(&StringLiteral_18535/*"event_next"*/, v25);
    sub_B2C35C(&StringLiteral_18543/*"event_progressgauge_back"*/, v26);
    sub_B2C35C(&StringLiteral_5720/*"EVENT_SUBMARINE_GAUGE_CURRENT"*/, v27);
    sub_B2C35C(&StringLiteral_18542/*"event_progressgauge"*/, v28);
    sub_B2C35C(&StringLiteral_18545/*"event_progressgaugebg_80393"*/, v29);
    byte_4186365 = 1;
  }
  this->fields.mapAssetData = (struct AssetData_o *)eventDetailEntity;
  p_mapAssetData = &this->fields.mapAssetData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mapAssetData,
    (System_Int32_array **)eventDetailEntity,
    (System_String_array **)mapAssetData,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.eventAssetData = mapAssetData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventAssetData,
    (System_Int32_array **)mapAssetData,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  LOBYTE(this->fields.baseQuestReleaseEntList) = 0;
  LOBYTE(this->fields.animClipName) = 0;
  GoalAnimName = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 0, v37);
  *(_QWORD *)&this->fields.isAfterTakingOver = GoalAnimName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.isAfterTakingOver,
    GoalAnimName,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( !this->fields.mapAssetData )
    goto LABEL_54;
  type = this->fields.mapAssetData->fields.type;
  v48 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)this, Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__, 0LL);
  TitleInfoEventSubmarineStatusComponent__LoadEventUIAssetData(this, type, v48, v49);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_31326032(gameObject, 62.0, 0.0, 0.0, 0LL);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.areaIcon,
    (System_String_o *)StringLiteral_18545/*"event_progressgaugebg_80393"*/,
    v51);
  areaIcon = (System_String_o *)this->fields.areaIcon;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.titleLabel,
    (System_String_o *)StringLiteral_1218/*"94053407"*/,
    v52);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeBg,
    (System_String_o *)StringLiteral_18542/*"event_progressgauge"*/,
    v53);
  areaIcon = (System_String_o *)this->fields.gaugeBg;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.shipIcon,
    (System_String_o *)StringLiteral_18544/*"event_progressgauge_front"*/,
    v54);
  areaIcon = (System_String_o *)this->fields.shipIcon;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeBar,
    (System_String_o *)StringLiteral_18543/*"event_progressgauge_back"*/,
    v55);
  areaIcon = (System_String_o *)this->fields.gaugeBar;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.shipPanelObj,
    (System_String_o *)StringLiteral_18546/*"event_progressicon"*/,
    v56);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.progressNameLabel,
    (System_String_o *)StringLiteral_18587/*"event_status_point"*/,
    v57);
  areaIcon = (System_String_o *)this->fields.progressNameLabel;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateGoalIcon,
    (System_String_o *)StringLiteral_18535/*"event_next"*/,
    v58);
  areaIcon = (System_String_o *)this->fields.gateGoalIcon;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateNextPointBg,
    (System_String_o *)StringLiteral_18522/*"event_goal"*/,
    v59);
  areaIcon = (System_String_o *)this->fields.gateNextPointBg;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.gateNextPointLabel,
    (System_String_o *)StringLiteral_18541/*"event_progress_point"*/,
    v60);
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
  areaIcon = LocalizationManager__Get((System_String_o *)StringLiteral_5731/*"EVENT_SUBMARINE_STATUS_TITLE"*/, 0LL);
  if ( !gaugeFrame )
    goto LABEL_54;
  UILabel__set_text(gaugeFrame, areaIcon, 0LL);
  progressPointLabel = this->fields.progressPointLabel;
  areaIcon = LocalizationManager__Get((System_String_o *)StringLiteral_5720/*"EVENT_SUBMARINE_GAUGE_CURRENT"*/, 0LL);
  if ( !progressPointLabel )
    goto LABEL_54;
  UILabel__set_text(progressPointLabel, areaIcon, 0LL);
  if ( !*p_mapAssetData )
    goto LABEL_54;
  v63 = (*p_mapAssetData)->fields.type;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  }
  QuestReleaseList = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(v63, v46);
  *(_QWORD *)&this->fields.isGoalAnimToLoop = QuestReleaseList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.isGoalAnimToLoop,
    QuestReleaseList,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  ProgressQuestReleaseEnt = (TitleInfoEventSubmarineStatusComponent_o *)TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
                                                                          v71,
                                                                          *(System_Collections_Generic_List_QuestReleaseEntity__o **)&this->fields.isGoalAnimToLoop,
                                                                          v72);
  CurrentQuestReleaseEnt = TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
                             ProgressQuestReleaseEnt,
                             *(System_Collections_Generic_List_QuestReleaseEntity__o **)&this->fields.isGoalAnimToLoop,
                             v74);
  if ( CurrentQuestReleaseEnt )
    v77 = CurrentQuestReleaseEnt;
  else
    v77 = (QuestReleaseEntity_o *)ProgressQuestReleaseEnt;
  HIDWORD(this->fields.onEndAnim) = TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(this, v76);
  if ( v77 )
    questId = v77->fields.questId;
  else
    questId = 0;
  this->fields.progressQuestId = questId;
  if ( ProgressQuestReleaseEnt )
    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)ProgressQuestReleaseEnt, 0LL);
  else
    ValueInt = 0;
  this->fields.userOldPoint = ValueInt;
  if ( v77 )
    v81 = QuestReleaseEntity__getValueInt(v77, 0LL);
  else
    v81 = 0;
  this->fields.userPoint = v81;
  TitleInfoEventSubmarineStatusComponent__SetupOldData(
    this,
    (int32_t *)&this->fields.onEndAnim,
    (int32_t *)&this->fields.isLastGoalPlayed,
    (int32_t *)&this->fields.goalAnimObject,
    (bool *)&this->fields.goalAnimObject + 4,
    v78);
  v82 = UnityEngine_Mathf__Max_40694800(0, this->fields.userPoint - LODWORD(this->fields.onEndAnim), 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v83 = LocalizationManager__Get((System_String_o *)StringLiteral_5723/*"EVENT_SUBMARINE_NEXT_DESCRIPTION"*/, 0LL);
  userPoint = this->fields.userPoint;
  v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userPoint);
  v85 = System_String__Format(v83, v84, 0LL);
  v86 = LocalizationManager__Get((System_String_o *)StringLiteral_5724/*"EVENT_SUBMARINE_NEXT_POINT"*/, 0LL);
  v87 = (System_Int32_array **)System_String__Concat_44305532(v85, v86, 0LL);
  *(_QWORD *)&this->fields.currentQuestId = v87;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.currentQuestId, v87, v88, v89, v90, v91, v92, v93);
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
    v82,
    TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields->PROGRESS_ANIMATION_TIME,
    *(System_String_o **)&this->fields.currentQuestId,
    0,
    0LL);
  areaIcon = this->fields.goalIconAnimPrefabName;
  if ( !areaIcon )
    goto LABEL_54;
  UICounterLabel__SetCountLabel((UICounterLabel_o *)areaIcon, v82, 0LL);
  if ( TitleInfoEventSubmarineStatusComponent__IsAllClear(this, v77, (int32_t)this->fields.onEndAnim, v95) )
  {
    areaIcon = this->fields.goalIconAnimPrefabName;
    if ( !areaIcon )
      goto LABEL_54;
    areaIcon = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)areaIcon, 0LL);
    if ( !areaIcon )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)areaIcon, 0, 0LL);
  }
  v96 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  gateBg = (UICounterLabel_o *)this->fields.gateBg;
  onEndAnim = (int32_t)this->fields.onEndAnim;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v96 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  PROGRESS_ANIMATION_TIME = v96->static_fields->PROGRESS_ANIMATION_TIME;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  areaIcon = LocalizationManager__Get((System_String_o *)StringLiteral_5651/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  if ( !gateBg
    || (UICounterLabel__Setup(gateBg, onEndAnim, PROGRESS_ANIMATION_TIME, areaIcon, 0, 0LL),
        (areaIcon = (System_String_o *)this->fields.gateBg) == 0LL) )
  {
LABEL_54:
    sub_B2C434(areaIcon, v46);
  }
  UICounterLabel__SetCountLabel((UICounterLabel_o *)areaIcon, (int32_t)this->fields.onEndAnim, 0LL);
  progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  v104 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, (int32_t)this->fields.onEndAnim, v101);
  GameObjectExtensions__SetLocalPosition(progressPointBg, v104, 0LL);
  TitleInfoEventSubmarineStatusComponent__SetupAnimation(this, v102);
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
  __int64 v9; // x1
  UnityEngine_GameObject_o *gateGoalIcon; // x0
  void (__fastcall *castClass)(float); // x8
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
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v24; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x21
  peRenderTexture_ChangeLayerObject_o *v26; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v27; // x21
  QuestReleaseEntity_o *v28; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v29; // x22
  peRenderTexture_ChangeLayerObject_o *v30; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v31; // x22
  QuestReleaseEntity_o *v32; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v33; // x23
  QuestReleaseEntity_o *v34; // x22
  int32_t ValueInt; // w0
  int v36; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v38; // x20
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x2
  System_Int32_array **v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_o *v48; // x1
  const MethodInfo *v49; // x2
  long double v50; // q0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4186366 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_System_Predicate_QuestReleaseEntity___ctor__, v5);
    sub_B2C35C(&System_Predicate_QuestReleaseEntity__TypeInfo, v6);
    sub_B2C35C(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__, v7);
    sub_B2C35C(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__, v8);
    sub_B2C35C(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__, v9);
    byte_4186366 = 1;
  }
  gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.gateGoalIcon;
  if ( !gateGoalIcon )
    goto LABEL_45;
  castClass = (void (__fastcall *)(float))gateGoalIcon->klass[1]._1.castClass;
  if ( SLODWORD(this->fields.onEndAnim) >= this->fields.userPoint )
  {
    castClass(0.0);
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.isCompleatedCount,
        GoalAnimObject,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v14);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v23);
  }
  else
  {
    castClass(1.0);
  }
  v24 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v25,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v24 )
    goto LABEL_45;
  v26 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          v24,
          (System_Predicate_T__o *)v25,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v27 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v28 = (QuestReleaseEntity_o *)v26;
  v29 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v29,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v27 )
    goto LABEL_45;
  v30 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          v27,
          (System_Predicate_T__o *)v29,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v31 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v32 = (QuestReleaseEntity_o *)v30;
  v33 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v33,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v31 )
    goto LABEL_45;
  v34 = (QuestReleaseEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v31,
                                  (System_Predicate_T__o *)v33,
                                  (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v28 )
    LODWORD(v28) = QuestReleaseEntity__getValueInt(v28, 0LL);
  if ( v32 )
    LODWORD(v32) = QuestReleaseEntity__getValueInt(v32, 0LL);
  if ( v34 )
    ValueInt = QuestReleaseEntity__getValueInt(v34, 0LL);
  else
    ValueInt = 0;
  if ( (int)v32 >= ValueInt )
    goto LABEL_41;
  v36 = *(_DWORD *)&this->fields.isLastGoalPlayed;
  if ( !v36 )
  {
    if ( this->fields.progressQuestId >= 1 )
    {
      gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
      if ( gateGoalIcon )
      {
        gateGoalIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     gateGoalIcon,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
            LODWORD(v50) = 0;
LABEL_44:
            ((void (__fastcall *)(long double))klass[1]._1.castClass)(v50);
            return;
          }
        }
      }
LABEL_45:
      sub_B2C434(gateGoalIcon, method);
    }
LABEL_41:
    gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
    if ( gateGoalIcon )
    {
      gateGoalIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   gateGoalIcon,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
      if ( gateGoalIcon )
      {
        klass = gateGoalIcon->klass;
        LODWORD(v50) = 1.0;
        goto LABEL_44;
      }
    }
    goto LABEL_45;
  }
  if ( (int)v28 >= ValueInt || v36 < 1 )
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
                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
  v38 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v38, 0LL, 0LL) )
  {
    v41 = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v39);
    *(_QWORD *)&this->fields.isCompleatedCount = v41;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.isCompleatedCount, v41, v42, v43, v44, v45, v46, v47);
  }
  v48 = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v40);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, v48, v49);
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
  __int64 gateGoalIcon; // x0
  __int64 v15; // x1
  TerminalPramsManager_c *v16; // x8
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x9
  struct AssetData_o *mapAssetData; // x10
  TerminalPramsManager_c *v19; // x0
  System_String_array *ValueByArray; // x0
  __int64 v21; // x8
  System_String_array *v22; // x23
  System_String_o *v23; // x20
  TerminalPramsManager_c *v24; // x0
  int32_t onEndAnim_high; // w8
  int32_t eventDetailEnt; // w20
  __int64 v27; // x0

  if ( (byte_4186371 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, oldPoint);
    sub_B2C35C(&CondType_TypeInfo, v11);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v12);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
    byte_4186371 = 1;
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
  v16 = TerminalPramsManager_TypeInfo;
  if ( (gateGoalIcon & 1) != 0 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_418472F )
    {
      gateGoalIcon = sub_B2C35C(&TerminalPramsManager_TypeInfo, v15);
      byte_418472F = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    if ( v16->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v16);
      if ( !byte_418472F )
      {
        gateGoalIcon = sub_B2C35C(&TerminalPramsManager_TypeInfo, v15);
        byte_418472F = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventSubmarineSaveData_k__BackingField = v16->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !BeforeEventSubmarineSaveData_k__BackingField )
        goto LABEL_64;
      mapAssetData = this->fields.mapAssetData;
      if ( !mapAssetData )
        goto LABEL_64;
      if ( BeforeEventSubmarineSaveData_k__BackingField->fields.eventId == mapAssetData->fields.type )
      {
        if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v16);
        if ( !byte_418472F )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v15);
          byte_418472F = 1;
        }
        v19 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
        }
        gateGoalIcon = (__int64)v19->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
        if ( gateGoalIcon )
        {
          ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)gateGoalIcon, 0x2Cu, 0LL);
          if ( ValueByArray )
          {
            v21 = *(_QWORD *)&ValueByArray->max_length;
            v22 = ValueByArray;
            if ( v21 )
            {
              if ( !(_DWORD)v21 )
              {
                v27 = sub_B2C460(ValueByArray);
                sub_B2C400(v27, 0LL);
              }
              *oldPoint = System_Int32__Parse(ValueByArray->m_Items[0], 0LL);
              if ( (int)v22->max_length >= 2 )
              {
                *oldQuestId = System_Int32__Parse(v22->m_Items[1], 0LL);
                if ( (int)v22->max_length >= 3 )
                {
                  *progressQuestId = System_Int32__Parse(v22->m_Items[2], 0LL);
                  if ( (int)v22->max_length >= 4 )
                  {
                    v23 = v22->m_Items[3];
                    if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !bool_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                    }
                    *isLastGoalPlayed = System_Boolean__Parse(v23, 0LL);
                  }
                }
              }
            }
          }
          return;
        }
LABEL_64:
        sub_B2C434(gateGoalIcon, v15);
      }
    }
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v16);
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v15);
    byte_4183C7A = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  if ( v24->static_fields->_QuestId_k__BackingField != HIDWORD(this->fields.eventDetailEnt) )
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
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
    sub_B2C434(this, 0LL);
  return n->fields.questId == *(_DWORD *)&this->fields.isLastGoalPlayed;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B2C434(this, 0LL);
  return n->fields.questId == LODWORD(this->fields.goalAnimObject);
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B2C434(this, 0LL);
  return n->fields.questId == this->fields.progressQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_0(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B2C434(this, 0LL);
  return n->fields.questId == *(_DWORD *)&this->fields.isLastGoalPlayed;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B2C434(this, 0LL);
  return n->fields.questId == LODWORD(this->fields.goalAnimObject);
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, method);
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
    sub_B2C434(shipIcon, method);
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
    sub_B2C434(this, method);
  return (float)shipIcon->fields.mWidth;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *static_fields; // x0

  if ( (byte_418533B & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo, v1);
    byte_418533B = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TitleInfoEventSubmarineStatusComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
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
    sub_B2C434(this, n);
  return n->fields.questId == _4__this->fields.progressQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___EndAnimation_b__1(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(0LL, data);
  _4__this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)data;
  sub_B2C2F8(&_4__this->fields.atlasList, data);
  ActionExtensions__Call(this->fields.callback, 0LL);
}