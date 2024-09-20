void __fastcall QuestScriptMaterialNextMaster___ctor(QuestScriptMaterialNextMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B718 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestScriptMaterialNextMaster__QuestScriptMaterialNextEntity__string___ctor__);
    byte_4A5B718 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    408,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_QuestScriptMaterialNextMaster__QuestScriptMaterialNextEntity__string___ctor__);
}


UserQuestEntity_o *__fastcall QuestScriptMaterialNextMaster__GetCheckTargetEntity(
        QuestScriptMaterialNextMaster_o *this,
        int32_t condQuestId,
        UserQuestEntity_o *userLastEntity,
        UserQuestEntity_o *materialLastEntity,
        const MethodInfo *method)
{
  UserQuestEntity_o *v5; // x8

  if ( userLastEntity && materialLastEntity )
  {
    if ( userLastEntity->fields.updatedAt >= materialLastEntity->fields.updatedAt )
      v5 = userLastEntity;
    else
      v5 = materialLastEntity;
  }
  else
  {
    if ( materialLastEntity )
      v5 = materialLastEntity;
    else
      v5 = userLastEntity;
    if ( !v5 )
      sub_1B8880C(this, condQuestId);
  }
  if ( v5->fields.questId == condQuestId )
    return v5;
  else
    return 0LL;
}


System_Collections_Generic_List_UserQuestEntity__o *__fastcall QuestScriptMaterialNextMaster__GetGroupUserQuestEntities(
        QuestScriptMaterialNextMaster_o *this,
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *nextEntities,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *klass; // x19
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *v14; // x22
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x8
  UserQuestEntity_c *v24; // x1
  __int64 methodPtr_low; // x9
  ServantStatusBattleListViewItem_o *v26; // x23
  System_Predicate_object__o *v27; // x24
  __int64 v28; // x0
  __int64 v29; // x1
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x1
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0

  if ( (byte_4A5B71D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_1B885B0(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo);
    sub_1B885B0(&Method_QuestScriptMaterialNextMaster___c__DisplayClass6_0__GetGroupUserQuestEntities_b__0__);
    sub_1B885B0(&QuestScriptMaterialNextMaster___c__DisplayClass6_0_TypeInfo);
    sub_1B885B0(&UserQuestEntity_TypeInfo);
    byte_4A5B71D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !Master_object
    || (klass = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].klass,
        v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserQuestEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v7,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__),
        !klass) )
  {
    sub_1B8880C(Master_object, v5);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 klass,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_12;
      }
      p_method = (__int64)&v10->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = (Il2CppObject *)sub_1B887FC(QuestScriptMaterialNextMaster___c__DisplayClass6_0_TypeInfo);
    System_Object___ctor(v14, 0LL);
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_19;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_19:
      v18 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    if ( !v14 )
      goto LABEL_45;
    v23 = v19;
    if ( v19 )
    {
      v24 = UserQuestEntity_TypeInfo;
      methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 304LL) < (unsigned int)methodPtr_low
        || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * (methodPtr_low - 1)) != UserQuestEntity_TypeInfo )
      {
        goto LABEL_44;
      }
      v14[1].klass = (Il2CppClass *)v19;
      v26 = (ServantStatusBattleListViewItem_o *)&v14[1];
      if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 304LL) < (unsigned int)methodPtr_low
        || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * (methodPtr_low - 1)) != v24 )
      {
        sub_1B88ACC(v19);
LABEL_44:
        sub_1B88ACC(v23);
LABEL_45:
        sub_1B8880C(v19, v20);
      }
    }
    else
    {
      v14[1].klass = 0LL;
      v26 = (ServantStatusBattleListViewItem_o *)&v14[1];
    }
    sub_1B88554(v26, v19, v21, v22);
    v27 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_QuestScriptMaterialNextEntity__TypeInfo);
    System_Predicate_object____ctor(
      v27,
      v14,
      Method_QuestScriptMaterialNextMaster___c__DisplayClass6_0__GetGroupUserQuestEntities_b__0__,
      0LL);
    if ( !nextEntities )
      sub_1B8880C(v28, v29);
    v30 = System_Collections_Generic_List_object___Exists(
            (System_Collections_Generic_List_object__o *)nextEntities,
            (System_Predicate_T__o *)v27,
            (const MethodInfo_34FDE60 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
    if ( v30 )
    {
      if ( !v7 )
        sub_1B8880C(v30, v31);
      v34 = (Il2CppObject *)v26->klass;
      items = v7->fields._items;
      v36 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1B8880C(v30, v34);
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          v34,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v34;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v34, v32, v33);
      }
    }
  }
  v39 = Enumerator->klass;
  v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_40;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_40:
    v42 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(Enumerator, *(_QWORD *)(v42 + 8));
  return (System_Collections_Generic_List_UserQuestEntity__o *)v7;
}


System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *__fastcall QuestScriptMaterialNextMaster__GetIncludedGroups(
        QuestScriptMaterialNextMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *NextEntitiesGroupByGroupId; // x20
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
  _DWORD *v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  __int64 methodPtr_low; // x9
  int32_t v22; // w1
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4A5B71C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
    sub_1B885B0(&QuestScriptMaterialNextEntity_TypeInfo);
    byte_4A5B71C = 1;
  }
  NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    NextEntitiesGroupByGroupId,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
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
    v18 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                      Enumerator,
                      *(_QWORD *)(v17 + 8));
    if ( !v18 )
      goto LABEL_32;
    methodPtr_low = LOBYTE(QuestScriptMaterialNextEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptMaterialNextEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptMaterialNextEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_32:
      sub_1B8880C(v18, v19);
    }
    if ( v18[4] == questId )
    {
      v22 = v18[7];
      if ( v22 )
      {
        NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
                                                                                    this,
                                                                                    v22,
                                                                                    v20);
        break;
      }
    }
  }
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_28;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_28:
    v26 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)NextEntitiesGroupByGroupId;
}


System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *__fastcall QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
        QuestScriptMaterialNextMaster_o *this,
        int32_t groupId,
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
  QuestScriptMaterialNextEntity_c *v23; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4A5B71B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
    sub_1B885B0(&QuestScriptMaterialNextEntity_TypeInfo);
    byte_4A5B71B = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
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
    v23 = QuestScriptMaterialNextEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestScriptMaterialNextEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptMaterialNextEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptMaterialNextEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_35:
      sub_1B8880C(v18, v19);
    }
    if ( *(_DWORD *)(v18 + 28) == groupId )
    {
      if ( !v5 )
        sub_1B8880C(v18, QuestScriptMaterialNextEntity_TypeInfo);
      items = v5->fields._items;
      v26 = Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__;
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
  return (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *__fastcall QuestScriptMaterialNextMaster__GetNextQuestEntities(
        QuestScriptMaterialNextMaster_o *this,
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
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  Il2CppObject *v19; // x22
  __int64 methodPtr_low; // x9
  int klass_high; // w8
  System_Collections_Generic_List_object__o *NextEntitiesGroupByGroupId; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4A5B71A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
    sub_1B885B0(&QuestScriptMaterialNextEntity_TypeInfo);
    byte_4A5B71A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v6);
  do
  {
    do
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
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
      {
        NextEntitiesGroupByGroupId = 0LL;
        goto LABEL_31;
      }
      v12 = Enumerator->klass;
      v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v14 = &v12->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v13;
          v14 += 4;
          if ( !v13 )
            goto LABEL_16;
        }
        v15 = (__int64)&v12->vtable[*v14].method;
      }
      else
      {
LABEL_16:
        v15 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v16 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                              Enumerator,
                              *(_QWORD *)(v15 + 8));
      v19 = v16;
      if ( !v16 )
        goto LABEL_39;
      methodPtr_low = LOBYTE(QuestScriptMaterialNextEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v16->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (QuestScriptMaterialNextEntity_c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestScriptMaterialNextEntity_TypeInfo )
      {
        sub_1B88ACC(v16);
LABEL_39:
        sub_1B8880C(v16, v17);
      }
    }
    while ( LODWORD(v16[1].klass) != questId );
    klass_high = HIDWORD(v16[1].klass);
    if ( klass_high == 2 )
    {
      NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
                                                                                  this,
                                                                                  (int32_t)v16[1].monitor,
                                                                                  v18);
      goto LABEL_31;
    }
  }
  while ( klass_high != 1 );
  NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    NextEntitiesGroupByGroupId,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  if ( !NextEntitiesGroupByGroupId )
    sub_1B8880C(v23, v24);
  items = NextEntitiesGroupByGroupId->fields._items;
  v28 = Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__;
  ++NextEntitiesGroupByGroupId->fields._version;
  if ( !items )
    sub_1B8880C(v23, v24);
  size = NextEntitiesGroupByGroupId->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      NextEntitiesGroupByGroupId,
      v19,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    NextEntitiesGroupByGroupId->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v19, v25, v26);
  }
LABEL_31:
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_35;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_35:
    v34 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)NextEntitiesGroupByGroupId;
}


System_Collections_Generic_List_UserQuestEntity__o *__fastcall QuestScriptMaterialNextMaster__GetSortedGroupUserQuestEntities(
        QuestScriptMaterialNextMaster_o *this,
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_UserQuestEntity__o *GroupUserQuestEntities; // x0
  __int64 v5; // x1
  QuestScriptMaterialNextMaster___c_c *v6; // x8
  System_Collections_Generic_List_object__o *v7; // x19
  System_Comparison_T__o *_9__7_0; // x20
  Il2CppObject *v9; // x21
  struct QuestScriptMaterialNextMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5B71E & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_UserQuestEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
    sub_1B885B0(&Method_QuestScriptMaterialNextMaster___c__GetSortedGroupUserQuestEntities_b__7_0__);
    this = (QuestScriptMaterialNextMaster_o *)sub_1B885B0(&QuestScriptMaterialNextMaster___c_TypeInfo);
    byte_4A5B71E = 1;
  }
  GroupUserQuestEntities = QuestScriptMaterialNextMaster__GetGroupUserQuestEntities(this, groupEntities, method);
  v6 = QuestScriptMaterialNextMaster___c_TypeInfo;
  v7 = (System_Collections_Generic_List_object__o *)GroupUserQuestEntities;
  if ( !QuestScriptMaterialNextMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaterialNextMaster___c_TypeInfo);
    v6 = QuestScriptMaterialNextMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Comparison_T__o *)v6->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = QuestScriptMaterialNextMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__7_0,
      v9,
      Method_QuestScriptMaterialNextMaster___c__GetSortedGroupUserQuestEntities_b__7_0__,
      0LL);
    static_fields = QuestScriptMaterialNextMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_UserQuestEntity__o *)_9__7_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v11, v12);
  }
  if ( !v7 )
    sub_1B8880C(GroupUserQuestEntities, v5);
  System_Collections_Generic_List_object___Sort_55571192(
    v7,
    _9__7_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  return (System_Collections_Generic_List_UserQuestEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptMaterialNextMaster__IsMaterialGroupQuest(
        QuestScriptMaterialNextMaster_o *this,
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

  if ( (byte_4A5B719 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&QuestScriptMaterialNextEntity_TypeInfo);
    byte_4A5B719 = 1;
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
      goto LABEL_33;
    methodPtr_low = LOBYTE(QuestScriptMaterialNextEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptMaterialNextEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptMaterialNextEntity_TypeInfo )
    {
      sub_1B88ACC(v17);
LABEL_33:
      sub_1B8880C(v17, v18);
    }
    if ( v17[4] == questId && v17[7] )
      goto LABEL_25;
  }
  v12 = 0;
LABEL_25:
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
        goto LABEL_29;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_29:
    v23 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  return v12 & 1;
}


void __fastcall QuestScriptMaterialNextMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B71F & 1) == 0 )
  {
    sub_1B885B0(&QuestScriptMaterialNextMaster___c_TypeInfo);
    byte_4A5B71F = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(QuestScriptMaterialNextMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestScriptMaterialNextMaster___c_TypeInfo->static_fields->__9 = (struct QuestScriptMaterialNextMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)QuestScriptMaterialNextMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall QuestScriptMaterialNextMaster___c___ctor(
        QuestScriptMaterialNextMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestScriptMaterialNextMaster___c___GetSortedGroupUserQuestEntities_b__7_0(
        QuestScriptMaterialNextMaster___c_o *this,
        UserQuestEntity_o *x,
        UserQuestEntity_o *y,
        const MethodInfo *method)
{
  int64_t v4; // x8

  if ( !y || !x )
    sub_1B8880C(this, x);
  v4 = y->fields.updatedAt - x->fields.updatedAt;
  if ( v4 < 0 )
    return -1;
  if ( v4 )
    return 1;
  return y->fields.questId - x->fields.questId;
}


void __fastcall QuestScriptMaterialNextMaster___c__DisplayClass6_0___ctor(
        QuestScriptMaterialNextMaster___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestScriptMaterialNextMaster___c__DisplayClass6_0___GetGroupUserQuestEntities_b__0(
        QuestScriptMaterialNextMaster___c__DisplayClass6_0_o *this,
        QuestScriptMaterialNextEntity_o *x,
        const MethodInfo *method)
{
  struct UserQuestEntity_o *entity; // x8

  if ( !x || (entity = this->fields.entity) == 0LL )
    sub_1B8880C(this, x);
  return x->fields.questId == entity->fields.questId;
}