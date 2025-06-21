void __fastcall GrandGraphDetailMaster___ctor(GrandGraphDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C852 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string___ctor__, method);
    byte_4B1C852 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    550,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string___ctor__);
}


int32_t __fastcall GrandGraphDetailMaster__GetBaseClassId(
        GrandGraphDetailMaster_o *this,
        int32_t grandClassId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  _BOOL8 EntityByGrandClassId; // x0
  __int64 v5; // x1
  GrandGraphDetailEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  EntityByGrandClassId = GrandGraphDetailMaster__TryGetEntityByGrandClassId(this, &entity, grandClassId, v3);
  if ( !EntityByGrandClassId )
    return 0;
  if ( !entity )
    sub_1BCB254(EntityByGrandClassId, v5);
  return entity->fields.baseClassId;
}


// local variable allocation has failed, the output may be wrong!
GrandGraphDetailEntity_o *__fastcall GrandGraphDetailMaster__GetEntity(
        GrandGraphDetailMaster_o *this,
        int32_t grandGraphId,
        int32_t baseClassId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1C853 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string__GetEntity__,
      *(_QWORD *)&grandGraphId);
    byte_4B1C853 = 1;
  }
  PK = (Il2CppObject *)GrandGraphDetailEntity__CreatePK(grandGraphId, baseClassId, *(const MethodInfo **)&baseClassId);
  return (GrandGraphDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_32CC8B8 *)Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string__GetEntity__);
}


GrandGraphDetailEntity_o *__fastcall GrandGraphDetailMaster__GetEntityByBaseClassId(
        GrandGraphDetailMaster_o *this,
        int32_t baseClassId,
        bool outputAssertion,
        const MethodInfo *method)
{
  GrandGraphDetailEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  GrandGraphDetailMaster__TryGetEntityByBaseClassId(this, &entity, baseClassId, method);
  return entity;
}


// local variable allocation has failed, the output may be wrong!
GrandGraphDetailEntity_o *__fastcall GrandGraphDetailMaster__GetEntityByGrandClassId(
        GrandGraphDetailMaster_o *this,
        int32_t grandClassId,
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

  if ( (byte_4B1C84E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_GrandGraphDetailEntity___, *(_QWORD *)&grandClassId);
    sub_1BCAFF8(&System_Func_GrandGraphDetailEntity__bool__TypeInfo, v5);
    sub_1BCAFF8(&Method_GrandGraphDetailMaster___c__DisplayClass2_0__GetEntityByGrandClassId_b__0__, v6);
    sub_1BCAFF8(&GrandGraphDetailMaster___c__DisplayClass2_0_TypeInfo, v7);
    byte_4B1C84E = 1;
  }
  v8 = sub_1BCB244(GrandGraphDetailMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BCB254(v9, v10);
  *(_DWORD *)(v8 + 16) = grandClassId;
  list = this->fields.list;
  v12 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GrandGraphDetailEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_GrandGraphDetailMaster___c__DisplayClass2_0__GetEntityByGrandClassId_b__0__,
    0LL);
  return (GrandGraphDetailEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50595188(
                                       (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                       (System_Func_TSource__bool__o *)v12,
                                       (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_GrandGraphDetailEntity___);
}


int32_t __fastcall GrandGraphDetailMaster__GetGrandClassId(
        GrandGraphDetailMaster_o *this,
        int32_t baseClassId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  _BOOL8 EntityByBaseClassId; // x0
  __int64 v5; // x1
  GrandGraphDetailEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  EntityByBaseClassId = GrandGraphDetailMaster__TryGetEntityByBaseClassId(this, &entity, baseClassId, v3);
  if ( !EntityByBaseClassId )
    return 0;
  if ( !entity )
    sub_1BCB254(EntityByBaseClassId, v5);
  return entity->fields.grandClassId;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall GrandGraphDetailMaster__GetOpenBaseClassIds(
        GrandGraphDetailMaster_o *this,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v17; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  GrandGraphDetailMaster___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_object__int__o *_9__7_1; // x20
  Il2CppObject *v22; // x21
  struct GrandGraphDetailMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_4B1C851 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_GrandGraphDetailEntity__int___, *(_QWORD *)&grandGraphId);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_GrandGraphDetailEntity___, v6);
    sub_1BCAFF8(&System_Func_GrandGraphDetailEntity__int__TypeInfo, v7);
    sub_1BCAFF8(&System_Func_GrandGraphDetailEntity__bool__TypeInfo, v8);
    sub_1BCAFF8(&Method_GrandGraphDetailMaster___c__GetOpenBaseClassIds_b__7_1__, v9);
    sub_1BCAFF8(&Method_GrandGraphDetailMaster___c__DisplayClass7_0__GetOpenBaseClassIds_b__0__, v10);
    sub_1BCAFF8(&GrandGraphDetailMaster___c__DisplayClass7_0_TypeInfo, v11);
    sub_1BCAFF8(&GrandGraphDetailMaster___c_TypeInfo, v12);
    byte_4B1C851 = 1;
  }
  v13 = sub_1BCB244(GrandGraphDetailMaster___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BCB254(v14, v15);
  *(_DWORD *)(v13 + 16) = grandGraphId;
  list = this->fields.list;
  v17 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GrandGraphDetailEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_GrandGraphDetailMaster___c__DisplayClass7_0__GetOpenBaseClassIds_b__0__,
    0LL);
  v18 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_GrandGraphDetailEntity___);
  v19 = GrandGraphDetailMaster___c_TypeInfo;
  v20 = v18;
  if ( !GrandGraphDetailMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandGraphDetailMaster___c_TypeInfo);
    v19 = GrandGraphDetailMaster___c_TypeInfo;
  }
  _9__7_1 = (System_Func_object__int__o *)v19->static_fields->__9__7_1;
  if ( !_9__7_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = GrandGraphDetailMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__7_1 = (System_Func_object__int__o *)sub_1BCB244(System_Func_GrandGraphDetailEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_1, v22, Method_GrandGraphDetailMaster___c__GetOpenBaseClassIds_b__7_1__, 0LL);
    static_fields = GrandGraphDetailMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_1 = (struct System_Func_GrandGraphDetailEntity__int__o *)_9__7_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__7_1, (int32_t)_9__7_1, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v20,
                                                               (System_Func_TSource__TResult__o *)_9__7_1,
                                                               (const MethodInfo_304E6F0 *)Method_System_Linq_Enumerable_Select_GrandGraphDetailEntity__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v26,
           (const MethodInfo_305712C *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GrandGraphDetailMaster__TryGetEntity(
        GrandGraphDetailMaster_o *this,
        GrandGraphDetailEntity_o **entity,
        int32_t grandGraphId,
        int32_t baseClassId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1C854 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string__TryGetEntity__, entity);
    byte_4B1C854 = 1;
  }
  PK = (Il2CppObject *)GrandGraphDetailEntity__CreatePK(grandGraphId, baseClassId, *(const MethodInfo **)&grandGraphId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string__TryGetEntity__);
}


bool __fastcall GrandGraphDetailMaster__TryGetEntityByBaseClassId(
        GrandGraphDetailMaster_o *this,
        GrandGraphDetailEntity_o **entity,
        int32_t baseClassId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v14; // x21
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4B1C84D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_GrandGraphDetailEntity___, entity);
    sub_1BCAFF8(&System_Func_GrandGraphDetailEntity__bool__TypeInfo, v7);
    sub_1BCAFF8(&Method_GrandGraphDetailMaster___c__DisplayClass1_0__TryGetEntityByBaseClassId_b__0__, v8);
    sub_1BCAFF8(&GrandGraphDetailMaster___c__DisplayClass1_0_TypeInfo, v9);
    byte_4B1C84D = 1;
  }
  v10 = sub_1BCB244(GrandGraphDetailMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BCB254(v11, v12);
  *(_DWORD *)(v10 + 16) = baseClassId;
  list = this->fields.list;
  v14 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GrandGraphDetailEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_GrandGraphDetailMaster___c__DisplayClass1_0__TryGetEntityByBaseClassId_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__FirstOrDefault_object__50595188(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_GrandGraphDetailEntity___);
  *entity = (GrandGraphDetailEntity_o *)v15;
  sub_1BCAF9C((CGThumbnailListItem_o *)entity, (int32_t)v15, v16, v17);
  return *entity != 0LL;
}


bool __fastcall GrandGraphDetailMaster__TryGetEntityByGrandClassId(
        GrandGraphDetailMaster_o *this,
        GrandGraphDetailEntity_o **entity,
        int32_t grandClassId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v14; // x21
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4B1C84F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_GrandGraphDetailEntity___, entity);
    sub_1BCAFF8(&System_Func_GrandGraphDetailEntity__bool__TypeInfo, v7);
    sub_1BCAFF8(&Method_GrandGraphDetailMaster___c__DisplayClass3_0__TryGetEntityByGrandClassId_b__0__, v8);
    sub_1BCAFF8(&GrandGraphDetailMaster___c__DisplayClass3_0_TypeInfo, v9);
    byte_4B1C84F = 1;
  }
  v10 = sub_1BCB244(GrandGraphDetailMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BCB254(v11, v12);
  *(_DWORD *)(v10 + 16) = grandClassId;
  list = this->fields.list;
  v14 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GrandGraphDetailEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_GrandGraphDetailMaster___c__DisplayClass3_0__TryGetEntityByGrandClassId_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__FirstOrDefault_object__50595188(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_GrandGraphDetailEntity___);
  *entity = (GrandGraphDetailEntity_o *)v15;
  sub_1BCAF9C((CGThumbnailListItem_o *)entity, (int32_t)v15, v16, v17);
  return *entity != 0LL;
}


bool __fastcall GrandGraphDetailMaster__TryGetEntityByGrandGraphId(
        GrandGraphDetailMaster_o *this,
        GrandGraphDetailEntity_o **entity,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v14; // x21
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4B1C850 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_GrandGraphDetailEntity___, entity);
    sub_1BCAFF8(&System_Func_GrandGraphDetailEntity__bool__TypeInfo, v7);
    sub_1BCAFF8(&Method_GrandGraphDetailMaster___c__DisplayClass6_0__TryGetEntityByGrandGraphId_b__0__, v8);
    sub_1BCAFF8(&GrandGraphDetailMaster___c__DisplayClass6_0_TypeInfo, v9);
    byte_4B1C850 = 1;
  }
  v10 = sub_1BCB244(GrandGraphDetailMaster___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BCB254(v11, v12);
  *(_DWORD *)(v10 + 16) = grandGraphId;
  list = this->fields.list;
  v14 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GrandGraphDetailEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_GrandGraphDetailMaster___c__DisplayClass6_0__TryGetEntityByGrandGraphId_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__FirstOrDefault_object__50595188(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_GrandGraphDetailEntity___);
  *entity = (GrandGraphDetailEntity_o *)v15;
  sub_1BCAF9C((CGThumbnailListItem_o *)entity, (int32_t)v15, v16, v17);
  return *entity != 0LL;
}


void __fastcall GrandGraphDetailMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1C855 & 1) == 0 )
  {
    sub_1BCAFF8(&GrandGraphDetailMaster___c_TypeInfo, v1);
    byte_4B1C855 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(GrandGraphDetailMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GrandGraphDetailMaster___c_TypeInfo->static_fields->__9 = (struct GrandGraphDetailMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)GrandGraphDetailMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall GrandGraphDetailMaster___c___ctor(GrandGraphDetailMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall GrandGraphDetailMaster___c___GetOpenBaseClassIds_b__7_1(
        GrandGraphDetailMaster___c_o *this,
        GrandGraphDetailEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCB254(this, 0LL);
  return e->fields.baseClassId;
}


void __fastcall GrandGraphDetailMaster___c__DisplayClass1_0___ctor(
        GrandGraphDetailMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandGraphDetailMaster___c__DisplayClass1_0___TryGetEntityByBaseClassId_b__0(
        GrandGraphDetailMaster___c__DisplayClass1_0_o *this,
        GrandGraphDetailEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCB254(this, 0LL);
  return e->fields.baseClassId == this->fields.baseClassId;
}


void __fastcall GrandGraphDetailMaster___c__DisplayClass2_0___ctor(
        GrandGraphDetailMaster___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandGraphDetailMaster___c__DisplayClass2_0___GetEntityByGrandClassId_b__0(
        GrandGraphDetailMaster___c__DisplayClass2_0_o *this,
        GrandGraphDetailEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCB254(this, 0LL);
  return e->fields.grandClassId == this->fields.grandClassId;
}


void __fastcall GrandGraphDetailMaster___c__DisplayClass3_0___ctor(
        GrandGraphDetailMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandGraphDetailMaster___c__DisplayClass3_0___TryGetEntityByGrandClassId_b__0(
        GrandGraphDetailMaster___c__DisplayClass3_0_o *this,
        GrandGraphDetailEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCB254(this, 0LL);
  return e->fields.grandClassId == this->fields.grandClassId;
}


void __fastcall GrandGraphDetailMaster___c__DisplayClass6_0___ctor(
        GrandGraphDetailMaster___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandGraphDetailMaster___c__DisplayClass6_0___TryGetEntityByGrandGraphId_b__0(
        GrandGraphDetailMaster___c__DisplayClass6_0_o *this,
        GrandGraphDetailEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCB254(this, 0LL);
  return e->fields.grandGraphId == this->fields.grandGraphId;
}


void __fastcall GrandGraphDetailMaster___c__DisplayClass7_0___ctor(
        GrandGraphDetailMaster___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandGraphDetailMaster___c__DisplayClass7_0___GetOpenBaseClassIds_b__0(
        GrandGraphDetailMaster___c__DisplayClass7_0_o *this,
        GrandGraphDetailEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCB254(this, 0LL);
  return e->fields.grandGraphId == this->fields.grandGraphId && GrandGraphDetailEntity__IsOpen(e, (const MethodInfo *)e);
}