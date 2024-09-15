void __fastcall QuestMessageMaster___ctor(QuestMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E3C8 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__, method);
    byte_4A2E3C8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    76,
    (const MethodInfo_30FFA98 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__);
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

  if ( (byte_4A2E3C6 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4A2E3C6 = 1;
  }
  PK = (Il2CppObject *)QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&idx);
  return (QuestMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_30FFAD8 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__);
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

  if ( (byte_4A2E3C9 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Count__, *(_QWORD *)&questId);
    sub_1B761C0(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Item__, v9);
    byte_4A2E3C9 = 1;
  }
  ValidMessageList = QuestMessageMaster__GetValidMessageList(this, questId, phase, messageType, method);
  if ( !ValidMessageList )
    goto LABEL_8;
  if ( *((int *)ValidMessageList + 6) >= 1 )
  {
    ValidMessageList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)ValidMessageList,
                         0,
                         (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_QuestMessageEntity__get_Item__);
    if ( ValidMessageList )
      return (System_String_o *)*((_QWORD *)ValidMessageList + 4);
LABEL_8:
    sub_1B7641C(ValidMessageList, v11);
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
  __int64 v32; // x1
  QuestMessageEntity_o *v33; // x24
  __int64 methodPtr_low; // x9
  int32_t v35; // w8
  _BOOL8 v36; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  _BOOL8 IsQuestClear_37418488; // x0
  __int64 v41; // x1
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0

  if ( (byte_4A2E3CA & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1B761C0(&CondType_TypeInfo, v9);
    sub_1B761C0(&System_IDisposable_TypeInfo, v10);
    sub_1B761C0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B761C0(&Method_System_Collections_Generic_List_QuestMessageEntity__Add__, v13);
    sub_1B761C0(&Method_System_Collections_Generic_List_QuestMessageEntity___ctor__, v14);
    sub_1B761C0(&System_Collections_Generic_List_QuestMessageEntity__TypeInfo, v15);
    sub_1B761C0(&QuestMessageEntity_TypeInfo, v16);
    byte_4A2E3CA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v18 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_QuestMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_QuestMessageEntity___ctor__);
  if ( !list )
    sub_1B7641C(v19, v20);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_309D0A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B7641C(0LL, v21);
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
      p_method = sub_1BC81A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v30 = sub_1BC81A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v31 = (QuestMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                    Enumerator,
                                    *(_QWORD *)(v30 + 8));
    v33 = v31;
    if ( !v31 )
      goto LABEL_47;
    methodPtr_low = LOBYTE(QuestMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v31->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestMessageEntity_c *)v31->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestMessageEntity_TypeInfo )
    {
      sub_1B766DC(v31);
LABEL_47:
      sub_1B7641C(v31, v32);
    }
    if ( v31->fields.questId == questId && v31->fields.displayType == messageType )
    {
      v35 = v31->fields.phase;
      if ( v35 == phase || !v35 )
      {
        v36 = QuestMessageEntity__CheckValid(v31, (const MethodInfo *)QuestMessageEntity_TypeInfo);
        if ( v36 )
        {
          if ( v33->fields.frequencyType == 1 )
          {
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            IsQuestClear_37418488 = CondType__IsQuestClear_37418488(questId, -1, 0, 0LL);
            if ( !IsQuestClear_37418488 )
            {
              if ( !v18 )
                sub_1B7641C(IsQuestClear_37418488, v41);
              items = v18->fields._items;
              v43 = Method_System_Collections_Generic_List_QuestMessageEntity__Add__;
              ++v18->fields._version;
              if ( !items )
                sub_1B7641C(IsQuestClear_37418488, v41);
              size = v18->fields._size;
              if ( (unsigned int)size < items->max_length )
                goto LABEL_33;
LABEL_37:
              System_Collections_Generic_List_object___AddWithResize(
                v18,
                (Il2CppObject *)v33,
                *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
            }
          }
          else
          {
            if ( !v18 )
              sub_1B7641C(v36, v37);
            items = v18->fields._items;
            v43 = Method_System_Collections_Generic_List_QuestMessageEntity__Add__;
            ++v18->fields._version;
            if ( !items )
              sub_1B7641C(v36, v37);
            size = v18->fields._size;
            if ( (unsigned int)size >= items->max_length )
              goto LABEL_37;
LABEL_33:
            v45 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v45[4] = (Il2CppClass *)v33;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v33, v38, v39);
          }
        }
      }
    }
  }
  v46 = Enumerator->klass;
  v47 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_43;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_43:
    v49 = sub_1BC81A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
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

  if ( (byte_4A2E3C7 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__, entity);
    byte_4A2E3C7 = 1;
  }
  PK = (Il2CppObject *)QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30FFB28 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__);
}