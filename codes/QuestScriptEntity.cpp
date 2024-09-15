void __fastcall QuestScriptEntity___ctor(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E4E7 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataEntityBase_string___ctor__, method);
    byte_4A2E4E7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30FF5F8 *)Method_DataEntityBase_string___ctor__);
}


System_Int32_array *__fastcall QuestScriptEntity__BranchScripts(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E4E5 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_17433/*"branchScripts"*/, method);
    byte_4A2E4E5 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_17433/*"branchScripts"*/, 0LL, 0LL);
}


bool __fastcall QuestScriptEntity__CheckScriptRelease(QuestScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
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
  Il2CppObject *Master_object; // x19
  System_Collections_Generic_List_object__o *v18; // x20
  Il2CppClass *klass; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x8
  QuestScriptReleaseEntity_c *v36; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v39; // x10
  __int64 size; // x11
  Il2CppClass **v41; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0
  const MethodInfo *v46; // x1
  int v47; // w19
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A2E4DF & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B761C0(&Method_DataManager_GetMaster_QuestScriptReleaseMaster___, v3);
    sub_1B761C0(&DataManager_TypeInfo, v4);
    sub_1B761C0(&Method_System_Linq_Enumerable_Any_QuestScriptReleaseEntity___, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__Dispose__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__MoveNext__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__get_Current__, v8);
    sub_1B761C0(&System_IDisposable_TypeInfo, v9);
    sub_1B761C0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__, v12);
    sub_1B761C0(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__GetEnumerator__, v13);
    sub_1B761C0(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__, v14);
    sub_1B761C0(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo, v15);
    sub_1B761C0(&QuestScriptReleaseEntity_TypeInfo, v16);
    byte_4A2E4DF = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  if ( !Master_object )
    goto LABEL_51;
  klass = Master_object[2].klass;
  if ( !klass )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)klass,
                 (const MethodInfo_309D0A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B7641C(0LL, v21);
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
      p_method = sub_1BC81A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_19;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_19:
      v30 = sub_1BC81A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
            Enumerator,
            *(_QWORD *)(v30 + 8));
    v35 = v31;
    if ( !v31 )
      goto LABEL_47;
    v36 = QuestScriptReleaseEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v31 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v31 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptReleaseEntity_TypeInfo )
    {
      sub_1B766DC(v31);
LABEL_47:
      sub_1B7641C(v31, v32);
    }
    if ( *(_DWORD *)(v31 + 16) == this->fields.id )
    {
      if ( !v18 )
        sub_1B7641C(v31, QuestScriptReleaseEntity_TypeInfo);
      items = v18->fields._items;
      v39 = Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__;
      ++v18->fields._version;
      if ( !items )
        sub_1B7641C(v31, v36);
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)v31,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v35;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v41 + 4), v35, v33, v34);
      }
    }
  }
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
        goto LABEL_34;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_34:
    v45 = sub_1BC81A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(Enumerator, *(_QWORD *)(v45 + 8));
  klass = (Il2CppClass *)System_Linq_Enumerable__Any_object_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                           (const MethodInfo_2E6FDDC *)Method_System_Linq_Enumerable_Any_QuestScriptReleaseEntity___);
  if ( ((unsigned __int8)klass & 1) == 0 )
    return 1;
  if ( !v18 )
LABEL_51:
    sub_1B7641C(klass, v20);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    v18,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v49,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__MoveNext__) )
  {
    if ( !v49.fields._current )
      sub_1B7641C(0LL, v46);
    if ( !QuestScriptReleaseEntity__IsOpen((QuestScriptReleaseEntity_o *)v49.fields._current, v46) )
    {
      v47 = 8;
      goto LABEL_45;
    }
  }
  v47 = 9;
LABEL_45:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__Dispose__);
  return v47 != 8;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestScriptEntity__CreatePK(
        int32_t id,
        int32_t folderType,
        int32_t materialFolderId,
        int32_t parentWarId,
        const MethodInfo *method)
{
  if ( (byte_4A2E4E6 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&folderType);
    byte_4A2E4E6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           folderType,
           materialFolderId,
           parentWarId,
           (const MethodInfo_2E60F7C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall QuestScriptEntity__CreatePrimaryKey(QuestScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return QuestScriptEntity__CreatePK(
           this->fields.id,
           this->fields.folderType,
           this->fields.materialFolderId,
           this->fields.parentWarId,
           v2);
}


int32_t __fastcall QuestScriptEntity__GetFolderId(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( this->fields.folderType == 1 )
    return this->fields.materialFolderId;
  else
    return -1;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestScriptEntity__GetMaterialName(
        QuestScriptEntity_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  QuestScriptMaterialOverwriteEntity_o *ConditionClearEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_4A2E4DD & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___, *(_QWORD *)&questId);
    sub_1B761C0(&DataManager_TypeInfo, v5);
    byte_4A2E4DD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
  if ( !Master_object )
    sub_1B7641C(0LL, v7);
  ConditionClearEntity = QuestScriptMaterialOverwriteMaster__GetConditionClearEntity(
                           (QuestScriptMaterialOverwriteMaster_o *)Master_object,
                           questId,
                           v8);
  p_name = &this->fields.name;
  if ( ConditionClearEntity )
    p_name = &ConditionClearEntity->fields.overwriteName;
  return *p_name;
}


int32_t __fastcall QuestScriptEntity__GetMaxPhase(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E4E2 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_21345/*"maxPhase"*/, method);
    byte_4A2E4E2 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21345/*"maxPhase"*/, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestScriptEntity__GetUnconditionalMaterialName(
        QuestScriptEntity_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  QuestScriptMaterialOverwriteEntity_o *UnconditionalEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_4A2E4DE & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___, *(_QWORD *)&questId);
    sub_1B761C0(&DataManager_TypeInfo, v5);
    byte_4A2E4DE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
  if ( !Master_object )
    sub_1B7641C(0LL, v7);
  UnconditionalEntity = QuestScriptMaterialOverwriteMaster__GetUnconditionalEntity(
                          (QuestScriptMaterialOverwriteMaster_o *)Master_object,
                          questId,
                          v8);
  p_name = &this->fields.name;
  if ( UnconditionalEntity )
    p_name = &UnconditionalEntity->fields.overwriteName;
  return *p_name;
}


bool __fastcall QuestScriptEntity__HasScriptReleaseForceFalse(QuestScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *Master_object; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v17; // w21
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  _DWORD *v22; // x0
  __int64 v23; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0

  if ( (byte_4A2E4E0 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B761C0(&Method_DataManager_GetMaster_QuestScriptReleaseMaster___, v3);
    sub_1B761C0(&DataManager_TypeInfo, v4);
    sub_1B761C0(&System_IDisposable_TypeInfo, v5);
    sub_1B761C0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B761C0(&QuestScriptReleaseEntity_TypeInfo, v8);
    byte_4A2E4E0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].monitor) == 0LL )
  {
    sub_1B7641C(Master_object, v10);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_309D0A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B7641C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BC81A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v17 & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_19;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_19:
      v21 = sub_1BC81A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v22 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                      Enumerator,
                      *(_QWORD *)(v21 + 8));
    if ( !v22 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v22 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v22 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptReleaseEntity_TypeInfo )
    {
      sub_1B766DC(v22);
LABEL_36:
      sub_1B7641C(v22, v23);
    }
    if ( v22[4] == this->fields.id && v22[8] == 92 )
      goto LABEL_28;
  }
  v17 = 0;
LABEL_28:
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_32;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_32:
    v28 = sub_1BC81A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return v17 & 1;
}


bool __fastcall QuestScriptEntity__IsMaterialLatestClear(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E4E1 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_21325/*"materialLatestClear"*/, method);
    byte_4A2E4E1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21325/*"materialLatestClear"*/, 0, 0LL) > 0;
}


bool __fastcall QuestScriptEntity__IsNoneMstQuest(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E4E3 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22112/*"noneQuest"*/, method);
    byte_4A2E4E3 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22112/*"noneQuest"*/, 0, 0LL) > 0;
}


System_String_o *__fastcall QuestScriptEntity__IsQuestStartAction(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E4E4 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_23472/*"startAction"*/, method);
    byte_4A2E4E4 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_23472/*"startAction"*/, 0LL, 0LL);
}


int32_t __fastcall QuestScriptEntity__getQuestId(QuestScriptEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall QuestScriptEntity__isMateiralRegistWithEventId(
        QuestScriptEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  return this->fields.folderType != 2 || this->fields.materialFolderId == eventId;
}