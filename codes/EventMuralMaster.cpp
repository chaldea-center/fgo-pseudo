void __fastcall EventMuralMaster___ctor(EventMuralMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16241 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__, method, v2);
    byte_4B16241 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    459,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMuralEntity_array *__fastcall EventMuralMaster__GetOpenedEntitiesFromEventId(
        EventMuralMaster_o *this,
        int32_t eventId,
        int32_t *dispNum,
        int32_t *total,
        const MethodInfo *method)
{
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Collections_Generic_List_object__o *v35; // x20
  __int64 v36; // x1
  System_Collections_ObjectModel_Collection_T__o *v37; // x0
  __int64 v38; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v41; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  _DWORD *v48; // x0
  __int64 v49; // x1
  int64_t v50; // x24
  __int64 methodPtr_low; // x9
  int32_t v52; // w25
  int32_t v53; // w26
  _BOOL8 IsQuestPhaseClear_38364228; // x0
  __int64 v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  Il2CppClass **v65; // x0
  System_Collections_Generic_IEnumerator_T__c *v67; // x8
  __int64 v68; // x9
  int32_t *v69; // x10
  __int64 v70; // x0

  if ( (byte_4B1623F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&eventId,
      dispNum);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9, v10);
    sub_1BCA7E0(&CondType_TypeInfo, v11, v12);
    sub_1BCA7E0(&EventMuralEntity___TypeInfo, v13, v14);
    sub_1BCA7E0(&EventMuralEntity_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMuralEntity__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMuralEntity__ToArray__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMuralEntity___ctor__, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMuralEntity__TypeInfo, v29, v30);
    byte_4B1623F = 1;
  }
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
  {
    return (EventMuralEntity_array *)sub_1BCA888(EventMuralEntity___TypeInfo, 0LL);
  }
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMuralEntity__TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMuralEntity___ctor__);
  v37 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v37 )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v37,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v38);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v41;
        p_offset += 4;
        if ( !v41 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v44 = Enumerator->klass;
    v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v46 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_18;
      }
      v47 = (__int64)&v44->vtable[*v46].method;
    }
    else
    {
LABEL_18:
      v47 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v48 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(
                      Enumerator,
                      *(_QWORD *)(v47 + 8));
    v50 = (int64_t)v48;
    if ( !v48 )
      goto LABEL_44;
    methodPtr_low = LOBYTE(EventMuralEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v48 + 304LL) < (unsigned int)methodPtr_low
      || *(EventMuralEntity_c **)(*(_QWORD *)(*(_QWORD *)v48 + 200LL) + 8 * methodPtr_low - 8) != EventMuralEntity_TypeInfo )
    {
      sub_1BCACFC(v48);
LABEL_44:
      sub_1BCAA3C(v48, v49);
    }
    if ( v48[10] == eventId )
    {
      v52 = v48[12];
      v53 = v48[13];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, EventMuralEntity_TypeInfo);
      IsQuestPhaseClear_38364228 = CondType__IsQuestPhaseClear_38364228(v52, v53, -1, 0, 0LL);
      if ( IsQuestPhaseClear_38364228 )
      {
        if ( !v35 )
          sub_1BCAA3C(IsQuestPhaseClear_38364228, v55);
        items = v35->fields._items;
        v63 = Method_System_Collections_Generic_List_EventMuralEntity__Add__;
        ++v35->fields._version;
        if ( !items )
          sub_1BCAA3C(IsQuestPhaseClear_38364228, v55);
        size = v35->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v35,
            (Il2CppObject *)v50,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = &items->obj.klass + size;
          v35->fields._size = size + 1;
          v65[4] = (Il2CppClass *)v50;
          sub_1BCA784((PartyOrganizationUtility_o *)(v65 + 4), v50, v56, v57, v58, v59, v60, v61);
        }
        *dispNum += *(_DWORD *)(v50 + 44);
      }
      *total += *(_DWORD *)(v50 + 44);
    }
  }
  v67 = Enumerator->klass;
  v68 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v69 = &v67->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
    {
      --v68;
      v69 += 4;
      if ( !v68 )
        goto LABEL_39;
    }
    v70 = (__int64)&v67->vtable[*v69].method;
  }
  else
  {
LABEL_39:
    v70 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  v37 = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v70)(
                                                            Enumerator,
                                                            *(_QWORD *)(v70 + 8));
  if ( !v35 )
LABEL_47:
    sub_1BCAA3C(v37, v36);
  return (EventMuralEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v35,
                                     (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMuralEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMuralEntity_array *__fastcall EventMuralMaster__GetOpenedEntitiesFromId(
        EventMuralMaster_o *this,
        int32_t id,
        int32_t *dispNum,
        int32_t *total,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x4
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B16240 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id, dispNum);
    sub_1BCA7E0(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&EventMuralEntity___TypeInfo, v11, v12);
    byte_4B16240 = 1;
  }
  entity = 0LL;
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    return (EventMuralEntity_array *)sub_1BCA888(EventMuralEntity___TypeInfo, 0LL);
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
    return (EventMuralEntity_array *)sub_1BCA888(EventMuralEntity___TypeInfo, 0LL);
  v14 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          id,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__);
  if ( !v14 )
    return (EventMuralEntity_array *)sub_1BCA888(EventMuralEntity___TypeInfo, 0LL);
  if ( !entity )
    sub_1BCAA3C(v14, v15);
  return EventMuralMaster__GetOpenedEntitiesFromEventId(this, (int32_t)entity[2].monitor, dispNum, total, v16);
}