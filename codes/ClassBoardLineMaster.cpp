void __fastcall ClassBoardLineMaster___ctor(ClassBoardLineMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15F86 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string___ctor__, method, v2);
    byte_4B15F86 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    427,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardLineEntity_array *__fastcall ClassBoardLineMaster__GetAllEntity(
        ClassBoardLineMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *AllEntityEnumerable; // x0

  if ( (byte_4B15F84 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_ClassBoardLineEntity___, *(_QWORD *)&baseId, method);
    byte_4B15F84 = 1;
  }
  AllEntityEnumerable = ClassBoardLineMaster__GetAllEntityEnumerable(this, baseId, method);
  return (ClassBoardLineEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)AllEntityEnumerable,
                                         (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLineEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *__fastcall ClassBoardLineMaster__GetAllEntityEnumerable(
        ClassBoardLineMaster_o *this,
        int32_t baseId,
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
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Func_object__bool__o *v21; // x20

  if ( (byte_4B15F85 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_ClassBoardLineEntity___, *(_QWORD *)&baseId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_ClassBoardLineEntity___, v6, v7);
    sub_1BCA7E0(&System_Func_ClassBoardLineEntity__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_ClassBoardLineMaster___c__DisplayClass1_0__GetAllEntityEnumerable_b__0__, v10, v11);
    sub_1BCA7E0(&ClassBoardLineMaster___c__DisplayClass1_0_TypeInfo, v12, v13);
    byte_4B15F85 = 1;
  }
  v14 = sub_1BCAA2C(ClassBoardLineMaster___c__DisplayClass1_0_TypeInfo, *(_QWORD *)&baseId, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_DWORD *)(v14 + 16) = baseId;
  Entitys_object = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_object_(
                                                                          (DataMasterBase_o *)this,
                                                                          (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_ClassBoardLineEntity___);
  v21 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ClassBoardLineEntity__bool__TypeInfo, v18, v19, v20);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v14,
    Method_ClassBoardLineMaster___c__DisplayClass1_0__GetAllEntityEnumerable_b__0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                             Entitys_object,
                                                                             (System_Func_TSource__bool__o *)v21,
                                                                             (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_ClassBoardLineEntity___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardLineEntity_o *__fastcall ClassBoardLineMaster__GetEntity(
        ClassBoardLineMaster_o *this,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B15F87 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__GetEntity__,
      *(_QWORD *)&classBoardBaseId,
      *(_QWORD *)&id);
    byte_4B15F87 = 1;
  }
  PK = (Il2CppObject *)ClassBoardLineEntity__CreatePK(classBoardBaseId, id, 0LL);
  return (ClassBoardLineEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_31B3198 *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardLineMaster__TryGetEntity(
        ClassBoardLineMaster_o *this,
        ClassBoardLineEntity_o **entity,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B15F88 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&classBoardBaseId);
    byte_4B15F88 = 1;
  }
  PK = (Il2CppObject *)ClassBoardLineEntity__CreatePK(classBoardBaseId, id, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__TryGetEntity__);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.classBoardBaseId == this->fields.baseId;
}