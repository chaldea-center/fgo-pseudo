void ClassBoardSquareMaster___ctor(ClassBoardSquareMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59383F8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string___ctor__);
    byte_59383F8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    437,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string___ctor__);
}


ClassBoardSquareEntity_array *ClassBoardSquareMaster__GetAllEntity(
        ClassBoardSquareMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_ClassBoardSquareEntity__bool__c *v9; // x0
  System_Func_object__bool__o *v10; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0

  if ( (byte_59383F6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__getEntityList__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
    sub_21FFC50(&System_Func_ClassBoardSquareEntity__bool__TypeInfo);
    sub_21FFC50(&Method_ClassBoardSquareMaster___c__DisplayClass0_0__GetAllEntity_b__0__);
    sub_21FFC50(&ClassBoardSquareMaster___c__DisplayClass0_0_TypeInfo);
    byte_59383F6 = 1;
  }
  v5 = sub_21FFEBC(ClassBoardSquareMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  list = this->fields.list;
  v9 = System_Func_ClassBoardSquareEntity__bool__TypeInfo;
  *(_DWORD *)(v5 + 16) = baseId;
  v10 = (System_Func_object__bool__o *)sub_21FFEBC(v9);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ClassBoardSquareMaster___c__DisplayClass0_0__GetAllEntity_b__0__,
    0);
  v11 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                           v11,
                                           (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquareEntity_o *ClassBoardSquareMaster__GetEntity(
        ClassBoardSquareMaster_o *this,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59383F9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__GetEntity__);
    byte_59383F9 = 1;
  }
  PK = (Il2CppObject *)ClassBoardSquareEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&id);
  return (ClassBoardSquareEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3EE2044 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__GetEntity__);
}


ClassBoardSquareEntity_array *ClassBoardSquareMaster__GetOtherThanNoneEntity(
        ClassBoardSquareMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_ClassBoardSquareEntity__bool__c *v9; // x0
  System_Func_object__bool__o *v10; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0

  if ( (byte_59383F7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__getEntityList__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
    sub_21FFC50(&System_Func_ClassBoardSquareEntity__bool__TypeInfo);
    sub_21FFC50(&Method_ClassBoardSquareMaster___c__DisplayClass1_0__GetOtherThanNoneEntity_b__0__);
    sub_21FFC50(&ClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo);
    byte_59383F7 = 1;
  }
  v5 = sub_21FFEBC(ClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  list = this->fields.list;
  v9 = System_Func_ClassBoardSquareEntity__bool__TypeInfo;
  *(_DWORD *)(v5 + 16) = baseId;
  v10 = (System_Func_object__bool__o *)sub_21FFEBC(v9);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ClassBoardSquareMaster___c__DisplayClass1_0__GetOtherThanNoneEntity_b__0__,
    0);
  v11 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                           v11,
                                           (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool ClassBoardSquareMaster__TryGetEntity(
        ClassBoardSquareMaster_o *this,
        ClassBoardSquareEntity_o **entity,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59383FA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__TryGetEntity__);
    byte_59383FA = 1;
  }
  PK = (Il2CppObject *)ClassBoardSquareEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&classBoardBaseId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__TryGetEntity__);
}


void ClassBoardSquareMaster___c__DisplayClass0_0___ctor(
        ClassBoardSquareMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardSquareMaster___c__DisplayClass0_0___GetAllEntity_b__0(
        ClassBoardSquareMaster___c__DisplayClass0_0_o *this,
        ClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.classBoardBaseId == this->fields.baseId;
}


void ClassBoardSquareMaster___c__DisplayClass1_0___ctor(
        ClassBoardSquareMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardSquareMaster___c__DisplayClass1_0___GetOtherThanNoneEntity_b__0(
        ClassBoardSquareMaster___c__DisplayClass1_0_o *this,
        ClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.classBoardBaseId == this->fields.baseId && x->fields.skillType != 0;
}