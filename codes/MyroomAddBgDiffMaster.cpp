void MyroomAddBgDiffMaster___ctor(MyroomAddBgDiffMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37EE8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_MyroomAddBgDiffMaster__MyroomAddBgDiffEntity__string___ctor__);
    byte_4C37EE8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    554,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_MyroomAddBgDiffMaster__MyroomAddBgDiffEntity__string___ctor__);
}


int32_t MyroomAddBgDiffMaster__GetDisplayObjectId(
        MyroomAddBgDiffMaster_o *this,
        int32_t type,
        int32_t backGroundOverwriteId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v10; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  MyroomAddBgDiffMaster___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v15; // x21
  struct MyroomAddBgDiffMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x0
  MyroomAddBgDiffMaster___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  System_Func_object__bool__o *_9__0_2; // x20
  Il2CppObject *v23; // x21
  struct MyroomAddBgDiffMaster___c_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x0

  if ( (byte_4C37EE7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_MyroomAddBgDiffEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderByDescending_MyroomAddBgDiffEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_MyroomAddBgDiffEntity___);
    sub_1C32C20(&System_Func_MyroomAddBgDiffEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_MyroomAddBgDiffEntity__int__TypeInfo);
    sub_1C32C20(&Method_MyroomAddBgDiffMaster___c__GetDisplayObjectId_b__0_1__);
    sub_1C32C20(&Method_MyroomAddBgDiffMaster___c__GetDisplayObjectId_b__0_2__);
    sub_1C32C20(&Method_MyroomAddBgDiffMaster___c__DisplayClass0_0__GetDisplayObjectId_b__0__);
    sub_1C32C20(&MyroomAddBgDiffMaster___c__DisplayClass0_0_TypeInfo);
    sub_1C32C20(&MyroomAddBgDiffMaster___c_TypeInfo);
    byte_4C37EE7 = 1;
  }
  v7 = sub_1C32E6C(MyroomAddBgDiffMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  *(_DWORD *)(v7 + 16) = backGroundOverwriteId;
  *(_DWORD *)(v7 + 20) = type;
  list = this->fields.list;
  v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_MyroomAddBgDiffEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_MyroomAddBgDiffMaster___c__DisplayClass0_0__GetDisplayObjectId_b__0__,
    0);
  v11 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_MyroomAddBgDiffEntity___);
  v12 = MyroomAddBgDiffMaster___c_TypeInfo;
  v13 = v11;
  if ( !MyroomAddBgDiffMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyroomAddBgDiffMaster___c_TypeInfo);
    v12 = MyroomAddBgDiffMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v12->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = MyroomAddBgDiffMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_MyroomAddBgDiffEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v15, Method_MyroomAddBgDiffMaster___c__GetDisplayObjectId_b__0_1__, 0);
    static_fields = MyroomAddBgDiffMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_1 = (struct System_Func_MyroomAddBgDiffEntity__int__o *)_9__0_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__0_1, (int32_t)_9__0_1, v17, v18);
  }
  v19 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v13,
          (System_Func_TSource__TKey__o *)_9__0_1,
          (const MethodInfo_310D0C4 *)Method_System_Linq_Enumerable_OrderByDescending_MyroomAddBgDiffEntity__int___);
  v20 = MyroomAddBgDiffMaster___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
  if ( !MyroomAddBgDiffMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyroomAddBgDiffMaster___c_TypeInfo);
    v20 = MyroomAddBgDiffMaster___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__bool__o *)v20->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = MyroomAddBgDiffMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__0_2 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_MyroomAddBgDiffEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__0_2, v23, Method_MyroomAddBgDiffMaster___c__GetDisplayObjectId_b__0_2__, 0);
    v24 = MyroomAddBgDiffMaster___c_TypeInfo->static_fields;
    v24->__9__0_2 = (struct System_Func_MyroomAddBgDiffEntity__bool__o *)_9__0_2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v24->__9__0_2, (int32_t)_9__0_2, v25, v26);
  }
  v27 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
          v21,
          (System_Func_TSource__bool__o *)_9__0_2,
          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_MyroomAddBgDiffEntity___);
  if ( v27 )
    LODWORD(v27) = HIDWORD(v27[1].monitor);
  return (int)v27;
}


// local variable allocation has failed, the output may be wrong!
MyroomAddBgDiffEntity_o *MyroomAddBgDiffMaster__GetEntity(
        MyroomAddBgDiffMaster_o *this,
        int32_t overwriteId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37EE9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_MyroomAddBgDiffMaster__MyroomAddBgDiffEntity__string__GetEntity__);
    byte_4C37EE9 = 1;
  }
  PK = (Il2CppObject *)MyroomAddBgDiffEntity__CreatePK(overwriteId, type, priority, *(const MethodInfo **)&priority);
  return (MyroomAddBgDiffEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_339B2F0 *)Method_DataMasterBase_MyroomAddBgDiffMaster__MyroomAddBgDiffEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool MyroomAddBgDiffMaster__TryGetEntity(
        MyroomAddBgDiffMaster_o *this,
        MyroomAddBgDiffEntity_o **entity,
        int32_t overwriteId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C37EEA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_MyroomAddBgDiffMaster__MyroomAddBgDiffEntity__string__TryGetEntity__);
    byte_4C37EEA = 1;
  }
  PK = (Il2CppObject *)MyroomAddBgDiffEntity__CreatePK(overwriteId, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_MyroomAddBgDiffMaster__MyroomAddBgDiffEntity__string__TryGetEntity__);
}


void MyroomAddBgDiffMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37EEB & 1) == 0 )
  {
    sub_1C32C20(&MyroomAddBgDiffMaster___c_TypeInfo);
    byte_4C37EEB = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(MyroomAddBgDiffMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyroomAddBgDiffMaster___c_TypeInfo->static_fields->__9 = (struct MyroomAddBgDiffMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)MyroomAddBgDiffMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void MyroomAddBgDiffMaster___c___ctor(MyroomAddBgDiffMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t MyroomAddBgDiffMaster___c___GetDisplayObjectId_b__0_1(
        MyroomAddBgDiffMaster___c_o *this,
        MyroomAddBgDiffEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C32E7C(this);
  return entity->fields.priority;
}


bool MyroomAddBgDiffMaster___c___GetDisplayObjectId_b__0_2(
        MyroomAddBgDiffMaster___c_o *this,
        MyroomAddBgDiffEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C32E7C(this);
  return MyroomAddBgDiffEntity__IsOpen(entity, (const MethodInfo *)entity);
}


void MyroomAddBgDiffMaster___c__DisplayClass0_0___ctor(
        MyroomAddBgDiffMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyroomAddBgDiffMaster___c__DisplayClass0_0___GetDisplayObjectId_b__0(
        MyroomAddBgDiffMaster___c__DisplayClass0_0_o *this,
        MyroomAddBgDiffEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C32E7C(this);
  return entity->fields.overwriteId == this->fields.backGroundOverwriteId && entity->fields.type == this->fields.type;
}