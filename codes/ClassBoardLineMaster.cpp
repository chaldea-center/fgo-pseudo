void __fastcall ClassBoardLineMaster___ctor(ClassBoardLineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC2C6 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string___ctor__);
    byte_4BDC2C6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    431,
    (const MethodInfo_325E55C *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string___ctor__);
}


ClassBoardLineEntity_array *__fastcall ClassBoardLineMaster__GetAllEntity(
        ClassBoardLineMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *AllEntityEnumerable; // x0

  if ( (byte_4BDC2C4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_ClassBoardLineEntity___);
    byte_4BDC2C4 = 1;
  }
  AllEntityEnumerable = ClassBoardLineMaster__GetAllEntityEnumerable(this, baseId, method);
  return (ClassBoardLineEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)AllEntityEnumerable,
                                         (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLineEntity___);
}


System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *__fastcall ClassBoardLineMaster__GetAllEntityEnumerable(
        ClassBoardLineMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  System_Func_object__bool__o *v10; // x20

  if ( (byte_4BDC2C5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__getEntitys_ClassBoardLineEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_ClassBoardLineEntity___);
    sub_1C21E38(&System_Func_ClassBoardLineEntity__bool__TypeInfo);
    sub_1C21E38(&Method_ClassBoardLineMaster___c__DisplayClass1_0__GetAllEntityEnumerable_b__0__);
    sub_1C21E38(&ClassBoardLineMaster___c__DisplayClass1_0_TypeInfo);
    byte_4BDC2C5 = 1;
  }
  v5 = sub_1C22084(ClassBoardLineMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_DWORD *)(v5 + 16) = baseId;
  v8 = sub_1C21F6C(*((_QWORD *)&this->klass->vtable._1_Finalize.methodPtr
                   + 2
                   * *((unsigned __int16 *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__getEntitys_ClassBoardLineEntity___
                     + 40)));
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(ClassBoardLineMaster_o *, __int64))(v8 + 8))(
                                                              this,
                                                              v8);
  v10 = (System_Func_object__bool__o *)sub_1C22084(System_Func_ClassBoardLineEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ClassBoardLineMaster___c__DisplayClass1_0__GetAllEntityEnumerable_b__0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                             v9,
                                                                             (System_Func_TSource__bool__o *)v10,
                                                                             (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_ClassBoardLineEntity___);
}


ClassBoardLineEntity_o *__fastcall ClassBoardLineMaster__GetEntity(
        ClassBoardLineMaster_o *this,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDC2C7 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__GetEntity__);
    byte_4BDC2C7 = 1;
  }
  PK = (Il2CppObject *)ClassBoardLineEntity__CreatePK(classBoardBaseId, id, 0LL);
  return (ClassBoardLineEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_3260880 *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__GetEntity__);
}


bool __fastcall ClassBoardLineMaster__TryGetEntity(
        ClassBoardLineMaster_o *this,
        ClassBoardLineEntity_o **entity,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BDC2C8 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__TryGetEntity__);
    byte_4BDC2C8 = 1;
  }
  PK = (Il2CppObject *)ClassBoardLineEntity__CreatePK(classBoardBaseId, id, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__TryGetEntity__);
}


void __fastcall ClassBoardLineMaster___c__DisplayClass1_0___ctor(
        ClassBoardLineMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardLineMaster___c__DisplayClass1_0___GetAllEntityEnumerable_b__0(
        ClassBoardLineMaster___c__DisplayClass1_0_o *this,
        ClassBoardLineEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.classBoardBaseId == this->fields.baseId;
}