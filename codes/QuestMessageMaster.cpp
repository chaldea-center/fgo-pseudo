void QuestMessageMaster___ctor(QuestMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27905 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__);
    byte_4C27905 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    80,
    (const MethodInfo_338A52C *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestMessageEntity_o *QuestMessageMaster__GetEntity(
        QuestMessageMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27903 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__);
    byte_4C27903 = 1;
  }
  PK = (Il2CppObject *)QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&idx);
  return (QuestMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_338C850 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__);
}


System_String_o *QuestMessageMaster__GetValidMessage(
        QuestMessageMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t messageType,
        const MethodInfo *method)
{
  void *ValidMessageList; // x0
  __int64 v10; // x1

  if ( (byte_4C27906 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Item__);
    byte_4C27906 = 1;
  }
  ValidMessageList = QuestMessageMaster__GetValidMessageList(this, questId, phase, messageType, method);
  if ( !ValidMessageList )
    goto LABEL_8;
  if ( *((int *)ValidMessageList + 6) >= 1 )
  {
    ValidMessageList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)ValidMessageList,
                         0,
                         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_QuestMessageEntity__get_Item__);
    if ( ValidMessageList )
      return (System_String_o *)*((_QWORD *)ValidMessageList + 4);
LABEL_8:
    sub_1C2D6EC(ValidMessageList, v10);
  }
  return 0;
}


System_Collections_Generic_List_QuestMessageEntity__o *QuestMessageMaster__GetValidMessageList(
        QuestMessageMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t messageType,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x19
  System_Collections_Generic_List_object__o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  QuestMessageEntity_o *v23; // x0
  const MethodInfo *v24; // x1
  QuestMessageEntity_o *v25; // x24
  int32_t v26; // w8
  _BOOL8 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  _BOOL8 IsQuestClear_40102980; // x0
  __int64 v32; // x1
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_4C27907 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_QuestMessageEntity__GetEnumerator__);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__getEntityList__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_QuestMessageEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestMessageEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestMessageEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_QuestMessageEntity__TypeInfo);
    byte_4C27907 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_QuestMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_QuestMessageEntity___ctor__);
  if ( !list )
    sub_1C2D6EC(v11, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_QuestMessageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_9;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v18 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8))
        & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestMessageEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_QuestMessageEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_16:
      v22 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_QuestMessageEntity__TypeInfo, 0);
    }
    v23 = (QuestMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                    Enumerator,
                                    *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( !v23 )
      sub_1C2D6EC(0, v24);
    if ( v23->fields.questId == questId && v23->fields.displayType == messageType )
    {
      v26 = v23->fields.phase;
      if ( v26 == phase || !v26 )
      {
        v27 = QuestMessageEntity__CheckValid(v23, v24);
        if ( v27 )
        {
          if ( v25->fields.frequencyType == 1 )
          {
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            IsQuestClear_40102980 = CondType__IsQuestClear_40102980(questId, -1, 0, 0);
            if ( !IsQuestClear_40102980 )
            {
              if ( !v10 )
                sub_1C2D6EC(IsQuestClear_40102980, v32);
              items = v10->fields._items;
              v34 = Method_System_Collections_Generic_List_QuestMessageEntity__Add__;
              ++v10->fields._version;
              if ( !items )
                sub_1C2D6EC(IsQuestClear_40102980, v32);
              size = v10->fields._size;
              if ( (unsigned int)size < LODWORD(items->max_length) )
                goto LABEL_31;
LABEL_35:
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)v25,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
          }
          else
          {
            if ( !v10 )
              sub_1C2D6EC(v27, v28);
            items = v10->fields._items;
            v34 = Method_System_Collections_Generic_List_QuestMessageEntity__Add__;
            ++v10->fields._version;
            if ( !items )
              sub_1C2D6EC(v27, v28);
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
              goto LABEL_35;
LABEL_31:
            v36 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v25;
            sub_1C2D434((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v25, v29, v30);
          }
        }
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_41;
    }
    v40 = (__int64)&v37->vtable[*v39];
  }
  else
  {
LABEL_41:
    v40 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  return (System_Collections_Generic_List_QuestMessageEntity__o *)v10;
}


// local variable allocation has failed, the output may be wrong!
bool QuestMessageMaster__TryGetEntity(
        QuestMessageMaster_o *this,
        QuestMessageEntity_o **entity,
        int32_t questId,
        int32_t phase,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C27904 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__);
    byte_4C27904 = 1;
  }
  PK = (Il2CppObject *)QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__);
}