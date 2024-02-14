void __fastcall EventBonusFilterEntity___ctor(EventBonusFilterEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4216E6B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4216E6B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


bool __fastcall EventBonusFilterEntity__CheckBonusFilterType(
        EventBonusFilterEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  return this->fields.type == type;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventBonusFilterEntity__CreatePK(
        int32_t eventId,
        int32_t type,
        int32_t value,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4216E68 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&type);
    byte_4216E68 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           type,
           value,
           priority,
           (const MethodInfo_1713C34 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall EventBonusFilterEntity__CreatePrimaryKey(
        EventBonusFilterEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventBonusFilterEntity__CreatePK(
           this->fields.eventId,
           this->fields.type,
           this->fields.value,
           this->fields.priority,
           v2);
}


System_Int32_array *__fastcall EventBonusFilterEntity__GetBonusSkillIdList(
        EventBonusFilterEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t type; // w8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4216E6A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__TryGetEntity__,
      v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4216E6A = 1;
  }
  entity = 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  type = this->fields.type;
  if ( type == 5 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_17;
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                    &entity,
                                                                    this->fields.value,
                                                                    (const MethodInfo_2669C30 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( entity && v11 )
      {
        System_Collections_Generic_List_int___AddRange(
          v11,
          (System_Collections_Generic_IEnumerable_T__o *)entity->fields.longName,
          (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
        return System_Collections_Generic_List_int___ToArray(
                 v11,
                 (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_17:
      sub_B0D97C(Master_WarQuestSelectionMaster);
    }
LABEL_15:
    if ( v11 )
      return System_Collections_Generic_List_int___ToArray(
               v11,
               (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_17;
  }
  if ( type != 4 )
    goto LABEL_15;
  if ( !v11 )
    goto LABEL_17;
  System_Collections_Generic_List_int___Add(
    v11,
    this->fields.value,
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall EventBonusFilterEntity__GetEquipIdList(
        EventBonusFilterEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x19
  void *MasterData_WarQuestSelectionMaster; // x0
  int32_t type; // w8
  __int64 v12; // x21
  __int64 v13; // x21
  const MethodInfo *v14; // x2
  int v15; // w8
  void *v16; // x20
  unsigned int v17; // w21
  __int64 v18; // x8
  __int64 v20; // x0

  if ( (byte_4216E69 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    byte_4216E69 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  type = this->fields.type;
  if ( type != 3 )
  {
    if ( type == 2 )
    {
      v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
        sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v13 = **(_QWORD **)(v12 + 192);
      if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
        sub_AA65A4(v13);
      MasterData_WarQuestSelectionMaster = **(void ***)(v13 + 184);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_23;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_23;
      MasterData_WarQuestSelectionMaster = EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                             (EventBonusFilterGroupMemberMaster_o *)MasterData_WarQuestSelectionMaster,
                                             this->fields.value,
                                             v14);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_23;
      v15 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 6);
      v16 = MasterData_WarQuestSelectionMaster;
      if ( v15 >= 1 )
      {
        v17 = 0;
        do
        {
          if ( v17 >= v15 )
          {
            v20 = sub_B0D9A8(MasterData_WarQuestSelectionMaster);
            sub_B0D948(v20, 0LL);
          }
          v18 = *((_QWORD *)v16 + (int)v17 + 4);
          if ( !v18 || !v9 )
            goto LABEL_23;
          System_Collections_Generic_List_int___Add(
            v9,
            *(_DWORD *)(v18 + 20),
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          v15 = *((_DWORD *)v16 + 6);
        }
        while ( (int)++v17 < v15 );
      }
    }
    else if ( type == 1 )
    {
      goto LABEL_6;
    }
    if ( v9 )
      return System_Collections_Generic_List_int___ToArray(
               v9,
               (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_23:
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  }
LABEL_6:
  if ( !v9 )
    goto LABEL_23;
  System_Collections_Generic_List_int___Add(
    v9,
    this->fields.value,
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}