void __fastcall ServantScriptMaster___ctor(ServantScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B029FA & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string___ctor__, method);
    byte_4B029FA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    10,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantScriptEntity_o *__fastcall ServantScriptMaster__GetEntity(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t form,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *PK; // x1

  if ( (byte_4B029F7 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__GetEntity__, *(_QWORD *)&id);
    sub_1BC3008(&ServantScriptEntity_TypeInfo, v7);
    byte_4B029F7 = 1;
  }
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  PK = (Il2CppObject *)ServantScriptEntity__CreatePK(id, form, 0LL);
  return (ServantScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_32B3B28 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantScriptEntity__o *__fastcall ServantScriptMaster__GetEntityListFromId(
        ServantScriptMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v11; // x22
  int32_t v12; // w23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  v3 = id;
  if ( (byte_4B029FB & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_ServantScriptEntity__get_Count__, *(_QWORD *)&id);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_ServantScriptEntity__get_Item__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantScriptEntity__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantScriptEntity___ctor__, v7);
    sub_1BC3008(&System_Collections_Generic_List_ServantScriptEntity__TypeInfo, v8);
    byte_4B029FB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_ServantScriptEntity__get_Count__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ServantScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ServantScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_ServantScriptEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&id = list;
        if ( LODWORD(list->fields.items) == v3 )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v16 = Method_System_Collections_Generic_List_ServantScriptEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v18[4] = *(Il2CppClass **)&id;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 4), id, v13, v14);
          }
        }
      }
      if ( Count == ++v12 )
        return (System_Collections_Generic_List_ServantScriptEntity__o *)v11;
    }
LABEL_16:
    sub_1BC3264(list, *(_QWORD *)&id);
  }
  return (System_Collections_Generic_List_ServantScriptEntity__o *)v11;
}


// local variable allocation has failed, the output may be wrong!
ServantScriptEntity_o *__fastcall ServantScriptMaster__GetEntityWithRetryFormId0(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t formId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *PK; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v11; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v13; // x22
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v17; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v18; // x19
  __int64 v19; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__c **v20; // x10
  __int64 v21; // x0
  ServantScriptEntity_o *v23; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B029FC & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__get_lookup__, *(_QWORD *)&id);
    sub_1BC3008(&System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__TypeInfo, v7);
    sub_1BC3008(&ServantScriptEntity_TypeInfo, v8);
    byte_4B029FC = 1;
  }
  v23 = 0LL;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  PK = ServantScriptEntity__CreatePK(id, formId, 0LL);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_32B191C *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_26;
  klass = lookup->klass;
  v13 = lookup;
  v14 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C13570(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__TypeInfo,
                 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))p_method)(
          v13,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    PK = ServantScriptEntity__CreatePK(id, 0, 0LL);
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_32B191C *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__get_lookup__);
  if ( !lookup )
LABEL_26:
    sub_1BC3264(lookup, v11);
  v17 = lookup->klass;
  v18 = lookup;
  v19 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v20 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v20 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__TypeInfo )
    {
      --v19;
      v20 += 2;
      if ( !v19 )
        goto LABEL_21;
    }
    v21 = (__int64)&v17->vtable[*(_DWORD *)v20 + 1].method;
  }
  else
  {
LABEL_21:
    v21 = sub_1C13570(lookup, System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, ServantScriptEntity_o **, _QWORD))v21)(
          v18,
          PK,
          &v23,
          *(_QWORD *)(v21 + 8)) & 1) != 0 )
    return v23;
  else
    return 0LL;
}


ServantScriptEntity_o *__fastcall ServantScriptMaster__GetEntity_41741420(
        ServantScriptMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return ServantScriptMaster__GetEntity(this, id, 0, v3);
}


bool __fastcall ServantScriptMaster__TryGetEntity(
        ServantScriptMaster_o *this,
        ServantScriptEntity_o **entity,
        int32_t id,
        int32_t form,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *PK; // x2

  if ( (byte_4B029F8 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__TryGetEntity__, entity);
    sub_1BC3008(&ServantScriptEntity_TypeInfo, v9);
    byte_4B029F8 = 1;
  }
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  PK = (Il2CppObject *)ServantScriptEntity__CreatePK(id, form, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantScriptMaster__getId(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  int v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w20
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  System_String_o *v13; // x19
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  MyroomServantSpecialImageEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  int32_t imageLimitCounta; // [xsp+18h] [xbp-28h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-24h] BYREF

  v3 = imageLimitCount;
  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_4B029F9 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&imageLimitCount);
    sub_1BC3008(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&ImageLimitCount_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B029F9 = 1;
  }
  entity = 0LL;
  if ( v3 >= 201 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v9 = ImageLimitCount__SpecialImageLimitCountToSpecialNum(v3, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    if ( !Master_object )
      goto LABEL_19;
    Master_object = (Il2CppObject *)MyroomServantSpecialImageMaster__TryGetEntity(
                                      (MyroomServantSpecialImageMaster_o *)Master_object,
                                      &entity,
                                      svtId,
                                      v9,
                                      0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
        return entity->fields.imageId;
LABEL_19:
      sub_1BC3264(Master_object, v11);
    }
    v3 = imageLimitCounta;
  }
  if ( v3 >= 11 )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_19;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Master_object )
      goto LABEL_19;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Master_object, &svtIda, &imageLimitCounta, 0LL);
  }
  v13 = System_Int32__ToString((int32_t)&svtIda, 0LL);
  v14 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v15 = System_String__Concat_62348648(v13, v14, 0LL);
  return System_Int32__Parse(v15, 0LL);
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
  UnityEngine_Vector2_o Offset_41742272; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  Offset_41742272 = ServantScriptMaster__getOffset_41742272(this, id, 0, offsetKind, v4);
  y = Offset_41742272.fields.y;
  x = Offset_41742272.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall ServantScriptMaster__getOffset_41742272(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t formId,
        int32_t offsetKind,
        const MethodInfo *method)
{
  unsigned int v5; // w19
  __int64 v9; // x1
  __int64 v10; // x1
  ServantScriptEntity_o *EntityWithRetryFormId0; // x0
  __int64 v12; // x1
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o v15; // kr00_8
  const MethodInfo *v16; // x3
  UnityEngine_Vector2_o Offset; // kr08_8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v5 = offsetKind;
  if ( (byte_4B029FD & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantScriptAddMaster___, *(_QWORD *)&id);
    sub_1BC3008(&DataManager_TypeInfo, v9);
    sub_1BC3008(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__, v10);
    byte_4B029FD = 1;
  }
  entity = 0LL;
  if ( v5 > 9 || ((1 << v5) & 0x318) == 0 )
  {
LABEL_12:
    EntityWithRetryFormId0 = ServantScriptMaster__GetEntityWithRetryFormId0(
                               this,
                               id,
                               formId,
                               *(const MethodInfo **)&offsetKind);
    if ( EntityWithRetryFormId0 || (EntityWithRetryFormId0 = ServantScriptMaster__GetEntity(this, 1, 0, v16)) != 0LL )
    {
      Offset = ServantScriptEntity__getOffset(EntityWithRetryFormId0, v5, 0LL);
      y = Offset.fields.y;
      x = Offset.fields.x;
      goto LABEL_17;
    }
LABEL_16:
    sub_1BC3264(EntityWithRetryFormId0, v12);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  EntityWithRetryFormId0 = (ServantScriptEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
  if ( !EntityWithRetryFormId0 )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)EntityWithRetryFormId0,
          &entity,
          id,
          (const MethodInfo_32B1618 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__) )
  {
    v5 = 1;
    goto LABEL_12;
  }
  EntityWithRetryFormId0 = (ServantScriptEntity_o *)entity;
  if ( !entity )
    goto LABEL_16;
  v15 = ServantScriptAddEntity__getOffset((ServantScriptAddEntity_o *)entity, v5, 0LL);
  y = v15.fields.y;
  x = v15.fields.x;
LABEL_17:
  result.fields.y = y;
  result.fields.x = x;
  return result;
}