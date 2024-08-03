void __fastcall QuestMessageMaster___ctor(QuestMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC889 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__, method);
    byte_49FC889 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    76,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__);
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

  if ( (byte_49FC887 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_49FC887 = 1;
  }
  PK = (Il2CppObject *)QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&idx);
  return (QuestMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_30D41FC *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__);
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

  if ( (byte_49FC88A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Count__, *(_QWORD *)&questId);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Item__, v9);
    byte_49FC88A = 1;
  }
  ValidMessageList = QuestMessageMaster__GetValidMessageList(this, questId, phase, messageType, method);
  if ( !ValidMessageList )
    goto LABEL_8;
  if ( *((int *)ValidMessageList + 6) >= 1 )
  {
    ValidMessageList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)ValidMessageList,
                         0,
                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestMessageEntity__get_Item__);
    if ( ValidMessageList )
      return (System_String_o *)*((_QWORD *)ValidMessageList + 4);
LABEL_8:
    sub_1B64324(ValidMessageList);
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  QuestMessageEntity_o *v29; // x0
  QuestMessageEntity_o *v30; // x24
  __int64 methodPtr_low; // x9
  int32_t v32; // w8
  _BOOL8 v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  _BOOL8 IsQuestClear_37285996; // x0
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0

  if ( (byte_49FC88B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1B640C8(&CondType_TypeInfo, v9);
    sub_1B640C8(&System_IDisposable_TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestMessageEntity__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestMessageEntity___ctor__, v14);
    sub_1B640C8(&System_Collections_Generic_List_QuestMessageEntity__TypeInfo, v15);
    sub_1B640C8(&QuestMessageEntity_TypeInfo, v16);
    byte_49FC88B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestMessageEntity__TypeInfo,
                                                       *(_QWORD *)&questId,
                                                       *(_QWORD *)&phase);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestMessageEntity___ctor__);
  if ( !list )
    sub_1B64324(v19);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_16;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_16:
      v28 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v29 = (QuestMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                                    Enumerator,
                                    *(_QWORD *)(v28 + 8));
    v30 = v29;
    if ( !v29 )
      goto LABEL_47;
    methodPtr_low = LOBYTE(QuestMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v29->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestMessageEntity_c *)v29->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestMessageEntity_TypeInfo )
    {
      sub_1B645E4(v29);
LABEL_47:
      sub_1B64324(v29);
    }
    if ( v29->fields.questId == questId && v29->fields.displayType == messageType )
    {
      v32 = v29->fields.phase;
      if ( v32 == phase || !v32 )
      {
        v33 = QuestMessageEntity__CheckValid(v29, (const MethodInfo *)QuestMessageEntity_TypeInfo);
        if ( v33 )
        {
          if ( v30->fields.frequencyType == 1 )
          {
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            IsQuestClear_37285996 = CondType__IsQuestClear_37285996(questId, -1, 0, 0LL);
            if ( !IsQuestClear_37285996 )
            {
              if ( !v18 )
                sub_1B64324(IsQuestClear_37285996);
              items = v18->fields._items;
              v38 = Method_System_Collections_Generic_List_QuestMessageEntity__Add__;
              ++v18->fields._version;
              if ( !items )
                sub_1B64324(IsQuestClear_37285996);
              size = v18->fields._size;
              if ( (unsigned int)size < items->max_length )
                goto LABEL_33;
LABEL_37:
              System_Collections_Generic_List_object___AddWithResize(
                v18,
                (Il2CppObject *)v30,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
          }
          else
          {
            if ( !v18 )
              sub_1B64324(v33);
            items = v18->fields._items;
            v38 = Method_System_Collections_Generic_List_QuestMessageEntity__Add__;
            ++v18->fields._version;
            if ( !items )
              sub_1B64324(v33);
            size = v18->fields._size;
            if ( (unsigned int)size >= items->max_length )
              goto LABEL_37;
LABEL_33:
            v40 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v40[4] = (Il2CppClass *)v30;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v30, v34, v35);
          }
        }
      }
    }
  }
  v41 = Enumerator->klass;
  v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_43;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_43:
    v44 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(Enumerator, *(_QWORD *)(v44 + 8));
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

  if ( (byte_49FC888 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__, entity);
    byte_49FC888 = 1;
  }
  PK = (Il2CppObject *)QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__);
}