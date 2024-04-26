void __fastcall UserEventQuestCooltimeMaster___ctor(UserEventQuestCooltimeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4350678 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string___ctor__);
    byte_4350678 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    316,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string___ctor__);
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

  if ( (byte_4350676 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__GetEntity__);
    byte_4350676 = 1;
  }
  PK = UserEventQuestCooltimeEntity__CreatePK(userId, eventId, questId, phase, *(const MethodInfo **)&phase);
  return (UserEventQuestCooltimeEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_21C0890 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__GetEntity__);
}


UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster__GetEntityFromSpotId(
        UserEventQuestCooltimeMaster_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventQuestCooltimeMaster___c_c *v9; // x0
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_0; // x21
  Il2CppObject *v12; // x22
  struct UserEventQuestCooltimeMaster___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x21

  if ( (byte_435067B & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
    sub_B70694(&Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__);
    sub_B70694(&Method_System_Func_UserEventQuestCooltimeEntity__bool___ctor__);
    sub_B70694(&System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo);
    sub_B70694(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo);
    sub_B70694(&Method_UserEventQuestCooltimeMaster___c__GetEntityFromSpotId_b__5_0__);
    sub_B70694(&Method_UserEventQuestCooltimeMaster___c__DisplayClass5_0__GetEntityFromSpotId_b__1__);
    sub_B70694(&UserEventQuestCooltimeMaster___c__DisplayClass5_0_TypeInfo);
    sub_B70694(&UserEventQuestCooltimeMaster___c_TypeInfo);
    byte_435067B = 1;
  }
  v5 = (UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *)sub_B70764(UserEventQuestCooltimeMaster___c__DisplayClass5_0_TypeInfo);
  UserEventQuestCooltimeMaster___c__DisplayClass5_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  v5->fields.spotId = spotId;
  list = this->fields.list;
  v9 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( (BYTE3(UserEventQuestCooltimeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v9 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__5_0,
      v12,
      Method_UserEventQuestCooltimeMaster___c__GetEntityFromSpotId_b__5_0__,
      (const MethodInfo_29ADCC4 *)Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__);
    v13 = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    v13->__9__5_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__5_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v13->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_1CC4218 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v5,
    Method_UserEventQuestCooltimeMaster___c__DisplayClass5_0__GetEntityFromSpotId_b__1__,
    (const MethodInfo_29AC578 *)Method_System_Func_UserEventQuestCooltimeEntity__bool___ctor__);
  return (UserEventQuestCooltimeEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                             v20,
                                             (System_Func_TSource__bool__o *)v21,
                                             (const MethodInfo_1CBD194 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
}


System_Collections_Generic_List_UserEventQuestCooltimeEntity__o *__fastcall UserEventQuestCooltimeMaster__GetEntityList(
        UserEventQuestCooltimeMaster_o *this,
        const MethodInfo *method)
{
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  UserEventQuestCooltimeMaster___c_c *v4; // x0
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__4_0; // x20
  Il2CppObject *v7; // x21
  struct UserEventQuestCooltimeMaster___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_435067A & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_UserEventQuestCooltimeEntity___);
    sub_B70694(&Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__);
    sub_B70694(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo);
    sub_B70694(&Method_UserEventQuestCooltimeMaster___c__GetEntityList_b__4_0__);
    sub_B70694(&UserEventQuestCooltimeMaster___c_TypeInfo);
    byte_435067A = 1;
  }
  list = this->fields.list;
  v4 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( (BYTE3(UserEventQuestCooltimeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v4 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__4_0,
      v7,
      Method_UserEventQuestCooltimeMaster___c__GetEntityList_b__4_0__,
      (const MethodInfo_29ADCC4 *)Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__);
    v8 = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    v8->__9__4_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__4_0;
    sub_B70630(
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
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_1CC4218 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  return (System_Collections_Generic_List_UserEventQuestCooltimeEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                              v15,
                                                                              (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_UserEventQuestCooltimeEntity___);
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

  if ( (byte_4350677 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__TryGetEntity__);
    byte_4350677 = 1;
  }
  PK = UserEventQuestCooltimeEntity__CreatePK(userId, eventId, questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__TryGetEntity__);
}


UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster__getEntity(
        UserEventQuestCooltimeMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  UserEventQuestCooltimeMaster___c__DisplayClass3_0_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventQuestCooltimeMaster___c_c *v13; // x0
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x21
  Il2CppObject *v16; // x22
  struct UserEventQuestCooltimeMaster___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x21

  if ( (byte_4350679 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
    sub_B70694(&Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__);
    sub_B70694(&Method_System_Func_UserEventQuestCooltimeEntity__bool___ctor__);
    sub_B70694(&System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo);
    sub_B70694(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo);
    sub_B70694(&Method_UserEventQuestCooltimeMaster___c__getEntity_b__3_0__);
    sub_B70694(&Method_UserEventQuestCooltimeMaster___c__DisplayClass3_0__getEntity_b__1__);
    sub_B70694(&UserEventQuestCooltimeMaster___c__DisplayClass3_0_TypeInfo);
    sub_B70694(&UserEventQuestCooltimeMaster___c_TypeInfo);
    byte_4350679 = 1;
  }
  v9 = (UserEventQuestCooltimeMaster___c__DisplayClass3_0_o *)sub_B70764(UserEventQuestCooltimeMaster___c__DisplayClass3_0_TypeInfo);
  UserEventQuestCooltimeMaster___c__DisplayClass3_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B7076C(v10, v11);
  v9->fields.eventId = eventId;
  v9->fields.questId = questId;
  v9->fields.phase = phase;
  list = this->fields.list;
  v13 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( (BYTE3(UserEventQuestCooltimeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v13 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v16,
      Method_UserEventQuestCooltimeMaster___c__getEntity_b__3_0__,
      (const MethodInfo_29ADCC4 *)Method_System_Func_DataEntityBase__UserEventQuestCooltimeEntity___ctor__);
    v17 = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    v17->__9__3_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__3_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v17->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1CC4218 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v25,
    (Il2CppObject *)v9,
    Method_UserEventQuestCooltimeMaster___c__DisplayClass3_0__getEntity_b__1__,
    (const MethodInfo_29AC578 *)Method_System_Func_UserEventQuestCooltimeEntity__bool___ctor__);
  return (UserEventQuestCooltimeEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                             v24,
                                             (System_Func_TSource__bool__o *)v25,
                                             (const MethodInfo_1CBD194 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
}


void __fastcall UserEventQuestCooltimeMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x0

  if ( (byte_434F302 & 1) == 0 )
  {
    sub_B70694(&UserEventQuestCooltimeMaster___c_TypeInfo);
    byte_434F302 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(UserEventQuestCooltimeMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserEventQuestCooltimeMaster___c_o *)v1;
  sub_B70630(static_fields);
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

  if ( (byte_434F305 & 1) == 0 )
  {
    sub_B70694(&UserEventQuestCooltimeEntity_TypeInfo);
    byte_434F305 = 1;
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

  if ( (byte_434F304 & 1) == 0 )
  {
    sub_B70694(&UserEventQuestCooltimeEntity_TypeInfo);
    byte_434F304 = 1;
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

  if ( (byte_434F303 & 1) == 0 )
  {
    sub_B70694(&UserEventQuestCooltimeEntity_TypeInfo);
    byte_434F303 = 1;
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
    sub_B7076C(this, 0LL);
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
    sub_B7076C(this, entity);
  }
  return LODWORD(this[2].klass) == v3->fields.spotId;
}