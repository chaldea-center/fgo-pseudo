void WarBoardStageMaster___ctor(WarBoardStageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59399EE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int___ctor__);
    byte_59399EE = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    330,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t WarBoardStageMaster__GetTitleAction(WarBoardStageMaster_o *this, int32_t stageId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  long double v14; // q0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x20
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  Il2CppObject *Entity; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  System_Collections_Generic_IEnumerator_T__o *v29; // [xsp+18h] [xbp-28h]

  if ( (byte_59399EF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_WarBoardStageEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMasterData_WarBoardMaster___);
    sub_21FFC50(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_WarBoardStageEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_59399EF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_WarBoardStageEntity__GetEnumerator__);
  v29 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v7);
  for ( i = Enumerator; ; i = v29 )
  {
    klass = i->klass;
    v10 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            i,
            *(_QWORD *)(v12 + 8));
    if ( (v13 & 1) == 0 )
      break;
    if ( !v29 )
      sub_21FFECC(v13, *(_QWORD *)&stageId);
    v15 = v29->klass;
    v16 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarBoardStageEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_WarBoardStageEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_18:
      v18 = sub_2237E2C(v29, System_Collections_Generic_IEnumerator_WarBoardStageEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            v29,
            *(_QWORD *)(v18 + 8));
    v20 = v19;
    if ( v19 && *(_DWORD *)(v19 + 16) == stageId )
      goto LABEL_25;
  }
  v20 = 0;
LABEL_25:
  if ( v29 )
  {
    v21 = v29->klass;
    v22 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_30;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_30:
      v24 = sub_2237E2C(v29, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(v29, *(_QWORD *)(v24 + 8));
  }
  if ( !v20 || (LODWORD(Entity) = *(_DWORD *)(v20 + 56), (int)Entity < 1) )
  {
    LODWORD(Entity) = 0;
    return (int)Entity;
  }
  if ( (_DWORD)Entity == 1 )
  {
    v26 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_WORD *)(v26 + 309) & 1) == 0 )
      v26 = sub_2237AF8(v14);
    v27 = *(_QWORD *)(*(_QWORD *)(v26 + 192) + 16LL);
    if ( (*(_WORD *)(v27 + 309) & 1) == 0 )
      v27 = sub_2237AF8(v14);
    list = **(System_Collections_ObjectModel_Collection_T__o ***)(v27 + 184);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)list,
                                                                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarBoardMaster___);
      if ( list )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)list,
                   *(_DWORD *)(v20 + 20),
                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int__GetEntity__);
        if ( Entity )
          LODWORD(Entity) = HIDWORD(Entity[1].monitor);
        return (int)Entity;
      }
    }
LABEL_47:
    sub_21FFECC(list, *(_QWORD *)&stageId);
  }
  return (int)Entity;
}