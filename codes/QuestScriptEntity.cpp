void __fastcall QuestScriptEntity___ctor(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B707 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B707 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_Int32_array *__fastcall QuestScriptEntity__BranchScripts(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B705 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17439/*"branchScripts"*/);
    byte_4A5B705 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_17439/*"branchScripts"*/, 0LL, 0LL);
}


bool __fastcall QuestScriptEntity__CheckScriptRelease(QuestScriptEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x19
  System_Collections_Generic_List_object__o *v4; // x20
  Il2CppClass *klass; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v9; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x8
  QuestScriptReleaseEntity_c *v22; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11
  Il2CppClass **v27; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  const MethodInfo *v32; // x1
  int v33; // w19
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5B6FF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_QuestScriptReleaseEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__get_Current__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
    sub_1B885B0(&QuestScriptReleaseEntity_TypeInfo);
    byte_4A5B6FF = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  if ( !Master_object )
    goto LABEL_51;
  klass = Master_object[2].klass;
  if ( !klass )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)klass,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v7);
  while ( 1 )
  {
    v9 = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v9->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_12;
      }
      p_method = (__int64)&v9->vtable[*p_offset].method;
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
          goto LABEL_19;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_19:
      v16 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    v21 = v17;
    if ( !v17 )
      goto LABEL_47;
    v22 = QuestScriptReleaseEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptReleaseEntity_TypeInfo )
    {
      sub_1B88ACC(v17);
LABEL_47:
      sub_1B8880C(v17, v18);
    }
    if ( *(_DWORD *)(v17 + 16) == this->fields.id )
    {
      if ( !v4 )
        sub_1B8880C(v17, QuestScriptReleaseEntity_TypeInfo);
      items = v4->fields._items;
      v25 = Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__;
      ++v4->fields._version;
      if ( !items )
        sub_1B8880C(v17, v22);
      size = v4->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          (Il2CppObject *)v17,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v4->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v21;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), v21, v19, v20);
      }
    }
  }
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
        goto LABEL_34;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_34:
    v31 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  klass = (Il2CppClass *)System_Linq_Enumerable__Any_object_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)v4,
                           (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_QuestScriptReleaseEntity___);
  if ( ((unsigned __int8)klass & 1) == 0 )
    return 1;
  if ( !v4 )
LABEL_51:
    sub_1B8880C(klass, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    v4,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__MoveNext__) )
  {
    if ( !v35.fields._current )
      sub_1B8880C(0LL, v32);
    if ( !QuestScriptReleaseEntity__IsOpen((QuestScriptReleaseEntity_o *)v35.fields._current, v32) )
    {
      v33 = 8;
      goto LABEL_45;
    }
  }
  v33 = 9;
LABEL_45:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__Dispose__);
  return v33 != 8;
}


System_String_o *__fastcall QuestScriptEntity__CreatePK(
        int32_t id,
        int32_t folderType,
        int32_t materialFolderId,
        int32_t parentWarId,
        const MethodInfo *method)
{
  if ( (byte_4A5B706 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4A5B706 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           folderType,
           materialFolderId,
           parentWarId,
           (const MethodInfo_2E7E47C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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


System_String_o *__fastcall QuestScriptEntity__GetMaterialName(
        QuestScriptEntity_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  QuestScriptMaterialOverwriteEntity_o *ConditionClearEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_4A5B6FD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5B6FD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v6);
  ConditionClearEntity = QuestScriptMaterialOverwriteMaster__GetConditionClearEntity(
                           (QuestScriptMaterialOverwriteMaster_o *)Master_object,
                           questId,
                           v7);
  p_name = &this->fields.name;
  if ( ConditionClearEntity )
    p_name = &ConditionClearEntity->fields.overwriteName;
  return *p_name;
}


int32_t __fastcall QuestScriptEntity__GetMaxPhase(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B702 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21352/*"maxPhase"*/);
    byte_4A5B702 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21352/*"maxPhase"*/, 0, 0LL);
}


System_String_o *__fastcall QuestScriptEntity__GetUnconditionalMaterialName(
        QuestScriptEntity_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  QuestScriptMaterialOverwriteEntity_o *UnconditionalEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_4A5B6FE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5B6FE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v6);
  UnconditionalEntity = QuestScriptMaterialOverwriteMaster__GetUnconditionalEntity(
                          (QuestScriptMaterialOverwriteMaster_o *)Master_object,
                          questId,
                          v7);
  p_name = &this->fields.name;
  if ( UnconditionalEntity )
    p_name = &UnconditionalEntity->fields.overwriteName;
  return *p_name;
}


bool __fastcall QuestScriptEntity__HasScriptReleaseForceFalse(QuestScriptEntity_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *Master_object; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v11; // w21
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  _DWORD *v16; // x0
  __int64 v17; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0

  if ( (byte_4A5B700 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&QuestScriptReleaseEntity_TypeInfo);
    byte_4A5B700 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].monitor) == 0LL )
  {
    sub_1B8880C(Master_object, v4);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v11 & 1) == 0 )
      break;
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
          goto LABEL_19;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_19:
      v15 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                      Enumerator,
                      *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptReleaseEntity_TypeInfo )
    {
      sub_1B88ACC(v16);
LABEL_36:
      sub_1B8880C(v16, v17);
    }
    if ( v16[4] == this->fields.id && v16[8] == 92 )
      goto LABEL_28;
  }
  v11 = 0;
LABEL_28:
  v19 = Enumerator->klass;
  v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_32;
    }
    v22 = (__int64)&v19->vtable[*v21].method;
  }
  else
  {
LABEL_32:
    v22 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
  return v11 & 1;
}


bool __fastcall QuestScriptEntity__IsMaterialLatestClear(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B701 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21332/*"materialLatestClear"*/);
    byte_4A5B701 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21332/*"materialLatestClear"*/, 0, 0LL) > 0;
}


bool __fastcall QuestScriptEntity__IsNoneMstQuest(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B703 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22121/*"noneQuest"*/);
    byte_4A5B703 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22121/*"noneQuest"*/, 0, 0LL) > 0;
}


System_String_o *__fastcall QuestScriptEntity__IsQuestStartAction(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B704 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23484/*"startAction"*/);
    byte_4A5B704 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_23484/*"startAction"*/, 0LL, 0LL);
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