void __fastcall UserEventServantPointMaster___ctor(UserEventServantPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B678CA & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__,
      method);
    byte_4B678CA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    405,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__);
}


UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster__GetBestServantPointEntity(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x21
  Il2CppObject *Instance; // x0
  __int64 v27; // x1
  __int64 v28; // x19
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventServantPointMaster___c_c *v36; // x0
  System_Func_object__object__o *_9__3_0; // x22
  Il2CppObject *v38; // x23
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x20
  System_Func_object__bool__o *v47; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  UserEventServantPointMaster___c_c *v49; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x20
  System_Func_T__TResult__o *_9__3_2; // x21
  Il2CppObject *v52; // x22
  struct UserEventServantPointMaster___c_StaticFields *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v60; // x20
  System_Func_object__int__o *v61; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0

  if ( (byte_4B678CB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, userId);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_DataEntityBase___, v7);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___, v8);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___, v9);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___, v10);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___, v11);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___, v12);
    sub_1BE4ACC(&System_Func_UserEventServantPointEntity__int__TypeInfo, v13);
    sub_1BE4ACC(&System_Func_UserEventServantPointEntity__long__TypeInfo, v14);
    sub_1BE4ACC(&System_Func_UserEventServantPointEntity__bool__TypeInfo, v15);
    sub_1BE4ACC(&System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo, v16);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BE4ACC(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__, v18);
    sub_1BE4ACC(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__, v19);
    sub_1BE4ACC(&Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__, v20);
    sub_1BE4ACC(&UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo, v21);
    sub_1BE4ACC(&Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__, v22);
    sub_1BE4ACC(&UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo, v23);
    sub_1BE4ACC(&UserEventServantPointMaster___c_TypeInfo, v24);
    byte_4B678CB = 1;
  }
  v25 = sub_1BE4D18(UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_21;
  *(_QWORD *)(v25 + 16) = userId;
  *(_DWORD *)(v25 + 24) = eventId;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
    return 0LL;
  v28 = sub_1BE4D18(UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___),
        !v28) )
  {
LABEL_21:
    sub_1BE4D28(Instance, v27);
  }
  *(_QWORD *)(v28 + 16) = Instance;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 16), (int64_t)Instance, v29, v30, v31, v32, v33, v34);
  list = this->fields.list;
  v36 = UserEventServantPointMaster___c_TypeInfo;
  if ( !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v36 = UserEventServantPointMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v36->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = UserEventServantPointMaster___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v36->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__3_0,
      v38,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__,
      0LL);
    static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__UserEventServantPointEntity__o *)_9__3_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v40, v41, v42, v43, v44, v45);
  }
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2F8A8A8 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
  v47 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_UserEventServantPointEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v47,
    (Il2CppObject *)v25,
    Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__,
    0LL);
  v48 = System_Linq_Enumerable__Where_object_(
          v46,
          (System_Func_TSource__bool__o *)v47,
          (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  v49 = UserEventServantPointMaster___c_TypeInfo;
  v50 = v48;
  if ( !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v49 = UserEventServantPointMaster___c_TypeInfo;
  }
  _9__3_2 = (System_Func_T__TResult__o *)v49->static_fields->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = UserEventServantPointMaster___c_TypeInfo;
    }
    v52 = (Il2CppObject *)v49->static_fields->__9;
    _9__3_2 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_UserEventServantPointEntity__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__3_2,
      v52,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__,
      0LL);
    v53 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v53->__9__3_2 = (struct System_Func_UserEventServantPointEntity__long__o *)_9__3_2;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v53->__9__3_2, (int64_t)_9__3_2, v54, v55, v56, v57, v58, v59);
  }
  v60 = System_Linq_Enumerable__OrderByDescending_object__long_(
          v50,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_2F82768 *)Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___);
  v61 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_UserEventServantPointEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v61,
    (Il2CppObject *)v28,
    Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__,
    0LL);
  v62 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v60,
                                                               (System_Func_TSource__TKey__o *)v61,
                                                               (const MethodInfo_2F91F68 *)Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___);
  return (UserEventServantPointEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                            v62,
                                            (const MethodInfo_2F7B9A0 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___);
}


// local variable allocation has failed, the output may be wrong!
UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster__GetEntity(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *PK; // x1

  if ( (byte_4B678C8 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__,
      userId);
    sub_1BE4ACC(&UserEventServantPointEntity_TypeInfo, v9);
    byte_4B678C8 = 1;
  }
  if ( !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
  PK = (Il2CppObject *)UserEventServantPointEntity__CreatePK(userId, eventId, svtId, *(const MethodInfo **)&svtId);
  return (UserEventServantPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31FDB1C *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__);
}


bool __fastcall UserEventServantPointMaster__IsAnyExist(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
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
  UserEventServantPointMaster___c_c *v20; // x0
  System_Func_object__object__o *_9__4_0; // x21
  Il2CppObject *v22; // x22
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  System_Func_object__bool__o *v31; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_4B678CC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_DataEntityBase___, userId);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___, v7);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___, v8);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___, v9);
    sub_1BE4ACC(&System_Func_UserEventServantPointEntity__bool__TypeInfo, v10);
    sub_1BE4ACC(&System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo, v11);
    sub_1BE4ACC(&Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__, v12);
    sub_1BE4ACC(&Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__, v13);
    sub_1BE4ACC(&UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo, v14);
    sub_1BE4ACC(&UserEventServantPointMaster___c_TypeInfo, v15);
    byte_4B678CC = 1;
  }
  v16 = sub_1BE4D18(UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    sub_1BE4D28(v17, v18);
  *(_QWORD *)(v16 + 16) = userId;
  *(_DWORD *)(v16 + 24) = eventId;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
    return 0;
  list = this->fields.list;
  v20 = UserEventServantPointMaster___c_TypeInfo;
  if ( !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v20 = UserEventServantPointMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__object__o *)v20->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = UserEventServantPointMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__4_0 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo);
    System_Func_object__object____ctor(_9__4_0, v22, Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__, 0LL);
    static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_DataEntityBase__UserEventServantPointEntity__o *)_9__4_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v24, v25, v26, v27, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_2F8A8A8 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
  v31 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_UserEventServantPointEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v31,
    (Il2CppObject *)v16,
    Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__,
    0LL);
  v32 = System_Linq_Enumerable__Where_object_(
          v30,
          (System_Func_TSource__bool__o *)v31,
          (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  return System_Linq_Enumerable__Any_object_(
           v32,
           (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventServantPointMaster__TryGetEntity(
        UserEventServantPointMaster_o *this,
        UserEventServantPointEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  Il2CppObject *PK; // x2

  if ( (byte_4B678C9 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__,
      entity);
    sub_1BE4ACC(&UserEventServantPointEntity_TypeInfo, v11);
    byte_4B678C9 = 1;
  }
  if ( !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
  PK = (Il2CppObject *)UserEventServantPointEntity__CreatePK(userId, eventId, svtId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__);
}


void __fastcall UserEventServantPointMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B678CD & 1) == 0 )
  {
    sub_1BE4ACC(&UserEventServantPointMaster___c_TypeInfo, v1);
    byte_4B678CD = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(UserEventServantPointMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserEventServantPointMaster___c_TypeInfo->static_fields->__9 = (struct UserEventServantPointMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)UserEventServantPointMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall UserEventServantPointMaster___c___ctor(
        UserEventServantPointMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster___c___GetBestServantPointEntity_b__3_0(
        UserEventServantPointMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B678CE & 1) == 0 )
  {
    sub_1BE4ACC(&UserEventServantPointEntity_TypeInfo, entity);
    byte_4B678CE = 1;
  }
  if ( !entity )
    return 0LL;
  methodPtr_low = LOBYTE(UserEventServantPointEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(entity->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserEventServantPointEntity_c *)entity->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventServantPointEntity_TypeInfo )
    return (UserEventServantPointEntity_o *)entity;
  return 0LL;
}


int64_t __fastcall UserEventServantPointMaster___c___GetBestServantPointEntity_b__3_2(
        UserEventServantPointMaster___c_o *this,
        UserEventServantPointEntity_o *svtPointEnt,
        const MethodInfo *method)
{
  if ( !svtPointEnt )
    sub_1BE4D28(this, 0LL);
  return svtPointEnt->fields.value;
}


UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster___c___IsAnyExist_b__4_0(
        UserEventServantPointMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B678CF & 1) == 0 )
  {
    sub_1BE4ACC(&UserEventServantPointEntity_TypeInfo, entity);
    byte_4B678CF = 1;
  }
  if ( !entity )
    return 0LL;
  methodPtr_low = LOBYTE(UserEventServantPointEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(entity->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserEventServantPointEntity_c *)entity->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventServantPointEntity_TypeInfo )
    return (UserEventServantPointEntity_o *)entity;
  return 0LL;
}


void __fastcall UserEventServantPointMaster___c__DisplayClass3_0___ctor(
        UserEventServantPointMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserEventServantPointMaster___c__DisplayClass3_0___GetBestServantPointEntity_b__1(
        UserEventServantPointMaster___c__DisplayClass3_0_o *this,
        UserEventServantPointEntity_o *svtPointEnt,
        const MethodInfo *method)
{
  UserEventServantPointMaster___c__DisplayClass3_0_o *v4; // x20
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4B678D0 & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_0_o *)sub_1BE4ACC(
                                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                   svtPointEnt);
    byte_4B678D0 = 1;
  }
  if ( !svtPointEnt )
    sub_1BE4D28(this, svtPointEnt);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v7, 0LL) == v4->fields.userId
      && svtPointEnt->fields.eventId == v4->fields.eventId;
}


void __fastcall UserEventServantPointMaster___c__DisplayClass3_1___ctor(
        UserEventServantPointMaster___c__DisplayClass3_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserEventServantPointMaster___c__DisplayClass3_1___GetBestServantPointEntity_b__3(
        UserEventServantPointMaster___c__DisplayClass3_1_o *this,
        UserEventServantPointEntity_o *svtPointEnt,
        const MethodInfo *method)
{
  UserEventServantPointMaster___c__DisplayClass3_1_o *v4; // x20

  v4 = this;
  if ( (byte_4B678D1 & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)sub_1BE4ACC(
                                                                   &Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__,
                                                                   svtPointEnt);
    byte_4B678D1 = 1;
  }
  if ( !svtPointEnt
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)v4->fields.svtMaster) == 0LL
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)DataMasterBase_object__object__int___GetEntity(
                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                       svtPointEnt->fields.svtId,
                                                                       (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BE4D28(this, svtPointEnt);
  }
  return (int32_t)this[8].fields.svtMaster;
}


void __fastcall UserEventServantPointMaster___c__DisplayClass4_0___ctor(
        UserEventServantPointMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserEventServantPointMaster___c__DisplayClass4_0___IsAnyExist_b__1(
        UserEventServantPointMaster___c__DisplayClass4_0_o *this,
        UserEventServantPointEntity_o *svtPointEnt,
        const MethodInfo *method)
{
  UserEventServantPointMaster___c__DisplayClass4_0_o *v4; // x20
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4B678D2 & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass4_0_o *)sub_1BE4ACC(
                                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                   svtPointEnt);
    byte_4B678D2 = 1;
  }
  if ( !svtPointEnt )
    sub_1BE4D28(this, svtPointEnt);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v7, 0LL) == v4->fields.userId
      && svtPointEnt->fields.eventId == v4->fields.eventId;
}