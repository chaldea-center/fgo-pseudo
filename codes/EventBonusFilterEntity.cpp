void __fastcall EventBonusFilterEntity___ctor(EventBonusFilterEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438E83A & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438E83A = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


bool __fastcall EventBonusFilterEntity__CheckBonusFilterType(
        EventBonusFilterEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  return this->fields.type == type;
}


System_String_o *__fastcall EventBonusFilterEntity__CreatePK(
        int32_t eventId,
        int32_t type,
        int32_t value,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_438E837 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_438E837 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           type,
           value,
           priority,
           (const MethodInfo_1D17A7C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  System_Collections_Generic_List_int__o *v3; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  int32_t type; // w8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438E839 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_438E839 = 1;
  }
  entity = 0LL;
  v3 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  type = this->fields.type;
  if ( type == 5 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_17;
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                    &entity,
                                                                    this->fields.value,
                                                                    (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( entity && v3 )
      {
        System_Collections_Generic_List_int___AddRange(
          v3,
          (System_Collections_Generic_IEnumerable_T__o *)entity->fields.longName,
          (const MethodInfo_30E603C *)Method_System_Collections_Generic_List_int__AddRange__);
        return System_Collections_Generic_List_int___ToArray(
                 v3,
                 (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_17:
      sub_B7769C(Master_WarQuestSelectionMaster, v5);
    }
LABEL_15:
    if ( v3 )
      return System_Collections_Generic_List_int___ToArray(
               v3,
               (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_17;
  }
  if ( type != 4 )
    goto LABEL_15;
  if ( !v3 )
    goto LABEL_17;
  System_Collections_Generic_List_int___Add(
    v3,
    this->fields.value,
    (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall EventBonusFilterEntity__GetEquipIdList(
        EventBonusFilterEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  void *MasterData_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  int32_t type; // w8
  __int64 v7; // x21
  __int64 v8; // x21
  const MethodInfo *v9; // x2
  int v10; // w8
  void *v11; // x20
  unsigned int v12; // w21
  __int64 v13; // x8
  __int64 v15; // x0

  if ( (byte_438E838 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_438E838 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  type = this->fields.type;
  if ( type != 3 )
  {
    if ( type == 2 )
    {
      v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
        sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v8 = **(_QWORD **)(v7 + 192);
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_B0F2C4(v8);
      MasterData_WarQuestSelectionMaster = **(void ***)(v8 + 184);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_23;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_23;
      MasterData_WarQuestSelectionMaster = EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                             (EventBonusFilterGroupMemberMaster_o *)MasterData_WarQuestSelectionMaster,
                                             this->fields.value,
                                             v9);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_23;
      v10 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 6);
      v11 = MasterData_WarQuestSelectionMaster;
      if ( v10 >= 1 )
      {
        v12 = 0;
        do
        {
          if ( v12 >= v10 )
          {
            v15 = sub_B776C8(MasterData_WarQuestSelectionMaster);
            sub_B77668(v15, 0LL);
          }
          v13 = *((_QWORD *)v11 + (int)v12 + 4);
          if ( !v13 || !v3 )
            goto LABEL_23;
          System_Collections_Generic_List_int___Add(
            v3,
            *(_DWORD *)(v13 + 20),
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          v10 = *((_DWORD *)v11 + 6);
        }
        while ( (int)++v12 < v10 );
      }
    }
    else if ( type == 1 )
    {
      goto LABEL_6;
    }
    if ( v3 )
      return System_Collections_Generic_List_int___ToArray(
               v3,
               (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_23:
    sub_B7769C(MasterData_WarQuestSelectionMaster, v5);
  }
LABEL_6:
  if ( !v3 )
    goto LABEL_23;
  System_Collections_Generic_List_int___Add(
    v3,
    this->fields.value,
    (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}