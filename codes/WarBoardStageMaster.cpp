void __fastcall WarBoardStageMaster___ctor(WarBoardStageMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EABD6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42EABD6 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    321,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardStageMaster__GetTitleAction(
        WarBoardStageMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v28; // x1
  __int64 v29; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  _DWORD *v39; // x0
  _DWORD *v40; // x21
  __int64 v41; // x9
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  WarEntity_o *Entity; // x0
  __int64 v47; // x19
  __int64 v48; // x19

  if ( (byte_42EABD7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      stageId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarBoardMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v21, v22, v23);
    sub_B5D5C4(&WarBoardStageEntity_TypeInfo, v24, v25, v26);
    byte_42EABD7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v28);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v32;
        p_offset += 4;
        if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v29);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v35 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v37 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v38 = (__int64)&v35->vtable[*v37].method;
    }
    else
    {
LABEL_16:
      v38 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v29);
    }
    v39 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
                      Enumerator,
                      *(_QWORD *)(v38 + 8));
    v40 = v39;
    if ( v39 )
    {
      v41 = *(&WarBoardStageEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v39 + 300LL) < (unsigned int)v41
        || *(WarBoardStageEntity_c **)(*(_QWORD *)(*(_QWORD *)v39 + 200LL) + 8 * v41 - 8) != WarBoardStageEntity_TypeInfo )
      {
        sub_B5D990(v39);
        goto LABEL_44;
      }
      if ( v39[4] == stageId )
        goto LABEL_24;
    }
  }
  v40 = 0LL;
LABEL_24:
  v42 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      ++v43;
      v44 += 4;
      if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_28:
    v45 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v29);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(Enumerator, *(_QWORD *)(v45 + 8));
  if ( !v40 || (LODWORD(Entity) = v40[14], (int)Entity < 1) )
  {
    LODWORD(Entity) = 0;
    return (int)Entity;
  }
  if ( (_DWORD)Entity == 1 )
  {
    v47 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v47 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v48 = **(_QWORD **)(v47 + 192);
    if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
      sub_AF52C4(v48);
    list = **(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o ***)(v48 + 184);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                           (DataManager_o *)list,
                                                                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarBoardMaster___);
      if ( list )
      {
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)list,
                   v40[5],
                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
        if ( Entity )
          LODWORD(Entity) = HIDWORD(Entity->fields.age);
        return (int)Entity;
      }
    }
LABEL_44:
    sub_B5D69C(list, *(_QWORD *)&stageId);
  }
  return (int)Entity;
}