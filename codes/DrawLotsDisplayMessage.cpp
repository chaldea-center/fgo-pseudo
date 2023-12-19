void __fastcall DrawLotsDisplayMessage___ctor(DrawLotsDisplayMessage_o *this, const MethodInfo *method)
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

  if ( (byte_40FBCED & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo, v6);
    byte_40FBCED = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup___ctor__);
  this->fields.displayedList = (struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DrawLotsDisplayMessage__DrawLots(
        DrawLotsDisplayMessage_o *this,
        int32_t groupId,
        int32_t defMessageId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  DrawLotsDisplayMessage___c__DisplayClass3_0_o *v16; // x21
  BattleMessageGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_ICollection_o *Entities; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x23
  peRenderTexture_ChangeLayerObject_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  DrawLotsDisplayMessage_DisplayedInGroup_o *v31; // x20
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *v32; // x0

  if ( (byte_40FBCEA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_BattleMessageGroupMaster___, *(_QWORD *)&groupId);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Find__, v11);
    sub_B16FFC(&Method_System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup___ctor__, v12);
    sub_B16FFC(&System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo, v13);
    sub_B16FFC(&Method_DrawLotsDisplayMessage___c__DisplayClass3_0__DrawLots_b__0__, v14);
    sub_B16FFC(&DrawLotsDisplayMessage___c__DisplayClass3_0_TypeInfo, v15);
    byte_40FBCEA = 1;
  }
  v16 = (DrawLotsDisplayMessage___c__DisplayClass3_0_o *)sub_B170CC(
                                                           DrawLotsDisplayMessage___c__DisplayClass3_0_TypeInfo,
                                                           *(_QWORD *)&groupId,
                                                           *(_QWORD *)&defMessageId,
                                                           method,
                                                           v4);
  DrawLotsDisplayMessage___c__DisplayClass3_0___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_17;
  v16->fields.groupId = groupId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BattleMessageGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BattleMessageGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_17;
  Entities = (System_Collections_ICollection_o *)BattleMessageGroupMaster__GetEntities(
                                                   Master_WarQuestSelectionMaster,
                                                   v16->fields.groupId,
                                                   0LL);
  if ( BasicHelper__IsNullOrEmpty(Entities, 0LL) )
    return defMessageId;
  displayedList = this->fields.displayedList;
  v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo,
                                                                   v19,
                                                                   v20,
                                                                   v21,
                                                                   v22);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v25,
    (Il2CppObject *)v16,
    Method_DrawLotsDisplayMessage___c__DisplayClass3_0__DrawLots_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup___ctor__);
  if ( !displayedList )
    goto LABEL_17;
  v26 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)displayedList,
          (System_Predicate_T__o *)v25,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Find__);
  if ( !v26 )
  {
    v31 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_B170CC(
                                                         DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo,
                                                         v27,
                                                         v28,
                                                         v29,
                                                         v30);
    DrawLotsDisplayMessage_DisplayedInGroup___ctor(v31, 0LL);
    if ( v31 )
    {
      v31->fields.groupId = v16->fields.groupId;
      v32 = this->fields.displayedList;
      if ( v32 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v32,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__);
        return DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
                 v31,
                 (BattleMessageGroupEntity_array *)Entities,
                 0LL);
      }
    }
LABEL_17:
    sub_B170D4();
  }
  v31 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)v26;
  return DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
           v31,
           (BattleMessageGroupEntity_array *)Entities,
           0LL);
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *__fastcall DrawLotsDisplayMessage__GetSaveData(
        DrawLotsDisplayMessage_o *this,
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
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x19
  DrawLotsDisplayMessage___c_c *v12; // x0
  struct DrawLotsDisplayMessage___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__4_0; // x20
  Il2CppObject *v15; // x21
  struct DrawLotsDisplayMessage___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_40FBCEB & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Linq_Enumerable_Select_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___,
      method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___, v6);
    sub_B16FFC(
      &Method_System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor__,
      v7);
    sub_B16FFC(
      &System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo,
      v8);
    sub_B16FFC(&Method_DrawLotsDisplayMessage___c__GetSaveData_b__4_0__, v9);
    sub_B16FFC(&DrawLotsDisplayMessage___c_TypeInfo, v10);
    byte_40FBCEB = 1;
  }
  displayedList = this->fields.displayedList;
  v12 = DrawLotsDisplayMessage___c_TypeInfo;
  if ( (BYTE3(DrawLotsDisplayMessage___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DrawLotsDisplayMessage___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DrawLotsDisplayMessage___c_TypeInfo);
    v12 = DrawLotsDisplayMessage___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = DrawLotsDisplayMessage___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo,
                                                                                                method,
                                                                                                v2,
                                                                                                v3,
                                                                                                v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__4_0,
      v15,
      Method_DrawLotsDisplayMessage___c__GetSaveData_b__4_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor__);
    v16 = DrawLotsDisplayMessage___c_TypeInfo->static_fields;
    v16->__9__4_0 = (struct System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)displayedList,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
  return System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
           v23,
           (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
}


void __fastcall DrawLotsDisplayMessage__Init(DrawLotsDisplayMessage_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x0

  if ( (byte_40FBCE9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Clear__, method);
    byte_40FBCE9 = 1;
  }
  displayedList = this->fields.displayedList;
  if ( !displayedList )
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)displayedList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Clear__);
}


void __fastcall DrawLotsDisplayMessage__SetSaveData(
        DrawLotsDisplayMessage_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *saves,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v10; // x21

  if ( (byte_40FBCEC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor__, saves);
    sub_B16FFC(&System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo, v7);
    sub_B16FFC(&Method_BasicHelper_ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___, v8);
    sub_B16FFC(&Method_DrawLotsDisplayMessage__SetSaveData_b__5_0__, v9);
    byte_40FBCEC = 1;
  }
  v10 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo,
                                                                               saves,
                                                                               method,
                                                                               v3,
                                                                               v4);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v10,
    (Il2CppObject *)this,
    Method_DrawLotsDisplayMessage__SetSaveData_b__5_0__,
    (const MethodInfo_24B7310 *)Method_System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)saves,
    (System_Action_T__o *)v10,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
}


void __fastcall DrawLotsDisplayMessage___SetSaveData_b__5_0(
        DrawLotsDisplayMessage_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x20
  DrawLotsDisplayMessage_DisplayedInGroup_o *v9; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x0

  if ( (byte_40FBCEE & 1) == 0 )
  {
    sub_B16FFC(&DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo, sv);
    sub_B16FFC(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__, v7);
    byte_40FBCEE = 1;
  }
  displayedList = this->fields.displayedList;
  v9 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_B170CC(
                                                      DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo,
                                                      sv,
                                                      method,
                                                      v3,
                                                      v4);
  DrawLotsDisplayMessage_DisplayedInGroup___ctor(v9, 0LL);
  if ( !v9
    || (v10 = (EventMissionProgressRequest_Argument_ProgressData_o *)DrawLotsDisplayMessage_DisplayedInGroup__SetSaveData(
                                                                       v9,
                                                                       sv,
                                                                       0LL),
        !displayedList) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)displayedList,
    v10,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__);
}


void __fastcall DrawLotsDisplayMessage_DisplayedInGroup___ctor(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_HashSet_int__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F8B71 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, method);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    byte_40F8B71 = 1;
  }
  v7 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  System_Collections_Generic_HashSet_int____ctor(
    v7,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  this->fields.hashMsgId = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.hashMsgId,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        BattleMessageGroupEntity_array *entities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Collections_ICollection_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_HashSet_int__o *hashMsgId; // x0
  DrawLotsDisplayMessage_DisplayedInGroup___c_c *v27; // x0
  struct DrawLotsDisplayMessage_DisplayedInGroup___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__2_1; // x20
  Il2CppObject *v30; // x22
  struct DrawLotsDisplayMessage_DisplayedInGroup___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Int32_array *v39; // x0
  __int64 RandomRangeIndex; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x8
  System_Collections_Generic_HashSet_int__o *v44; // x0
  int32_t v45; // w19

  if ( (byte_40F8B6E & 1) == 0 )
  {
    sub_B16FFC(&Method_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId_b__2_0__, entities);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__int___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___, v10);
    sub_B16FFC(&Method_System_Func_BattleMessageGroupEntity__int___ctor__, v11);
    sub_B16FFC(&Method_System_Func_BattleMessageGroupEntity__bool___ctor__, v12);
    sub_B16FFC(&System_Func_BattleMessageGroupEntity__bool__TypeInfo, v13);
    sub_B16FFC(&System_Func_BattleMessageGroupEntity__int__TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Clear__, v16);
    sub_B16FFC(&Method_DrawLotsDisplayMessage_DisplayedInGroup___c__DrawLotsMessageId_b__2_1__, v17);
    sub_B16FFC(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo, v18);
    byte_40F8B6E = 1;
  }
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleMessageGroupEntity__bool__TypeInfo,
                                                                             entities,
                                                                             method,
                                                                             v3,
                                                                             v4);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)this,
    Method_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId_b__2_0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleMessageGroupEntity__bool___ctor__);
  v20 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
  v21 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                              v20,
                                              (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
  if ( BasicHelper__IsNullOrEmpty(v21, 0LL) )
  {
    hashMsgId = this->fields.hashMsgId;
    if ( !hashMsgId )
      goto LABEL_19;
    System_Collections_Generic_HashSet_int___Clear(
      hashMsgId,
      (const MethodInfo_21D8598 *)Method_System_Collections_Generic_HashSet_int__Clear__);
    v21 = (System_Collections_ICollection_o *)entities;
  }
  v27 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
  if ( (BYTE3(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo);
    v27 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__2_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__2_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_BattleMessageGroupEntity__int__TypeInfo,
                                                                                v22,
                                                                                v23,
                                                                                v24,
                                                                                v25);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__2_1,
      v30,
      Method_DrawLotsDisplayMessage_DisplayedInGroup___c__DrawLotsMessageId_b__2_1__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_BattleMessageGroupEntity__int___ctor__);
    v31 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
    v31->__9__2_1 = (struct System_Func_BattleMessageGroupEntity__int__o *)_9__2_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v31->__9__2_1,
      (System_Int32_array **)_9__2_1,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__int___);
  v39 = System_Linq_Enumerable__ToArray_int_(
          v38,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v39, 0, 0LL);
  if ( !v21 )
    goto LABEL_19;
  if ( (unsigned int)RandomRangeIndex >= LODWORD(v21[1].monitor) )
  {
    sub_B17100(RandomRangeIndex, v41, v42);
    sub_B170A0();
  }
  v43 = *((_QWORD *)&v21[2].klass + (int)RandomRangeIndex);
  if ( !v43 || (v44 = this->fields.hashMsgId) == 0LL )
LABEL_19:
    sub_B170D4();
  v45 = *(_DWORD *)(v43 + 20);
  System_Collections_Generic_HashSet_int___Add(
    v44,
    v45,
    (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
  return v45;
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *__fastcall DrawLotsDisplayMessage_DisplayedInGroup__GetSaveData(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x20
  System_Int32_array **v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F8B6F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, method);
    sub_B16FFC(&DrawLotsDisplayMessage_DisplayedInGroup_SaveData_TypeInfo, v6);
    byte_40F8B6F = 1;
  }
  v7 = sub_B170CC(DrawLotsDisplayMessage_DisplayedInGroup_SaveData_TypeInfo, method, v2, v3, v4);
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor((DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *)v7, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_DWORD *)(v7 + 16) = this->fields.groupId;
  v8 = (System_Int32_array **)System_Linq_Enumerable__ToArray_int_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashMsgId,
                                (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v7 + 24) = v8;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 24), v8, v9, v10, v11, v12, v13, v14);
  return (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *)v7;
}


DrawLotsDisplayMessage_DisplayedInGroup_o *__fastcall DrawLotsDisplayMessage_DisplayedInGroup__SetSaveData(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *msgIds; // x20
  System_Collections_Generic_HashSet_int__o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F8B70 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713952, sv);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v7);
    byte_40F8B70 = 1;
  }
  if ( sv )
  {
    this->fields.groupId = sv->fields.groupId;
    msgIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.msgIds;
    v9 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                        System_Collections_Generic_HashSet_int__TypeInfo,
                                                        sv,
                                                        method,
                                                        v3,
                                                        v4);
    System_Collections_Generic_HashSet_int____ctor_35487824(
      v9,
      msgIds,
      (const MethodInfo_21D8050 *)Method_System_Collections_Generic_HashSet_int___ctor___66713952);
    this->fields.hashMsgId = v9;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.hashMsgId,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  return this;
}


bool __fastcall DrawLotsDisplayMessage_DisplayedInGroup___DrawLotsMessageId_b__2_0(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        BattleMessageGroupEntity_o *ent,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *hashMsgId; // x0

  if ( (byte_40F8B72 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Contains__, ent);
    byte_40F8B72 = 1;
  }
  if ( !ent || (hashMsgId = this->fields.hashMsgId) == 0LL )
    sub_B170D4();
  return !System_Collections_Generic_HashSet_int___Contains(
            hashMsgId,
            ent->fields.messageId,
            (const MethodInfo_21D8604 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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

  if ( (byte_40F78CF & 1) == 0 )
  {
    sub_B16FFC(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo, v1);
    byte_40F78CF = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return ent->fields.probability;
}


void __fastcall DrawLotsDisplayMessage___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F8B6D & 1) == 0 )
  {
    sub_B16FFC(&DrawLotsDisplayMessage___c_TypeInfo, v1);
    byte_40F8B6D = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(DrawLotsDisplayMessage___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)DrawLotsDisplayMessage___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
    sub_B170D4();
  return data->fields.groupId == this->fields.groupId;
}