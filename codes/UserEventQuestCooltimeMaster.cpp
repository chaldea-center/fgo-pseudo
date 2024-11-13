void __fastcall UserEventQuestCooltimeMaster___ctor(UserEventQuestCooltimeMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16EA5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string___ctor__,
      method,
      v2);
    byte_4B16EA5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    317,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string___ctor__);
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

  if ( (byte_4B16EA3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&eventId);
    byte_4B16EA3 = 1;
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
                                             (const MethodInfo_31B3198 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventQuestCooltimeEntity_o *__fastcall UserEventQuestCooltimeMaster__GetEntityFromSpotId(
        UserEventQuestCooltimeMaster_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x19
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventQuestCooltimeMaster___c_c *v26; // x0
  System_Func_object__object__o *_9__5_0; // x21
  Il2CppObject *v28; // x22
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Func_object__bool__o *v40; // x21

  if ( (byte_4B16EA8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___,
      *(_QWORD *)&spotId,
      method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___, v6, v7);
    sub_1BCA7E0(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_UserEventQuestCooltimeMaster___c__GetEntityFromSpotId_b__5_0__, v12, v13);
    sub_1BCA7E0(&Method_UserEventQuestCooltimeMaster___c__DisplayClass5_0__GetEntityFromSpotId_b__1__, v14, v15);
    sub_1BCA7E0(&UserEventQuestCooltimeMaster___c__DisplayClass5_0_TypeInfo, v16, v17);
    sub_1BCA7E0(&UserEventQuestCooltimeMaster___c_TypeInfo, v18, v19);
    byte_4B16EA8 = 1;
  }
  v20 = sub_1BCAA2C(UserEventQuestCooltimeMaster___c__DisplayClass5_0_TypeInfo, *(_QWORD *)&spotId, method, v3);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    sub_1BCAA3C(v21, v22);
  *(_DWORD *)(v20 + 16) = spotId;
  list = this->fields.list;
  v26 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo, v22);
    v26 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__object__o *)v26->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26, v22);
      v26 = UserEventQuestCooltimeMaster___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__5_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo,
                                                 v22,
                                                 v23,
                                                 v24);
    System_Func_object__object____ctor(
      _9__5_0,
      v28,
      Method_UserEventQuestCooltimeMaster___c__GetEntityFromSpotId_b__5_0__,
      0LL);
    static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__5_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)_9__5_0, v30, v31, v32, v33, v34, v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  v40 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo,
                                         v37,
                                         v38,
                                         v39);
  System_Func_object__bool____ctor(
    v40,
    (Il2CppObject *)v20,
    Method_UserEventQuestCooltimeMaster___c__DisplayClass5_0__GetEntityFromSpotId_b__1__,
    0LL);
  return (UserEventQuestCooltimeEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                             v36,
                                             (System_Func_TSource__bool__o *)v40,
                                             (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
}


System_Collections_Generic_List_UserEventQuestCooltimeEntity__o *__fastcall UserEventQuestCooltimeMaster__GetEntityList(
        UserEventQuestCooltimeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UserEventQuestCooltimeMaster___c_c *v13; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__object__o *_9__4_0; // x20
  Il2CppObject *v16; // x21
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B16EA7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_UserEventQuestCooltimeEntity___, v5, v6);
    sub_1BCA7E0(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UserEventQuestCooltimeMaster___c__GetEntityList_b__4_0__, v9, v10);
    sub_1BCA7E0(&UserEventQuestCooltimeMaster___c_TypeInfo, v11, v12);
    byte_4B16EA7 = 1;
  }
  v13 = UserEventQuestCooltimeMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo, method);
    v13 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__object__o *)v13->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = UserEventQuestCooltimeMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__4_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
    System_Func_object__object____ctor(
      _9__4_0,
      v16,
      Method_UserEventQuestCooltimeMaster___c__GetEntityList_b__4_0__,
      0LL);
    static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__4_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v18, v19, v20, v21, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  return (System_Collections_Generic_List_UserEventQuestCooltimeEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                              v24,
                                                                              (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_UserEventQuestCooltimeEntity___);
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

  if ( (byte_4B16EA4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__TryGetEntity__,
      entity,
      userId);
    byte_4B16EA4 = 1;
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
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserEventQuestCooltimeMaster__UserEventQuestCooltimeEntity__string__TryGetEntity__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x19
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventQuestCooltimeMaster___c_c *v29; // x0
  System_Func_object__object__o *_9__3_0; // x21
  Il2CppObject *v31; // x22
  struct UserEventQuestCooltimeMaster___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Func_object__bool__o *v43; // x21

  if ( (byte_4B16EA6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___,
      *(_QWORD *)&eventId,
      *(_QWORD *)&questId);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___, v9, v10);
    sub_1BCA7E0(&System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_UserEventQuestCooltimeMaster___c__getEntity_b__3_0__, v15, v16);
    sub_1BCA7E0(&Method_UserEventQuestCooltimeMaster___c__DisplayClass3_0__getEntity_b__1__, v17, v18);
    sub_1BCA7E0(&UserEventQuestCooltimeMaster___c__DisplayClass3_0_TypeInfo, v19, v20);
    sub_1BCA7E0(&UserEventQuestCooltimeMaster___c_TypeInfo, v21, v22);
    byte_4B16EA6 = 1;
  }
  v23 = sub_1BCAA2C(
          UserEventQuestCooltimeMaster___c__DisplayClass3_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&questId,
          *(_QWORD *)&phase);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    sub_1BCAA3C(v24, v25);
  *(_DWORD *)(v23 + 16) = eventId;
  *(_DWORD *)(v23 + 20) = questId;
  *(_DWORD *)(v23 + 24) = phase;
  list = this->fields.list;
  v29 = UserEventQuestCooltimeMaster___c_TypeInfo;
  if ( !UserEventQuestCooltimeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventQuestCooltimeMaster___c_TypeInfo, v25);
    v29 = UserEventQuestCooltimeMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v29->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29, v25);
      v29 = UserEventQuestCooltimeMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v29->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_DataEntityBase__UserEventQuestCooltimeEntity__TypeInfo,
                                                 v25,
                                                 v26,
                                                 v27);
    System_Func_object__object____ctor(_9__3_0, v31, Method_UserEventQuestCooltimeMaster___c__getEntity_b__3_0__, 0LL);
    static_fields = UserEventQuestCooltimeMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__UserEventQuestCooltimeEntity__o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v33, v34, v35, v36, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventQuestCooltimeEntity___);
  v43 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_UserEventQuestCooltimeEntity__bool__TypeInfo,
                                         v40,
                                         v41,
                                         v42);
  System_Func_object__bool____ctor(
    v43,
    (Il2CppObject *)v23,
    Method_UserEventQuestCooltimeMaster___c__DisplayClass3_0__getEntity_b__1__,
    0LL);
  return (UserEventQuestCooltimeEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                             v39,
                                             (System_Func_TSource__bool__o *)v43,
                                             (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventQuestCooltimeEntity___);
}


void __fastcall UserEventQuestCooltimeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16EA9 & 1) == 0 )
  {
    sub_1BCA7E0(&UserEventQuestCooltimeMaster___c_TypeInfo, v1, v2);
    byte_4B16EA9 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(UserEventQuestCooltimeMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  UserEventQuestCooltimeMaster___c_TypeInfo->static_fields->__9 = (struct UserEventQuestCooltimeMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserEventQuestCooltimeMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B16EAC & 1) == 0 )
  {
    sub_1BCA7E0(&UserEventQuestCooltimeEntity_TypeInfo, data, method);
    byte_4B16EAC = 1;
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

  if ( (byte_4B16EAB & 1) == 0 )
  {
    sub_1BCA7E0(&UserEventQuestCooltimeEntity_TypeInfo, data, method);
    byte_4B16EAB = 1;
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

  if ( (byte_4B16EAA & 1) == 0 )
  {
    sub_1BCA7E0(&UserEventQuestCooltimeEntity_TypeInfo, data, method);
    byte_4B16EAA = 1;
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, entity);
  }
  return LODWORD(this[2].klass) == v3->fields.spotId;
}