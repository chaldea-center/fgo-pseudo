void __fastcall BlankEarthGimmickAddMaster___ctor(BlankEarthGimmickAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5A0D & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_BlankEarthGimmickAddMaster__BlankEarthGimmickAddEntity__string___ctor__, method);
    byte_4AB5A0D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    516,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_BlankEarthGimmickAddMaster__BlankEarthGimmickAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthGimmickAddEntity_o *__fastcall BlankEarthGimmickAddMaster__GetEntity(
        BlankEarthGimmickAddMaster_o *this,
        int32_t blankEarthSpotId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB5A0E & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_BlankEarthGimmickAddMaster__BlankEarthGimmickAddEntity__string__GetEntity__,
      *(_QWORD *)&blankEarthSpotId);
    byte_4AB5A0E = 1;
  }
  PK = (Il2CppObject *)BlankEarthGimmickAddEntity__CreatePK(
                         blankEarthSpotId,
                         priority,
                         overwriteType,
                         *(const MethodInfo **)&overwriteType);
  return (BlankEarthGimmickAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_31640E8 *)Method_DataMasterBase_BlankEarthGimmickAddMaster__BlankEarthGimmickAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthGimmickAddEntity_o *__fastcall BlankEarthGimmickAddMaster__GetPrioredAvailableEntity(
        BlankEarthGimmickAddMaster_o *this,
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
  __int64 v23; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_object__bool__o *v25; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  BlankEarthGimmickAddMaster___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  System_Func_object__int__o *_9__4_1; // x21
  Il2CppObject *v30; // x22
  struct BlankEarthGimmickAddMaster___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  System_Func_object__bool__o *v35; // x21

  if ( (byte_4AB5A11 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthGimmickAddEntity___, *(_QWORD *)&type);
    sub_1BAB41C(&Method_System_Linq_Enumerable_OfType_BlankEarthGimmickAddEntity___, v11);
    sub_1BAB41C(&Method_System_Linq_Enumerable_OrderBy_BlankEarthGimmickAddEntity__int___, v12);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Where_BlankEarthGimmickAddEntity___, v13);
    sub_1BAB41C(&System_Func_BlankEarthGimmickAddEntity__bool__TypeInfo, v14);
    sub_1BAB41C(&System_Func_BlankEarthGimmickAddEntity__int__TypeInfo, v15);
    sub_1BAB41C(&Method_BlankEarthGimmickAddMaster___c__GetPrioredAvailableEntity_b__4_1__, v16);
    sub_1BAB41C(&Method_BlankEarthGimmickAddMaster___c__DisplayClass4_0__GetPrioredAvailableEntity_b__0__, v17);
    sub_1BAB41C(&Method_BlankEarthGimmickAddMaster___c__DisplayClass4_0__GetPrioredAvailableEntity_b__2__, v18);
    sub_1BAB41C(&BlankEarthGimmickAddMaster___c__DisplayClass4_0_TypeInfo, v19);
    sub_1BAB41C(&BlankEarthGimmickAddMaster___c_TypeInfo, v20);
    byte_4AB5A11 = 1;
  }
  v21 = sub_1BAB668(BlankEarthGimmickAddMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    sub_1BAB678(v22, v23);
  *(_DWORD *)(v21 + 20) = type;
  *(_DWORD *)(v21 + 24) = beforeClearQuestId;
  *(_DWORD *)(v21 + 16) = blankEarthSpotId;
  *(_BYTE *)(v21 + 28) = isCheckResetFlag;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2EED82C *)Method_System_Linq_Enumerable_OfType_BlankEarthGimmickAddEntity___);
  v25 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_BlankEarthGimmickAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v21,
    Method_BlankEarthGimmickAddMaster___c__DisplayClass4_0__GetPrioredAvailableEntity_b__0__,
    0LL);
  v26 = System_Linq_Enumerable__Where_object_(
          v24,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_2F02B34 *)Method_System_Linq_Enumerable_Where_BlankEarthGimmickAddEntity___);
  v27 = BlankEarthGimmickAddMaster___c_TypeInfo;
  v28 = v26;
  if ( !BlankEarthGimmickAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthGimmickAddMaster___c_TypeInfo);
    v27 = BlankEarthGimmickAddMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__int__o *)v27->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = BlankEarthGimmickAddMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__4_1 = (System_Func_object__int__o *)sub_1BAB668(System_Func_BlankEarthGimmickAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__4_1,
      v30,
      Method_BlankEarthGimmickAddMaster___c__GetPrioredAvailableEntity_b__4_1__,
      0LL);
    static_fields = BlankEarthGimmickAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_1 = (struct System_Func_BlankEarthGimmickAddEntity__int__o *)_9__4_1;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_1, (int32_t)_9__4_1, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v28,
                                                               (System_Func_TSource__TKey__o *)_9__4_1,
                                                               (const MethodInfo_2EEDCCC *)Method_System_Linq_Enumerable_OrderBy_BlankEarthGimmickAddEntity__int___);
  v35 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_BlankEarthGimmickAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v35,
    (Il2CppObject *)v21,
    Method_BlankEarthGimmickAddMaster___c__DisplayClass4_0__GetPrioredAvailableEntity_b__2__,
    0LL);
  return (BlankEarthGimmickAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__49186032(
                                           v34,
                                           (System_Func_TSource__bool__o *)v35,
                                           (const MethodInfo_2EE84F0 *)Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthGimmickAddEntity___);
}


bool __fastcall BlankEarthGimmickAddMaster__HasAnyRecord(BlankEarthGimmickAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4AB5A10 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    byte_4AB5A10 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BAB678(0LL, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BlankEarthGimmickAddMaster__TryGetEntity(
        BlankEarthGimmickAddMaster_o *this,
        BlankEarthGimmickAddEntity_o **entity,
        int32_t blankEarthSpotId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4AB5A0F & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_BlankEarthGimmickAddMaster__BlankEarthGimmickAddEntity__string__TryGetEntity__,
      entity);
    byte_4AB5A0F = 1;
  }
  PK = (Il2CppObject *)BlankEarthGimmickAddEntity__CreatePK(
                         blankEarthSpotId,
                         priority,
                         overwriteType,
                         *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_BlankEarthGimmickAddMaster__BlankEarthGimmickAddEntity__string__TryGetEntity__);
}


void __fastcall BlankEarthGimmickAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB5A12 & 1) == 0 )
  {
    sub_1BAB41C(&BlankEarthGimmickAddMaster___c_TypeInfo, v1);
    byte_4AB5A12 = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(BlankEarthGimmickAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BlankEarthGimmickAddMaster___c_TypeInfo->static_fields->__9 = (struct BlankEarthGimmickAddMaster___c_o *)v2;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)BlankEarthGimmickAddMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall BlankEarthGimmickAddMaster___c___ctor(BlankEarthGimmickAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BlankEarthGimmickAddMaster___c___GetPrioredAvailableEntity_b__4_1(
        BlankEarthGimmickAddMaster___c_o *this,
        BlankEarthGimmickAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BAB678(this, 0LL);
  return -x->fields.priority;
}


void __fastcall BlankEarthGimmickAddMaster___c__DisplayClass4_0___ctor(
        BlankEarthGimmickAddMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BlankEarthGimmickAddMaster___c__DisplayClass4_0___GetPrioredAvailableEntity_b__0(
        BlankEarthGimmickAddMaster___c__DisplayClass4_0_o *this,
        BlankEarthGimmickAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BAB678(this, 0LL);
  return x->fields.gimmickId == this->fields.blankEarthSpotId && x->fields.overwriteType == this->fields.typeAsInt;
}


bool __fastcall BlankEarthGimmickAddMaster___c__DisplayClass4_0___GetPrioredAvailableEntity_b__2(
        BlankEarthGimmickAddMaster___c__DisplayClass4_0_o *this,
        BlankEarthGimmickAddEntity_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !x )
    sub_1BAB678(this, 0LL);
  return BlankEarthGimmickAddEntity__IsOpen(x, this->fields.beforeClearQuestId, this->fields.isCheckResetFlag, v3);
}