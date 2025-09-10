void QuestScriptBranchMaterialMaster___ctor(QuestScriptBranchMaterialMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27A37 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_QuestScriptBranchMaterialMaster__QuestScriptBranchMaterialEntity__string___ctor__);
    byte_4C27A37 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    425,
    (const MethodInfo_338A52C *)Method_DataMasterBase_QuestScriptBranchMaterialMaster__QuestScriptBranchMaterialEntity__string___ctor__);
}


int32_t QuestScriptBranchMaterialMaster__GetBaseQuestId(
        QuestScriptBranchMaterialMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  const MethodInfo *v6; // x2
  int32_t v7; // w22
  System_Collections_Generic_List_object__o *ListByQuestId; // x0
  __int64 v9; // x1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x6
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF
  int32_t playPhase[2]; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4C27A3A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__GetEnumerator__);
    byte_4C27A3A = 1;
  }
  memset(&v14, 0, sizeof(v14));
  *(_QWORD *)playPhase = 0;
  QuestScriptBranchMaterialMaster__GetPlayQuest(this, questId, 1, 0, &playPhase[1], playPhase, v3);
  v7 = playPhase[1];
  if ( playPhase[1] == questId )
  {
    ListByQuestId = (System_Collections_Generic_List_object__o *)QuestScriptBranchMaterialMaster__GetListByQuestId(
                                                                   this,
                                                                   questId,
                                                                   v6);
    if ( !ListByQuestId )
      sub_1C2D6EC(0, v9);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ListByQuestId,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__GetEnumerator__);
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__MoveNext__);
      if ( !v10 )
        break;
      if ( !v14.fields._current )
        sub_1C2D6EC(v10, v11);
      QuestScriptBranchMaterialMaster__GetPlayQuest(
        this,
        questId,
        *(_DWORD *)((char *)&v14.fields._current->klass + (unsigned __int64)&dword_14),
        *(_DWORD *)((char *)&v14.fields._current->klass + (unsigned __int64)&dword_14 + 4),
        &playPhase[1],
        playPhase,
        v12);
      v7 = playPhase[1];
      if ( playPhase[1] != questId )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v14,
          (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__Dispose__);
        return v7;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__Dispose__);
    return questId;
  }
  return v7;
}


System_Collections_Generic_List_QuestScriptBranchMaterialEntity__o *QuestScriptBranchMaterialMaster__GetListByQuestId(
        QuestScriptBranchMaterialMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  struct System_Object_array *items; // x9
  _QWORD *v24; // x10
  __int64 size; // x11
  Il2CppClass **v26; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4C27A39 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_QuestScriptBranchMaterialEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_QuestScriptBranchMaterialEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_QuestScriptBranchMaterialEntity__TypeInfo);
    byte_4C27A39 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_QuestScriptBranchMaterialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_QuestScriptBranchMaterialEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptBranchMaterialEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_QuestScriptBranchMaterialEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptBranchMaterialEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v22 = v18;
    if ( !v18 )
      sub_1C2D6EC(0, v19);
    if ( *(_DWORD *)(v18 + 16) == questId )
    {
      if ( !v5 )
        sub_1C2D6EC(v18, v19);
      items = v5->fields._items;
      v24 = Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C2D6EC(v18, v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v22;
        sub_1C2D434((CGThumbnailListItem_o *)(v26 + 4), v22, v20, v21);
      }
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_29;
    }
    v30 = (__int64)&v27->vtable[*v29];
  }
  else
  {
LABEL_29:
    v30 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return (System_Collections_Generic_List_QuestScriptBranchMaterialEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void QuestScriptBranchMaterialMaster__GetPlayQuest(
        QuestScriptBranchMaterialMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t playType,
        int32_t *playQuestId,
        int32_t *playPhase,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  _DWORD *v24; // x0
  __int64 v25; // x1
  _DWORD *v26; // x25
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  _DWORD *v31; // x8

  if ( (byte_4C27A3B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_QuestScriptBranchMaterialEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_QuestScriptBranchMaterialEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C27A3B = 1;
  }
  *playQuestId = 0;
  *playPhase = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_QuestScriptBranchMaterialEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      v19 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v19 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8))
        & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptBranchMaterialEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_QuestScriptBranchMaterialEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_16:
      v23 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptBranchMaterialEntity__TypeInfo, 0);
    }
    v24 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                      Enumerator,
                      *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( !v24 )
      sub_1C2D6EC(0, v25);
    if ( v24[4] == questId && v24[5] == phase && v24[6] == playType )
      goto LABEL_24;
  }
  v26 = 0;
LABEL_24:
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_28;
    }
    v30 = (__int64)&v27->vtable[*v29];
  }
  else
  {
LABEL_28:
    v30 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                                             Enumerator,
                                                             *(_QWORD *)(v30 + 8));
  if ( !v26 )
    goto LABEL_34;
  v31 = (_DWORD *)*((_QWORD *)v26 + 4);
  if ( !v31 )
LABEL_37:
    sub_1C2D6EC(list, *(_QWORD *)&questId);
  if ( v31[6] != 2 )
  {
LABEL_34:
    *playQuestId = questId;
    goto LABEL_35;
  }
  *playQuestId = v31[8];
  phase = v31[9];
LABEL_35:
  *playPhase = phase;
}


// local variable allocation has failed, the output may be wrong!
bool QuestScriptBranchMaterialMaster__IsBranchQuestMaterialOpen(
        QuestScriptBranchMaterialMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  char v12; // w21
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0

  if ( (byte_4C27A38 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_QuestScriptBranchMaterialEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_QuestScriptBranchMaterialEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C27A38 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_QuestScriptBranchMaterialEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v6);
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
      v11 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8));
    if ( (v12 & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptBranchMaterialEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_QuestScriptBranchMaterialEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_16:
      v16 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptBranchMaterialEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    if ( !v17 )
      sub_1C2D6EC(0, v18);
    if ( *(_DWORD *)(v17 + 16) == questId )
      goto LABEL_22;
  }
  v12 = 0;
LABEL_22:
  v19 = Enumerator->klass;
  v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_26;
    }
    v22 = (__int64)&v19->vtable[*v21];
  }
  else
  {
LABEL_26:
    v22 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
  return v12 & 1;
}