void __fastcall UserServantGrandMaster___ctor(UserServantGrandMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02FFB & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string___ctor__, method);
    byte_4B02FFB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    548,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantGrandEntity_o *__fastcall UserServantGrandMaster__GetEntity(
        UserServantGrandMaster_o *this,
        int64_t userId,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B02FFC & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__GetEntity__, userId);
    byte_4B02FFC = 1;
  }
  PK = (Il2CppObject *)UserServantGrandEntity__CreatePK(userId, grandGraphId, *(const MethodInfo **)&grandGraphId);
  return (UserServantGrandEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_32B3B28 *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserServantGrandEntity_o *__fastcall UserServantGrandMaster__GetEntityFromGrandGraphId(
        UserServantGrandMaster_o *this,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_4B02FFA & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__,
      *(_QWORD *)&grandGraphId);
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantGrandEntity___, v5);
    sub_1BC3008(&System_Func_UserServantGrandEntity__bool__TypeInfo, v6);
    sub_1BC3008(&Method_UserServantGrandMaster___c__DisplayClass5_0__GetEntityFromGrandGraphId_b__0__, v7);
    sub_1BC3008(&UserServantGrandMaster___c__DisplayClass5_0_TypeInfo, v8);
    byte_4B02FFA = 1;
  }
  v9 = sub_1BC3254(UserServantGrandMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BC3264(v10, v11);
  *(_DWORD *)(v9 + 16) = grandGraphId;
  Entitys = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__object___getEntitys(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                   (const MethodInfo_32B2DAC *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  v13 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_UserServantGrandEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_UserServantGrandMaster___c__DisplayClass5_0__GetEntityFromGrandGraphId_b__0__,
    0LL);
  return (UserServantGrandEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50493748(
                                       Entitys,
                                       (System_Func_TSource__bool__o *)v13,
                                       (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantGrandEntity___);
}


UserServantGrandEntity_o *__fastcall UserServantGrandMaster__GetFirstByUserSvtId(
        UserServantGrandMaster_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_4B02FF9 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntityList__,
      userSvtId);
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantGrandEntity___, v5);
    sub_1BC3008(&System_Func_UserServantGrandEntity__bool__TypeInfo, v6);
    sub_1BC3008(&Method_UserServantGrandMaster___c__DisplayClass3_0__GetFirstByUserSvtId_g__Condition_0__, v7);
    sub_1BC3008(&UserServantGrandMaster___c__DisplayClass3_0_TypeInfo, v8);
    byte_4B02FF9 = 1;
  }
  v9 = (Il2CppObject *)sub_1BC3254(UserServantGrandMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    sub_1BC3264(v10, v11);
  v9[1].klass = (Il2CppClass *)userSvtId;
  if ( userSvtId < 1 )
    return 0LL;
  list = this->fields.list;
  v13 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_UserServantGrandEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    v9,
    Method_UserServantGrandMaster___c__DisplayClass3_0__GetFirstByUserSvtId_g__Condition_0__,
    0LL);
  return (UserServantGrandEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50493748(
                                       (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                       (System_Func_TSource__bool__o *)v13,
                                       (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantGrandEntity___);
}


bool __fastcall UserServantGrandMaster__IsSettingEquip(
        UserServantGrandMaster_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Object_array *Entitys; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_4B02FF8 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_UserServantGrandEntity___, userSvtId);
    sub_1BC3008(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__, v5);
    sub_1BC3008(&System_Func_UserServantGrandEntity__bool__TypeInfo, v6);
    sub_1BC3008(&Method_UserServantGrandMaster___c__DisplayClass2_0__IsSettingEquip_b__0__, v7);
    sub_1BC3008(&UserServantGrandMaster___c__DisplayClass2_0_TypeInfo, v8);
    byte_4B02FF8 = 1;
  }
  v9 = (Il2CppObject *)sub_1BC3254(UserServantGrandMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    sub_1BC3264(v10, v11);
  v9[1].klass = (Il2CppClass *)userSvtId;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              (const MethodInfo_32B2DAC *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  v13 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_UserServantGrandEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    v9,
    Method_UserServantGrandMaster___c__DisplayClass2_0__IsSettingEquip_b__0__,
    0LL);
  return BasicHelper__Any_object__50246536(
           Entitys,
           (System_Func_T__bool__o *)v13,
           (const MethodInfo_2FEB388 *)Method_BasicHelper_Any_UserServantGrandEntity___);
}


bool __fastcall UserServantGrandMaster__IsSettingServant(
        UserServantGrandMaster_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Object_array *Entitys; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_4B02FF7 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_UserServantGrandEntity___, userSvtId);
    sub_1BC3008(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__, v5);
    sub_1BC3008(&System_Func_UserServantGrandEntity__bool__TypeInfo, v6);
    sub_1BC3008(&Method_UserServantGrandMaster___c__DisplayClass1_0__IsSettingServant_b__0__, v7);
    sub_1BC3008(&UserServantGrandMaster___c__DisplayClass1_0_TypeInfo, v8);
    byte_4B02FF7 = 1;
  }
  v9 = (Il2CppObject *)sub_1BC3254(UserServantGrandMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    sub_1BC3264(v10, v11);
  v9[1].klass = (Il2CppClass *)userSvtId;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              (const MethodInfo_32B2DAC *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  v13 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_UserServantGrandEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    v9,
    Method_UserServantGrandMaster___c__DisplayClass1_0__IsSettingServant_b__0__,
    0LL);
  return BasicHelper__Any_object__50246536(
           Entitys,
           (System_Func_T__bool__o *)v13,
           (const MethodInfo_2FEB388 *)Method_BasicHelper_Any_UserServantGrandEntity___);
}


bool __fastcall UserServantGrandMaster__IsValidUserSvtId(int64_t userSvtId, const MethodInfo *method)
{
  return userSvtId > 0;
}


void __fastcall UserServantGrandMaster__OnListChangedImplementation(
        UserServantGrandMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  unsigned int action; // w8
  bool v17; // cf
  unsigned int v18; // w8
  __int64 v19; // x0
  System_NotImplementedException_o *v20; // x19
  __int64 v21; // x0
  System_Collections_IEnumerable_o *oldItems; // x0
  System_Collections_Generic_IEnumerable_T__o *v23; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x21
  System_Action_object__o *v25; // x22
  System_Collections_IEnumerable_o *newItems; // x0
  System_Collections_Generic_IEnumerable_T__o *v27; // x0
  System_Collections_Generic_IEnumerable_T__o *v28; // x19
  System_Action_object__o *v29; // x21

  if ( (byte_4B02FF6 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_UserServantGrandEntity__TypeInfo, e);
    sub_1BC3008(&Method_BasicHelper_ExcludeNull_UserServantGrandEntity___, v4);
    sub_1BC3008(&Method_BasicHelper_ForEach_UserServantGrandEntity___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_System_Linq_Enumerable_OfType_UserServantGrandEntity___, v8);
    sub_1BC3008(&Method_UserServantGrandMaster___c__DisplayClass0_0__OnListChangedImplementation_g__OnUpdate_0__, v9);
    sub_1BC3008(&UserServantGrandMaster___c__DisplayClass0_0_TypeInfo, v10);
    byte_4B02FF6 = 1;
  }
  v11 = sub_1BC3254(UserServantGrandMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v11
    || (*(_QWORD *)(v11 + 16) = Master_object,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)Master_object, v14, v15),
        !e) )
  {
    sub_1BC3264(Master_object, v13);
  }
  action = e->fields._action;
  v17 = action >= 3;
  v18 = action - 3;
  if ( v17 )
  {
    if ( v18 > 1 )
    {
      v19 = sub_1BC301C(&System_NotImplementedException_TypeInfo);
      v20 = (System_NotImplementedException_o *)sub_1BC3254(v19);
      System_NotImplementedException___ctor(v20, 0LL);
      v21 = sub_1BC301C(&Method_UserServantGrandMaster_OnListChangedImplementation__);
      sub_1BC3130(v20, v21);
    }
  }
  else
  {
    oldItems = (System_Collections_IEnumerable_o *)e->fields._oldItems;
    if ( oldItems )
    {
      v23 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                             oldItems,
                                                             (const MethodInfo_302D068 *)Method_System_Linq_Enumerable_OfType_UserServantGrandEntity___);
      v24 = BasicHelper__ExcludeNull_object_(
              v23,
              (const MethodInfo_2FEBC30 *)Method_BasicHelper_ExcludeNull_UserServantGrandEntity___);
      v25 = (System_Action_object__o *)sub_1BC3254(System_Action_UserServantGrandEntity__TypeInfo);
      System_Action_object____ctor(
        v25,
        (Il2CppObject *)v11,
        Method_UserServantGrandMaster___c__DisplayClass0_0__OnListChangedImplementation_g__OnUpdate_0__,
        0LL);
      BasicHelper__ForEach_object_(
        v24,
        (System_Action_T__o *)v25,
        (const MethodInfo_2FEDEFC *)Method_BasicHelper_ForEach_UserServantGrandEntity___);
    }
    newItems = (System_Collections_IEnumerable_o *)e->fields._newItems;
    if ( newItems )
    {
      v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                             newItems,
                                                             (const MethodInfo_302D068 *)Method_System_Linq_Enumerable_OfType_UserServantGrandEntity___);
      v28 = BasicHelper__ExcludeNull_object_(
              v27,
              (const MethodInfo_2FEBC30 *)Method_BasicHelper_ExcludeNull_UserServantGrandEntity___);
      v29 = (System_Action_object__o *)sub_1BC3254(System_Action_UserServantGrandEntity__TypeInfo);
      System_Action_object____ctor(
        v29,
        (Il2CppObject *)v11,
        Method_UserServantGrandMaster___c__DisplayClass0_0__OnListChangedImplementation_g__OnUpdate_0__,
        0LL);
      BasicHelper__ForEach_object_(
        v28,
        (System_Action_T__o *)v29,
        (const MethodInfo_2FEDEFC *)Method_BasicHelper_ForEach_UserServantGrandEntity___);
    }
  }
}


bool __fastcall UserServantGrandMaster__TryGetEntity(
        UserServantGrandMaster_o *this,
        UserServantGrandEntity_o **entity,
        int64_t userId,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B02FFD & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__TryGetEntity__, entity);
    byte_4B02FFD = 1;
  }
  PK = (Il2CppObject *)UserServantGrandEntity__CreatePK(userId, grandGraphId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__TryGetEntity__);
}


void __fastcall UserServantGrandMaster___c__DisplayClass0_0___ctor(
        UserServantGrandMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserServantGrandMaster___c__DisplayClass0_0___OnListChangedImplementation_g__OnUpdate_0(
        UserServantGrandMaster___c__DisplayClass0_0_o *this,
        UserServantGrandEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity || (this = (UserServantGrandMaster___c__DisplayClass0_0_o *)this->fields.userServantMaster) == 0LL )
    sub_1BC3264(this, entity);
  UserServantMaster__ClearEntityCache((UserServantMaster_o *)this, entity->fields.userSvtId, method);
}


void __fastcall UserServantGrandMaster___c__DisplayClass1_0___ctor(
        UserServantGrandMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantGrandMaster___c__DisplayClass1_0___IsSettingServant_b__0(
        UserServantGrandMaster___c__DisplayClass1_0_o *this,
        UserServantGrandEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.userSvtId == this->fields.userSvtId;
}


void __fastcall UserServantGrandMaster___c__DisplayClass2_0___ctor(
        UserServantGrandMaster___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantGrandMaster___c__DisplayClass2_0___IsSettingEquip_b__0(
        UserServantGrandMaster___c__DisplayClass2_0_o *this,
        UserServantGrandEntity_o *x,
        const MethodInfo *method)
{
  UserServantGrandMaster___c__DisplayClass2_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Int64_array *EquipUserServantIdList; // x0
  System_Func_long__bool__o *_9__1; // x22
  System_Int64_array *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  v4 = this;
  if ( (byte_4B02FFE & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_long___, x);
    sub_1BC3008(&System_Func_long__bool__TypeInfo, v5);
    this = (UserServantGrandMaster___c__DisplayClass2_0_o *)sub_1BC3008(
                                                              &Method_UserServantGrandMaster___c__DisplayClass2_0__IsSettingEquip_b__1__,
                                                              v6);
    byte_4B02FFE = 1;
  }
  if ( !x )
    sub_1BC3264(this, x);
  EquipUserServantIdList = UserServantGrandEntity__GetEquipUserServantIdList(x, (const MethodInfo *)x);
  _9__1 = v4->fields.__9__1;
  v9 = EquipUserServantIdList;
  if ( !_9__1 )
  {
    _9__1 = (System_Func_long__bool__o *)sub_1BC3254(System_Func_long__bool__TypeInfo);
    System_Func_long__bool____ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_UserServantGrandMaster___c__DisplayClass2_0__IsSettingEquip_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  return BasicHelper__Any_long_(
           v9,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_2FEB240 *)Method_BasicHelper_Any_long___);
}


bool __fastcall UserServantGrandMaster___c__DisplayClass2_0___IsSettingEquip_b__1(
        UserServantGrandMaster___c__DisplayClass2_0_o *this,
        int64_t y,
        const MethodInfo *method)
{
  return this->fields.userSvtId == y;
}


void __fastcall UserServantGrandMaster___c__DisplayClass3_0___ctor(
        UserServantGrandMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantGrandMaster___c__DisplayClass3_0___GetFirstByUserSvtId_g__Condition_0(
        UserServantGrandMaster___c__DisplayClass3_0_o *this,
        UserServantGrandEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BC3264(this, 0LL);
  return entity->fields.userSvtId == this->fields.userSvtId;
}


void __fastcall UserServantGrandMaster___c__DisplayClass5_0___ctor(
        UserServantGrandMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantGrandMaster___c__DisplayClass5_0___GetEntityFromGrandGraphId_b__0(
        UserServantGrandMaster___c__DisplayClass5_0_o *this,
        UserServantGrandEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.grandGraphId == this->fields.grandGraphId;
}