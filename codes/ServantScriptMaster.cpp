void __fastcall ServantScriptMaster___ctor(ServantScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C228C5 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string___ctor__, method);
    byte_4C228C5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    10,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string___ctor__);
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

  if ( (byte_4C228C2 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__GetEntity__, *(_QWORD *)&id);
    sub_1C3B764(&ServantScriptEntity_TypeInfo, v7);
    byte_4C228C2 = 1;
  }
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  PK = (Il2CppObject *)ServantScriptEntity__CreatePK(id, form, *(const MethodInfo **)&form);
  return (ServantScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_329F900 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__GetEntity__);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  v3 = id;
  if ( (byte_4C228C6 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_ServantScriptEntity__get_Count__, *(_QWORD *)&id);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_ServantScriptEntity__get_Item__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantScriptEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantScriptEntity___ctor__, v7);
    sub_1C3B764(&System_Collections_Generic_List_ServantScriptEntity__TypeInfo, v8);
    byte_4C228C6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_ServantScriptEntity__get_Count__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ServantScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ServantScriptEntity___ctor__);
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
                                                                 (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_ServantScriptEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&id = list;
        if ( LODWORD(list->fields.items) == v3 )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v20 = Method_System_Collections_Generic_List_ServantScriptEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v22[4] = *(Il2CppClass **)&id;
            sub_1C3B708((PartyOrganizationUtility_o *)(v22 + 4), *(int64_t *)&id, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      if ( Count == ++v12 )
        return (System_Collections_Generic_List_ServantScriptEntity__o *)v11;
    }
LABEL_16:
    sub_1C3B9C0(list, *(_QWORD *)&id);
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
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v11; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v13; // x22
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  const MethodInfo *v17; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v18; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v19; // x20
  __int64 v20; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__c **v21; // x10
  __int64 v22; // x0
  ServantScriptEntity_o *v24; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C228C7 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__get_lookup__, *(_QWORD *)&id);
    sub_1C3B764(&System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__TypeInfo, v7);
    sub_1C3B764(&ServantScriptEntity_TypeInfo, v8);
    byte_4C228C7 = 1;
  }
  v24 = 0LL;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  PK = ServantScriptEntity__CreatePK(id, formId, *(const MethodInfo **)&formId);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_329D6F4 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__get_lookup__);
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
    p_method = sub_1C8D744(
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
    PK = ServantScriptEntity__CreatePK(id, 0, v17);
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_329D6F4 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__get_lookup__);
  if ( !lookup )
LABEL_26:
    sub_1C3B9C0(lookup, v11);
  v18 = lookup->klass;
  v19 = lookup;
  v20 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v21 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__c **)&v18->_1.interfaceOffsets->offset;
    while ( *(v21 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__TypeInfo )
    {
      --v20;
      v21 += 2;
      if ( !v20 )
        goto LABEL_21;
    }
    v22 = (__int64)&v18->vtable[*(_DWORD *)v21 + 1].method;
  }
  else
  {
LABEL_21:
    v22 = sub_1C8D744(lookup, System_Collections_Generic_IReadOnlyDictionary_string__ServantScriptEntity__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, ServantScriptEntity_o **, _QWORD))v22)(
          v19,
          PK,
          &v24,
          *(_QWORD *)(v22 + 8)) & 1) != 0 )
    return v24;
  else
    return 0LL;
}


ServantScriptEntity_o *__fastcall ServantScriptMaster__GetEntity_41285268(
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

  if ( (byte_4C228C3 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__TryGetEntity__, entity);
    sub_1C3B764(&ServantScriptEntity_TypeInfo, v9);
    byte_4C228C3 = 1;
  }
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  PK = (Il2CppObject *)ServantScriptEntity__CreatePK(id, form, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__TryGetEntity__);
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
  const MethodInfo *v13; // x3
  System_String_o *v14; // x19
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  MyroomServantSpecialImageEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  int32_t imageLimitCounta; // [xsp+18h] [xbp-28h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-24h] BYREF

  v3 = imageLimitCount;
  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_4C228C4 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&imageLimitCount);
    sub_1C3B764(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___, v5);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&ImageLimitCount_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C228C4 = 1;
  }
  entity = 0LL;
  if ( v3 >= 201 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v9 = ImageLimitCount__SpecialImageLimitCountToSpecialNum(v3, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
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
      sub_1C3B9C0(Master_object, v11);
    }
    v3 = imageLimitCounta;
  }
  if ( v3 >= 11 )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_19;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Master_object )
      goto LABEL_19;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Master_object, &svtIda, &imageLimitCounta, v13);
  }
  v14 = System_Int32__ToString((int32_t)&svtIda, 0LL);
  v15 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v16 = System_String__Concat_63368612(v14, v15, 0LL);
  return System_Int32__Parse(v16, 0LL);
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
  UnityEngine_Vector2_o Offset_41286112; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  Offset_41286112 = ServantScriptMaster__getOffset_41286112(this, id, 0, offsetKind, v4);
  y = Offset_41286112.fields.y;
  x = Offset_41286112.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall ServantScriptMaster__getOffset_41286112(
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
  if ( (byte_4C228C8 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ServantScriptAddMaster___, *(_QWORD *)&id);
    sub_1C3B764(&DataManager_TypeInfo, v9);
    sub_1C3B764(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__, v10);
    byte_4C228C8 = 1;
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
    sub_1C3B9C0(EntityWithRetryFormId0, v12);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  EntityWithRetryFormId0 = (ServantScriptEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
  if ( !EntityWithRetryFormId0 )
    goto LABEL_20;
  EntityWithRetryFormId0 = (ServantScriptEntity_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)EntityWithRetryFormId0,
                                                      &entity,
                                                      id,
                                                      (const MethodInfo_329AE94 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__);
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