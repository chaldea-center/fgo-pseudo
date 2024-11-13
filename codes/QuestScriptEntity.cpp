void __fastcall QuestScriptEntity___ctor(QuestScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B167B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B167B8 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


System_Int32_array *__fastcall QuestScriptEntity__BranchScripts(QuestScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B167B6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17612/*"branchScripts"*/, method, v2);
    byte_4B167B6 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_17612/*"branchScripts"*/, 0LL, 0LL);
}


bool __fastcall QuestScriptEntity__CheckScriptRelease(QuestScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v30; // x1
  __int64 v31; // x2
  Il2CppObject *Master_object; // x19
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_List_object__o *v36; // x20
  Il2CppClass *klass; // x0
  __int64 v38; // x1
  __int64 v39; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x8
  QuestScriptReleaseEntity_c *v58; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v61; // x10
  __int64 size; // x11
  Il2CppClass **v63; // x0
  System_Collections_Generic_IEnumerator_T__c *v64; // x8
  __int64 v65; // x9
  int32_t *v66; // x10
  __int64 v67; // x0
  const MethodInfo *v68; // x1
  int v69; // w19
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B167B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestScriptReleaseMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_QuestScriptReleaseEntity___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__Dispose__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__MoveNext__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__get_Current__, v14, v15);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__GetEnumerator__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo, v28, v29);
    sub_1BCA7E0(&QuestScriptReleaseEntity_TypeInfo, v30, v31);
    byte_4B167B0 = 1;
  }
  memset(&v71, 0, sizeof(v71));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
  v36 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo,
                                                       v33,
                                                       v34,
                                                       v35);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  if ( !Master_object )
    goto LABEL_51;
  klass = Master_object[2].klass;
  if ( !klass )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)klass,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v39);
  while ( 1 )
  {
    v41 = Enumerator->klass;
    v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v42;
        p_offset += 4;
        if ( !v42 )
          goto LABEL_12;
      }
      p_method = (__int64)&v41->vtable[*p_offset].method;
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
    v45 = Enumerator->klass;
    v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v47 = &v45->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v47 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_19;
      }
      v48 = (__int64)&v45->vtable[*v47].method;
    }
    else
    {
LABEL_19:
      v48 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v49 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(
            Enumerator,
            *(_QWORD *)(v48 + 8));
    v57 = v49;
    if ( !v49 )
      goto LABEL_47;
    v58 = QuestScriptReleaseEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v49 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v49 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptReleaseEntity_TypeInfo )
    {
      sub_1BCACFC(v49);
LABEL_47:
      sub_1BCAA3C(v49, v50);
    }
    if ( *(_DWORD *)(v49 + 16) == this->fields.id )
    {
      if ( !v36 )
        sub_1BCAA3C(v49, QuestScriptReleaseEntity_TypeInfo);
      items = v36->fields._items;
      v61 = Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__;
      ++v36->fields._version;
      if ( !items )
        sub_1BCAA3C(v49, v58);
      size = v36->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v36,
          (Il2CppObject *)v49,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = &items->obj.klass + size;
        v36->fields._size = size + 1;
        v63[4] = (Il2CppClass *)v57;
        sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 4), v57, v51, v52, v53, v54, v55, v56);
      }
    }
  }
  v64 = Enumerator->klass;
  v65 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v66 = &v64->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
    {
      --v65;
      v66 += 4;
      if ( !v65 )
        goto LABEL_34;
    }
    v67 = (__int64)&v64->vtable[*v66].method;
  }
  else
  {
LABEL_34:
    v67 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v67)(Enumerator, *(_QWORD *)(v67 + 8));
  klass = (Il2CppClass *)System_Linq_Enumerable__Any_object_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)v36,
                           (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_QuestScriptReleaseEntity___);
  if ( ((unsigned __int8)klass & 1) == 0 )
    return 1;
  if ( !v36 )
LABEL_51:
    sub_1BCAA3C(klass, v38);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    v36,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v71,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__MoveNext__) )
  {
    if ( !v71.fields._current )
      sub_1BCAA3C(0LL, v68);
    if ( !QuestScriptReleaseEntity__IsOpen((QuestScriptReleaseEntity_o *)v71.fields._current, v68) )
    {
      v69 = 8;
      goto LABEL_45;
    }
  }
  v69 = 9;
LABEL_45:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v71,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__Dispose__);
  return v69 != 8;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestScriptEntity__CreatePK(
        int32_t id,
        int32_t folderType,
        int32_t materialFolderId,
        int32_t parentWarId,
        const MethodInfo *method)
{
  if ( (byte_4B167B7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataEntityBase_CreateMultiplePK_int__int__int__int___,
      *(_QWORD *)&folderType,
      *(_QWORD *)&materialFolderId);
    byte_4B167B7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           folderType,
           materialFolderId,
           parentWarId,
           (const MethodInfo_2F11804 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  __int64 v6; // x2
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  QuestScriptMaterialOverwriteEntity_o *ConditionClearEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_4B167AE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    byte_4B167AE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v8);
  ConditionClearEntity = QuestScriptMaterialOverwriteMaster__GetConditionClearEntity(
                           (QuestScriptMaterialOverwriteMaster_o *)Master_object,
                           questId,
                           v9);
  p_name = &this->fields.name;
  if ( ConditionClearEntity )
    p_name = &ConditionClearEntity->fields.overwriteName;
  return *p_name;
}


int32_t __fastcall QuestScriptEntity__GetMaxPhase(QuestScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B167B3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21586/*"maxPhase"*/, method, v2);
    byte_4B167B3 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21586/*"maxPhase"*/, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestScriptEntity__GetUnconditionalMaterialName(
        QuestScriptEntity_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  QuestScriptMaterialOverwriteEntity_o *UnconditionalEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_4B167AF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    byte_4B167AF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v8);
  UnconditionalEntity = QuestScriptMaterialOverwriteMaster__GetUnconditionalEntity(
                          (QuestScriptMaterialOverwriteMaster_o *)Master_object,
                          questId,
                          v9);
  p_name = &this->fields.name;
  if ( UnconditionalEntity )
    p_name = &UnconditionalEntity->fields.overwriteName;
  return *p_name;
}


bool __fastcall QuestScriptEntity__HasScriptReleaseForceFalse(QuestScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Collections_ObjectModel_Collection_T__o *Master_object; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v24; // w21
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  _DWORD *v29; // x0
  __int64 v30; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4B167B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestScriptReleaseMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v12, v13);
    sub_1BCA7E0(&QuestScriptReleaseEntity_TypeInfo, v14, v15);
    byte_4B167B1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
  if ( !Master_object
    || (Master_object = (System_Collections_ObjectModel_Collection_T__o *)Master_object[1].monitor) == 0LL )
  {
    sub_1BCAA3C(Master_object, v17);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 Master_object,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v24 & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_19;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_19:
      v28 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v29 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                      Enumerator,
                      *(_QWORD *)(v28 + 8));
    if ( !v29 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v29 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestScriptReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v29 + 200LL) + 8 * methodPtr_low - 8) != QuestScriptReleaseEntity_TypeInfo )
    {
      sub_1BCACFC(v29);
LABEL_36:
      sub_1BCAA3C(v29, v30);
    }
    if ( v29[4] == this->fields.id && v29[8] == 92 )
      goto LABEL_28;
  }
  v24 = 0;
LABEL_28:
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_32;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_32:
    v35 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return v24 & 1;
}


bool __fastcall QuestScriptEntity__IsMaterialLatestClear(QuestScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B167B2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21566/*"materialLatestClear"*/, method, v2);
    byte_4B167B2 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21566/*"materialLatestClear"*/, 0, 0LL) > 0;
}


bool __fastcall QuestScriptEntity__IsNoneMstQuest(QuestScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B167B4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22360/*"noneQuest"*/, method, v2);
    byte_4B167B4 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22360/*"noneQuest"*/, 0, 0LL) > 0;
}


System_String_o *__fastcall QuestScriptEntity__IsQuestStartAction(QuestScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B167B5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23732/*"startAction"*/, method, v2);
    byte_4B167B5 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_23732/*"startAction"*/, 0LL, 0LL);
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