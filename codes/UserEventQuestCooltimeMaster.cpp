void UserEventQuestCooltimeMaster___ctor(UserEventQuestCooltimeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB710F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string___ctor__);
    byte_4CB710F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    323,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventQuestCooltimeEntity_o *UserEventQuestCooltimeMaster__GetEntity(
        UserEventQuestCooltimeMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB710D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__GetEntity__);
    byte_4CB710D = 1;
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
                                             (const MethodInfo_33FDB94 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__GetEntity__);
}


UserEventQuestCooltimeEntity_o *UserEventQuestCooltimeMaster__GetEntityFromSpotId(
        UserEventQuestCooltimeMaster_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  UserEventQuestCooltimeMaster___c_c *v9; // x0
  System_Func_object__object__o *_9__5_0; // x21
  Il2CppObject *v11; // x22
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_object__bool__o *v16; // x21

  if ( (byte_4CB7112 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_UserEventQuestCooltimeEntity__UserEventQuestCooltimeEntity___);
    sub_1C6BA08(&System_Func_UserEventQuestCooltimeEntity__UserEventQuestCooltimeEntity__TypeInfo);
    sub_1C6BA08(&System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_UserEventQuestCooltimeMaster___c__GetEntityFromSpotId_b__5_0__);
    sub_1C6BA08(&Method_UserEventQuestCooltimeMaster___c__DisplayClass5_0__GetEntityFromSpotId_b__1__);
    sub_1C6BA08(&UserEventQuestCooltimeMaster___c__DisplayClass5_0_TypeInfo);
    sub_1C6BA08(&UserEventQuestCooltimeMaster___c_TypeInfo);
    byte_4CB7112 = 1;
  }
  v5 = sub_1C6BC54(UserEventQuestCooltimeMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  *(_DWORD *)(v5 + 16) = spotId;
  list = this->fields.list;
  v9 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v9 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__object__o *)v9->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = UserEventQuestCooltimeMaster___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__5_0 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_UserEventQuestCooltimeEntity__UserEventQuestCooltimeEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__5_0,
      v11,
      Method_UserEventQuestCooltimeMaster___c__GetEntityFromSpotId_b__5_0__,
      0);
    static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_UserEventQuestCooltimeEntity__UserEventQuestCooltimeEntity__o *)_9__5_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_3171B10 *)Method_System_Linq_Enumerable_Select_UserEventQuestCooltimeEntity__UserEventQuestCooltimeEntity___);
  v16 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_UserEventQuestCooltimeMaster___c__DisplayClass5_0__GetEntityFromSpotId_b__1__,
    0);
  return (UserEventQuestCooltimeEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51793644(
                                             v15,
                                             (System_Func_TSource__bool__o *)v16,
                                             (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
}


System_Collections_Generic_List_UserEventQuestCooltimeEntity__o *UserEventQuestCooltimeMaster__GetEntityList(
        UserEventQuestCooltimeMaster_o *this,
        const MethodInfo *method)
{
  UserEventQuestCooltimeMaster___c_c *v3; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__object__o *_9__4_0; // x20
  Il2CppObject *v6; // x21
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4CB7111 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_UserEventQuestCooltimeEntity__UserEventQuestCooltimeEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_UserEventQuestCooltimeEntity___);
    sub_1C6BA08(&System_Func_UserEventQuestCooltimeEntity__UserEventQuestCooltimeEntity__TypeInfo);
    sub_1C6BA08(&Method_UserEventQuestCooltimeMaster___c__GetEntityList_b__4_0__);
    sub_1C6BA08(&UserEventQuestCooltimeMaster___c_TypeInfo);
    byte_4CB7111 = 1;
  }
  v3 = UserEventQuestCooltimeMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v3 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__object__o *)v3->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = UserEventQuestCooltimeMaster___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__4_0 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_UserEventQuestCooltimeEntity__UserEventQuestCooltimeEntity__TypeInfo);
    System_Func_object__object____ctor(_9__4_0, v6, Method_UserEventQuestCooltimeMaster___c__GetEntityList_b__4_0__, 0);
    static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_UserEventQuestCooltimeEntity__UserEventQuestCooltimeEntity__o *)_9__4_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v8, v9);
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_3171B10 *)Method_System_Linq_Enumerable_Select_UserEventQuestCooltimeEntity__UserEventQuestCooltimeEntity___);
  return (System_Collections_Generic_List_UserEventQuestCooltimeEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                              v10,
                                                                              (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_UserEventQuestCooltimeEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool UserEventQuestCooltimeMaster__TryGetEntity(
        UserEventQuestCooltimeMaster_o *this,
        UserEventQuestCooltimeEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CB710E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__TryGetEntity__);
    byte_4CB710E = 1;
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
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__TryGetEntity__);
}


UserEventQuestCooltimeEntity_o *UserEventQuestCooltimeMaster__getEntity(
        UserEventQuestCooltimeMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  UserEventQuestCooltimeMaster___c_c *v13; // x0
  System_Func_object__object__o *_9__3_0; // x21
  Il2CppObject *v15; // x22
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  System_Func_object__bool__o *v20; // x21

  if ( (byte_4CB7110 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_UserEventQuestCooltimeEntity__UserEventQuestCooltimeEntity___);
    sub_1C6BA08(&System_Func_UserEventQuestCooltimeEntity__UserEventQuestCooltimeEntity__TypeInfo);
    sub_1C6BA08(&System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_UserEventQuestCooltimeMaster___c__getEntity_b__3_0__);
    sub_1C6BA08(&Method_UserEventQuestCooltimeMaster___c__DisplayClass3_0__getEntity_b__1__);
    sub_1C6BA08(&UserEventQuestCooltimeMaster___c__DisplayClass3_0_TypeInfo);
    sub_1C6BA08(&UserEventQuestCooltimeMaster___c_TypeInfo);
    byte_4CB7110 = 1;
  }
  v9 = sub_1C6BC54(UserEventQuestCooltimeMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C6BC60(v10, v11);
  *(_DWORD *)(v9 + 16) = eventId;
  *(_DWORD *)(v9 + 20) = questId;
  *(_DWORD *)(v9 + 24) = phase;
  list = this->fields.list;
  v13 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo);
    v13 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v13->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = UserEventQuestCooltimeMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_UserEventQuestCooltimeEntity__UserEventQuestCooltimeEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v15, Method_UserEventQuestCooltimeMaster___c__getEntity_b__3_0__, 0);
    static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_UserEventQuestCooltimeEntity__UserEventQuestCooltimeEntity__o *)_9__3_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_3171B10 *)Method_System_Linq_Enumerable_Select_UserEventQuestCooltimeEntity__UserEventQuestCooltimeEntity___);
  v20 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_UserEventQuestCooltimeMaster___c__DisplayClass3_0__getEntity_b__1__,
    0);
  return (UserEventQuestCooltimeEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51793644(
                                             v19,
                                             (System_Func_TSource__bool__o *)v20,
                                             (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
}


void UserEventQuestCooltimeMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB7113 & 1) == 0 )
  {
    sub_1C6BA08(&UserEventQuestCooltimeMaster___c_TypeInfo);
    byte_4CB7113 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(UserEventQuestCooltimeMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserEventQuestCooltimeMaster___c_TypeInfo->static_fields->__9 = (struct UserEventQuestCooltimeMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)UserEventQuestCooltimeMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void UserEventQuestCooltimeMaster___c___ctor(UserEventQuestCooltimeMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UserEventQuestCooltimeEntity_o *UserEventQuestCooltimeMaster___c___GetEntityFromSpotId_b__5_0(
        UserEventQuestCooltimeMaster___c_o *this,
        UserEventQuestCooltimeEntity_o *data,
        const MethodInfo *method)
{
  return data;
}


UserEventQuestCooltimeEntity_o *UserEventQuestCooltimeMaster___c___GetEntityList_b__4_0(
        UserEventQuestCooltimeMaster___c_o *this,
        UserEventQuestCooltimeEntity_o *data,
        const MethodInfo *method)
{
  return data;
}


UserEventQuestCooltimeEntity_o *UserEventQuestCooltimeMaster___c___getEntity_b__3_0(
        UserEventQuestCooltimeMaster___c_o *this,
        UserEventQuestCooltimeEntity_o *data,
        const MethodInfo *method)
{
  return data;
}


void UserEventQuestCooltimeMaster___c__DisplayClass3_0___ctor(
        UserEventQuestCooltimeMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserEventQuestCooltimeMaster___c__DisplayClass3_0___getEntity_b__1(
        UserEventQuestCooltimeMaster___c__DisplayClass3_0_o *this,
        UserEventQuestCooltimeEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C6BC60(this, 0);
  return entity->fields.eventId == this->fields.eventId
      && entity->fields.questId == this->fields.questId
      && entity->fields.phase == this->fields.phase;
}


void UserEventQuestCooltimeMaster___c__DisplayClass5_0___ctor(
        UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserEventQuestCooltimeMaster___c__DisplayClass5_0___GetEntityFromSpotId_b__1(
        UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *this,
        UserEventQuestCooltimeEntity_o *entity,
        const MethodInfo *method)
{
  UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *v3; // x19

  if ( !entity
    || (v3 = this,
        (this = (UserEventQuestCooltimeMaster___c__DisplayClass5_0_o *)UserEventQuestCooltimeEntity__GetQuestEntity(
                                                                         entity,
                                                                         (const MethodInfo *)entity)) == 0) )
  {
    sub_1C6BC60(this, entity);
  }
  return LODWORD(this[2].klass) == v3->fields.spotId;
}