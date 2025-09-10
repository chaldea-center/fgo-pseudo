void QuestScriptEntity___ctor(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27A47 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27A47 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_Int32_array *QuestScriptEntity__BranchScripts(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27A44 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17404/*"branchScripts"*/);
    byte_4C27A44 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_17404/*"branchScripts"*/, 0, 0);
}


bool QuestScriptEntity__CheckScriptRelease(QuestScriptEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x19
  System_Collections_Generic_List_object__o *v4; // x20
  System_Collections_ObjectModel_Collection_T__o *monitor; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  struct System_Object_array *items; // x9
  _QWORD *v23; // x10
  __int64 size; // x11
  Il2CppClass **v25; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  const MethodInfo *v30; // x1
  int v31; // w19
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C27A3E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__getEntityList__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_QuestScriptReleaseEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__get_Current__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
    byte_4C27A3E = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  if ( !Master_object )
    goto LABEL_48;
  monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor;
  if ( !monitor )
    goto LABEL_48;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_12;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v12 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_19;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_19:
      v16 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    v21 = v17;
    if ( !v17 )
      sub_1C2D6EC(0, v18);
    if ( *(_DWORD *)(v17 + 16) == this->fields.id )
    {
      if ( !v4 )
        sub_1C2D6EC(v17, v18);
      items = v4->fields._items;
      v23 = Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__;
      ++v4->fields._version;
      if ( !items )
        sub_1C2D6EC(v17, v18);
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          (Il2CppObject *)v17,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v4->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v21;
        sub_1C2D434((CGThumbnailListItem_o *)(v25 + 4), v21, v19, v20);
      }
    }
  }
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_32;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_32:
    v29 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  monitor = (System_Collections_ObjectModel_Collection_T__o *)System_Linq_Enumerable__Any_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v4,
                                                                (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_QuestScriptReleaseEntity___);
  if ( ((unsigned __int8)monitor & 1) == 0 )
    return 1;
  if ( !v4 )
LABEL_48:
    sub_1C2D6EC(monitor, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    v4,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__MoveNext__) )
  {
    if ( !v33.fields._current )
      sub_1C2D6EC(0, v30);
    if ( !QuestScriptReleaseEntity__IsOpen((QuestScriptReleaseEntity_o *)v33.fields._current, v30) )
    {
      v31 = 8;
      goto LABEL_43;
    }
  }
  v31 = 9;
LABEL_43:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__Dispose__);
  return v31 != 8;
}


System_String_o *QuestScriptEntity__CreatePK(
        int32_t id,
        int32_t folderType,
        int32_t materialFolderId,
        int32_t parentWarId,
        const MethodInfo *method)
{
  if ( (byte_4C27A46 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4C27A46 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           folderType,
           materialFolderId,
           parentWarId,
           (const MethodInfo_30CD428 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *QuestScriptEntity__CreatePrimaryKey(QuestScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return QuestScriptEntity__CreatePK(
           this->fields.id,
           this->fields.folderType,
           this->fields.materialFolderId,
           this->fields.parentWarId,
           v2);
}


int32_t QuestScriptEntity__GetBaseQuestId(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27A45 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17038/*"baseQuestId"*/);
    byte_4C27A45 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17038/*"baseQuestId"*/, 0, 0);
}


int32_t QuestScriptEntity__GetFolderId(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( this->fields.folderType == 1 )
    return this->fields.materialFolderId;
  else
    return -1;
}


System_String_o *QuestScriptEntity__GetMaterialName(
        QuestScriptEntity_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  QuestScriptMaterialOverwriteEntity_o *ConditionClearEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_4C27A3C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C27A3C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v6);
  ConditionClearEntity = QuestScriptMaterialOverwriteMaster__GetConditionClearEntity(
                           (QuestScriptMaterialOverwriteMaster_o *)Master_object,
                           questId,
                           v7);
  p_name = &this->fields.name;
  if ( ConditionClearEntity )
    p_name = &ConditionClearEntity->fields.overwriteName;
  return *p_name;
}


int32_t QuestScriptEntity__GetMaxPhase(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27A41 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21486/*"maxPhase"*/);
    byte_4C27A41 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21486/*"maxPhase"*/, 0, 0);
}


System_String_o *QuestScriptEntity__GetUnconditionalMaterialName(
        QuestScriptEntity_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  QuestScriptMaterialOverwriteEntity_o *UnconditionalEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_4C27A3D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C27A3D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v6);
  UnconditionalEntity = QuestScriptMaterialOverwriteMaster__GetUnconditionalEntity(
                          (QuestScriptMaterialOverwriteMaster_o *)Master_object,
                          questId,
                          v7);
  p_name = &this->fields.name;
  if ( UnconditionalEntity )
    p_name = &UnconditionalEntity->fields.overwriteName;
  return *p_name;
}


bool QuestScriptEntity__HasScriptReleaseForceFalse(QuestScriptEntity_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *Master_object; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  char v11; // w21
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0

  if ( (byte_4C27A3F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__getEntityList__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C27A3F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].fields.items) == 0 )
  {
    sub_1C2D6EC(Master_object, v4);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_12;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v10 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            Enumerator,
            *(_QWORD *)(v10 + 8));
    if ( (v11 & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_19;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_19:
      v15 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    if ( !v16 )
      sub_1C2D6EC(0, v17);
    if ( *(_DWORD *)(v16 + 16) == this->fields.id && *(_DWORD *)(v16 + 32) == 92 )
      goto LABEL_26;
  }
  v11 = 0;
LABEL_26:
  v18 = Enumerator->klass;
  v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_30;
    }
    v21 = (__int64)&v18->vtable[*v20];
  }
  else
  {
LABEL_30:
    v21 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(Enumerator, *(_QWORD *)(v21 + 8));
  return v11 & 1;
}


bool QuestScriptEntity__IsMaterialLatestClear(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27A40 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21466/*"materialLatestClear"*/);
    byte_4C27A40 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21466/*"materialLatestClear"*/, 0, 0) > 0;
}


bool QuestScriptEntity__IsNoneMstQuest(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27A42 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22258/*"noneQuest"*/);
    byte_4C27A42 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22258/*"noneQuest"*/, 0, 0) > 0;
}


System_String_o *QuestScriptEntity__IsQuestStartAction(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27A43 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23633/*"startAction"*/);
    byte_4C27A43 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_23633/*"startAction"*/, 0, 0);
}


int32_t QuestScriptEntity__getQuestId(QuestScriptEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool QuestScriptEntity__isMateiralRegistWithEventId(
        QuestScriptEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  return this->fields.folderType != 2 || this->fields.materialFolderId == eventId;
}