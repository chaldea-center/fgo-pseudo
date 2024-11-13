void __fastcall QuestMessageMaster___ctor(QuestMessageMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16697 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__, method, v2);
    byte_4B16697 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    76,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string___ctor__);
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

  if ( (byte_4B16695 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__,
      *(_QWORD *)&questId,
      *(_QWORD *)&phase);
    byte_4B16695 = 1;
  }
  PK = (Il2CppObject *)QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&idx);
  return (QuestMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_31B3198 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__GetEntity__);
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
  __int64 v10; // x2
  void *ValidMessageList; // x0
  __int64 v12; // x1

  if ( (byte_4B16698 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_QuestMessageEntity__get_Count__,
      *(_QWORD *)&questId,
      *(_QWORD *)&phase);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestMessageEntity__get_Item__, v9, v10);
    byte_4B16698 = 1;
  }
  ValidMessageList = QuestMessageMaster__GetValidMessageList(this, questId, phase, messageType, method);
  if ( !ValidMessageList )
    goto LABEL_8;
  if ( *((int *)ValidMessageList + 6) >= 1 )
  {
    ValidMessageList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)ValidMessageList,
                         0,
                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestMessageEntity__get_Item__);
    if ( ValidMessageList )
      return (System_String_o *)*((_QWORD *)ValidMessageList + 4);
LABEL_8:
    sub_1BCAA3C(ValidMessageList, v12);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x19
  System_Collections_Generic_List_object__o *v26; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  QuestMessageEntity_o *v39; // x0
  __int64 v40; // x1
  int64_t v41; // x24
  __int64 methodPtr_low; // x9
  int32_t v43; // w8
  _BOOL8 v44; // x0
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  _BOOL8 IsQuestClear_38310172; // x0
  __int64 v53; // x1
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0

  if ( (byte_4B16699 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&questId,
      *(_QWORD *)&phase);
    sub_1BCA7E0(&CondType_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestMessageEntity__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestMessageEntity___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestMessageEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&QuestMessageEntity_TypeInfo, v23, v24);
    byte_4B16699 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestMessageEntity__TypeInfo,
                                                       *(_QWORD *)&questId,
                                                       *(_QWORD *)&phase,
                                                       *(_QWORD *)&messageType);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestMessageEntity___ctor__);
  if ( !list )
    sub_1BCAA3C(v27, v28);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v29);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v32;
        p_offset += 4;
        if ( !v32 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v35 = Enumerator->klass;
    v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v37 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_16;
      }
      v38 = (__int64)&v35->vtable[*v37].method;
    }
    else
    {
LABEL_16:
      v38 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v39 = (QuestMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
                                    Enumerator,
                                    *(_QWORD *)(v38 + 8));
    v41 = (int64_t)v39;
    if ( !v39 )
      goto LABEL_47;
    methodPtr_low = LOBYTE(QuestMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v39->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestMessageEntity_c *)v39->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestMessageEntity_TypeInfo )
    {
      sub_1BCACFC(v39);
LABEL_47:
      sub_1BCAA3C(v39, v40);
    }
    if ( v39->fields.questId == questId && v39->fields.displayType == messageType )
    {
      v43 = v39->fields.phase;
      if ( v43 == phase || !v43 )
      {
        v44 = QuestMessageEntity__CheckValid(v39, (const MethodInfo *)QuestMessageEntity_TypeInfo);
        if ( v44 )
        {
          if ( *(_DWORD *)(v41 + 52) == 1 )
          {
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v45);
            IsQuestClear_38310172 = CondType__IsQuestClear_38310172(questId, -1, 0, 0LL);
            if ( !IsQuestClear_38310172 )
            {
              if ( !v26 )
                sub_1BCAA3C(IsQuestClear_38310172, v53);
              items = v26->fields._items;
              v55 = Method_System_Collections_Generic_List_QuestMessageEntity__Add__;
              ++v26->fields._version;
              if ( !items )
                sub_1BCAA3C(IsQuestClear_38310172, v53);
              size = v26->fields._size;
              if ( (unsigned int)size < items->max_length )
                goto LABEL_33;
LABEL_37:
              System_Collections_Generic_List_object___AddWithResize(
                v26,
                (Il2CppObject *)v41,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
            }
          }
          else
          {
            if ( !v26 )
              sub_1BCAA3C(v44, v45);
            items = v26->fields._items;
            v55 = Method_System_Collections_Generic_List_QuestMessageEntity__Add__;
            ++v26->fields._version;
            if ( !items )
              sub_1BCAA3C(v44, v45);
            size = v26->fields._size;
            if ( (unsigned int)size >= items->max_length )
              goto LABEL_37;
LABEL_33:
            v57 = &items->obj.klass + size;
            v26->fields._size = size + 1;
            v57[4] = (Il2CppClass *)v41;
            sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 4), v41, v46, v47, v48, v49, v50, v51);
          }
        }
      }
    }
  }
  v58 = Enumerator->klass;
  v59 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      --v59;
      v60 += 4;
      if ( !v59 )
        goto LABEL_43;
    }
    v61 = (__int64)&v58->vtable[*v60].method;
  }
  else
  {
LABEL_43:
    v61 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(Enumerator, *(_QWORD *)(v61 + 8));
  return (System_Collections_Generic_List_QuestMessageEntity__o *)v26;
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

  if ( (byte_4B16696 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&questId);
    byte_4B16696 = 1;
  }
  PK = (Il2CppObject *)QuestMessageEntity__CreatePK(questId, phase, idx, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_QuestMessageMaster__QuestMessageEntity__string__TryGetEntity__);
}