void QuestScriptEntity___ctor(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938E85 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938E85 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_Int32_array *QuestScriptEntity__BranchScripts(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938E7D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18129/*"branchScripts"*/);
    byte_5938E7D = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_18129/*"branchScripts"*/, 0, 0);
}


bool QuestScriptEntity__CheckScriptRelease(QuestScriptEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x21
  System_Collections_Generic_List_object__o *v5; // x19
  System_Collections_ObjectModel_Collection_T__o *monitor; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  System_Collections_Generic_IEnumerator_T__o *v9; // x1
  System_Collections_Generic_IEnumerator_T__o *v10; // x21
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
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  const MethodInfo *v35; // x1
  bool v36; // w19
  char v37; // w19
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v40; // [xsp+38h] [xbp-38h]

  if ( (byte_5938E77 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__getEntityList__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_QuestScriptReleaseEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__get_Current__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
    byte_5938E77 = 1;
  }
  v40 = 0;
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v39, 0, sizeof(v39));
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  if ( !Master_object )
    goto LABEL_51;
  monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor;
  if ( !monitor )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__);
  v40 = Enumerator;
  if ( !Enumerator )
LABEL_31:
    sub_21FFECC(Enumerator, v9);
  v10 = Enumerator;
  while ( 1 )
  {
    klass = v10->klass;
    v12 = *(unsigned __int16 *)&v10->klass->_2.rank;
    if ( *(_WORD *)&v10->klass->_2.rank )
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
      v14 = sub_2237E2C(v10, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            v10,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v40 )
      sub_21FFECC(v15, v16);
    v17 = v40->klass;
    v18 = *(unsigned __int16 *)&v40->klass->_2.rank;
    if ( *(_WORD *)&v40->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_21;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_21:
      v20 = sub_2237E2C(v40, System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                                                  v40,
                                                                  *(_QWORD *)(v20 + 8));
    v9 = Enumerator;
    if ( !Enumerator )
      sub_21FFECC(0, 0);
    if ( LODWORD(Enumerator[1].klass) == this->fields.id )
    {
      if ( !v5
        || (items = v5->fields._items,
            v28 = Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_21FFECC(Enumerator, Enumerator);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)Enumerator,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v9;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v9, v21, v22, v23, v24, v25, v26);
      }
    }
    v10 = v40;
    if ( !v40 )
      goto LABEL_31;
  }
  if ( v40 )
  {
    v31 = v40->klass;
    v32 = *(unsigned __int16 *)&v40->klass->_2.rank;
    if ( *(_WORD *)&v40->klass->_2.rank )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_37;
      }
      v34 = (__int64)&v31->vtable[*v33];
    }
    else
    {
LABEL_37:
      v34 = sub_2237E2C(v40, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(v40, *(_QWORD *)(v34 + 8));
  }
  monitor = (System_Collections_ObjectModel_Collection_T__o *)System_Linq_Enumerable__Any_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                                (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_QuestScriptReleaseEntity___);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    v37 = 1;
    return v37 & 1;
  }
  if ( !v5 )
LABEL_51:
    sub_21FFECC(monitor, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    v5,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity__GetEnumerator__);
  do
  {
    v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__MoveNext__);
    if ( !v36 )
      break;
    if ( !v39.fields._current )
      sub_21FFECC(0, v35);
  }
  while ( QuestScriptReleaseEntity__IsOpen((QuestScriptReleaseEntity_o *)v39.fields._current, v35) );
  v37 = !v36;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__Dispose__);
  return v37 & 1;
}


System_String_o *QuestScriptEntity__CreatePK(
        int32_t id,
        int32_t folderType,
        int32_t materialFolderId,
        int32_t parentWarId,
        const MethodInfo *method)
{
  if ( (byte_5938E84 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_5938E84 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           folderType,
           materialFolderId,
           parentWarId,
           (const MethodInfo_38218C0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  if ( (byte_5938E7E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17732/*"baseQuestId"*/);
    byte_5938E7E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17732/*"baseQuestId"*/, 0, 0);
}


int32_t QuestScriptEntity__GetFolderId(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( this->fields.folderType == 1 )
    return this->fields.materialFolderId;
  else
    return -1;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestScriptEntity__GetMaterialName(
        QuestScriptEntity_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  QuestScriptMaterialOverwriteEntity_o *ConditionClearEntity; // x0
  QuestScriptEntity_o *v9; // x8

  if ( (byte_5938E75 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938E75 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v6);
  ConditionClearEntity = QuestScriptMaterialOverwriteMaster__GetConditionClearEntity(
                           (QuestScriptMaterialOverwriteMaster_o *)Master_object,
                           questId,
                           v7);
  if ( ConditionClearEntity )
    v9 = (QuestScriptEntity_o *)ConditionClearEntity;
  else
    v9 = this;
  return v9->fields.name;
}


int32_t QuestScriptEntity__GetMaxPhase(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938E7A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22555/*"maxPhase"*/);
    byte_5938E7A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22555/*"maxPhase"*/, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestScriptEntity__GetUnconditionalMaterialName(
        QuestScriptEntity_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  QuestScriptMaterialOverwriteEntity_o *UnconditionalEntity; // x0
  QuestScriptEntity_o *v9; // x8

  if ( (byte_5938E76 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938E76 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v6);
  UnconditionalEntity = QuestScriptMaterialOverwriteMaster__GetUnconditionalEntity(
                          (QuestScriptMaterialOverwriteMaster_o *)Master_object,
                          questId,
                          v7);
  if ( UnconditionalEntity )
    v9 = (QuestScriptEntity_o *)UnconditionalEntity;
  else
    v9 = this;
  return v9->fields.name;
}


bool QuestScriptEntity__HasScriptReleaseForceFalse(QuestScriptEntity_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *Master_object; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  char v14; // w20
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  System_Collections_Generic_IEnumerator_T__o *v26; // [xsp+18h] [xbp-38h]

  if ( (byte_5938E78 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__getEntityList__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5938E78 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].fields.items) == 0 )
  {
    sub_21FFECC(Master_object, v4);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__);
  v26 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v6);
  for ( i = Enumerator; ; i = v26 )
  {
    klass = i->klass;
    v9 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_13;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v11 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            i,
            *(_QWORD *)(v11 + 8));
    v14 = v12;
    if ( (v12 & 1) == 0 )
      break;
    if ( !v26 )
      sub_21FFECC(v12, v13);
    v15 = v26->klass;
    v16 = *(unsigned __int16 *)&v26->klass->_2.rank;
    if ( *(_WORD *)&v26->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_21;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_21:
      v18 = sub_2237E2C(v26, System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            v26,
            *(_QWORD *)(v18 + 8));
    if ( !v19 )
      sub_21FFECC(0, v20);
    if ( *(_DWORD *)(v19 + 16) == this->fields.id && *(_DWORD *)(v19 + 32) == 92 )
      goto LABEL_29;
  }
  v14 = 0;
LABEL_29:
  if ( v26 )
  {
    v21 = v26->klass;
    v22 = *(unsigned __int16 *)&v26->klass->_2.rank;
    if ( *(_WORD *)&v26->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_34;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_34:
      v24 = sub_2237E2C(v26, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(v26, *(_QWORD *)(v24 + 8));
  }
  return v14 & 1;
}


bool QuestScriptEntity__IsMaterialLatestClear(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938E79 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22534/*"materialLatestClear"*/);
    byte_5938E79 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22534/*"materialLatestClear"*/, 0, 0) > 0;
}


bool QuestScriptEntity__IsNoneMstQuest(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938E7B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23358/*"noneQuest"*/);
    byte_5938E7B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23358/*"noneQuest"*/, 0, 0) > 0;
}


bool QuestScriptEntity__IsOpenDummyFolder(QuestScriptEntity_o *this, const MethodInfo *method)
{
  int32_t IntValue; // w0
  __int64 v4; // x1
  int32_t v5; // w19
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_5938E7F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&StringLiteral_19500/*"dummyFolderOpenCommonReleaseId"*/);
    byte_5938E7F = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19500/*"dummyFolderOpenCommonReleaseId"*/, 0, 0);
  if ( IntValue < 1 )
    return 1;
  v5 = IntValue;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v7);
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v5, 0, 0, 0);
}


System_String_o *QuestScriptEntity__IsQuestStartAction(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938E7C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24865/*"startAction"*/);
    byte_5938E7C = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_24865/*"startAction"*/, 0, 0);
}


bool QuestScriptEntity__TryGetOverwriteGalleryHeaderImgId(
        QuestScriptEntity_o *this,
        int32_t *overwriteImgId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o *v6; // x1
  bool OverwriteMaterialInfo; // w8
  bool result; // w0
  int32_t IntValue; // w0
  System_Collections_Generic_Dictionary_string__object__o *overwriteInfo; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938E82 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21236/*"imgId"*/);
    sub_21FFC50(&StringLiteral_23663/*"overwriteMaterialGalleryHeaderImgInfo"*/);
    byte_5938E82 = 1;
  }
  v6 = (System_String_o *)StringLiteral_23663/*"overwriteMaterialGalleryHeaderImgInfo"*/;
  overwriteInfo = 0;
  *overwriteImgId = 0;
  OverwriteMaterialInfo = QuestScriptEntity__TryGetOverwriteMaterialInfo(this, v6, &overwriteInfo, v3);
  result = 0;
  if ( OverwriteMaterialInfo )
  {
    IntValue = EntityScriptUtil__GetIntValue(overwriteInfo, (System_String_o *)StringLiteral_21236/*"imgId"*/, 0, 0);
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
  System_String_o *v6; // x1
  bool OverwriteMaterialInfo; // w8
  bool result; // w0
  int32_t IntValue; // w0
  System_Collections_Generic_Dictionary_string__object__o *overwriteInfo; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938E80 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21236/*"imgId"*/);
    sub_21FFC50(&StringLiteral_23664/*"overwriteMaterialHeaderImgInfo"*/);
    byte_5938E80 = 1;
  }
  v6 = (System_String_o *)StringLiteral_23664/*"overwriteMaterialHeaderImgInfo"*/;
  overwriteInfo = 0;
  *overwriteImgId = 0;
  OverwriteMaterialInfo = QuestScriptEntity__TryGetOverwriteMaterialInfo(this, v6, &overwriteInfo, v3);
  result = 0;
  if ( OverwriteMaterialInfo )
  {
    IntValue = EntityScriptUtil__GetIntValue(overwriteInfo, (System_String_o *)StringLiteral_21236/*"imgId"*/, 0, 0);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  __int64 naturalAligment; // x10
  Il2CppObject *Master_object; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  Il2CppObject *current; // x8
  __int64 v23; // x11
  Il2CppObject *v24; // x9
  int32_t v25; // w1
  __int64 v26; // x11
  __int64 IntValue; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-50h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_5938E83 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&StringLiteral_18947/*"commonReleaseId"*/);
    byte_5938E83 = 1;
  }
  value = 0;
  memset(&v36, 0, sizeof(v36));
  *overwriteInfo = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)overwriteInfo,
    0,
    (System_String_o *)overwriteInfo,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v13 = value;
      if ( value )
      {
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
        if ( value->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v35,
            (System_Collections_Generic_List_object__o *)v13,
            (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
          v36 = v35;
          v35.fields._list = 0;
          *(_QWORD *)&v35.fields._index = &v36;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v36,
                    (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
          {
            current = v36.fields._current;
            if ( v36.fields._current )
            {
              v23 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
              if ( v36.fields._current->klass->_2.naturalAligment >= (unsigned int)v23 )
              {
                if ( (System_Collections_Generic_Dictionary_string__object__c *)v36.fields._current->klass->_2.typeHierarchy[v23 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
                  v24 = v36.fields._current;
                else
                  v24 = 0;
              }
              else
              {
                v24 = 0;
              }
              *overwriteInfo = (System_Collections_Generic_Dictionary_string__object__o *)v24;
              v26 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
              if ( current->klass->_2.naturalAligment >= (unsigned int)v26 )
              {
                if ( (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[v26 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
                  v25 = (int)current;
                else
                  v25 = 0;
              }
              else
              {
                v25 = 0;
              }
            }
            else
            {
              v25 = 0;
              *overwriteInfo = 0;
            }
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)overwriteInfo, v25, v16, v17, v18, v19, v20, v21);
            if ( *overwriteInfo )
            {
              IntValue = EntityScriptUtil__GetIntValue(*overwriteInfo, (System_String_o *)StringLiteral_18947/*"commonReleaseId"*/, 0, 0);
              if ( !(_DWORD)IntValue )
                goto LABEL_28;
              if ( !Master_object )
                sub_21FFECC(IntValue, (unsigned int)IntValue);
              if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, IntValue, 0, 0, 0) )
              {
LABEL_28:
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v36,
                  (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
                LOBYTE(script) = 1;
                return (char)script;
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v36,
            (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
          *overwriteInfo = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)overwriteInfo, 0, v28, v29, v30, v31, v32, v33);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v10; // w1
  const MethodInfo *v11; // x3
  System_String_o *StringValue; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_Dictionary_string__object__o *overwriteInfo; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5938E81 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23220/*"name"*/);
    sub_21FFC50(&StringLiteral_23662/*"overwriteMaterialFolderNameInfo"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938E81 = 1;
  }
  v10 = (int)StringLiteral_1/*""*/;
  overwriteInfo = 0;
  *overwriteName = (System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)overwriteName, v10, (System_String_o *)method, v3, v4, v5, v6, v7);
  if ( QuestScriptEntity__TryGetOverwriteMaterialInfo(this, (System_String_o *)StringLiteral_23662/*"overwriteMaterialFolderNameInfo"*/, &overwriteInfo, v11) )
  {
    StringValue = EntityScriptUtil__GetStringValue(overwriteInfo, (System_String_o *)StringLiteral_23220/*"name"*/, 0, 0);
    *overwriteName = StringValue;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)overwriteName, (int32_t)StringValue, v13, v14, v15, v16, v17, v18);
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