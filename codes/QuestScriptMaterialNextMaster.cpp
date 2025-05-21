void __fastcall QuestScriptMaterialNextMaster___ctor(QuestScriptMaterialNextMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B451C2 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_QuestScriptMaterialNextMaster__QuestScriptMaterialNextEntity__string___ctor__,
      method);
    byte_4B451C2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    414,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_QuestScriptMaterialNextMaster__QuestScriptMaterialNextEntity__string___ctor__);
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
      sub_1BDBAD4(this, condQuestId);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *Master_object; // x0
  __int64 v18; // x1
  System_Collections_ObjectModel_Collection_T__o *monitor; // x19
  System_Collections_Generic_List_object__o *v20; // x20
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v27; // x22
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Predicate_object__o *v35; // x24
  __int64 v36; // x0
  __int64 v37; // x1
  _BOOL8 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x1
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0

  if ( (byte_4B451C7 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__, nextEntities);
    sub_1BDB878(&Method_DataManager_GetMaster_UserQuestMaster___, v4);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__getEntityList__, v6);
    sub_1BDB878(&System_IDisposable_TypeInfo, v7);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo, v8);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v12);
    sub_1BDB878(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v13);
    sub_1BDB878(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo, v14);
    sub_1BDB878(&Method_QuestScriptMaterialNextMaster___c__DisplayClass6_0__GetGroupUserQuestEntities_b__0__, v15);
    sub_1BDB878(&QuestScriptMaterialNextMaster___c__DisplayClass6_0_TypeInfo, v16);
    byte_4B451C7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !Master_object
    || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
        v20 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserQuestEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v20,
          (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__),
        !monitor) )
  {
    sub_1BDBAD4(Master_object, v18);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v21);
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
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = sub_1BDBAC4(QuestScriptMaterialNextMaster___c__DisplayClass6_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v27, 0LL);
    v28 = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserQuestEntity__c **)v30 - 1) != System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_19;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_19:
      v31 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo, 0LL);
    }
    v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
            Enumerator,
            *(_QWORD *)(v31 + 8));
    if ( !v27 )
      sub_1BDBAD4(v32, v32);
    *(_QWORD *)(v27 + 16) = v32;
    sub_1BDB81C((CGThumbnailListItem_o *)(v27 + 16), v32, v33, v34);
    v35 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_QuestScriptMaterialNextEntity__TypeInfo);
    System_Predicate_object____ctor(
      v35,
      (Il2CppObject *)v27,
      Method_QuestScriptMaterialNextMaster___c__DisplayClass6_0__GetGroupUserQuestEntities_b__0__,
      0LL);
    if ( !nextEntities )
      sub_1BDBAD4(v36, v37);
    v38 = System_Collections_Generic_List_object___Exists(
            (System_Collections_Generic_List_object__o *)nextEntities,
            (System_Predicate_T__o *)v35,
            (const MethodInfo_36D63F0 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
    if ( v38 )
    {
      if ( !v20 )
        sub_1BDBAD4(v38, v39);
      v42 = *(Il2CppObject **)(v27 + 16);
      items = v20->fields._items;
      v44 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v20->fields._version;
      if ( !items )
        sub_1BDBAD4(v38, v42);
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          v42,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &items->obj.klass + size;
        v20->fields._size = size + 1;
        v46[4] = (Il2CppClass *)v42;
        sub_1BDB81C((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v42, v40, v41);
      }
    }
  }
  v47 = Enumerator->klass;
  v48 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_33;
    }
    v50 = (__int64)&v47->vtable[*v49].method;
  }
  else
  {
LABEL_33:
    v50 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(Enumerator, *(_QWORD *)(v50 + 8));
  return (System_Collections_Generic_List_UserQuestEntity__o *)v20;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *__fastcall QuestScriptMaterialNextMaster__GetIncludedGroups(
        QuestScriptMaterialNextMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *NextEntitiesGroupByGroupId; // x20
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
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
  __int64 v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  int32_t v26; // w1
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4B451C6 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__,
      *(_QWORD *)&questId);
    sub_1BDB878(&System_IDisposable_TypeInfo, v5);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo, v6);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo, v9);
    byte_4B451C6 = 1;
  }
  NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    NextEntitiesGroupByGroupId,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BDBAD4(0LL, v11);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v13);
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
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo )
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
      v22 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    if ( !v23 )
      sub_1BDBAD4(0LL, v24);
    if ( *(_DWORD *)(v23 + 16) == questId )
    {
      v26 = *(_DWORD *)(v23 + 28);
      if ( v26 )
      {
        NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
                                                                                    this,
                                                                                    v26,
                                                                                    v25);
        break;
      }
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_26;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_26:
    v30 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)NextEntitiesGroupByGroupId;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *__fastcall QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
        QuestScriptMaterialNextMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x8
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_4B451C5 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__,
      *(_QWORD *)&groupId);
    sub_1BDB878(&System_IDisposable_TypeInfo, v5);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo, v6);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__, v9);
    sub_1BDB878(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo, v10);
    byte_4B451C5 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BDBAD4(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v14);
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
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo )
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
      v23 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    v28 = v24;
    if ( !v24 )
      sub_1BDBAD4(0LL, v25);
    if ( *(_DWORD *)(v24 + 28) == groupId )
    {
      if ( !v11 )
        sub_1BDBAD4(v24, v25);
      items = v11->fields._items;
      v30 = Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BDBAD4(v24, v25);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v24,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_1BDB81C((CGThumbnailListItem_o *)(v32 + 4), v28, v26, v27);
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_29;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_29:
    v36 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)v11;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *__fastcall QuestScriptMaterialNextMaster__GetNextQuestEntities(
        QuestScriptMaterialNextMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  Il2CppObject *v25; // x22
  int klass_high; // w8
  System_Collections_Generic_List_object__o *NextEntitiesGroupByGroupId; // x21
  __int64 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4B451C4 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__,
      *(_QWORD *)&questId);
    sub_1BDB878(&System_IDisposable_TypeInfo, v5);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo, v6);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__, v9);
    sub_1BDB878(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo, v10);
    byte_4B451C4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BDBAD4(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v12);
  do
  {
    do
    {
      klass = Enumerator->klass;
      v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v15;
          p_offset += 4;
          if ( !v15 )
            goto LABEL_9;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_9:
        p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
      {
        NextEntitiesGroupByGroupId = 0LL;
        goto LABEL_29;
      }
      v18 = Enumerator->klass;
      v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v20 = &v18->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo )
        {
          --v19;
          v20 += 4;
          if ( !v19 )
            goto LABEL_16;
        }
        v21 = (__int64)&v18->vtable[*v20].method;
      }
      else
      {
LABEL_16:
        v21 = sub_1C2C00C(
                Enumerator,
                System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo,
                0LL);
      }
      v22 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                              Enumerator,
                              *(_QWORD *)(v21 + 8));
      v25 = v22;
      if ( !v22 )
        sub_1BDBAD4(0LL, v23);
    }
    while ( LODWORD(v22[1].klass) != questId );
    klass_high = HIDWORD(v22[1].klass);
    if ( klass_high == 2 )
    {
      NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
                                                                                  this,
                                                                                  (int32_t)v22[1].monitor,
                                                                                  v24);
      goto LABEL_29;
    }
  }
  while ( klass_high != 1 );
  NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    NextEntitiesGroupByGroupId,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  if ( !NextEntitiesGroupByGroupId )
    sub_1BDBAD4(v28, v29);
  items = NextEntitiesGroupByGroupId->fields._items;
  v33 = Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__;
  ++NextEntitiesGroupByGroupId->fields._version;
  if ( !items )
    sub_1BDBAD4(v28, v29);
  size = NextEntitiesGroupByGroupId->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      NextEntitiesGroupByGroupId,
      v25,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &items->obj.klass + size;
    NextEntitiesGroupByGroupId->fields._size = size + 1;
    v35[4] = (Il2CppClass *)v25;
    sub_1BDB81C((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v25, v30, v31);
  }
LABEL_29:
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
        goto LABEL_33;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_33:
    v39 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)NextEntitiesGroupByGroupId;
}


System_Collections_Generic_List_UserQuestEntity__o *__fastcall QuestScriptMaterialNextMaster__GetSortedGroupUserQuestEntities(
        QuestScriptMaterialNextMaster_o *this,
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_UserQuestEntity__o *GroupUserQuestEntities; // x0
  __int64 v8; // x1
  QuestScriptMaterialNextMaster___c_c *v9; // x8
  System_Collections_Generic_List_object__o *v10; // x19
  System_Comparison_T__o *_9__7_0; // x20
  Il2CppObject *v12; // x21
  struct QuestScriptMaterialNextMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4B451C8 & 1) == 0 )
  {
    sub_1BDB878(&System_Comparison_UserQuestEntity__TypeInfo, groupEntities);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v4);
    sub_1BDB878(&Method_QuestScriptMaterialNextMaster___c__GetSortedGroupUserQuestEntities_b__7_0__, v5);
    this = (QuestScriptMaterialNextMaster_o *)sub_1BDB878(&QuestScriptMaterialNextMaster___c_TypeInfo, v6);
    byte_4B451C8 = 1;
  }
  GroupUserQuestEntities = QuestScriptMaterialNextMaster__GetGroupUserQuestEntities(this, groupEntities, method);
  v9 = QuestScriptMaterialNextMaster___c_TypeInfo;
  v10 = (System_Collections_Generic_List_object__o *)GroupUserQuestEntities;
  if ( !QuestScriptMaterialNextMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaterialNextMaster___c_TypeInfo);
    v9 = QuestScriptMaterialNextMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Comparison_T__o *)v9->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestScriptMaterialNextMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__7_0,
      v12,
      Method_QuestScriptMaterialNextMaster___c__GetSortedGroupUserQuestEntities_b__7_0__,
      0LL);
    static_fields = QuestScriptMaterialNextMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_UserQuestEntity__o *)_9__7_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v14, v15);
  }
  if ( !v10 )
    sub_1BDBAD4(GroupUserQuestEntities, v8);
  System_Collections_Generic_List_object___Sort_57505928(
    v10,
    _9__7_0,
    (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  return (System_Collections_Generic_List_UserQuestEntity__o *)v10;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptMaterialNextMaster__IsMaterialGroupQuest(
        QuestScriptMaterialNextMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v15; // w21
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4B451C3 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__,
      *(_QWORD *)&questId);
    sub_1BDB878(&System_IDisposable_TypeInfo, v5);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo, v6);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4B451C3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BDBAD4(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v15 & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_1BDBAD4(0LL, v21);
    if ( *(_DWORD *)(v20 + 16) == questId && *(_DWORD *)(v20 + 28) )
      goto LABEL_23;
  }
  v15 = 0;
LABEL_23:
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_27;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_27:
    v25 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v15 & 1;
}


void __fastcall QuestScriptMaterialNextMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B451C9 & 1) == 0 )
  {
    sub_1BDB878(&QuestScriptMaterialNextMaster___c_TypeInfo, v1);
    byte_4B451C9 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(QuestScriptMaterialNextMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestScriptMaterialNextMaster___c_TypeInfo->static_fields->__9 = (struct QuestScriptMaterialNextMaster___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)QuestScriptMaterialNextMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BDBAD4(this, x);
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
    sub_1BDBAD4(this, x);
  return x->fields.questId == entity->fields.questId;
}