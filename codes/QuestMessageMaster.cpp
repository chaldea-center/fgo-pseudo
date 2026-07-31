void QuestMessageMaster___ctor(QuestMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938D30 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__);
    byte_5938D30 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    80,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__);
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

  if ( (byte_5938D2E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__);
    byte_5938D2E = 1;
  }
  PK = (Il2CppObject *)QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&idx);
  return (QuestMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_3EE2044 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__);
}


System_Collections_Generic_List_QuestMessageEntity__o *QuestMessageMaster__GetMessageListIgnoreCondTypeCheck(
        QuestMessageMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t messageType,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x23
  System_Collections_Generic_List_object__o *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  int v34; // w8
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  System_Collections_Generic_IEnumerator_T__o *v44; // [xsp+18h] [xbp-48h]

  if ( (byte_5938D33 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestMessageEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__getEntityList__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_QuestMessageEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestMessageEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestMessageEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestMessageEntity__TypeInfo);
    byte_5938D33 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestMessageEntity___ctor__);
  if ( !list )
    sub_21FFECC(v11, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_QuestMessageEntity__GetEnumerator__);
  v44 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v14);
  for ( i = Enumerator; ; i = v44 )
  {
    klass = i->klass;
    v17 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_10;
      }
      v19 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v19 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            i,
            *(_QWORD *)(v19 + 8));
    if ( (v20 & 1) == 0 )
      break;
    if ( !v44 )
      sub_21FFECC(v20, v21);
    v22 = v44->klass;
    v23 = *(unsigned __int16 *)&v44->klass->_2.rank;
    if ( *(_WORD *)&v44->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestMessageEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_QuestMessageEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_18;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_18:
      v25 = sub_2237E2C(v44, System_Collections_Generic_IEnumerator_QuestMessageEntity__TypeInfo, 0);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            v44,
            *(_QWORD *)(v25 + 8));
    v33 = v26;
    if ( !v26 )
      sub_21FFECC(0, 0);
    if ( *(_DWORD *)(v26 + 16) == questId && *(_DWORD *)(v26 + 56) == messageType )
    {
      v34 = *(_DWORD *)(v26 + 20);
      if ( v34 == phase || !v34 )
      {
        if ( !v10
          || (items = v10->fields._items,
              v36 = Method_System_Collections_Generic_List_QuestMessageEntity__Add__,
              ++v10->fields._version,
              !items) )
        {
          sub_21FFECC(v26, v26);
        }
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)v26,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v33;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v38 + 4), v33, v27, v28, v29, v30, v31, v32);
        }
      }
    }
  }
  if ( v44 )
  {
    v39 = v44->klass;
    v40 = *(unsigned __int16 *)&v44->klass->_2.rank;
    if ( *(_WORD *)&v44->klass->_2.rank )
    {
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_37;
      }
      v42 = (__int64)&v39->vtable[*v41];
    }
    else
    {
LABEL_37:
      v42 = sub_2237E2C(v44, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(v44, *(_QWORD *)(v42 + 8));
  }
  return (System_Collections_Generic_List_QuestMessageEntity__o *)v10;
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

  if ( (byte_5938D31 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Item__);
    byte_5938D31 = 1;
  }
  ValidMessageList = QuestMessageMaster__GetValidMessageList(this, questId, phase, messageType, method);
  if ( !ValidMessageList )
    goto LABEL_8;
  if ( *((int *)ValidMessageList + 6) >= 1 )
  {
    ValidMessageList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)ValidMessageList,
                         0,
                         (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_QuestMessageEntity__get_Item__);
    if ( ValidMessageList )
      return (System_String_o *)*((_QWORD *)ValidMessageList + 4);
LABEL_8:
    sub_21FFECC(ValidMessageList, v10);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x23
  System_Collections_Generic_List_object__o *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  QuestMessageEntity_o *v26; // x0
  const MethodInfo *v27; // x1
  QuestMessageEntity_o *v28; // x23
  int32_t v29; // w8
  _BOOL8 v30; // x0
  __int64 v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  _BOOL8 IsQuestClear_47254560; // x0
  __int64 v39; // x1
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  System_Collections_Generic_IEnumerator_T__o *v49; // [xsp+18h] [xbp-58h]

  if ( (byte_5938D32 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestMessageEntity__GetEnumerator__);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__getEntityList__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_QuestMessageEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestMessageEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestMessageEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestMessageEntity__TypeInfo);
    byte_5938D32 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestMessageEntity___ctor__);
  if ( !list )
    sub_21FFECC(v11, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_QuestMessageEntity__GetEnumerator__);
  v49 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v14);
  for ( i = Enumerator; ; i = v49 )
  {
    klass = i->klass;
    v17 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_10;
      }
      v19 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v19 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            i,
            *(_QWORD *)(v19 + 8));
    if ( (v20 & 1) == 0 )
      break;
    if ( !v49 )
      sub_21FFECC(v20, v21);
    v22 = v49->klass;
    v23 = *(unsigned __int16 *)&v49->klass->_2.rank;
    if ( *(_WORD *)&v49->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestMessageEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_QuestMessageEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_18;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_18:
      v25 = sub_2237E2C(v49, System_Collections_Generic_IEnumerator_QuestMessageEntity__TypeInfo, 0);
    }
    v26 = (QuestMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                    v49,
                                    *(_QWORD *)(v25 + 8));
    v28 = v26;
    if ( !v26 )
      sub_21FFECC(0, v27);
    if ( v26->fields.questId == questId && v26->fields.displayType == messageType )
    {
      v29 = v26->fields.phase;
      if ( v29 == phase || !v29 )
      {
        v30 = QuestMessageEntity__CheckValid(v26, v27);
        if ( v30 )
        {
          if ( v28->fields.frequencyType != 1 )
          {
            if ( !v10
              || (items = v10->fields._items,
                  v41 = Method_System_Collections_Generic_List_QuestMessageEntity__Add__,
                  ++v10->fields._version,
                  !items) )
            {
              sub_21FFECC(v30, v31);
            }
            size = v10->fields._size;
            if ( (unsigned int)size < LODWORD(items->max_length) )
            {
LABEL_33:
              v43 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v43[4] = (Il2CppClass *)v28;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v43 + 4), (int32_t)v28, v32, v33, v34, v35, v36, v37);
              continue;
            }
            goto LABEL_37;
          }
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v31);
          IsQuestClear_47254560 = CondType__IsQuestClear_47254560(questId, -1, 0, 0);
          if ( !IsQuestClear_47254560 )
          {
            if ( !v10
              || (items = v10->fields._items,
                  v41 = Method_System_Collections_Generic_List_QuestMessageEntity__Add__,
                  ++v10->fields._version,
                  !items) )
            {
              sub_21FFECC(IsQuestClear_47254560, v39);
            }
            size = v10->fields._size;
            if ( (unsigned int)size < LODWORD(items->max_length) )
              goto LABEL_33;
LABEL_37:
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)v28,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            continue;
          }
        }
      }
    }
  }
  if ( v49 )
  {
    v44 = v49->klass;
    v45 = *(unsigned __int16 *)&v49->klass->_2.rank;
    if ( *(_WORD *)&v49->klass->_2.rank )
    {
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_45;
      }
      v47 = (__int64)&v44->vtable[*v46];
    }
    else
    {
LABEL_45:
      v47 = sub_2237E2C(v49, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(v49, *(_QWORD *)(v47 + 8));
  }
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

  if ( (byte_5938D2F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__);
    byte_5938D2F = 1;
  }
  PK = (Il2CppObject *)QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__);
}