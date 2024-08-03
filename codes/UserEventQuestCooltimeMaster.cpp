void __fastcall UserEventQuestCooltimeMaster___ctor(UserEventQuestCooltimeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD077 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string___ctor__,
      method);
    byte_49FD077 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    317,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string___ctor__);
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

  if ( (byte_49FD075 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__GetEntity__,
      userId);
    byte_49FD075 = 1;
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
                                             (const MethodInfo_30D41FC *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__GetEntity__);
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
  __int64 v15; // x2
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventQuestCooltimeMaster___c_c *v17; // x0
  System_Func_object__object__o *_9__5_0; // x21
  Il2CppObject *v19; // x22
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  System_Func_object__bool__o *v26; // x21

  if ( (byte_49FD07A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___, *(_QWORD *)&spotId);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___, v5);
    sub_1B640C8(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v6);
    sub_1B640C8(&System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo, v7);
    sub_1B640C8(&Method_UserEventQuestCooltimeMaster___c__GetEntityFromSpotId_b__5_0__, v8);
    sub_1B640C8(&Method_UserEventQuestCooltimeMaster___c__DisplayClass5_0__GetEntityFromSpotId_b__1__, v9);
    sub_1B640C8(&UserEventQuestCooltimeMaster___c__DisplayClass5_0_TypeInfo, v10);
    sub_1B640C8(&UserEventQuestCooltimeMaster___c_TypeInfo, v11);
    byte_49FD07A = 1;
  }
  v12 = sub_1B64314(UserEventQuestCooltimeMaster___c__DisplayClass5_0_TypeInfo, *(_QWORD *)&spotId, method);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1B64324(v13);
  *(_DWORD *)(v12 + 16) = spotId;
  list = this->fields.list;
  v17 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v17 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__object__o *)v17->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = UserEventQuestCooltimeMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__5_0 = (System_Func_object__object__o *)sub_1B64314(
                                                 System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo,
                                                 v14,
                                                 v15);
    System_Func_object__object____ctor(
      _9__5_0,
      v19,
      Method_UserEventQuestCooltimeMaster___c__GetEntityFromSpotId_b__5_0__,
      0LL);
    static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__5_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  v26 = (System_Func_object__bool__o *)sub_1B64314(System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo, v24, v25);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v12,
    Method_UserEventQuestCooltimeMaster___c__DisplayClass5_0__GetEntityFromSpotId_b__1__,
    0LL);
  return (UserEventQuestCooltimeEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                             v23,
                                             (System_Func_TSource__bool__o *)v26,
                                             (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
}


System_Collections_Generic_List_UserEventQuestCooltimeEntity__o *__fastcall UserEventQuestCooltimeMaster__GetEntityList(
        UserEventQuestCooltimeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserEventQuestCooltimeMaster___c_c *v8; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__object__o *_9__4_0; // x20
  Il2CppObject *v11; // x21
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_49FD079 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_UserEventQuestCooltimeEntity___, v4);
    sub_1B640C8(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v5);
    sub_1B640C8(&Method_UserEventQuestCooltimeMaster___c__GetEntityList_b__4_0__, v6);
    sub_1B640C8(&UserEventQuestCooltimeMaster___c_TypeInfo, v7);
    byte_49FD079 = 1;
  }
  v8 = UserEventQuestCooltimeMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v8 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__object__o *)v8->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = UserEventQuestCooltimeMaster___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__4_0 = (System_Func_object__object__o *)sub_1B64314(
                                                 System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo,
                                                 method,
                                                 v2);
    System_Func_object__object____ctor(
      _9__4_0,
      v11,
      Method_UserEventQuestCooltimeMaster___c__GetEntityList_b__4_0__,
      0LL);
    static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__4_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  return (System_Collections_Generic_List_UserEventQuestCooltimeEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                              v15,
                                                                              (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_UserEventQuestCooltimeEntity___);
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

  if ( (byte_49FD076 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__TryGetEntity__,
      entity);
    byte_49FD076 = 1;
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
           (const MethodInfo_30D424C *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__TryGetEntity__);
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
  __int64 v19; // x2
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventQuestCooltimeMaster___c_c *v21; // x0
  System_Func_object__object__o *_9__3_0; // x21
  Il2CppObject *v23; // x22
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  System_Func_object__bool__o *v30; // x21

  if ( (byte_49FD078 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___, v9);
    sub_1B640C8(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v10);
    sub_1B640C8(&System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo, v11);
    sub_1B640C8(&Method_UserEventQuestCooltimeMaster___c__getEntity_b__3_0__, v12);
    sub_1B640C8(&Method_UserEventQuestCooltimeMaster___c__DisplayClass3_0__getEntity_b__1__, v13);
    sub_1B640C8(&UserEventQuestCooltimeMaster___c__DisplayClass3_0_TypeInfo, v14);
    sub_1B640C8(&UserEventQuestCooltimeMaster___c_TypeInfo, v15);
    byte_49FD078 = 1;
  }
  v16 = sub_1B64314(
          UserEventQuestCooltimeMaster___c__DisplayClass3_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&questId);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    sub_1B64324(v17);
  *(_DWORD *)(v16 + 16) = eventId;
  *(_DWORD *)(v16 + 20) = questId;
  *(_DWORD *)(v16 + 24) = phase;
  list = this->fields.list;
  v21 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v21 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v21->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = UserEventQuestCooltimeMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1B64314(
                                                 System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo,
                                                 v18,
                                                 v19);
    System_Func_object__object____ctor(_9__3_0, v23, Method_UserEventQuestCooltimeMaster___c__getEntity_b__3_0__, 0LL);
    static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__3_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  v30 = (System_Func_object__bool__o *)sub_1B64314(System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo, v28, v29);
  System_Func_object__bool____ctor(
    v30,
    (Il2CppObject *)v16,
    Method_UserEventQuestCooltimeMaster___c__DisplayClass3_0__getEntity_b__1__,
    0LL);
  return (UserEventQuestCooltimeEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                             v27,
                                             (System_Func_TSource__bool__o *)v30,
                                             (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
}


void __fastcall UserEventQuestCooltimeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FD07B & 1) == 0 )
  {
    sub_1B640C8(&UserEventQuestCooltimeMaster___c_TypeInfo, v1);
    byte_49FD07B = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(UserEventQuestCooltimeMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  UserEventQuestCooltimeMaster___c_TypeInfo->static_fields->__9 = (struct UserEventQuestCooltimeMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)UserEventQuestCooltimeMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49FD07E & 1) == 0 )
  {
    sub_1B640C8(&UserEventQuestCooltimeEntity_TypeInfo, data);
    byte_49FD07E = 1;
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

  if ( (byte_49FD07D & 1) == 0 )
  {
    sub_1B640C8(&UserEventQuestCooltimeEntity_TypeInfo, data);
    byte_49FD07D = 1;
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

  if ( (byte_49FD07C & 1) == 0 )
  {
    sub_1B640C8(&UserEventQuestCooltimeEntity_TypeInfo, data);
    byte_49FD07C = 1;
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  }
  return LODWORD(this[2].klass) == v3->fields.spotId;
}