void __fastcall ServantScriptMaster___ctor(ServantScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189C07 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string___ctor__, method);
    byte_4189C07 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    10,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantScriptEntity_o *__fastcall ServantScriptMaster__GetEntity(
        ServantScriptMaster_o *this,
        int32_t id,
        int32_t form,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *PK; // x1

  if ( (byte_4189C04 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__GetEntity__, *(_QWORD *)&id);
    sub_B2C35C(&ServantScriptEntity_TypeInfo, v7);
    byte_4189C04 = 1;
  }
  if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  }
  PK = ServantScriptEntity__CreatePK(id, form, *(const MethodInfo **)&form);
  return (ServantScriptEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x22
  int32_t v13; // w23
  __int64 v14; // x10

  v3 = id;
  if ( (byte_4189C08 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantScriptEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantScriptEntity___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_ServantScriptEntity__TypeInfo, v8);
    sub_B2C35C(&ServantScriptEntity_TypeInfo, v9);
    byte_4189C08 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v13,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&id = list;
        v14 = *(&ServantScriptEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (ServantScriptEntity_c *)list->klass->_2.typeHierarchy[v14 - 1] == ServantScriptEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v12 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantScriptEntity__Add__);
        }
      }
      if ( ++v13 >= Count )
        return (System_Collections_Generic_List_ServantScriptEntity__o *)v12;
    }
LABEL_15:
    sub_B2C434(list, *(_QWORD *)&id);
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
  __int64 v11; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v13; // x22
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v19; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v20; // x20
  unsigned __int64 v21; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v22; // x11
  __int64 v23; // x0
  __int64 v24; // x11
  ServantScriptEntity_o *v26; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4189C09 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&id);
    sub_B2C35C(&ServantScriptEntity_TypeInfo, v7);
    byte_4189C09 = 1;
  }
  v26 = 0LL;
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
  v13 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AC5258(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 0LL,
                 v11);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v13,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    }
    PK = ServantScriptEntity__CreatePK(id, 0, v17);
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_33:
    sub_B2C434(lookup, v10);
  v19 = lookup->klass;
  v20 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v19->_1.interfaceOffsets->offset;
    while ( *(v22 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v21;
      v22 += 2;
      if ( v21 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    v23 = (__int64)&v19->vtable[*(_DWORD *)v22 + 1].method;
  }
  else
  {
LABEL_23:
    v23 = sub_AC5258(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL, v18);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, ServantScriptEntity_o **, _QWORD))v23)(
          v20,
          PK,
          &v26,
          *(_QWORD *)(v23 + 8)) & 1) == 0 )
    return 0LL;
  if ( !v26 )
    return 0LL;
  v24 = *(&ServantScriptEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v24 )
    return 0LL;
  if ( (ServantScriptEntity_c *)v26->klass->_2.typeHierarchy[v24 - 1] == ServantScriptEntity_TypeInfo )
    return v26;
  return 0LL;
}


ServantScriptEntity_o *__fastcall ServantScriptMaster__GetEntity_28845876(
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
  System_String_o *PK; // x2

  if ( (byte_4189C05 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__TryGetEntity__, entity);
    sub_B2C35C(&ServantScriptEntity_TypeInfo, v9);
    byte_4189C05 = 1;
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
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantScriptMaster__ServantScriptEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantScriptMaster__getId(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_String_o *v7; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  int32_t imageLimitCounta; // [xsp+8h] [xbp-18h] BYREF
  int32_t svtIda; // [xsp+Ch] [xbp-14h] BYREF

  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_4189C06 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&imageLimitCount);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4189C06 = 1;
  }
  if ( imageLimitCount >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v6);
    }
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0LL);
  }
  v7 = System_Int32__ToString((int32_t)&svtIda, 0LL);
  v8 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v9 = System_String__Concat_44305532(v7, v8, 0LL);
  return System_Int32__Parse(v9, 0LL);
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
  UnityEngine_Vector2_o Offset_28846792; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  Offset_28846792 = ServantScriptMaster__getOffset_28846792(this, id, 0, offsetKind, v4);
  y = Offset_28846792.fields.y;
  x = Offset_28846792.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall ServantScriptMaster__getOffset_28846792(
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
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v5 = offsetKind;
  if ( (byte_4189C0A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantScriptAddMaster___, *(_QWORD *)&id);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__, v10);
    byte_4189C0A = 1;
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
    if ( EntityWithRetryFormId0 || (EntityWithRetryFormId0 = ServantScriptMaster__GetEntity(this, 1, 0, v18)) != 0LL )
    {
      Offset = ServantScriptEntity__getOffset(EntityWithRetryFormId0, v5, v17);
      y = Offset.fields.y;
      x = Offset.fields.x;
      goto LABEL_21;
    }
LABEL_20:
    sub_B2C434(EntityWithRetryFormId0, v12);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  EntityWithRetryFormId0 = (ServantScriptEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
  if ( !EntityWithRetryFormId0 )
    goto LABEL_20;
  EntityWithRetryFormId0 = (ServantScriptEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                      (DataMasterBase_WarMaster__WarEntity__int__o *)EntityWithRetryFormId0,
                                                      &entity,
                                                      id,
                                                      (const MethodInfo_24E412C *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)EntityWithRetryFormId0 & 1) == 0 )
  {
    v5 = 1;
    goto LABEL_17;
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