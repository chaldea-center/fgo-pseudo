void __fastcall TitleInfoEventSubmarineStatusComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  TitleInfoEventSubmarineStatusComponent_c *v2; // x8

  if ( (byte_40F83D6 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v1);
    byte_40F83D6 = 1;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F83D5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_UIAtlas__TypeInfo, v6);
    byte_40F83D5 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  *(_QWORD *)&this->fields.minPoint = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.minPoint,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  float v5; // s0
  float v6; // s1
  float v7; // s2
  struct UISprite_o *shipIcon; // x9
  int32_t userPoint; // w8
  float mWidth; // s3
  int32_t userOldPoint; // w9
  float v12; // s4
  float v13; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  *(UnityEngine_Vector3_o *)&v5 = TitleInfoEventSubmarineStatusComponent__get_BasePosition(
                                    this,
                                    *(const MethodInfo **)&point);
  shipIcon = this->fields.shipIcon;
  if ( !shipIcon )
    sub_B170D4();
  userPoint = this->fields.userPoint;
  mWidth = (float)shipIcon->fields.mWidth;
  if ( userPoint <= point )
  {
    v12 = 1.0;
  }
  else
  {
    userOldPoint = this->fields.userOldPoint;
    v12 = 0.0;
    if ( userOldPoint < point )
      v12 = (float)(point - userOldPoint) / (float)(userPoint - userOldPoint);
  }
  v13 = v5 - (float)(v12 * mWidth);
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v13;
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0

  if ( (byte_40F83C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F83C4 = 1;
  }
  eventAssetData = this->fields.eventAssetData;
  if ( !eventAssetData )
    return 0LL;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               eventAssetData,
                                                                               *(System_String_o **)&this->fields.targetQuestId,
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
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
    sub_B16F98(
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
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v16 )
      sub_B170D4();
    v8 = v16;
    gameObject = UnityEngine_GameObject__get_gameObject(v16, 0LL);
    GameObjectExtensions__SafeSetParent_27425996(gameObject, (UnityEngine_GameObject_o *)this->fields.statusBg, 0LL);
    v18 = UnityEngine_GameObject__get_gameObject(v8, 0LL);
    GameObjectExtensions__ResetLocalPosition(v18, 0LL);
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
  if ( (byte_40F83C8 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventSubmarineStatusComponent_TypeInfo, *(_QWORD *)&currentQuestId);
    byte_40F83C8 = 1;
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
  return TitleInfoEventSubmarineStatusComponent__CreateSaveData_21931300(v5, v6, v7, v9, v8);
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__CreateSaveData_21931300(
        System_String_o *userPoint,
        System_String_o *currentQuestId,
        System_String_o *progressQuestId,
        System_String_o *isLastGoalPlayed,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Text_StringBuilder_o *v10; // x21

  if ( (byte_40F83C9 & 1) == 0 )
  {
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, currentQuestId);
    sub_B16FFC(&StringLiteral_698, v9);
    byte_40F83C9 = 1;
  }
  v10 = (System_Text_StringBuilder_o *)sub_B170CC(
                                         System_Text_StringBuilder_TypeInfo,
                                         currentQuestId,
                                         progressQuestId,
                                         isLastGoalPlayed,
                                         method);
  System_Text_StringBuilder___ctor(v10, 0LL);
  if ( !v10 )
    sub_B170D4();
  System_Text_StringBuilder__Append_41914240(v10, userPoint, 0LL);
  System_Text_StringBuilder__Append_41914240(v10, (System_String_o *)StringLiteral_698, 0LL);
  System_Text_StringBuilder__Append_41914240(v10, currentQuestId, 0LL);
  System_Text_StringBuilder__Append_41914240(v10, (System_String_o *)StringLiteral_698, 0LL);
  System_Text_StringBuilder__Append_41914240(v10, progressQuestId, 0LL);
  System_Text_StringBuilder__Append_41914240(v10, (System_String_o *)StringLiteral_698, 0LL);
  System_Text_StringBuilder__Append_41914240(v10, isLastGoalPlayed, 0LL);
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
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Animation_o *Component_srcLineSprite; // x0
  BattleServantConfConponent_o *p_isCompleatedCount; // x19
  UnityEngine_Object_o *klass; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_40F83C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F83C6 = 1;
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.isAfterTakingOver, GoalAnimName, v7, v8, v9, v10, v11, v12);
    v13 = *(UnityEngine_GameObject_o **)&this->fields.isCompleatedCount;
    if ( !v13
      || (Component_srcLineSprite = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 v13,
                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
    {
      sub_B170D4();
    }
    p_isCompleatedCount = (BattleServantConfConponent_o *)&this->fields.isCompleatedCount;
    UnityEngine_Animation__Stop(Component_srcLineSprite, 0LL);
    klass = (UnityEngine_Object_o *)p_isCompleatedCount->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(klass, 0LL);
    p_isCompleatedCount->klass = 0LL;
    sub_B16F98(p_isCompleatedCount, 0LL, v17, v18, v19, v20, v21, v22);
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v25; // x2
  MissionNotifyManager_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int onEndAnim_high; // w8
  int32_t progressQuestId; // w9
  TerminalPramsManager_c *v33; // x0
  EventSaveData_o *v34; // x22
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  TerminalPramsManager_c *v42; // x0
  BattleServantConfConponent_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v44; // x0
  EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x0
  System_String_array *ValueByArray; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_String_array *v51; // x22
  int32_t v52; // w23
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v53; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v54; // x25
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v55; // x24
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v60; // x25
  __int64 v61; // x1
  const MethodInfo *v62; // x4
  TerminalPramsManager_c *v63; // x0
  struct AssetData_o *mapAssetData; // x8
  struct EventSaveData_o *v65; // x9
  int32_t v66; // w21
  int v67; // w24
  struct EventSaveData_o *v68; // x20
  System_Int32_array **SaveData; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7

  if ( (byte_40F83C0 & 1) == 0 )
  {
    sub_B16FFC(&EventSaveData_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v6);
    sub_B16FFC(&Method_System_Predicate_QuestReleaseEntity___ctor__, v7);
    sub_B16FFC(&System_Predicate_QuestReleaseEntity__TypeInfo, v8);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v9);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v10);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
    sub_B16FFC(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v12);
    sub_B16FFC(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__, v13);
    sub_B16FFC(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__, v14);
    sub_B16FFC(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo, v15);
    byte_40F83C0 = 1;
  }
  v16 = sub_B170CC(TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo, method, v2, v3, v4);
  TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___ctor(
    (TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *)v16,
    0LL);
  if ( !v16 )
    goto LABEL_70;
  *(_QWORD *)(v16 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  if ( LOBYTE(this->fields.animClipName) )
  {
    LOBYTE(this->fields.animClipName) = 0;
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v23);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v25);
  }
  LOBYTE(this[1].klass) = 0;
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v26 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v26 )
    goto LABEL_70;
  MissionNotifyManager__EndPause(v26, 0LL);
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
  if ( !byte_40F6E3E )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v27);
    byte_40F6E3E = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  if ( !v33->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
  {
    v34 = (EventSaveData_o *)sub_B170CC(EventSaveData_TypeInfo, v27, v28, v29, v30);
    EventSaveData___ctor(v34, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E18 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v35);
      byte_40F6E18 = 1;
    }
    v42 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v42 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (BattleServantConfConponent_o *)&v42->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (BattleServantConfConponent_c *)v34;
    sub_B16F98(p_BeforeEventSubmarineSaveData_k__BackingField, (System_Int32_array **)v34, v36, v37, v38, v39, v40, v41);
    v33 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v33);
  if ( !byte_40F6E3E )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v27);
    byte_40F6E3E = 1;
  }
  v44 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v44 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventSubmarineSaveData_k__BackingField = v44->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
LABEL_70:
    sub_B170D4();
  ValueByArray = EventSaveData__GetValueByArray(BeforeEventSubmarineSaveData_k__BackingField, 0x2Cu, 0LL);
  v51 = ValueByArray;
  if ( !ValueByArray )
  {
    v52 = 0;
    goto LABEL_44;
  }
  if ( (int)ValueByArray->max_length < 2 )
  {
    v52 = 0;
    goto LABEL_43;
  }
  v52 = System_Int32__Parse(ValueByArray->m_Items[1], 0LL);
  if ( (int)v51->max_length < 3 )
  {
LABEL_43:
    LODWORD(v51) = 0;
    goto LABEL_44;
  }
  LODWORD(v51) = System_Int32__Parse(v51->m_Items[2], 0LL);
LABEL_44:
  v53 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v54 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_QuestReleaseEntity__TypeInfo,
                                                                   v47,
                                                                   v48,
                                                                   v49,
                                                                   v50);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v54,
    (Il2CppObject *)v16,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v53 )
    goto LABEL_70;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         v53,
         (System_Predicate_T__o *)v54,
         (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
  {
    v52 = this->fields.progressQuestId;
  }
  *(_DWORD *)(v16 + 24) = UnityEngine_Mathf__Max_40727628((int32_t)v51, this->fields.progressQuestId, 0LL);
  v55 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v60 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_QuestReleaseEntity__TypeInfo,
                                                                   v56,
                                                                   v57,
                                                                   v58,
                                                                   v59);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v60,
    (Il2CppObject *)v16,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v55 )
    goto LABEL_70;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         v55,
         (System_Predicate_T__o *)v60,
         (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
  {
    LODWORD(v51) = *(_DWORD *)(v16 + 24);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E3E )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v61);
    byte_40F6E3E = 1;
  }
  v63 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v63 = TerminalPramsManager_TypeInfo;
  }
  mapAssetData = this->fields.mapAssetData;
  if ( !mapAssetData )
    goto LABEL_70;
  v65 = v63->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  if ( !v65 )
    goto LABEL_70;
  v65->fields.eventId = mapAssetData->fields.type;
  if ( !byte_40F6E3E )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v61);
    v63 = TerminalPramsManager_TypeInfo;
    byte_40F6E3E = 1;
  }
  if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v63);
    v63 = TerminalPramsManager_TypeInfo;
  }
  v66 = HIDWORD(this->fields.onEndAnim);
  v67 = BYTE4(this->fields.goalAnimObject);
  v68 = v63->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  }
  SaveData = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__CreateSaveData(
                                      v66,
                                      v52,
                                      (int32_t)v51,
                                      v67 != 0,
                                      v62);
  if ( !v68 )
    goto LABEL_70;
  v68->fields.value = (struct System_String_o *)SaveData;
  sub_B16F98((BattleServantConfConponent_o *)&v68->fields.value, SaveData, v70, v71, v72, v73, v74, v75);
  TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(0LL);
  ActionExtensions__Call((System_Action_o *)this->fields.nextPointTextFormat, 0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndExitAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoEventSubmarineStatusComponent_c *v4; // x0

  if ( (byte_40F83BA & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventSubmarineStatusComponent_TypeInfo, method);
    sub_B16FFC(&StringLiteral_10641, v3);
    byte_40F83BA = 1;
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
    (System_String_o *)StringLiteral_10641,
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
  UnityEngine_GameObject_o **p_isCompleatedCount; // x20
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x2
  UnityEngine_GameObject_o *v12; // x21
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
  struct System_String_o *goalIconAnimPrefabName; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_o *gateGoalIcon; // x0
  const MethodInfo *v27; // x1
  System_Int32_array **GoalAnimObject; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_Object_o *v35; // x20
  const MethodInfo *v36; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v38; // x2
  TitleInfoEventSubmarineStatusComponent_c *v39; // x0

  if ( (byte_40F83BD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_5918, v4);
    byte_40F83BD = 1;
  }
  v5 = UnityEngine_Mathf__Min_40727532(HIDWORD(this->fields.onEndAnim), this->fields.userPoint, 0LL);
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
  p_isCompleatedCount = (UnityEngine_GameObject_o **)&this->fields.isCompleatedCount;
  v10 = UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( v10 )
  {
    if ( !*p_isCompleatedCount )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(*p_isCompleatedCount, 0, 0LL);
    v12 = *p_isCompleatedCount;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)v12, 0LL);
    *p_isCompleatedCount = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.isCompleatedCount, 0LL, v13, v14, v15, v16, v17, v18);
  }
  ProgressQuestReleaseEnt = (TitleInfoEventSubmarineStatusComponent_o *)TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
                                                                          (TitleInfoEventSubmarineStatusComponent_o *)v10,
                                                                          *(System_Collections_Generic_List_QuestReleaseEntity__o **)&this->fields.isGoalAnimToLoop,
                                                                          v11);
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
    goalIconAnimPrefabName = this->fields.goalIconAnimPrefabName;
    if ( !goalIconAnimPrefabName
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)goalIconAnimPrefabName, 0LL)) == 0LL )
    {
LABEL_33:
      sub_B170D4();
    }
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  gateGoalIcon = this->fields.gateGoalIcon;
  if ( !gateGoalIcon )
    goto LABEL_33;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))gateGoalIcon->klass->vtable._8_set_alpha.method)(
    gateGoalIcon,
    gateGoalIcon->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  LOBYTE(this->fields.animClipName) = 1;
  GoalAnimObject = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v27);
  *(_QWORD *)&this->fields.isCompleatedCount = GoalAnimObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.isCompleatedCount,
    GoalAnimObject,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v36);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v38);
  }
  v39 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v39 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5918,
    v39->static_fields->GOAL_ANIMATION_TIME,
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
  Il2CppObject *current; // x20
  int32_t klass; // w19
  int v10; // w19
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F83CC & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, baseList);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v7);
    byte_40F83CC = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !baseList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)baseList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
  {
    current = v12.fields.current;
    if ( !v12.fields.current )
      sub_B170D4();
    klass = (int32_t)v12.fields.current[1].klass;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_25438860(klass, -1, 0, 0LL) )
    {
      v10 = 3;
      goto LABEL_13;
    }
  }
  current = 0LL;
  v10 = 1;
LABEL_13:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  if ( (unsigned int)(v10 + 1) >> 2 )
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

  if ( (byte_40F83CE & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6189, v3);
    byte_40F83CE = 1;
  }
  v6 = eventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format((System_String_o *)StringLiteral_6189, v4, 0LL);
}


UnityEngine_GameObject_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_40F83D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, name);
    byte_40F83D4 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.atlasList;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
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

  if ( (byte_40F83C3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16090, *(_QWORD *)&animType);
    sub_B16FFC(&StringLiteral_16113, v5);
    sub_B16FFC(&StringLiteral_16088, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    sub_B16FFC(&StringLiteral_16078, v8);
    byte_40F83C3 = 1;
  }
  v9 = *(System_String_o **)&this->fields.targetQuestId;
  if ( BYTE4(this->fields.goalAnimObject) )
    v9 = System_String__Concat_43743732(v9, (System_String_o *)StringLiteral_16088, 0LL);
  switch ( animType )
  {
    case 3:
      v10 = &StringLiteral_16078;
      return System_String__Concat_43743732(v9, (System_String_o *)*v10, 0LL);
    case 2:
      v10 = &StringLiteral_16090;
      return System_String__Concat_43743732(v9, (System_String_o *)*v10, 0LL);
    case 1:
      v10 = &StringLiteral_16113;
      return System_String__Concat_43743732(v9, (System_String_o *)*v10, 0LL);
  }
  return (System_String_o *)StringLiteral_1;
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
  int32_t klass; // w20
  int v11; // w21
  QuestReleaseEntity_o *v12; // x20
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F83CB & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, baseList);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v7);
    byte_40F83CB = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !baseList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)baseList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  current = 0LL;
  while ( 1 )
  {
    v9 = (QuestReleaseEntity_o *)current;
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
      break;
    current = v14.fields.current;
    if ( !v14.fields.current )
      sub_B170D4();
    klass = (int32_t)v14.fields.current[1].klass;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_25438860(klass, -1, 0, 0LL) )
    {
      v11 = 3;
      v12 = v9;
      goto LABEL_13;
    }
  }
  v12 = 0LL;
  v11 = 1;
LABEL_13:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  if ( (unsigned int)(v11 + 1) >> 2 )
    return v12;
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
  WebViewManager_o *Instance; // x0
  QuestReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_QuestReleaseEntity__o *ListByTargetAndCondType; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x19
  Il2CppObject *current; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  TitleInfoEventSubmarineStatusComponent___c_c *v29; // x0
  struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__80_0; // x20
  Il2CppObject *v32; // x21
  struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F83CA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_QuestReleaseEntity___ctor__, method);
    sub_B16FFC(&System_Comparison_QuestReleaseEntity__TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__, v14);
    sub_B16FFC(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo, v15);
    byte_40F83CA = 1;
  }
  memset(&v42, 0, sizeof(v42));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_24;
  ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                              MasterData_WarQuestSelectionMaster,
                              eventId,
                              85,
                              0LL);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !ListByTargetAndCondType )
    goto LABEL_24;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ListByTargetAndCondType,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v42,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
  {
    current = v42.fields.current;
    if ( !v42.fields.current )
      sub_B170D4();
    if ( QuestMaster__GetQuestType((int32_t)v42.fields.current[1].klass, 0LL) == 2 )
    {
      if ( !v23 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v42,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  v29 = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
    v29 = TitleInfoEventSubmarineStatusComponent___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__80_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__80_0;
  if ( !_9__80_0 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__80_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_QuestReleaseEntity__TypeInfo,
                                                                           v25,
                                                                           v26,
                                                                           v27,
                                                                           v28);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__80_0,
      v32,
      Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_QuestReleaseEntity___ctor__);
    v33 = TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields;
    v33->__9__80_0 = (struct System_Comparison_QuestReleaseEntity__o *)_9__80_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v33->__9__80_0,
      (System_Int32_array **)_9__80_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( !v23 )
LABEL_24:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v23,
    (System_Comparison_T__o *)_9__80_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v23;
}


int32_t __fastcall TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  struct AssetData_o *mapAssetData; // x8

  if ( (byte_40F83C1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventPointMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F83C1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  mapAssetData = this->fields.mapAssetData;
  if ( !mapAssetData || !MasterData_WarQuestSelectionMaster )
LABEL_10:
    sub_B170D4();
  return UserEventPointMaster__GetEventPointTotal(
           MasterData_WarQuestSelectionMaster,
           UserId,
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
  bool IsQuestClear_25438860; // w0

  if ( (byte_40F83CD & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, currentQuestReleaseEnt);
    sub_B16FFC(&Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___, v7);
    byte_40F83CD = 1;
  }
  v8 = *(MyRoomStateMaterial_DummyFolderState_o **)&this->fields.isGoalAnimToLoop;
  if ( v8 )
  {
    v8 = System_Linq_Enumerable__LastOrDefault_MyRoomStateMaterial_DummyFolderState_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v8,
           (const MethodInfo_18D9800 *)Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___);
    if ( v8 )
    {
      v9 = v8;
      ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v8, 0LL);
      beforeSelectWarId = v9->fields.beforeSelectWarId;
      v12 = ValueInt;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_25438860 = CondType__IsQuestClear_25438860(beforeSelectWarId, -1, 0, 0LL);
      if ( !currentQuestReleaseEnt )
        sub_B170D4();
      LOBYTE(v8) = IsQuestClear_25438860 & (v12 <= nowPoint) & (QuestReleaseEntity__getValueInt(
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
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Animation_o *Component_srcLineSprite; // x0

  if ( (byte_40F83C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F83C7 = 1;
  }
  v4 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
    return 0;
  v6 = *(UnityEngine_GameObject_o **)&this->fields.isCompleatedCount;
  if ( !v6
    || (Component_srcLineSprite = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v6,
                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
  {
    sub_B170D4();
  }
  return UnityEngine_Animation__get_isPlaying(Component_srcLineSprite, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventSubmarineStatusComponent__LoadEventUIAssetData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1
  System_String_o *EventUIAssetDataPath; // x19
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  AssetLoader_LoadEndDataHandler_o *v31; // x21

  if ( (byte_40F83CF & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B16FFC(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v9);
    sub_B16FFC(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__, v10);
    sub_B16FFC(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo, v11);
    byte_40F83CF = 1;
  }
  v12 = sub_B170CC(
          TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo,
          *(_QWORD *)&eventId,
          callback,
          method,
          v4);
  TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0___ctor(
    (TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_o *)v12,
    0LL);
  if ( !v12 )
    sub_B170D4();
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)callback, v19, v20, v21, v22, v23, v24);
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  }
  EventUIAssetDataPath = TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(eventId, v25);
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v27, v28, v29, v30);
  AssetLoader_LoadEndDataHandler___ctor(
    v31,
    (Il2CppObject *)v12,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v31, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v12 + 24), 0LL);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x0
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v21; // [xsp+8h] [xbp-58h] BYREF
  int v22; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F83D2 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_23407, v9);
    sub_B16FFC(&StringLiteral_5361, v10);
    byte_40F83D2 = 1;
  }
  if ( this->fields.atlasList )
  {
    v11 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.minPoint;
    if ( !v11 )
LABEL_18:
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v11,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v22 = i;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      v16 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23407, v15, 0LL);
      v21 = eventId;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v18 = System_String__Format_43739268((System_String_o *)StringLiteral_5361, v17, v16, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v18,
                                                                 v19);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0LL, 0LL) )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_18;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
        break;
      v14 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.minPoint;
      if ( !v14 )
        goto LABEL_18;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
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
    sub_B170D4();
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
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  int v23; // w8
  int32_t progressQuestId; // w9
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v25; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x22
  peRenderTexture_ChangeLayerObject_o *v27; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v28; // x22
  QuestReleaseEntity_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v34; // x23
  peRenderTexture_ChangeLayerObject_o *v35; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v36; // x23
  QuestReleaseEntity_o *v37; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v42; // x24
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  QuestReleaseEntity_o *v49; // x23
  MissionNotifyManager_o *v50; // x0
  const MethodInfo *v51; // x1
  int v52; // w8

  if ( (byte_40F83B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, onEndAnim);
    sub_B16FFC(&Method_System_Predicate_QuestReleaseEntity___ctor__, v10);
    sub_B16FFC(&System_Predicate_QuestReleaseEntity__TypeInfo, v11);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v12);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v13);
    sub_B16FFC(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__, v14);
    sub_B16FFC(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__, v15);
    sub_B16FFC(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__, v16);
    byte_40F83B8 = 1;
  }
  if ( LOBYTE(this[1].klass) )
  {
    this->fields.nextPointTextFormat = (struct System_String_o *)onEndAnim;
    sub_B16F98(
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
  v23 = *(_DWORD *)&this->fields.isLastGoalPlayed;
  progressQuestId = this->fields.progressQuestId;
  HIDWORD(this->fields.onEndAnim) = UserEventPoint;
  if ( v23 == progressQuestId && LODWORD(this->fields.onEndAnim) == UserEventPoint )
  {
    TitleInfoEventSubmarineStatusComponent__PlayLastMapAnimation(this, onEndAnim, v20);
    return;
  }
  v25 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_QuestReleaseEntity__TypeInfo,
                                                                   v19,
                                                                   v20,
                                                                   v21,
                                                                   v22);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v26,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v25 )
    goto LABEL_31;
  v27 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          v25,
          (System_Predicate_T__o *)v26,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v28 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v29 = (QuestReleaseEntity_o *)v27;
  v34 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_QuestReleaseEntity__TypeInfo,
                                                                   v30,
                                                                   v31,
                                                                   v32,
                                                                   v33);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v34,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v28 )
    goto LABEL_31;
  v35 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          v28,
          (System_Predicate_T__o *)v34,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v36 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v37 = (QuestReleaseEntity_o *)v35;
  v42 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_QuestReleaseEntity__TypeInfo,
                                                                   v38,
                                                                   v39,
                                                                   v40,
                                                                   v41);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v42,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v36 )
    goto LABEL_31;
  v49 = (QuestReleaseEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v36,
                                  (System_Predicate_T__o *)v42,
                                  (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v29 )
    LODWORD(v29) = QuestReleaseEntity__getValueInt(v29, 0LL);
  if ( v37 )
    LODWORD(v37) = QuestReleaseEntity__getValueInt(v37, 0LL);
  if ( v49 )
    LODWORD(v49) = QuestReleaseEntity__getValueInt(v49, 0LL);
  if ( (int)v29 > (int)v49 )
  {
    ActionExtensions__Call(onEndAnim, 0LL);
    return;
  }
  this->fields.nextPointTextFormat = (struct System_String_o *)onEndAnim;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.nextPointTextFormat,
    (System_Int32_array **)onEndAnim,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v50 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v50 )
LABEL_31:
    sub_B170D4();
  MissionNotifyManager__StartPause(v50, 0LL);
  if ( (int)v37 < (int)v49 )
  {
    v52 = *(_DWORD *)&this->fields.isLastGoalPlayed;
    if ( v52 )
    {
      if ( (int)v29 < (int)v49 && v52 >= 1 )
      {
        TitleInfoEventSubmarineStatusComponent__PlayExitAnimation(this, v51);
        return;
      }
    }
    else if ( this->fields.progressQuestId >= 1 )
    {
      TitleInfoEventSubmarineStatusComponent__PlayEntryAnimation(this, v51);
      return;
    }
  }
  TitleInfoEventSubmarineStatusComponent__PlayProgressAnimation(this, v51);
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
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v13; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v19; // x20
  TitleInfoEventSubmarineStatusComponent_c *v20; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *klass; // x21
  float ENTRY_ANIMATION_TIME; // w8
  EventDelegate_o *v23; // x22
  UnityEngine_Component_o *gateGoalIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v26; // x20
  UnityEngine_Component_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v29; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v30; // x19
  TitleInfoEventSubmarineStatusComponent_c *v31; // x0
  float v32; // w8
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F83BB & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_5930, v9);
    byte_40F83BB = 1;
  }
  progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  v33 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, this->fields.userOldPoint, v2);
  GameObjectExtensions__SetLocalPosition(progressPointBg, v33, 0LL);
  v11 = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  if ( !v11 )
    goto LABEL_35;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v11,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
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
    UnityEngine_Object__Destroy_34809464(Component_srcLineSprite, 0LL);
  }
  v13 = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  if ( !v13 )
    goto LABEL_35;
  v14 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
          v13,
          (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !v14 )
    goto LABEL_35;
  v19 = v14;
  v14[3].fields.callbackQueue = (struct System_Collections_Generic_Queue_Tuple_SendOrPostCallback__object___o *)0x3F80000000000000LL;
  v20 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v20 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  klass = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v19[2].klass;
  ENTRY_ANIMATION_TIME = v20->static_fields->ENTRY_ANIMATION_TIME;
  LODWORD(v19->fields.callbackQueue) = 3;
  *(float *)&v19[1].fields.m_CachedPtr = ENTRY_ANIMATION_TIME;
  v23 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v15, v16, v17, v18);
  EventDelegate___ctor_29412928(v23, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5930, 0LL);
  if ( !klass )
    goto LABEL_35;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    klass,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  UITweener__PlayForward((UITweener_o *)v19, 0LL);
  gateGoalIcon = (UnityEngine_Component_o *)this->fields.gateGoalIcon;
  if ( !gateGoalIcon )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_gameObject(gateGoalIcon, 0LL);
  if ( !gameObject )
    goto LABEL_35;
  v26 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  gameObject,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v26, 0LL);
  }
  v27 = (UnityEngine_Component_o *)this->fields.gateGoalIcon;
  if ( !v27
    || (v28 = UnityEngine_Component__get_gameObject(v27, 0LL)) == 0LL
    || (v29 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                v28,
                (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___)) == 0LL )
  {
LABEL_35:
    sub_B170D4();
  }
  v29[3].fields.callbackQueue = (struct System_Collections_Generic_Queue_Tuple_SendOrPostCallback__object___o *)0x3F80000000000000LL;
  v30 = v29;
  v31 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v31 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  v32 = v31->static_fields->ENTRY_ANIMATION_TIME;
  LODWORD(v30->fields.callbackQueue) = 3;
  *(float *)&v30[1].fields.m_CachedPtr = v32;
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
  UnityEngine_GameObject_o *progressPointBg; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v11; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v17; // x20
  TitleInfoEventSubmarineStatusComponent_c *v18; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *klass; // x21
  float EXIT_ANIMATION_TIME; // w8
  EventDelegate_o *v21; // x22
  UnityEngine_Object_o *v22; // x20
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  System_Int32_array **GoalAnimObject; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_o *GoalAnimName; // x1
  const MethodInfo *v33; // x2

  if ( (byte_40F83B9 & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_5940, v8);
    byte_40F83B9 = 1;
  }
  progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  if ( !progressPointBg )
    goto LABEL_24;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      progressPointBg,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
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
    UnityEngine_Object__Destroy_34809464(Component_srcLineSprite, 0LL);
  }
  v11 = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  if ( !v11 )
    goto LABEL_24;
  v12 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
          v11,
          (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !v12 )
    goto LABEL_24;
  v17 = v12;
  v12[3].fields.callbackQueue = (struct System_Collections_Generic_Queue_Tuple_SendOrPostCallback__object___o *)1065353216;
  v18 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v18 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  klass = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v17[2].klass;
  EXIT_ANIMATION_TIME = v18->static_fields->EXIT_ANIMATION_TIME;
  LODWORD(v17->fields.callbackQueue) = 3;
  *(float *)&v17[1].fields.m_CachedPtr = EXIT_ANIMATION_TIME;
  v21 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v13, v14, v15, v16);
  EventDelegate___ctor_29412928(v21, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5940, 0LL);
  if ( !klass )
LABEL_24:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    klass,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  UITweener__PlayForward((UITweener_o *)v17, 0LL);
  v22 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v22, 0LL, 0LL) )
  {
    GoalAnimObject = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v23);
    *(_QWORD *)&this->fields.isCompleatedCount = GoalAnimObject;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.isCompleatedCount,
      GoalAnimObject,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 3, v24);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v33);
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
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Animation_o *Component_srcLineSprite; // x0

  if ( (byte_40F83C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, animClipName);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F83C5 = 1;
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
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.isAfterTakingOver,
      (System_Int32_array **)animClipName,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v13 = *(UnityEngine_GameObject_o **)&this->fields.isCompleatedCount;
    if ( !v13
      || (Component_srcLineSprite = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 v13,
                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
    {
      sub_B170D4();
    }
    UnityEngine_Animation__Play_49744236(
      Component_srcLineSprite,
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

  if ( (byte_40F83BE & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, onEndAnim);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_10646, v7);
    byte_40F83BE = 1;
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
    sub_B16F98(
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
      sub_B16F98(
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
      (System_String_o *)StringLiteral_10646,
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

  if ( (byte_40F83BF & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventSubmarineStatusComponent_TypeInfo, method);
    sub_B16FFC(&StringLiteral_5918, v4);
    byte_40F83BF = 1;
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
    (System_String_o *)StringLiteral_5918,
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
  UnityEngine_GameObject_o *progressPointBg; // x0
  float v17; // s11
  int v18; // s12
  int v19; // s13
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v21; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v27; // x20
  TitleInfoEventSubmarineStatusComponent_c *v28; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *klass; // x21
  float PROGRESS_ANIMATION_TIME; // w8
  EventDelegate_o *v31; // x22
  TitleInfoEventSubmarineStatusComponent_c *v32; // x0
  int onEndAnim; // w9
  int v34; // w8
  struct UISprite_o *gateBg; // x10
  struct UISprite_o *v36; // x9
  UICounterLabel_o *v37; // x0
  struct System_String_o *goalIconAnimPrefabName; // x20
  int32_t onEndAnim_high; // w0
  int32_t v40; // w0
  int v41; // w9
  int v42; // w8
  int v43; // w9
  struct System_String_o *v44; // x10
  struct System_String_o *v45; // x9
  struct System_String_o *v46; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F83BC & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_5955, v8);
    byte_40F83BC = 1;
  }
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)this->fields.progressPointBg, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  *(UnityEngine_Vector3_o *)&v13 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(
                                     this,
                                     HIDWORD(this->fields.onEndAnim),
                                     v12);
  if ( x <= v13 )
  {
    v32 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v32 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5955,
      v32->static_fields->PROGRESS_ANIMATION_TIME,
      0LL);
  }
  else
  {
    progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
    if ( !progressPointBg )
      goto LABEL_42;
    v17 = v13;
    v18 = v14;
    v19 = v15;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        progressPointBg,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
      UnityEngine_Object__Destroy_34809464(Component_srcLineSprite, 0LL);
    }
    v21 = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
    if ( !v21 )
      goto LABEL_42;
    v22 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
            v21,
            (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    if ( !v22 )
      goto LABEL_42;
    *(float *)&v22[3].fields.callbackQueue = x;
    *((float *)&v22[3].fields.callbackQueue + 1) = y;
    *(float *)&v22[4].klass = z;
    *((float *)&v22[4].klass + 1) = v17;
    LODWORD(v22[4].monitor) = v18;
    HIDWORD(v22[4].monitor) = v19;
    v27 = v22;
    v28 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v28 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    klass = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v27[2].klass;
    PROGRESS_ANIMATION_TIME = v28->static_fields->PROGRESS_ANIMATION_TIME;
    LODWORD(v27->fields.callbackQueue) = 3;
    *(float *)&v27[1].fields.m_CachedPtr = PROGRESS_ANIMATION_TIME;
    v31 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v23, v24, v25, v26);
    EventDelegate___ctor_29412928(v31, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5955, 0LL);
    if ( !klass )
      goto LABEL_42;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      klass,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    UITweener__PlayForward((UITweener_o *)v27, 0LL);
  }
  if ( !LOBYTE(this->fields.baseQuestReleaseEntList) )
  {
    onEndAnim = (int)this->fields.onEndAnim;
    v34 = HIDWORD(this->fields.onEndAnim) - onEndAnim;
    if ( v34 )
    {
      gateBg = this->fields.gateBg;
      LOBYTE(this->fields.baseQuestReleaseEntList) = 1;
      if ( !gateBg )
        goto LABEL_42;
      LODWORD(gateBg->fields.topAnchor) = onEndAnim;
      v36 = this->fields.gateBg;
      if ( !v36 )
        goto LABEL_42;
      HIDWORD(v36->fields.topAnchor) = v34;
      v37 = (UICounterLabel_o *)this->fields.gateBg;
      if ( !v37 )
        goto LABEL_42;
      UICounterLabel__PlayAnimation(v37, 0LL);
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
      v40 = UnityEngine_Mathf__Min_40727532(onEndAnim_high, this->fields.userPoint, 0LL);
      v41 = (int)this->fields.onEndAnim;
      v42 = v40 - v41;
      if ( v40 - v41 >= 1 )
      {
        v43 = this->fields.userPoint - v41;
        if ( v43 >= 1 )
        {
          v44 = this->fields.goalIconAnimPrefabName;
          if ( v44 )
          {
            LODWORD(v44[2].klass) = v43;
            v45 = this->fields.goalIconAnimPrefabName;
            if ( v45 )
            {
              HIDWORD(v45[2].klass) = -v42;
              v46 = this->fields.goalIconAnimPrefabName;
              if ( v46 )
              {
                UICounterLabel__PlayAnimation((UICounterLabel_o *)v46, 0LL);
                return;
              }
            }
          }
LABEL_42:
          sub_B170D4();
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

  if ( (byte_40F83D0 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v5);
    byte_40F83D0 = 1;
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

  if ( (byte_40F83D1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__Clear__, method);
    byte_40F83D1 = 1;
  }
  v3 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.minPoint;
  if ( !v3 )
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    v3,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v11; // x0
  Il2CppObject *current; // x21
  bool v13; // w20
  int v14; // w21
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F83D3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_40F83D3 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( System_String__IsNullOrEmpty(spriteName, 0LL)
    || !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.minPoint,
          (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_UIAtlas___) )
  {
    if ( !sprite )
      goto LABEL_20;
    UISprite__set_spriteName(sprite, 0LL, 0LL);
    return 1;
  }
  else
  {
    v11 = *(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&this->fields.minPoint;
    if ( !v11 )
      goto LABEL_20;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v16,
      v11,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v17 = v16;
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v17,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__) )
      {
        v13 = 0;
        v14 = 8;
        goto LABEL_16;
      }
      current = v17.fields.current;
      if ( !v17.fields.current )
        sub_B170D4();
    }
    while ( !UIAtlas__GetSprite((UIAtlas_o *)v17.fields.current, spriteName, 0LL) );
    if ( !sprite )
      sub_B170D4();
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v13 = 1;
    v14 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v17,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v14 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B170D4();
    }
  }
  return v13;
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
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  int32_t type; // w21
  System_Action_o *v50; // x22
  const MethodInfo *v51; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v53; // x3
  struct UISprite_o *areaIcon; // x0
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x3
  struct UISprite_o *gaugeBg; // x0
  const MethodInfo *v58; // x3
  struct UISprite_o *shipIcon; // x0
  const MethodInfo *v60; // x3
  struct UISprite_o *gaugeBar; // x0
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x3
  struct UILabel_o *progressNameLabel; // x0
  const MethodInfo *v65; // x3
  struct UISprite_o *gateGoalIcon; // x0
  const MethodInfo *v67; // x3
  struct UISprite_o *gateNextPointBg; // x0
  const MethodInfo *v69; // x3
  struct UILabel_o *gateNextPointLabel; // x0
  UILabel_o *gaugeFrame; // x21
  System_String_o *v72; // x0
  UILabel_o *progressPointLabel; // x21
  System_String_o *v74; // x0
  const MethodInfo *v75; // x1
  int32_t v76; // w20
  System_Int32_array **QuestReleaseList; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  TitleInfoEventSubmarineStatusComponent_o *v84; // x0
  const MethodInfo *v85; // x2
  TitleInfoEventSubmarineStatusComponent_o *ProgressQuestReleaseEnt; // x21
  const MethodInfo *v87; // x2
  QuestReleaseEntity_o *CurrentQuestReleaseEnt; // x0
  const MethodInfo *v89; // x1
  QuestReleaseEntity_o *v90; // x20
  const MethodInfo *v91; // x5
  int32_t questId; // w8
  int32_t ValueInt; // w0
  int32_t v94; // w0
  int32_t v95; // w21
  System_String_o *v96; // x22
  Il2CppObject *v97; // x0
  System_String_o *v98; // x22
  System_String_o *v99; // x0
  System_Int32_array **v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  struct System_String_o *goalIconAnimPrefabName; // x22
  struct System_String_o *v108; // x0
  const MethodInfo *v109; // x3
  struct System_String_o *v110; // x0
  UnityEngine_GameObject_o *v111; // x0
  TitleInfoEventSubmarineStatusComponent_c *v112; // x0
  UICounterLabel_o *gateBg; // x20
  int32_t onEndAnim; // w21
  float PROGRESS_ANIMATION_TIME; // s8
  System_String_o *v116; // x0
  UICounterLabel_o *v117; // x0
  UnityEngine_GameObject_o *progressPointBg; // x20
  const MethodInfo *v119; // x2
  const MethodInfo *v120; // x1
  int32_t userPoint; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F83B6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, eventDetailEntity);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__, v13);
    sub_B16FFC(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_18453, v15);
    sub_B16FFC(&StringLiteral_18477, v16);
    sub_B16FFC(&StringLiteral_18475, v17);
    sub_B16FFC(&StringLiteral_5705, v18);
    sub_B16FFC(&StringLiteral_5635, v19);
    sub_B16FFC(&StringLiteral_1216, v20);
    sub_B16FFC(&StringLiteral_5706, v21);
    sub_B16FFC(&StringLiteral_5713, v22);
    sub_B16FFC(&StringLiteral_18517, v23);
    sub_B16FFC(&StringLiteral_18472, v24);
    sub_B16FFC(&StringLiteral_18466, v25);
    sub_B16FFC(&StringLiteral_18474, v26);
    sub_B16FFC(&StringLiteral_5702, v27);
    sub_B16FFC(&StringLiteral_18473, v28);
    sub_B16FFC(&StringLiteral_18476, v29);
    byte_40F83B6 = 1;
  }
  this->fields.mapAssetData = (struct AssetData_o *)eventDetailEntity;
  p_mapAssetData = &this->fields.mapAssetData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mapAssetData,
    (System_Int32_array **)eventDetailEntity,
    (System_String_array **)mapAssetData,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.eventAssetData = mapAssetData;
  sub_B16F98(
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
  sub_B16F98(
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
  v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v45, v46, v47, v48);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__, 0LL);
  TitleInfoEventSubmarineStatusComponent__LoadEventUIAssetData(this, type, v50, v51);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_27420076(gameObject, 62.0, 0.0, 0.0, 0LL);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.areaIcon,
    (System_String_o *)StringLiteral_18476,
    v53);
  areaIcon = this->fields.areaIcon;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))areaIcon->klass->vtable._33_MakePixelPerfect.method)(
    areaIcon,
    areaIcon->klass->vtable._34_get_minWidth.methodPtr);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.titleLabel,
    (System_String_o *)StringLiteral_1216,
    v55);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeBg,
    (System_String_o *)StringLiteral_18473,
    v56);
  gaugeBg = this->fields.gaugeBg;
  if ( !gaugeBg )
    goto LABEL_54;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))gaugeBg->klass->vtable._33_MakePixelPerfect.method)(
    gaugeBg,
    gaugeBg->klass->vtable._34_get_minWidth.methodPtr);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.shipIcon,
    (System_String_o *)StringLiteral_18475,
    v58);
  shipIcon = this->fields.shipIcon;
  if ( !shipIcon )
    goto LABEL_54;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))shipIcon->klass->vtable._33_MakePixelPerfect.method)(
    shipIcon,
    shipIcon->klass->vtable._34_get_minWidth.methodPtr);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeBar,
    (System_String_o *)StringLiteral_18474,
    v60);
  gaugeBar = this->fields.gaugeBar;
  if ( !gaugeBar )
    goto LABEL_54;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))gaugeBar->klass->vtable._33_MakePixelPerfect.method)(
    gaugeBar,
    gaugeBar->klass->vtable._34_get_minWidth.methodPtr);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.shipPanelObj,
    (System_String_o *)StringLiteral_18477,
    v62);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.progressNameLabel,
    (System_String_o *)StringLiteral_18517,
    v63);
  progressNameLabel = this->fields.progressNameLabel;
  if ( !progressNameLabel )
    goto LABEL_54;
  ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))progressNameLabel->klass->vtable._33_MakePixelPerfect.method)(
    progressNameLabel,
    progressNameLabel->klass->vtable._34_get_minWidth.methodPtr);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateGoalIcon,
    (System_String_o *)StringLiteral_18466,
    v65);
  gateGoalIcon = this->fields.gateGoalIcon;
  if ( !gateGoalIcon )
    goto LABEL_54;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))gateGoalIcon->klass->vtable._33_MakePixelPerfect.method)(
    gateGoalIcon,
    gateGoalIcon->klass->vtable._34_get_minWidth.methodPtr);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateNextPointBg,
    (System_String_o *)StringLiteral_18453,
    v67);
  gateNextPointBg = this->fields.gateNextPointBg;
  if ( !gateNextPointBg )
    goto LABEL_54;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))gateNextPointBg->klass->vtable._33_MakePixelPerfect.method)(
    gateNextPointBg,
    gateNextPointBg->klass->vtable._34_get_minWidth.methodPtr);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.gateNextPointLabel,
    (System_String_o *)StringLiteral_18472,
    v69);
  gateNextPointLabel = this->fields.gateNextPointLabel;
  if ( !gateNextPointLabel )
    goto LABEL_54;
  ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))gateNextPointLabel->klass->vtable._33_MakePixelPerfect.method)(
    gateNextPointLabel,
    gateNextPointLabel->klass->vtable._34_get_minWidth.methodPtr);
  gaugeFrame = (UILabel_o *)this->fields.gaugeFrame;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_5713, 0LL);
  if ( !gaugeFrame )
    goto LABEL_54;
  UILabel__set_text(gaugeFrame, v72, 0LL);
  progressPointLabel = this->fields.progressPointLabel;
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_5702, 0LL);
  if ( !progressPointLabel )
    goto LABEL_54;
  UILabel__set_text(progressPointLabel, v74, 0LL);
  if ( !*p_mapAssetData )
    goto LABEL_54;
  v76 = (*p_mapAssetData)->fields.type;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  }
  QuestReleaseList = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(v76, v75);
  *(_QWORD *)&this->fields.isGoalAnimToLoop = QuestReleaseList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.isGoalAnimToLoop,
    QuestReleaseList,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  ProgressQuestReleaseEnt = (TitleInfoEventSubmarineStatusComponent_o *)TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
                                                                          v84,
                                                                          *(System_Collections_Generic_List_QuestReleaseEntity__o **)&this->fields.isGoalAnimToLoop,
                                                                          v85);
  CurrentQuestReleaseEnt = TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
                             ProgressQuestReleaseEnt,
                             *(System_Collections_Generic_List_QuestReleaseEntity__o **)&this->fields.isGoalAnimToLoop,
                             v87);
  if ( CurrentQuestReleaseEnt )
    v90 = CurrentQuestReleaseEnt;
  else
    v90 = (QuestReleaseEntity_o *)ProgressQuestReleaseEnt;
  HIDWORD(this->fields.onEndAnim) = TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(this, v89);
  if ( v90 )
    questId = v90->fields.questId;
  else
    questId = 0;
  this->fields.progressQuestId = questId;
  if ( ProgressQuestReleaseEnt )
    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)ProgressQuestReleaseEnt, 0LL);
  else
    ValueInt = 0;
  this->fields.userOldPoint = ValueInt;
  if ( v90 )
    v94 = QuestReleaseEntity__getValueInt(v90, 0LL);
  else
    v94 = 0;
  this->fields.userPoint = v94;
  TitleInfoEventSubmarineStatusComponent__SetupOldData(
    this,
    (int32_t *)&this->fields.onEndAnim,
    (int32_t *)&this->fields.isLastGoalPlayed,
    (int32_t *)&this->fields.goalAnimObject,
    (bool *)&this->fields.goalAnimObject + 4,
    v91);
  v95 = UnityEngine_Mathf__Max_40727628(0, this->fields.userPoint - LODWORD(this->fields.onEndAnim), 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_5705, 0LL);
  userPoint = this->fields.userPoint;
  v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userPoint);
  v98 = System_String__Format(v96, v97, 0LL);
  v99 = LocalizationManager__Get((System_String_o *)StringLiteral_5706, 0LL);
  v100 = (System_Int32_array **)System_String__Concat_43743732(v98, v99, 0LL);
  *(_QWORD *)&this->fields.currentQuestId = v100;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.currentQuestId, v100, v101, v102, v103, v104, v105, v106);
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
    v95,
    TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields->PROGRESS_ANIMATION_TIME,
    *(System_String_o **)&this->fields.currentQuestId,
    0,
    0LL);
  v108 = this->fields.goalIconAnimPrefabName;
  if ( !v108 )
    goto LABEL_54;
  UICounterLabel__SetCountLabel((UICounterLabel_o *)v108, v95, 0LL);
  if ( TitleInfoEventSubmarineStatusComponent__IsAllClear(this, v90, (int32_t)this->fields.onEndAnim, v109) )
  {
    v110 = this->fields.goalIconAnimPrefabName;
    if ( !v110 )
      goto LABEL_54;
    v111 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v110, 0LL);
    if ( !v111 )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive(v111, 0, 0LL);
  }
  v112 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  gateBg = (UICounterLabel_o *)this->fields.gateBg;
  onEndAnim = (int32_t)this->fields.onEndAnim;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v112 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  PROGRESS_ANIMATION_TIME = v112->static_fields->PROGRESS_ANIMATION_TIME;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v116 = LocalizationManager__Get((System_String_o *)StringLiteral_5635, 0LL);
  if ( !gateBg
    || (UICounterLabel__Setup(gateBg, onEndAnim, PROGRESS_ANIMATION_TIME, v116, 0, 0LL),
        (v117 = (UICounterLabel_o *)this->fields.gateBg) == 0LL) )
  {
LABEL_54:
    sub_B170D4();
  }
  UICounterLabel__SetCountLabel(v117, (int32_t)this->fields.onEndAnim, 0LL);
  progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  v122 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, (int32_t)this->fields.onEndAnim, v119);
  GameObjectExtensions__SetLocalPosition(progressPointBg, v122, 0LL);
  TitleInfoEventSubmarineStatusComponent__SetupAnimation(this, v120);
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
  struct UISprite_o *gateGoalIcon; // x0
  void (__fastcall *v11)(float); // x8
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
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
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v27; // x2
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v28; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v29; // x21
  peRenderTexture_ChangeLayerObject_o *v30; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v31; // x21
  QuestReleaseEntity_o *v32; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v37; // x22
  peRenderTexture_ChangeLayerObject_o *v38; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v39; // x22
  QuestReleaseEntity_o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v45; // x23
  QuestReleaseEntity_o *v46; // x22
  int32_t ValueInt; // w0
  int v48; // w8
  UnityEngine_Component_o *shipIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v51; // x0
  srcLineSprite_o *v52; // x0
  struct UISprite_o *v53; // x0
  UnityEngine_Object_o *v54; // x20
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x2
  System_Int32_array **v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_o *v64; // x1
  const MethodInfo *v65; // x2
  UnityEngine_GameObject_o *progressPointBg; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  long double v68; // q0
  struct UISprite_o *v69; // x0
  void (__fastcall **klass)(long double); // x8
  UnityEngine_GameObject_o *v71; // x0
  srcLineSprite_o *v72; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F83B7 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_System_Predicate_QuestReleaseEntity___ctor__, v5);
    sub_B16FFC(&System_Predicate_QuestReleaseEntity__TypeInfo, v6);
    sub_B16FFC(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__, v7);
    sub_B16FFC(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__, v8);
    sub_B16FFC(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__, v9);
    byte_40F83B7 = 1;
  }
  gateGoalIcon = this->fields.gateGoalIcon;
  if ( !gateGoalIcon )
    goto LABEL_45;
  v11 = (void (__fastcall *)(float))gateGoalIcon->klass->vtable._8_set_alpha.method;
  if ( SLODWORD(this->fields.onEndAnim) >= this->fields.userPoint )
  {
    v11(0.0);
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
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.isCompleatedCount,
        GoalAnimObject,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v18);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v27);
  }
  else
  {
    v11(1.0);
  }
  v28 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v29 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_QuestReleaseEntity__TypeInfo,
                                                                   v12,
                                                                   v13,
                                                                   v14,
                                                                   v15);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v29,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v28 )
    goto LABEL_45;
  v30 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          v28,
          (System_Predicate_T__o *)v29,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v31 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v32 = (QuestReleaseEntity_o *)v30;
  v37 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_QuestReleaseEntity__TypeInfo,
                                                                   v33,
                                                                   v34,
                                                                   v35,
                                                                   v36);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v37,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v31 )
    goto LABEL_45;
  v38 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          v31,
          (System_Predicate_T__o *)v37,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v39 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v40 = (QuestReleaseEntity_o *)v38;
  v45 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_QuestReleaseEntity__TypeInfo,
                                                                   v41,
                                                                   v42,
                                                                   v43,
                                                                   v44);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v45,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v39 )
    goto LABEL_45;
  v46 = (QuestReleaseEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v39,
                                  (System_Predicate_T__o *)v45,
                                  (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v32 )
    LODWORD(v32) = QuestReleaseEntity__getValueInt(v32, 0LL);
  if ( v40 )
    LODWORD(v40) = QuestReleaseEntity__getValueInt(v40, 0LL);
  if ( v46 )
    ValueInt = QuestReleaseEntity__getValueInt(v46, 0LL);
  else
    ValueInt = 0;
  if ( (int)v40 >= ValueInt )
    goto LABEL_41;
  v48 = *(_DWORD *)&this->fields.isLastGoalPlayed;
  if ( !v48 )
  {
    if ( this->fields.progressQuestId >= 1 )
    {
      progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
      if ( progressPointBg )
      {
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    progressPointBg,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
        if ( Component_srcLineSprite )
        {
          ((void (__fastcall *)(srcLineSprite_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
            Component_srcLineSprite,
            Component_srcLineSprite->klass[1]._1.declaringType,
            0.0);
          v69 = this->fields.gateGoalIcon;
          if ( v69 )
          {
            klass = (void (__fastcall **)(long double))v69->klass;
            LODWORD(v68) = 0;
LABEL_44:
            klass[55](v68);
            return;
          }
        }
      }
LABEL_45:
      sub_B170D4();
    }
LABEL_41:
    v71 = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
    if ( v71 )
    {
      v72 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
              v71,
              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
      if ( v72 )
      {
        klass = (void (__fastcall **)(long double))v72->klass;
        LODWORD(v68) = 1.0;
        goto LABEL_44;
      }
    }
    goto LABEL_45;
  }
  if ( (int)v32 >= ValueInt || v48 < 1 )
    goto LABEL_41;
  shipIcon = (UnityEngine_Component_o *)this->fields.shipIcon;
  if ( !shipIcon )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject(shipIcon, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)this->fields.progressPointBg, LocalPosition, 0LL);
  v51 = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  if ( !v51 )
    goto LABEL_45;
  v52 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          v51,
          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !v52 )
    goto LABEL_45;
  ((void (__fastcall *)(srcLineSprite_o *, Il2CppClass *, float))v52->klass[1]._1.castClass)(
    v52,
    v52->klass[1]._1.declaringType,
    1.0);
  v53 = this->fields.gateGoalIcon;
  if ( !v53 )
    goto LABEL_45;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v53->klass->vtable._8_set_alpha.method)(
    v53,
    v53->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  v54 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v54, 0LL, 0LL) )
  {
    v57 = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v55);
    *(_QWORD *)&this->fields.isCompleatedCount = v57;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.isCompleatedCount, v57, v58, v59, v60, v61, v62, v63);
  }
  v64 = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v56);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, v64, v65);
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
  bool v14; // w0
  __int64 v15; // x1
  TerminalPramsManager_c *v16; // x8
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x9
  struct AssetData_o *mapAssetData; // x10
  TerminalPramsManager_c *v19; // x0
  EventSaveData_o *v20; // x0
  System_String_array *ValueByArray; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x8
  System_String_array *v25; // x23
  System_String_o *v26; // x20
  TerminalPramsManager_c *v27; // x0
  int32_t onEndAnim_high; // w8
  struct UISprite_o *gateGoalIcon; // x0
  UnityEngine_GameObject_o *progressPointBg; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  int32_t eventDetailEnt; // w20

  if ( (byte_40F83C2 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, oldPoint);
    sub_B16FFC(&CondType_TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v12);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v13);
    byte_40F83C2 = 1;
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
  v14 = TerminalPramsManager__CheckEventSubmarinePointSaveData(0LL);
  v16 = TerminalPramsManager_TypeInfo;
  if ( v14 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E3E )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v15);
      byte_40F6E3E = 1;
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
      if ( !byte_40F6E3E )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v15);
        byte_40F6E3E = 1;
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
        if ( !byte_40F6E3E )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v15);
          byte_40F6E3E = 1;
        }
        v19 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
        }
        v20 = v19->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
        if ( v20 )
        {
          ValueByArray = EventSaveData__GetValueByArray(v20, 0x2Cu, 0LL);
          if ( ValueByArray )
          {
            v24 = *(_QWORD *)&ValueByArray->max_length;
            v25 = ValueByArray;
            if ( v24 )
            {
              if ( !(_DWORD)v24 )
              {
                sub_B17100(ValueByArray, v22, v23);
                sub_B170A0();
              }
              *oldPoint = System_Int32__Parse(ValueByArray->m_Items[0], 0LL);
              if ( (int)v25->max_length >= 2 )
              {
                *oldQuestId = System_Int32__Parse(v25->m_Items[1], 0LL);
                if ( (int)v25->max_length >= 3 )
                {
                  *progressQuestId = System_Int32__Parse(v25->m_Items[2], 0LL);
                  if ( (int)v25->max_length >= 4 )
                  {
                    v26 = v25->m_Items[3];
                    if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !bool_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                    }
                    *isLastGoalPlayed = System_Boolean__Parse(v26, 0LL);
                  }
                }
              }
            }
          }
          return;
        }
LABEL_64:
        sub_B170D4();
      }
    }
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v16);
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v15);
    byte_40F6057 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  if ( v27->static_fields->_QuestId_k__BackingField != HIDWORD(this->fields.eventDetailEnt) )
  {
    onEndAnim_high = HIDWORD(this->fields.onEndAnim);
    LOBYTE(this[1].klass) = 1;
    *oldPoint = onEndAnim_high;
    *oldQuestId = this->fields.progressQuestId;
    *progressQuestId = this->fields.progressQuestId;
    gateGoalIcon = this->fields.gateGoalIcon;
    if ( !gateGoalIcon )
      goto LABEL_64;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))gateGoalIcon->klass->vtable._8_set_alpha.method)(
      gateGoalIcon,
      gateGoalIcon->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      0.0);
    progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
    if ( !progressPointBg )
      goto LABEL_64;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                progressPointBg,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    if ( !Component_srcLineSprite )
      goto LABEL_64;
    ((void (__fastcall *)(srcLineSprite_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
      Component_srcLineSprite,
      Component_srcLineSprite->klass[1]._1.declaringType,
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
    sub_B170D4();
  return n->fields.questId == *(_DWORD *)&this->fields.isLastGoalPlayed;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B170D4();
  return n->fields.questId == LODWORD(this->fields.goalAnimObject);
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B170D4();
  return n->fields.questId == this->fields.progressQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_0(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B170D4();
  return n->fields.questId == *(_DWORD *)&this->fields.isLastGoalPlayed;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B170D4();
  return n->fields.questId == LODWORD(this->fields.goalAnimObject);
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return (float)shipIcon->fields.mWidth;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F782C & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo, v1);
    byte_40F782C = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(TitleInfoEventSubmarineStatusComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  int32_t ValueInt; // w0

  if ( !a || (ValueInt = QuestReleaseEntity__getValueInt(a, 0LL), !b) )
    sub_B170D4();
  return ValueInt - QuestReleaseEntity__getValueInt(b, 0LL);
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
    sub_B170D4();
  return n->fields.questId == _4__this->fields.progressQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___EndAnimation_b__1(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B170D4();
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct TitleInfoEventSubmarineStatusComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  _4__this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.atlasList,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.callback, 0LL);
}