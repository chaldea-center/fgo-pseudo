void __fastcall QuestScriptBranchMaterialMaster___ctor(
        QuestScriptBranchMaterialMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A2E4D8 & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_QuestScriptBranchMaterialMaster__QuestScriptBranchMaterialEntity__string___ctor__,
      method);
    byte_4A2E4D8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    419,
    (const MethodInfo_30FFA98 *)Method_DataMasterBase_QuestScriptBranchMaterialMaster__QuestScriptBranchMaterialEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestScriptBranchMaterialMaster__GetBaseQuestId(
        QuestScriptBranchMaterialMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v10; // w22
  System_Collections_Generic_List_object__o *ListByQuestId; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x6
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF
  int32_t playPhase[2]; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4A2E4DB & 1) == 0 )
  {
    sub_1B761C0(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__Dispose__,
      *(_QWORD *)&questId);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__MoveNext__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__get_Current__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__GetEnumerator__, v8);
    byte_4A2E4DB = 1;
  }
  memset(&v17, 0, sizeof(v17));
  *(_QWORD *)playPhase = 0LL;
  QuestScriptBranchMaterialMaster__GetPlayQuest(this, questId, 1, 0, &playPhase[1], playPhase, v3);
  v10 = playPhase[1];
  if ( playPhase[1] == questId )
  {
    ListByQuestId = (System_Collections_Generic_List_object__o *)QuestScriptBranchMaterialMaster__GetListByQuestId(
                                                                   this,
                                                                   questId,
                                                                   v9);
    if ( !ListByQuestId )
      sub_1B7641C(0LL, v12);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      ListByQuestId,
      (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__GetEnumerator__);
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__MoveNext__);
      if ( !v13 )
        break;
      if ( !v17.fields._current )
        sub_1B7641C(v13, v14);
      QuestScriptBranchMaterialMaster__GetPlayQuest(
        this,
        questId,
        HIDWORD(v17.fields._current[1].klass),
        (int32_t)v17.fields._current[1].monitor,
        &playPhase[1],
        playPhase,
        v15);
      v10 = playPhase[1];
      if ( playPhase[1] != questId )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v17,
          (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__Dispose__);
        return v10;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptBranchMaterialEntity__Dispose__);
    return questId;
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptBranchMaterialEntity__o *__fastcall QuestScriptBranchMaterialMaster__GetListByQuestId(
        QuestScriptBranchMaterialMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x8
  QuestScriptBranchMaterialEntity_c *v30; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v33; // x10
  __int64 size; // x11
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4A2E4DA & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1B761C0(&System_IDisposable_TypeInfo, v5);
    sub_1B761C0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__Add__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity___ctor__, v9);
    sub_1B761C0(&System_Collections_Generic_List_QuestScriptBranchMaterialEntity__TypeInfo, v10);
    sub_1B761C0(&QuestScriptBranchMaterialEntity_TypeInfo, v11);
    byte_4A2E4DA = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_QuestScriptBranchMaterialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B7641C(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_309D0A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B7641C(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BC81A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1BC81A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v29 = v25;
    if ( !v25 )
      goto LABEL_35;
    v30 = QuestScriptBranchMaterialEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestScriptBranchMaterialEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptBranchMaterialEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptBranchMaterialEntity_TypeInfo )
    {
      sub_1B766DC(v25);
LABEL_35:
      sub_1B7641C(v25, v26);
    }
    if ( *(_DWORD *)(v25 + 16) == questId )
    {
      if ( !v12 )
        sub_1B7641C(v25, QuestScriptBranchMaterialEntity_TypeInfo);
      items = v12->fields._items;
      v33 = Method_System_Collections_Generic_List_QuestScriptBranchMaterialEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B7641C(v25, v30);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v25,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v29;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v35 + 4), v29, v27, v28);
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_31;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_31:
    v39 = sub_1BC81A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return (System_Collections_Generic_List_QuestScriptBranchMaterialEntity__o *)v12;
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  _DWORD *v28; // x0
  __int64 v29; // x1
  _DWORD *v30; // x25
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  _DWORD *v36; // x8

  if ( (byte_4A2E4DC & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1B761C0(&System_IDisposable_TypeInfo, v13);
    sub_1B761C0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1B761C0(&QuestScriptBranchMaterialEntity_TypeInfo, v16);
    byte_4A2E4DC = 1;
  }
  *playQuestId = 0;
  *playPhase = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_40;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_309D0A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B7641C(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BC81A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_16;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_16:
      v27 = sub_1BC81A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v28 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                      Enumerator,
                      *(_QWORD *)(v27 + 8));
    v30 = v28;
    if ( !v28 )
      goto LABEL_39;
    methodPtr_low = LOBYTE(QuestScriptBranchMaterialEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v28 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptBranchMaterialEntity_c **)(*(_QWORD *)(*(_QWORD *)v28 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptBranchMaterialEntity_TypeInfo )
    {
      sub_1B766DC(v28);
LABEL_39:
      sub_1B7641C(v28, v29);
    }
    if ( v28[4] == questId && v28[5] == phase && v28[6] == playType )
      goto LABEL_26;
  }
  v30 = 0LL;
LABEL_26:
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_30;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_30:
    v35 = sub_1BC81A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                                             Enumerator,
                                                             *(_QWORD *)(v35 + 8));
  if ( !v30 )
    goto LABEL_36;
  v36 = (_DWORD *)*((_QWORD *)v30 + 4);
  if ( !v36 )
LABEL_40:
    sub_1B7641C(list, *(_QWORD *)&questId);
  if ( v36[6] != 2 )
  {
LABEL_36:
    *playQuestId = questId;
    goto LABEL_37;
  }
  *playQuestId = v36[8];
  phase = v36[9];
LABEL_37:
  *playPhase = phase;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptBranchMaterialMaster__IsBranchQuestMaterialOpen(
        QuestScriptBranchMaterialMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v16; // w21
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  _DWORD *v21; // x0
  __int64 v22; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4A2E4D9 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1B761C0(&System_IDisposable_TypeInfo, v5);
    sub_1B761C0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B761C0(&QuestScriptBranchMaterialEntity_TypeInfo, v8);
    byte_4A2E4D9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B7641C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_309D0A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B7641C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BC81A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v16 & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_1BC81A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                      Enumerator,
                      *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_32;
    methodPtr_low = LOBYTE(QuestScriptBranchMaterialEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptBranchMaterialEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptBranchMaterialEntity_TypeInfo )
    {
      sub_1B766DC(v21);
LABEL_32:
      sub_1B7641C(v21, v22);
    }
    if ( v21[4] == questId )
      goto LABEL_24;
  }
  v16 = 0;
LABEL_24:
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_28;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_28:
    v27 = sub_1BC81A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v16 & 1;
}