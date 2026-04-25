void ClassBoardLineMaster___ctor(ClassBoardLineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4E047A0 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string___ctor__);
    byte_4E047A0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    433,
    (const MethodInfo_34EBC44 *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string___ctor__);
}


ClassBoardLineEntity_array *ClassBoardLineMaster__GetAllEntity(
        ClassBoardLineMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *AllEntityEnumerable; // x0

  if ( (byte_4E0479E & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_ClassBoardLineEntity___);
    byte_4E0479E = 1;
  }
  AllEntityEnumerable = ClassBoardLineMaster__GetAllEntityEnumerable(this, baseId, method);
  return (ClassBoardLineEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)AllEntityEnumerable,
                                         (const MethodInfo_32438A8 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLineEntity___);
}


System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *ClassBoardLineMaster__GetAllEntityEnumerable(
        ClassBoardLineMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4E0479F & 1) == 0 )
  {
    sub_1CE6700(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__getEntityList__);
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_ClassBoardLineEntity___);
    sub_1CE6700(&System_Func_ClassBoardLineEntity__bool__TypeInfo);
    sub_1CE6700(&Method_ClassBoardLineMaster___c__DisplayClass1_0__GetAllEntityEnumerable_b__0__);
    sub_1CE6700(&ClassBoardLineMaster___c__DisplayClass1_0_TypeInfo);
    byte_4E0479F = 1;
  }
  v5 = sub_1CE694C(ClassBoardLineMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1CE6958(v6, v7);
  *(_DWORD *)(v5 + 16) = baseId;
  list = this->fields.list;
  v9 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_ClassBoardLineEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ClassBoardLineMaster___c__DisplayClass1_0__GetAllEntityEnumerable_b__0__,
    0);
  return (System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                             (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                                             (System_Func_TSource__bool__o *)v9,
                                                                             (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_ClassBoardLineEntity___);
}


ClassBoardLineEntity_o *ClassBoardLineMaster__GetEntity(
        ClassBoardLineMaster_o *this,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4E047A1 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__GetEntity__);
    byte_4E047A1 = 1;
  }
  PK = (Il2CppObject *)ClassBoardLineEntity__CreatePK(classBoardBaseId, id, 0);
  return (ClassBoardLineEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_34EE1BC *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__GetEntity__);
}


bool ClassBoardLineMaster__TryGetEntity(
        ClassBoardLineMaster_o *this,
        ClassBoardLineEntity_o **entity,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4E047A2 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__TryGetEntity__);
    byte_4E047A2 = 1;
  }
  PK = (Il2CppObject *)ClassBoardLineEntity__CreatePK(classBoardBaseId, id, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_34EE208 *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__TryGetEntity__);
}


void ClassBoardLineMaster___c__DisplayClass1_0___ctor(
        ClassBoardLineMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardLineMaster___c__DisplayClass1_0___GetAllEntityEnumerable_b__0(
        ClassBoardLineMaster___c__DisplayClass1_0_o *this,
        ClassBoardLineEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return x->fields.classBoardBaseId == this->fields.baseId;
}