void __fastcall UserEventQuestCooltimeMaster___ctor(UserEventQuestCooltimeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188B96 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string___ctor__,
      method);
    byte_4188B96 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    315,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string___ctor__);
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

  if ( (byte_4188B94 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__GetEntity__,
      userId);
    byte_4188B94 = 1;
  }
  PK = UserEventQuestCooltimeEntity__CreatePK(userId, eventId, questId, phase, *(const MethodInfo **)&phase);
  return (UserEventQuestCooltimeEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_24E4520 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster__GetEntityFromSpotId(
        UserEventQuestCooltimeMaster_o *this,
        int32_t spotId,
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
  UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventQuestCooltimeMaster___c_c *v18; // x0
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_0; // x21
  Il2CppObject *v21; // x22
  struct UserEventQuestCooltimeMaster___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v30; // x21

  if ( (byte_4188B99 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___, *(_QWORD *)&spotId);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___, v5);
    sub_B2C35C(&Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__, v6);
    sub_B2C35C(&Method_System_Func_UserEventQuestCooltimeEntity__bool___ctor__, v7);
    sub_B2C35C(&System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo, v8);
    sub_B2C35C(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v9);
    sub_B2C35C(&Method_UserEventQuestCooltimeMaster___c__GetEntityFromSpotId_b__5_0__, v10);
    sub_B2C35C(&Method_UserEventQuestCooltimeMaster___c__DisplayClass5_0__GetEntityFromSpotId_b__1__, v11);
    sub_B2C35C(&UserEventQuestCooltimeMaster___c__DisplayClass5_0_TypeInfo, v12);
    sub_B2C35C(&UserEventQuestCooltimeMaster___c_TypeInfo, v13);
    byte_4188B99 = 1;
  }
  v14 = (UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *)sub_B2C42C(UserEventQuestCooltimeMaster___c__DisplayClass5_0_TypeInfo);
  UserEventQuestCooltimeMaster___c__DisplayClass5_0___ctor(v14, 0LL);
  if ( !v14 )
    sub_B2C434(v15, v16);
  v14->fields.spotId = spotId;
  list = this->fields.list;
  v18 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( (BYTE3(UserEventQuestCooltimeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v18 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__5_0,
      v21,
      Method_UserEventQuestCooltimeMaster___c__GetEntityFromSpotId_b__5_0__,
      (const MethodInfo_2713350 *)Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__);
    v22 = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    v22->__9__5_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__5_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v22->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v30,
    (Il2CppObject *)v14,
    Method_UserEventQuestCooltimeMaster___c__DisplayClass5_0__GetEntityFromSpotId_b__1__,
    (const MethodInfo_2711C04 *)Method_System_Func_UserEventQuestCooltimeEntity__bool___ctor__);
  return (UserEventQuestCooltimeEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                             v29,
                                             (System_Func_TSource__bool__o *)v30,
                                             (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
}


System_Collections_Generic_List_UserEventQuestCooltimeEntity__o *__fastcall UserEventQuestCooltimeMaster__GetEntityList(
        UserEventQuestCooltimeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  UserEventQuestCooltimeMaster___c_c *v9; // x0
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__4_0; // x20
  Il2CppObject *v12; // x21
  struct UserEventQuestCooltimeMaster___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_4188B98 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_UserEventQuestCooltimeEntity___, v3);
    sub_B2C35C(&Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__, v4);
    sub_B2C35C(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v5);
    sub_B2C35C(&Method_UserEventQuestCooltimeMaster___c__GetEntityList_b__4_0__, v6);
    sub_B2C35C(&UserEventQuestCooltimeMaster___c_TypeInfo, v7);
    byte_4188B98 = 1;
  }
  list = this->fields.list;
  v9 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( (BYTE3(UserEventQuestCooltimeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v9 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__4_0,
      v12,
      Method_UserEventQuestCooltimeMaster___c__GetEntityList_b__4_0__,
      (const MethodInfo_2713350 *)Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__);
    v13 = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    v13->__9__4_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__4_0;
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
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  return (System_Collections_Generic_List_UserEventQuestCooltimeEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                              v20,
                                                                              (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_UserEventQuestCooltimeEntity___);
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

  if ( (byte_4188B95 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__TryGetEntity__,
      entity);
    byte_4188B95 = 1;
  }
  PK = UserEventQuestCooltimeEntity__CreatePK(userId, eventId, questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster__getEntity(
        UserEventQuestCooltimeMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UserEventQuestCooltimeMaster___c__DisplayClass3_0_o *v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventQuestCooltimeMaster___c_c *v22; // x0
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x21
  Il2CppObject *v25; // x22
  struct UserEventQuestCooltimeMaster___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v34; // x21

  if ( (byte_4188B97 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___, v9);
    sub_B2C35C(&Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__, v10);
    sub_B2C35C(&Method_System_Func_UserEventQuestCooltimeEntity__bool___ctor__, v11);
    sub_B2C35C(&System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo, v12);
    sub_B2C35C(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v13);
    sub_B2C35C(&Method_UserEventQuestCooltimeMaster___c__getEntity_b__3_0__, v14);
    sub_B2C35C(&Method_UserEventQuestCooltimeMaster___c__DisplayClass3_0__getEntity_b__1__, v15);
    sub_B2C35C(&UserEventQuestCooltimeMaster___c__DisplayClass3_0_TypeInfo, v16);
    sub_B2C35C(&UserEventQuestCooltimeMaster___c_TypeInfo, v17);
    byte_4188B97 = 1;
  }
  v18 = (UserEventQuestCooltimeMaster___c__DisplayClass3_0_o *)sub_B2C42C(UserEventQuestCooltimeMaster___c__DisplayClass3_0_TypeInfo);
  UserEventQuestCooltimeMaster___c__DisplayClass3_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B2C434(v19, v20);
  v18->fields.eventId = eventId;
  v18->fields.questId = questId;
  v18->fields.phase = phase;
  list = this->fields.list;
  v22 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( (BYTE3(UserEventQuestCooltimeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v22 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v25,
      Method_UserEventQuestCooltimeMaster___c__getEntity_b__3_0__,
      (const MethodInfo_2713350 *)Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__);
    v26 = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    v26->__9__3_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v26->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  v34 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v34,
    (Il2CppObject *)v18,
    Method_UserEventQuestCooltimeMaster___c__DisplayClass3_0__getEntity_b__1__,
    (const MethodInfo_2711C04 *)Method_System_Func_UserEventQuestCooltimeEntity__bool___ctor__);
  return (UserEventQuestCooltimeEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                             v33,
                                             (System_Func_TSource__bool__o *)v34,
                                             (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
}


void __fastcall UserEventQuestCooltimeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41856A2 & 1) == 0 )
  {
    sub_B2C35C(&UserEventQuestCooltimeMaster___c_TypeInfo, v1);
    byte_41856A2 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(UserEventQuestCooltimeMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserEventQuestCooltimeMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v4; // x10

  if ( (byte_41856A5 & 1) == 0 )
  {
    sub_B2C35C(&UserEventQuestCooltimeEntity_TypeInfo, data);
    byte_41856A5 = 1;
  }
  if ( !data )
    return 0LL;
  v4 = *(&UserEventQuestCooltimeEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (UserEventQuestCooltimeEntity_c *)data->klass->_2.typeHierarchy[v4 - 1] == UserEventQuestCooltimeEntity_TypeInfo )
    return (UserEventQuestCooltimeEntity_o *)data;
  return 0LL;
}


UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster___c___GetEntityList_b__4_0(
        UserEventQuestCooltimeMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_41856A4 & 1) == 0 )
  {
    sub_B2C35C(&UserEventQuestCooltimeEntity_TypeInfo, data);
    byte_41856A4 = 1;
  }
  if ( !data )
    return 0LL;
  v4 = *(&UserEventQuestCooltimeEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (UserEventQuestCooltimeEntity_c *)data->klass->_2.typeHierarchy[v4 - 1] == UserEventQuestCooltimeEntity_TypeInfo )
    return (UserEventQuestCooltimeEntity_o *)data;
  return 0LL;
}


UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster___c___getEntity_b__3_0(
        UserEventQuestCooltimeMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_41856A3 & 1) == 0 )
  {
    sub_B2C35C(&UserEventQuestCooltimeEntity_TypeInfo, data);
    byte_41856A3 = 1;
  }
  if ( !data )
    return 0LL;
  v4 = *(&UserEventQuestCooltimeEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (UserEventQuestCooltimeEntity_c *)data->klass->_2.typeHierarchy[v4 - 1] == UserEventQuestCooltimeEntity_TypeInfo )
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, entity);
  }
  return LODWORD(this[2].klass) == v3->fields.spotId;
}