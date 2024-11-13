void __fastcall QuestScriptMaterialNextMaster___ctor(QuestScriptMaterialNextMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B167C9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestScriptMaterialNextMaster__QuestScriptMaterialNextEntity__string___ctor__,
      method,
      v2);
    byte_4B167C9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    408,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_QuestScriptMaterialNextMaster__QuestScriptMaterialNextEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(this, *(_QWORD *)&condQuestId);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *Master_object; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_ObjectModel_Collection_T__o *klass; // x19
  System_Collections_Generic_List_object__o *v35; // x20
  __int64 v36; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  Il2CppObject *v45; // x22
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  int64_t v50; // x0
  __int64 v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x8
  UserQuestEntity_c *v59; // x1
  __int64 methodPtr_low; // x9
  PartyOrganizationUtility_o *v61; // x23
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  System_Predicate_object__o *v65; // x24
  __int64 v66; // x0
  __int64 v67; // x1
  _BOOL8 v68; // x0
  __int64 v69; // x1
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  Il2CppObject *v76; // x1
  struct System_Object_array *items; // x8
  _QWORD *v78; // x9
  __int64 size; // x10
  Il2CppClass **v80; // x0
  System_Collections_Generic_IEnumerator_T__c *v81; // x8
  __int64 v82; // x9
  int32_t *v83; // x10
  __int64 v84; // x0

  if ( (byte_4B167CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, nextEntities, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserQuestMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_QuestScriptMaterialNextMaster___c__DisplayClass6_0__GetGroupUserQuestEntities_b__0__, v24, v25);
    sub_1BCA7E0(&QuestScriptMaterialNextMaster___c__DisplayClass6_0_TypeInfo, v26, v27);
    sub_1BCA7E0(&UserQuestEntity_TypeInfo, v28, v29);
    byte_4B167CE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, nextEntities);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !Master_object
    || (klass = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].klass,
        v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_UserQuestEntity__TypeInfo,
                                                             v31,
                                                             v32,
                                                             v33),
        System_Collections_Generic_List_object____ctor(
          v35,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__),
        !klass) )
  {
    sub_1BCAA3C(Master_object, v31);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 klass,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v36);
  while ( 1 )
  {
    v38 = Enumerator->klass;
    v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v39;
        p_offset += 4;
        if ( !v39 )
          goto LABEL_12;
      }
      p_method = (__int64)&v38->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v45 = (Il2CppObject *)sub_1BCAA2C(QuestScriptMaterialNextMaster___c__DisplayClass6_0_TypeInfo, v42, v43, v44);
    System_Object___ctor(v45, 0LL);
    v46 = Enumerator->klass;
    v47 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v48 = &v46->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v48 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_19;
      }
      v49 = (__int64)&v46->vtable[*v48].method;
    }
    else
    {
LABEL_19:
      v49 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v50 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(
            Enumerator,
            *(_QWORD *)(v49 + 8));
    if ( !v45 )
      goto LABEL_45;
    v58 = v50;
    if ( v50 )
    {
      v59 = UserQuestEntity_TypeInfo;
      methodPtr_low = LOBYTE(UserQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v50 + 304LL) < (unsigned int)methodPtr_low
        || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v50 + 200LL) + 8 * (methodPtr_low - 1)) != UserQuestEntity_TypeInfo )
      {
        goto LABEL_44;
      }
      v45[1].klass = (Il2CppClass *)v50;
      v61 = (PartyOrganizationUtility_o *)&v45[1];
      if ( *(unsigned __int8 *)(*(_QWORD *)v50 + 304LL) < (unsigned int)methodPtr_low
        || *(UserQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v50 + 200LL) + 8 * (methodPtr_low - 1)) != v59 )
      {
        sub_1BCACFC(v50);
LABEL_44:
        sub_1BCACFC(v58);
LABEL_45:
        sub_1BCAA3C(v50, v51);
      }
    }
    else
    {
      v45[1].klass = 0LL;
      v61 = (PartyOrganizationUtility_o *)&v45[1];
    }
    sub_1BCA784(v61, v50, v52, v53, v54, v55, v56, v57);
    v65 = (System_Predicate_object__o *)sub_1BCAA2C(
                                          System_Predicate_QuestScriptMaterialNextEntity__TypeInfo,
                                          v62,
                                          v63,
                                          v64);
    System_Predicate_object____ctor(
      v65,
      v45,
      Method_QuestScriptMaterialNextMaster___c__DisplayClass6_0__GetGroupUserQuestEntities_b__0__,
      0LL);
    if ( !nextEntities )
      sub_1BCAA3C(v66, v67);
    v68 = System_Collections_Generic_List_object___Exists(
            (System_Collections_Generic_List_object__o *)nextEntities,
            (System_Predicate_T__o *)v65,
            (const MethodInfo_35A2288 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
    if ( v68 )
    {
      if ( !v35 )
        sub_1BCAA3C(v68, v69);
      v76 = (Il2CppObject *)v61->klass;
      items = v35->fields._items;
      v78 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
      ++v35->fields._version;
      if ( !items )
        sub_1BCAA3C(v68, v76);
      size = v35->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v35,
          v76,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
      }
      else
      {
        v80 = &items->obj.klass + size;
        v35->fields._size = size + 1;
        v80[4] = (Il2CppClass *)v76;
        sub_1BCA784((PartyOrganizationUtility_o *)(v80 + 4), (int64_t)v76, v70, v71, v72, v73, v74, v75);
      }
    }
  }
  v81 = Enumerator->klass;
  v82 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v83 = &v81->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v83 - 1) != System_IDisposable_TypeInfo )
    {
      --v82;
      v83 += 4;
      if ( !v82 )
        goto LABEL_40;
    }
    v84 = (__int64)&v81->vtable[*v83].method;
  }
  else
  {
LABEL_40:
    v84 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v84)(Enumerator, *(_QWORD *)(v84 + 8));
  return (System_Collections_Generic_List_UserQuestEntity__o *)v35;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *__fastcall QuestScriptMaterialNextMaster__GetIncludedGroups(
        QuestScriptMaterialNextMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *NextEntitiesGroupByGroupId; // x20
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
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
  _DWORD *v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  __int64 methodPtr_low; // x9
  int32_t v35; // w1
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4B167CD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&questId,
      method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&QuestScriptMaterialNextEntity_TypeInfo, v16, v17);
    byte_4B167CD = 1;
  }
  NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                              System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo,
                                                                              *(_QWORD *)&questId,
                                                                              method,
                                                                              v3);
  System_Collections_Generic_List_object____ctor(
    NextEntitiesGroupByGroupId,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v19);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v21);
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
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v30 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v31 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                      Enumerator,
                      *(_QWORD *)(v30 + 8));
    if ( !v31 )
      goto LABEL_32;
    methodPtr_low = LOBYTE(QuestScriptMaterialNextEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v31 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptMaterialNextEntity_c **)(*(_QWORD *)(*(_QWORD *)v31 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptMaterialNextEntity_TypeInfo )
    {
      sub_1BCACFC(v31);
LABEL_32:
      sub_1BCAA3C(v31, v32);
    }
    if ( v31[4] == questId )
    {
      v35 = v31[7];
      if ( v35 )
      {
        NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
                                                                                    this,
                                                                                    v35,
                                                                                    v33);
        break;
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
        goto LABEL_28;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_28:
    v39 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)NextEntitiesGroupByGroupId;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *__fastcall QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
        QuestScriptMaterialNextMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x20
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x8
  QuestScriptMaterialNextEntity_c *v42; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v45; // x10
  __int64 size; // x11
  Il2CppClass **v47; // x0
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0

  if ( (byte_4B167CC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&groupId,
      method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&QuestScriptMaterialNextEntity_TypeInfo, v18, v19);
    byte_4B167CC = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo,
                                                       *(_QWORD *)&groupId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v21);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
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
    v29 = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_16;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_16:
      v32 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
            Enumerator,
            *(_QWORD *)(v32 + 8));
    v41 = v33;
    if ( !v33 )
      goto LABEL_35;
    v42 = QuestScriptMaterialNextEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestScriptMaterialNextEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptMaterialNextEntity_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptMaterialNextEntity_TypeInfo )
    {
      sub_1BCACFC(v33);
LABEL_35:
      sub_1BCAA3C(v33, v34);
    }
    if ( *(_DWORD *)(v33 + 28) == groupId )
    {
      if ( !v20 )
        sub_1BCAA3C(v33, QuestScriptMaterialNextEntity_TypeInfo);
      items = v20->fields._items;
      v45 = Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__;
      ++v20->fields._version;
      if ( !items )
        sub_1BCAA3C(v33, v42);
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)v33,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        v20->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v41;
        sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), v41, v35, v36, v37, v38, v39, v40);
      }
    }
  }
  v48 = Enumerator->klass;
  v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_31;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_31:
    v51 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(Enumerator, *(_QWORD *)(v51 + 8));
  return (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)v20;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *__fastcall QuestScriptMaterialNextMaster__GetNextQuestEntities(
        QuestScriptMaterialNextMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  __int64 v33; // x3
  Il2CppObject *v34; // x22
  __int64 methodPtr_low; // x9
  int klass_high; // w8
  System_Collections_Generic_List_object__o *NextEntitiesGroupByGroupId; // x21
  __int64 v38; // x0
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0

  if ( (byte_4B167CB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&questId,
      method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo, v15, v16);
    sub_1BCA7E0(&QuestScriptMaterialNextEntity_TypeInfo, v17, v18);
    byte_4B167CB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v20);
  do
  {
    do
    {
      klass = Enumerator->klass;
      v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v23;
          p_offset += 4;
          if ( !v23 )
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
      {
        NextEntitiesGroupByGroupId = 0LL;
        goto LABEL_31;
      }
      v26 = Enumerator->klass;
      v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v28 = &v26->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v27;
          v28 += 4;
          if ( !v27 )
            goto LABEL_16;
        }
        v29 = (__int64)&v26->vtable[*v28].method;
      }
      else
      {
LABEL_16:
        v29 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v30 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                              Enumerator,
                              *(_QWORD *)(v29 + 8));
      v34 = v30;
      if ( !v30 )
        goto LABEL_39;
      methodPtr_low = LOBYTE(QuestScriptMaterialNextEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v30->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (QuestScriptMaterialNextEntity_c *)v30->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestScriptMaterialNextEntity_TypeInfo )
      {
        sub_1BCACFC(v30);
LABEL_39:
        sub_1BCAA3C(v30, v31);
      }
    }
    while ( LODWORD(v30[1].klass) != questId );
    klass_high = HIDWORD(v30[1].klass);
    if ( klass_high == 2 )
    {
      NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
                                                                                  this,
                                                                                  (int32_t)v30[1].monitor,
                                                                                  v32);
      goto LABEL_31;
    }
  }
  while ( klass_high != 1 );
  NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                              System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo,
                                                                              QuestScriptMaterialNextEntity_TypeInfo,
                                                                              v32,
                                                                              v33);
  System_Collections_Generic_List_object____ctor(
    NextEntitiesGroupByGroupId,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  if ( !NextEntitiesGroupByGroupId )
    sub_1BCAA3C(v38, v39);
  items = NextEntitiesGroupByGroupId->fields._items;
  v47 = Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__;
  ++NextEntitiesGroupByGroupId->fields._version;
  if ( !items )
    sub_1BCAA3C(v38, v39);
  size = NextEntitiesGroupByGroupId->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      NextEntitiesGroupByGroupId,
      v34,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &items->obj.klass + size;
    NextEntitiesGroupByGroupId->fields._size = size + 1;
    v49[4] = (Il2CppClass *)v34;
    sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 4), (int64_t)v34, v40, v41, v42, v43, v44, v45);
  }
LABEL_31:
  v50 = Enumerator->klass;
  v51 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      --v51;
      v52 += 4;
      if ( !v51 )
        goto LABEL_35;
    }
    v53 = (__int64)&v50->vtable[*v52].method;
  }
  else
  {
LABEL_35:
    v53 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(Enumerator, *(_QWORD *)(v53 + 8));
  return (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)NextEntitiesGroupByGroupId;
}


System_Collections_Generic_List_UserQuestEntity__o *__fastcall QuestScriptMaterialNextMaster__GetSortedGroupUserQuestEntities(
        QuestScriptMaterialNextMaster_o *this,
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_UserQuestEntity__o *GroupUserQuestEntities; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  QuestScriptMaterialNextMaster___c_c *v14; // x8
  System_Collections_Generic_List_object__o *v15; // x19
  System_Comparison_T__o *_9__7_0; // x20
  Il2CppObject *v17; // x21
  struct QuestScriptMaterialNextMaster___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B167CF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_UserQuestEntity__TypeInfo, groupEntities, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v4, v5);
    sub_1BCA7E0(&Method_QuestScriptMaterialNextMaster___c__GetSortedGroupUserQuestEntities_b__7_0__, v6, v7);
    this = (QuestScriptMaterialNextMaster_o *)sub_1BCA7E0(&QuestScriptMaterialNextMaster___c_TypeInfo, v8, v9);
    byte_4B167CF = 1;
  }
  GroupUserQuestEntities = QuestScriptMaterialNextMaster__GetGroupUserQuestEntities(this, groupEntities, method);
  v14 = QuestScriptMaterialNextMaster___c_TypeInfo;
  v15 = (System_Collections_Generic_List_object__o *)GroupUserQuestEntities;
  if ( !QuestScriptMaterialNextMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaterialNextMaster___c_TypeInfo, v11);
    v14 = QuestScriptMaterialNextMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Comparison_T__o *)v14->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14, v11);
      v14 = QuestScriptMaterialNextMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_UserQuestEntity__TypeInfo, v11, v12, v13);
    System_Comparison_object____ctor(
      _9__7_0,
      v17,
      Method_QuestScriptMaterialNextMaster___c__GetSortedGroupUserQuestEntities_b__7_0__,
      0LL);
    static_fields = QuestScriptMaterialNextMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_UserQuestEntity__o *)_9__7_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v19, v20, v21, v22, v23, v24);
  }
  if ( !v15 )
    sub_1BCAA3C(GroupUserQuestEntities, v11);
  System_Collections_Generic_List_object___Sort_56244000(
    v15,
    _9__7_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  return (System_Collections_Generic_List_UserQuestEntity__o *)v15;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptMaterialNextMaster__IsMaterialGroupQuest(
        QuestScriptMaterialNextMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v20; // w21
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  _DWORD *v25; // x0
  __int64 v26; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4B167CA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&questId,
      method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v9, v10);
    sub_1BCA7E0(&QuestScriptMaterialNextEntity_TypeInfo, v11, v12);
    byte_4B167CA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v14);
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
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v20 & 1) == 0 )
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
      v24 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                      Enumerator,
                      *(_QWORD *)(v24 + 8));
    if ( !v25 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(QuestScriptMaterialNextEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptMaterialNextEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptMaterialNextEntity_TypeInfo )
    {
      sub_1BCACFC(v25);
LABEL_33:
      sub_1BCAA3C(v25, v26);
    }
    if ( v25[4] == questId && v25[7] )
      goto LABEL_25;
  }
  v20 = 0;
LABEL_25:
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
        goto LABEL_29;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_29:
    v31 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v20 & 1;
}


void __fastcall QuestScriptMaterialNextMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B167D0 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestScriptMaterialNextMaster___c_TypeInfo, v1, v2);
    byte_4B167D0 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestScriptMaterialNextMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestScriptMaterialNextMaster___c_TypeInfo->static_fields->__9 = (struct QuestScriptMaterialNextMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestScriptMaterialNextMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
  return x->fields.questId == entity->fields.questId;
}