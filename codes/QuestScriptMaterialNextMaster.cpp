void QuestScriptMaterialNextMaster___ctor(QuestScriptMaterialNextMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D31197 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_QuestScriptMaterialNextMaster__QuestScriptMaterialNextEntity__string___ctor__);
    byte_4D31197 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    414,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_QuestScriptMaterialNextMaster__QuestScriptMaterialNextEntity__string___ctor__);
}


UserQuestEntity_o *QuestScriptMaterialNextMaster__GetCheckTargetEntity(
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
      sub_1C93D2C(this, condQuestId);
  }
  if ( v5->fields.questId == condQuestId )
    return v5;
  else
    return 0;
}


System_Collections_Generic_List_UserQuestEntity__o *QuestScriptMaterialNextMaster__GetGroupUserQuestEntities(
        QuestScriptMaterialNextMaster_o *this,
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *nextEntities,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *monitor; // x19
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x22
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Predicate_object__o *v26; // x24
  __int64 v27; // x0
  __int64 v28; // x1
  _BOOL8 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  Il2CppObject *v37; // x1
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0

  if ( (byte_4D3119C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__getEntityList__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_1C93AD4(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo);
    sub_1C93AD4(&Method_QuestScriptMaterialNextMaster___c__DisplayClass6_0__GetGroupUserQuestEntities_b__0__);
    sub_1C93AD4(&QuestScriptMaterialNextMaster___c__DisplayClass6_0_TypeInfo);
    byte_4D3119C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !Master_object
    || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
        v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserQuestEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v7,
          (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__),
        !monitor) )
  {
    sub_1C93D2C(Master_object, v5);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v8);
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
          goto LABEL_12;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v13 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = sub_1C93D20(QuestScriptMaterialNextMaster___c__DisplayClass6_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0);
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserQuestEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_19;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_19:
      v18 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    if ( !v14 )
      sub_1C93D2C(v19, v19);
    *(_QWORD *)(v14 + 16) = v19;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v14 + 16), v19, v20, v21, v22, v23, v24, v25);
    v26 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_QuestScriptMaterialNextEntity__TypeInfo);
    System_Predicate_object____ctor(
      v26,
      (Il2CppObject *)v14,
      Method_QuestScriptMaterialNextMaster___c__DisplayClass6_0__GetGroupUserQuestEntities_b__0__,
      0);
    if ( !nextEntities )
      sub_1C93D2C(v27, v28);
    v29 = System_Collections_Generic_List_object___Exists(
            (System_Collections_Generic_List_object__o *)nextEntities,
            (System_Predicate_T__o *)v26,
            (const MethodInfo_3879FC8 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
    if ( v29 )
    {
      if ( !v7 )
        sub_1C93D2C(v29, v30);
      v37 = *(Il2CppObject **)(v14 + 16);
      items = v7->fields._items;
      v39 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C93D2C(v29, v37);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          v37,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v37;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)v37, v31, v32, v33, v34, v35, v36);
      }
    }
  }
  v42 = Enumerator->klass;
  v43 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_33;
    }
    v45 = (__int64)&v42->vtable[*v44];
  }
  else
  {
LABEL_33:
    v45 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(Enumerator, *(_QWORD *)(v45 + 8));
  return (System_Collections_Generic_List_UserQuestEntity__o *)v7;
}


System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *QuestScriptMaterialNextMaster__GetIncludedGroups(
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
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  int32_t v21; // w1
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4D3119B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
    byte_4D3119B = 1;
  }
  NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    NextEntitiesGroupByGroupId,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v8);
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
      v13 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo )
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
      v17 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    if ( !v18 )
      sub_1C93D2C(0, v19);
    if ( *(_DWORD *)(v18 + 16) == questId )
    {
      v21 = *(_DWORD *)(v18 + 28);
      if ( v21 )
      {
        NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
                                                                                    this,
                                                                                    v21,
                                                                                    v20);
        break;
      }
    }
  }
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_26;
    }
    v25 = (__int64)&v22->vtable[*v24];
  }
  else
  {
LABEL_26:
    v25 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)NextEntitiesGroupByGroupId;
}


System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
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
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 v26; // x8
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4D3119A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
    byte_4D3119A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v8);
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
      v13 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo )
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
      v17 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v26 = v18;
    if ( !v18 )
      sub_1C93D2C(0, v19);
    if ( *(_DWORD *)(v18 + 28) == groupId )
    {
      if ( !v5 )
        sub_1C93D2C(v18, v19);
      items = v5->fields._items;
      v28 = Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C93D2C(v18, v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v30 + 4), v26, v20, v21, v22, v23, v24, v25);
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_29;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_29:
    v34 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *QuestScriptMaterialNextMaster__GetNextQuestEntities(
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
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  Il2CppObject *v19; // x22
  int klass_high; // w8
  System_Collections_Generic_List_object__o *NextEntitiesGroupByGroupId; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_4D31199 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
    byte_4D31199 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v6);
  do
  {
    do
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
        v11 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
              Enumerator,
              *(_QWORD *)(v11 + 8))
          & 1) == 0 )
      {
        NextEntitiesGroupByGroupId = 0;
        goto LABEL_29;
      }
      v12 = Enumerator->klass;
      v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v14 = &v12->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo )
        {
          --v13;
          v14 += 4;
          if ( !v13 )
            goto LABEL_16;
        }
        v15 = (__int64)&v12->vtable[*v14];
      }
      else
      {
LABEL_16:
        v15 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo, 0);
      }
      v16 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                              Enumerator,
                              *(_QWORD *)(v15 + 8));
      v19 = v16;
      if ( !v16 )
        sub_1C93D2C(0, v17);
    }
    while ( LODWORD(v16[1].klass) != questId );
    klass_high = HIDWORD(v16[1].klass);
    if ( klass_high == 2 )
    {
      NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
                                                                                  this,
                                                                                  (int32_t)v16[1].monitor,
                                                                                  v18);
      goto LABEL_29;
    }
  }
  while ( klass_high != 1 );
  NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    NextEntitiesGroupByGroupId,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  if ( !NextEntitiesGroupByGroupId )
    sub_1C93D2C(v22, v23);
  items = NextEntitiesGroupByGroupId->fields._items;
  v31 = Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__;
  ++NextEntitiesGroupByGroupId->fields._version;
  if ( !items )
    sub_1C93D2C(v22, v23);
  size = NextEntitiesGroupByGroupId->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      NextEntitiesGroupByGroupId,
      v19,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    NextEntitiesGroupByGroupId->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v19;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v19, v24, v25, v26, v27, v28, v29);
  }
LABEL_29:
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_33;
    }
    v37 = (__int64)&v34->vtable[*v36];
  }
  else
  {
LABEL_33:
    v37 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)NextEntitiesGroupByGroupId;
}


System_Collections_Generic_List_UserQuestEntity__o *QuestScriptMaterialNextMaster__GetSortedGroupUserQuestEntities(
        QuestScriptMaterialNextMaster_o *this,
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities,
        bool isPrioritizeNotResetStatus,
        const MethodInfo *method)
{
  __int64 v6; // x21
  QuestScriptMaterialNextMaster_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_object__o *GroupUserQuestEntities; // x19
  System_Comparison_T__o *v11; // x20

  if ( (byte_4D3119D & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_UserQuestEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
    sub_1C93AD4(&Method_QuestScriptMaterialNextMaster___c__DisplayClass7_0__GetSortedGroupUserQuestEntities_b__0__);
    sub_1C93AD4(&QuestScriptMaterialNextMaster___c__DisplayClass7_0_TypeInfo);
    byte_4D3119D = 1;
  }
  v6 = sub_1C93D20(QuestScriptMaterialNextMaster___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6
    || (*(_BYTE *)(v6 + 16) = isPrioritizeNotResetStatus,
        GroupUserQuestEntities = (System_Collections_Generic_List_object__o *)QuestScriptMaterialNextMaster__GetGroupUserQuestEntities(
                                                                                v7,
                                                                                groupEntities,
                                                                                v9),
        v11 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_UserQuestEntity__TypeInfo),
        System_Comparison_object____ctor(
          v11,
          (Il2CppObject *)v6,
          Method_QuestScriptMaterialNextMaster___c__DisplayClass7_0__GetSortedGroupUserQuestEntities_b__0__,
          0),
        !GroupUserQuestEntities) )
  {
    sub_1C93D2C(v7, v8);
  }
  System_Collections_Generic_List_object___Sort_59225184(
    GroupUserQuestEntities,
    v11,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  return (System_Collections_Generic_List_UserQuestEntity__o *)GroupUserQuestEntities;
}


// local variable allocation has failed, the output may be wrong!
bool QuestScriptMaterialNextMaster__IsMaterialGroupQuest(
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

  if ( (byte_4D31198 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    byte_4D31198 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v6);
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
      v11 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo )
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
      v16 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    if ( !v17 )
      sub_1C93D2C(0, v18);
    if ( *(_DWORD *)(v17 + 16) == questId && *(_DWORD *)(v17 + 28) )
      goto LABEL_23;
  }
  v12 = 0;
LABEL_23:
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
        goto LABEL_27;
    }
    v22 = (__int64)&v19->vtable[*v21];
  }
  else
  {
LABEL_27:
    v22 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
  return v12 & 1;
}


void QuestScriptMaterialNextMaster___c__DisplayClass6_0___ctor(
        QuestScriptMaterialNextMaster___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestScriptMaterialNextMaster___c__DisplayClass6_0___GetGroupUserQuestEntities_b__0(
        QuestScriptMaterialNextMaster___c__DisplayClass6_0_o *this,
        QuestScriptMaterialNextEntity_o *x,
        const MethodInfo *method)
{
  struct UserQuestEntity_o *entity; // x8

  if ( !x || (entity = this->fields.entity) == 0 )
    sub_1C93D2C(this, x);
  return x->fields.questId == entity->fields.questId;
}


void QuestScriptMaterialNextMaster___c__DisplayClass7_0___ctor(
        QuestScriptMaterialNextMaster___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestScriptMaterialNextMaster___c__DisplayClass7_0___GetSortedGroupUserQuestEntities_b__0(
        QuestScriptMaterialNextMaster___c__DisplayClass7_0_o *this,
        UserQuestEntity_o *x,
        UserQuestEntity_o *y,
        const MethodInfo *method)
{
  int64_t v6; // x8
  _BOOL4 IsResetStatus; // w21

  if ( !y || !x )
    sub_1C93D2C(this, x);
  v6 = y->fields.updatedAt - x->fields.updatedAt;
  if ( v6 < 0 )
    return -1;
  if ( v6 )
    return 1;
  if ( !this->fields.isPrioritizeNotResetStatus )
    return y->fields.questId - x->fields.questId;
  IsResetStatus = UserQuestEntity__IsResetStatus(x, 0);
  if ( IsResetStatus == UserQuestEntity__IsResetStatus(y, 0) )
    return y->fields.questId - x->fields.questId;
  if ( UserQuestEntity__IsResetStatus(x, 0) )
    return 1;
  return -1;
}