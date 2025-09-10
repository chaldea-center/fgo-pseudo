void ServantExceedMaster___ctor(ServantExceedMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27BDC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string___ctor__);
    byte_4C27BDC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    161,
    (const MethodInfo_338A52C *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantExceedEntity_o *ServantExceedMaster__GetEntity(
        ServantExceedMaster_o *this,
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27BDD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__GetEntity__);
    byte_4C27BDD = 1;
  }
  PK = (Il2CppObject *)ServantExceedEntity__CreatePK(rarity, exceedCount, *(const MethodInfo **)&exceedCount);
  return (ServantExceedEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_338C850 *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__GetEntity__);
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
  __int64 v21; // x2
  int max_length; // w8
  int v23; // w9
  Il2CppObject *v24; // x10

  if ( (byte_4C27BDB & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderBy_ServantExceedEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_ServantExceedEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_ServantExceedEntity___);
    sub_1C2D490(&System_Func_ServantExceedEntity__int__TypeInfo);
    sub_1C2D490(&System_Func_ServantExceedEntity__bool__TypeInfo);
    sub_1C2D490(&Method_ServantExceedMaster___c__GetExceedCount_b__8_1__);
    sub_1C2D490(&Method_ServantExceedMaster___c__DisplayClass8_0__GetExceedCount_b__0__);
    sub_1C2D490(&ServantExceedMaster___c__DisplayClass8_0_TypeInfo);
    sub_1C2D490(&ServantExceedMaster___c_TypeInfo);
    byte_4C27BDB = 1;
  }
  v7 = sub_1C2D6DC(ServantExceedMaster___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_20;
  *(_DWORD *)(v7 + 16) = rarity;
  if ( addLevel < 1 )
    return 0;
  list = this->fields.list;
  v11 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_ServantExceedEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_ServantExceedMaster___c__DisplayClass8_0__GetExceedCount_b__0__,
    0);
  v12 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_ServantExceedEntity___);
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
    _9__8_1 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_ServantExceedEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__8_1, v16, Method_ServantExceedMaster___c__GetExceedCount_b__8_1__, 0);
    static_fields = ServantExceedMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_1 = (struct System_Func_ServantExceedEntity__int__o *)_9__8_1;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__8_1, (int32_t)_9__8_1, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v14,
                                                               (System_Func_TSource__TKey__o *)_9__8_1,
                                                               (const MethodInfo_30FE0A4 *)Method_System_Linq_Enumerable_OrderBy_ServantExceedEntity__int___);
  v8 = System_Linq_Enumerable__ToArray_object_(
         v20,
         (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_ServantExceedEntity___);
  if ( !v8 )
LABEL_20:
    sub_1C2D6EC(v8, v9);
  max_length = v8->max_length;
  if ( max_length < 1 )
    return 0;
  v23 = 0;
  while ( 1 )
  {
    if ( max_length == v23 )
      sub_1C2D6F4(v8, v9, v21);
    v24 = v8->m_Items[v23];
    if ( !v24 )
      goto LABEL_20;
    if ( SHIDWORD(v24[2].klass) >= addLevel )
      return HIDWORD(v24[1].monitor);
    if ( max_length == ++v23 )
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

  if ( (byte_4C27BD6 & 1) == 0 )
  {
    sub_1C2D490(&Rarity_TypeInfo);
    byte_4C27BD6 = 1;
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

  if ( (byte_4C27BD8 & 1) == 0 )
  {
    sub_1C2D490(&Rarity_TypeInfo);
    byte_4C27BD8 = 1;
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
int32_t ServantExceedMaster__GetFrameType_42450052(
        ServantExceedMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        bool isGrandServant,
        const MethodInfo *method)
{
  ServantExceedMaster_o *v10; // x22
  int32_t Rarity_42450252; // w20
  const MethodInfo *v12; // x3
  ServantExceedEntity_o *Entity; // x0
  __int64 v14; // x8

  v10 = this;
  if ( (byte_4C27BD7 & 1) == 0 )
  {
    this = (ServantExceedMaster_o *)sub_1C2D490(&Rarity_TypeInfo);
    byte_4C27BD7 = 1;
  }
  Rarity_42450252 = ServantExceedMaster__GetRarity_42450252(this, svtId, limitCount, *(const MethodInfo **)&exceedCount);
  Entity = ServantExceedMaster__GetEntity(v10, Rarity_42450252, exceedCount, v12);
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
    return Rarity__getFrameTypeImage(Rarity_42450252, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantExceedMaster__GetFrameType_42450708(
        ServantExceedMaster_o *this,
        int32_t *rarity,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        const MethodInfo *method)
{
  ServantExceedMaster_o *v10; // x21
  int32_t Rarity_42450252; // w0
  const MethodInfo *v12; // x3
  ServantExceedEntity_o *Entity; // x0
  int32_t v15; // w19

  v10 = this;
  if ( (byte_4C27BD9 & 1) == 0 )
  {
    this = (ServantExceedMaster_o *)sub_1C2D490(&Rarity_TypeInfo);
    byte_4C27BD9 = 1;
  }
  Rarity_42450252 = ServantExceedMaster__GetRarity_42450252(this, svtId, limitCount, *(const MethodInfo **)&limitCount);
  *rarity = Rarity_42450252;
  Entity = ServantExceedMaster__GetEntity(v10, Rarity_42450252, exceedCount, v12);
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

  return ServantExceedMaster__GetRarity_42450252(this, svtId, 0, v3);
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


int32_t ServantExceedMaster__GetRarity_42450252(
        ServantExceedMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  const MethodInfo *v9; // x4
  const MethodInfo *v10; // x3
  ServantLimitEntity_o *v11; // x0
  ServantLimitAddEntity_o *v13; // [xsp+8h] [xbp-38h] BYREF
  ServantLimitEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C27BDA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27BDA = 1;
  }
  entity = 0;
  v13 = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)Instance, &entity, svtId, limitCount, v8) )
    goto LABEL_14;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
  {
LABEL_17:
    sub_1C2D6EC(Instance, v7);
  }
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Instance, &v13, svtId, limitCount, v9) )
  {
LABEL_14:
    v11 = entity;
    if ( !entity )
      return (int)v11;
LABEL_15:
    LODWORD(v11) = v11->fields.rarity;
    return (int)v11;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !v13 || !Instance )
    goto LABEL_17;
  v11 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, v13->fields.battleCharaLimitCount, v10);
  if ( v11 )
    goto LABEL_15;
  return (int)v11;
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

  if ( (byte_4C27BDE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__TryGetEntity__);
    byte_4C27BDE = 1;
  }
  PK = (Il2CppObject *)ServantExceedEntity__CreatePK(rarity, exceedCount, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__TryGetEntity__);
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
  const MethodInfo *v12; // x3

  if ( (byte_4C27BD5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27BD5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, v11)) == 0 )
  {
    sub_1C2D6EC(Instance, v10);
  }
  return ServantExceedMaster__GetEntity(this, *((_DWORD *)Instance + 6), exceedCount, v12);
}


void ServantExceedMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C27BDF & 1) == 0 )
  {
    sub_1C2D490(&ServantExceedMaster___c_TypeInfo);
    byte_4C27BDF = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ServantExceedMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantExceedMaster___c_TypeInfo->static_fields->__9 = (struct ServantExceedMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)ServantExceedMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
  return e->fields.rarity == this->fields.rarity;
}