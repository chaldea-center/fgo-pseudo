void __fastcall ReprintStageMaster___ctor(ReprintStageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC80EB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_ReprintStageMaster__ReprintStageEntity__string___ctor__, method);
    byte_4BC80EB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    308,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_ReprintStageMaster__ReprintStageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ReprintStageEntity_o *__fastcall ReprintStageMaster__GetEntity(
        ReprintStageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC80E9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_ReprintStageMaster__ReprintStageEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4BC80E9 = 1;
  }
  PK = (Il2CppObject *)ReprintStageEntity__CreatePK(questId, questPhase, wave, *(const MethodInfo **)&wave);
  return (ReprintStageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_324D130 *)Method_DataMasterBase_ReprintStageMaster__ReprintStageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ReprintStageEntity__o *__fastcall ReprintStageMaster__GetEntityList(
        ReprintStageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x1
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0

  if ( (byte_4BC80EC & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_ReprintStageEntity__GetEnumerator__,
      *(_QWORD *)&questId);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v7);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_ReprintStageEntity__TypeInfo, v8);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ReprintStageEntity__Add__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ReprintStageEntity___ctor__, v11);
    sub_1C1ABD4(&System_Collections_Generic_List_ReprintStageEntity__TypeInfo, v12);
    byte_4BC80EC = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ReprintStageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ReprintStageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C1AE30(0LL, v14);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_ReprintStageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ReprintStageEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_ReprintStageEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_ReprintStageEntity__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    v33 = v26;
    if ( v26 && *(_DWORD *)(v26 + 16) == questId && *(_DWORD *)(v26 + 20) == questPhase )
    {
      if ( !v13 )
        sub_1C1AE30(v26, v26);
      items = v13->fields._items;
      v35 = Method_System_Collections_Generic_List_ReprintStageEntity__Add__;
      ++v13->fields._version;
      if ( !items )
        sub_1C1AE30(v26, v26);
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          (Il2CppObject *)v26,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v33;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v37 + 4), v33, v27, v28, v29, v30, v31, v32);
      }
    }
  }
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_30;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_30:
    v41 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  return (System_Collections_Generic_List_ReprintStageEntity__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ReprintStageMaster__TryGetEntity(
        ReprintStageMaster_o *this,
        ReprintStageEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC80EA & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_ReprintStageMaster__ReprintStageEntity__string__TryGetEntity__, entity);
    byte_4BC80EA = 1;
  }
  PK = (Il2CppObject *)ReprintStageEntity__CreatePK(questId, questPhase, wave, *(const MethodInfo **)&questPhase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_ReprintStageMaster__ReprintStageEntity__string__TryGetEntity__);
}