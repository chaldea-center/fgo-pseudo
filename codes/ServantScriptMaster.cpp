void ServantScriptMaster___ctor(ServantScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6D09 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string___ctor__);
    byte_4CB6D09 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    10,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantScriptEntity_o *ServantScriptMaster__GetEntity(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t form,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB6D06 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__GetEntity__);
    sub_1C6BA08(&ServantScriptEntity_TypeInfo);
    byte_4CB6D06 = 1;
  }
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  PK = (Il2CppObject *)ServantScriptEntity__CreatePK(id, form, *(const MethodInfo **)&form);
  return (ServantScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_33FDB94 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantScriptEntity__o *ServantScriptMaster__GetEntityListFromId(
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
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  v3 = id;
  if ( (byte_4CB6D0A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ServantScriptEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ServantScriptEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantScriptEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantScriptEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantScriptEntity__TypeInfo);
    byte_4CB6D0A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ServantScriptEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantScriptEntity___ctor__);
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
                                                                 (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ServantScriptEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&id = list;
        if ( LODWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v12 = Method_System_Collections_Generic_List_ServantScriptEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v14[4] = *(Il2CppClass **)&id;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 4), id, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        return (System_Collections_Generic_List_ServantScriptEntity__o *)v7;
    }
LABEL_16:
    sub_1C6BC60(list, *(_QWORD *)&id);
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
  __int64 v9; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v11; // x22
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  const MethodInfo *v15; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v16; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v17; // x20
  __int64 v18; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__c **v19; // x10
  __int64 v20; // x0
  ServantScriptEntity_o *v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB6D0B & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__get_lookup__);
    sub_1C6BA08(&System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__TypeInfo);
    sub_1C6BA08(&ServantScriptEntity_TypeInfo);
    byte_4CB6D0B = 1;
  }
  v22 = 0;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  PK = ServantScriptEntity__CreatePK(id, formId, *(const MethodInfo **)&formId);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_33FB988 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_26;
  klass = lookup->klass;
  v11 = lookup;
  v12 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_10;
    }
    v14 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v14 = sub_1C41D90(lookup, System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v14)(
          v11,
          PK,
          *(_QWORD *)(v14 + 8))
      & 1) == 0 )
  {
    if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    PK = ServantScriptEntity__CreatePK(id, 0, v15);
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_33FB988 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__get_lookup__);
  if ( !lookup )
LABEL_26:
    sub_1C6BC60(lookup, v9);
  v16 = lookup->klass;
  v17 = lookup;
  v18 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    v19 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__c **)&v16->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_21;
    }
    v20 = (__int64)&v16->vtable[*(_DWORD *)v19 + 1];
  }
  else
  {
LABEL_21:
    v20 = sub_1C41D90(lookup, System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__TypeInfo, 1);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, ServantScriptEntity_o **, _QWORD))v20)(
          v17,
          PK,
          &v22,
          *(_QWORD *)(v20 + 8))
      & 1) != 0 )
    return v22;
  else
    return 0;
}


ServantScriptEntity_o *ServantScriptMaster__GetEntity_43001364(
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

  if ( (byte_4CB6D07 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__TryGetEntity__);
    sub_1C6BA08(&ServantScriptEntity_TypeInfo);
    byte_4CB6D07 = 1;
  }
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  PK = (Il2CppObject *)ServantScriptEntity__CreatePK(id, form, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__TryGetEntity__);
}


int32_t ServantScriptMaster__getId(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
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
  if ( (byte_4CB6D08 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6D08 = 1;
  }
  entity = 0;
  if ( v3 >= 201 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v5 = ImageLimitCount__SpecialImageLimitCountToSpecialNum(v3, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
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
      sub_1C6BC60(Master_object, v7);
    }
    v3 = imageLimitCounta;
  }
  if ( v3 >= 11 )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_19;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Master_object )
      goto LABEL_19;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Master_object, &svtIda, &imageLimitCounta, 0);
  }
  v9 = System_Int32__ToString((int32_t)&svtIda, 0);
  v10 = System_Int32__ToString((int32_t)&imageLimitCounta, 0);
  v11 = System_String__Concat_63966792(v9, v10, 0);
  return System_Int32__Parse(v11, 0);
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
  UnityEngine_Vector2_o Offset_43002208; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  Offset_43002208 = ServantScriptMaster__getOffset_43002208(this, id, 0, offsetKind, v4);
  y = Offset_43002208.fields.y;
  x = Offset_43002208.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o ServantScriptMaster__getOffset_43002208(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t formId,
        int32_t offsetKind,
        const MethodInfo *method)
{
  int32_t v5; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v10; // x1
  int monitor; // s0
  int monitor_high; // s1
  __int64 v13; // x9
  __int64 v14; // x10
  float x; // s0
  float y; // s1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x3
  UnityEngine_Vector2_o Offset; // kr00_8
  Il2CppObject *v20; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *v22; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v5 = offsetKind;
  if ( (byte_4CB6D0C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantScriptAddMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__);
    byte_4CB6D0C = 1;
  }
  entity = 0;
  v22 = 0;
  v20 = 0;
  if ( (unsigned int)(v5 - 3) < 2 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
    if ( !Master_object )
      goto LABEL_35;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                    Master_object,
                                                                    &v22,
                                                                    id,
                                                                    (const MethodInfo_33FB684 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      v5 = 1;
      goto LABEL_31;
    }
    if ( v22 )
    {
      v13 = 28;
      if ( v5 == 4 )
      {
        v13 = 36;
        v14 = 32;
      }
      else
      {
        v14 = 24;
      }
      monitor = *(_DWORD *)((char *)&v22->klass + v14);
      monitor_high = *(_DWORD *)((char *)&v22->klass + v13);
      goto LABEL_27;
    }
LABEL_35:
    sub_1C6BC60(Master_object, v10);
  }
  if ( v5 == 8 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
    if ( !Master_object )
      goto LABEL_35;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                    Master_object,
                                                                    &v20,
                                                                    id,
                                                                    (const MethodInfo_33FB684 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      v5 = 8;
      goto LABEL_31;
    }
    if ( v20 )
    {
      monitor = (int)v20[2].monitor;
      monitor_high = HIDWORD(v20[2].monitor);
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
      || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantScriptMaster__GetEntity(this, 1, 0, v18)) != 0 )
    {
      Offset = ServantScriptEntity__getOffset((ServantScriptEntity_o *)Master_object, v5, v17);
      y = Offset.fields.y;
      x = Offset.fields.x;
      goto LABEL_36;
    }
    goto LABEL_35;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  id,
                                                                  (const MethodInfo_33FB684 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__);
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