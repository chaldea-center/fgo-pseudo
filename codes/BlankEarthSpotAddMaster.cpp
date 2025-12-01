void BlankEarthSpotAddMaster___ctor(BlankEarthSpotAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7072 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string___ctor__);
    byte_4CC7072 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    19,
    (const MethodInfo_340B614 *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string___ctor__);
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

  if ( (byte_4CC7073 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__GetEntity__);
    byte_4CC7073 = 1;
  }
  PK = (Il2CppObject *)BlankEarthSpotAddEntity__CreatePK(
                         blankEarthSpotId,
                         priority,
                         overwriteType,
                         *(const MethodInfo **)&overwriteType);
  return (BlankEarthSpotAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_340D938 *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__GetEntity__);
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
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_object__bool__o *v15; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  BlankEarthSpotAddMaster___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  System_Func_object__int__o *_9__1_1; // x21
  Il2CppObject *v20; // x22
  struct BlankEarthSpotAddMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  System_Func_object__bool__o *v29; // x21

  if ( (byte_4CC7071 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAddEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_OfType_BlankEarthSpotAddEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAddEntity__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_BlankEarthSpotAddEntity___);
    sub_1C713B0(&System_Func_BlankEarthSpotAddEntity__int__TypeInfo);
    sub_1C713B0(&System_Func_BlankEarthSpotAddEntity__bool__TypeInfo);
    sub_1C713B0(&Method_BlankEarthSpotAddMaster___c__GetPrioredAvailableEntity_b__1_1__);
    sub_1C713B0(&Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__0__);
    sub_1C713B0(&Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__2__);
    sub_1C713B0(&BlankEarthSpotAddMaster___c__DisplayClass1_0_TypeInfo);
    sub_1C713B0(&BlankEarthSpotAddMaster___c_TypeInfo);
    byte_4CC7071 = 1;
  }
  v11 = sub_1C715FC(BlankEarthSpotAddMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1C71608(v12, v13);
  *(_DWORD *)(v11 + 20) = type;
  *(_DWORD *)(v11 + 24) = beforeClearQuestId;
  *(_DWORD *)(v11 + 16) = blankEarthSpotId;
  *(_BYTE *)(v11 + 28) = isCheckResetFlag;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_317A3C4 *)Method_System_Linq_Enumerable_OfType_BlankEarthSpotAddEntity___);
  v15 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BlankEarthSpotAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__0__,
    0);
  v16 = System_Linq_Enumerable__Where_object_(
          v14,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_BlankEarthSpotAddEntity___);
  v17 = BlankEarthSpotAddMaster___c_TypeInfo;
  v18 = v16;
  if ( !BlankEarthSpotAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotAddMaster___c_TypeInfo);
    v17 = BlankEarthSpotAddMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v17->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = BlankEarthSpotAddMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1C715FC(System_Func_BlankEarthSpotAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__1_1,
      v20,
      Method_BlankEarthSpotAddMaster___c__GetPrioredAvailableEntity_b__1_1__,
      0);
    static_fields = BlankEarthSpotAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_1 = (struct System_Func_BlankEarthSpotAddEntity__int__o *)_9__1_1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__1_1, (int32_t)_9__1_1, v22, v23, v24, v25, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TKey__o *)_9__1_1,
                                                               (const MethodInfo_317A93C *)Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAddEntity__int___);
  v29 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BlankEarthSpotAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v29,
    (Il2CppObject *)v11,
    Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__2__,
    0);
  return (BlankEarthSpotAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51858576(
                                        v28,
                                        (System_Func_TSource__bool__o *)v29,
                                        (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAddEntity___);
}


bool BlankEarthSpotAddMaster__HasAnyRecord(BlankEarthSpotAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4CC7070 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_BlankEarthSpotAddEntity__get_Count__);
    byte_4CC7070 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C71608(0, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_BlankEarthSpotAddEntity__get_Count__) > 0;
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

  if ( (byte_4CC7074 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__TryGetEntity__);
    byte_4CC7074 = 1;
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
           (const MethodInfo_340D984 *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__TryGetEntity__);
}


void BlankEarthSpotAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC7075 & 1) == 0 )
  {
    sub_1C713B0(&BlankEarthSpotAddMaster___c_TypeInfo);
    byte_4CC7075 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(BlankEarthSpotAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BlankEarthSpotAddMaster___c_TypeInfo->static_fields->__9 = (struct BlankEarthSpotAddMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)BlankEarthSpotAddMaster___c_TypeInfo->static_fields,
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
    sub_1C71608(this, 0);
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
    sub_1C71608(this, 0);
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
    sub_1C71608(this, 0);
  return BlankEarthSpotAddEntity__IsOpen(x, this->fields.beforeClearQuestId, this->fields.isCheckResetFlag, v3);
}