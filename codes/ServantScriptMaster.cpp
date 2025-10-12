void ServantScriptMaster___ctor(ServantScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C383EF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string___ctor__);
    byte_4C383EF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    10,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantScriptEntity_o *ServantScriptMaster__GetEntity(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t form,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C383EC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__GetEntity__);
    sub_1C32C20(&ServantScriptEntity_TypeInfo);
    byte_4C383EC = 1;
  }
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  PK = (Il2CppObject *)ServantScriptEntity__CreatePK(id, form, *(const MethodInfo **)&form);
  return (ServantScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_339B2F0 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__GetEntity__);
}


System_Collections_Generic_List_ServantScriptEntity__o *ServantScriptMaster__GetEntityListFromId(
        ServantScriptMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C383F0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantScriptEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantScriptEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantScriptEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantScriptEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantScriptEntity__TypeInfo);
    byte_4C383F0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_ServantScriptEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantScriptEntity___ctor__);
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
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_ServantScriptEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( LODWORD(list->fields.items) == id )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v13 = Method_System_Collections_Generic_List_ServantScriptEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v11;
            sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v11, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        return (System_Collections_Generic_List_ServantScriptEntity__o *)v7;
    }
LABEL_16:
    sub_1C32E7C(list);
  }
  return (System_Collections_Generic_List_ServantScriptEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
ServantScriptEntity_o *ServantScriptMaster__GetEntityWithRetryFormId0(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t formId,
        const MethodInfo *method)
{
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v10; // x22
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  const MethodInfo *v14; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v15; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v16; // x20
  __int64 v17; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__c **v18; // x10
  __int64 v19; // x0
  ServantScriptEntity_o *v21; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C383F1 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__get_lookup__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__TypeInfo);
    sub_1C32C20(&ServantScriptEntity_TypeInfo);
    byte_4C383F1 = 1;
  }
  v21 = 0;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  PK = ServantScriptEntity__CreatePK(id, formId, *(const MethodInfo **)&formId);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_33990E4 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_26;
  klass = lookup->klass;
  v10 = lookup;
  v11 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_10;
    }
    v13 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v13 = sub_1C83438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v13)(
          v10,
          PK,
          *(_QWORD *)(v13 + 8))
      & 1) == 0 )
  {
    if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    PK = ServantScriptEntity__CreatePK(id, 0, v14);
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_33990E4 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__get_lookup__);
  if ( !lookup )
LABEL_26:
    sub_1C32E7C(lookup);
  v15 = lookup->klass;
  v16 = lookup;
  v17 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    v18 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__c **)&v15->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_21;
    }
    v19 = (__int64)&v15->vtable[*(_DWORD *)v18 + 1];
  }
  else
  {
LABEL_21:
    v19 = sub_1C83438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__TypeInfo, 1);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, ServantScriptEntity_o **, _QWORD))v19)(
          v16,
          PK,
          &v21,
          *(_QWORD *)(v19 + 8))
      & 1) != 0 )
    return v21;
  else
    return 0;
}


ServantScriptEntity_o *ServantScriptMaster__GetEntity_42659096(
        ServantScriptMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return ServantScriptMaster__GetEntity(this, id, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
bool ServantScriptMaster__TryGetEntity(
        ServantScriptMaster_o *this,
        ServantScriptEntity_o **entity,
        int32_t id,
        int32_t form,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C383ED & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__TryGetEntity__);
    sub_1C32C20(&ServantScriptEntity_TypeInfo);
    byte_4C383ED = 1;
  }
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  PK = (Il2CppObject *)ServantScriptEntity__CreatePK(id, form, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__TryGetEntity__);
}


int32_t ServantScriptMaster__getId(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  int v3; // w20
  int32_t v5; // w20
  Il2CppObject *Master_object; // x0
  System_String_o *v8; // x19
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  MyroomServantSpecialImageEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  int32_t imageLimitCounta; // [xsp+18h] [xbp-28h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-24h] BYREF

  v3 = imageLimitCount;
  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_4C383EE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C383EE = 1;
  }
  entity = 0;
  if ( v3 >= 201 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v5 = ImageLimitCount__SpecialImageLimitCountToSpecialNum(v3, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    if ( !Master_object )
      goto LABEL_19;
    Master_object = (Il2CppObject *)MyroomServantSpecialImageMaster__TryGetEntity(
                                      (MyroomServantSpecialImageMaster_o *)Master_object,
                                      &entity,
                                      svtId,
                                      v5,
                                      0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
        return entity->fields.imageId;
LABEL_19:
      sub_1C32E7C(Master_object);
    }
    v3 = imageLimitCounta;
  }
  if ( v3 >= 11 )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_19;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Master_object )
      goto LABEL_19;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Master_object, &svtIda, &imageLimitCounta, 0);
  }
  v8 = System_Int32__ToString((int32_t)&svtIda, 0);
  v9 = System_Int32__ToString((int32_t)&imageLimitCounta, 0);
  v10 = System_String__Concat_63518544(v8, v9, 0);
  return System_Int32__Parse(v10, 0);
}


UnityEngine_Vector2_o ServantScriptMaster__getOffset(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t offsetKind,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o Offset_42659940; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  Offset_42659940 = ServantScriptMaster__getOffset_42659940(this, id, 0, offsetKind, v4);
  y = Offset_42659940.fields.y;
  x = Offset_42659940.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o ServantScriptMaster__getOffset_42659940(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t formId,
        int32_t offsetKind,
        const MethodInfo *method)
{
  int32_t v5; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  int monitor; // s0
  int monitor_high; // s1
  __int64 v12; // x9
  __int64 v13; // x10
  float x; // s0
  float y; // s1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  UnityEngine_Vector2_o Offset; // kr00_8
  Il2CppObject *v19; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *v21; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v5 = offsetKind;
  if ( (byte_4C383F2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantScriptAddMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__);
    byte_4C383F2 = 1;
  }
  entity = 0;
  v21 = 0;
  v19 = 0;
  if ( (unsigned int)(v5 - 3) < 2 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
    if ( !Master_object )
      goto LABEL_35;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                    Master_object,
                                                                    &v21,
                                                                    id,
                                                                    (const MethodInfo_3398DE0 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      v5 = 1;
      goto LABEL_31;
    }
    if ( v21 )
    {
      v12 = 28;
      if ( v5 == 4 )
      {
        v12 = 36;
        v13 = 32;
      }
      else
      {
        v13 = 24;
      }
      monitor = *(_DWORD *)((char *)&v21->klass + v13);
      monitor_high = *(_DWORD *)((char *)&v21->klass + v12);
      goto LABEL_27;
    }
LABEL_35:
    sub_1C32E7C(Master_object);
  }
  if ( v5 == 8 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
    if ( !Master_object )
      goto LABEL_35;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                    Master_object,
                                                                    &v19,
                                                                    id,
                                                                    (const MethodInfo_3398DE0 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      v5 = 8;
      goto LABEL_31;
    }
    if ( v19 )
    {
      monitor = (int)v19[2].monitor;
      monitor_high = HIDWORD(v19[2].monitor);
      goto LABEL_27;
    }
    goto LABEL_35;
  }
  if ( v5 != 9 )
  {
LABEL_31:
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantScriptMaster__GetEntityWithRetryFormId0(
                                                                    this,
                                                                    id,
                                                                    formId,
                                                                    *(const MethodInfo **)&offsetKind);
    if ( Master_object
      || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantScriptMaster__GetEntity(this, 1, 0, v17)) != 0 )
    {
      Offset = ServantScriptEntity__getOffset((ServantScriptEntity_o *)Master_object, v5, v16);
      y = Offset.fields.y;
      x = Offset.fields.x;
      goto LABEL_36;
    }
    goto LABEL_35;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  id,
                                                                  (const MethodInfo_3398DE0 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    v5 = 9;
    goto LABEL_31;
  }
  if ( !entity )
    goto LABEL_35;
  monitor = (int)entity[3].klass;
  monitor_high = HIDWORD(entity[3].klass);
LABEL_27:
  x = (float)monitor;
  y = (float)monitor_high;
LABEL_36:
  result.fields.y = y;
  result.fields.x = x;
  return result;
}