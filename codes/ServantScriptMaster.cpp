void __fastcall ServantScriptMaster___ctor(ServantScriptMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAA7C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EAA7C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    10,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantScriptEntity_o *__fastcall ServantScriptMaster__GetEntity(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t form,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *PK; // x1

  if ( (byte_42EAA79 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__GetEntity__, id, form, method);
    sub_B5D5C4(&ServantScriptEntity_TypeInfo, v7, v8, v9);
    byte_42EAA79 = 1;
  }
  if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  }
  PK = ServantScriptEntity__CreatePK(id, form, *(const MethodInfo **)&form);
  return (ServantScriptEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantScriptEntity__o *__fastcall ServantScriptMaster__GetEntityListFromId(
        ServantScriptMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x22
  int32_t v24; // w23
  __int64 v25; // x10

  v4 = id;
  if ( (byte_42EAA7D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, id, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantScriptEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantScriptEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_ServantScriptEntity__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ServantScriptEntity_TypeInfo, v18, v19, v20);
    byte_42EAA7D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v24,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&id = list;
        v25 = *(&ServantScriptEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v25
          && (ServantScriptEntity_c *)list->klass->_2.typeHierarchy[v25 - 1] == ServantScriptEntity_TypeInfo
          && LODWORD(list->fields.items) == v4 )
        {
          if ( !v23 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v23,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantScriptEntity__Add__);
        }
      }
      if ( ++v24 >= Count )
        return (System_Collections_Generic_List_ServantScriptEntity__o *)v23;
    }
LABEL_15:
    sub_B5D69C(list, *(_QWORD *)&id);
  }
  return (System_Collections_Generic_List_ServantScriptEntity__o *)v23;
}


// local variable allocation has failed, the output may be wrong!
ServantScriptEntity_o *__fastcall ServantScriptMaster__GetEntityWithRetryFormId0(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t formId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v15; // x22
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v21; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v22; // x20
  unsigned __int64 v23; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v24; // x11
  __int64 v25; // x0
  __int64 v26; // x11
  ServantScriptEntity_o *v28; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EAA7E & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, id, formId, method);
    sub_B5D5C4(&ServantScriptEntity_TypeInfo, v7, v8, v9);
    byte_42EAA7E = 1;
  }
  v28 = 0LL;
  if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  }
  PK = ServantScriptEntity__CreatePK(id, formId, *(const MethodInfo **)&formId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_33;
  klass = lookup->klass;
  v15 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v16;
      p_offset += 4;
      if ( v16 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AF54C0(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 0LL,
                 v13);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v15,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    }
    PK = ServantScriptEntity__CreatePK(id, 0, v19);
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_33:
    sub_B5D69C(lookup, v12);
  v21 = lookup->klass;
  v22 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v21->_1.interfaceOffsets->offset;
    while ( *(v24 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v23;
      v24 += 2;
      if ( v23 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    v25 = (__int64)&v21->vtable[*(_DWORD *)v24 + 1].method;
  }
  else
  {
LABEL_23:
    v25 = sub_AF54C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL, v20);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, ServantScriptEntity_o **, _QWORD))v25)(
          v22,
          PK,
          &v28,
          *(_QWORD *)(v25 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v28 )
    return 0LL;
  v26 = *(&ServantScriptEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v26 )
    return 0LL;
  if ( (ServantScriptEntity_c *)v28->klass->_2.typeHierarchy[v26 - 1] == ServantScriptEntity_TypeInfo )
    return v28;
  return 0LL;
}


ServantScriptEntity_o *__fastcall ServantScriptMaster__GetEntity_29045988(
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *PK; // x2

  if ( (byte_42EAA7A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&form);
    sub_B5D5C4(&ServantScriptEntity_TypeInfo, v9, v10, v11);
    byte_42EAA7A = 1;
  }
  if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  }
  PK = ServantScriptEntity__CreatePK(id, form, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__TryGetEntity__);
}


int32_t __fastcall ServantScriptMaster__getId(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  System_String_o *v10; // x19
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  int32_t imageLimitCounta; // [xsp+8h] [xbp-18h] BYREF
  int32_t svtIda; // [xsp+Ch] [xbp-14h] BYREF

  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_42EAA7B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, imageLimitCount, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EAA7B = 1;
  }
  if ( imageLimitCount >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v9);
    }
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0LL);
  }
  v10 = System_Int32__ToString((int32_t)&svtIda, 0LL);
  v11 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v12 = System_String__Concat_44577788(v10, v11, 0LL);
  return System_Int32__Parse(v12, 0LL);
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
  UnityEngine_Vector2_o Offset_29046904; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  Offset_29046904 = ServantScriptMaster__getOffset_29046904(this, id, 0, offsetKind, v4);
  y = Offset_29046904.fields.y;
  x = Offset_29046904.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall ServantScriptMaster__getOffset_29046904(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t formId,
        int32_t offsetKind,
        const MethodInfo *method)
{
  int32_t v5; // w19
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  ServantScriptEntity_o *EntityWithRetryFormId0; // x0
  __int64 v16; // x1
  __int64 v17; // x9
  __int64 v18; // x10
  float x; // s0
  float y; // s1
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x3
  UnityEngine_Vector2_o Offset; // kr00_8
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v5 = offsetKind;
  if ( (byte_42EAA7F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantScriptAddMaster___, id, formId, *(_QWORD *)&offsetKind);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(
      &Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__,
      v12,
      v13,
      v14);
    byte_42EAA7F = 1;
  }
  entity = 0LL;
  if ( (unsigned int)(v5 - 3) > 1 )
  {
LABEL_17:
    EntityWithRetryFormId0 = ServantScriptMaster__GetEntityWithRetryFormId0(
                               this,
                               id,
                               formId,
                               *(const MethodInfo **)&offsetKind);
    if ( EntityWithRetryFormId0 || (EntityWithRetryFormId0 = ServantScriptMaster__GetEntity(this, 1, 0, v22)) != 0LL )
    {
      Offset = ServantScriptEntity__getOffset(EntityWithRetryFormId0, v5, v21);
      y = Offset.fields.y;
      x = Offset.fields.x;
      goto LABEL_21;
    }
LABEL_20:
    sub_B5D69C(EntityWithRetryFormId0, v16);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  EntityWithRetryFormId0 = (ServantScriptEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
  if ( !EntityWithRetryFormId0 )
    goto LABEL_20;
  EntityWithRetryFormId0 = (ServantScriptEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                      (DataMasterBase_WarMaster__WarEntity__int__o *)EntityWithRetryFormId0,
                                                      &entity,
                                                      id,
                                                      (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)EntityWithRetryFormId0 & 1) == 0 )
  {
    v5 = 1;
    goto LABEL_17;
  }
  if ( !entity )
    goto LABEL_20;
  v17 = 28LL;
  if ( v5 == 4 )
    v17 = 36LL;
  if ( v5 == 4 )
    v18 = 32LL;
  else
    v18 = 24LL;
  x = (float)*(int *)((char *)&entity->klass + v18);
  y = (float)*(int *)((char *)&entity->klass + v17);
LABEL_21:
  result.fields.y = y;
  result.fields.x = x;
  return result;
}