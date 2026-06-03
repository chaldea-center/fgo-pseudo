void QuestScriptEntity___ctor(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77E64 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_string___ctor__);
    byte_4E77E64 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_35334BC *)Method_DataEntityBase_string___ctor__);
}


System_Int32_array *QuestScriptEntity__BranchScripts(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77E5C & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17667/*"branchScripts"*/);
    byte_4E77E5C = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_17667/*"branchScripts"*/, 0, 0);
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
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  __int64 v25; // x8
  struct System_Object_array *items; // x9
  _QWORD *v27; // x10
  __int64 size; // x11
  Il2CppClass **v29; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  const MethodInfo *v34; // x1
  int v35; // w19
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4E77E56 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__);
    sub_1D0F0B4(&Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__getEntityList__);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_QuestScriptReleaseEntity___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__get_Current__);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
    byte_4E77E56 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
  v4 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  if ( !Master_object )
    goto LABEL_48;
  monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor;
  if ( !monitor )
    goto LABEL_48;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_34CD418 *)Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1D0F30C(0, v7);
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
      v12 = sub_1CE5430(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v16 = sub_1CE5430(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    v25 = v17;
    if ( !v17 )
      sub_1D0F30C(0, v18);
    if ( *(_DWORD *)(v17 + 16) == this->fields.id )
    {
      if ( !v4 )
        sub_1D0F30C(v17, v18);
      items = v4->fields._items;
      v27 = Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__;
      ++v4->fields._version;
      if ( !items )
        sub_1D0F30C(v17, v18);
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          (Il2CppObject *)v17,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v4->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v25;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v29 + 4), v25, v19, v20, v21, v22, v23, v24);
      }
    }
  }
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_32;
    }
    v33 = (__int64)&v30->vtable[*v32];
  }
  else
  {
LABEL_32:
    v33 = sub_1CE5430(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  monitor = (System_Collections_ObjectModel_Collection_T__o *)System_Linq_Enumerable__Any_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v4,
                                                                (const MethodInfo_325D0AC *)Method_System_Linq_Enumerable_Any_QuestScriptReleaseEntity___);
  if ( ((unsigned __int8)monitor & 1) == 0 )
    return 1;
  if ( !v4 )
LABEL_48:
    sub_1D0F30C(monitor, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    v4,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__MoveNext__) )
  {
    if ( !v37.fields._current )
      sub_1D0F30C(0, v34);
    if ( !QuestScriptReleaseEntity__IsOpen((QuestScriptReleaseEntity_o *)v37.fields._current, v34) )
    {
      v35 = 8;
      goto LABEL_43;
    }
  }
  v35 = 9;
LABEL_43:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__Dispose__);
  return v35 != 8;
}


System_String_o *QuestScriptEntity__CreatePK(
        int32_t id,
        int32_t folderType,
        int32_t materialFolderId,
        int32_t parentWarId,
        const MethodInfo *method)
{
  if ( (byte_4E77E63 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4E77E63 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           folderType,
           materialFolderId,
           parentWarId,
           (const MethodInfo_324DC90 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  if ( (byte_4E77E5D & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17290/*"baseQuestId"*/);
    byte_4E77E5D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17290/*"baseQuestId"*/, 0, 0);
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

  if ( (byte_4E77E54 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    byte_4E77E54 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
  if ( !Master_object )
    sub_1D0F30C(0, v6);
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
  if ( (byte_4E77E59 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21932/*"maxPhase"*/);
    byte_4E77E59 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21932/*"maxPhase"*/, 0, 0);
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

  if ( (byte_4E77E55 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    byte_4E77E55 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
  if ( !Master_object )
    sub_1D0F30C(0, v6);
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

  if ( (byte_4E77E57 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__);
    sub_1D0F0B4(&Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__getEntityList__);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    byte_4E77E57 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].fields.items) == 0 )
  {
    sub_1D0F30C(Master_object, v4);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_34CD418 *)Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1D0F30C(0, v5);
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
      v10 = sub_1CE5430(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v15 = sub_1CE5430(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    if ( !v16 )
      sub_1D0F30C(0, v17);
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
    v21 = sub_1CE5430(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(Enumerator, *(_QWORD *)(v21 + 8));
  return v11 & 1;
}


bool QuestScriptEntity__IsMaterialLatestClear(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77E58 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21912/*"materialLatestClear"*/);
    byte_4E77E58 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21912/*"materialLatestClear"*/, 0, 0) > 0;
}


bool QuestScriptEntity__IsNoneMstQuest(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77E5A & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_22712/*"noneQuest"*/);
    byte_4E77E5A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22712/*"noneQuest"*/, 0, 0) > 0;
}


bool QuestScriptEntity__IsOpenDummyFolder(QuestScriptEntity_o *this, const MethodInfo *method)
{
  int32_t IntValue; // w0
  int32_t v4; // w19
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_4E77E5E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_18992/*"dummyFolderOpenCommonReleaseId"*/);
    byte_4E77E5E = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18992/*"dummyFolderOpenCommonReleaseId"*/, 0, 0);
  if ( IntValue < 1 )
    return 1;
  v4 = IntValue;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_object )
    sub_1D0F30C(0, v6);
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v4, 0, 0, 0);
}


System_String_o *QuestScriptEntity__IsQuestStartAction(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77E5B & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24132/*"startAction"*/);
    byte_4E77E5B = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_24132/*"startAction"*/, 0, 0);
}


bool QuestScriptEntity__TryGetOverwriteGalleryHeaderImgId(
        QuestScriptEntity_o *this,
        int32_t *overwriteImgId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool OverwriteMaterialInfo; // w8
  bool result; // w0
  int32_t IntValue; // w0
  System_Collections_Generic_Dictionary_string__object__o *overwriteInfo; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E77E61 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_20680/*"imgId"*/);
    sub_1D0F0B4(&StringLiteral_23011/*"overwriteMaterialGalleryHeaderImgInfo"*/);
    byte_4E77E61 = 1;
  }
  overwriteInfo = 0;
  *overwriteImgId = 0;
  OverwriteMaterialInfo = QuestScriptEntity__TryGetOverwriteMaterialInfo(
                            this,
                            (System_String_o *)StringLiteral_23011/*"overwriteMaterialGalleryHeaderImgInfo"*/,
                            &overwriteInfo,
                            v3);
  result = 0;
  if ( OverwriteMaterialInfo )
  {
    IntValue = EntityScriptUtil__GetIntValue(overwriteInfo, (System_String_o *)StringLiteral_20680/*"imgId"*/, 0, 0);
    *overwriteImgId = IntValue;
    return IntValue != 0;
  }
  return result;
}


bool QuestScriptEntity__TryGetOverwriteHeaderImgId(
        QuestScriptEntity_o *this,
        int32_t *overwriteImgId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool OverwriteMaterialInfo; // w8
  bool result; // w0
  int32_t IntValue; // w0
  System_Collections_Generic_Dictionary_string__object__o *overwriteInfo; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E77E5F & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_20680/*"imgId"*/);
    sub_1D0F0B4(&StringLiteral_23012/*"overwriteMaterialHeaderImgInfo"*/);
    byte_4E77E5F = 1;
  }
  overwriteInfo = 0;
  *overwriteImgId = 0;
  OverwriteMaterialInfo = QuestScriptEntity__TryGetOverwriteMaterialInfo(
                            this,
                            (System_String_o *)StringLiteral_23012/*"overwriteMaterialHeaderImgInfo"*/,
                            &overwriteInfo,
                            v3);
  result = 0;
  if ( OverwriteMaterialInfo )
  {
    IntValue = EntityScriptUtil__GetIntValue(overwriteInfo, (System_String_o *)StringLiteral_20680/*"imgId"*/, 0, 0);
    *overwriteImgId = IntValue;
    return IntValue != 0;
  }
  return result;
}


bool QuestScriptEntity__TryGetOverwriteMaterialInfo(
        QuestScriptEntity_o *this,
        System_String_o *key,
        System_Collections_Generic_Dictionary_string__object__o **overwriteInfo,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 naturalAligment; // x11
  System_Collections_Generic_List_object__c *v13; // x10
  System_Collections_Generic_List_object__o *v14; // x21
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  CommonReleaseMaster_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  Il2CppObject *current; // x8
  __int64 v25; // x11
  Il2CppObject *v26; // x9
  int32_t v27; // w1
  __int64 v28; // x11
  __int64 IntValue; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-50h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_4E77E62 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1D0F0B4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1D0F0B4(&StringLiteral_18460/*"commonReleaseId"*/);
    byte_4E77E62 = 1;
  }
  value = 0;
  memset(&v38, 0, sizeof(v38));
  *overwriteInfo = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)overwriteInfo, 0, (int32_t)overwriteInfo, (int32_t)method, v4, v5, v6, v7);
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3602DF0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      if ( value )
      {
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
        if ( value->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          v13 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1];
          v14 = v13 == System_Collections_Generic_List_object__TypeInfo
              ? (System_Collections_Generic_List_object__o *)value
              : 0LL;
          if ( v13 == System_Collections_Generic_List_object__TypeInfo )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
            if ( !v14 )
              sub_1D0F30C(Master_object, v16);
            v17 = (CommonReleaseMaster_o *)Master_object;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v37,
              v14,
              (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
            v38 = v37;
            while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v38,
                      (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
            {
              current = v38.fields._current;
              if ( v38.fields._current )
              {
                v25 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
                if ( v38.fields._current->klass->_2.naturalAligment >= (unsigned int)v25 )
                {
                  if ( (System_Collections_Generic_Dictionary_string__object__c *)v38.fields._current->klass->_2.typeHierarchy[v25 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
                    v26 = v38.fields._current;
                  else
                    v26 = 0;
                }
                else
                {
                  v26 = 0;
                }
                *overwriteInfo = (System_Collections_Generic_Dictionary_string__object__o *)v26;
                v28 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
                if ( current->klass->_2.naturalAligment >= (unsigned int)v28 )
                {
                  if ( (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[v28 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
                    v27 = (int)current;
                  else
                    v27 = 0;
                }
                else
                {
                  v27 = 0;
                }
              }
              else
              {
                v27 = 0;
                *overwriteInfo = 0;
              }
              sub_1D0F058((GrandQuestFolderBoardItem_o *)overwriteInfo, v27, v18, v19, v20, v21, v22, v23);
              if ( *overwriteInfo )
              {
                IntValue = EntityScriptUtil__GetIntValue(*overwriteInfo, (System_String_o *)StringLiteral_18460/*"commonReleaseId"*/, 0, 0);
                if ( !(_DWORD)IntValue )
                  goto LABEL_32;
                if ( !v17 )
                  sub_1D0F30C(IntValue, (unsigned int)IntValue);
                if ( CommonReleaseMaster__IsOpen(v17, IntValue, 0, 0, 0) )
                {
LABEL_32:
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v38,
                    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
                  LOBYTE(script) = 1;
                  return (char)script;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v38,
              (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
            *overwriteInfo = 0;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)overwriteInfo, 0, v30, v31, v32, v33, v34, v35);
          }
        }
      }
    }
    LOBYTE(script) = 0;
  }
  return (char)script;
}


bool QuestScriptEntity__TryGetOverwriteNameInfo(
        QuestScriptEntity_o *this,
        System_String_o **overwriteName,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x3
  System_String_o *StringValue; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_Dictionary_string__object__o *overwriteInfo; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E77E60 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_22583/*"name"*/);
    sub_1D0F0B4(&StringLiteral_23010/*"overwriteMaterialFolderNameInfo"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E77E60 = 1;
  }
  overwriteInfo = 0;
  *overwriteName = (System_String_o *)StringLiteral_1/*""*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)overwriteName, StringLiteral_1/*""*/, (int32_t)method, v3, v4, v5, v6, v7);
  if ( QuestScriptEntity__TryGetOverwriteMaterialInfo(this, (System_String_o *)StringLiteral_23010/*"overwriteMaterialFolderNameInfo"*/, &overwriteInfo, v10) )
  {
    StringValue = EntityScriptUtil__GetStringValue(overwriteInfo, (System_String_o *)StringLiteral_22583/*"name"*/, 0, 0);
    *overwriteName = StringValue;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)overwriteName, (int32_t)StringValue, v12, v13, v14, v15, v16, v17);
    return !System_String__IsNullOrEmpty(*overwriteName, 0);
  }
  else
  {
    return 0;
  }
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