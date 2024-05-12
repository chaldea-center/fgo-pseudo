void __fastcall ServantClassMaster___ctor(ServantClassMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438C703 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int___ctor__);
    byte_438C703 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    9,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int___ctor__);
}


bool __fastcall ServantClassMaster__TryGetEntityByIndividuality(
        ServantClassMaster_o *this,
        ServantClassEntity_o **entity,
        int32_t individuality,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  ServantClassEntity_o *v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x10
  System_Collections_Generic_IEnumerator_T__o *v27; // x23
  bool v28; // w22
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int v40; // [xsp+0h] [xbp-40h]

  if ( (byte_438C709 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&ServantClassEntity_TypeInfo);
    byte_438C709 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, entity);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (ServantClassEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                    Enumerator,
                                    *(_QWORD *)(v17 + 8));
    if ( !v18 )
      goto LABEL_34;
    v26 = *(&ServantClassEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v26
      || (ServantClassEntity_c *)v18->klass->_2.typeHierarchy[v26 - 1] != ServantClassEntity_TypeInfo )
    {
      v18 = (ServantClassEntity_o *)sub_B77990(v18);
LABEL_34:
      sub_B7769C(v18, v19);
    }
    if ( v18->fields.individuality == individuality )
    {
      *entity = v18;
      sub_B77560((BattleServantConfConponent_o *)entity, (System_Int32_array **)v18, v20, v21, v22, v23, v24, v25);
      v27 = Enumerator;
      v40 = 67;
      v28 = 1;
      goto LABEL_24;
    }
  }
  v28 = 0;
  v40 = 62;
  v27 = Enumerator;
LABEL_24:
  v29 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_28:
    v32 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(v27, *(_QWORD *)(v32 + 8));
  if ( v40 == 62 )
  {
    *entity = 0LL;
    sub_B77560((BattleServantConfConponent_o *)entity, 0LL, v33, v34, v35, v36, v37, v38);
    return 0;
  }
  return v28;
}


float __fastcall ServantClassMaster__getClassAtk(int32_t classId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_438C704 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C704 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      classId,
                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  return (float)SHIDWORD(Instance->fields.lookup) / 1000.0;
}


System_Collections_Generic_List_int__o *__fastcall ServantClassMaster__getExtraClassIdList(
        ServantClassMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  int32_t *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x9
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0

  if ( (byte_438C708 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&ServantClassEntity_TypeInfo);
    byte_438C708 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, v4);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                       Enumerator,
                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_32;
    v18 = *(&ServantClassEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 300LL) < (unsigned int)v18
      || *(ServantClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * v18 - 8) != ServantClassEntity_TypeInfo )
    {
      v16 = (int32_t *)sub_B77990(v16);
LABEL_32:
      sub_B7769C(v16, v17);
    }
    if ( v16[16] == 8 )
    {
      if ( !v3 )
        sub_B7769C(v16, ServantClassEntity_TypeInfo);
      System_Collections_Generic_List_int___Add(
        v3,
        v16[4],
        (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v19 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      ++v20;
      v21 += 4;
      if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v22 = (__int64)&v19->vtable[*v21].method;
  }
  else
  {
LABEL_28:
    v22 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
  return v3;
}


int32_t __fastcall ServantClassMaster__getRelationId(
        ServantClassMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  WarEntity_o *Entity; // x0
  __int64 v6; // x1

  if ( (byte_438C705 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    byte_438C705 = 1;
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
             classId,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Entity )
    sub_B7769C(0LL, v6);
  return Entity->fields.materialParentWarId;
}


int32_t __fastcall ServantClassMaster__getSupportGroupType(
        ServantClassMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438C707 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    byte_438C707 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         classId,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
  if ( !v5 )
    return 999;
  if ( !entity )
    sub_B7769C(v5, v6);
  return entity->fields.flag;
}


bool __fastcall ServantClassMaster__preProcess(ServantClassMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v3; // x19
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  int32_t *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x9
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  AtlasManager_c *v29; // x0
  struct AtlasManager_StaticFields *static_fields; // x0

  if ( (byte_438C706 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&ServantClassEntity_TypeInfo);
    byte_438C706 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B77694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v3,
    (const MethodInfo_2FE81CC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, v4);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                       Enumerator,
                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_39;
    v18 = *(&ServantClassEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 300LL) < (unsigned int)v18
      || *(ServantClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * v18 - 8) != ServantClassEntity_TypeInfo )
    {
      v16 = (int32_t *)sub_B77990(v16);
LABEL_39:
      sub_B7769C(v16, v17);
    }
    if ( !v3 )
      sub_B7769C(v16, ServantClassEntity_TypeInfo);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      v3,
      v16[4],
      v16[14],
      (const MethodInfo_2FE8D48 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  v19 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      ++v20;
      v21 += 4;
      if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_27;
    }
    v22 = (__int64)&v19->vtable[*v21].method;
  }
  else
  {
LABEL_27:
    v22 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !byte_438C7B7 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    byte_438C7B7 = 1;
  }
  v29 = AtlasManager_TypeInfo;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v29 = AtlasManager_TypeInfo;
  }
  static_fields = v29->static_fields;
  static_fields->classFrameIdList = v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&static_fields->classFrameIdList,
    (System_Int32_array **)v3,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  return 1;
}