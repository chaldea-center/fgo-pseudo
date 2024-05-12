void __fastcall ServantScriptMaster___ctor(ServantScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D15E & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string___ctor__);
    byte_438D15E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    10,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantScriptEntity_o *__fastcall ServantScriptMaster__GetEntity(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t form,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438D15B & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__GetEntity__);
    sub_B775C4(&ServantScriptEntity_TypeInfo);
    byte_438D15B = 1;
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
                                    (const MethodInfo_21FBCE4 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantScriptEntity__o *__fastcall ServantScriptMaster__GetEntityListFromId(
        ServantScriptMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  int32_t v8; // w23
  __int64 v9; // x10

  v3 = id;
  if ( (byte_438D15F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantScriptEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantScriptEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantScriptEntity__TypeInfo);
    sub_B775C4(&ServantScriptEntity_TypeInfo);
    byte_438D15F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&id = list;
        v9 = *(&ServantScriptEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (ServantScriptEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == ServantScriptEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantScriptEntity__Add__);
        }
      }
      if ( ++v8 >= Count )
        return (System_Collections_Generic_List_ServantScriptEntity__o *)v7;
    }
LABEL_15:
    sub_B7769C(list, *(_QWORD *)&id);
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
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v15; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v16; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v17; // x20
  unsigned __int64 v18; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v19; // x11
  __int64 v20; // x0
  __int64 v21; // x11
  ServantScriptEntity_o *v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438D160 & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B775C4(&ServantScriptEntity_TypeInfo);
    byte_438D160 = 1;
  }
  v23 = 0LL;
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
  v11 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v12;
      p_offset += 4;
      if ( v12 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v11,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    }
    PK = ServantScriptEntity__CreatePK(id, 0, v15);
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_33:
    sub_B7769C(lookup, v9);
  v16 = lookup->klass;
  v17 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    v19 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v16->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v18;
      v19 += 2;
      if ( v18 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    v20 = (__int64)&v16->vtable[*(_DWORD *)v19 + 1].method;
  }
  else
  {
LABEL_23:
    v20 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, ServantScriptEntity_o **, _QWORD))v20)(
          v17,
          PK,
          &v23,
          *(_QWORD *)(v20 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v23 )
    return 0LL;
  v21 = *(&ServantScriptEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v21 )
    return 0LL;
  if ( (ServantScriptEntity_c *)v23->klass->_2.typeHierarchy[v21 - 1] == ServantScriptEntity_TypeInfo )
    return v23;
  return 0LL;
}


ServantScriptEntity_o *__fastcall ServantScriptMaster__GetEntity_28938404(
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
  System_String_o *PK; // x2

  if ( (byte_438D15C & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__TryGetEntity__);
    sub_B775C4(&ServantScriptEntity_TypeInfo);
    byte_438D15C = 1;
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
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__TryGetEntity__);
}


int32_t __fastcall ServantScriptMaster__getId(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  System_String_o *v6; // x19
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  int32_t imageLimitCounta; // [xsp+8h] [xbp-18h] BYREF
  int32_t svtIda; // [xsp+Ch] [xbp-14h] BYREF

  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_438D15D & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D15D = 1;
  }
  if ( imageLimitCount >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
    {
      sub_B7769C(Instance, v5);
    }
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0LL);
  }
  v6 = System_Int32__ToString((int32_t)&svtIda, 0LL);
  v7 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v8 = System_String__Concat_44901936(v6, v7, 0LL);
  return System_Int32__Parse(v8, 0LL);
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
  UnityEngine_Vector2_o Offset_28939320; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  Offset_28939320 = ServantScriptMaster__getOffset_28939320(this, id, 0, offsetKind, v4);
  y = Offset_28939320.fields.y;
  x = Offset_28939320.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall ServantScriptMaster__getOffset_28939320(
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
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v5 = offsetKind;
  if ( (byte_438D161 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ServantScriptAddMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__);
    byte_438D161 = 1;
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
    if ( EntityWithRetryFormId0 || (EntityWithRetryFormId0 = ServantScriptMaster__GetEntity(this, 1, 0, v16)) != 0LL )
    {
      Offset = ServantScriptEntity__getOffset(EntityWithRetryFormId0, v5, v15);
      y = Offset.fields.y;
      x = Offset.fields.x;
      goto LABEL_21;
    }
LABEL_20:
    sub_B7769C(EntityWithRetryFormId0, v10);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  EntityWithRetryFormId0 = (ServantScriptEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
  if ( !EntityWithRetryFormId0 )
    goto LABEL_20;
  EntityWithRetryFormId0 = (ServantScriptEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                      (DataMasterBase_WarMaster__WarEntity__int__o *)EntityWithRetryFormId0,
                                                      &entity,
                                                      id,
                                                      (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)EntityWithRetryFormId0 & 1) == 0 )
  {
    v5 = 1;
    goto LABEL_17;
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