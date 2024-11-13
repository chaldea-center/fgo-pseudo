void __fastcall ClassBoardSquareMaster___ctor(ClassBoardSquareMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15F8F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string___ctor__, method, v2);
    byte_4B15F8F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    429,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquareEntity_array *__fastcall ClassBoardSquareMaster__GetAllEntity(
        ClassBoardSquareMaster_o *this,
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Func_object__bool__o *v23; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B15F8D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___, *(_QWORD *)&baseId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___, v8, v9);
    sub_1BCA7E0(&System_Func_ClassBoardSquareEntity__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_ClassBoardSquareMaster___c__DisplayClass0_0__GetAllEntity_b__0__, v12, v13);
    sub_1BCA7E0(&ClassBoardSquareMaster___c__DisplayClass0_0_TypeInfo, v14, v15);
    byte_4B15F8D = 1;
  }
  v16 = sub_1BCAA2C(ClassBoardSquareMaster___c__DisplayClass0_0_TypeInfo, *(_QWORD *)&baseId, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    sub_1BCAA3C(v17, v18);
  *(_DWORD *)(v16 + 16) = baseId;
  Entitys_object = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_object_(
                                                                          (DataMasterBase_o *)this,
                                                                          (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___);
  v23 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ClassBoardSquareEntity__bool__TypeInfo, v20, v21, v22);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v16,
    Method_ClassBoardSquareMaster___c__DisplayClass0_0__GetAllEntity_b__0__,
    0LL);
  v24 = System_Linq_Enumerable__Where_object_(
          Entitys_object,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                           v24,
                                           (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquareEntity_o *__fastcall ClassBoardSquareMaster__GetEntity(
        ClassBoardSquareMaster_o *this,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B15F90 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__GetEntity__,
      *(_QWORD *)&classBoardBaseId,
      *(_QWORD *)&id);
    byte_4B15F90 = 1;
  }
  PK = (Il2CppObject *)ClassBoardSquareEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&id);
  return (ClassBoardSquareEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31B3198 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquareEntity_array *__fastcall ClassBoardSquareMaster__GetOtherThanNoneEntity(
        ClassBoardSquareMaster_o *this,
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Func_object__bool__o *v23; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B15F8E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___, *(_QWORD *)&baseId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___, v8, v9);
    sub_1BCA7E0(&System_Func_ClassBoardSquareEntity__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_ClassBoardSquareMaster___c__DisplayClass1_0__GetOtherThanNoneEntity_b__0__, v12, v13);
    sub_1BCA7E0(&ClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo, v14, v15);
    byte_4B15F8E = 1;
  }
  v16 = sub_1BCAA2C(ClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo, *(_QWORD *)&baseId, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    sub_1BCAA3C(v17, v18);
  *(_DWORD *)(v16 + 16) = baseId;
  Entitys_object = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_object_(
                                                                          (DataMasterBase_o *)this,
                                                                          (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___);
  v23 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ClassBoardSquareEntity__bool__TypeInfo, v20, v21, v22);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v16,
    Method_ClassBoardSquareMaster___c__DisplayClass1_0__GetOtherThanNoneEntity_b__0__,
    0LL);
  v24 = System_Linq_Enumerable__Where_object_(
          Entitys_object,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                           v24,
                                           (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardSquareMaster__TryGetEntity(
        ClassBoardSquareMaster_o *this,
        ClassBoardSquareEntity_o **entity,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B15F91 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&classBoardBaseId);
    byte_4B15F91 = 1;
  }
  PK = (Il2CppObject *)ClassBoardSquareEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&classBoardBaseId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__TryGetEntity__);
}


void __fastcall ClassBoardSquareMaster___c__DisplayClass0_0___ctor(
        ClassBoardSquareMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardSquareMaster___c__DisplayClass0_0___GetAllEntity_b__0(
        ClassBoardSquareMaster___c__DisplayClass0_0_o *this,
        ClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.classBoardBaseId == this->fields.baseId;
}


void __fastcall ClassBoardSquareMaster___c__DisplayClass1_0___ctor(
        ClassBoardSquareMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardSquareMaster___c__DisplayClass1_0___GetOtherThanNoneEntity_b__0(
        ClassBoardSquareMaster___c__DisplayClass1_0_o *this,
        ClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.classBoardBaseId == this->fields.baseId && x->fields.skillType != 0;
}