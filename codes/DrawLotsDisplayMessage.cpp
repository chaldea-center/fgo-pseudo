void __fastcall DrawLotsDisplayMessage___ctor(DrawLotsDisplayMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4189486 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo, v3);
    byte_4189486 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup___ctor__);
  this->fields.displayedList = (struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *)v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DrawLotsDisplayMessage__DrawLots(
        DrawLotsDisplayMessage_o *this,
        int32_t groupId,
        int32_t defMessageId,
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
  DrawLotsDisplayMessage___c__DisplayClass3_0_o *v15; // x21
  BattleMessageGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v17; // x1
  System_Collections_ICollection_o *Entities; // x22
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x23
  peRenderTexture_ChangeLayerObject_o *v22; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_o *v23; // x20

  if ( (byte_4189483 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_BattleMessageGroupMaster___, *(_QWORD *)&groupId);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Find__, v10);
    sub_B2C35C(&Method_System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup___ctor__, v11);
    sub_B2C35C(&System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo, v12);
    sub_B2C35C(&Method_DrawLotsDisplayMessage___c__DisplayClass3_0__DrawLots_b__0__, v13);
    sub_B2C35C(&DrawLotsDisplayMessage___c__DisplayClass3_0_TypeInfo, v14);
    byte_4189483 = 1;
  }
  v15 = (DrawLotsDisplayMessage___c__DisplayClass3_0_o *)sub_B2C42C(DrawLotsDisplayMessage___c__DisplayClass3_0_TypeInfo);
  DrawLotsDisplayMessage___c__DisplayClass3_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_17;
  v15->fields.groupId = groupId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BattleMessageGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BattleMessageGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_17;
  Entities = (System_Collections_ICollection_o *)BattleMessageGroupMaster__GetEntities(
                                                   Master_WarQuestSelectionMaster,
                                                   v15->fields.groupId,
                                                   0LL);
  if ( BasicHelper__IsNullOrEmpty(Entities, 0LL) )
    return defMessageId;
  displayedList = this->fields.displayedList;
  v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v21,
    (Il2CppObject *)v15,
    Method_DrawLotsDisplayMessage___c__DisplayClass3_0__DrawLots_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup___ctor__);
  if ( !displayedList )
    goto LABEL_17;
  v22 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)displayedList,
          (System_Predicate_T__o *)v21,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Find__);
  if ( !v22 )
  {
    v23 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_B2C42C(DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo);
    DrawLotsDisplayMessage_DisplayedInGroup___ctor(v23, 0LL);
    if ( v23 )
    {
      v23->fields.groupId = v15->fields.groupId;
      Master_WarQuestSelectionMaster = (BattleMessageGroupMaster_o *)this->fields.displayedList;
      if ( Master_WarQuestSelectionMaster )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__);
        return DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
                 v23,
                 (BattleMessageGroupEntity_array *)Entities,
                 0LL);
      }
    }
LABEL_17:
    sub_B2C434(Master_WarQuestSelectionMaster, v17);
  }
  v23 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)v22;
  return DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
           v23,
           (BattleMessageGroupEntity_array *)Entities,
           0LL);
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *__fastcall DrawLotsDisplayMessage__GetSaveData(
        DrawLotsDisplayMessage_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x19
  DrawLotsDisplayMessage___c_c *v9; // x0
  struct DrawLotsDisplayMessage___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__4_0; // x20
  Il2CppObject *v12; // x21
  struct DrawLotsDisplayMessage___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_4189484 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Linq_Enumerable_Select_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___,
      method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___, v3);
    sub_B2C35C(
      &Method_System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor__,
      v4);
    sub_B2C35C(
      &System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo,
      v5);
    sub_B2C35C(&Method_DrawLotsDisplayMessage___c__GetSaveData_b__4_0__, v6);
    sub_B2C35C(&DrawLotsDisplayMessage___c_TypeInfo, v7);
    byte_4189484 = 1;
  }
  displayedList = this->fields.displayedList;
  v9 = DrawLotsDisplayMessage___c_TypeInfo;
  if ( (BYTE3(DrawLotsDisplayMessage___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DrawLotsDisplayMessage___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DrawLotsDisplayMessage___c_TypeInfo);
    v9 = DrawLotsDisplayMessage___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = DrawLotsDisplayMessage___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__4_0,
      v12,
      Method_DrawLotsDisplayMessage___c__GetSaveData_b__4_0__,
      (const MethodInfo_2713350 *)Method_System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor__);
    v13 = DrawLotsDisplayMessage___c_TypeInfo->static_fields;
    v13->__9__4_0 = (struct System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__4_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)displayedList,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
  return System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
           v20,
           (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
}


void __fastcall DrawLotsDisplayMessage__Init(DrawLotsDisplayMessage_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x0

  if ( (byte_4189482 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Clear__, method);
    byte_4189482 = 1;
  }
  displayedList = this->fields.displayedList;
  if ( !displayedList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)displayedList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Clear__);
}


void __fastcall DrawLotsDisplayMessage__SetSaveData(
        DrawLotsDisplayMessage_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *saves,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v8; // x21

  if ( (byte_4189485 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor__, saves);
    sub_B2C35C(&System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo, v5);
    sub_B2C35C(&Method_BasicHelper_ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___, v6);
    sub_B2C35C(&Method_DrawLotsDisplayMessage__SetSaveData_b__5_0__, v7);
    byte_4189485 = 1;
  }
  v8 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v8,
    (Il2CppObject *)this,
    Method_DrawLotsDisplayMessage__SetSaveData_b__5_0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)saves,
    (System_Action_T__o *)v8,
    (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
}


void __fastcall DrawLotsDisplayMessage___SetSaveData_b__5_0(
        DrawLotsDisplayMessage_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x20
  DrawLotsDisplayMessage_DisplayedInGroup_o *v7; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_4189487 & 1) == 0 )
  {
    sub_B2C35C(&DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo, sv);
    sub_B2C35C(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__, v5);
    byte_4189487 = 1;
  }
  displayedList = this->fields.displayedList;
  v7 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_B2C42C(DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo);
  DrawLotsDisplayMessage_DisplayedInGroup___ctor(v7, 0LL);
  if ( !v7
    || (v8 = (EventMissionProgressRequest_Argument_ProgressData_o *)DrawLotsDisplayMessage_DisplayedInGroup__SetSaveData(
                                                                      v7,
                                                                      sv,
                                                                      0LL),
        !displayedList) )
  {
    sub_B2C434(v8, v9);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)displayedList,
    v8,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__);
}


void __fastcall DrawLotsDisplayMessage_DisplayedInGroup___ctor(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_HashSet_int__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4186502 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, method);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v3);
    byte_4186502 = 1;
  }
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v4,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  this->fields.hashMsgId = v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.hashMsgId,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        BattleMessageGroupEntity_array *entities,
        const MethodInfo *method)
{
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
  __int64 v16; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_ICollection_o *v19; // x21
  __int64 v20; // x1
  System_Collections_Generic_HashSet_int__o *hashMsgId; // x0
  DrawLotsDisplayMessage_DisplayedInGroup___c_c *v22; // x0
  struct DrawLotsDisplayMessage_DisplayedInGroup___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__2_1; // x20
  Il2CppObject *v25; // x22
  struct DrawLotsDisplayMessage_DisplayedInGroup___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Int32_array *v34; // x0
  __int64 v35; // x8
  int32_t v36; // w19
  __int64 v38; // x0

  if ( (byte_41864FF & 1) == 0 )
  {
    sub_B2C35C(&Method_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId_b__2_0__, entities);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__int___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___, v8);
    sub_B2C35C(&Method_System_Func_BattleMessageGroupEntity__int___ctor__, v9);
    sub_B2C35C(&Method_System_Func_BattleMessageGroupEntity__bool___ctor__, v10);
    sub_B2C35C(&System_Func_BattleMessageGroupEntity__bool__TypeInfo, v11);
    sub_B2C35C(&System_Func_BattleMessageGroupEntity__int__TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Clear__, v14);
    sub_B2C35C(&Method_DrawLotsDisplayMessage_DisplayedInGroup___c__DrawLotsMessageId_b__2_1__, v15);
    sub_B2C35C(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo, v16);
    byte_41864FF = 1;
  }
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleMessageGroupEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)this,
    Method_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId_b__2_0__,
    (const MethodInfo_2711C04 *)Method_System_Func_BattleMessageGroupEntity__bool___ctor__);
  v18 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
  v19 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                              v18,
                                              (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
  if ( BasicHelper__IsNullOrEmpty(v19, 0LL) )
  {
    hashMsgId = this->fields.hashMsgId;
    if ( !hashMsgId )
      goto LABEL_19;
    System_Collections_Generic_HashSet_int___Clear(
      hashMsgId,
      (const MethodInfo_2D85698 *)Method_System_Collections_Generic_HashSet_int__Clear__);
    v19 = (System_Collections_ICollection_o *)entities;
  }
  v22 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
  if ( (BYTE3(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo);
    v22 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__2_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__2_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BattleMessageGroupEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__2_1,
      v25,
      Method_DrawLotsDisplayMessage_DisplayedInGroup___c__DrawLotsMessageId_b__2_1__,
      (const MethodInfo_27127B0 *)Method_System_Func_BattleMessageGroupEntity__int___ctor__);
    v26 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
    v26->__9__2_1 = (struct System_Func_BattleMessageGroupEntity__int__o *)_9__2_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v26->__9__2_1,
      (System_Int32_array **)_9__2_1,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__int___);
  v34 = System_Linq_Enumerable__ToArray_int_(
          v33,
          (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  hashMsgId = (System_Collections_Generic_HashSet_int__o *)RandomUtility__GetRandomRangeIndex(v34, 0, 0LL);
  if ( !v19 )
    goto LABEL_19;
  if ( (unsigned int)hashMsgId >= LODWORD(v19[1].monitor) )
  {
    v38 = sub_B2C460(hashMsgId);
    sub_B2C400(v38, 0LL);
  }
  v35 = *((_QWORD *)&v19[2].klass + (int)hashMsgId);
  if ( !v35 || (hashMsgId = this->fields.hashMsgId) == 0LL )
LABEL_19:
    sub_B2C434(hashMsgId, v20);
  v36 = *(_DWORD *)(v35 + 20);
  System_Collections_Generic_HashSet_int___Add(
    hashMsgId,
    v36,
    (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
  return v36;
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *__fastcall DrawLotsDisplayMessage_DisplayedInGroup__GetSaveData(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4186500 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, method);
    sub_B2C35C(&DrawLotsDisplayMessage_DisplayedInGroup_SaveData_TypeInfo, v3);
    byte_4186500 = 1;
  }
  v4 = sub_B2C42C(DrawLotsDisplayMessage_DisplayedInGroup_SaveData_TypeInfo);
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor((DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *)v4, 0LL);
  if ( !v4 )
    sub_B2C434(v5, v6);
  *(_DWORD *)(v4 + 16) = this->fields.groupId;
  v7 = (System_Int32_array **)System_Linq_Enumerable__ToArray_int_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashMsgId,
                                (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v4 + 24) = v7;
  sub_B2C2F8((BattleServantConfConponent_o *)(v4 + 24), v7, v8, v9, v10, v11, v12, v13);
  return (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *)v4;
}


DrawLotsDisplayMessage_DisplayedInGroup_o *__fastcall DrawLotsDisplayMessage_DisplayedInGroup__SetSaveData(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *msgIds; // x20
  System_Collections_Generic_HashSet_int__o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4186501 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287832, sv);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v5);
    byte_4186501 = 1;
  }
  if ( sv )
  {
    this->fields.groupId = sv->fields.groupId;
    msgIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.msgIds;
    v7 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor_47731024(
      v7,
      msgIds,
      (const MethodInfo_2D85150 *)Method_System_Collections_Generic_HashSet_int___ctor___67287832);
    this->fields.hashMsgId = v7;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.hashMsgId,
      (System_Int32_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  return this;
}


bool __fastcall DrawLotsDisplayMessage_DisplayedInGroup___DrawLotsMessageId_b__2_0(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        BattleMessageGroupEntity_o *ent,
        const MethodInfo *method)
{
  DrawLotsDisplayMessage_DisplayedInGroup_o *v4; // x20

  v4 = this;
  if ( (byte_4186503 & 1) == 0 )
  {
    this = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_B2C35C(
                                                          &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                          ent);
    byte_4186503 = 1;
  }
  if ( !ent || (this = (DrawLotsDisplayMessage_DisplayedInGroup_o *)v4->fields.hashMsgId) == 0LL )
    sub_B2C434(this, ent);
  return !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)this,
            ent->fields.messageId,
            (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor(
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DrawLotsDisplayMessage_DisplayedInGroup___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct DrawLotsDisplayMessage_DisplayedInGroup___c_StaticFields *static_fields; // x0

  if ( (byte_4185595 & 1) == 0 )
  {
    sub_B2C35C(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo, v1);
    byte_4185595 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
  static_fields->__9 = (struct DrawLotsDisplayMessage_DisplayedInGroup___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall DrawLotsDisplayMessage_DisplayedInGroup___c___ctor(
        DrawLotsDisplayMessage_DisplayedInGroup___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall DrawLotsDisplayMessage_DisplayedInGroup___c___DrawLotsMessageId_b__2_1(
        DrawLotsDisplayMessage_DisplayedInGroup___c_o *this,
        BattleMessageGroupEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B2C434(this, 0LL);
  return ent->fields.probability;
}


void __fastcall DrawLotsDisplayMessage___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_41864FE & 1) == 0 )
  {
    sub_B2C35C(&DrawLotsDisplayMessage___c_TypeInfo, v1);
    byte_41864FE = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(DrawLotsDisplayMessage___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)DrawLotsDisplayMessage___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
}


void __fastcall DrawLotsDisplayMessage___c___ctor(DrawLotsDisplayMessage___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *__fastcall DrawLotsDisplayMessage___c___GetSaveData_b__4_0(
        DrawLotsDisplayMessage___c_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B2C434(this, 0LL);
  return DrawLotsDisplayMessage_DisplayedInGroup__GetSaveData(data, (const MethodInfo *)data);
}


void __fastcall DrawLotsDisplayMessage___c__DisplayClass3_0___ctor(
        DrawLotsDisplayMessage___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DrawLotsDisplayMessage___c__DisplayClass3_0___DrawLots_b__0(
        DrawLotsDisplayMessage___c__DisplayClass3_0_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B2C434(this, 0LL);
  return data->fields.groupId == this->fields.groupId;
}