void __fastcall StageMaster___ctor(StageMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16CFF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_StageMaster__StageEntity__string___ctor__, method, v2);
    byte_4B16CFF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    16,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_StageMaster__StageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
StageEntity_o *__fastcall StageMaster__GetEntity(
        StageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *PK; // x1

  if ( (byte_4B16CFD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_StageMaster__StageEntity__string__GetEntity__,
      *(_QWORD *)&questId,
      *(_QWORD *)&questPhase);
    sub_1BCA7E0(&StageEntity_TypeInfo, v9, v10);
    byte_4B16CFD = 1;
  }
  if ( !StageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo, *(_QWORD *)&questId);
  PK = (Il2CppObject *)StageEntity__CreatePK(questId, questPhase, wave, *(const MethodInfo **)&wave);
  return (StageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            PK,
                            (const MethodInfo_31B3198 *)Method_DataMasterBase_StageMaster__StageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_StageEntity__o *__fastcall StageMaster__GetEntityListIncludeRemap(
        StageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_object__o *v33; // x19
  __int64 v34; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v36; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  System_Collections_Generic_IEnumerator_T__c *v59; // x8
  __int64 v60; // x9
  int32_t *v61; // x10
  __int64 v62; // x0
  __int64 v63; // x1
  _BOOL8 v64; // x0
  __int64 v65; // x1
  const MethodInfo *v66; // x5
  _BOOL8 v67; // x0
  __int64 v68; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  Il2CppObject *v75; // x1
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+20h] [xbp-80h] BYREF
  StageEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4B16D00 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&questId,
      *(_QWORD *)&questPhase);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ReprintStageMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__get_Current__, v15, v16);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StageEntity__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ReprintStageEntity__GetEnumerator__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StageEntity___ctor__, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_StageEntity__TypeInfo, v29, v30);
    sub_1BCA7E0(&StageEntity_TypeInfo, v31, v32);
    byte_4B16D00 = 1;
  }
  memset(&v82, 0, sizeof(v82));
  entity = 0LL;
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_StageEntity__TypeInfo,
                                                       *(_QWORD *)&questId,
                                                       *(_QWORD *)&questPhase,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_StageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v36);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v39;
        p_offset += 4;
        if ( !v39 )
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
    v42 = Enumerator->klass;
    v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v44 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_16;
      }
      v45 = (__int64)&v42->vtable[*v44].method;
    }
    else
    {
LABEL_16:
      v45 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v46 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
            Enumerator,
            *(_QWORD *)(v45 + 8));
    v53 = v46;
    if ( v46 )
    {
      methodPtr_low = LOBYTE(StageEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v46 + 304LL) >= (unsigned int)methodPtr_low
        && *(StageEntity_c **)(*(_QWORD *)(*(_QWORD *)v46 + 200LL) + 8 * methodPtr_low - 8) == StageEntity_TypeInfo
        && *(_DWORD *)(v46 + 16) == questId
        && *(_DWORD *)(v46 + 20) == questPhase )
      {
        if ( !v33 )
          sub_1BCAA3C(v46, v46);
        items = v33->fields._items;
        v56 = Method_System_Collections_Generic_List_StageEntity__Add__;
        ++v33->fields._version;
        if ( !items )
          sub_1BCAA3C(v46, v46);
        size = v33->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v33,
            (Il2CppObject *)v46,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
        }
        else
        {
          v58 = &items->obj.klass + size;
          v33->fields._size = size + 1;
          v58[4] = (Il2CppClass *)v53;
          sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 4), v53, v47, v48, v49, v50, v51, v52);
        }
      }
    }
  }
  v59 = Enumerator->klass;
  v60 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v61 = &v59->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
    {
      --v60;
      v61 += 4;
      if ( !v60 )
        goto LABEL_32;
    }
    v62 = (__int64)&v59->vtable[*v61].method;
  }
  else
  {
LABEL_32:
    v62 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v62)(Enumerator, *(_QWORD *)(v62 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v63);
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ReprintStageMaster___);
  if ( !list
    || (list = (System_Collections_ObjectModel_Collection_T__o *)ReprintStageMaster__GetEntityList(
                                                                   (ReprintStageMaster_o *)list,
                                                                   questId,
                                                                   questPhase,
                                                                   0LL)) == 0LL )
  {
LABEL_51:
    sub_1BCAA3C(list, v34);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v81,
    (System_Collections_Generic_List_object__o *)list,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ReprintStageEntity__GetEnumerator__);
  v82 = v81;
  while ( 1 )
  {
    v64 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v82,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__MoveNext__);
    if ( !v64 )
      break;
    if ( !v82.fields._current )
      sub_1BCAA3C(v64, v65);
    v67 = StageMaster__TryGetEntity(
            this,
            &entity,
            HIDWORD(v82.fields._current[1].monitor),
            (int32_t)v82.fields._current[2].klass,
            HIDWORD(v82.fields._current[2].klass),
            v66);
    if ( v67 )
    {
      if ( !v33 )
        sub_1BCAA3C(v67, v68);
      v75 = (Il2CppObject *)entity;
      v76 = v33->fields._items;
      v77 = Method_System_Collections_Generic_List_StageEntity__Add__;
      ++v33->fields._version;
      if ( !v76 )
        sub_1BCAA3C(v67, v75);
      v78 = v33->fields._size;
      if ( (unsigned int)v78 >= v76->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          v75,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
      }
      else
      {
        v79 = &v76->obj.klass + v78;
        v33->fields._size = v78 + 1;
        v79[4] = (Il2CppClass *)v75;
        sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 4), (int64_t)v75, v69, v70, v71, v72, v73, v74);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v82,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ReprintStageEntity__Dispose__);
  return (System_Collections_Generic_List_StageEntity__o *)v33;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageMaster__GetWaveCount(
        StageMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t v18; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  _DWORD *v27; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4B16D01 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&questId,
      *(_QWORD *)&questPhase);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    sub_1BCA7E0(&StageEntity_TypeInfo, v13, v14);
    byte_4B16D01 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v16);
  v18 = 1;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_17;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_17:
      v26 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                      Enumerator,
                      *(_QWORD *)(v26 + 8));
    if ( v27 )
    {
      methodPtr_low = LOBYTE(StageEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) >= (unsigned int)methodPtr_low
        && *(StageEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) == StageEntity_TypeInfo
        && v27[4] == questId
        && v27[5] == questPhase
        && v27[8] > v18 )
      {
        v18 = v27[8];
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
        goto LABEL_31;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_31:
    v32 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  return v18;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall StageMaster__TryGetEntity(
        StageMaster_o *this,
        StageEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *PK; // x2

  if ( (byte_4B16CFE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_StageMaster__StageEntity__string__TryGetEntity__, entity, *(_QWORD *)&questId);
    sub_1BCA7E0(&StageEntity_TypeInfo, v11, v12);
    byte_4B16CFE = 1;
  }
  if ( !StageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo, entity);
  PK = (Il2CppObject *)StageEntity__CreatePK(questId, questPhase, wave, *(const MethodInfo **)&questPhase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_StageMaster__StageEntity__string__TryGetEntity__);
}