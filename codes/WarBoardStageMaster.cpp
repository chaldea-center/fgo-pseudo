void __fastcall WarBoardStageMaster___ctor(WarBoardStageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41892F6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int___ctor__, method);
    byte_41892F6 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    320,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardStageMaster__GetTitleAction(
        WarBoardStageMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v13; // x1
  __int64 v14; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  _DWORD *v24; // x0
  _DWORD *v25; // x21
  __int64 v26; // x9
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  WarEntity_o *Entity; // x0
  __int64 v32; // x19
  __int64 v33; // x19

  if ( (byte_41892F7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&stageId);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarBoardMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_B2C35C(&WarBoardStageEntity_TypeInfo, v11);
    byte_41892F7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v14);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v14);
    }
    v24 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                      Enumerator,
                      *(_QWORD *)(v23 + 8));
    v25 = v24;
    if ( v24 )
    {
      v26 = *(&WarBoardStageEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v24 + 300LL) < (unsigned int)v26
        || *(WarBoardStageEntity_c **)(*(_QWORD *)(*(_QWORD *)v24 + 200LL) + 8 * v26 - 8) != WarBoardStageEntity_TypeInfo )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B2C728(v24);
        goto LABEL_44;
      }
      if ( v24[4] == stageId )
        goto LABEL_24;
    }
  }
  v25 = 0LL;
LABEL_24:
  v27 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_28:
    v30 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v14);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  if ( !v25 || (LODWORD(Entity) = v25[14], (int)Entity < 1) )
  {
    LODWORD(Entity) = 0;
    return (int)Entity;
  }
  if ( (_DWORD)Entity == 1 )
  {
    v32 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v33 = **(_QWORD **)(v32 + 192);
    if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
      sub_AC505C(v33);
    list = **(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o ***)(v33 + 184);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                           (DataManager_o *)list,
                                                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarBoardMaster___);
      if ( list )
      {
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)list,
                   v25[5],
                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
        if ( Entity )
          LODWORD(Entity) = HIDWORD(Entity->fields.age);
        return (int)Entity;
      }
    }
LABEL_44:
    sub_B2C434(list, *(_QWORD *)&stageId);
  }
  return (int)Entity;
}