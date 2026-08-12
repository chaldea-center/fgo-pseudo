void QuestScriptMaterialNextMaster___ctor(QuestScriptMaterialNextMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971054 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestScriptMaterialNextMaster__QuestScriptMaterialNextEntity__string___ctor__);
    byte_5971054 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    416,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_QuestScriptMaterialNextMaster__QuestScriptMaterialNextEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_2213CDC(this, *(_QWORD *)&condQuestId);
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
  System_Collections_ObjectModel_Collection_T__o *monitor; // x21
  System_Collections_Generic_List_object__o *v7; // x19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Predicate_object__o *v29; // x23
  __int64 v30; // x0
  __int64 v31; // x1
  _BOOL8 v32; // x0
  Il2CppObject *v33; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  System_Collections_Generic_IEnumerator_T__o *v49; // [xsp+18h] [xbp-68h]

  if ( (byte_5971059 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserQuestMaster__UserQuestEntity__string__getEntityList__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_2213A60(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo);
    sub_2213A60(&Method_QuestScriptMaterialNextMaster___c__DisplayClass6_0__GetGroupUserQuestEntities_b__0__);
    sub_2213A60(&QuestScriptMaterialNextMaster___c__DisplayClass6_0_TypeInfo);
    byte_5971059 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, nextEntities);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !Master_object
    || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
        v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserQuestEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v7,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__),
        !monitor) )
  {
    sub_2213CDC(Master_object, v5);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_UserQuestEntity__GetEnumerator__);
  v49 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  for ( i = Enumerator; ; i = v49 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_13;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = sub_2213CCC(QuestScriptMaterialNextMaster___c__DisplayClass6_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v15, 0);
    if ( !v49 )
      sub_2213CDC(v16, v17);
    v18 = v49->klass;
    v19 = *(unsigned __int16 *)&v49->klass->_2.rank;
    if ( *(_WORD *)&v49->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserQuestEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_21;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_21:
      v21 = sub_224BC3C(v49, System_Collections_Generic_IEnumerator_UserQuestEntity__TypeInfo, 0);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            v49,
            *(_QWORD *)(v21 + 8));
    if ( !v15 )
      sub_2213CDC(v22, v22);
    *(_QWORD *)(v15 + 16) = v22;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 16), v22, v23, v24, v25, v26, v27, v28);
    v29 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_QuestScriptMaterialNextEntity__TypeInfo);
    System_Predicate_object____ctor(
      v29,
      (Il2CppObject *)v15,
      Method_QuestScriptMaterialNextMaster___c__DisplayClass6_0__GetGroupUserQuestEntities_b__0__,
      0);
    if ( !nextEntities )
      sub_2213CDC(v30, v31);
    v32 = System_Collections_Generic_List_object___Exists(
            (System_Collections_Generic_List_object__o *)nextEntities,
            (System_Predicate_T__o *)v29,
            (const MethodInfo_448429C *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
    if ( v32 )
    {
      if ( !v7
        || (items = v7->fields._items,
            v33 = *(Il2CppObject **)(v15 + 16),
            v41 = Method_System_Collections_Generic_List_UserQuestEntity__Add__,
            ++v7->fields._version,
            !items) )
      {
        sub_2213CDC(v32, v33);
      }
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          v33,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v33;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 4), (int32_t)v33, v34, v35, v36, v37, v38, v39);
      }
    }
  }
  if ( v49 )
  {
    v44 = v49->klass;
    v45 = *(unsigned __int16 *)&v49->klass->_2.rank;
    if ( *(_WORD *)&v49->klass->_2.rank )
    {
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_38;
      }
      v47 = (__int64)&v44->vtable[*v46];
    }
    else
    {
LABEL_38:
      v47 = sub_224BC3C(v49, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(v49, *(_QWORD *)(v47 + 8));
  }
  return (System_Collections_Generic_List_UserQuestEntity__o *)v7;
}


System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *QuestScriptMaterialNextMaster__GetIncludedGroups(
        QuestScriptMaterialNextMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *NextEntitiesGroupByGroupId; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  int32_t v24; // w1
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  System_Collections_Generic_IEnumerator_T__o *v30; // [xsp+18h] [xbp-38h]

  if ( (byte_5971058 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
    byte_5971058 = 1;
  }
  NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    NextEntitiesGroupByGroupId,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__);
  v30 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v9);
  for ( i = Enumerator; ; i = v30 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v30 )
      sub_2213CDC(v15, v16);
    v17 = v30->klass;
    v18 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_224BC3C(v30, System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            v30,
            *(_QWORD *)(v20 + 8));
    if ( !v21 )
      sub_2213CDC(0, v22);
    if ( *(_DWORD *)(v21 + 16) == questId )
    {
      v24 = *(_DWORD *)(v21 + 28);
      if ( v24 )
      {
        NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
                                                                                    this,
                                                                                    v24,
                                                                                    v23);
        break;
      }
    }
  }
  if ( v30 )
  {
    v25 = v30->klass;
    v26 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_32;
      }
      v28 = (__int64)&v25->vtable[*v27];
    }
    else
    {
LABEL_32:
      v28 = sub_224BC3C(v30, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(v30, *(_QWORD *)(v28 + 8));
  }
  return (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)NextEntitiesGroupByGroupId;
}


System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
        QuestScriptMaterialNextMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  System_Collections_Generic_IEnumerator_T__o *v38; // [xsp+18h] [xbp-38h]

  if ( (byte_5971057 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
    byte_5971057 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__);
  v38 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  for ( i = Enumerator; ; i = v38 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v38 )
      sub_2213CDC(v15, v16);
    v17 = v38->klass;
    v18 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_224BC3C(v38, System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            v38,
            *(_QWORD *)(v20 + 8));
    v28 = v21;
    if ( !v21 )
      sub_2213CDC(0, 0);
    if ( *(_DWORD *)(v21 + 28) == groupId )
    {
      if ( !v5
        || (items = v5->fields._items,
            v30 = Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_2213CDC(v21, v21);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v21,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 4), v28, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  if ( v38 )
  {
    v33 = v38->klass;
    v34 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_34;
      }
      v36 = (__int64)&v33->vtable[*v35];
    }
    else
    {
LABEL_34:
      v36 = sub_224BC3C(v38, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(v38, *(_QWORD *)(v36 + 8));
  }
  return (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *QuestScriptMaterialNextMaster__GetNextQuestEntities(
        QuestScriptMaterialNextMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  Il2CppObject *v22; // x21
  int klass_high; // w8
  System_Collections_Generic_List_object__o *NextEntitiesGroupByGroupId; // x19
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  System_Collections_Generic_IEnumerator_T__o *v42; // [xsp+18h] [xbp-38h]

  if ( (byte_5971056 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
    byte_5971056 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__);
  v42 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v7);
  for ( i = Enumerator; ; i = v42 )
  {
    klass = i->klass;
    v10 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            i,
            *(_QWORD *)(v12 + 8));
    if ( (v13 & 1) == 0 )
    {
      NextEntitiesGroupByGroupId = 0;
      goto LABEL_33;
    }
    if ( !v42 )
      sub_2213CDC(v13, v14);
    v15 = v42->klass;
    v16 = *(unsigned __int16 *)&v42->klass->_2.rank;
    if ( *(_WORD *)&v42->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_18:
      v18 = sub_224BC3C(v42, System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo, 0);
    }
    v19 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                            v42,
                            *(_QWORD *)(v18 + 8));
    v22 = v19;
    if ( !v19 )
      sub_2213CDC(0, v20);
    if ( LODWORD(v19[1].klass) == questId )
    {
      klass_high = HIDWORD(v19[1].klass);
      if ( klass_high == 2 )
      {
        NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
                                                                                    this,
                                                                                    (int32_t)v19[1].monitor,
                                                                                    v21);
        goto LABEL_33;
      }
      if ( klass_high == 1 )
        break;
    }
  }
  NextEntitiesGroupByGroupId = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    NextEntitiesGroupByGroupId,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  if ( !NextEntitiesGroupByGroupId
    || (items = NextEntitiesGroupByGroupId->fields._items,
        v34 = Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__,
        ++NextEntitiesGroupByGroupId->fields._version,
        !items) )
  {
    sub_2213CDC(v25, v26);
  }
  size = NextEntitiesGroupByGroupId->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      NextEntitiesGroupByGroupId,
      v22,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    NextEntitiesGroupByGroupId->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v22;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)v22, v27, v28, v29, v30, v31, v32);
  }
LABEL_33:
  if ( v42 )
  {
    v37 = v42->klass;
    v38 = *(unsigned __int16 *)&v42->klass->_2.rank;
    if ( *(_WORD *)&v42->klass->_2.rank )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_38;
      }
      v40 = (__int64)&v37->vtable[*v39];
    }
    else
    {
LABEL_38:
      v40 = sub_224BC3C(v42, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(v42, *(_QWORD *)(v40 + 8));
  }
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

  if ( (byte_597105A & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_UserQuestEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
    sub_2213A60(&Method_QuestScriptMaterialNextMaster___c__DisplayClass7_0__GetSortedGroupUserQuestEntities_b__0__);
    sub_2213A60(&QuestScriptMaterialNextMaster___c__DisplayClass7_0_TypeInfo);
    byte_597105A = 1;
  }
  v6 = sub_2213CCC(QuestScriptMaterialNextMaster___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6
    || (*(_BYTE *)(v6 + 16) = isPrioritizeNotResetStatus,
        GroupUserQuestEntities = (System_Collections_Generic_List_object__o *)QuestScriptMaterialNextMaster__GetGroupUserQuestEntities(
                                                                                v7,
                                                                                groupEntities,
                                                                                v9),
        v11 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_UserQuestEntity__TypeInfo),
        System_Comparison_object____ctor(
          v11,
          (Il2CppObject *)v6,
          Method_QuestScriptMaterialNextMaster___c__DisplayClass7_0__GetSortedGroupUserQuestEntities_b__0__,
          0),
        !GroupUserQuestEntities) )
  {
    sub_2213CDC(v7, v8);
  }
  System_Collections_Generic_List_object___Sort_71849708(
    GroupUserQuestEntities,
    v11,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  return (System_Collections_Generic_List_UserQuestEntity__o *)GroupUserQuestEntities;
}


// local variable allocation has failed, the output may be wrong!
bool QuestScriptMaterialNextMaster__IsMaterialGroupQuest(
        QuestScriptMaterialNextMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  char v15; // w20
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  System_Collections_Generic_IEnumerator_T__o *v27; // [xsp+18h] [xbp-38h]

  if ( (byte_5971055 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5971055 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_QuestScriptMaterialNextEntity__GetEnumerator__);
  v27 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v7);
  for ( i = Enumerator; ; i = v27 )
  {
    klass = i->klass;
    v10 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            i,
            *(_QWORD *)(v12 + 8));
    v15 = v13;
    if ( (v13 & 1) == 0 )
      break;
    if ( !v27 )
      sub_2213CDC(v13, v14);
    v16 = v27->klass;
    v17 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_18;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_18:
      v19 = sub_224BC3C(v27, System_Collections_Generic_IEnumerator_QuestScriptMaterialNextEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            v27,
            *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_2213CDC(0, v21);
    if ( *(_DWORD *)(v20 + 16) == questId && *(_DWORD *)(v20 + 28) )
      goto LABEL_26;
  }
  v15 = 0;
LABEL_26:
  if ( v27 )
  {
    v22 = v27->klass;
    v23 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_31;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_31:
      v25 = sub_224BC3C(v27, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(v27, *(_QWORD *)(v25 + 8));
  }
  return v15 & 1;
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
    sub_2213CDC(this, x);
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
  int64_t updatedAt; // x8
  int64_t v6; // x9
  _BOOL4 IsResetStatus; // w21

  if ( !y || !x )
    sub_2213CDC(this, x);
  updatedAt = y->fields.updatedAt;
  v6 = x->fields.updatedAt;
  if ( updatedAt - v6 < 0 )
    return -1;
  if ( updatedAt != v6 )
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