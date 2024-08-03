void __fastcall BlankEarthSpotAddMaster___ctor(BlankEarthSpotAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC0E5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string___ctor__, method);
    byte_49FC0E5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    19,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotAddEntity_o *__fastcall BlankEarthSpotAddMaster__GetEntity(
        BlankEarthSpotAddMaster_o *this,
        int32_t blankEarthSpotId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FC0E6 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__GetEntity__,
      *(_QWORD *)&blankEarthSpotId);
    byte_49FC0E6 = 1;
  }
  PK = (Il2CppObject *)BlankEarthSpotAddEntity__CreatePK(
                         blankEarthSpotId,
                         priority,
                         overwriteType,
                         *(const MethodInfo **)&overwriteType);
  return (BlankEarthSpotAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_30D41FC *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotAddEntity_o *__fastcall BlankEarthSpotAddMaster__GetPrioredAvailableEntity(
        BlankEarthSpotAddMaster_o *this,
        int32_t type,
        int32_t blankEarthSpotId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x19
  __int64 v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  System_Func_object__bool__o *v26; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  BlankEarthSpotAddMaster___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  System_Func_object__int__o *_9__1_1; // x21
  Il2CppObject *v33; // x22
  struct BlankEarthSpotAddMaster___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  System_Func_object__bool__o *v40; // x21

  if ( (byte_49FC0E4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAddEntity___, *(_QWORD *)&type);
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_BlankEarthSpotAddEntity___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAddEntity__int___, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BlankEarthSpotAddEntity___, v13);
    sub_1B640C8(&System_Func_BlankEarthSpotAddEntity__int__TypeInfo, v14);
    sub_1B640C8(&System_Func_BlankEarthSpotAddEntity__bool__TypeInfo, v15);
    sub_1B640C8(&Method_BlankEarthSpotAddMaster___c__GetPrioredAvailableEntity_b__1_1__, v16);
    sub_1B640C8(&Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__0__, v17);
    sub_1B640C8(&Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__2__, v18);
    sub_1B640C8(&BlankEarthSpotAddMaster___c__DisplayClass1_0_TypeInfo, v19);
    sub_1B640C8(&BlankEarthSpotAddMaster___c_TypeInfo, v20);
    byte_49FC0E4 = 1;
  }
  v21 = sub_1B64314(
          BlankEarthSpotAddMaster___c__DisplayClass1_0_TypeInfo,
          *(_QWORD *)&type,
          *(_QWORD *)&blankEarthSpotId);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    sub_1B64324(v22);
  *(_DWORD *)(v21 + 20) = type;
  *(_DWORD *)(v21 + 24) = beforeClearQuestId;
  *(_DWORD *)(v21 + 16) = blankEarthSpotId;
  *(_BYTE *)(v21 + 28) = isCheckResetFlag;
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_BlankEarthSpotAddEntity___);
  v26 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BlankEarthSpotAddEntity__bool__TypeInfo, v24, v25);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v21,
    Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__0__,
    0LL);
  v27 = System_Linq_Enumerable__Where_object_(
          v23,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BlankEarthSpotAddEntity___);
  v30 = BlankEarthSpotAddMaster___c_TypeInfo;
  v31 = v27;
  if ( !BlankEarthSpotAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotAddMaster___c_TypeInfo);
    v30 = BlankEarthSpotAddMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v30->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = BlankEarthSpotAddMaster___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_BlankEarthSpotAddEntity__int__TypeInfo, v28, v29);
    System_Func_object__int____ctor(
      _9__1_1,
      v33,
      Method_BlankEarthSpotAddMaster___c__GetPrioredAvailableEntity_b__1_1__,
      0LL);
    static_fields = BlankEarthSpotAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_1 = (struct System_Func_BlankEarthSpotAddEntity__int__o *)_9__1_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_1, (int32_t)_9__1_1, v35, v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v31,
                                                               (System_Func_TSource__TKey__o *)_9__1_1,
                                                               (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAddEntity__int___);
  v40 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BlankEarthSpotAddEntity__bool__TypeInfo, v38, v39);
  System_Func_object__bool____ctor(
    v40,
    (Il2CppObject *)v21,
    Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__2__,
    0LL);
  return (BlankEarthSpotAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                        v37,
                                        (System_Func_TSource__bool__o *)v40,
                                        (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAddEntity___);
}


bool __fastcall BlankEarthSpotAddMaster__HasAnyRecord(BlankEarthSpotAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_49FC0E3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    byte_49FC0E3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BlankEarthSpotAddMaster__TryGetEntity(
        BlankEarthSpotAddMaster_o *this,
        BlankEarthSpotAddEntity_o **entity,
        int32_t blankEarthSpotId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FC0E7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__TryGetEntity__, entity);
    byte_49FC0E7 = 1;
  }
  PK = (Il2CppObject *)BlankEarthSpotAddEntity__CreatePK(
                         blankEarthSpotId,
                         priority,
                         overwriteType,
                         *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__TryGetEntity__);
}


void __fastcall BlankEarthSpotAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC0E8 & 1) == 0 )
  {
    sub_1B640C8(&BlankEarthSpotAddMaster___c_TypeInfo, v1);
    byte_49FC0E8 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BlankEarthSpotAddMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BlankEarthSpotAddMaster___c_TypeInfo->static_fields->__9 = (struct BlankEarthSpotAddMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BlankEarthSpotAddMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall BlankEarthSpotAddMaster___c___ctor(BlankEarthSpotAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BlankEarthSpotAddMaster___c___GetPrioredAvailableEntity_b__1_1(
        BlankEarthSpotAddMaster___c_o *this,
        BlankEarthSpotAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return -x->fields.priority;
}


void __fastcall BlankEarthSpotAddMaster___c__DisplayClass1_0___ctor(
        BlankEarthSpotAddMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BlankEarthSpotAddMaster___c__DisplayClass1_0___GetPrioredAvailableEntity_b__0(
        BlankEarthSpotAddMaster___c__DisplayClass1_0_o *this,
        BlankEarthSpotAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.blankEarthSpotId == this->fields.blankEarthSpotId
      && x->fields.overwriteType == this->fields.typeAsInt;
}


bool __fastcall BlankEarthSpotAddMaster___c__DisplayClass1_0___GetPrioredAvailableEntity_b__2(
        BlankEarthSpotAddMaster___c__DisplayClass1_0_o *this,
        BlankEarthSpotAddEntity_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !x )
    sub_1B64324(this);
  return BlankEarthSpotAddEntity__IsOpen(x, this->fields.beforeClearQuestId, this->fields.isCheckResetFlag, v3);
}