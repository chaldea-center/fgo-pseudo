void UserServantGrandMaster___ctor(UserServantGrandMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8463 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string___ctor__);
    byte_4CC8463 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    548,
    (const MethodInfo_340B614 *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantGrandEntity_o *UserServantGrandMaster__GetEntity(
        UserServantGrandMaster_o *this,
        int64_t userId,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC8464 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__GetEntity__);
    byte_4CC8464 = 1;
  }
  PK = (Il2CppObject *)UserServantGrandEntity__CreatePK(userId, grandGraphId, *(const MethodInfo **)&grandGraphId);
  return (UserServantGrandEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_340D938 *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__GetEntity__);
}


UserServantGrandEntity_o *UserServantGrandMaster__GetEntityFromGrandGraphId(
        UserServantGrandMaster_o *this,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  UserServantGrandMaster___c__DisplayClass5_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4CC8460 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantGrandEntity___);
    sub_1C713B0(&System_Func_UserServantGrandEntity__bool__TypeInfo);
    sub_1C713B0(&Method_UserServantGrandMaster___c__DisplayClass5_0__GetEntityFromGrandGraphId_b__0__);
    sub_1C713B0(&UserServantGrandMaster___c__DisplayClass5_0_TypeInfo);
    byte_4CC8460 = 1;
  }
  v5 = (UserServantGrandMaster___c__DisplayClass5_0_o *)sub_1C715FC(UserServantGrandMaster___c__DisplayClass5_0_TypeInfo);
  UserServantGrandMaster___c__DisplayClass5_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  v5->fields.grandGraphId = grandGraphId;
  Entitys = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__object___getEntitys(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                   (const MethodInfo_340CBBC *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  v9 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_UserServantGrandEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_UserServantGrandMaster___c__DisplayClass5_0__GetEntityFromGrandGraphId_b__0__,
    0);
  return (UserServantGrandEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51858576(
                                       Entitys,
                                       (System_Func_TSource__bool__o *)v9,
                                       (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantGrandEntity___);
}


UserServantGrandEntity_o *UserServantGrandMaster__GetEntityFromSvtId(
        UserServantGrandMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  UserServantGrandMaster___c__DisplayClass6_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Object_array *Entitys; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  System_Func_object__bool__o *v10; // x20

  if ( (byte_4CC8461 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantGrandEntity___);
    sub_1C713B0(&System_Func_UserServantGrandEntity__bool__TypeInfo);
    sub_1C713B0(&Method_UserServantGrandMaster___c__DisplayClass6_0__GetEntityFromSvtId_b__0__);
    sub_1C713B0(&UserServantGrandMaster___c__DisplayClass6_0_TypeInfo);
    byte_4CC8461 = 1;
  }
  v5 = (UserServantGrandMaster___c__DisplayClass6_0_o *)sub_1C715FC(UserServantGrandMaster___c__DisplayClass6_0_TypeInfo);
  UserServantGrandMaster___c__DisplayClass6_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  v5->fields.svtId = svtId;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              (const MethodInfo_340CBBC *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  if ( v5->fields.svtId < 1 )
    return 0;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)Entitys;
  v10 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_UserServantGrandEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_UserServantGrandMaster___c__DisplayClass6_0__GetEntityFromSvtId_b__0__,
    0);
  return (UserServantGrandEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51858576(
                                       v9,
                                       (System_Func_TSource__bool__o *)v10,
                                       (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantGrandEntity___);
}


UserServantGrandEntity_o *UserServantGrandMaster__GetFirstByUserSvtId(
        UserServantGrandMaster_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  UserServantGrandMaster___c__DisplayClass3_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4CC845F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntityList__);
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantGrandEntity___);
    sub_1C713B0(&System_Func_UserServantGrandEntity__bool__TypeInfo);
    sub_1C713B0(&Method_UserServantGrandMaster___c__DisplayClass3_0__GetFirstByUserSvtId_g__Condition_0__);
    sub_1C713B0(&UserServantGrandMaster___c__DisplayClass3_0_TypeInfo);
    byte_4CC845F = 1;
  }
  v5 = (UserServantGrandMaster___c__DisplayClass3_0_o *)sub_1C715FC(UserServantGrandMaster___c__DisplayClass3_0_TypeInfo);
  UserServantGrandMaster___c__DisplayClass3_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  v5->fields.userSvtId = userSvtId;
  if ( userSvtId < 1 )
    return 0;
  list = this->fields.list;
  v9 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_UserServantGrandEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_UserServantGrandMaster___c__DisplayClass3_0__GetFirstByUserSvtId_g__Condition_0__,
    0);
  return (UserServantGrandEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51858576(
                                       (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                       (System_Func_TSource__bool__o *)v9,
                                       (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantGrandEntity___);
}


System_Collections_Generic_IEnumerable_UserServantEntity__o *UserServantGrandMaster__GetUserServantEntities(
        UserServantGrandMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__object__o *v13; // x21
  System_Collections_Generic_IEnumerable_T__o *v14; // x0

  if ( (byte_4CC8462 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_ExcludeNull_UserServantEntity___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_UserServantGrandEntity__UserServantEntity___);
    sub_1C713B0(&System_Func_UserServantGrandEntity__UserServantEntity__TypeInfo);
    sub_1C713B0(&Method_UserServantGrandMaster___c__DisplayClass7_0__GetUserServantEntities_b__0__);
    sub_1C713B0(&UserServantGrandMaster___c__DisplayClass7_0_TypeInfo);
    byte_4CC8462 = 1;
  }
  v3 = sub_1C715FC(UserServantGrandMaster___c__DisplayClass7_0_TypeInfo);
  UserServantGrandMaster___c__DisplayClass7_0___ctor((UserServantGrandMaster___c__DisplayClass7_0_o *)v3, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v3 )
    sub_1C71608(Master_object, v5);
  *(_QWORD *)(v3 + 16) = Master_object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)Master_object, v6, v7, v8, v9, v10, v11);
  list = this->fields.list;
  v13 = (System_Func_object__object__o *)sub_1C715FC(System_Func_UserServantGrandEntity__UserServantEntity__TypeInfo);
  System_Func_object__object____ctor(
    v13,
    (Il2CppObject *)v3,
    Method_UserServantGrandMaster___c__DisplayClass7_0__GetUserServantEntities_b__0__,
    0);
  v14 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                         (System_Func_TSource__TResult__o *)v13,
                                                         (const MethodInfo_31818B4 *)Method_System_Linq_Enumerable_Select_UserServantGrandEntity__UserServantEntity___);
  return (System_Collections_Generic_IEnumerable_UserServantEntity__o *)BasicHelper__ExcludeNull_object_(
                                                                          v14,
                                                                          (const MethodInfo_3134B28 *)Method_BasicHelper_ExcludeNull_UserServantEntity___);
}


bool UserServantGrandMaster__IsSettingEquip(
        UserServantGrandMaster_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  UserServantGrandMaster___c__DisplayClass2_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Object_array *Entitys; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4CC845E & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_UserServantGrandEntity___);
    sub_1C713B0(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
    sub_1C713B0(&System_Func_UserServantGrandEntity__bool__TypeInfo);
    sub_1C713B0(&Method_UserServantGrandMaster___c__DisplayClass2_0__IsSettingEquip_b__0__);
    sub_1C713B0(&UserServantGrandMaster___c__DisplayClass2_0_TypeInfo);
    byte_4CC845E = 1;
  }
  v5 = (UserServantGrandMaster___c__DisplayClass2_0_o *)sub_1C715FC(UserServantGrandMaster___c__DisplayClass2_0_TypeInfo);
  UserServantGrandMaster___c__DisplayClass2_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  v5->fields.userSvtId = userSvtId;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              (const MethodInfo_340CBBC *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  v9 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_UserServantGrandEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_UserServantGrandMaster___c__DisplayClass2_0__IsSettingEquip_b__0__,
    0);
  return BasicHelper__Any_object__51593856(
           Entitys,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_3134280 *)Method_BasicHelper_Any_UserServantGrandEntity___);
}


bool UserServantGrandMaster__IsSettingServant(
        UserServantGrandMaster_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  UserServantGrandMaster___c__DisplayClass1_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Object_array *Entitys; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4CC845D & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_UserServantGrandEntity___);
    sub_1C713B0(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
    sub_1C713B0(&System_Func_UserServantGrandEntity__bool__TypeInfo);
    sub_1C713B0(&Method_UserServantGrandMaster___c__DisplayClass1_0__IsSettingServant_b__0__);
    sub_1C713B0(&UserServantGrandMaster___c__DisplayClass1_0_TypeInfo);
    byte_4CC845D = 1;
  }
  v5 = (UserServantGrandMaster___c__DisplayClass1_0_o *)sub_1C715FC(UserServantGrandMaster___c__DisplayClass1_0_TypeInfo);
  UserServantGrandMaster___c__DisplayClass1_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  v5->fields.userSvtId = userSvtId;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              (const MethodInfo_340CBBC *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  v9 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_UserServantGrandEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_UserServantGrandMaster___c__DisplayClass1_0__IsSettingServant_b__0__,
    0);
  return BasicHelper__Any_object__51593856(
           Entitys,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_3134280 *)Method_BasicHelper_Any_UserServantGrandEntity___);
}


bool UserServantGrandMaster__IsValidUserSvtId(int64_t userSvtId, const MethodInfo *method)
{
  return userSvtId > 0;
}


void UserServantGrandMaster__OnListChangedImplementation(
        UserServantGrandMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  __int64 v4; // x20
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  unsigned int action; // w8
  bool v14; // cf
  unsigned int v15; // w8
  __int64 v16; // x0
  System_NotImplementedException_o *v17; // x19
  __int64 v18; // x0
  System_Collections_IEnumerable_o *oldItems; // x0
  System_Collections_Generic_IEnumerable_T__o *v20; // x0
  System_Collections_Generic_IEnumerable_T__o *v21; // x21
  System_Action_object__o *v22; // x22
  System_Collections_IEnumerable_o *newItems; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x0
  System_Collections_Generic_IEnumerable_T__o *v25; // x19
  System_Action_object__o *v26; // x21

  if ( (byte_4CC845C & 1) == 0 )
  {
    sub_1C713B0(&System_Action_UserServantGrandEntity__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ExcludeNull_UserServantGrandEntity___);
    sub_1C713B0(&Method_BasicHelper_ForEach_UserServantGrandEntity___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_OfType_UserServantGrandEntity___);
    sub_1C713B0(&Method_UserServantGrandMaster___c__DisplayClass0_0__OnListChangedImplementation_g__OnUpdate_0__);
    sub_1C713B0(&UserServantGrandMaster___c__DisplayClass0_0_TypeInfo);
    byte_4CC845C = 1;
  }
  v4 = sub_1C715FC(UserServantGrandMaster___c__DisplayClass0_0_TypeInfo);
  UserServantGrandMaster___c__DisplayClass0_0___ctor((UserServantGrandMaster___c__DisplayClass0_0_o *)v4, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v4
    || (*(_QWORD *)(v4 + 16) = Master_object,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)Master_object, v7, v8, v9, v10, v11, v12),
        !e) )
  {
    sub_1C71608(Master_object, v6);
  }
  action = e->fields._action;
  v14 = action >= 3;
  v15 = action - 3;
  if ( v14 )
  {
    if ( v15 > 1 )
    {
      v16 = sub_1C713C4(&System_NotImplementedException_TypeInfo);
      v17 = (System_NotImplementedException_o *)sub_1C715FC(v16);
      System_NotImplementedException___ctor(v17, 0);
      v18 = sub_1C713C4(&Method_UserServantGrandMaster_OnListChangedImplementation__);
      sub_1C714D8(v17, v18);
    }
  }
  else
  {
    oldItems = (System_Collections_IEnumerable_o *)e->fields._oldItems;
    if ( oldItems )
    {
      v20 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                             oldItems,
                                                             (const MethodInfo_317A3C4 *)Method_System_Linq_Enumerable_OfType_UserServantGrandEntity___);
      v21 = BasicHelper__ExcludeNull_object_(
              v20,
              (const MethodInfo_3134B28 *)Method_BasicHelper_ExcludeNull_UserServantGrandEntity___);
      v22 = (System_Action_object__o *)sub_1C715FC(System_Action_UserServantGrandEntity__TypeInfo);
      System_Action_object____ctor(
        v22,
        (Il2CppObject *)v4,
        Method_UserServantGrandMaster___c__DisplayClass0_0__OnListChangedImplementation_g__OnUpdate_0__,
        0);
      BasicHelper__ForEach_object_(
        v21,
        (System_Action_T__o *)v22,
        (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_UserServantGrandEntity___);
    }
    newItems = (System_Collections_IEnumerable_o *)e->fields._newItems;
    if ( newItems )
    {
      v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                             newItems,
                                                             (const MethodInfo_317A3C4 *)Method_System_Linq_Enumerable_OfType_UserServantGrandEntity___);
      v25 = BasicHelper__ExcludeNull_object_(
              v24,
              (const MethodInfo_3134B28 *)Method_BasicHelper_ExcludeNull_UserServantGrandEntity___);
      v26 = (System_Action_object__o *)sub_1C715FC(System_Action_UserServantGrandEntity__TypeInfo);
      System_Action_object____ctor(
        v26,
        (Il2CppObject *)v4,
        Method_UserServantGrandMaster___c__DisplayClass0_0__OnListChangedImplementation_g__OnUpdate_0__,
        0);
      BasicHelper__ForEach_object_(
        v25,
        (System_Action_T__o *)v26,
        (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_UserServantGrandEntity___);
    }
  }
}


bool UserServantGrandMaster__TryGetEntity(
        UserServantGrandMaster_o *this,
        UserServantGrandEntity_o **entity,
        int64_t userId,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC8465 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__TryGetEntity__);
    byte_4CC8465 = 1;
  }
  PK = (Il2CppObject *)UserServantGrandEntity__CreatePK(userId, grandGraphId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__TryGetEntity__);
}


void UserServantGrandMaster___c__DisplayClass0_0___ctor(
        UserServantGrandMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserServantGrandMaster___c__DisplayClass0_0___OnListChangedImplementation_g__OnUpdate_0(
        UserServantGrandMaster___c__DisplayClass0_0_o *this,
        UserServantGrandEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity || (this = (UserServantGrandMaster___c__DisplayClass0_0_o *)this->fields.userServantMaster) == 0 )
    sub_1C71608(this, entity);
  UserServantMaster__ClearEntityCache((UserServantMaster_o *)this, entity->fields.userSvtId, method);
}


void UserServantGrandMaster___c__DisplayClass1_0___ctor(
        UserServantGrandMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserServantGrandMaster___c__DisplayClass1_0___IsSettingServant_b__0(
        UserServantGrandMaster___c__DisplayClass1_0_o *this,
        UserServantGrandEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.userSvtId == this->fields.userSvtId;
}


void UserServantGrandMaster___c__DisplayClass2_0___ctor(
        UserServantGrandMaster___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserServantGrandMaster___c__DisplayClass2_0___IsSettingEquip_b__0(
        UserServantGrandMaster___c__DisplayClass2_0_o *this,
        UserServantGrandEntity_o *x,
        const MethodInfo *method)
{
  UserServantGrandMaster___c__DisplayClass2_0_o *v4; // x19
  System_Int64_array *EquipUserServantIdList; // x0
  System_Func_long__bool__o *_9__1; // x22
  System_Int64_array *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  v4 = this;
  if ( (byte_4CC8466 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_long___);
    sub_1C713B0(&System_Func_long__bool__TypeInfo);
    this = (UserServantGrandMaster___c__DisplayClass2_0_o *)sub_1C713B0(&Method_UserServantGrandMaster___c__DisplayClass2_0__IsSettingEquip_b__1__);
    byte_4CC8466 = 1;
  }
  if ( !x )
    sub_1C71608(this, x);
  EquipUserServantIdList = UserServantGrandEntity__GetEquipUserServantIdList(x, 0);
  _9__1 = v4->fields.__9__1;
  v7 = EquipUserServantIdList;
  if ( !_9__1 )
  {
    _9__1 = (System_Func_long__bool__o *)sub_1C715FC(System_Func_long__bool__TypeInfo);
    System_Func_long__bool____ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_UserServantGrandMaster___c__DisplayClass2_0__IsSettingEquip_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  return BasicHelper__Any_long_(
           v7,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_3134138 *)Method_BasicHelper_Any_long___);
}


bool UserServantGrandMaster___c__DisplayClass2_0___IsSettingEquip_b__1(
        UserServantGrandMaster___c__DisplayClass2_0_o *this,
        int64_t y,
        const MethodInfo *method)
{
  return this->fields.userSvtId == y;
}


void UserServantGrandMaster___c__DisplayClass3_0___ctor(
        UserServantGrandMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserServantGrandMaster___c__DisplayClass3_0___GetFirstByUserSvtId_g__Condition_0(
        UserServantGrandMaster___c__DisplayClass3_0_o *this,
        UserServantGrandEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C71608(this, 0);
  return entity->fields.userSvtId == this->fields.userSvtId;
}


void UserServantGrandMaster___c__DisplayClass5_0___ctor(
        UserServantGrandMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserServantGrandMaster___c__DisplayClass5_0___GetEntityFromGrandGraphId_b__0(
        UserServantGrandMaster___c__DisplayClass5_0_o *this,
        UserServantGrandEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.grandGraphId == this->fields.grandGraphId;
}


void UserServantGrandMaster___c__DisplayClass6_0___ctor(
        UserServantGrandMaster___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserServantGrandMaster___c__DisplayClass6_0___GetEntityFromSvtId_b__0(
        UserServantGrandMaster___c__DisplayClass6_0_o *this,
        UserServantGrandEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.svtId == this->fields.svtId;
}


void UserServantGrandMaster___c__DisplayClass7_0___ctor(
        UserServantGrandMaster___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UserServantEntity_o *UserServantGrandMaster___c__DisplayClass7_0___GetUserServantEntities_b__0(
        UserServantGrandMaster___c__DisplayClass7_0_o *this,
        UserServantGrandEntity_o *e,
        const MethodInfo *method)
{
  UserServantGrandMaster___c__DisplayClass7_0_o *v4; // x20
  int64_t userSvtId; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4CC8467 & 1) == 0 )
  {
    this = (UserServantGrandMaster___c__DisplayClass7_0_o *)sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    byte_4CC8467 = 1;
  }
  entity = 0;
  if ( !e )
    goto LABEL_11;
  userSvtId = e->fields.userSvtId;
  if ( !userSvtId )
    return 0;
  this = (UserServantGrandMaster___c__DisplayClass7_0_o *)v4->fields.master;
  if ( !this )
LABEL_11:
    sub_1C71608(this, e);
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         userSvtId,
         (const MethodInfo_340B428 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    return (UserServantEntity_o *)entity;
  }
  else
  {
    return 0;
  }
}