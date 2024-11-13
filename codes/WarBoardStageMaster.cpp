void __fastcall WarBoardStageMaster___ctor(WarBoardStageMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17242 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int___ctor__, method, v2);
    byte_4B17242 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    322,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardStageMaster__GetTitleAction(
        WarBoardStageMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  _DWORD *v30; // x0
  _DWORD *v31; // x21
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  long double v37; // q0
  Il2CppObject *Entity; // x0
  __int64 v39; // x0
  __int64 v40; // x0

  if ( (byte_4B17243 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&stageId,
      method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarBoardMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15, v16);
    sub_1BCA7E0(&WarBoardStageEntity_TypeInfo, v17, v18);
    byte_4B17243 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v30 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                      Enumerator,
                      *(_QWORD *)(v29 + 8));
    v31 = v30;
    if ( v30 )
    {
      methodPtr_low = LOBYTE(WarBoardStageEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 304LL) < (unsigned int)methodPtr_low
        || *(WarBoardStageEntity_c **)(*(_QWORD *)(*(_QWORD *)v30 + 200LL) + 8 * methodPtr_low - 8) != WarBoardStageEntity_TypeInfo )
      {
        sub_1BCACFC(v30);
        goto LABEL_44;
      }
      if ( v30[4] == stageId )
        goto LABEL_24;
    }
  }
  v31 = 0LL;
LABEL_24:
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_28;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_28:
    v36 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  if ( !v31 || (LODWORD(Entity) = v31[14], (int)Entity < 1) )
  {
    LODWORD(Entity) = 0;
    return (int)Entity;
  }
  if ( (_DWORD)Entity == 1 )
  {
    v39 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
      v39 = sub_1C1C6BC(v37);
    v40 = *(_QWORD *)(*(_QWORD *)(v39 + 192) + 16LL);
    if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
      v40 = sub_1C1C6BC(v37);
    list = **(System_Collections_ObjectModel_Collection_T__o ***)(v40 + 184);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)list,
                                                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarBoardMaster___);
      if ( list )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)list,
                   v31[5],
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
        if ( Entity )
          LODWORD(Entity) = HIDWORD(Entity[1].monitor);
        return (int)Entity;
      }
    }
LABEL_44:
    sub_1BCAA3C(list, *(_QWORD *)&stageId);
  }
  return (int)Entity;
}