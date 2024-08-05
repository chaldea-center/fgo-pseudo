void __fastcall ClassBoardSquareMaster___ctor(ClassBoardSquareMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE2A9 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string___ctor__, method);
    byte_49FE2A9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    429,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquareEntity_array *__fastcall ClassBoardSquareMaster__GetAllEntity(
        ClassBoardSquareMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object; // x19
  System_Func_object__bool__o *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_49FE2A7 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___, *(_QWORD *)&baseId);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v5);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___, v6);
    sub_1B64870(&System_Func_ClassBoardSquareEntity__bool__TypeInfo, v7);
    sub_1B64870(&Method_ClassBoardSquareMaster___c__DisplayClass0_0__GetAllEntity_b__0__, v8);
    sub_1B64870(&ClassBoardSquareMaster___c__DisplayClass0_0_TypeInfo, v9);
    byte_49FE2A7 = 1;
  }
  v10 = sub_1B64ABC(ClassBoardSquareMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B64ACC(v11, v12);
  *(_DWORD *)(v10 + 16) = baseId;
  Entitys_object = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_object_(
                                                                          (DataMasterBase_o *)this,
                                                                          (const MethodInfo_2E3BF5C *)Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___);
  v14 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_ClassBoardSquareEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_ClassBoardSquareMaster___c__DisplayClass0_0__GetAllEntity_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__Where_object_(
          Entitys_object,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_2E79378 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                           v15,
                                           (const MethodInfo_2E736A0 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquareEntity_o *__fastcall ClassBoardSquareMaster__GetEntity(
        ClassBoardSquareMaster_o *this,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FE2AA & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__GetEntity__,
      *(_QWORD *)&classBoardBaseId);
    byte_49FE2AA = 1;
  }
  PK = (Il2CppObject *)ClassBoardSquareEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&id);
  return (ClassBoardSquareEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_30D64D8 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquareEntity_array *__fastcall ClassBoardSquareMaster__GetOtherThanNoneEntity(
        ClassBoardSquareMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object; // x19
  System_Func_object__bool__o *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_49FE2A8 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___, *(_QWORD *)&baseId);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v5);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___, v6);
    sub_1B64870(&System_Func_ClassBoardSquareEntity__bool__TypeInfo, v7);
    sub_1B64870(&Method_ClassBoardSquareMaster___c__DisplayClass1_0__GetOtherThanNoneEntity_b__0__, v8);
    sub_1B64870(&ClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo, v9);
    byte_49FE2A8 = 1;
  }
  v10 = sub_1B64ABC(ClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B64ACC(v11, v12);
  *(_DWORD *)(v10 + 16) = baseId;
  Entitys_object = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_object_(
                                                                          (DataMasterBase_o *)this,
                                                                          (const MethodInfo_2E3BF5C *)Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___);
  v14 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_ClassBoardSquareEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_ClassBoardSquareMaster___c__DisplayClass1_0__GetOtherThanNoneEntity_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__Where_object_(
          Entitys_object,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_2E79378 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                           v15,
                                           (const MethodInfo_2E736A0 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
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

  if ( (byte_49FE2AB & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__TryGetEntity__, entity);
    byte_49FE2AB = 1;
  }
  PK = (Il2CppObject *)ClassBoardSquareEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&classBoardBaseId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__TryGetEntity__);
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
    sub_1B64ACC(this, 0LL);
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
    sub_1B64ACC(this, 0LL);
  return x->fields.classBoardBaseId == this->fields.baseId && x->fields.skillType != 0;
}