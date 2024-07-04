void __fastcall UserEventQuestCooltimeMaster___ctor(UserEventQuestCooltimeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E340C & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string___ctor__,
      method);
    byte_48E340C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    316,
    (const MethodInfo_2FE6D64 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string___ctor__);
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
  Il2CppObject *PK; // x1

  if ( (byte_48E340A & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__GetEntity__,
      userId);
    byte_48E340A = 1;
  }
  PK = (Il2CppObject *)UserEventQuestCooltimeEntity__CreatePK(
                         userId,
                         eventId,
                         questId,
                         phase,
                         *(const MethodInfo **)&phase);
  return (UserEventQuestCooltimeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_2FE6DA4 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__GetEntity__);
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
  __int64 v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventQuestCooltimeMaster___c_c *v16; // x0
  System_Func_object__object__o *_9__5_0; // x21
  Il2CppObject *v18; // x22
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  System_Func_object__bool__o *v23; // x21

  if ( (byte_48E340F & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___, *(_QWORD *)&spotId);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___, v5);
    sub_1B00CCC(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v6);
    sub_1B00CCC(&System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo, v7);
    sub_1B00CCC(&Method_UserEventQuestCooltimeMaster___c__GetEntityFromSpotId_b__5_0__, v8);
    sub_1B00CCC(&Method_UserEventQuestCooltimeMaster___c__DisplayClass5_0__GetEntityFromSpotId_b__1__, v9);
    sub_1B00CCC(&UserEventQuestCooltimeMaster___c__DisplayClass5_0_TypeInfo, v10);
    sub_1B00CCC(&UserEventQuestCooltimeMaster___c_TypeInfo, v11);
    byte_48E340F = 1;
  }
  v12 = sub_1B00F18(UserEventQuestCooltimeMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1B00F28(v13, v14);
  *(_DWORD *)(v12 + 16) = spotId;
  list = this->fields.list;
  v16 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v16 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__object__o *)v16->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = UserEventQuestCooltimeMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__5_0 = (System_Func_object__object__o *)sub_1B00F18(System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__5_0,
      v18,
      Method_UserEventQuestCooltimeMaster___c__GetEntityFromSpotId_b__5_0__,
      0LL);
    static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__5_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_2D8FA10 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  v23 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v12,
    Method_UserEventQuestCooltimeMaster___c__DisplayClass5_0__GetEntityFromSpotId_b__1__,
    0LL);
  return (UserEventQuestCooltimeEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__47729964(
                                             v22,
                                             (System_Func_TSource__bool__o *)v23,
                                             (const MethodInfo_2D84D2C *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
}


System_Collections_Generic_List_UserEventQuestCooltimeEntity__o *__fastcall UserEventQuestCooltimeMaster__GetEntityList(
        UserEventQuestCooltimeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserEventQuestCooltimeMaster___c_c *v7; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__object__o *_9__4_0; // x20
  Il2CppObject *v10; // x21
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_48E340E & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___, method);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToList_UserEventQuestCooltimeEntity___, v3);
    sub_1B00CCC(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v4);
    sub_1B00CCC(&Method_UserEventQuestCooltimeMaster___c__GetEntityList_b__4_0__, v5);
    sub_1B00CCC(&UserEventQuestCooltimeMaster___c_TypeInfo, v6);
    byte_48E340E = 1;
  }
  v7 = UserEventQuestCooltimeMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v7 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__object__o *)v7->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = UserEventQuestCooltimeMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__4_0 = (System_Func_object__object__o *)sub_1B00F18(System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__4_0,
      v10,
      Method_UserEventQuestCooltimeMaster___c__GetEntityList_b__4_0__,
      0LL);
    static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__4_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_2D8FA10 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  return (System_Collections_Generic_List_UserEventQuestCooltimeEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                              v14,
                                                                              (const MethodInfo_2D9AFD4 *)Method_System_Linq_Enumerable_ToList_UserEventQuestCooltimeEntity___);
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
  Il2CppObject *PK; // x2

  if ( (byte_48E340B & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__TryGetEntity__,
      entity);
    byte_48E340B = 1;
  }
  PK = (Il2CppObject *)UserEventQuestCooltimeEntity__CreatePK(
                         userId,
                         eventId,
                         questId,
                         phase,
                         *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_2FE6DF4 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__TryGetEntity__);
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
  __int64 v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventQuestCooltimeMaster___c_c *v20; // x0
  System_Func_object__object__o *_9__3_0; // x21
  Il2CppObject *v22; // x22
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x20
  System_Func_object__bool__o *v27; // x21

  if ( (byte_48E340D & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___, *(_QWORD *)&eventId);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___, v9);
    sub_1B00CCC(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v10);
    sub_1B00CCC(&System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo, v11);
    sub_1B00CCC(&Method_UserEventQuestCooltimeMaster___c__getEntity_b__3_0__, v12);
    sub_1B00CCC(&Method_UserEventQuestCooltimeMaster___c__DisplayClass3_0__getEntity_b__1__, v13);
    sub_1B00CCC(&UserEventQuestCooltimeMaster___c__DisplayClass3_0_TypeInfo, v14);
    sub_1B00CCC(&UserEventQuestCooltimeMaster___c_TypeInfo, v15);
    byte_48E340D = 1;
  }
  v16 = sub_1B00F18(UserEventQuestCooltimeMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    sub_1B00F28(v17, v18);
  *(_DWORD *)(v16 + 16) = eventId;
  *(_DWORD *)(v16 + 20) = questId;
  *(_DWORD *)(v16 + 24) = phase;
  list = this->fields.list;
  v20 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v20 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v20->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = UserEventQuestCooltimeMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1B00F18(System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v22, Method_UserEventQuestCooltimeMaster___c__getEntity_b__3_0__, 0LL);
    static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__3_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2D8FA10 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  v27 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v27,
    (Il2CppObject *)v16,
    Method_UserEventQuestCooltimeMaster___c__DisplayClass3_0__getEntity_b__1__,
    0LL);
  return (UserEventQuestCooltimeEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__47729964(
                                             v26,
                                             (System_Func_TSource__bool__o *)v27,
                                             (const MethodInfo_2D84D2C *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
}


void __fastcall UserEventQuestCooltimeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E3410 & 1) == 0 )
  {
    sub_1B00CCC(&UserEventQuestCooltimeMaster___c_TypeInfo, v1);
    byte_48E3410 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(UserEventQuestCooltimeMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserEventQuestCooltimeMaster___c_TypeInfo->static_fields->__9 = (struct UserEventQuestCooltimeMaster___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)UserEventQuestCooltimeMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  __int64 methodPtr_low; // x10

  if ( (byte_48E3413 & 1) == 0 )
  {
    sub_1B00CCC(&UserEventQuestCooltimeEntity_TypeInfo, data);
    byte_48E3413 = 1;
  }
  if ( !data )
    return 0LL;
  methodPtr_low = LOBYTE(UserEventQuestCooltimeEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserEventQuestCooltimeEntity_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventQuestCooltimeEntity_TypeInfo )
    return (UserEventQuestCooltimeEntity_o *)data;
  return 0LL;
}


UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster___c___GetEntityList_b__4_0(
        UserEventQuestCooltimeMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_48E3412 & 1) == 0 )
  {
    sub_1B00CCC(&UserEventQuestCooltimeEntity_TypeInfo, data);
    byte_48E3412 = 1;
  }
  if ( !data )
    return 0LL;
  methodPtr_low = LOBYTE(UserEventQuestCooltimeEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserEventQuestCooltimeEntity_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventQuestCooltimeEntity_TypeInfo )
    return (UserEventQuestCooltimeEntity_o *)data;
  return 0LL;
}


UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster___c___getEntity_b__3_0(
        UserEventQuestCooltimeMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_48E3411 & 1) == 0 )
  {
    sub_1B00CCC(&UserEventQuestCooltimeEntity_TypeInfo, data);
    byte_48E3411 = 1;
  }
  if ( !data )
    return 0LL;
  methodPtr_low = LOBYTE(UserEventQuestCooltimeEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserEventQuestCooltimeEntity_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventQuestCooltimeEntity_TypeInfo )
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
    sub_1B00F28(this, 0LL);
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
                                                                         (const MethodInfo *)entity)) == 0LL) )
  {
    sub_1B00F28(this, entity);
  }
  return LODWORD(this[2].klass) == v3->fields.spotId;
}