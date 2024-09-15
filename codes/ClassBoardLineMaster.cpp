void __fastcall ClassBoardLineMaster___ctor(ClassBoardLineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2DCD8 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string___ctor__, method);
    byte_4A2DCD8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    427,
    (const MethodInfo_30FFA98 *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardLineEntity_array *__fastcall ClassBoardLineMaster__GetAllEntity(
        ClassBoardLineMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *AllEntityEnumerable; // x0

  if ( (byte_4A2DCD6 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Linq_Enumerable_ToArray_ClassBoardLineEntity___, *(_QWORD *)&baseId);
    byte_4A2DCD6 = 1;
  }
  AllEntityEnumerable = ClassBoardLineMaster__GetAllEntityEnumerable(this, baseId, method);
  return (ClassBoardLineEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)AllEntityEnumerable,
                                         (const MethodInfo_2E9AEA4 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLineEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *__fastcall ClassBoardLineMaster__GetAllEntityEnumerable(
        ClassBoardLineMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_4A2DCD7 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_getEntitys_ClassBoardLineEntity___, *(_QWORD *)&baseId);
    sub_1B761C0(&Method_System_Linq_Enumerable_Where_ClassBoardLineEntity___, v5);
    sub_1B761C0(&System_Func_ClassBoardLineEntity__bool__TypeInfo, v6);
    sub_1B761C0(&Method_ClassBoardLineMaster___c__DisplayClass1_0__GetAllEntityEnumerable_b__0__, v7);
    sub_1B761C0(&ClassBoardLineMaster___c__DisplayClass1_0_TypeInfo, v8);
    byte_4A2DCD7 = 1;
  }
  v9 = sub_1B7640C(ClassBoardLineMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B7641C(v10, v11);
  *(_DWORD *)(v9 + 16) = baseId;
  Entitys_object = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_object_(
                                                                          (DataMasterBase_o *)this,
                                                                          (const MethodInfo_2E62C9C *)Method_DataMasterBase_getEntitys_ClassBoardLineEntity___);
  v13 = (System_Func_object__bool__o *)sub_1B7640C(System_Func_ClassBoardLineEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_ClassBoardLineMaster___c__DisplayClass1_0__GetAllEntityEnumerable_b__0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                             Entitys_object,
                                                                             (System_Func_TSource__bool__o *)v13,
                                                                             (const MethodInfo_2EA0B7C *)Method_System_Linq_Enumerable_Where_ClassBoardLineEntity___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardLineEntity_o *__fastcall ClassBoardLineMaster__GetEntity(
        ClassBoardLineMaster_o *this,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A2DCD9 & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__GetEntity__,
      *(_QWORD *)&classBoardBaseId);
    byte_4A2DCD9 = 1;
  }
  PK = (Il2CppObject *)ClassBoardLineEntity__CreatePK(classBoardBaseId, id, 0LL);
  return (ClassBoardLineEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_30FFAD8 *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__GetEntity__);
}


bool __fastcall ClassBoardLineMaster__TryGetEntity(
        ClassBoardLineMaster_o *this,
        ClassBoardLineEntity_o **entity,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A2DCDA & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__TryGetEntity__, entity);
    byte_4A2DCDA = 1;
  }
  PK = (Il2CppObject *)ClassBoardLineEntity__CreatePK(classBoardBaseId, id, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30FFB28 *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__TryGetEntity__);
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
    sub_1B7641C(this, 0LL);
  return x->fields.classBoardBaseId == this->fields.baseId;
}