void __fastcall ClassBoardLineMaster___ctor(ClassBoardLineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AEF6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string___ctor__);
    byte_4A5AEF6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    427,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string___ctor__);
}


ClassBoardLineEntity_array *__fastcall ClassBoardLineMaster__GetAllEntity(
        ClassBoardLineMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *AllEntityEnumerable; // x0

  if ( (byte_4A5AEF4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_ClassBoardLineEntity___);
    byte_4A5AEF4 = 1;
  }
  AllEntityEnumerable = ClassBoardLineMaster__GetAllEntityEnumerable(this, baseId, method);
  return (ClassBoardLineEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)AllEntityEnumerable,
                                         (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLineEntity___);
}


System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *__fastcall ClassBoardLineMaster__GetAllEntityEnumerable(
        ClassBoardLineMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4A5AEF5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_getEntitys_ClassBoardLineEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_ClassBoardLineEntity___);
    sub_1B885B0(&System_Func_ClassBoardLineEntity__bool__TypeInfo);
    sub_1B885B0(&Method_ClassBoardLineMaster___c__DisplayClass1_0__GetAllEntityEnumerable_b__0__);
    sub_1B885B0(&ClassBoardLineMaster___c__DisplayClass1_0_TypeInfo);
    byte_4A5AEF5 = 1;
  }
  v5 = sub_1B887FC(ClassBoardLineMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = baseId;
  Entitys_object = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_object_(
                                                                          (DataMasterBase_o *)this,
                                                                          (const MethodInfo_2E8019C *)Method_DataMasterBase_getEntitys_ClassBoardLineEntity___);
  v9 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ClassBoardLineEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ClassBoardLineMaster___c__DisplayClass1_0__GetAllEntityEnumerable_b__0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                             Entitys_object,
                                                                             (System_Func_TSource__bool__o *)v9,
                                                                             (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_ClassBoardLineEntity___);
}


ClassBoardLineEntity_o *__fastcall ClassBoardLineMaster__GetEntity(
        ClassBoardLineMaster_o *this,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5AEF7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__GetEntity__);
    byte_4A5AEF7 = 1;
  }
  PK = (Il2CppObject *)ClassBoardLineEntity__CreatePK(classBoardBaseId, id, 0LL);
  return (ClassBoardLineEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_311DC8C *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__GetEntity__);
}


bool __fastcall ClassBoardLineMaster__TryGetEntity(
        ClassBoardLineMaster_o *this,
        ClassBoardLineEntity_o **entity,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5AEF8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__TryGetEntity__);
    byte_4A5AEF8 = 1;
  }
  PK = (Il2CppObject *)ClassBoardLineEntity__CreatePK(classBoardBaseId, id, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__TryGetEntity__);
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
    sub_1B8880C(this, 0LL);
  return x->fields.classBoardBaseId == this->fields.baseId;
}