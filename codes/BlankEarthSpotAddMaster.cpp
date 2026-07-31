void BlankEarthSpotAddMaster___ctor(BlankEarthSpotAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938311 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string___ctor__);
    byte_5938311 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    19,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotAddEntity_o *BlankEarthSpotAddMaster__GetEntity(
        BlankEarthSpotAddMaster_o *this,
        int32_t blankEarthSpotId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938312 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__GetEntity__);
    byte_5938312 = 1;
  }
  PK = (Il2CppObject *)BlankEarthSpotAddEntity__CreatePK(
                         blankEarthSpotId,
                         priority,
                         overwriteType,
                         *(const MethodInfo **)&overwriteType);
  return (BlankEarthSpotAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3EE2044 *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__GetEntity__);
}


BlankEarthSpotAddEntity_o *BlankEarthSpotAddMaster__GetPrioredAvailableEntity(
        BlankEarthSpotAddMaster_o *this,
        int32_t type,
        int32_t blankEarthSpotId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_IEnumerable_o *list; // x0
  const MethodInfo_3855054 *v15; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  System_Func_object__bool__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  __int64 v19; // x1
  BlankEarthSpotAddMaster___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  struct BlankEarthSpotAddMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__1_1; // x21
  Il2CppObject *v24; // x22
  struct BlankEarthSpotAddMaster___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x20
  System_Func_object__bool__o *v33; // x21

  if ( (byte_5938310 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAddEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OfType_BlankEarthSpotAddEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAddEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BlankEarthSpotAddEntity___);
    sub_21FFC50(&System_Func_BlankEarthSpotAddEntity__int__TypeInfo);
    sub_21FFC50(&System_Func_BlankEarthSpotAddEntity__bool__TypeInfo);
    sub_21FFC50(&Method_BlankEarthSpotAddMaster___c__GetPrioredAvailableEntity_b__1_1__);
    sub_21FFC50(&Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__0__);
    sub_21FFC50(&Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__2__);
    sub_21FFC50(&BlankEarthSpotAddMaster___c__DisplayClass1_0_TypeInfo);
    sub_21FFC50(&BlankEarthSpotAddMaster___c_TypeInfo);
    byte_5938310 = 1;
  }
  v11 = sub_21FFEBC(BlankEarthSpotAddMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_21FFECC(v12, v13);
  *(_DWORD *)(v11 + 24) = beforeClearQuestId;
  list = (System_Collections_IEnumerable_o *)this->fields.list;
  v15 = (const MethodInfo_3855054 *)Method_System_Linq_Enumerable_OfType_BlankEarthSpotAddEntity___;
  *(_BYTE *)(v11 + 28) = isCheckResetFlag;
  *(_DWORD *)(v11 + 16) = blankEarthSpotId;
  *(_DWORD *)(v11 + 20) = type;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(list, v15);
  v17 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BlankEarthSpotAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__0__,
    0);
  v18 = System_Linq_Enumerable__Where_object_(
          v16,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BlankEarthSpotAddEntity___);
  v20 = BlankEarthSpotAddMaster___c_TypeInfo;
  v21 = v18;
  if ( !*(&BlankEarthSpotAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotAddMaster___c_TypeInfo, v19);
    v20 = BlankEarthSpotAddMaster___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__1_1 = (System_Func_object__int__o *)static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v19);
      static_fields = BlankEarthSpotAddMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_BlankEarthSpotAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__1_1,
      v24,
      Method_BlankEarthSpotAddMaster___c__GetPrioredAvailableEntity_b__1_1__,
      0);
    v25 = BlankEarthSpotAddMaster___c_TypeInfo->static_fields;
    v25->__9__1_1 = (struct System_Func_BlankEarthSpotAddEntity__int__o *)_9__1_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->__9__1_1, (int32_t)_9__1_1, v26, v27, v28, v29, v30, v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v21,
                                                               (System_Func_TSource__TKey__o *)_9__1_1,
                                                               (const MethodInfo_38556D8 *)Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAddEntity__int___);
  v33 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BlankEarthSpotAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v33,
    (Il2CppObject *)v11,
    Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__2__,
    0);
  return (BlankEarthSpotAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                        v32,
                                        (System_Func_TSource__bool__o *)v33,
                                        (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAddEntity___);
}


bool BlankEarthSpotAddMaster__HasAnyRecord(BlankEarthSpotAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_593830F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_BlankEarthSpotAddEntity__get_Count__);
    byte_593830F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_BlankEarthSpotAddEntity__get_Count__) > 0;
}


// local variable allocation has failed, the output may be wrong!
bool BlankEarthSpotAddMaster__TryGetEntity(
        BlankEarthSpotAddMaster_o *this,
        BlankEarthSpotAddEntity_o **entity,
        int32_t blankEarthSpotId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938313 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__TryGetEntity__);
    byte_5938313 = 1;
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
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__TryGetEntity__);
}


void BlankEarthSpotAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938314 & 1) == 0 )
  {
    sub_21FFC50(&BlankEarthSpotAddMaster___c_TypeInfo);
    byte_5938314 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BlankEarthSpotAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BlankEarthSpotAddMaster___c_TypeInfo->static_fields->__9 = (struct BlankEarthSpotAddMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BlankEarthSpotAddMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BlankEarthSpotAddMaster___c___ctor(BlankEarthSpotAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BlankEarthSpotAddMaster___c___GetPrioredAvailableEntity_b__1_1(
        BlankEarthSpotAddMaster___c_o *this,
        BlankEarthSpotAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return -x->fields.priority;
}


void BlankEarthSpotAddMaster___c__DisplayClass1_0___ctor(
        BlankEarthSpotAddMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BlankEarthSpotAddMaster___c__DisplayClass1_0___GetPrioredAvailableEntity_b__0(
        BlankEarthSpotAddMaster___c__DisplayClass1_0_o *this,
        BlankEarthSpotAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.blankEarthSpotId == this->fields.blankEarthSpotId
      && x->fields.overwriteType == this->fields.typeAsInt;
}


bool BlankEarthSpotAddMaster___c__DisplayClass1_0___GetPrioredAvailableEntity_b__2(
        BlankEarthSpotAddMaster___c__DisplayClass1_0_o *this,
        BlankEarthSpotAddEntity_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !x )
    sub_21FFECC(this, 0);
  return BlankEarthSpotAddEntity__IsOpen(x, this->fields.beforeClearQuestId, this->fields.isCheckResetFlag, v3);
}