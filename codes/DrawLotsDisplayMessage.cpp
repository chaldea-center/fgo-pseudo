void __fastcall DrawLotsDisplayMessage___ctor(DrawLotsDisplayMessage_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438D0AD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup___ctor__);
    sub_B775C4(&System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo);
    byte_438D0AD = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup___ctor__);
  this->fields.displayedList = (struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall DrawLotsDisplayMessage__DrawLots(
        DrawLotsDisplayMessage_o *this,
        int32_t groupId,
        int32_t defMessageId,
        const MethodInfo *method)
{
  DrawLotsDisplayMessage___c__DisplayClass3_0_o *v7; // x21
  BattleMessageGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  System_Collections_ICollection_o *Entities; // x22
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x23
  peRenderTexture_ChangeLayerObject_o *v14; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_o *v15; // x20

  if ( (byte_438D0AA & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_BattleMessageGroupMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Find__);
    sub_B775C4(&Method_System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup___ctor__);
    sub_B775C4(&System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo);
    sub_B775C4(&Method_DrawLotsDisplayMessage___c__DisplayClass3_0__DrawLots_b__0__);
    sub_B775C4(&DrawLotsDisplayMessage___c__DisplayClass3_0_TypeInfo);
    byte_438D0AA = 1;
  }
  v7 = (DrawLotsDisplayMessage___c__DisplayClass3_0_o *)sub_B77694(DrawLotsDisplayMessage___c__DisplayClass3_0_TypeInfo);
  DrawLotsDisplayMessage___c__DisplayClass3_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_17;
  v7->fields.groupId = groupId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BattleMessageGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_BattleMessageGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_17;
  Entities = (System_Collections_ICollection_o *)BattleMessageGroupMaster__GetEntities(
                                                   Master_WarQuestSelectionMaster,
                                                   v7->fields.groupId,
                                                   0LL);
  if ( BasicHelper__IsNullOrEmpty(Entities, 0LL) )
    return defMessageId;
  displayedList = this->fields.displayedList;
  v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_DrawLotsDisplayMessage___c__DisplayClass3_0__DrawLots_b__0__,
    (const MethodInfo_2C3248C *)Method_System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup___ctor__);
  if ( !displayedList )
    goto LABEL_17;
  v14 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)displayedList,
          (System_Predicate_T__o *)v13,
          (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Find__);
  if ( !v14 )
  {
    v15 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_B77694(DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo);
    DrawLotsDisplayMessage_DisplayedInGroup___ctor(v15, 0LL);
    if ( v15 )
    {
      v15->fields.groupId = v7->fields.groupId;
      Master_WarQuestSelectionMaster = (BattleMessageGroupMaster_o *)this->fields.displayedList;
      if ( Master_WarQuestSelectionMaster )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__);
        return DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
                 v15,
                 (BattleMessageGroupEntity_array *)Entities,
                 0LL);
      }
    }
LABEL_17:
    sub_B7769C(Master_WarQuestSelectionMaster, v9);
  }
  v15 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)v14;
  return DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
           v15,
           (BattleMessageGroupEntity_array *)Entities,
           0LL);
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *__fastcall DrawLotsDisplayMessage__GetSaveData(
        DrawLotsDisplayMessage_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x19
  DrawLotsDisplayMessage___c_c *v4; // x0
  struct DrawLotsDisplayMessage___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__4_0; // x20
  Il2CppObject *v7; // x21
  struct DrawLotsDisplayMessage___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_438D0AB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Select_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
    sub_B775C4(&Method_System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor__);
    sub_B775C4(&System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo);
    sub_B775C4(&Method_DrawLotsDisplayMessage___c__GetSaveData_b__4_0__);
    sub_B775C4(&DrawLotsDisplayMessage___c_TypeInfo);
    byte_438D0AB = 1;
  }
  displayedList = this->fields.displayedList;
  v4 = DrawLotsDisplayMessage___c_TypeInfo;
  if ( (BYTE3(DrawLotsDisplayMessage___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DrawLotsDisplayMessage___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DrawLotsDisplayMessage___c_TypeInfo);
    v4 = DrawLotsDisplayMessage___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = DrawLotsDisplayMessage___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__4_0,
      v7,
      Method_DrawLotsDisplayMessage___c__GetSaveData_b__4_0__,
      (const MethodInfo_29EAA10 *)Method_System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor__);
    v8 = DrawLotsDisplayMessage___c_TypeInfo->static_fields;
    v8->__9__4_0 = (struct System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__4_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)displayedList,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
  return System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
           v15,
           (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
}


void __fastcall DrawLotsDisplayMessage__Init(DrawLotsDisplayMessage_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x0

  if ( (byte_438D0A9 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Clear__);
    byte_438D0A9 = 1;
  }
  displayedList = this->fields.displayedList;
  if ( !displayedList )
    sub_B7769C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)displayedList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Clear__);
}


void __fastcall DrawLotsDisplayMessage__SetSaveData(
        DrawLotsDisplayMessage_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *saves,
        const MethodInfo *method)
{
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v5; // x21

  if ( (byte_438D0AC & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor__);
    sub_B775C4(&System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
    sub_B775C4(&Method_DrawLotsDisplayMessage__SetSaveData_b__5_0__);
    byte_438D0AC = 1;
  }
  v5 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v5,
    (Il2CppObject *)this,
    Method_DrawLotsDisplayMessage__SetSaveData_b__5_0__,
    (const MethodInfo_26A0868 *)Method_System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)saves,
    (System_Action_T__o *)v5,
    (const MethodInfo_1C676E8 *)Method_BasicHelper_ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
}


void __fastcall DrawLotsDisplayMessage___SetSaveData_b__5_0(
        DrawLotsDisplayMessage_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *sv,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x20
  DrawLotsDisplayMessage_DisplayedInGroup_o *v6; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_438D0AE & 1) == 0 )
  {
    sub_B775C4(&DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__);
    byte_438D0AE = 1;
  }
  displayedList = this->fields.displayedList;
  v6 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_B77694(DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo);
  DrawLotsDisplayMessage_DisplayedInGroup___ctor(v6, 0LL);
  if ( !v6
    || (v7 = (EventMissionProgressRequest_Argument_ProgressData_o *)DrawLotsDisplayMessage_DisplayedInGroup__SetSaveData(
                                                                      v6,
                                                                      sv,
                                                                      0LL),
        !displayedList) )
  {
    sub_B7769C(v7, v8);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)displayedList,
    v7,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__);
}


void __fastcall DrawLotsDisplayMessage_DisplayedInGroup___ctor(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20

  if ( (byte_43885F5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int___ctor___69373296);
    sub_B775C4(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_43885F5 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_B77694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_2EDBA84 *)Method_System_Collections_Generic_HashSet_int___ctor___69373296);
  this->fields.hashMsgId = v3;
  sub_B77560(&this->fields.hashMsgId);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        BattleMessageGroupEntity_array *entities,
        const MethodInfo *method)
{
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v5; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0
  System_Collections_ICollection_o *v7; // x21
  __int64 v8; // x1
  System_Collections_Generic_HashSet_int__o *hashMsgId; // x0
  DrawLotsDisplayMessage_DisplayedInGroup___c_c *v10; // x0
  struct DrawLotsDisplayMessage_DisplayedInGroup___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__2_1; // x20
  Il2CppObject *v13; // x22
  struct DrawLotsDisplayMessage_DisplayedInGroup___c_StaticFields *v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Int32_array *v16; // x0
  __int64 v17; // x8
  int32_t v18; // w19
  __int64 v20; // x0

  if ( (byte_43885F2 & 1) == 0 )
  {
    sub_B775C4(&Method_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId_b__2_0__);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
    sub_B775C4(&Method_System_Func_BattleMessageGroupEntity__int___ctor__);
    sub_B775C4(&Method_System_Func_BattleMessageGroupEntity__bool___ctor__);
    sub_B775C4(&System_Func_BattleMessageGroupEntity__bool__TypeInfo);
    sub_B775C4(&System_Func_BattleMessageGroupEntity__int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_B775C4(&Method_DrawLotsDisplayMessage_DisplayedInGroup___c__DrawLotsMessageId_b__2_1__);
    sub_B775C4(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo);
    byte_43885F2 = 1;
  }
  v5 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleMessageGroupEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v5,
    (Il2CppObject *)this,
    Method_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId_b__2_0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_BattleMessageGroupEntity__bool___ctor__);
  v6 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
         (System_Collections_Generic_IEnumerable_TSource__o *)entities,
         (System_Func_TSource__bool__o *)v5,
         (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
  v7 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                             v6,
                                             (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
  if ( BasicHelper__IsNullOrEmpty(v7, 0LL) )
  {
    hashMsgId = this->fields.hashMsgId;
    if ( !hashMsgId )
      goto LABEL_19;
    System_Collections_Generic_HashSet_int___Clear(
      hashMsgId,
      (const MethodInfo_2EDC09C *)Method_System_Collections_Generic_HashSet_int__Clear__);
    v7 = (System_Collections_ICollection_o *)entities;
  }
  v10 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
  if ( (BYTE3(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo);
    v10 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__2_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__2_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_BattleMessageGroupEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__2_1,
      v13,
      Method_DrawLotsDisplayMessage_DisplayedInGroup___c__DrawLotsMessageId_b__2_1__,
      (const MethodInfo_29E9E70 *)Method_System_Func_BattleMessageGroupEntity__int___ctor__);
    v14 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
    v14->__9__2_1 = (struct System_Func_BattleMessageGroupEntity__int__o *)_9__2_1;
    sub_B77560(&v14->__9__2_1);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_1D38B10 *)Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__int___);
  v16 = System_Linq_Enumerable__ToArray_int_(
          v15,
          (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
  hashMsgId = (System_Collections_Generic_HashSet_int__o *)RandomUtility__GetRandomRangeIndex(v16, 0, 0LL);
  if ( !v7 )
    goto LABEL_19;
  if ( (unsigned int)hashMsgId >= LODWORD(v7[1].monitor) )
  {
    v20 = sub_B776C8(hashMsgId);
    sub_B77668(v20, 0LL);
  }
  v17 = *((_QWORD *)&v7[2].klass + (int)hashMsgId);
  if ( !v17 || (hashMsgId = this->fields.hashMsgId) == 0LL )
LABEL_19:
    sub_B7769C(hashMsgId, v8);
  v18 = *(_DWORD *)(v17 + 20);
  System_Collections_Generic_HashSet_int___Add(
    hashMsgId,
    v18,
    (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__);
  return v18;
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *__fastcall DrawLotsDisplayMessage_DisplayedInGroup__GetSaveData(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        const MethodInfo *method)
{
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_43885F3 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&DrawLotsDisplayMessage_DisplayedInGroup_SaveData_TypeInfo);
    byte_43885F3 = 1;
  }
  v3 = (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *)sub_B77694(DrawLotsDisplayMessage_DisplayedInGroup_SaveData_TypeInfo);
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor(v3, 0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  v3->fields.groupId = this->fields.groupId;
  v3->fields.msgIds = System_Linq_Enumerable__ToArray_int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashMsgId,
                        (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
  sub_B77560(&v3->fields.msgIds);
  return v3;
}


DrawLotsDisplayMessage_DisplayedInGroup_o *__fastcall DrawLotsDisplayMessage_DisplayedInGroup__SetSaveData(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *sv,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *msgIds; // x20
  System_Collections_Generic_HashSet_int__o *v6; // x21

  if ( (byte_43885F4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int___ctor___69373304);
    sub_B775C4(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_43885F4 = 1;
  }
  if ( sv )
  {
    this->fields.groupId = sv->fields.groupId;
    msgIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.msgIds;
    v6 = (System_Collections_Generic_HashSet_int__o *)sub_B77694(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor_49134420(
      v6,
      msgIds,
      (const MethodInfo_2EDBB54 *)Method_System_Collections_Generic_HashSet_int___ctor___69373304);
    this->fields.hashMsgId = v6;
    sub_B77560(&this->fields.hashMsgId);
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
  if ( (byte_43885F6 & 1) == 0 )
  {
    this = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_43885F6 = 1;
  }
  if ( !ent || (this = (DrawLotsDisplayMessage_DisplayedInGroup_o *)v4->fields.hashMsgId) == 0LL )
    sub_B7769C(this, ent);
  return !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)this,
            ent->fields.messageId,
            (const MethodInfo_2EDC108 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor(
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DrawLotsDisplayMessage_DisplayedInGroup___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438AC06 & 1) == 0 )
  {
    sub_B775C4(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo);
    byte_438AC06 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, 0LL);
  return ent->fields.probability;
}


void __fastcall DrawLotsDisplayMessage___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct DrawLotsDisplayMessage___c_StaticFields *static_fields; // x0

  if ( (byte_43885F1 & 1) == 0 )
  {
    sub_B775C4(&DrawLotsDisplayMessage___c_TypeInfo);
    byte_43885F1 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(DrawLotsDisplayMessage___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = DrawLotsDisplayMessage___c_TypeInfo->static_fields;
  static_fields->__9 = (struct DrawLotsDisplayMessage___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, 0LL);
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
    sub_B7769C(this, 0LL);
  return data->fields.groupId == this->fields.groupId;
}