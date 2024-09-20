void __fastcall QuestMessageMaster___ctor(QuestMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B5E8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__);
    byte_4A5B5E8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    76,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__);
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

  if ( (byte_4A5B5E6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__);
    byte_4A5B5E6 = 1;
  }
  PK = (Il2CppObject *)QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&idx);
  return (QuestMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_311DC8C *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__);
}


System_String_o *__fastcall QuestMessageMaster__GetValidMessage(
        QuestMessageMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t messageType,
        const MethodInfo *method)
{
  void *ValidMessageList; // x0
  __int64 v10; // x1

  if ( (byte_4A5B5E9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Item__);
    byte_4A5B5E9 = 1;
  }
  ValidMessageList = QuestMessageMaster__GetValidMessageList(this, questId, phase, messageType, method);
  if ( !ValidMessageList )
    goto LABEL_8;
  if ( *((int *)ValidMessageList + 6) >= 1 )
  {
    ValidMessageList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)ValidMessageList,
                         0,
                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestMessageEntity__get_Item__);
    if ( ValidMessageList )
      return (System_String_o *)*((_QWORD *)ValidMessageList + 4);
LABEL_8:
    sub_1B8880C(ValidMessageList, v10);
  }
  return 0LL;
}


System_Collections_Generic_List_QuestMessageEntity__o *__fastcall QuestMessageMaster__GetValidMessageList(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  QuestMessageEntity_o *v23; // x0
  __int64 v24; // x1
  QuestMessageEntity_o *v25; // x24
  __int64 methodPtr_low; // x9
  int32_t v27; // w8
  _BOOL8 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  _BOOL8 IsQuestClear_37596684; // x0
  __int64 v33; // x1
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0

  if ( (byte_4A5B5EA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestMessageEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestMessageEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestMessageEntity__TypeInfo);
    sub_1B885B0(&QuestMessageEntity_TypeInfo);
    byte_4A5B5EA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestMessageEntity___ctor__);
  if ( !list )
    sub_1B8880C(v11, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
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
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (QuestMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                    Enumerator,
                                    *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( !v23 )
      goto LABEL_47;
    methodPtr_low = LOBYTE(QuestMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v23->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestMessageEntity_c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestMessageEntity_TypeInfo )
    {
      sub_1B88ACC(v23);
LABEL_47:
      sub_1B8880C(v23, v24);
    }
    if ( v23->fields.questId == questId && v23->fields.displayType == messageType )
    {
      v27 = v23->fields.phase;
      if ( v27 == phase || !v27 )
      {
        v28 = QuestMessageEntity__CheckValid(v23, (const MethodInfo *)QuestMessageEntity_TypeInfo);
        if ( v28 )
        {
          if ( v25->fields.frequencyType == 1 )
          {
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            IsQuestClear_37596684 = CondType__IsQuestClear_37596684(questId, -1, 0, 0LL);
            if ( !IsQuestClear_37596684 )
            {
              if ( !v10 )
                sub_1B8880C(IsQuestClear_37596684, v33);
              items = v10->fields._items;
              v35 = Method_System_Collections_Generic_List_QuestMessageEntity__Add__;
              ++v10->fields._version;
              if ( !items )
                sub_1B8880C(IsQuestClear_37596684, v33);
              size = v10->fields._size;
              if ( (unsigned int)size < items->max_length )
                goto LABEL_33;
LABEL_37:
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)v25,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
          }
          else
          {
            if ( !v10 )
              sub_1B8880C(v28, v29);
            items = v10->fields._items;
            v35 = Method_System_Collections_Generic_List_QuestMessageEntity__Add__;
            ++v10->fields._version;
            if ( !items )
              sub_1B8880C(v28, v29);
            size = v10->fields._size;
            if ( (unsigned int)size >= items->max_length )
              goto LABEL_37;
LABEL_33:
            v37 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v25;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v25, v30, v31);
          }
        }
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
        goto LABEL_43;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_43:
    v41 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  return (System_Collections_Generic_List_QuestMessageEntity__o *)v10;
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

  if ( (byte_4A5B5E7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__);
    byte_4A5B5E7 = 1;
  }
  PK = (Il2CppObject *)QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__);
}