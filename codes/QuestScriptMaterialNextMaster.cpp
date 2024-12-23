void __fastcall QuestScriptMaterialNextMaster___ctor(QuestScriptMaterialNextMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B671AD & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_QuestScriptMaterialNextMaster__QuestScriptMaterialNextEntity__string___ctor__,
      method);
    byte_4B671AD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    412,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_QuestScriptMaterialNextMaster__QuestScriptMaterialNextEntity__string___ctor__);
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
      sub_1BE4D28(this, condQuestId);
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
  System_Collections_ObjectModel_Collection_T__o *klass; // x19
  System_Collections_Generic_List_object__o *v20; // x20
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *v27; // x22
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  int64_t v32; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x8
  UserQuestEntity_c *v41; // x1
  __int64 methodPtr_low; // x9
  PartyOrganizationUtility_o *v43; // x23
  System_Predicate_object__o *v44; // x24
  __int64 v45; // x0
  __int64 v46; // x1
  _BOOL8 v47; // x0
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  Il2CppObject *v55; // x1
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  System_Collections_Generic_IEnumerator_T__c *v60; // x8
  __int64 v61; // x9
  int32_t *v62; // x10
  __int64 v63; // x0

  if ( (byte_4B671B2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, nextEntities);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserQuestMaster___, v4);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v12);
    sub_1BE4ACC(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo, v13);
    sub_1BE4ACC(&Method_QuestScriptMaterialNextMaster___c__DisplayClass6_0__GetGroupUserQuestEntities_b__0__, v14);
    sub_1BE4ACC(&QuestScriptMaterialNextMaster___c__DisplayClass6_0_TypeInfo, v15);
    sub_1BE4ACC(&UserQuestEntity_TypeInfo, v16);
    byte_4B671B2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !Master_object
    || (klass = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].klass,
        v20 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UserQuestEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v20,
          (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__),
        !klass) )
  {
    sub_1BE4D28(Master_object, v18);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 klass,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v21);
  while ( 1 )
  {
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_12;
      }
      p_method = (__int64)&v23->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = (Il2CppObject *)sub_1BE4D18(QuestScriptMaterialNextMaster___c__DisplayClass6_0_TypeInfo);
    System_Object___ctor(v27, 0LL);
    v28 = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v31 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
            Enumerator,
            *(_QWORD *)(v31 + 8));
    if ( !v27 )
      goto LABEL_45;
    v40 = v32;
    if ( v32 )
    {
      v41 = UserQuestEntity_TypeInfo;
      methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v32 + 304LL) < (unsigned int)methodPtr_low
        || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * (methodPtr_low - 1)) != UserQuestEntity_TypeInfo )
      {
        goto LABEL_44;
      }
      v27[1].klass = (Il2CppClass *)v32;
      v43 = (PartyOrganizationUtility_o *)&v27[1];
      if ( *(unsigned __int8 *)(*(_QWORD *)v32 + 304LL) < (unsigned int)methodPtr_low
        || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * (methodPtr_low - 1)) != v41 )
      {
        sub_1BE4FE8(v32);
LABEL_44:
        sub_1BE4FE8(v40);
LABEL_45:
        sub_1BE4D28(v32, v33);
      }
    }
    else
    {
      v27[1].klass = 0LL;
      v43 = (PartyOrganizationUtility_o *)&v27[1];
    }
    sub_1BE4A70(v43, v32, v34, v35, v36, v37, v38, v39);
    v44 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_QuestScriptMaterialNextEntity__TypeInfo);
    System_Predicate_object____ctor(
      v44,
      v27,
      Method_QuestScriptMaterialNextMaster___c__DisplayClass6_0__GetGroupUserQuestEntities_b__0__,
      0LL);
    if ( !nextEntities )
      sub_1BE4D28(v45, v46);
    v47 = System_Collections_Generic_List_object___Exists(
            (System_Collections_Generic_List_object__o *)nextEntities,
            (System_Predicate_T__o *)v44,
            (const MethodInfo_35EC850 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
    if ( v47 )
    {
      if ( !v20 )
        sub_1BE4D28(v47, v48);
      v55 = (Il2CppObject *)v43->klass;
      items = v20->fields._items;
      v57 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v20->fields._version;
      if ( !items )
        sub_1BE4D28(v47, v55);
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          v55,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
      }
      else
      {
        v59 = &items->obj.klass + size;
        v20->fields._size = size + 1;
        v59[4] = (Il2CppClass *)v55;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v59 + 4), (int64_t)v55, v49, v50, v51, v52, v53, v54);
      }
    }
  }
  v60 = Enumerator->klass;
  v61 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v62 = &v60->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
    {
      --v61;
      v62 += 4;
      if ( !v61 )
        goto LABEL_40;
    }
    v63 = (__int64)&v60->vtable[*v62].method;
  }
  else
  {
LABEL_40:
    v63 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v63)(Enumerator, *(_QWORD *)(v63 + 8));
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
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *NextEntitiesGroupByGroupId; // x20
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
  _DWORD *v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  __int64 methodPtr_low; // x9
  int32_t v28; // w1
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4B671B1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo, v9);
    sub_1BE4ACC(&QuestScriptMaterialNextEntity_TypeInfo, v10);
    byte_4B671B1 = 1;
  }
  NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    NextEntitiesGroupByGroupId,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v14);
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
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v23 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                      Enumerator,
                      *(_QWORD *)(v23 + 8));
    if ( !v24 )
      goto LABEL_32;
    methodPtr_low = LOBYTE(QuestScriptMaterialNextEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v24 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptMaterialNextEntity_c **)(*(_QWORD *)(*(_QWORD *)v24 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptMaterialNextEntity_TypeInfo )
    {
      sub_1BE4FE8(v24);
LABEL_32:
      sub_1BE4D28(v24, v25);
    }
    if ( v24[4] == questId )
    {
      v28 = v24[7];
      if ( v28 )
      {
        NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
                                                                                    this,
                                                                                    v28,
                                                                                    v26);
        break;
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
        goto LABEL_28;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_28:
    v32 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
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
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x8
  QuestScriptMaterialNextEntity_c *v34; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v37; // x10
  __int64 size; // x11
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0

  if ( (byte_4B671B0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&groupId);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo, v10);
    sub_1BE4ACC(&QuestScriptMaterialNextEntity_TypeInfo, v11);
    byte_4B671B0 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v15);
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
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v24 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v33 = v25;
    if ( !v25 )
      goto LABEL_35;
    v34 = QuestScriptMaterialNextEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestScriptMaterialNextEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptMaterialNextEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptMaterialNextEntity_TypeInfo )
    {
      sub_1BE4FE8(v25);
LABEL_35:
      sub_1BE4D28(v25, v26);
    }
    if ( *(_DWORD *)(v25 + 28) == groupId )
    {
      if ( !v12 )
        sub_1BE4D28(v25, QuestScriptMaterialNextEntity_TypeInfo);
      items = v12->fields._items;
      v37 = Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1BE4D28(v25, v34);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v25,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v33;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 4), v33, v27, v28, v29, v30, v31, v32);
      }
    }
  }
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_31;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_31:
    v43 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  return (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)v12;
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
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  Il2CppObject *v26; // x22
  __int64 methodPtr_low; // x9
  int klass_high; // w8
  System_Collections_Generic_List_object__o *NextEntitiesGroupByGroupId; // x21
  __int64 v30; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0

  if ( (byte_4B671AF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo, v10);
    sub_1BE4ACC(&QuestScriptMaterialNextEntity_TypeInfo, v11);
    byte_4B671AF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v13);
  do
  {
    do
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
        p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
      {
        NextEntitiesGroupByGroupId = 0LL;
        goto LABEL_31;
      }
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
        v22 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v23 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                              Enumerator,
                              *(_QWORD *)(v22 + 8));
      v26 = v23;
      if ( !v23 )
        goto LABEL_39;
      methodPtr_low = LOBYTE(QuestScriptMaterialNextEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v23->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (QuestScriptMaterialNextEntity_c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestScriptMaterialNextEntity_TypeInfo )
      {
        sub_1BE4FE8(v23);
LABEL_39:
        sub_1BE4D28(v23, v24);
      }
    }
    while ( LODWORD(v23[1].klass) != questId );
    klass_high = HIDWORD(v23[1].klass);
    if ( klass_high == 2 )
    {
      NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
                                                                                  this,
                                                                                  (int32_t)v23[1].monitor,
                                                                                  v25);
      goto LABEL_31;
    }
  }
  while ( klass_high != 1 );
  NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    NextEntitiesGroupByGroupId,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  if ( !NextEntitiesGroupByGroupId )
    sub_1BE4D28(v30, v31);
  items = NextEntitiesGroupByGroupId->fields._items;
  v39 = Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__;
  ++NextEntitiesGroupByGroupId->fields._version;
  if ( !items )
    sub_1BE4D28(v30, v31);
  size = NextEntitiesGroupByGroupId->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      NextEntitiesGroupByGroupId,
      v26,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = &items->obj.klass + size;
    NextEntitiesGroupByGroupId->fields._size = size + 1;
    v41[4] = (Il2CppClass *)v26;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)v26, v32, v33, v34, v35, v36, v37);
  }
LABEL_31:
  v42 = Enumerator->klass;
  v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_35;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_35:
    v45 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(Enumerator, *(_QWORD *)(v45 + 8));
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B671B3 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Comparison_UserQuestEntity__TypeInfo, groupEntities);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v4);
    sub_1BE4ACC(&Method_QuestScriptMaterialNextMaster___c__GetSortedGroupUserQuestEntities_b__7_0__, v5);
    this = (QuestScriptMaterialNextMaster_o *)sub_1BE4ACC(&QuestScriptMaterialNextMaster___c_TypeInfo, v6);
    byte_4B671B3 = 1;
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
    _9__7_0 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__7_0,
      v12,
      Method_QuestScriptMaterialNextMaster___c__GetSortedGroupUserQuestEntities_b__7_0__,
      0LL);
    static_fields = QuestScriptMaterialNextMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_UserQuestEntity__o *)_9__7_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v14, v15, v16, v17, v18, v19);
  }
  if ( !v10 )
    sub_1BE4D28(GroupUserQuestEntities, v8);
  System_Collections_Generic_List_object___Sort_56548584(
    v10,
    _9__7_0,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
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

  if ( (byte_4B671AE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BE4ACC(&QuestScriptMaterialNextEntity_TypeInfo, v8);
    byte_4B671AE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v10);
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
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v20 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                      Enumerator,
                      *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(QuestScriptMaterialNextEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptMaterialNextEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptMaterialNextEntity_TypeInfo )
    {
      sub_1BE4FE8(v21);
LABEL_33:
      sub_1BE4D28(v21, v22);
    }
    if ( v21[4] == questId && v21[7] )
      goto LABEL_25;
  }
  v16 = 0;
LABEL_25:
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
        goto LABEL_29;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_29:
    v27 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v16 & 1;
}


void __fastcall QuestScriptMaterialNextMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B671B4 & 1) == 0 )
  {
    sub_1BE4ACC(&QuestScriptMaterialNextMaster___c_TypeInfo, v1);
    byte_4B671B4 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(QuestScriptMaterialNextMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestScriptMaterialNextMaster___c_TypeInfo->static_fields->__9 = (struct QuestScriptMaterialNextMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)QuestScriptMaterialNextMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, x);
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
    sub_1BE4D28(this, x);
  return x->fields.questId == entity->fields.questId;
}