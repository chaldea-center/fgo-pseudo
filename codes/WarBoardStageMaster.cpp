void __fastcall WarBoardStageMaster___ctor(WarBoardStageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2277 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int___ctor__);
    byte_42B2277 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    321,
    (const MethodInfo_23E223C *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardStageMaster__GetTitleAction(
        WarBoardStageMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  _DWORD *v17; // x0
  _DWORD *v18; // x21
  __int64 v19; // x9
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  WarEntity_o *Entity; // x0
  __int64 v25; // x19
  __int64 v26; // x19

  if ( (byte_42B2278 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMasterData_WarBoardMaster___);
    sub_B52984(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&WarBoardStageEntity_TypeInfo);
    byte_42B2278 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v7);
    }
    v17 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                      Enumerator,
                      *(_QWORD *)(v16 + 8));
    v18 = v17;
    if ( v17 )
    {
      v19 = *(&WarBoardStageEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 300LL) < (unsigned int)v19
        || *(WarBoardStageEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * v19 - 8) != WarBoardStageEntity_TypeInfo )
      {
        sub_B52D50(v17);
        goto LABEL_44;
      }
      if ( v17[4] == stageId )
        goto LABEL_24;
    }
  }
  v18 = 0LL;
LABEL_24:
  v20 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_28:
    v23 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v7);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  if ( !v18 || (LODWORD(Entity) = v18[14], (int)Entity < 1) )
  {
    LODWORD(Entity) = 0;
    return (int)Entity;
  }
  if ( (_DWORD)Entity == 1 )
  {
    v25 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
      sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v26 = **(_QWORD **)(v25 + 192);
    if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
      sub_AEB684(v26);
    list = **(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o ***)(v26 + 184);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                           (DataManager_o *)list,
                                                                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarBoardMaster___);
      if ( list )
      {
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)list,
                   v18[5],
                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
        if ( Entity )
          LODWORD(Entity) = HIDWORD(Entity->fields.age);
        return (int)Entity;
      }
    }
LABEL_44:
    sub_B52A5C(list, *(_QWORD *)&stageId);
  }
  return (int)Entity;
}