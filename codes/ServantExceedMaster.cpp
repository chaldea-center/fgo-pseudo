void ServantExceedMaster___ctor(ServantExceedMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939019 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string___ctor__);
    byte_5939019 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    163,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantExceedEntity_o *ServantExceedMaster__GetEntity(
        ServantExceedMaster_o *this,
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_593901A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__GetEntity__);
    byte_593901A = 1;
  }
  PK = (Il2CppObject *)ServantExceedEntity__CreatePK(rarity, exceedCount, *(const MethodInfo **)&exceedCount);
  return (ServantExceedEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3EE2044 *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__GetEntity__);
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
  __int64 v13; // x1
  ServantExceedMaster___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  struct ServantExceedMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__7_1; // x21
  Il2CppObject *v18; // x22
  struct ServantExceedMaster___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  int max_length; // w8
  int v28; // w10
  Il2CppObject *v29; // x11

  if ( (byte_5939018 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_ServantExceedEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_ServantExceedEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_ServantExceedEntity___);
    sub_21FFC50(&System_Func_ServantExceedEntity__int__TypeInfo);
    sub_21FFC50(&System_Func_ServantExceedEntity__bool__TypeInfo);
    sub_21FFC50(&Method_ServantExceedMaster___c__GetExceedCount_b__7_1__);
    sub_21FFC50(&Method_ServantExceedMaster___c__DisplayClass7_0__GetExceedCount_b__0__);
    sub_21FFC50(&ServantExceedMaster___c__DisplayClass7_0_TypeInfo);
    sub_21FFC50(&ServantExceedMaster___c_TypeInfo);
    byte_5939018 = 1;
  }
  v7 = sub_21FFEBC(ServantExceedMaster___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_20;
  *(_DWORD *)(v7 + 16) = rarity;
  if ( addLevel < 1 )
    return 0;
  list = this->fields.list;
  v11 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ServantExceedEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_ServantExceedMaster___c__DisplayClass7_0__GetExceedCount_b__0__,
    0);
  v12 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_ServantExceedEntity___);
  v14 = ServantExceedMaster___c_TypeInfo;
  v15 = v12;
  if ( !*(&ServantExceedMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantExceedMaster___c_TypeInfo, v13);
    v14 = ServantExceedMaster___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__7_1 = (System_Func_object__int__o *)static_fields->__9__7_1;
  if ( !_9__7_1 )
  {
    if ( !*(&v14->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v14, v13);
      static_fields = ServantExceedMaster___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__7_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_ServantExceedEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_1, v18, Method_ServantExceedMaster___c__GetExceedCount_b__7_1__, 0);
    v19 = ServantExceedMaster___c_TypeInfo->static_fields;
    v19->__9__7_1 = (struct System_Func_ServantExceedEntity__int__o *)_9__7_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v19->__9__7_1, (int32_t)_9__7_1, v20, v21, v22, v23, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v15,
                                                               (System_Func_TSource__TKey__o *)_9__7_1,
                                                               (const MethodInfo_38556D8 *)Method_System_Linq_Enumerable_OrderBy_ServantExceedEntity__int___);
  v8 = System_Linq_Enumerable__ToArray_object_(
         v26,
         (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_ServantExceedEntity___);
  if ( !v8 )
LABEL_20:
    sub_21FFECC(v8, v9);
  max_length = v8->max_length;
  if ( max_length < 1 )
    return 0;
  v28 = 0;
  while ( 1 )
  {
    if ( max_length == v28 )
      sub_21FFED4(v8);
    v29 = v8->m_Items[v28];
    if ( !v29 )
      goto LABEL_20;
    if ( SHIDWORD(v29[2].klass) >= addLevel )
      return HIDWORD(v29[1].monitor);
    if ( (max_length & ~(max_length >> 31)) == ++v28 )
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
  __int64 v10; // x1
  __int64 v11; // x8

  if ( (byte_5939013 & 1) == 0 )
  {
    sub_21FFC50(&Rarity_TypeInfo);
    byte_5939013 = 1;
  }
  Entity = ServantExceedMaster__GetEntity(this, rarity, exceedCount, (const MethodInfo *)isGrandServant);
  if ( Entity )
  {
    v11 = 40;
    if ( isGrandServant )
      v11 = 56;
    return *(_DWORD *)((char *)&Entity->klass + v11);
  }
  else
  {
    if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v10);
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
  __int64 v11; // x1
  __int64 v12; // x8

  if ( (byte_5939015 & 1) == 0 )
  {
    sub_21FFC50(&Rarity_TypeInfo);
    byte_5939015 = 1;
  }
  Entity = ServantExceedMaster__GetEntity(this, actualRarity, exceedCount, *(const MethodInfo **)&actualRarity);
  if ( Entity )
  {
    v12 = 40;
    if ( isGrandServant )
      v12 = 56;
    return *(_DWORD *)((char *)&Entity->klass + v12);
  }
  else
  {
    if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v11);
    return Rarity__getFrameTypeImage(actualRarity, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantExceedMaster__GetFrameType_49643460(
        ServantExceedMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        bool isGrandServant,
        const MethodInfo *method)
{
  ServantExceedMaster_o *v10; // x22
  int32_t Rarity_49643660; // w21
  const MethodInfo *v12; // x3
  ServantExceedEntity_o *Entity; // x0
  __int64 v14; // x1
  __int64 v15; // x8

  v10 = this;
  if ( (byte_5939014 & 1) == 0 )
  {
    this = (ServantExceedMaster_o *)sub_21FFC50(&Rarity_TypeInfo);
    byte_5939014 = 1;
  }
  Rarity_49643660 = ServantExceedMaster__GetRarity_49643660(this, svtId, limitCount, *(const MethodInfo **)&exceedCount);
  Entity = ServantExceedMaster__GetEntity(v10, Rarity_49643660, exceedCount, v12);
  if ( Entity )
  {
    v15 = 40;
    if ( isGrandServant )
      v15 = 56;
    return *(_DWORD *)((char *)&Entity->klass + v15);
  }
  else
  {
    if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v14);
    return Rarity__getFrameTypeImage(Rarity_49643660, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantExceedMaster__GetFrameType_49644120(
        ServantExceedMaster_o *this,
        int32_t *rarity,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        const MethodInfo *method)
{
  ServantExceedMaster_o *v10; // x21
  int32_t Rarity_49643660; // w0
  const MethodInfo *v12; // x3
  ServantExceedEntity_o *Entity; // x0
  __int64 v14; // x1
  int32_t v16; // w19

  v10 = this;
  if ( (byte_5939016 & 1) == 0 )
  {
    this = (ServantExceedMaster_o *)sub_21FFC50(&Rarity_TypeInfo);
    byte_5939016 = 1;
  }
  Rarity_49643660 = ServantExceedMaster__GetRarity_49643660(this, svtId, limitCount, *(const MethodInfo **)&limitCount);
  *rarity = Rarity_49643660;
  Entity = ServantExceedMaster__GetEntity(v10, Rarity_49643660, exceedCount, v12);
  if ( Entity )
    return Entity->fields.frameType;
  v16 = *rarity;
  if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v14);
  return Rarity__getFrameTypeImage(v16, 0, 0);
}


int32_t ServantExceedMaster__GetRarity(ServantExceedMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return ServantExceedMaster__GetRarity_49643660(this, svtId, 0, v3);
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


int32_t ServantExceedMaster__GetRarity_49643660(
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

  if ( (byte_5939017 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939017 = 1;
  }
  entity = 0;
  v13 = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)Instance, &entity, svtId, limitCount, v8) )
    goto LABEL_14;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
  {
LABEL_17:
    sub_21FFECC(Instance, v7);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !v13 || !Instance )
    goto LABEL_17;
  v11 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, v13->fields.battleCharaLimitCount, v10);
  entity = v11;
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

  if ( (byte_593901B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__TryGetEntity__);
    byte_593901B = 1;
  }
  PK = (Il2CppObject *)ServantExceedEntity__CreatePK(rarity, exceedCount, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__TryGetEntity__);
}


void ServantExceedMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593901C & 1) == 0 )
  {
    sub_21FFC50(&ServantExceedMaster___c_TypeInfo);
    byte_593901C = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantExceedMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantExceedMaster___c_TypeInfo->static_fields->__9 = (struct ServantExceedMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantExceedMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantExceedMaster___c___ctor(ServantExceedMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantExceedMaster___c___GetExceedCount_b__7_1(
        ServantExceedMaster___c_o *this,
        ServantExceedEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_21FFECC(this, 0);
  return e->fields.exceedCount;
}


void ServantExceedMaster___c__DisplayClass7_0___ctor(
        ServantExceedMaster___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantExceedMaster___c__DisplayClass7_0___GetExceedCount_b__0(
        ServantExceedMaster___c__DisplayClass7_0_o *this,
        ServantExceedEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_21FFECC(this, 0);
  return e->fields.rarity == this->fields.rarity;
}