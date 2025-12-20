void WarBoardStageMaster___ctor(WarBoardStageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DAB9 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int___ctor__);
    byte_4D2DAB9 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    328,
    (const MethodInfo_345919C *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t WarBoardStageMaster__GetTitleAction(WarBoardStageMaster_o *this, int32_t stageId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x21
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  long double v22; // q0
  Il2CppObject *Entity; // x0
  __int64 v24; // x0
  __int64 v25; // x0

  if ( (byte_4D2DABA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_WarBoardStageEntity__GetEnumerator__);
    sub_1C94098(&Method_DataManager_GetMasterData_WarBoardMaster___);
    sub_1C94098(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_WarBoardStageEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4D2DABA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_WarBoardStageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarBoardStageEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_WarBoardStageEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_16:
      v15 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_WarBoardStageEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    v17 = v16;
    if ( v16 && *(_DWORD *)(v16 + 16) == stageId )
      goto LABEL_22;
  }
  v17 = 0;
LABEL_22:
  v18 = Enumerator->klass;
  v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_26;
    }
    v21 = (__int64)&v18->vtable[*v20];
  }
  else
  {
LABEL_26:
    v21 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(Enumerator, *(_QWORD *)(v21 + 8));
  if ( !v17 || (LODWORD(Entity) = *(_DWORD *)(v17 + 56), (int)Entity < 1) )
  {
    LODWORD(Entity) = 0;
    return (int)Entity;
  }
  if ( (_DWORD)Entity == 1 )
  {
    v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
      v24 = sub_1C6A12C(v22);
    v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1C6A12C(v22);
    list = **(System_Collections_ObjectModel_Collection_T__o ***)(v25 + 184);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)list,
                                                                 (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_WarBoardMaster___);
      if ( list )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)list,
                   *(_DWORD *)(v17 + 20),
                   (const MethodInfo_345B4C0 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
        if ( Entity )
          LODWORD(Entity) = HIDWORD(Entity[1].monitor);
        return (int)Entity;
      }
    }
LABEL_41:
    sub_1C942F0(list, *(_QWORD *)&stageId);
  }
  return (int)Entity;
}