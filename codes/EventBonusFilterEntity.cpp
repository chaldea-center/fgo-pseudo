void __fastcall EventBonusFilterEntity___ctor(EventBonusFilterEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FC556 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FC556 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
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
  if ( (byte_40FC553 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&type);
    byte_40FC553 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           type,
           value,
           priority,
           (const MethodInfo_18C2910 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x20
  int32_t type; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FC555 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__TryGetEntity__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    byte_40FC555 = 1;
  }
  entity = 0LL;
  v13 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  type = this->fields.type;
  if ( type == 5 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_17;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           Master_WarQuestSelectionMaster,
           &entity,
           this->fields.value,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__TryGetEntity__) )
    {
      if ( entity && v13 )
      {
        System_Collections_Generic_List_int___AddRange(
          v13,
          (System_Collections_Generic_IEnumerable_T__o *)entity->fields.longName,
          (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
        return System_Collections_Generic_List_int___ToArray(
                 v13,
                 (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_17:
      sub_B170D4();
    }
LABEL_15:
    if ( v13 )
      return System_Collections_Generic_List_int___ToArray(
               v13,
               (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_17;
  }
  if ( type != 4 )
    goto LABEL_15;
  if ( !v13 )
    goto LABEL_17;
  System_Collections_Generic_List_int___Add(
    v13,
    this->fields.value,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall EventBonusFilterEntity__GetEquipIdList(
        EventBonusFilterEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x19
  int32_t type; // w8
  __int64 v13; // x21
  __int64 v14; // x21
  DataManager_o *v15; // x0
  EventBonusFilterGroupMemberMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v17; // x2
  EventBonusFilterGroupMemberEntity_array *EntitiesByGroupId; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  int max_length; // w8
  EventBonusFilterGroupMemberEntity_array *v22; // x20
  unsigned int v23; // w21
  EventBonusFilterGroupMemberEntity_o *v24; // x8

  if ( (byte_40FC554 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    byte_40FC554 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  type = this->fields.type;
  if ( type != 3 )
  {
    if ( type == 2 )
    {
      v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
        sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v14 = **(_QWORD **)(v13 + 192);
      if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
        sub_AAFCFC(v14);
      v15 = **(DataManager_o ***)(v14 + 184);
      if ( !v15 )
        goto LABEL_23;
      MasterData_WarQuestSelectionMaster = (EventBonusFilterGroupMemberMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                    v15,
                                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_23;
      EntitiesByGroupId = EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                            MasterData_WarQuestSelectionMaster,
                            this->fields.value,
                            v17);
      if ( !EntitiesByGroupId )
        goto LABEL_23;
      max_length = EntitiesByGroupId->max_length;
      v22 = EntitiesByGroupId;
      if ( max_length >= 1 )
      {
        v23 = 0;
        do
        {
          if ( v23 >= max_length )
          {
            sub_B17100(EntitiesByGroupId, v19, v20);
            sub_B170A0();
          }
          v24 = v22->m_Items[v23];
          if ( !v24 || !v11 )
            goto LABEL_23;
          System_Collections_Generic_List_int___Add(
            v11,
            v24->fields.svtId,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          max_length = v22->max_length;
        }
        while ( (int)++v23 < max_length );
      }
    }
    else if ( type == 1 )
    {
      goto LABEL_6;
    }
    if ( v11 )
      return System_Collections_Generic_List_int___ToArray(
               v11,
               (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_23:
    sub_B170D4();
  }
LABEL_6:
  if ( !v11 )
    goto LABEL_23;
  System_Collections_Generic_List_int___Add(
    v11,
    this->fields.value,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}