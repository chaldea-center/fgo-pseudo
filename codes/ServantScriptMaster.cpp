void __fastcall ServantScriptMaster___ctor(ServantScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B960 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string___ctor__);
    byte_4A5B960 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    10,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantScriptEntity_o *__fastcall ServantScriptMaster__GetEntity(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t form,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B95D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__GetEntity__);
    sub_1B885B0(&ServantScriptEntity_TypeInfo);
    byte_4A5B95D = 1;
  }
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  PK = (Il2CppObject *)ServantScriptEntity__CreatePK(id, form, *(const MethodInfo **)&form);
  return (ServantScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantScriptEntity__o *__fastcall ServantScriptMaster__GetEntityListFromId(
        ServantScriptMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  v3 = id;
  if ( (byte_4A5B961 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantScriptEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantScriptEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantScriptEntity__TypeInfo);
    sub_1B885B0(&ServantScriptEntity_TypeInfo);
    byte_4A5B961 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&id = list;
        methodPtr_low = LOBYTE(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantScriptEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantScriptEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v13 = Method_System_Collections_Generic_List_ServantScriptEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v15[4] = *(Il2CppClass **)&id;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), id, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        return (System_Collections_Generic_List_ServantScriptEntity__o *)v7;
    }
LABEL_18:
    sub_1B8880C(list, *(_QWORD *)&id);
  }
  return (System_Collections_Generic_List_ServantScriptEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
ServantScriptEntity_o *__fastcall ServantScriptMaster__GetEntityWithRetryFormId0(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t formId,
        const MethodInfo *method)
{
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v9; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v11; // x22
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  const MethodInfo *v15; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v16; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v17; // x20
  __int64 v18; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v19; // x10
  __int64 v20; // x0
  __int64 methodPtr_low; // x11
  ServantScriptEntity_o *v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5B962 & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&ServantScriptEntity_TypeInfo);
    byte_4A5B962 = 1;
  }
  v23 = 0LL;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  PK = ServantScriptEntity__CreatePK(id, formId, *(const MethodInfo **)&formId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_30;
  klass = lookup->klass;
  v11 = lookup;
  v12 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v11,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    PK = ServantScriptEntity__CreatePK(id, 0, v15);
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_30:
    sub_1B8880C(lookup, v9);
  v16 = lookup->klass;
  v17 = lookup;
  v18 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v19 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v16->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_21;
    }
    v20 = (__int64)&v16->vtable[*(_DWORD *)v19 + 1].method;
  }
  else
  {
LABEL_21:
    v20 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, ServantScriptEntity_o **, _QWORD))v20)(
          v17,
          PK,
          &v23,
          *(_QWORD *)(v20 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v23 )
    return 0LL;
  methodPtr_low = LOBYTE(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v23->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ServantScriptEntity_c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantScriptEntity_TypeInfo )
    return v23;
  return 0LL;
}


ServantScriptEntity_o *__fastcall ServantScriptMaster__GetEntity_39736036(
        ServantScriptMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return ServantScriptMaster__GetEntity(this, id, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantScriptMaster__TryGetEntity(
        ServantScriptMaster_o *this,
        ServantScriptEntity_o **entity,
        int32_t id,
        int32_t form,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B95E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__TryGetEntity__);
    sub_1B885B0(&ServantScriptEntity_TypeInfo);
    byte_4A5B95E = 1;
  }
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  PK = (Il2CppObject *)ServantScriptEntity__CreatePK(id, form, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__TryGetEntity__);
}


int32_t __fastcall ServantScriptMaster__getId(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  int v3; // w20
  int32_t v5; // w20
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  System_String_o *v9; // x19
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  MyroomServantSpecialImageEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  int32_t imageLimitCounta; // [xsp+18h] [xbp-28h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-24h] BYREF

  v3 = imageLimitCount;
  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_4A5B95F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B95F = 1;
  }
  entity = 0LL;
  if ( v3 >= 201 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v5 = ImageLimitCount__SpecialImageLimitCountToSpecialNum(v3, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    if ( !Master_object )
      goto LABEL_19;
    Master_object = (Il2CppObject *)MyroomServantSpecialImageMaster__TryGetEntity(
                                      (MyroomServantSpecialImageMaster_o *)Master_object,
                                      &entity,
                                      svtId,
                                      v5,
                                      0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
        return entity->fields.imageId;
LABEL_19:
      sub_1B8880C(Master_object, v7);
    }
    v3 = imageLimitCounta;
  }
  if ( v3 >= 11 )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_19;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Master_object )
      goto LABEL_19;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Master_object, &svtIda, &imageLimitCounta, 0LL);
  }
  v9 = System_Int32__ToString((int32_t)&svtIda, 0LL);
  v10 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v11 = System_String__Concat_61707032(v9, v10, 0LL);
  return System_Int32__Parse(v11, 0LL);
}


UnityEngine_Vector2_o __fastcall ServantScriptMaster__getOffset(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t offsetKind,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o Offset_39736976; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  Offset_39736976 = ServantScriptMaster__getOffset_39736976(this, id, 0, offsetKind, v4);
  y = Offset_39736976.fields.y;
  x = Offset_39736976.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall ServantScriptMaster__getOffset_39736976(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t formId,
        int32_t offsetKind,
        const MethodInfo *method)
{
  int32_t v5; // w19
  ServantScriptEntity_o *EntityWithRetryFormId0; // x0
  __int64 v10; // x1
  __int64 v11; // x9
  __int64 v12; // x10
  float x; // s0
  float y; // s1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x3
  UnityEngine_Vector2_o Offset; // kr00_8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v5 = offsetKind;
  if ( (byte_4A5B963 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantScriptAddMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__);
    byte_4A5B963 = 1;
  }
  entity = 0LL;
  if ( (unsigned int)(v5 - 3) > 1 )
  {
LABEL_16:
    EntityWithRetryFormId0 = ServantScriptMaster__GetEntityWithRetryFormId0(
                               this,
                               id,
                               formId,
                               *(const MethodInfo **)&offsetKind);
    if ( EntityWithRetryFormId0 || (EntityWithRetryFormId0 = ServantScriptMaster__GetEntity(this, 1, 0, v16)) != 0LL )
    {
      Offset = ServantScriptEntity__getOffset(EntityWithRetryFormId0, v5, v15);
      y = Offset.fields.y;
      x = Offset.fields.x;
      goto LABEL_21;
    }
LABEL_20:
    sub_1B8880C(EntityWithRetryFormId0, v10);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  EntityWithRetryFormId0 = (ServantScriptEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
  if ( !EntityWithRetryFormId0 )
    goto LABEL_20;
  EntityWithRetryFormId0 = (ServantScriptEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)EntityWithRetryFormId0,
                                                      &entity,
                                                      id,
                                                      (const MethodInfo_311D988 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)EntityWithRetryFormId0 & 1) == 0 )
  {
    v5 = 1;
    goto LABEL_16;
  }
  if ( !entity )
    goto LABEL_20;
  v11 = 28LL;
  if ( v5 == 4 )
    v11 = 36LL;
  if ( v5 == 4 )
    v12 = 32LL;
  else
    v12 = 24LL;
  x = (float)*(int *)((char *)&entity->klass + v12);
  y = (float)*(int *)((char *)&entity->klass + v11);
LABEL_21:
  result.fields.y = y;
  result.fields.x = x;
  return result;
}