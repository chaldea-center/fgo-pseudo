void __fastcall GrandGraphMaster___ctor(GrandGraphMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C85C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int___ctor__, method);
    byte_4B1C85C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    549,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GrandGraphEntity_o *__fastcall GrandGraphMaster__GetEntityByClassBoardBaseId(
        GrandGraphMaster_o *this,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4B1C85A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_GrandGraphEntity___, *(_QWORD *)&classBoardBaseId);
    sub_1BCAFF8(&System_Func_GrandGraphEntity__bool__TypeInfo, v5);
    sub_1BCAFF8(&Method_GrandGraphMaster___c__DisplayClass1_0__GetEntityByClassBoardBaseId_b__0__, v6);
    sub_1BCAFF8(&GrandGraphMaster___c__DisplayClass1_0_TypeInfo, v7);
    byte_4B1C85A = 1;
  }
  v8 = sub_1BCB244(GrandGraphMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BCB254(v9, v10);
  *(_DWORD *)(v8 + 16) = classBoardBaseId;
  list = this->fields.list;
  v12 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GrandGraphEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_GrandGraphMaster___c__DisplayClass1_0__GetEntityByClassBoardBaseId_b__0__,
    0LL);
  return (GrandGraphEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50595188(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                 (System_Func_TSource__bool__o *)v12,
                                 (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_GrandGraphEntity___);
}


// local variable allocation has failed, the output may be wrong!
GrandGraphEntity_o *__fastcall GrandGraphMaster__GetEntityByParentClassBoardBaseId(
        GrandGraphMaster_o *this,
        int32_t parentClassBoardBaseId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  ClassBoardBaseMaster_o *Master_object; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v16; // x20

  if ( (byte_4B1C859 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, *(_QWORD *)&parentClassBoardBaseId);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_GrandGraphEntity___, v6);
    sub_1BCAFF8(&System_Func_GrandGraphEntity__bool__TypeInfo, v7);
    sub_1BCAFF8(&Method_GrandGraphMaster___c__DisplayClass0_0__GetEntityByParentClassBoardBaseId_b__0__, v8);
    sub_1BCAFF8(&GrandGraphMaster___c__DisplayClass0_0_TypeInfo, v9);
    byte_4B1C859 = 1;
  }
  v10 = sub_1BCB244(GrandGraphMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardBaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object
    || (Master_object = (ClassBoardBaseMaster_o *)ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                                    Master_object,
                                                    parentClassBoardBaseId,
                                                    0LL),
        !v10) )
  {
    sub_1BCB254(Master_object, v12);
  }
  *(_QWORD *)(v10 + 16) = Master_object;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)Master_object, v13, v14);
  if ( !*(_QWORD *)(v10 + 16) )
    return 0LL;
  list = this->fields.list;
  v16 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GrandGraphEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v10,
    Method_GrandGraphMaster___c__DisplayClass0_0__GetEntityByParentClassBoardBaseId_b__0__,
    0LL);
  return (GrandGraphEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50595188(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                 (System_Func_TSource__bool__o *)v16,
                                 (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_GrandGraphEntity___);
}


// local variable allocation has failed, the output may be wrong!
GrandGraphEntity_o *__fastcall GrandGraphMaster__GetEntityBySvtId(
        GrandGraphMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  GrandGraphEntity_o *v13; // [xsp+0h] [xbp-40h] BYREF
  GrandGraphDetailEntity_o *v14; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B1C85B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_GrandGraphDetailMaster___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7);
    sub_1BCAFF8(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__, v8);
    byte_4B1C85B = 1;
  }
  entity = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_18;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          svtId,
          (const MethodInfo_32C7E4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !entity || !Master_object )
LABEL_18:
    sub_1BCB254(Master_object, v10);
  Master_object = (Il2CppObject *)GrandGraphDetailMaster__TryGetEntityByBaseClassId(
                                    (GrandGraphDetailMaster_o *)Master_object,
                                    &v14,
                                    (int32_t)entity[5].klass,
                                    v11);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0LL;
  if ( !v14 )
    goto LABEL_18;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         (Il2CppObject **)&v13,
         v14->fields.grandGraphId,
         (const MethodInfo_32C7E4C *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__) )
  {
    return v13;
  }
  else
  {
    return 0LL;
  }
}


void __fastcall GrandGraphMaster___c__DisplayClass0_0___ctor(
        GrandGraphMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandGraphMaster___c__DisplayClass0_0___GetEntityByParentClassBoardBaseId_b__0(
        GrandGraphMaster___c__DisplayClass0_0_o *this,
        GrandGraphEntity_o *e,
        const MethodInfo *method)
{
  struct ClassBoardBaseEntity_o *classBoardBaseEntity; // x8

  if ( !e || (classBoardBaseEntity = this->fields.classBoardBaseEntity) == 0LL )
    sub_1BCB254(this, e);
  return e->fields.classBoardBaseId == classBoardBaseEntity->fields.id;
}


void __fastcall GrandGraphMaster___c__DisplayClass1_0___ctor(
        GrandGraphMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandGraphMaster___c__DisplayClass1_0___GetEntityByClassBoardBaseId_b__0(
        GrandGraphMaster___c__DisplayClass1_0_o *this,
        GrandGraphEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCB254(this, 0LL);
  return e->fields.classBoardBaseId == this->fields.classBoardBaseId;
}