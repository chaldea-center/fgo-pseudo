void __fastcall ServantScriptMaster___ctor(ServantScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB663E & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string___ctor__, method);
    byte_4AB663E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    10,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string___ctor__);
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

  if ( (byte_4AB663B & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__GetEntity__, *(_QWORD *)&id);
    sub_1BAB41C(&ServantScriptEntity_TypeInfo, v7);
    byte_4AB663B = 1;
  }
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  PK = (Il2CppObject *)ServantScriptEntity__CreatePK(id, form, *(const MethodInfo **)&form);
  return (ServantScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31640E8 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__GetEntity__);
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
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v12; // x22
  int32_t v13; // w23
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  v3 = id;
  if ( (byte_4AB663F & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantScriptEntity__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ServantScriptEntity___ctor__, v7);
    sub_1BAB41C(&System_Collections_Generic_List_ServantScriptEntity__TypeInfo, v8);
    sub_1BAB41C(&ServantScriptEntity_TypeInfo, v9);
    byte_4AB663F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ServantScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ServantScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&id = list;
        methodPtr_low = LOBYTE(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantScriptEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantScriptEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v18 = Method_System_Collections_Generic_List_ServantScriptEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_354D8BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v20[4] = *(Il2CppClass **)&id;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v20 + 4), id, v14, v15);
          }
        }
      }
      if ( Count == ++v13 )
        return (System_Collections_Generic_List_ServantScriptEntity__o *)v12;
    }
LABEL_18:
    sub_1BAB678(list, *(_QWORD *)&id);
  }
  return (System_Collections_Generic_List_ServantScriptEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
ServantScriptEntity_o *__fastcall ServantScriptMaster__GetEntityWithRetryFormId0(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t formId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v10; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v12; // x22
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  const MethodInfo *v16; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v17; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v18; // x20
  __int64 v19; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v20; // x10
  __int64 v21; // x0
  __int64 methodPtr_low; // x11
  ServantScriptEntity_o *v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4AB6640 & 1) == 0 )
  {
    sub_1BAB41C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&id);
    sub_1BAB41C(&ServantScriptEntity_TypeInfo, v7);
    byte_4AB6640 = 1;
  }
  v24 = 0LL;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  PK = ServantScriptEntity__CreatePK(id, formId, *(const MethodInfo **)&formId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_30;
  klass = lookup->klass;
  v12 = lookup;
  v13 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BFD3FC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v12,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    PK = ServantScriptEntity__CreatePK(id, 0, v16);
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_30:
    sub_1BAB678(lookup, v10);
  v17 = lookup->klass;
  v18 = lookup;
  v19 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v20 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v20 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
    v21 = sub_1BFD3FC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, ServantScriptEntity_o **, _QWORD))v21)(
          v18,
          PK,
          &v24,
          *(_QWORD *)(v21 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v24 )
    return 0LL;
  methodPtr_low = LOBYTE(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v24->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ServantScriptEntity_c *)v24->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantScriptEntity_TypeInfo )
    return v24;
  return 0LL;
}


ServantScriptEntity_o *__fastcall ServantScriptMaster__GetEntity_40214160(
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
  __int64 v9; // x1
  Il2CppObject *PK; // x2

  if ( (byte_4AB663C & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__TryGetEntity__, entity);
    sub_1BAB41C(&ServantScriptEntity_TypeInfo, v9);
    byte_4AB663C = 1;
  }
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  PK = (Il2CppObject *)ServantScriptEntity__CreatePK(id, form, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__TryGetEntity__);
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
  if ( (byte_4AB663D & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&imageLimitCount);
    sub_1BAB41C(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___, v5);
    sub_1BAB41C(&DataManager_TypeInfo, v6);
    sub_1BAB41C(&ImageLimitCount_TypeInfo, v7);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4AB663D = 1;
  }
  entity = 0LL;
  if ( v3 >= 201 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v9 = ImageLimitCount__SpecialImageLimitCountToSpecialNum(v3, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
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
      sub_1BAB678(Master_object, v11);
    }
    v3 = imageLimitCounta;
  }
  if ( v3 >= 11 )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_19;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Master_object )
      goto LABEL_19;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Master_object, &svtIda, &imageLimitCounta, 0LL);
  }
  v13 = System_Int32__ToString((int32_t)&svtIda, 0LL);
  v14 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v15 = System_String__Concat_62048128(v13, v14, 0LL);
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
  UnityEngine_Vector2_o Offset_40215100; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  Offset_40215100 = ServantScriptMaster__getOffset_40215100(this, id, 0, offsetKind, v4);
  y = Offset_40215100.fields.y;
  x = Offset_40215100.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall ServantScriptMaster__getOffset_40215100(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t formId,
        int32_t offsetKind,
        const MethodInfo *method)
{
  int32_t v5; // w19
  __int64 v9; // x1
  __int64 v10; // x1
  ServantScriptEntity_o *EntityWithRetryFormId0; // x0
  __int64 v12; // x1
  __int64 v13; // x9
  __int64 v14; // x10
  float x; // s0
  float y; // s1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x3
  UnityEngine_Vector2_o Offset; // kr00_8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v5 = offsetKind;
  if ( (byte_4AB6641 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantScriptAddMaster___, *(_QWORD *)&id);
    sub_1BAB41C(&DataManager_TypeInfo, v9);
    sub_1BAB41C(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__, v10);
    byte_4AB6641 = 1;
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
    if ( EntityWithRetryFormId0 || (EntityWithRetryFormId0 = ServantScriptMaster__GetEntity(this, 1, 0, v18)) != 0LL )
    {
      Offset = ServantScriptEntity__getOffset(EntityWithRetryFormId0, v5, v17);
      y = Offset.fields.y;
      x = Offset.fields.x;
      goto LABEL_21;
    }
LABEL_20:
    sub_1BAB678(EntityWithRetryFormId0, v12);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  EntityWithRetryFormId0 = (ServantScriptEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
  if ( !EntityWithRetryFormId0 )
    goto LABEL_20;
  EntityWithRetryFormId0 = (ServantScriptEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)EntityWithRetryFormId0,
                                                      &entity,
                                                      id,
                                                      (const MethodInfo_3163DE4 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)EntityWithRetryFormId0 & 1) == 0 )
  {
    v5 = 1;
    goto LABEL_16;
  }
  if ( !entity )
    goto LABEL_20;
  v13 = 28LL;
  if ( v5 == 4 )
    v13 = 36LL;
  if ( v5 == 4 )
    v14 = 32LL;
  else
    v14 = 24LL;
  x = (float)*(int *)((char *)&entity->klass + v14);
  y = (float)*(int *)((char *)&entity->klass + v13);
LABEL_21:
  result.fields.y = y;
  result.fields.x = x;
  return result;
}