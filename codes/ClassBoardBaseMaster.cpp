void __fastcall ClassBoardBaseMaster___ctor(ClassBoardBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C27B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int___ctor__, method);
    byte_4B1C27B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    432,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ClassBoardBaseMaster__GetBaseIdFromGrandGraphId(
        ClassBoardBaseMaster_o *this,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *v11; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B1C27A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_GrandGraphMaster___, *(_QWORD *)&grandGraphId);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v6);
    sub_1BCAFF8(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__, v7);
    byte_4B1C27A = 1;
  }
  entity = 0LL;
  v11 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !Master_object )
    goto LABEL_12;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    grandGraphId,
                                    (const MethodInfo_32C7E4C *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
    {
      Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        &v11,
                                        (int32_t)entity[3].klass,
                                        (const MethodInfo_32C7E4C *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      if ( v11 )
        return (int32_t)v11[4].monitor;
    }
LABEL_12:
    sub_1BCB254(Master_object, v9);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
ClassBoardBaseEntity_o *__fastcall ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
        ClassBoardBaseMaster_o *this,
        int32_t parentClassBoardBaseId,
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

  if ( (byte_4B1C279 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardBaseEntity___,
      *(_QWORD *)&parentClassBoardBaseId);
    sub_1BCAFF8(&System_Func_ClassBoardBaseEntity__bool__TypeInfo, v5);
    sub_1BCAFF8(&Method_ClassBoardBaseMaster___c__DisplayClass0_0__GetGrandClassBoardBaseEntity_b__0__, v6);
    sub_1BCAFF8(&ClassBoardBaseMaster___c__DisplayClass0_0_TypeInfo, v7);
    byte_4B1C279 = 1;
  }
  v8 = sub_1BCB244(ClassBoardBaseMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BCB254(v9, v10);
  *(_DWORD *)(v8 + 16) = parentClassBoardBaseId;
  list = this->fields.list;
  v12 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_ClassBoardBaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_ClassBoardBaseMaster___c__DisplayClass0_0__GetGrandClassBoardBaseEntity_b__0__,
    0LL);
  return (ClassBoardBaseEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50595188(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                     (System_Func_TSource__bool__o *)v12,
                                     (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardBaseEntity___);
}


void __fastcall ClassBoardBaseMaster___c__DisplayClass0_0___ctor(
        ClassBoardBaseMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardBaseMaster___c__DisplayClass0_0___GetGrandClassBoardBaseEntity_b__0(
        ClassBoardBaseMaster___c__DisplayClass0_0_o *this,
        ClassBoardBaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCB254(this, 0LL);
  return e->fields.parentClassBoardBaseId == this->fields.parentClassBoardBaseId;
}