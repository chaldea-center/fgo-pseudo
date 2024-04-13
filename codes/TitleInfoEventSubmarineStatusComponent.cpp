void __fastcall TitleInfoEventSubmarineStatusComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TitleInfoEventSubmarineStatusComponent_c *v4; // x8

  if ( (byte_42E6C0D & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v1, v2, v3);
    byte_42E6C0D = 1;
  }
  TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields->ENTRY_ANIMATION_TIME = 0.3;
  TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields->PROGRESS_ANIMATION_TIME = 1.0;
  v4 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields->EXIT_ANIMATION_TIME = 0.5;
  v4->static_fields->GOAL_ANIMATION_TIME = 0.3;
  v4->static_fields->MAP_CHANGE_WAIT_TIME = 0.3;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___ctor(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E6C0C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_UIAtlas__TypeInfo, v5, v6, v7);
    byte_42E6C0C = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  *(_QWORD *)&this->fields.minPoint = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.minPoint,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
    sub_B5D69C(v5, v6);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  AssetData_o *eventAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  const MethodInfo *v13; // x2
  UnityEngine_GameObject_o *v14; // x21
  System_Int32_array **GoalAnimName; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_GameObject_o *v22; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v25; // x0

  if ( (byte_42E6BFB & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E6BFB = 1;
  }
  eventAssetData = this->fields.eventAssetData;
  if ( !eventAssetData )
    return 0LL;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               eventAssetData,
                                                                               *(System_String_o **)&this->fields.targetQuestId,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
  {
    GoalAnimName = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v13);
    *(_QWORD *)&this->fields.isAfterTakingOver = GoalAnimName;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.isAfterTakingOver,
      GoalAnimName,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v22 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v22 )
      sub_B5D69C(0LL, v23);
    v14 = v22;
    gameObject = UnityEngine_GameObject__get_gameObject(v22, 0LL);
    GameObjectExtensions__SafeSetParent_32436524(gameObject, (UnityEngine_GameObject_o *)this->fields.statusBg, 0LL);
    v25 = UnityEngine_GameObject__get_gameObject(v14, 0LL);
    GameObjectExtensions__ResetLocalPosition(v25, 0LL);
  }
  return v14;
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
  if ( (byte_42E6BFF & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, currentQuestId, progressQuestId, isLastGoalPlayed);
    byte_42E6BFF = 1;
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
  return TitleInfoEventSubmarineStatusComponent__CreateSaveData_21895852(v5, v6, v7, v9, v8);
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__CreateSaveData_21895852(
        System_String_o *userPoint,
        System_String_o *currentQuestId,
        System_String_o *progressQuestId,
        System_String_o *isLastGoalPlayed,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Text_StringBuilder_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E6C00 & 1) == 0 )
  {
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, (_DWORD)currentQuestId, (_DWORD)progressQuestId, isLastGoalPlayed);
    sub_B5D5C4(&StringLiteral_707/*","*/, v9, v10, v11);
    byte_42E6C00 = 1;
  }
  v12 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v12, 0LL);
  if ( !v12 )
    sub_B5D69C(v13, v14);
  System_Text_StringBuilder__Append_42953744(v12, userPoint, 0LL);
  System_Text_StringBuilder__Append_42953744(v12, (System_String_o *)StringLiteral_707/*","*/, 0LL);
  System_Text_StringBuilder__Append_42953744(v12, currentQuestId, 0LL);
  System_Text_StringBuilder__Append_42953744(v12, (System_String_o *)StringLiteral_707/*","*/, 0LL);
  System_Text_StringBuilder__Append_42953744(v12, progressQuestId, 0LL);
  System_Text_StringBuilder__Append_42953744(v12, (System_String_o *)StringLiteral_707/*","*/, 0LL);
  System_Text_StringBuilder__Append_42953744(v12, isLastGoalPlayed, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v12->klass->vtable._3_ToString.method)(
                              v12,
                              v12->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__DestroyGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *v8; // x20
  const MethodInfo *v9; // x2
  System_Int32_array **GoalAnimName; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  BattleServantConfConponent_o *p_isCompleatedCount; // x19
  UnityEngine_Object_o *klass; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42E6BFD & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E6BFD = 1;
  }
  v8 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v8, 0LL, 0LL) )
  {
    GoalAnimName = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 0, v9);
    *(_QWORD *)&this->fields.isAfterTakingOver = GoalAnimName;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.isAfterTakingOver,
      GoalAnimName,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    Component_srcLineSprite = *(UnityEngine_GameObject_o **)&this->fields.isCompleatedCount;
    if ( !Component_srcLineSprite
      || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  Component_srcLineSprite,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
    {
      sub_B5D69C(Component_srcLineSprite, v17);
    }
    p_isCompleatedCount = (BattleServantConfConponent_o *)&this->fields.isCompleatedCount;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Component_srcLineSprite, 0LL);
    klass = (UnityEngine_Object_o *)p_isCompleatedCount->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(klass, 0LL);
    p_isCompleatedCount->klass = 0LL;
    sub_B5D560(p_isCompleatedCount, 0LL, v21, v22, v23, v24, v25, v26);
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  __int64 v35; // x21
  MissionNotifyManager_o *BeforeEventSubmarineSaveData_k__BackingField; // x0
  __int64 v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v46; // x2
  int v47; // w2
  __int64 v48; // x3
  int onEndAnim_high; // w8
  int32_t progressQuestId; // w9
  TerminalPramsManager_c *v51; // x0
  EventSaveData_o *v52; // x22
  int v53; // w1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  TerminalPramsManager_c *v60; // x0
  BattleServantConfConponent_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v62; // x0
  System_String_array *ValueByArray; // x0
  System_String_array *v64; // x22
  int32_t v65; // w23
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v66; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v67; // x25
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v68; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v69; // x25
  int v70; // w2
  __int64 v71; // x3
  const MethodInfo *v72; // x4
  struct AssetData_o *mapAssetData; // x8
  __int64 v74; // x9
  int32_t v75; // w21
  int v76; // w24
  __int64 v77; // x20
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7

  if ( (byte_42E6BF7 & 1) == 0 )
  {
    sub_B5D5C4(&EventSaveData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Predicate_QuestReleaseEntity___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Predicate_QuestReleaseEntity__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__, v26, v27, v28);
    sub_B5D5C4(&Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__, v29, v30, v31);
    sub_B5D5C4(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo, v32, v33, v34);
    byte_42E6BF7 = 1;
  }
  v35 = sub_B5D694(TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_TypeInfo);
  TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___ctor(
    (TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *)v35,
    0LL);
  if ( !v35 )
    goto LABEL_70;
  *(_QWORD *)(v35 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v35 + 16), (System_Int32_array **)this, v38, v39, v40, v41, v42, v43);
  if ( LOBYTE(this->fields.animClipName) )
  {
    LOBYTE(this->fields.animClipName) = 0;
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v44);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v46);
  }
  LOBYTE(this[1].klass) = 0;
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  BeforeEventSubmarineSaveData_k__BackingField = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  if ( !byte_42E5CDC )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v37, v47, v48);
    byte_42E5CDC = 1;
  }
  v51 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v51 = TerminalPramsManager_TypeInfo;
  }
  if ( !v51->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
  {
    v52 = (EventSaveData_o *)sub_B5D694(EventSaveData_TypeInfo);
    EventSaveData___ctor(v52, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CB9 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v53, (_DWORD)v54, v55);
      byte_42E5CB9 = 1;
    }
    v60 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v60 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (BattleServantConfConponent_o *)&v60->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (BattleServantConfConponent_c *)v52;
    sub_B5D560(p_BeforeEventSubmarineSaveData_k__BackingField, (System_Int32_array **)v52, v54, v55, v56, v57, v58, v59);
    v51 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v51);
  if ( !byte_42E5CDC )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v37, v47, v48);
    byte_42E5CDC = 1;
  }
  v62 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v62 = TerminalPramsManager_TypeInfo;
  }
  BeforeEventSubmarineSaveData_k__BackingField = (MissionNotifyManager_o *)v62->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
LABEL_70:
    sub_B5D69C(BeforeEventSubmarineSaveData_k__BackingField, v37);
  ValueByArray = EventSaveData__GetValueByArray(
                   (EventSaveData_o *)BeforeEventSubmarineSaveData_k__BackingField,
                   0x2Cu,
                   0LL);
  v64 = ValueByArray;
  if ( !ValueByArray )
  {
    v65 = 0;
    goto LABEL_44;
  }
  if ( (int)ValueByArray->max_length < 2 )
  {
    v65 = 0;
    goto LABEL_43;
  }
  v65 = System_Int32__Parse(ValueByArray->m_Items[1], 0LL);
  if ( (int)v64->max_length < 3 )
  {
LABEL_43:
    LODWORD(v64) = 0;
    goto LABEL_44;
  }
  LODWORD(v64) = System_Int32__Parse(v64->m_Items[2], 0LL);
LABEL_44:
  v66 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v67 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v67,
    (Il2CppObject *)v35,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v66 )
    goto LABEL_70;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         v66,
         (System_Predicate_T__o *)v67,
         (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
  {
    v65 = this->fields.progressQuestId;
  }
  *(_DWORD *)(v35 + 24) = UnityEngine_Mathf__Max_41629432((int32_t)v64, this->fields.progressQuestId, 0LL);
  v68 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v69 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v69,
    (Il2CppObject *)v35,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0__EndAnimation_b__1__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v68 )
    goto LABEL_70;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         v68,
         (System_Predicate_T__o *)v69,
         (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
  {
    LODWORD(v64) = *(_DWORD *)(v35 + 24);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CDC )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v37, v70, v71);
    byte_42E5CDC = 1;
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
  v74 = *(_QWORD *)&BeforeEventSubmarineSaveData_k__BackingField[2].fields.mNoDispInfos[10].fields._size;
  if ( !v74 )
    goto LABEL_70;
  *(_DWORD *)(v74 + 16) = mapAssetData->fields.type;
  if ( !byte_42E5CDC )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v37, v70, v71);
    BeforeEventSubmarineSaveData_k__BackingField = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    byte_42E5CDC = 1;
  }
  if ( (BeforeEventSubmarineSaveData_k__BackingField[3].fields.dispInfosIndex & 0x4000000) != 0
    && !BeforeEventSubmarineSaveData_k__BackingField[2].fields.dispInfosIndex )
  {
    j_il2cpp_runtime_class_init_0(BeforeEventSubmarineSaveData_k__BackingField);
    BeforeEventSubmarineSaveData_k__BackingField = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
  }
  v75 = HIDWORD(this->fields.onEndAnim);
  v76 = BYTE4(this->fields.goalAnimObject);
  v77 = *(_QWORD *)&BeforeEventSubmarineSaveData_k__BackingField[2].fields.mNoDispInfos[10].fields._size;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  }
  BeforeEventSubmarineSaveData_k__BackingField = (MissionNotifyManager_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData(
                                                                             v75,
                                                                             v65,
                                                                             (int32_t)v64,
                                                                             v76 != 0,
                                                                             v72);
  if ( !v77 )
    goto LABEL_70;
  *(_QWORD *)(v77 + 24) = BeforeEventSubmarineSaveData_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v77 + 24),
    (System_Int32_array **)BeforeEventSubmarineSaveData_k__BackingField,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(0LL);
  ActionExtensions__Call((System_Action_o *)this->fields.nextPointTextFormat, 0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndExitAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TitleInfoEventSubmarineStatusComponent_c *v8; // x0

  if ( (byte_42E6BF1 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10801/*"PlayEntryAnimation"*/, v5, v6, v7);
    byte_42E6BF1 = 1;
  }
  TitleInfoEventSubmarineStatusComponent__DestroyGoalAnim(this, method);
  v8 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v8 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10801/*"PlayEntryAnimation"*/,
    v8->static_fields->MAP_CHANGE_WAIT_TIME,
    0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__EndProgressAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t v11; // w0
  const MethodInfo *v12; // x1
  int32_t userOldPoint; // w8
  UnityEngine_Object_o *v14; // x21
  bool *p_isCompleatedCount; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  UnityEngine_GameObject_o *goalIconAnimPrefabName; // x0
  UnityEngine_Object_o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  TitleInfoEventSubmarineStatusComponent_o *ProgressQuestReleaseEnt; // x21
  const MethodInfo *v28; // x2
  QuestReleaseEntity_o *CurrentQuestReleaseEnt; // x0
  const MethodInfo *v30; // x3
  QuestReleaseEntity_o *v31; // x1
  const MethodInfo *v32; // x1
  System_Int32_array **GoalAnimObject; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_Object_o *v40; // x20
  const MethodInfo *v41; // x2
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v43; // x2
  TitleInfoEventSubmarineStatusComponent_c *v44; // x0

  if ( (byte_42E6BF4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_6014/*"EndAnimation"*/, v8, v9, v10);
    byte_42E6BF4 = 1;
  }
  v11 = UnityEngine_Mathf__Min_41629336(HIDWORD(this->fields.onEndAnim), this->fields.userPoint, 0LL);
  userOldPoint = this->fields.userOldPoint;
  LODWORD(this->fields.onEndAnim) = v11;
  if ( userOldPoint >= v11
    || this->fields.userPoint > v11
    || TitleInfoEventSubmarineStatusComponent__IsPlayingGoalAnim(this, v12) )
  {
    TitleInfoEventSubmarineStatusComponent__EndAnimation(this, v12);
    return;
  }
  v14 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_isCompleatedCount = &this->fields.isCompleatedCount;
  v16 = UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
  if ( v16 )
  {
    goalIconAnimPrefabName = *(UnityEngine_GameObject_o **)p_isCompleatedCount;
    if ( !*(_QWORD *)p_isCompleatedCount )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(goalIconAnimPrefabName, 0, 0LL);
    v20 = *(UnityEngine_Object_o **)p_isCompleatedCount;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v20, 0LL);
    *(_QWORD *)p_isCompleatedCount = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.isCompleatedCount, 0LL, v21, v22, v23, v24, v25, v26);
  }
  ProgressQuestReleaseEnt = (TitleInfoEventSubmarineStatusComponent_o *)TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
                                                                          (TitleInfoEventSubmarineStatusComponent_o *)v16,
                                                                          *(System_Collections_Generic_List_QuestReleaseEntity__o **)&this->fields.isGoalAnimToLoop,
                                                                          v18);
  CurrentQuestReleaseEnt = TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
                             ProgressQuestReleaseEnt,
                             *(System_Collections_Generic_List_QuestReleaseEntity__o **)&this->fields.isGoalAnimToLoop,
                             v28);
  if ( CurrentQuestReleaseEnt )
    v31 = CurrentQuestReleaseEnt;
  else
    v31 = (QuestReleaseEntity_o *)ProgressQuestReleaseEnt;
  if ( TitleInfoEventSubmarineStatusComponent__IsAllClear(this, v31, HIDWORD(this->fields.onEndAnim), v30) )
  {
    goalIconAnimPrefabName = (UnityEngine_GameObject_o *)this->fields.goalIconAnimPrefabName;
    if ( !goalIconAnimPrefabName
      || (goalIconAnimPrefabName = UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)goalIconAnimPrefabName,
                                     0LL)) == 0LL )
    {
LABEL_33:
      sub_B5D69C(goalIconAnimPrefabName, v17);
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
  GoalAnimObject = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v32);
  *(_QWORD *)&this->fields.isCompleatedCount = GoalAnimObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isCompleatedCount,
    GoalAnimObject,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v40, 0LL, 0LL) )
  {
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v41);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v43);
  }
  v44 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v44 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6014/*"EndAnimation"*/,
    v44->static_fields->GOAL_ANIMATION_TIME,
    0LL);
}


QuestReleaseEntity_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Collections_Generic_List_QuestReleaseEntity__o *baseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x20
  int32_t klass; // w19
  int v21; // w19
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E6C03 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)baseList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v11, v12, v13);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_B5D5C4(
                                                         &Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__,
                                                         v14,
                                                         v15,
                                                         v16);
    byte_42E6C03 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( !baseList )
    sub_B5D69C(this, baseList);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)baseList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v17 )
      break;
    current = v23.fields.current;
    if ( !v23.fields.current )
      sub_B5D69C(v17, v18);
    klass = (int32_t)v23.fields.current[1].klass;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_25877652(klass, -1, 0, 0LL) )
    {
      v21 = 3;
      goto LABEL_13;
    }
  }
  current = 0LL;
  v21 = 1;
LABEL_13:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  if ( (unsigned int)(v21 + 1) >> 2 )
    return (QuestReleaseEntity_o *)current;
  else
    return 0LL;
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E6C05 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6286/*"EventUI/Prefabs/{0}"*/, v5, v6, v7);
    byte_42E6C05 = 1;
  }
  v10 = eventId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format((System_String_o *)StringLiteral_6286/*"EventUI/Prefabs/{0}"*/, v8, 0LL);
}


UnityEngine_GameObject_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_42E6C0B & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)name, (_DWORD)method, v3);
    byte_42E6C0B = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.atlasList;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  return result;
}


System_String_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t animType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_String_o *v18; // x0
  __int64 *v19; // x8

  if ( (byte_42E6BFA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16347/*"_loop"*/, animType, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_16371/*"_start"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_16345/*"_last"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_16334/*"_end"*/, v15, v16, v17);
    byte_42E6BFA = 1;
  }
  v18 = *(System_String_o **)&this->fields.targetQuestId;
  if ( BYTE4(this->fields.goalAnimObject) )
    v18 = System_String__Concat_44577788(v18, (System_String_o *)StringLiteral_16345/*"_last"*/, 0LL);
  switch ( animType )
  {
    case 3:
      v19 = &StringLiteral_16334/*"_end"*/;
      return System_String__Concat_44577788(v18, (System_String_o *)*v19, 0LL);
    case 2:
      v19 = &StringLiteral_16347/*"_loop"*/;
      return System_String__Concat_44577788(v18, (System_String_o *)*v19, 0LL);
    case 1:
      v19 = &StringLiteral_16371/*"_start"*/;
      return System_String__Concat_44577788(v18, (System_String_o *)*v19, 0LL);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


QuestReleaseEntity_o *__fastcall TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_Collections_Generic_List_QuestReleaseEntity__o *baseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  Il2CppObject *current; // x23
  QuestReleaseEntity_o *v18; // x19
  _BOOL8 v19; // x0
  __int64 v20; // x1
  int32_t klass; // w20
  int v22; // w21
  QuestReleaseEntity_o *v23; // x20
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E6C02 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)baseList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v11, v12, v13);
    this = (TitleInfoEventSubmarineStatusComponent_o *)sub_B5D5C4(
                                                         &Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__,
                                                         v14,
                                                         v15,
                                                         v16);
    byte_42E6C02 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !baseList )
    sub_B5D69C(this, baseList);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)baseList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  current = 0LL;
  while ( 1 )
  {
    v18 = (QuestReleaseEntity_o *)current;
    v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v19 )
      break;
    current = v25.fields.current;
    if ( !v25.fields.current )
      sub_B5D69C(v19, v20);
    klass = (int32_t)v25.fields.current[1].klass;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_25877652(klass, -1, 0, 0LL) )
    {
      v22 = 3;
      v23 = v18;
      goto LABEL_13;
    }
  }
  v23 = 0LL;
  v22 = 1;
LABEL_13:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  if ( (unsigned int)(v22 + 1) >> 2 )
    return v23;
  return v18;
}


System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
        int32_t eventId,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  void *Instance; // x0
  __int64 v45; // x1
  System_Collections_Generic_List_QuestReleaseEntity__o *ListByTargetAndCondType; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x19
  _BOOL8 v48; // x0
  __int64 v49; // x1
  Il2CppObject *current; // x20
  __int64 QuestType; // x0
  __int64 v52; // x1
  struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__80_0; // x20
  Il2CppObject *v55; // x21
  struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E6C01 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_QuestReleaseEntity___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_QuestReleaseEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__, v38, v39, v40);
    sub_B5D5C4(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo, v41, v42, v43);
    byte_42E6C01 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_24;
  ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                              (QuestReleaseMaster_o *)Instance,
                              eventId,
                              85,
                              0LL);
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !ListByTargetAndCondType )
    goto LABEL_24;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v64,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ListByTargetAndCondType,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v65 = v64;
  while ( 1 )
  {
    v48 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v65,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v48 )
      break;
    current = v65.fields.current;
    if ( !v65.fields.current )
      sub_B5D69C(v48, v49);
    QuestType = QuestMaster__GetQuestType((int32_t)v65.fields.current[1].klass, 0LL);
    if ( (_DWORD)QuestType == 2 )
    {
      if ( !v47 )
        sub_B5D69C(QuestType, v52);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v47,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v65,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
    v55 = (Il2CppObject *)static_fields->__9;
    _9__80_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__80_0,
      v55,
      Method_TitleInfoEventSubmarineStatusComponent___c__GetQuestReleaseList_b__80_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_QuestReleaseEntity___ctor__);
    v56 = TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields;
    v56->__9__80_0 = (struct System_Comparison_QuestReleaseEntity__o *)_9__80_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v56->__9__80_0,
      (System_Int32_array **)_9__80_0,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
  }
  if ( !v47 )
LABEL_24:
    sub_B5D69C(Instance, v45);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v47,
    (System_Comparison_T__o *)_9__80_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v47;
}


int32_t __fastcall TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct AssetData_o *mapAssetData; // x8

  if ( (byte_42E6BF8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventPointMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E6BF8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  mapAssetData = this->fields.mapAssetData;
  if ( !mapAssetData || !MasterData_WarQuestSelectionMaster )
LABEL_10:
    sub_B5D69C(Instance, v12);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  MyRoomStateMaterial_DummyFolderState_o *v10; // x0
  MyRoomStateMaterial_DummyFolderState_o *v11; // x21
  int32_t ValueInt; // w0
  int32_t beforeSelectWarId; // w22
  int32_t v14; // w21
  _BOOL8 IsQuestClear_25877652; // x0
  __int64 v16; // x1

  if ( (byte_42E6C04 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)currentQuestReleaseEnt, nowPoint, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___, v7, v8, v9);
    byte_42E6C04 = 1;
  }
  v10 = *(MyRoomStateMaterial_DummyFolderState_o **)&this->fields.isGoalAnimToLoop;
  if ( v10 )
  {
    v10 = System_Linq_Enumerable__LastOrDefault_MyRoomStateMaterial_DummyFolderState_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v10,
            (const MethodInfo_1CAE09C *)Method_System_Linq_Enumerable_LastOrDefault_QuestReleaseEntity___);
    if ( v10 )
    {
      v11 = v10;
      ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)v10, 0LL);
      beforeSelectWarId = v11->fields.beforeSelectWarId;
      v14 = ValueInt;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_25877652 = CondType__IsQuestClear_25877652(beforeSelectWarId, -1, 0, 0LL);
      if ( !currentQuestReleaseEnt )
        sub_B5D69C(IsQuestClear_25877652, v16);
      LOBYTE(v10) = IsQuestClear_25877652 & (v14 <= nowPoint) & (QuestReleaseEntity__getValueInt(
                                                                   currentQuestReleaseEnt,
                                                                   0LL) == v14);
    }
  }
  return (char)v10;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *v8; // x20
  __int64 v9; // x1
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0

  if ( (byte_42E6BFE & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E6BFE = 1;
  }
  v8 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v8, 0LL, 0LL) )
    return 0;
  Component_srcLineSprite = *(UnityEngine_GameObject_o **)&this->fields.isCompleatedCount;
  if ( !Component_srcLineSprite
    || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                Component_srcLineSprite,
                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
  {
    sub_B5D69C(Component_srcLineSprite, v9);
  }
  return UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)Component_srcLineSprite, 0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__LoadEventUIAssetData(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v36; // x21

  if ( (byte_42E6C06 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, eventId, (_DWORD)callback, method);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v10, v11, v12);
    sub_B5D5C4(
      &Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__,
      v13,
      v14,
      v15);
    sub_B5D5C4(&TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo, v16, v17, v18);
    byte_42E6C06 = 1;
  }
  v19 = sub_B5D694(TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_TypeInfo);
  TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0___ctor(
    (TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0_o *)v19,
    0LL);
  if ( !v19 )
    sub_B5D69C(v20, v21);
  *(_QWORD *)(v19 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v19 + 24), (System_Int32_array **)callback, v28, v29, v30, v31, v32, v33);
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  }
  EventUIAssetDataPath = TitleInfoEventSubmarineStatusComponent__GetEventUIAssetDataPath(eventId, v34);
  v36 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v36,
    (Il2CppObject *)v19,
    Method_TitleInfoEventSubmarineStatusComponent___c__DisplayClass85_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v36, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v19 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventSubmarineStatusComponent__LoadLocalAtlas(
        TitleInfoEventSubmarineStatusComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *v24; // x0
  int i; // w22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  Il2CppObject *v27; // x0
  Il2CppObject *v28; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v33; // [xsp+8h] [xbp-58h] BYREF
  int v34; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E6C09 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_23812/*"{0:D2}"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_5456/*"DownloadEventUIAtlas{0}{1}"*/, v21, v22, v23);
    byte_42E6C09 = 1;
  }
  if ( this->fields.atlasList )
  {
    v24 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.minPoint;
    if ( !v24 )
LABEL_18:
      sub_B5D69C(v24, *(_QWORD *)&eventId);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v24,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v34 = i;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
      v28 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23812/*"{0:D2}"*/, v27, 0LL);
      v33 = eventId;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
      v30 = System_String__Format_44573324((System_String_o *)StringLiteral_5456/*"DownloadEventUIAtlas{0}{1}"*/, v29, v28, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)TitleInfoEventSubmarineStatusComponent__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v30,
                                                                 v31);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v24 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Object__op_Equality(
                                                                         GameObjectFromEventUIAssetData,
                                                                         0LL,
                                                                         0LL);
      if ( ((unsigned __int8)v24 & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_18;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
        break;
      v24 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.minPoint;
      if ( !v24 )
        goto LABEL_18;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v24,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
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
    sub_B5D69C(this, method);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  const MethodInfo *v31; // x1
  int32_t UserEventPoint; // w0
  const MethodInfo *v33; // x2
  int v34; // w8
  int32_t progressQuestId; // w9
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v36; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v37; // x22
  MissionNotifyManager_o *v38; // x0
  __int64 v39; // x1
  peRenderTexture_ChangeLayerObject_o *v40; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v41; // x22
  QuestReleaseEntity_o *v42; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v43; // x23
  peRenderTexture_ChangeLayerObject_o *v44; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v45; // x23
  QuestReleaseEntity_o *v46; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v47; // x24
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  QuestReleaseEntity_o *v54; // x23
  const MethodInfo *v55; // x1
  int v56; // w8

  if ( (byte_42E6BEF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_QuestReleaseEntity__Find__,
      (_DWORD)onEndAnim,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Predicate_QuestReleaseEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Predicate_QuestReleaseEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__, v22, v23, v24);
    sub_B5D5C4(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__, v25, v26, v27);
    sub_B5D5C4(&Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__, v28, v29, v30);
    byte_42E6BEF = 1;
  }
  if ( LOBYTE(this[1].klass) )
  {
    this->fields.nextPointTextFormat = (struct System_String_o *)onEndAnim;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.nextPointTextFormat,
      (System_Int32_array **)onEndAnim,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    TitleInfoEventSubmarineStatusComponent__EndAnimation(this, v31);
    return;
  }
  UserEventPoint = TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(this, (const MethodInfo *)onEndAnim);
  v34 = *(_DWORD *)&this->fields.isLastGoalPlayed;
  progressQuestId = this->fields.progressQuestId;
  HIDWORD(this->fields.onEndAnim) = UserEventPoint;
  if ( v34 == progressQuestId && LODWORD(this->fields.onEndAnim) == UserEventPoint )
  {
    TitleInfoEventSubmarineStatusComponent__PlayLastMapAnimation(this, onEndAnim, v33);
    return;
  }
  v36 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v37 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v37,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v36 )
    goto LABEL_31;
  v40 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          v36,
          (System_Predicate_T__o *)v37,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v41 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v42 = (QuestReleaseEntity_o *)v40;
  v43 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v43,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_1__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v41 )
    goto LABEL_31;
  v44 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          v41,
          (System_Predicate_T__o *)v43,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v45 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v46 = (QuestReleaseEntity_o *)v44;
  v47 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v47,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__PlayAnimation_b__59_2__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v45 )
    goto LABEL_31;
  v54 = (QuestReleaseEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v45,
                                  (System_Predicate_T__o *)v47,
                                  (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v42 )
    LODWORD(v42) = QuestReleaseEntity__getValueInt(v42, 0LL);
  if ( v46 )
    LODWORD(v46) = QuestReleaseEntity__getValueInt(v46, 0LL);
  if ( v54 )
    LODWORD(v54) = QuestReleaseEntity__getValueInt(v54, 0LL);
  if ( (int)v42 > (int)v54 )
  {
    ActionExtensions__Call(onEndAnim, 0LL);
    return;
  }
  this->fields.nextPointTextFormat = (struct System_String_o *)onEndAnim;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.nextPointTextFormat,
    (System_Int32_array **)onEndAnim,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v38 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v38 )
LABEL_31:
    sub_B5D69C(v38, v39);
  MissionNotifyManager__StartPause(v38, 0LL);
  if ( (int)v46 < (int)v54 )
  {
    v56 = *(_DWORD *)&this->fields.isLastGoalPlayed;
    if ( v56 )
    {
      if ( (int)v42 < (int)v54 && v56 >= 1 )
      {
        TitleInfoEventSubmarineStatusComponent__PlayExitAnimation(this, v55);
        return;
      }
    }
    else if ( this->fields.progressQuestId >= 1 )
    {
      TitleInfoEventSubmarineStatusComponent__PlayEntryAnimation(this, v55);
      return;
    }
  }
  TitleInfoEventSubmarineStatusComponent__PlayProgressAnimation(this, v55);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayEntryAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_GameObject_o *progressPointBg; // x20
  __int64 v24; // x1
  UnityEngine_GameObject_o *gateGoalIcon; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v27; // x20
  TitleInfoEventSubmarineStatusComponent_c *v28; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x21
  float ENTRY_ANIMATION_TIME; // w8
  EventDelegate_o *v31; // x22
  UnityEngine_Object_o *v32; // x20
  UnityEngine_GameObject_o *v33; // x19
  TitleInfoEventSubmarineStatusComponent_c *v34; // x0
  float v35; // w8
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6BF2 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_6026/*"EndEntryAnimation"*/, v20, v21, v22);
    byte_42E6BF2 = 1;
  }
  progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  v36 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, this->fields.userOldPoint, v2);
  GameObjectExtensions__SetLocalPosition(progressPointBg, v36, 0LL);
  gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  if ( !gateGoalIcon )
    goto LABEL_35;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gateGoalIcon,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
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
    UnityEngine_Object__Destroy_35620236(Component_srcLineSprite, 0LL);
  }
  gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  if ( !gateGoalIcon )
    goto LABEL_35;
  gateGoalIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                               gateGoalIcon,
                                               (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !gateGoalIcon )
    goto LABEL_35;
  v27 = gateGoalIcon;
  gateGoalIcon[5].klass = (UnityEngine_GameObject_c *)0x3F80000000000000LL;
  v28 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v28 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  v29 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v27[2].fields.m_CachedPtr;
  ENTRY_ANIMATION_TIME = v28->static_fields->ENTRY_ANIMATION_TIME;
  LODWORD(v27[1].klass) = 3;
  *(float *)&v27[2].klass = ENTRY_ANIMATION_TIME;
  v31 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
  EventDelegate___ctor_29822752(v31, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6026/*"EndEntryAnimation"*/, 0LL);
  if ( !v29 )
    goto LABEL_35;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v29,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  UITweener__PlayForward((UITweener_o *)v27, 0LL);
  gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.gateGoalIcon;
  if ( !gateGoalIcon )
    goto LABEL_35;
  gateGoalIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateGoalIcon, 0LL);
  if ( !gateGoalIcon )
    goto LABEL_35;
  v32 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  gateGoalIcon,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v32, 0LL);
  }
  gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.gateGoalIcon;
  if ( !gateGoalIcon
    || (gateGoalIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gateGoalIcon, 0LL)) == 0LL
    || (gateGoalIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                     gateGoalIcon,
                                                     (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___)) == 0LL )
  {
LABEL_35:
    sub_B5D69C(gateGoalIcon, v24);
  }
  gateGoalIcon[5].klass = (UnityEngine_GameObject_c *)0x3F80000000000000LL;
  v33 = gateGoalIcon;
  v34 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v34 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  v35 = v34->static_fields->ENTRY_ANIMATION_TIME;
  LODWORD(v33[1].klass) = 3;
  *(float *)&v33[2].klass = v35;
  UITweener__PlayForward((UITweener_o *)v33, 0LL);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayExitAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_GameObject_o *progressPointBg; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v25; // x20
  TitleInfoEventSubmarineStatusComponent_c *v26; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  float EXIT_ANIMATION_TIME; // w8
  EventDelegate_o *v29; // x22
  UnityEngine_Object_o *v30; // x20
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  System_Int32_array **GoalAnimObject; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_o *GoalAnimName; // x1
  const MethodInfo *v41; // x2

  if ( (byte_42E6BF0 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_6036/*"EndExitAnimation"*/, v20, v21, v22);
    byte_42E6BF0 = 1;
  }
  progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  if ( !progressPointBg )
    goto LABEL_24;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      progressPointBg,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
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
    UnityEngine_Object__Destroy_35620236(Component_srcLineSprite, 0LL);
  }
  progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  if ( !progressPointBg )
    goto LABEL_24;
  progressPointBg = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                  progressPointBg,
                                                  (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !progressPointBg )
    goto LABEL_24;
  v25 = progressPointBg;
  progressPointBg[5].klass = (UnityEngine_GameObject_c *)1065353216;
  v26 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v26 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  v27 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v25[2].fields.m_CachedPtr;
  EXIT_ANIMATION_TIME = v26->static_fields->EXIT_ANIMATION_TIME;
  LODWORD(v25[1].klass) = 3;
  *(float *)&v25[2].klass = EXIT_ANIMATION_TIME;
  v29 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
  EventDelegate___ctor_29822752(v29, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6036/*"EndExitAnimation"*/, 0LL);
  if ( !v27 )
LABEL_24:
    sub_B5D69C(progressPointBg, method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v27,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  UITweener__PlayForward((UITweener_o *)v25, 0LL);
  v30 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v30, 0LL, 0LL) )
  {
    GoalAnimObject = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v31);
    *(_QWORD *)&this->fields.isCompleatedCount = GoalAnimObject;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.isCompleatedCount,
      GoalAnimObject,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 3, v32);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v41);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(
        TitleInfoEventSubmarineStatusComponent_o *this,
        System_String_o *animClipName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0

  if ( (byte_42E6BFC & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, (_DWORD)animClipName, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E6BFC = 1;
  }
  v9 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v9, 0LL, 0LL) )
  {
    *(_QWORD *)&this->fields.isAfterTakingOver = animClipName;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.isAfterTakingOver,
      (System_Int32_array **)animClipName,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    Component_srcLineSprite = *(UnityEngine_GameObject_o **)&this->fields.isCompleatedCount;
    if ( !Component_srcLineSprite
      || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  Component_srcLineSprite,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___)) == 0LL )
    {
      sub_B5D69C(Component_srcLineSprite, v16);
    }
    UnityEngine_Animation__Play_51249124(
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t eventDetailEnt; // w21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
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
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v33; // x2
  TitleInfoEventSubmarineStatusComponent_c *v34; // x0

  if ( (byte_42E6BF5 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)onEndAnim, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_10806/*"PlayLastMapStartedAnimation"*/, v12, v13, v14);
    byte_42E6BF5 = 1;
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.nextPointTextFormat,
      (System_Int32_array **)onEndAnim,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
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
      sub_B5D560(
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
    v34 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v34 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10806/*"PlayLastMapStartedAnimation"*/,
      v34->static_fields->EXIT_ANIMATION_TIME,
      0LL);
  }
}


void __fastcall TitleInfoEventSubmarineStatusComponent__PlayLastMapStartedAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v9; // x2
  TitleInfoEventSubmarineStatusComponent_c *v10; // x0

  if ( (byte_42E6BF6 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_6014/*"EndAnimation"*/, v5, v6, v7);
    byte_42E6BF6 = 1;
  }
  BYTE4(this->fields.goalAnimObject) = 1;
  LOBYTE(this->fields.animClipName) = 1;
  GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 1, v2);
  TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v9);
  v10 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v10 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6014/*"EndAnimation"*/,
    v10->static_fields->GOAL_ANIMATION_TIME,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventSubmarineStatusComponent__PlayProgressAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v26; // x2
  __int64 v27; // x1
  float v28; // s0
  intptr_t v29; // s1
  int v30; // s2
  UnityEngine_GameObject_o *progressPointBg; // x0
  float v32; // s11
  intptr_t v33; // s12
  int v34; // s13
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v36; // x20
  TitleInfoEventSubmarineStatusComponent_c *v37; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x21
  float PROGRESS_ANIMATION_TIME; // w8
  EventDelegate_o *v40; // x22
  TitleInfoEventSubmarineStatusComponent_c *v41; // x0
  int onEndAnim; // w9
  int v43; // w8
  struct UISprite_o *gateBg; // x10
  struct UISprite_o *v45; // x9
  struct System_String_o *goalIconAnimPrefabName; // x20
  int32_t onEndAnim_high; // w0
  int v48; // w9
  int v49; // w8
  int v50; // w9
  struct System_String_o *v51; // x10
  struct System_String_o *v52; // x9
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6BF3 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_6051/*"EndProgressAnimation"*/, v20, v21, v22);
    byte_42E6BF3 = 1;
  }
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)this->fields.progressPointBg, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  *(UnityEngine_Vector3_o *)&v28 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(
                                     this,
                                     HIDWORD(this->fields.onEndAnim),
                                     v26);
  if ( x <= v28 )
  {
    v41 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v41 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6051/*"EndProgressAnimation"*/,
      v41->static_fields->PROGRESS_ANIMATION_TIME,
      0LL);
  }
  else
  {
    progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
    if ( !progressPointBg )
      goto LABEL_42;
    v32 = v28;
    v33 = v29;
    v34 = v30;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        progressPointBg,
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
      UnityEngine_Object__Destroy_35620236(Component_srcLineSprite, 0LL);
    }
    progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
    if ( !progressPointBg )
      goto LABEL_42;
    progressPointBg = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                    progressPointBg,
                                                    (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    if ( !progressPointBg )
      goto LABEL_42;
    *(float *)&progressPointBg[5].klass = x;
    *((float *)&progressPointBg[5].klass + 1) = y;
    *(float *)&progressPointBg[5].monitor = z;
    *((float *)&progressPointBg[5].monitor + 1) = v32;
    progressPointBg[5].fields.m_CachedPtr = v33;
    *((_DWORD *)&progressPointBg[5].fields + 1) = v34;
    v36 = progressPointBg;
    v37 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
      v37 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
    }
    v38 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v36[2].fields.m_CachedPtr;
    PROGRESS_ANIMATION_TIME = v37->static_fields->PROGRESS_ANIMATION_TIME;
    LODWORD(v36[1].klass) = 3;
    *(float *)&v36[2].klass = PROGRESS_ANIMATION_TIME;
    v40 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
    EventDelegate___ctor_29822752(v40, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6051/*"EndProgressAnimation"*/, 0LL);
    if ( !v38 )
      goto LABEL_42;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v38,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    UITweener__PlayForward((UITweener_o *)v36, 0LL);
  }
  if ( !LOBYTE(this->fields.baseQuestReleaseEntList) )
  {
    onEndAnim = (int)this->fields.onEndAnim;
    v43 = HIDWORD(this->fields.onEndAnim) - onEndAnim;
    if ( v43 )
    {
      gateBg = this->fields.gateBg;
      LOBYTE(this->fields.baseQuestReleaseEntList) = 1;
      if ( !gateBg )
        goto LABEL_42;
      LODWORD(gateBg->fields.topAnchor) = onEndAnim;
      v45 = this->fields.gateBg;
      if ( !v45 )
        goto LABEL_42;
      HIDWORD(v45->fields.topAnchor) = v43;
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
      progressPointBg = (UnityEngine_GameObject_o *)UnityEngine_Mathf__Min_41629336(
                                                      onEndAnim_high,
                                                      this->fields.userPoint,
                                                      0LL);
      v48 = (int)this->fields.onEndAnim;
      v49 = (_DWORD)progressPointBg - v48;
      if ( (int)progressPointBg - v48 >= 1 )
      {
        v50 = this->fields.userPoint - v48;
        if ( v50 >= 1 )
        {
          v51 = this->fields.goalIconAnimPrefabName;
          if ( v51 )
          {
            LODWORD(v51[2].klass) = v50;
            v52 = this->fields.goalIconAnimPrefabName;
            if ( v52 )
            {
              HIDWORD(v52[2].klass) = -v49;
              progressPointBg = (UnityEngine_GameObject_o *)this->fields.goalIconAnimPrefabName;
              if ( progressPointBg )
              {
                UICounterLabel__PlayAnimation((UICounterLabel_o *)progressPointBg, 0LL);
                return;
              }
            }
          }
LABEL_42:
          sub_B5D69C(progressPointBg, v27);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_o *EventUIAssetDataPath; // x19

  if ( (byte_42E6C07 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v6, v7, v8);
    byte_42E6C07 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *v5; // x0

  if ( (byte_42E6C08 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__Clear__, (_DWORD)method, v2, v3);
    byte_42E6C08 = 1;
  }
  v5 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.minPoint;
  if ( !v5 )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    v5,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
}


bool __fastcall TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
        TitleInfoEventSubmarineStatusComponent_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *IsNullOrEmpty; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v24; // x0
  __int64 v25; // x1
  bool v26; // w20
  int v27; // w21
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E6C0A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_UIAtlas___, (_DWORD)sprite, (_DWORD)spriteName, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v16, v17, v18);
    byte_42E6C0A = 1;
  }
  memset(&v30, 0, sizeof(v30));
  IsNullOrEmpty = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_String__IsNullOrEmpty(
                                                                                                   spriteName,
                                                                                                   0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(*(System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.minPoint, (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
      &v29,
      IsNullOrEmpty,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v30 = v29;
    do
    {
      v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v30,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
      if ( !v21 )
      {
        v26 = 0;
        v27 = 8;
        goto LABEL_16;
      }
      current = v30.fields.current;
      if ( !v30.fields.current )
        sub_B5D69C(v21, v22);
      v24 = UIAtlas__GetSprite((UIAtlas_o *)v30.fields.current, spriteName, 0LL);
    }
    while ( !v24 );
    if ( !sprite )
      sub_B5D69C(v24, v25);
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v26 = 1;
    v27 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v30,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v27 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B5D69C(IsNullOrEmpty, v20);
    }
  }
  return v26;
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  struct AssetData_o **p_mapAssetData; // x20
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  const MethodInfo *v75; // x2
  System_Int32_array **GoalAnimName; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_String_o *areaIcon; // x0
  const MethodInfo *v84; // x1
  int32_t type; // w21
  System_Action_o *v86; // x22
  const MethodInfo *v87; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v89; // x3
  const MethodInfo *v90; // x3
  const MethodInfo *v91; // x3
  const MethodInfo *v92; // x3
  const MethodInfo *v93; // x3
  const MethodInfo *v94; // x3
  const MethodInfo *v95; // x3
  const MethodInfo *v96; // x3
  const MethodInfo *v97; // x3
  const MethodInfo *v98; // x3
  UILabel_o *gaugeFrame; // x21
  UILabel_o *progressPointLabel; // x21
  int32_t v101; // w20
  System_Int32_array **QuestReleaseList; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  TitleInfoEventSubmarineStatusComponent_o *v109; // x0
  const MethodInfo *v110; // x2
  TitleInfoEventSubmarineStatusComponent_o *ProgressQuestReleaseEnt; // x21
  const MethodInfo *v112; // x2
  QuestReleaseEntity_o *CurrentQuestReleaseEnt; // x0
  const MethodInfo *v114; // x1
  QuestReleaseEntity_o *v115; // x20
  const MethodInfo *v116; // x5
  int32_t questId; // w8
  int32_t ValueInt; // w0
  int32_t v119; // w0
  int32_t v120; // w21
  System_String_o *v121; // x22
  Il2CppObject *v122; // x0
  System_String_o *v123; // x22
  System_String_o *v124; // x0
  System_Int32_array **v125; // x0
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  struct System_String_o *goalIconAnimPrefabName; // x22
  const MethodInfo *v133; // x3
  TitleInfoEventSubmarineStatusComponent_c *v134; // x0
  UICounterLabel_o *gateBg; // x20
  int32_t onEndAnim; // w21
  float PROGRESS_ANIMATION_TIME; // s8
  UnityEngine_GameObject_o *progressPointBg; // x20
  const MethodInfo *v139; // x2
  const MethodInfo *v140; // x1
  int32_t userPoint; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v142; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6BED & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)eventDetailEntity, (_DWORD)mapAssetData, method);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__, v17, v18, v19);
    sub_B5D5C4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_18753/*"event_goal"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_18777/*"event_progressicon"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_18775/*"event_progressgauge_front"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_5800/*"EVENT_SUBMARINE_NEXT_DESCRIPTION"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_1238/*"94053407"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_5801/*"EVENT_SUBMARINE_NEXT_POINT"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_5808/*"EVENT_SUBMARINE_STATUS_TITLE"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_18818/*"event_status_point"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_18772/*"event_progress_point"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_18765/*"event_next"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_18774/*"event_progressgauge_back"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_5797/*"EVENT_SUBMARINE_GAUGE_CURRENT"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_18773/*"event_progressgauge"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_18776/*"event_progressgaugebg_80393"*/, v65, v66, v67);
    byte_42E6BED = 1;
  }
  this->fields.mapAssetData = (struct AssetData_o *)eventDetailEntity;
  p_mapAssetData = &this->fields.mapAssetData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mapAssetData,
    (System_Int32_array **)eventDetailEntity,
    (System_String_array **)mapAssetData,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.eventAssetData = mapAssetData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventAssetData,
    (System_Int32_array **)mapAssetData,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  LOBYTE(this->fields.baseQuestReleaseEntList) = 0;
  LOBYTE(this->fields.animClipName) = 0;
  GoalAnimName = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 0, v75);
  *(_QWORD *)&this->fields.isAfterTakingOver = GoalAnimName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isAfterTakingOver,
    GoalAnimName,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  if ( !this->fields.mapAssetData )
    goto LABEL_54;
  type = this->fields.mapAssetData->fields.type;
  v86 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v86, (Il2CppObject *)this, Method_TitleInfoEventSubmarineStatusComponent__Setup_b__54_0__, 0LL);
  TitleInfoEventSubmarineStatusComponent__LoadEventUIAssetData(this, type, v86, v87);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_32430604(gameObject, 62.0, 0.0, 0.0, 0LL);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.areaIcon,
    (System_String_o *)StringLiteral_18776/*"event_progressgaugebg_80393"*/,
    v89);
  areaIcon = (System_String_o *)this->fields.areaIcon;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.titleLabel,
    (System_String_o *)StringLiteral_1238/*"94053407"*/,
    v90);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeBg,
    (System_String_o *)StringLiteral_18773/*"event_progressgauge"*/,
    v91);
  areaIcon = (System_String_o *)this->fields.gaugeBg;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.shipIcon,
    (System_String_o *)StringLiteral_18775/*"event_progressgauge_front"*/,
    v92);
  areaIcon = (System_String_o *)this->fields.shipIcon;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gaugeBar,
    (System_String_o *)StringLiteral_18774/*"event_progressgauge_back"*/,
    v93);
  areaIcon = (System_String_o *)this->fields.gaugeBar;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.shipPanelObj,
    (System_String_o *)StringLiteral_18777/*"event_progressicon"*/,
    v94);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.progressNameLabel,
    (System_String_o *)StringLiteral_18818/*"event_status_point"*/,
    v95);
  areaIcon = (System_String_o *)this->fields.progressNameLabel;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateGoalIcon,
    (System_String_o *)StringLiteral_18765/*"event_next"*/,
    v96);
  areaIcon = (System_String_o *)this->fields.gateGoalIcon;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.gateNextPointBg,
    (System_String_o *)StringLiteral_18753/*"event_goal"*/,
    v97);
  areaIcon = (System_String_o *)this->fields.gateNextPointBg;
  if ( !areaIcon )
    goto LABEL_54;
  ((void (__fastcall *)(System_String_o *, void *))areaIcon->klass[1]._1.typeMetadataHandle)(
    areaIcon,
    areaIcon->klass[1]._1.interopData);
  TitleInfoEventSubmarineStatusComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.gateNextPointLabel,
    (System_String_o *)StringLiteral_18772/*"event_progress_point"*/,
    v98);
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
  areaIcon = LocalizationManager__Get((System_String_o *)StringLiteral_5808/*"EVENT_SUBMARINE_STATUS_TITLE"*/, 0LL);
  if ( !gaugeFrame )
    goto LABEL_54;
  UILabel__set_text(gaugeFrame, areaIcon, 0LL);
  progressPointLabel = this->fields.progressPointLabel;
  areaIcon = LocalizationManager__Get((System_String_o *)StringLiteral_5797/*"EVENT_SUBMARINE_GAUGE_CURRENT"*/, 0LL);
  if ( !progressPointLabel )
    goto LABEL_54;
  UILabel__set_text(progressPointLabel, areaIcon, 0LL);
  if ( !*p_mapAssetData )
    goto LABEL_54;
  v101 = (*p_mapAssetData)->fields.type;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
  }
  QuestReleaseList = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(v101, v84);
  *(_QWORD *)&this->fields.isGoalAnimToLoop = QuestReleaseList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isGoalAnimToLoop,
    QuestReleaseList,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  ProgressQuestReleaseEnt = (TitleInfoEventSubmarineStatusComponent_o *)TitleInfoEventSubmarineStatusComponent__GetProgressQuestReleaseEnt(
                                                                          v109,
                                                                          *(System_Collections_Generic_List_QuestReleaseEntity__o **)&this->fields.isGoalAnimToLoop,
                                                                          v110);
  CurrentQuestReleaseEnt = TitleInfoEventSubmarineStatusComponent__GetCurrentQuestReleaseEnt(
                             ProgressQuestReleaseEnt,
                             *(System_Collections_Generic_List_QuestReleaseEntity__o **)&this->fields.isGoalAnimToLoop,
                             v112);
  if ( CurrentQuestReleaseEnt )
    v115 = CurrentQuestReleaseEnt;
  else
    v115 = (QuestReleaseEntity_o *)ProgressQuestReleaseEnt;
  HIDWORD(this->fields.onEndAnim) = TitleInfoEventSubmarineStatusComponent__GetUserEventPoint(this, v114);
  if ( v115 )
    questId = v115->fields.questId;
  else
    questId = 0;
  this->fields.progressQuestId = questId;
  if ( ProgressQuestReleaseEnt )
    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)ProgressQuestReleaseEnt, 0LL);
  else
    ValueInt = 0;
  this->fields.userOldPoint = ValueInt;
  if ( v115 )
    v119 = QuestReleaseEntity__getValueInt(v115, 0LL);
  else
    v119 = 0;
  this->fields.userPoint = v119;
  TitleInfoEventSubmarineStatusComponent__SetupOldData(
    this,
    (int32_t *)&this->fields.onEndAnim,
    (int32_t *)&this->fields.isLastGoalPlayed,
    (int32_t *)&this->fields.goalAnimObject,
    (bool *)&this->fields.goalAnimObject + 4,
    v116);
  v120 = UnityEngine_Mathf__Max_41629432(0, this->fields.userPoint - LODWORD(this->fields.onEndAnim), 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v121 = LocalizationManager__Get((System_String_o *)StringLiteral_5800/*"EVENT_SUBMARINE_NEXT_DESCRIPTION"*/, 0LL);
  userPoint = this->fields.userPoint;
  v122 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userPoint);
  v123 = System_String__Format(v121, v122, 0LL);
  v124 = LocalizationManager__Get((System_String_o *)StringLiteral_5801/*"EVENT_SUBMARINE_NEXT_POINT"*/, 0LL);
  v125 = (System_Int32_array **)System_String__Concat_44577788(v123, v124, 0LL);
  *(_QWORD *)&this->fields.currentQuestId = v125;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.currentQuestId, v125, v126, v127, v128, v129, v130, v131);
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
    v120,
    TitleInfoEventSubmarineStatusComponent_TypeInfo->static_fields->PROGRESS_ANIMATION_TIME,
    *(System_String_o **)&this->fields.currentQuestId,
    0,
    0LL);
  areaIcon = this->fields.goalIconAnimPrefabName;
  if ( !areaIcon )
    goto LABEL_54;
  UICounterLabel__SetCountLabel((UICounterLabel_o *)areaIcon, v120, 0LL);
  if ( TitleInfoEventSubmarineStatusComponent__IsAllClear(this, v115, (int32_t)this->fields.onEndAnim, v133) )
  {
    areaIcon = this->fields.goalIconAnimPrefabName;
    if ( !areaIcon )
      goto LABEL_54;
    areaIcon = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)areaIcon, 0LL);
    if ( !areaIcon )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)areaIcon, 0, 0LL);
  }
  v134 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  gateBg = (UICounterLabel_o *)this->fields.gateBg;
  onEndAnim = (int32_t)this->fields.onEndAnim;
  if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    v134 = TitleInfoEventSubmarineStatusComponent_TypeInfo;
  }
  PROGRESS_ANIMATION_TIME = v134->static_fields->PROGRESS_ANIMATION_TIME;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  areaIcon = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  if ( !gateBg
    || (UICounterLabel__Setup(gateBg, onEndAnim, PROGRESS_ANIMATION_TIME, areaIcon, 0, 0LL),
        (areaIcon = (System_String_o *)this->fields.gateBg) == 0LL) )
  {
LABEL_54:
    sub_B5D69C(areaIcon, v84);
  }
  UICounterLabel__SetCountLabel((UICounterLabel_o *)areaIcon, (int32_t)this->fields.onEndAnim, 0LL);
  progressPointBg = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
  v142 = TitleInfoEventSubmarineStatusComponent__ConvertoPointToPosition(this, (int32_t)this->fields.onEndAnim, v139);
  GameObjectExtensions__SetLocalPosition(progressPointBg, v142, 0LL);
  TitleInfoEventSubmarineStatusComponent__SetupAnimation(this, v140);
}


void __fastcall TitleInfoEventSubmarineStatusComponent__SetupAnimation(
        TitleInfoEventSubmarineStatusComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  UnityEngine_GameObject_o *gateGoalIcon; // x0
  void (__fastcall *castClass)(float); // x8
  UnityEngine_Object_o *v28; // x20
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  System_Int32_array **GoalAnimObject; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_o *GoalAnimName; // x0
  const MethodInfo *v39; // x2
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v40; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v41; // x21
  peRenderTexture_ChangeLayerObject_o *v42; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v43; // x21
  QuestReleaseEntity_o *v44; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v45; // x22
  peRenderTexture_ChangeLayerObject_o *v46; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v47; // x22
  QuestReleaseEntity_o *v48; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v49; // x23
  QuestReleaseEntity_o *v50; // x22
  int32_t ValueInt; // w0
  int v52; // w8
  UnityEngine_GameObject_o *gameObject; // x0
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
  long double v66; // q0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6BEE & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Predicate_QuestReleaseEntity___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Predicate_QuestReleaseEntity__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__, v17, v18, v19);
    sub_B5D5C4(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__, v20, v21, v22);
    sub_B5D5C4(&Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__, v23, v24, v25);
    byte_42E6BEE = 1;
  }
  gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.gateGoalIcon;
  if ( !gateGoalIcon )
    goto LABEL_45;
  castClass = (void (__fastcall *)(float))gateGoalIcon->klass[1]._1.castClass;
  if ( SLODWORD(this->fields.onEndAnim) >= this->fields.userPoint )
  {
    castClass(0.0);
    v28 = *(UnityEngine_Object_o **)&this->fields.isCompleatedCount;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v28, 0LL, 0LL) )
    {
      GoalAnimObject = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__CreateGoalAnimObject(this, v29);
      *(_QWORD *)&this->fields.isCompleatedCount = GoalAnimObject;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.isCompleatedCount,
        GoalAnimObject,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    GoalAnimName = TitleInfoEventSubmarineStatusComponent__GetGoalAnimName(this, 2, v30);
    TitleInfoEventSubmarineStatusComponent__PlayGoalAnim(this, GoalAnimName, v39);
  }
  else
  {
    castClass(1.0);
  }
  v40 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v41 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v41,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v40 )
    goto LABEL_45;
  v42 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          v40,
          (System_Predicate_T__o *)v41,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v43 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v44 = (QuestReleaseEntity_o *)v42;
  v45 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v45,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_1__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v43 )
    goto LABEL_45;
  v46 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          v43,
          (System_Predicate_T__o *)v45,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  v47 = *(System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o **)&this->fields.isGoalAnimToLoop;
  v48 = (QuestReleaseEntity_o *)v46;
  v49 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_QuestReleaseEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v49,
    (Il2CppObject *)this,
    Method_TitleInfoEventSubmarineStatusComponent__SetupAnimation_b__58_2__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_QuestReleaseEntity___ctor__);
  if ( !v47 )
    goto LABEL_45;
  v50 = (QuestReleaseEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v47,
                                  (System_Predicate_T__o *)v49,
                                  (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
  if ( v44 )
    LODWORD(v44) = QuestReleaseEntity__getValueInt(v44, 0LL);
  if ( v48 )
    LODWORD(v48) = QuestReleaseEntity__getValueInt(v48, 0LL);
  if ( v50 )
    ValueInt = QuestReleaseEntity__getValueInt(v50, 0LL);
  else
    ValueInt = 0;
  if ( (int)v48 >= ValueInt )
    goto LABEL_41;
  v52 = *(_DWORD *)&this->fields.isLastGoalPlayed;
  if ( !v52 )
  {
    if ( this->fields.progressQuestId >= 1 )
    {
      gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
      if ( gateGoalIcon )
      {
        gateGoalIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     gateGoalIcon,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
            LODWORD(v66) = 0;
LABEL_44:
            ((void (__fastcall *)(long double))klass[1]._1.castClass)(v66);
            return;
          }
        }
      }
LABEL_45:
      sub_B5D69C(gateGoalIcon, method);
    }
LABEL_41:
    gateGoalIcon = (UnityEngine_GameObject_o *)this->fields.progressPointBg;
    if ( gateGoalIcon )
    {
      gateGoalIcon = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   gateGoalIcon,
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
      if ( gateGoalIcon )
      {
        klass = gateGoalIcon->klass;
        LODWORD(v66) = 1.0;
        goto LABEL_44;
      }
    }
    goto LABEL_45;
  }
  if ( (int)v44 >= ValueInt || v52 < 1 )
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
                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.isCompleatedCount, v57, v58, v59, v60, v61, v62, v63);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 gateGoalIcon; // x0
  __int64 v21; // x1
  int v22; // w2
  __int64 v23; // x3
  TerminalPramsManager_c *v24; // x8
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x9
  struct AssetData_o *mapAssetData; // x10
  TerminalPramsManager_c *v27; // x0
  System_String_array *ValueByArray; // x0
  __int64 v29; // x8
  System_String_array *v30; // x23
  System_String_o *v31; // x20
  TerminalPramsManager_c *v32; // x0
  int32_t onEndAnim_high; // w8
  int32_t eventDetailEnt; // w20
  __int64 v35; // x0

  if ( (byte_42E6BF9 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)oldPoint, (_DWORD)oldQuestId, progressQuestId);
    sub_B5D5C4(&CondType_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v14, v15, v16);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v17, v18, v19);
    byte_42E6BF9 = 1;
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
  v24 = TerminalPramsManager_TypeInfo;
  if ( (gateGoalIcon & 1) != 0 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CDC )
    {
      gateGoalIcon = sub_B5D5C4(&TerminalPramsManager_TypeInfo, v21, v22, v23);
      byte_42E5CDC = 1;
    }
    v24 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v24 = TerminalPramsManager_TypeInfo;
    }
    if ( v24->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
    {
      if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v24);
      if ( !byte_42E5CDC )
      {
        gateGoalIcon = sub_B5D5C4(&TerminalPramsManager_TypeInfo, v21, v22, v23);
        byte_42E5CDC = 1;
      }
      v24 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v24 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventSubmarineSaveData_k__BackingField = v24->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !BeforeEventSubmarineSaveData_k__BackingField )
        goto LABEL_64;
      mapAssetData = this->fields.mapAssetData;
      if ( !mapAssetData )
        goto LABEL_64;
      if ( BeforeEventSubmarineSaveData_k__BackingField->fields.eventId == mapAssetData->fields.type )
      {
        if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v24);
        if ( !byte_42E5CDC )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v21, v22, v23);
          byte_42E5CDC = 1;
        }
        v27 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v27 = TerminalPramsManager_TypeInfo;
        }
        gateGoalIcon = (__int64)v27->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
        if ( gateGoalIcon )
        {
          ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)gateGoalIcon, 0x2Cu, 0LL);
          if ( ValueByArray )
          {
            v29 = *(_QWORD *)&ValueByArray->max_length;
            v30 = ValueByArray;
            if ( v29 )
            {
              if ( !(_DWORD)v29 )
              {
                v35 = sub_B5D6C8(ValueByArray);
                sub_B5D668(v35, 0LL);
              }
              *oldPoint = System_Int32__Parse(ValueByArray->m_Items[0], 0LL);
              if ( (int)v30->max_length >= 2 )
              {
                *oldQuestId = System_Int32__Parse(v30->m_Items[1], 0LL);
                if ( (int)v30->max_length >= 3 )
                {
                  *progressQuestId = System_Int32__Parse(v30->m_Items[2], 0LL);
                  if ( (int)v30->max_length >= 4 )
                  {
                    v31 = v30->m_Items[3];
                    if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !bool_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
                    }
                    *isLastGoalPlayed = System_Boolean__Parse(v31, 0LL);
                  }
                }
              }
            }
          }
          return;
        }
LABEL_64:
        sub_B5D69C(gateGoalIcon, v21);
      }
    }
  }
  if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v24);
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v21, v22, v23);
    byte_42E4B33 = 1;
  }
  v32 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
  }
  if ( v32->static_fields->_QuestId_k__BackingField != HIDWORD(this->fields.eventDetailEnt) )
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
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
    sub_B5D69C(this, 0LL);
  return n->fields.questId == *(_DWORD *)&this->fields.isLastGoalPlayed;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B5D69C(this, 0LL);
  return n->fields.questId == LODWORD(this->fields.goalAnimObject);
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___PlayAnimation_b__59_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B5D69C(this, 0LL);
  return n->fields.questId == this->fields.progressQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_0(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B5D69C(this, 0LL);
  return n->fields.questId == *(_DWORD *)&this->fields.isLastGoalPlayed;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_1(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B5D69C(this, 0LL);
  return n->fields.questId == LODWORD(this->fields.goalAnimObject);
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___SetupAnimation_b__58_2(
        TitleInfoEventSubmarineStatusComponent_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(shipIcon, method);
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
    sub_B5D69C(this, method);
  return (float)shipIcon->fields.mWidth;
}


void __fastcall TitleInfoEventSubmarineStatusComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct TitleInfoEventSubmarineStatusComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E6242 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventSubmarineStatusComponent___c_TypeInfo, v1, v2, v3);
    byte_42E6242 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(TitleInfoEventSubmarineStatusComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = TitleInfoEventSubmarineStatusComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TitleInfoEventSubmarineStatusComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, n);
  return n->fields.questId == _4__this->fields.progressQuestId;
}


bool __fastcall TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0___EndAnimation_b__1(
        TitleInfoEventSubmarineStatusComponent___c__DisplayClass68_0_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(0LL, data);
  _4__this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)data;
  sub_B5D560(&_4__this->fields.atlasList);
  ActionExtensions__Call(this->fields.callback, 0LL);
}