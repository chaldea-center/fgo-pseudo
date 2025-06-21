void __fastcall QuestMessageMaster___ctor(QuestMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CB30 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__, method);
    byte_4B1CB30 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    80,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__);
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

  if ( (byte_4B1CB2E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4B1CB2E = 1;
  }
  PK = (Il2CppObject *)QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&idx);
  return (QuestMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_32CC8B8 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__);
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

  if ( (byte_4B1CB31 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Count__, *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Item__, v9);
    byte_4B1CB31 = 1;
  }
  ValidMessageList = QuestMessageMaster__GetValidMessageList(this, questId, phase, messageType, method);
  if ( !ValidMessageList )
    goto LABEL_8;
  if ( *((int *)ValidMessageList + 6) >= 1 )
  {
    ValidMessageList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)ValidMessageList,
                         0,
                         (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_QuestMessageEntity__get_Item__);
    if ( ValidMessageList )
      return (System_String_o *)*((_QWORD *)ValidMessageList + 4);
LABEL_8:
    sub_1BCB254(ValidMessageList, v11);
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
  QuestMessageEntity_o *v33; // x24
  int32_t v34; // w8
  _BOOL8 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  _BOOL8 IsQuestClear_39516796; // x0
  __int64 v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0

  if ( (byte_4B1CB32 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_QuestMessageEntity__GetEnumerator__,
      *(_QWORD *)&questId);
    sub_1BCAFF8(&CondType_TypeInfo, v9);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__getEntityList__, v10);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v11);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_QuestMessageEntity__TypeInfo, v12);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestMessageEntity__Add__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestMessageEntity___ctor__, v15);
    sub_1BCAFF8(&System_Collections_Generic_List_QuestMessageEntity__TypeInfo, v16);
    byte_4B1CB32 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_QuestMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_QuestMessageEntity___ctor__);
  if ( !list )
    sub_1BCB254(v19, v20);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_QuestMessageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v21);
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
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v30 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_QuestMessageEntity__TypeInfo, 0LL);
    }
    v31 = (QuestMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                    Enumerator,
                                    *(_QWORD *)(v30 + 8));
    v33 = v31;
    if ( !v31 )
      sub_1BCB254(0LL, v32);
    if ( v31->fields.questId == questId && v31->fields.displayType == messageType )
    {
      v34 = v31->fields.phase;
      if ( v34 == phase || !v34 )
      {
        v35 = QuestMessageEntity__CheckValid(v31, v32);
        if ( v35 )
        {
          if ( v33->fields.frequencyType == 1 )
          {
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            IsQuestClear_39516796 = CondType__IsQuestClear_39516796(questId, -1, 0, 0LL);
            if ( !IsQuestClear_39516796 )
            {
              if ( !v18 )
                sub_1BCB254(IsQuestClear_39516796, v40);
              items = v18->fields._items;
              v42 = Method_System_Collections_Generic_List_QuestMessageEntity__Add__;
              ++v18->fields._version;
              if ( !items )
                sub_1BCB254(IsQuestClear_39516796, v40);
              size = v18->fields._size;
              if ( (unsigned int)size < items->max_length )
                goto LABEL_31;
LABEL_35:
              System_Collections_Generic_List_object___AddWithResize(
                v18,
                (Il2CppObject *)v33,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
            }
          }
          else
          {
            if ( !v18 )
              sub_1BCB254(v35, v36);
            items = v18->fields._items;
            v42 = Method_System_Collections_Generic_List_QuestMessageEntity__Add__;
            ++v18->fields._version;
            if ( !items )
              sub_1BCB254(v35, v36);
            size = v18->fields._size;
            if ( (unsigned int)size >= items->max_length )
              goto LABEL_35;
LABEL_31:
            v44 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v44[4] = (Il2CppClass *)v33;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v44 + 4), (int32_t)v33, v37, v38);
          }
        }
      }
    }
  }
  v45 = Enumerator->klass;
  v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_41;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_41:
    v48 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
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

  if ( (byte_4B1CB2F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__, entity);
    byte_4B1CB2F = 1;
  }
  PK = (Il2CppObject *)QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__);
}