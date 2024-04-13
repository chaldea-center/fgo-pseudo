void __fastcall UserEventQuestCooltimeMaster___ctor(UserEventQuestCooltimeMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E70B2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E70B2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    316,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster__GetEntity(
        UserEventQuestCooltimeMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E70B0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__GetEntity__,
      userId,
      eventId,
      *(_QWORD *)&questId);
    byte_42E70B0 = 1;
  }
  PK = UserEventQuestCooltimeEntity__CreatePK(userId, eventId, questId, phase, *(const MethodInfo **)&phase);
  return (UserEventQuestCooltimeEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_23FB260 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__GetEntity__);
}


UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster__GetEntityFromSpotId(
        UserEventQuestCooltimeMaster_o *this,
        int32_t spotId,
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
  UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *v33; // x19
  __int64 v34; // x0
  __int64 v35; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventQuestCooltimeMaster___c_c *v37; // x0
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_0; // x21
  Il2CppObject *v40; // x22
  struct UserEventQuestCooltimeMaster___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v49; // x21

  if ( (byte_42E70B5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___,
      spotId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_UserEventQuestCooltimeEntity__bool___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_UserEventQuestCooltimeMaster___c__GetEntityFromSpotId_b__5_0__, v21, v22, v23);
    sub_B5D5C4(&Method_UserEventQuestCooltimeMaster___c__DisplayClass5_0__GetEntityFromSpotId_b__1__, v24, v25, v26);
    sub_B5D5C4(&UserEventQuestCooltimeMaster___c__DisplayClass5_0_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&UserEventQuestCooltimeMaster___c_TypeInfo, v30, v31, v32);
    byte_42E70B5 = 1;
  }
  v33 = (UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *)sub_B5D694(UserEventQuestCooltimeMaster___c__DisplayClass5_0_TypeInfo);
  UserEventQuestCooltimeMaster___c__DisplayClass5_0___ctor(v33, 0LL);
  if ( !v33 )
    sub_B5D69C(v34, v35);
  v33->fields.spotId = spotId;
  list = this->fields.list;
  v37 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( (BYTE3(UserEventQuestCooltimeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v37 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  static_fields = v37->static_fields;
  _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__5_0,
      v40,
      Method_UserEventQuestCooltimeMaster___c__GetEntityFromSpotId_b__5_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__);
    v41 = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    v41->__9__5_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__5_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v41->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  v49 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v49,
    (Il2CppObject *)v33,
    Method_UserEventQuestCooltimeMaster___c__DisplayClass5_0__GetEntityFromSpotId_b__1__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_UserEventQuestCooltimeEntity__bool___ctor__);
  return (UserEventQuestCooltimeEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                             v48,
                                             (System_Func_TSource__bool__o *)v49,
                                             (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
}


System_Collections_Generic_List_UserEventQuestCooltimeEntity__o *__fastcall UserEventQuestCooltimeMaster__GetEntityList(
        UserEventQuestCooltimeMaster_o *this,
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
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  UserEventQuestCooltimeMaster___c_c *v21; // x0
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__4_0; // x20
  Il2CppObject *v24; // x21
  struct UserEventQuestCooltimeMaster___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_42E70B4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_UserEventQuestCooltimeEntity___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UserEventQuestCooltimeMaster___c__GetEntityList_b__4_0__, v14, v15, v16);
    sub_B5D5C4(&UserEventQuestCooltimeMaster___c_TypeInfo, v17, v18, v19);
    byte_42E70B4 = 1;
  }
  list = this->fields.list;
  v21 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( (BYTE3(UserEventQuestCooltimeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v21 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__4_0,
      v24,
      Method_UserEventQuestCooltimeMaster___c__GetEntityList_b__4_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__);
    v25 = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    v25->__9__4_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__4_0;
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
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  return (System_Collections_Generic_List_UserEventQuestCooltimeEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                              v32,
                                                                              (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_UserEventQuestCooltimeEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventQuestCooltimeMaster__TryGetEntity(
        UserEventQuestCooltimeMaster_o *this,
        UserEventQuestCooltimeEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E70B1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&eventId);
    byte_42E70B1 = 1;
  }
  PK = UserEventQuestCooltimeEntity__CreatePK(userId, eventId, questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster__getEntity(
        UserEventQuestCooltimeMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
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
  UserEventQuestCooltimeMaster___c__DisplayClass3_0_o *v36; // x19
  __int64 v37; // x0
  __int64 v38; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventQuestCooltimeMaster___c_c *v40; // x0
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x21
  Il2CppObject *v43; // x22
  struct UserEventQuestCooltimeMaster___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v52; // x21

  if ( (byte_42E70B3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___,
      eventId,
      questId,
      *(_QWORD *)&phase);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_UserEventQuestCooltimeEntity__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_UserEventQuestCooltimeMaster___c__getEntity_b__3_0__, v24, v25, v26);
    sub_B5D5C4(&Method_UserEventQuestCooltimeMaster___c__DisplayClass3_0__getEntity_b__1__, v27, v28, v29);
    sub_B5D5C4(&UserEventQuestCooltimeMaster___c__DisplayClass3_0_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&UserEventQuestCooltimeMaster___c_TypeInfo, v33, v34, v35);
    byte_42E70B3 = 1;
  }
  v36 = (UserEventQuestCooltimeMaster___c__DisplayClass3_0_o *)sub_B5D694(UserEventQuestCooltimeMaster___c__DisplayClass3_0_TypeInfo);
  UserEventQuestCooltimeMaster___c__DisplayClass3_0___ctor(v36, 0LL);
  if ( !v36 )
    sub_B5D69C(v37, v38);
  v36->fields.eventId = eventId;
  v36->fields.questId = questId;
  v36->fields.phase = phase;
  list = this->fields.list;
  v40 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( (BYTE3(UserEventQuestCooltimeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v40 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  static_fields = v40->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v43,
      Method_UserEventQuestCooltimeMaster___c__getEntity_b__3_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__);
    v44 = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    v44->__9__3_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v44->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  v52 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v52,
    (Il2CppObject *)v36,
    Method_UserEventQuestCooltimeMaster___c__DisplayClass3_0__getEntity_b__1__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_UserEventQuestCooltimeEntity__bool___ctor__);
  return (UserEventQuestCooltimeEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                             v51,
                                             (System_Func_TSource__bool__o *)v52,
                                             (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
}


void __fastcall UserEventQuestCooltimeMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E6FF4 & 1) == 0 )
  {
    sub_B5D5C4(&UserEventQuestCooltimeMaster___c_TypeInfo, v1, v2, v3);
    byte_42E6FF4 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(UserEventQuestCooltimeMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall UserEventQuestCooltimeMaster___c___ctor(
        UserEventQuestCooltimeMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster___c___GetEntityFromSpotId_b__5_0(
        UserEventQuestCooltimeMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x10

  if ( (byte_42E6FF7 & 1) == 0 )
  {
    sub_B5D5C4(&UserEventQuestCooltimeEntity_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    byte_42E6FF7 = 1;
  }
  if ( !data )
    return 0LL;
  v5 = *(&UserEventQuestCooltimeEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (UserEventQuestCooltimeEntity_c *)data->klass->_2.typeHierarchy[v5 - 1] == UserEventQuestCooltimeEntity_TypeInfo )
    return (UserEventQuestCooltimeEntity_o *)data;
  return 0LL;
}


UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster___c___GetEntityList_b__4_0(
        UserEventQuestCooltimeMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x10

  if ( (byte_42E6FF6 & 1) == 0 )
  {
    sub_B5D5C4(&UserEventQuestCooltimeEntity_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    byte_42E6FF6 = 1;
  }
  if ( !data )
    return 0LL;
  v5 = *(&UserEventQuestCooltimeEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (UserEventQuestCooltimeEntity_c *)data->klass->_2.typeHierarchy[v5 - 1] == UserEventQuestCooltimeEntity_TypeInfo )
    return (UserEventQuestCooltimeEntity_o *)data;
  return 0LL;
}


UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster___c___getEntity_b__3_0(
        UserEventQuestCooltimeMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x10

  if ( (byte_42E6FF5 & 1) == 0 )
  {
    sub_B5D5C4(&UserEventQuestCooltimeEntity_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    byte_42E6FF5 = 1;
  }
  if ( !data )
    return 0LL;
  v5 = *(&UserEventQuestCooltimeEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (UserEventQuestCooltimeEntity_c *)data->klass->_2.typeHierarchy[v5 - 1] == UserEventQuestCooltimeEntity_TypeInfo )
    return (UserEventQuestCooltimeEntity_o *)data;
  return 0LL;
}


void __fastcall UserEventQuestCooltimeMaster___c__DisplayClass3_0___ctor(
        UserEventQuestCooltimeMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserEventQuestCooltimeMaster___c__DisplayClass3_0___getEntity_b__1(
        UserEventQuestCooltimeMaster___c__DisplayClass3_0_o *this,
        UserEventQuestCooltimeEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B5D69C(this, 0LL);
  return entity->fields.eventId == this->fields.eventId
      && entity->fields.questId == this->fields.questId
      && entity->fields.phase == this->fields.phase;
}


void __fastcall UserEventQuestCooltimeMaster___c__DisplayClass5_0___ctor(
        UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserEventQuestCooltimeMaster___c__DisplayClass5_0___GetEntityFromSpotId_b__1(
        UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *this,
        UserEventQuestCooltimeEntity_o *entity,
        const MethodInfo *method)
{
  UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *v3; // x19

  if ( !entity
    || (v3 = this,
        (this = (UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *)UserEventQuestCooltimeEntity__GetQuestEntity(
                                                                         entity,
                                                                         0LL)) == 0LL) )
  {
    sub_B5D69C(this, entity);
  }
  return LODWORD(this[2].klass) == v3->fields.spotId;
}