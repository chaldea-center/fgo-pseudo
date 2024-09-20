void __fastcall QuestScriptBranchMaterialMaster___ctor(
        QuestScriptBranchMaterialMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5B6F8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestScriptBranchMaterialMaster__QuestScriptBranchMaterialEntity__string___ctor__);
    byte_4A5B6F8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    419,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_QuestScriptBranchMaterialMaster__QuestScriptBranchMaterialEntity__string___ctor__);
}


int32_t __fastcall QuestScriptBranchMaterialMaster__GetBaseQuestId(
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

  if ( (byte_4A5B6FB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__GetEnumerator__);
    byte_4A5B6FB = 1;
  }
  memset(&v14, 0, sizeof(v14));
  *(_QWORD *)playPhase = 0LL;
  QuestScriptBranchMaterialMaster__GetPlayQuest(this, questId, 1, 0, &playPhase[1], playPhase, v3);
  v7 = playPhase[1];
  if ( playPhase[1] == questId )
  {
    ListByQuestId = (System_Collections_Generic_List_object__o *)QuestScriptBranchMaterialMaster__GetListByQuestId(
                                                                   this,
                                                                   questId,
                                                                   v6);
    if ( !ListByQuestId )
      sub_1B8880C(0LL, v9);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ListByQuestId,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__GetEnumerator__);
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__MoveNext__);
      if ( !v10 )
        break;
      if ( !v14.fields._current )
        sub_1B8880C(v10, v11);
      QuestScriptBranchMaterialMaster__GetPlayQuest(
        this,
        questId,
        HIDWORD(v14.fields._current[1].klass),
        (int32_t)v14.fields._current[1].monitor,
        &playPhase[1],
        playPhase,
        v12);
      v7 = playPhase[1];
      if ( playPhase[1] != questId )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v14,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__Dispose__);
        return v7;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__Dispose__);
    return questId;
  }
  return v7;
}


System_Collections_Generic_List_QuestScriptBranchMaterialEntity__o *__fastcall QuestScriptBranchMaterialMaster__GetListByQuestId(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  QuestScriptBranchMaterialEntity_c *v23; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4A5B6FA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestScriptBranchMaterialEntity__TypeInfo);
    sub_1B885B0(&QuestScriptBranchMaterialEntity_TypeInfo);
    byte_4A5B6FA = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestScriptBranchMaterialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v22 = v18;
    if ( !v18 )
      goto LABEL_35;
    v23 = QuestScriptBranchMaterialEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestScriptBranchMaterialEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptBranchMaterialEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptBranchMaterialEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_35:
      sub_1B8880C(v18, v19);
    }
    if ( *(_DWORD *)(v18 + 16) == questId )
    {
      if ( !v5 )
        sub_1B8880C(v18, QuestScriptBranchMaterialEntity_TypeInfo);
      items = v5->fields._items;
      v26 = Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1B8880C(v18, v23);
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v22;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), v22, v20, v21);
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_31;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_31:
    v32 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  return (System_Collections_Generic_List_QuestScriptBranchMaterialEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestScriptBranchMaterialMaster__GetPlayQuest(
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  _DWORD *v24; // x0
  __int64 v25; // x1
  _DWORD *v26; // x25
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  _DWORD *v32; // x8

  if ( (byte_4A5B6FC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&QuestScriptBranchMaterialEntity_TypeInfo);
    byte_4A5B6FC = 1;
  }
  *playQuestId = 0;
  *playPhase = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_40;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                      Enumerator,
                      *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( !v24 )
      goto LABEL_39;
    methodPtr_low = LOBYTE(QuestScriptBranchMaterialEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v24 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptBranchMaterialEntity_c **)(*(_QWORD *)(*(_QWORD *)v24 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptBranchMaterialEntity_TypeInfo )
    {
      sub_1B88ACC(v24);
LABEL_39:
      sub_1B8880C(v24, v25);
    }
    if ( v24[4] == questId && v24[5] == phase && v24[6] == playType )
      goto LABEL_26;
  }
  v26 = 0LL;
LABEL_26:
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_30;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_30:
    v31 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                                             Enumerator,
                                                             *(_QWORD *)(v31 + 8));
  if ( !v26 )
    goto LABEL_36;
  v32 = (_DWORD *)*((_QWORD *)v26 + 4);
  if ( !v32 )
LABEL_40:
    sub_1B8880C(list, *(_QWORD *)&questId);
  if ( v32[6] != 2 )
  {
LABEL_36:
    *playQuestId = questId;
    goto LABEL_37;
  }
  *playQuestId = v32[8];
  phase = v32[9];
LABEL_37:
  *playPhase = phase;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptBranchMaterialMaster__IsBranchQuestMaterialOpen(
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
  __int64 p_method; // x0
  char v12; // w21
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  _DWORD *v17; // x0
  __int64 v18; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0

  if ( (byte_4A5B6F9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&QuestScriptBranchMaterialEntity_TypeInfo);
    byte_4A5B6F9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v12 & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                      Enumerator,
                      *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_32;
    methodPtr_low = LOBYTE(QuestScriptBranchMaterialEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptBranchMaterialEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptBranchMaterialEntity_TypeInfo )
    {
      sub_1B88ACC(v17);
LABEL_32:
      sub_1B8880C(v17, v18);
    }
    if ( v17[4] == questId )
      goto LABEL_24;
  }
  v12 = 0;
LABEL_24:
  v20 = Enumerator->klass;
  v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_28;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_28:
    v23 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  return v12 & 1;
}