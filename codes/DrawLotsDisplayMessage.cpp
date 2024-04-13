void __fastcall DrawLotsDisplayMessage___ctor(DrawLotsDisplayMessage_o *this, const MethodInfo *method)
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

  if ( (byte_42EA9CB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo, v5, v6, v7);
    byte_42EA9CB = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup___ctor__);
  this->fields.displayedList = (struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *)v8;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall DrawLotsDisplayMessage__DrawLots(
        DrawLotsDisplayMessage_o *this,
        int32_t groupId,
        int32_t defMessageId,
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
  DrawLotsDisplayMessage___c__DisplayClass3_0_o *v31; // x21
  BattleMessageGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v33; // x1
  System_Collections_ICollection_o *Entities; // x22
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v37; // x23
  peRenderTexture_ChangeLayerObject_o *v38; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_o *v39; // x20

  if ( (byte_42EA9C8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BattleMessageGroupMaster___, groupId, defMessageId, method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Find__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_DrawLotsDisplayMessage___c__DisplayClass3_0__DrawLots_b__0__, v25, v26, v27);
    sub_B5D5C4(&DrawLotsDisplayMessage___c__DisplayClass3_0_TypeInfo, v28, v29, v30);
    byte_42EA9C8 = 1;
  }
  v31 = (DrawLotsDisplayMessage___c__DisplayClass3_0_o *)sub_B5D694(DrawLotsDisplayMessage___c__DisplayClass3_0_TypeInfo);
  DrawLotsDisplayMessage___c__DisplayClass3_0___ctor(v31, 0LL);
  if ( !v31 )
    goto LABEL_17;
  v31->fields.groupId = groupId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BattleMessageGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BattleMessageGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_17;
  Entities = (System_Collections_ICollection_o *)BattleMessageGroupMaster__GetEntities(
                                                   Master_WarQuestSelectionMaster,
                                                   v31->fields.groupId,
                                                   0LL);
  if ( BasicHelper__IsNullOrEmpty(Entities, 0LL) )
    return defMessageId;
  displayedList = this->fields.displayedList;
  v37 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v37,
    (Il2CppObject *)v31,
    Method_DrawLotsDisplayMessage___c__DisplayClass3_0__DrawLots_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup___ctor__);
  if ( !displayedList )
    goto LABEL_17;
  v38 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)displayedList,
          (System_Predicate_T__o *)v37,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Find__);
  if ( !v38 )
  {
    v39 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_B5D694(DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo);
    DrawLotsDisplayMessage_DisplayedInGroup___ctor(v39, 0LL);
    if ( v39 )
    {
      v39->fields.groupId = v31->fields.groupId;
      Master_WarQuestSelectionMaster = (BattleMessageGroupMaster_o *)this->fields.displayedList;
      if ( Master_WarQuestSelectionMaster )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__);
        return DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
                 v39,
                 (BattleMessageGroupEntity_array *)Entities,
                 0LL);
      }
    }
LABEL_17:
    sub_B5D69C(Master_WarQuestSelectionMaster, v33);
  }
  v39 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)v38;
  return DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
           v39,
           (BattleMessageGroupEntity_array *)Entities,
           0LL);
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *__fastcall DrawLotsDisplayMessage__GetSaveData(
        DrawLotsDisplayMessage_o *this,
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
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x19
  DrawLotsDisplayMessage___c_c *v21; // x0
  struct DrawLotsDisplayMessage___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__4_0; // x20
  Il2CppObject *v24; // x21
  struct DrawLotsDisplayMessage___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_42EA9C9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo,
      v11,
      v12,
      v13);
    sub_B5D5C4(&Method_DrawLotsDisplayMessage___c__GetSaveData_b__4_0__, v14, v15, v16);
    sub_B5D5C4(&DrawLotsDisplayMessage___c_TypeInfo, v17, v18, v19);
    byte_42EA9C9 = 1;
  }
  displayedList = this->fields.displayedList;
  v21 = DrawLotsDisplayMessage___c_TypeInfo;
  if ( (BYTE3(DrawLotsDisplayMessage___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DrawLotsDisplayMessage___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DrawLotsDisplayMessage___c_TypeInfo);
    v21 = DrawLotsDisplayMessage___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = DrawLotsDisplayMessage___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__4_0,
      v24,
      Method_DrawLotsDisplayMessage___c__GetSaveData_b__4_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor__);
    v25 = DrawLotsDisplayMessage___c_TypeInfo->static_fields;
    v25->__9__4_0 = (struct System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__4_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)displayedList,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
  return System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
           v32,
           (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
}


void __fastcall DrawLotsDisplayMessage__Init(DrawLotsDisplayMessage_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x0

  if ( (byte_42EA9C7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Clear__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EA9C7 = 1;
  }
  displayedList = this->fields.displayedList;
  if ( !displayedList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)displayedList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Clear__);
}


void __fastcall DrawLotsDisplayMessage__SetSaveData(
        DrawLotsDisplayMessage_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *saves,
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
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x21

  if ( (byte_42EA9CA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor__,
      (_DWORD)saves,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BasicHelper_ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___, v9, v10, v11);
    sub_B5D5C4(&Method_DrawLotsDisplayMessage__SetSaveData_b__5_0__, v12, v13, v14);
    byte_42EA9CA = 1;
  }
  v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v15,
    (Il2CppObject *)this,
    Method_DrawLotsDisplayMessage__SetSaveData_b__5_0__,
    (const MethodInfo_258B320 *)Method_System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)saves,
    (System_Action_T__o *)v15,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
}


void __fastcall DrawLotsDisplayMessage___SetSaveData_b__5_0(
        DrawLotsDisplayMessage_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x20
  DrawLotsDisplayMessage_DisplayedInGroup_o *v10; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x0
  __int64 v12; // x1

  if ( (byte_42EA9CC & 1) == 0 )
  {
    sub_B5D5C4(&DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo, (_DWORD)sv, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__, v6, v7, v8);
    byte_42EA9CC = 1;
  }
  displayedList = this->fields.displayedList;
  v10 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_B5D694(DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo);
  DrawLotsDisplayMessage_DisplayedInGroup___ctor(v10, 0LL);
  if ( !v10
    || (v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)DrawLotsDisplayMessage_DisplayedInGroup__SetSaveData(
                                                                       v10,
                                                                       sv,
                                                                       0LL),
        !displayedList) )
  {
    sub_B5D69C(v11, v12);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)displayedList,
    v11,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__);
}


void __fastcall DrawLotsDisplayMessage_DisplayedInGroup___ctor(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_HashSet_int__o *v8; // x20

  if ( (byte_42E64C9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v5, v6, v7);
    byte_42E64C9 = 1;
  }
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  this->fields.hashMsgId = v8;
  sub_B5D560(&this->fields.hashMsgId);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        BattleMessageGroupEntity_array *entities,
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v42; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Collections_ICollection_o *v44; // x21
  __int64 v45; // x1
  System_Collections_Generic_HashSet_int__o *hashMsgId; // x0
  DrawLotsDisplayMessage_DisplayedInGroup___c_c *v47; // x0
  struct DrawLotsDisplayMessage_DisplayedInGroup___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__2_1; // x20
  Il2CppObject *v50; // x22
  struct DrawLotsDisplayMessage_DisplayedInGroup___c_StaticFields *v51; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Int32_array *v53; // x0
  __int64 v54; // x8
  int32_t v55; // w19
  __int64 v57; // x0

  if ( (byte_42E64C6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId_b__2_0__,
      (_DWORD)entities,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_BattleMessageGroupEntity__int___ctor__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_BattleMessageGroupEntity__bool___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Func_BattleMessageGroupEntity__bool__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_Func_BattleMessageGroupEntity__int__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Clear__, v33, v34, v35);
    sub_B5D5C4(&Method_DrawLotsDisplayMessage_DisplayedInGroup___c__DrawLotsMessageId_b__2_1__, v36, v37, v38);
    sub_B5D5C4(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo, v39, v40, v41);
    byte_42E64C6 = 1;
  }
  v42 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleMessageGroupEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v42,
    (Il2CppObject *)this,
    Method_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId_b__2_0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleMessageGroupEntity__bool___ctor__);
  v43 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (System_Func_TSource__bool__o *)v42,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
  v44 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                              v43,
                                              (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
  if ( BasicHelper__IsNullOrEmpty(v44, 0LL) )
  {
    hashMsgId = this->fields.hashMsgId;
    if ( !hashMsgId )
      goto LABEL_19;
    System_Collections_Generic_HashSet_int___Clear(
      hashMsgId,
      (const MethodInfo_24FFA90 *)Method_System_Collections_Generic_HashSet_int__Clear__);
    v44 = (System_Collections_ICollection_o *)entities;
  }
  v47 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
  if ( (BYTE3(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo);
    v47 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
  }
  static_fields = v47->static_fields;
  _9__2_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      static_fields = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
    }
    v50 = (Il2CppObject *)static_fields->__9;
    _9__2_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleMessageGroupEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__2_1,
      v50,
      Method_DrawLotsDisplayMessage_DisplayedInGroup___c__DrawLotsMessageId_b__2_1__,
      (const MethodInfo_2C2F87C *)Method_System_Func_BattleMessageGroupEntity__int___ctor__);
    v51 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
    v51->__9__2_1 = (struct System_Func_BattleMessageGroupEntity__int__o *)_9__2_1;
    sub_B5D560(&v51->__9__2_1);
  }
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v44,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__int___);
  v53 = System_Linq_Enumerable__ToArray_int_(
          v52,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  hashMsgId = (System_Collections_Generic_HashSet_int__o *)RandomUtility__GetRandomRangeIndex(v53, 0, 0LL);
  if ( !v44 )
    goto LABEL_19;
  if ( (unsigned int)hashMsgId >= LODWORD(v44[1].monitor) )
  {
    v57 = sub_B5D6C8(hashMsgId);
    sub_B5D668(v57, 0LL);
  }
  v54 = *((_QWORD *)&v44[2].klass + (int)hashMsgId);
  if ( !v54 || (hashMsgId = this->fields.hashMsgId) == 0LL )
LABEL_19:
    sub_B5D69C(hashMsgId, v45);
  v55 = *(_DWORD *)(v54 + 20);
  System_Collections_Generic_HashSet_int___Add(
    hashMsgId,
    v55,
    (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
  return v55;
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *__fastcall DrawLotsDisplayMessage_DisplayedInGroup__GetSaveData(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_42E64C7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DrawLotsDisplayMessage_DisplayedInGroup_SaveData_TypeInfo, v5, v6, v7);
    byte_42E64C7 = 1;
  }
  v8 = (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *)sub_B5D694(DrawLotsDisplayMessage_DisplayedInGroup_SaveData_TypeInfo);
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor(v8, 0LL);
  if ( !v8 )
    sub_B5D69C(v9, v10);
  v8->fields.groupId = this->fields.groupId;
  v8->fields.msgIds = System_Linq_Enumerable__ToArray_int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashMsgId,
                        (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  sub_B5D560(&v8->fields.msgIds);
  return v8;
}


DrawLotsDisplayMessage_DisplayedInGroup_o *__fastcall DrawLotsDisplayMessage_DisplayedInGroup__SetSaveData(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_IEnumerable_T__o *msgIds; // x20
  System_Collections_Generic_HashSet_int__o *v10; // x21

  if ( (byte_42E64C8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716240, (_DWORD)sv, (_DWORD)method, v3);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v6, v7, v8);
    byte_42E64C8 = 1;
  }
  if ( sv )
  {
    this->fields.groupId = sv->fields.groupId;
    msgIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.msgIds;
    v10 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor_38794568(
      v10,
      msgIds,
      (const MethodInfo_24FF548 *)Method_System_Collections_Generic_HashSet_int___ctor___68716240);
    this->fields.hashMsgId = v10;
    sub_B5D560(&this->fields.hashMsgId);
  }
  return this;
}


bool __fastcall DrawLotsDisplayMessage_DisplayedInGroup___DrawLotsMessageId_b__2_0(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        BattleMessageGroupEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  DrawLotsDisplayMessage_DisplayedInGroup_o *v5; // x20

  v5 = this;
  if ( (byte_42E64CA & 1) == 0 )
  {
    this = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_B5D5C4(
                                                          &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                          (_DWORD)ent,
                                                          (_DWORD)method,
                                                          v3);
    byte_42E64CA = 1;
  }
  if ( !ent || (this = (DrawLotsDisplayMessage_DisplayedInGroup_o *)v5->fields.hashMsgId) == 0LL )
    sub_B5D69C(this, ent);
  return !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)this,
            ent->fields.messageId,
            (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor(
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DrawLotsDisplayMessage_DisplayedInGroup___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct DrawLotsDisplayMessage_DisplayedInGroup___c_StaticFields *static_fields; // x0

  if ( (byte_42E6034 & 1) == 0 )
  {
    sub_B5D5C4(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo, v1, v2, v3);
    byte_42E6034 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
  static_fields->__9 = (struct DrawLotsDisplayMessage_DisplayedInGroup___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return ent->fields.probability;
}


void __fastcall DrawLotsDisplayMessage___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct DrawLotsDisplayMessage___c_StaticFields *static_fields; // x0

  if ( (byte_42E64C5 & 1) == 0 )
  {
    sub_B5D5C4(&DrawLotsDisplayMessage___c_TypeInfo, v1, v2, v3);
    byte_42E64C5 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(DrawLotsDisplayMessage___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = DrawLotsDisplayMessage___c_TypeInfo->static_fields;
  static_fields->__9 = (struct DrawLotsDisplayMessage___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return data->fields.groupId == this->fields.groupId;
}