void __fastcall DrawLotsDisplayMessage___ctor(DrawLotsDisplayMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42162E3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo, v4);
    byte_42162E3 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup___ctor__);
  this->fields.displayedList = (struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *)v5;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
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
  System_Collections_ICollection_o *Entities; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x23
  peRenderTexture_ChangeLayerObject_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  DrawLotsDisplayMessage_DisplayedInGroup_o *v26; // x20

  if ( (byte_42162E0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_BattleMessageGroupMaster___, *(_QWORD *)&groupId);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Find__, v10);
    sub_B0D8A4(&Method_System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup___ctor__, v11);
    sub_B0D8A4(&System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo, v12);
    sub_B0D8A4(&Method_DrawLotsDisplayMessage___c__DisplayClass3_0__DrawLots_b__0__, v13);
    sub_B0D8A4(&DrawLotsDisplayMessage___c__DisplayClass3_0_TypeInfo, v14);
    byte_42162E0 = 1;
  }
  v15 = (DrawLotsDisplayMessage___c__DisplayClass3_0_o *)sub_B0D974(
                                                           DrawLotsDisplayMessage___c__DisplayClass3_0_TypeInfo,
                                                           *(_QWORD *)&groupId,
                                                           *(_QWORD *)&defMessageId);
  DrawLotsDisplayMessage___c__DisplayClass3_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_17;
  v15->fields.groupId = groupId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BattleMessageGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BattleMessageGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_17;
  Entities = (System_Collections_ICollection_o *)BattleMessageGroupMaster__GetEntities(
                                                   Master_WarQuestSelectionMaster,
                                                   v15->fields.groupId,
                                                   0LL);
  if ( BasicHelper__IsNullOrEmpty(Entities, 0LL) )
    return defMessageId;
  displayedList = this->fields.displayedList;
  v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo,
                                                                   v18,
                                                                   v19);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v22,
    (Il2CppObject *)v15,
    Method_DrawLotsDisplayMessage___c__DisplayClass3_0__DrawLots_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup___ctor__);
  if ( !displayedList )
    goto LABEL_17;
  v23 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)displayedList,
          (System_Predicate_T__o *)v22,
          (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Find__);
  if ( !v23 )
  {
    v26 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_B0D974(
                                                         DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo,
                                                         v24,
                                                         v25);
    DrawLotsDisplayMessage_DisplayedInGroup___ctor(v26, 0LL);
    if ( v26 )
    {
      v26->fields.groupId = v15->fields.groupId;
      Master_WarQuestSelectionMaster = (BattleMessageGroupMaster_o *)this->fields.displayedList;
      if ( Master_WarQuestSelectionMaster )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__);
        return DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
                 v26,
                 (BattleMessageGroupEntity_array *)Entities,
                 0LL);
      }
    }
LABEL_17:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  v26 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)v23;
  return DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
           v26,
           (BattleMessageGroupEntity_array *)Entities,
           0LL);
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *__fastcall DrawLotsDisplayMessage__GetSaveData(
        DrawLotsDisplayMessage_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x19
  DrawLotsDisplayMessage___c_c *v10; // x0
  struct DrawLotsDisplayMessage___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__4_0; // x20
  Il2CppObject *v13; // x21
  struct DrawLotsDisplayMessage___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_42162E1 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_Select_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___,
      method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___, v4);
    sub_B0D8A4(
      &Method_System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor__,
      v5);
    sub_B0D8A4(
      &System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo,
      v6);
    sub_B0D8A4(&Method_DrawLotsDisplayMessage___c__GetSaveData_b__4_0__, v7);
    sub_B0D8A4(&DrawLotsDisplayMessage___c_TypeInfo, v8);
    byte_42162E1 = 1;
  }
  displayedList = this->fields.displayedList;
  v10 = DrawLotsDisplayMessage___c_TypeInfo;
  if ( (BYTE3(DrawLotsDisplayMessage___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DrawLotsDisplayMessage___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DrawLotsDisplayMessage___c_TypeInfo);
    v10 = DrawLotsDisplayMessage___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = DrawLotsDisplayMessage___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo,
                                                                                                method,
                                                                                                v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__4_0,
      v13,
      Method_DrawLotsDisplayMessage___c__GetSaveData_b__4_0__,
      (const MethodInfo_261A104 *)Method_System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor__);
    v14 = DrawLotsDisplayMessage___c_TypeInfo->static_fields;
    v14->__9__4_0 = (struct System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__4_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)displayedList,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
  return System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
           v21,
           (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
}


void __fastcall DrawLotsDisplayMessage__Init(DrawLotsDisplayMessage_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x0

  if ( (byte_42162DF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Clear__, method);
    byte_42162DF = 1;
  }
  displayedList = this->fields.displayedList;
  if ( !displayedList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)displayedList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Clear__);
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

  if ( (byte_42162E2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor__, saves);
    sub_B0D8A4(&System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo, v5);
    sub_B0D8A4(&Method_BasicHelper_ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___, v6);
    sub_B0D8A4(&Method_DrawLotsDisplayMessage__SetSaveData_b__5_0__, v7);
    byte_42162E2 = 1;
  }
  v8 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo,
                                                                              saves,
                                                                              method);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v8,
    (Il2CppObject *)this,
    Method_DrawLotsDisplayMessage__SetSaveData_b__5_0__,
    (const MethodInfo_246EA3C *)Method_System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)saves,
    (System_Action_T__o *)v8,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
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

  if ( (byte_42162E4 & 1) == 0 )
  {
    sub_B0D8A4(&DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo, sv);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__, v5);
    byte_42162E4 = 1;
  }
  displayedList = this->fields.displayedList;
  v7 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_B0D974(
                                                      DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo,
                                                      sv,
                                                      method);
  DrawLotsDisplayMessage_DisplayedInGroup___ctor(v7, 0LL);
  if ( !v7
    || (v8 = (EventMissionProgressRequest_Argument_ProgressData_o *)DrawLotsDisplayMessage_DisplayedInGroup__SetSaveData(
                                                                      v7,
                                                                      sv,
                                                                      0LL),
        !displayedList) )
  {
    sub_B0D97C(v8);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)displayedList,
    v8,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__);
}


void __fastcall DrawLotsDisplayMessage_DisplayedInGroup___ctor(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_HashSet_int__o *v5; // x20

  if ( (byte_4211AF5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, method);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v4);
    byte_4211AF5 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  this->fields.hashMsgId = v5;
  sub_B0D840(&this->fields.hashMsgId, v5);
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
  __int64 v21; // x2
  System_Collections_Generic_HashSet_int__o *hashMsgId; // x0
  DrawLotsDisplayMessage_DisplayedInGroup___c_c *v23; // x0
  struct DrawLotsDisplayMessage_DisplayedInGroup___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__2_1; // x20
  Il2CppObject *v26; // x22
  struct DrawLotsDisplayMessage_DisplayedInGroup___c_StaticFields *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Int32_array *v29; // x0
  __int64 v30; // x8
  int32_t v31; // w19
  __int64 v33; // x0

  if ( (byte_4211AF2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId_b__2_0__, entities);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__int___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___, v8);
    sub_B0D8A4(&Method_System_Func_BattleMessageGroupEntity__int___ctor__, v9);
    sub_B0D8A4(&Method_System_Func_BattleMessageGroupEntity__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_BattleMessageGroupEntity__bool__TypeInfo, v11);
    sub_B0D8A4(&System_Func_BattleMessageGroupEntity__int__TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Clear__, v14);
    sub_B0D8A4(&Method_DrawLotsDisplayMessage_DisplayedInGroup___c__DrawLotsMessageId_b__2_1__, v15);
    sub_B0D8A4(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo, v16);
    byte_4211AF2 = 1;
  }
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleMessageGroupEntity__bool__TypeInfo,
                                                                             entities,
                                                                             method);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)this,
    Method_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId_b__2_0__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleMessageGroupEntity__bool___ctor__);
  v18 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
  v19 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                              v18,
                                              (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
  if ( BasicHelper__IsNullOrEmpty(v19, 0LL) )
  {
    hashMsgId = this->fields.hashMsgId;
    if ( !hashMsgId )
      goto LABEL_19;
    System_Collections_Generic_HashSet_int___Clear(
      hashMsgId,
      (const MethodInfo_2C75614 *)Method_System_Collections_Generic_HashSet_int__Clear__);
    v19 = (System_Collections_ICollection_o *)entities;
  }
  v23 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
  if ( (BYTE3(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo);
    v23 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__2_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__2_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_BattleMessageGroupEntity__int__TypeInfo,
                                                                                v20,
                                                                                v21);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__2_1,
      v26,
      Method_DrawLotsDisplayMessage_DisplayedInGroup___c__DrawLotsMessageId_b__2_1__,
      (const MethodInfo_2619564 *)Method_System_Func_BattleMessageGroupEntity__int___ctor__);
    v27 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
    v27->__9__2_1 = (struct System_Func_BattleMessageGroupEntity__int__o *)_9__2_1;
    sub_B0D840(&v27->__9__2_1, _9__2_1);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__int___);
  v29 = System_Linq_Enumerable__ToArray_int_(
          v28,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  hashMsgId = (System_Collections_Generic_HashSet_int__o *)RandomUtility__GetRandomRangeIndex(v29, 0, 0LL);
  if ( !v19 )
    goto LABEL_19;
  if ( (unsigned int)hashMsgId >= LODWORD(v19[1].monitor) )
  {
    v33 = sub_B0D9A8(hashMsgId);
    sub_B0D948(v33, 0LL);
  }
  v30 = *((_QWORD *)&v19[2].klass + (int)hashMsgId);
  if ( !v30 || (hashMsgId = this->fields.hashMsgId) == 0LL )
LABEL_19:
    sub_B0D97C(hashMsgId);
  v31 = *(_DWORD *)(v30 + 20);
  System_Collections_Generic_HashSet_int___Add(
    hashMsgId,
    v31,
    (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
  return v31;
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *__fastcall DrawLotsDisplayMessage_DisplayedInGroup__GetSaveData(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v5; // x20
  __int64 v6; // x0
  System_Int32_array *v7; // x0

  if ( (byte_4211AF3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, method);
    sub_B0D8A4(&DrawLotsDisplayMessage_DisplayedInGroup_SaveData_TypeInfo, v4);
    byte_4211AF3 = 1;
  }
  v5 = (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *)sub_B0D974(
                                                               DrawLotsDisplayMessage_DisplayedInGroup_SaveData_TypeInfo,
                                                               method,
                                                               v2);
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor(v5, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  v5->fields.groupId = this->fields.groupId;
  v7 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashMsgId,
         (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  v5->fields.msgIds = v7;
  sub_B0D840(&v5->fields.msgIds, v7);
  return v5;
}


DrawLotsDisplayMessage_DisplayedInGroup_o *__fastcall DrawLotsDisplayMessage_DisplayedInGroup__SetSaveData(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *msgIds; // x20
  System_Collections_Generic_HashSet_int__o *v7; // x21

  if ( (byte_4211AF4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861304, sv);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v5);
    byte_4211AF4 = 1;
  }
  if ( sv )
  {
    this->fields.groupId = sv->fields.groupId;
    msgIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.msgIds;
    v7 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                        System_Collections_Generic_HashSet_int__TypeInfo,
                                                        sv,
                                                        method);
    System_Collections_Generic_HashSet_int____ctor_46616780(
      v7,
      msgIds,
      (const MethodInfo_2C750CC *)Method_System_Collections_Generic_HashSet_int___ctor___67861304);
    this->fields.hashMsgId = v7;
    sub_B0D840(&this->fields.hashMsgId, v7);
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
  if ( (byte_4211AF6 & 1) == 0 )
  {
    this = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_B0D8A4(
                                                          &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                          ent);
    byte_4211AF6 = 1;
  }
  if ( !ent || (this = (DrawLotsDisplayMessage_DisplayedInGroup_o *)v4->fields.hashMsgId) == 0LL )
    sub_B0D97C(this);
  return !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)this,
            ent->fields.messageId,
            (const MethodInfo_2C75680 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct DrawLotsDisplayMessage_DisplayedInGroup___c_StaticFields *static_fields; // x0

  if ( (byte_4211F6C & 1) == 0 )
  {
    sub_B0D8A4(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo, v1);
    byte_4211F6C = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
  static_fields->__9 = (struct DrawLotsDisplayMessage_DisplayedInGroup___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return ent->fields.probability;
}


void __fastcall DrawLotsDisplayMessage___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct DrawLotsDisplayMessage___c_StaticFields *static_fields; // x0

  if ( (byte_4211AF1 & 1) == 0 )
  {
    sub_B0D8A4(&DrawLotsDisplayMessage___c_TypeInfo, v1);
    byte_4211AF1 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(DrawLotsDisplayMessage___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = DrawLotsDisplayMessage___c_TypeInfo->static_fields;
  static_fields->__9 = (struct DrawLotsDisplayMessage___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return data->fields.groupId == this->fields.groupId;
}