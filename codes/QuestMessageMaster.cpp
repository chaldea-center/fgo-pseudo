void __fastcall QuestMessageMaster___ctor(QuestMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4BA3 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__, method);
    byte_4BB4BA3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    80,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestMessageEntity_o *__fastcall QuestMessageMaster__GetEntity(
        QuestMessageMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BB4BA1 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4BB4BA1 = 1;
  }
  PK = (Il2CppObject *)QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&idx);
  return (QuestMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_323D0DC *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestMessageMaster__GetValidMessage(
        QuestMessageMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t messageType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  void *ValidMessageList; // x0
  __int64 v11; // x1

  if ( (byte_4BB4BA4 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Count__, *(_QWORD *)&questId);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Item__, v9);
    byte_4BB4BA4 = 1;
  }
  ValidMessageList = QuestMessageMaster__GetValidMessageList(this, questId, phase, messageType, method);
  if ( !ValidMessageList )
    goto LABEL_8;
  if ( *((int *)ValidMessageList + 6) >= 1 )
  {
    ValidMessageList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)ValidMessageList,
                         0,
                         (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_QuestMessageEntity__get_Item__);
    if ( ValidMessageList )
      return (System_String_o *)*((_QWORD *)ValidMessageList + 4);
LABEL_8:
    sub_1C13F80(ValidMessageList, v11);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestMessageEntity__o *__fastcall QuestMessageMaster__GetValidMessageList(
        QuestMessageMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t messageType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x19
  System_Collections_Generic_List_object__o *v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  QuestMessageEntity_o *v31; // x0
  const MethodInfo *v32; // x1
  int64_t v33; // x24
  int32_t v34; // w8
  _BOOL8 v35; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  _BOOL8 IsQuestClear_38735352; // x0
  __int64 v44; // x1
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0

  if ( (byte_4BB4BA5 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_QuestMessageEntity__GetEnumerator__,
      *(_QWORD *)&questId);
    sub_1C13D24(&CondType_TypeInfo, v9);
    sub_1C13D24(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__getEntityList__, v10);
    sub_1C13D24(&System_IDisposable_TypeInfo, v11);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_QuestMessageEntity__TypeInfo, v12);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestMessageEntity__Add__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestMessageEntity___ctor__, v15);
    sub_1C13D24(&System_Collections_Generic_List_QuestMessageEntity__TypeInfo, v16);
    byte_4BB4BA5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v18 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_QuestMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_QuestMessageEntity___ctor__);
  if ( !list )
    sub_1C13F80(v19, v20);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_QuestMessageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v21);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestMessageEntity__c **)v29 - 1) != System_Collections_Generic_IEnumerator_QuestMessageEntity__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_QuestMessageEntity__TypeInfo, 0LL);
    }
    v31 = (QuestMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                    Enumerator,
                                    *(_QWORD *)(v30 + 8));
    v33 = (int64_t)v31;
    if ( !v31 )
      sub_1C13F80(0LL, v32);
    if ( v31->fields.questId == questId && v31->fields.displayType == messageType )
    {
      v34 = v31->fields.phase;
      if ( v34 == phase || !v34 )
      {
        v35 = QuestMessageEntity__CheckValid(v31, v32);
        if ( v35 )
        {
          if ( *(_DWORD *)(v33 + 52) == 1 )
          {
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            IsQuestClear_38735352 = CondType__IsQuestClear_38735352(questId, -1, 0, 0LL);
            if ( !IsQuestClear_38735352 )
            {
              if ( !v18 )
                sub_1C13F80(IsQuestClear_38735352, v44);
              items = v18->fields._items;
              v46 = Method_System_Collections_Generic_List_QuestMessageEntity__Add__;
              ++v18->fields._version;
              if ( !items )
                sub_1C13F80(IsQuestClear_38735352, v44);
              size = v18->fields._size;
              if ( (unsigned int)size < items->max_length )
                goto LABEL_31;
LABEL_35:
              System_Collections_Generic_List_object___AddWithResize(
                v18,
                (Il2CppObject *)v33,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
            }
          }
          else
          {
            if ( !v18 )
              sub_1C13F80(v35, v36);
            items = v18->fields._items;
            v46 = Method_System_Collections_Generic_List_QuestMessageEntity__Add__;
            ++v18->fields._version;
            if ( !items )
              sub_1C13F80(v35, v36);
            size = v18->fields._size;
            if ( (unsigned int)size >= items->max_length )
              goto LABEL_35;
LABEL_31:
            v48 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v48[4] = (Il2CppClass *)v33;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v48 + 4), v33, v37, v38, v39, v40, v41, v42);
          }
        }
      }
    }
  }
  v49 = Enumerator->klass;
  v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_41;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_41:
    v52 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(Enumerator, *(_QWORD *)(v52 + 8));
  return (System_Collections_Generic_List_QuestMessageEntity__o *)v18;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestMessageMaster__TryGetEntity(
        QuestMessageMaster_o *this,
        QuestMessageEntity_o **entity,
        int32_t questId,
        int32_t phase,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BB4BA2 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__, entity);
    byte_4BB4BA2 = 1;
  }
  PK = (Il2CppObject *)QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__);
}