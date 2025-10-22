void ServantExceedMaster___ctor(ServantExceedMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C5768C & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string___ctor__);
    byte_4C5768C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    161,
    (const MethodInfo_33B56EC *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantExceedEntity_o *ServantExceedMaster__GetEntity(
        ServantExceedMaster_o *this,
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C5768D & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__GetEntity__);
    byte_4C5768D = 1;
  }
  PK = (Il2CppObject *)ServantExceedEntity__CreatePK(rarity, exceedCount, *(const MethodInfo **)&exceedCount);
  return (ServantExceedEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_33B7A10 *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__GetEntity__);
}


int32_t ServantExceedMaster__GetExceedCount(
        ServantExceedMaster_o *this,
        int32_t rarity,
        int32_t addLevel,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_Object_array *v8; // x0
  __int64 v9; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v11; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  ServantExceedMaster___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_object__int__o *_9__8_1; // x21
  Il2CppObject *v16; // x22
  struct ServantExceedMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  int max_length; // w8
  int v22; // w9
  Il2CppObject *v23; // x10

  if ( (byte_4C5768B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderBy_ServantExceedEntity__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_ServantExceedEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_ServantExceedEntity___);
    sub_1C3E564(&System_Func_ServantExceedEntity__int__TypeInfo);
    sub_1C3E564(&System_Func_ServantExceedEntity__bool__TypeInfo);
    sub_1C3E564(&Method_ServantExceedMaster___c__GetExceedCount_b__8_1__);
    sub_1C3E564(&Method_ServantExceedMaster___c__DisplayClass8_0__GetExceedCount_b__0__);
    sub_1C3E564(&ServantExceedMaster___c__DisplayClass8_0_TypeInfo);
    sub_1C3E564(&ServantExceedMaster___c_TypeInfo);
    byte_4C5768B = 1;
  }
  v7 = sub_1C3E7B0(ServantExceedMaster___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_20;
  *(_DWORD *)(v7 + 16) = rarity;
  if ( addLevel < 1 )
    return 0;
  list = this->fields.list;
  v11 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_ServantExceedEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_ServantExceedMaster___c__DisplayClass8_0__GetExceedCount_b__0__,
    0);
  v12 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_ServantExceedEntity___);
  v13 = ServantExceedMaster___c_TypeInfo;
  v14 = v12;
  if ( !ServantExceedMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantExceedMaster___c_TypeInfo);
    v13 = ServantExceedMaster___c_TypeInfo;
  }
  _9__8_1 = (System_Func_object__int__o *)v13->static_fields->__9__8_1;
  if ( !_9__8_1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = ServantExceedMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__8_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_ServantExceedEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__8_1, v16, Method_ServantExceedMaster___c__GetExceedCount_b__8_1__, 0);
    static_fields = ServantExceedMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_1 = (struct System_Func_ServantExceedEntity__int__o *)_9__8_1;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__8_1, (int32_t)_9__8_1, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v14,
                                                               (System_Func_TSource__TKey__o *)_9__8_1,
                                                               (const MethodInfo_31292A0 *)Method_System_Linq_Enumerable_OrderBy_ServantExceedEntity__int___);
  v8 = System_Linq_Enumerable__ToArray_object_(
         v20,
         (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_ServantExceedEntity___);
  if ( !v8 )
LABEL_20:
    sub_1C3E7C0(v8, v9);
  max_length = v8->max_length;
  if ( max_length < 1 )
    return 0;
  v22 = 0;
  while ( 1 )
  {
    if ( max_length == v22 )
      sub_1C3E7C8(v8, v9);
    v23 = v8->m_Items[v22];
    if ( !v23 )
      goto LABEL_20;
    if ( SHIDWORD(v23[2].klass) >= addLevel )
      return HIDWORD(v23[1].monitor);
    if ( max_length == ++v22 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantExceedMaster__GetFrameType(
        ServantExceedMaster_o *this,
        int32_t rarity,
        int32_t exceedCount,
        bool isGrandServant,
        const MethodInfo *method)
{
  ServantExceedEntity_o *Entity; // x0
  __int64 v10; // x8

  if ( (byte_4C57686 & 1) == 0 )
  {
    sub_1C3E564(&Rarity_TypeInfo);
    byte_4C57686 = 1;
  }
  Entity = ServantExceedMaster__GetEntity(this, rarity, exceedCount, (const MethodInfo *)isGrandServant);
  if ( Entity )
  {
    v10 = 40;
    if ( isGrandServant )
      v10 = 56;
    return *(_DWORD *)((char *)&Entity->klass + v10);
  }
  else
  {
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    return Rarity__getFrameTypeImage(rarity, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantExceedMaster__GetFrameTypeFixRarity(
        ServantExceedMaster_o *this,
        int32_t svtId,
        int32_t exceedCount,
        int32_t actualRarity,
        bool isGrandServant,
        const MethodInfo *method)
{
  ServantExceedEntity_o *Entity; // x0
  __int64 v11; // x8

  if ( (byte_4C57688 & 1) == 0 )
  {
    sub_1C3E564(&Rarity_TypeInfo);
    byte_4C57688 = 1;
  }
  Entity = ServantExceedMaster__GetEntity(this, actualRarity, exceedCount, *(const MethodInfo **)&actualRarity);
  if ( Entity )
  {
    v11 = 40;
    if ( isGrandServant )
      v11 = 56;
    return *(_DWORD *)((char *)&Entity->klass + v11);
  }
  else
  {
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    return Rarity__getFrameTypeImage(actualRarity, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantExceedMaster__GetFrameType_42735928(
        ServantExceedMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        bool isGrandServant,
        const MethodInfo *method)
{
  ServantExceedMaster_o *v10; // x22
  int32_t Rarity_42736128; // w20
  const MethodInfo *v12; // x3
  ServantExceedEntity_o *Entity; // x0
  __int64 v14; // x8

  v10 = this;
  if ( (byte_4C57687 & 1) == 0 )
  {
    this = (ServantExceedMaster_o *)sub_1C3E564(&Rarity_TypeInfo);
    byte_4C57687 = 1;
  }
  Rarity_42736128 = ServantExceedMaster__GetRarity_42736128(this, svtId, limitCount, *(const MethodInfo **)&exceedCount);
  Entity = ServantExceedMaster__GetEntity(v10, Rarity_42736128, exceedCount, v12);
  if ( Entity )
  {
    v14 = 40;
    if ( isGrandServant )
      v14 = 56;
    return *(_DWORD *)((char *)&Entity->klass + v14);
  }
  else
  {
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    return Rarity__getFrameTypeImage(Rarity_42736128, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantExceedMaster__GetFrameType_42736592(
        ServantExceedMaster_o *this,
        int32_t *rarity,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        const MethodInfo *method)
{
  ServantExceedMaster_o *v10; // x21
  int32_t Rarity_42736128; // w0
  const MethodInfo *v12; // x3
  ServantExceedEntity_o *Entity; // x0
  int32_t v15; // w19

  v10 = this;
  if ( (byte_4C57689 & 1) == 0 )
  {
    this = (ServantExceedMaster_o *)sub_1C3E564(&Rarity_TypeInfo);
    byte_4C57689 = 1;
  }
  Rarity_42736128 = ServantExceedMaster__GetRarity_42736128(this, svtId, limitCount, *(const MethodInfo **)&limitCount);
  *rarity = Rarity_42736128;
  Entity = ServantExceedMaster__GetEntity(v10, Rarity_42736128, exceedCount, v12);
  if ( Entity )
    return Entity->fields.frameType;
  v15 = *rarity;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  return Rarity__getFrameTypeImage(v15, 0, 0);
}


int32_t ServantExceedMaster__GetRarity(ServantExceedMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return ServantExceedMaster__GetRarity_42736128(this, svtId, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantExceedMaster__GetRarityIcon(
        ServantExceedMaster_o *this,
        int32_t actualRarity,
        int32_t exceedCount,
        int32_t defValue,
        bool isGrandServant,
        const MethodInfo *method)
{
  int32_t v7; // w19
  ServantExceedEntity_o *Entity; // x0
  __int64 v9; // x8

  v7 = defValue;
  Entity = ServantExceedMaster__GetEntity(this, actualRarity, exceedCount, *(const MethodInfo **)&defValue);
  if ( Entity )
  {
    v9 = 44;
    if ( isGrandServant )
      v9 = 60;
    return *(_DWORD *)((char *)&Entity->klass + v9);
  }
  return v7;
}


int32_t ServantExceedMaster__GetRarity_42736128(
        ServantExceedMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  ServantLimitEntity_o *v9; // x0
  ServantLimitAddEntity_o *v11; // [xsp+8h] [xbp-38h] BYREF
  ServantLimitEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C5768A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5768A = 1;
  }
  entity = 0;
  v11 = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)Instance, &entity, svtId, limitCount, 0) )
    goto LABEL_14;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
  {
LABEL_17:
    sub_1C3E7C0(Instance, v7);
  }
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Instance, &v11, svtId, limitCount, v8) )
  {
LABEL_14:
    v9 = entity;
    if ( !entity )
      return (int)v9;
LABEL_15:
    LODWORD(v9) = v9->fields.rarity;
    return (int)v9;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !v11 || !Instance )
    goto LABEL_17;
  v9 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, v11->fields.battleCharaLimitCount, 0);
  if ( v9 )
    goto LABEL_15;
  return (int)v9;
}


// local variable allocation has failed, the output may be wrong!
bool ServantExceedMaster__TryGetEntity(
        ServantExceedMaster_o *this,
        ServantExceedEntity_o **entity,
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C5768E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__TryGetEntity__);
    byte_4C5768E = 1;
  }
  PK = (Il2CppObject *)ServantExceedEntity__CreatePK(rarity, exceedCount, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33B7A5C *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__TryGetEntity__);
}


ServantExceedEntity_o *ServantExceedMaster__getEntity(
        ServantExceedMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4C57685 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C57685 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0)) == 0 )
  {
    sub_1C3E7C0(Instance, v10);
  }
  return ServantExceedMaster__GetEntity(this, *((_DWORD *)Instance + 6), exceedCount, v11);
}


void ServantExceedMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C5768F & 1) == 0 )
  {
    sub_1C3E564(&ServantExceedMaster___c_TypeInfo);
    byte_4C5768F = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(ServantExceedMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantExceedMaster___c_TypeInfo->static_fields->__9 = (struct ServantExceedMaster___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)ServantExceedMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantExceedMaster___c___ctor(ServantExceedMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantExceedMaster___c___GetExceedCount_b__8_1(
        ServantExceedMaster___c_o *this,
        ServantExceedEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C3E7C0(this, 0);
  return e->fields.exceedCount;
}


void ServantExceedMaster___c__DisplayClass8_0___ctor(
        ServantExceedMaster___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantExceedMaster___c__DisplayClass8_0___GetExceedCount_b__0(
        ServantExceedMaster___c__DisplayClass8_0_o *this,
        ServantExceedEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C3E7C0(this, 0);
  return e->fields.rarity == this->fields.rarity;
}