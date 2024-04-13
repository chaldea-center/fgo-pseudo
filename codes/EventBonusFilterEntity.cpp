void __fastcall EventBonusFilterEntity___ctor(EventBonusFilterEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB8B2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EB8B2 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
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
  if ( (byte_42EB8AF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, type, value, *(_QWORD *)&priority);
    byte_42EB8AF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           type,
           value,
           priority,
           (const MethodInfo_1AE38D8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_int__o *v26; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v28; // x1
  int32_t type; // w8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB8B1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__TryGetEntity__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v23, v24, v25);
    byte_42EB8B1 = 1;
  }
  entity = 0LL;
  v26 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  type = this->fields.type;
  if ( type == 5 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_17;
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                    &entity,
                                                                    this->fields.value,
                                                                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( entity && v26 )
      {
        System_Collections_Generic_List_int___AddRange(
          v26,
          (System_Collections_Generic_IEnumerable_T__o *)entity->fields.longName,
          (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
        return System_Collections_Generic_List_int___ToArray(
                 v26,
                 (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_17:
      sub_B5D69C(Master_WarQuestSelectionMaster, v28);
    }
LABEL_15:
    if ( v26 )
      return System_Collections_Generic_List_int___ToArray(
               v26,
               (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_17;
  }
  if ( type != 4 )
    goto LABEL_15;
  if ( !v26 )
    goto LABEL_17;
  System_Collections_Generic_List_int___Add(
    v26,
    this->fields.value,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  return System_Collections_Generic_List_int___ToArray(
           v26,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall EventBonusFilterEntity__GetEquipIdList(
        EventBonusFilterEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_int__o *v20; // x19
  void *MasterData_WarQuestSelectionMaster; // x0
  __int64 v22; // x1
  int32_t type; // w8
  __int64 v24; // x21
  __int64 v25; // x21
  const MethodInfo *v26; // x2
  int v27; // w8
  void *v28; // x20
  unsigned int v29; // w21
  __int64 v30; // x8
  __int64 v32; // x0

  if ( (byte_42EB8B0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v17, v18, v19);
    byte_42EB8B0 = 1;
  }
  v20 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  type = this->fields.type;
  if ( type != 3 )
  {
    if ( type == 2 )
    {
      v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
        sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v25 = **(_QWORD **)(v24 + 192);
      if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
        sub_AF52C4(v25);
      MasterData_WarQuestSelectionMaster = **(void ***)(v25 + 184);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_23;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_23;
      MasterData_WarQuestSelectionMaster = EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                             (EventBonusFilterGroupMemberMaster_o *)MasterData_WarQuestSelectionMaster,
                                             this->fields.value,
                                             v26);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_23;
      v27 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 6);
      v28 = MasterData_WarQuestSelectionMaster;
      if ( v27 >= 1 )
      {
        v29 = 0;
        do
        {
          if ( v29 >= v27 )
          {
            v32 = sub_B5D6C8(MasterData_WarQuestSelectionMaster);
            sub_B5D668(v32, 0LL);
          }
          v30 = *((_QWORD *)v28 + (int)v29 + 4);
          if ( !v30 || !v20 )
            goto LABEL_23;
          System_Collections_Generic_List_int___Add(
            v20,
            *(_DWORD *)(v30 + 20),
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          v27 = *((_DWORD *)v28 + 6);
        }
        while ( (int)++v29 < v27 );
      }
    }
    else if ( type == 1 )
    {
      goto LABEL_6;
    }
    if ( v20 )
      return System_Collections_Generic_List_int___ToArray(
               v20,
               (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_23:
    sub_B5D69C(MasterData_WarQuestSelectionMaster, v22);
  }
LABEL_6:
  if ( !v20 )
    goto LABEL_23;
  System_Collections_Generic_List_int___Add(
    v20,
    this->fields.value,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  return System_Collections_Generic_List_int___ToArray(
           v20,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}