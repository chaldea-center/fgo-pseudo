void SkillMaster___ctor(SkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF253 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
    byte_4CEF253 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    56,
    (const MethodInfo_342BFD8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
}


bool SkillMaster__IsSkippable(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4CEF255 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_4CEF255 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsSkippable((SkillEntity_o *)Entity, v6);
  return (char)Entity;
}


bool SkillMaster__IsWarBoardForcePassiveEveryBattle(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4CEF256 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_4CEF256 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsWarBoardForcePassiveEveryBattle((SkillEntity_o *)Entity, v6);
  return (char)Entity;
}


void SkillMaster__LinkToSkillAddEntity(SkillMaster_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x19
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
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
  Il2CppObject *v19; // x22
  _BOOL8 v20; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  Il2CppObject *v30; // x23
  System_Collections_Generic_List_object__o *v31; // x24
  __int64 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Collections_Generic_List_object__o *v40; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0
  _BOOL8 v49; // x0
  __int64 v50; // x1
  SkillMaster___c_c *v51; // x8
  Il2CppClass *v52; // x19
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v54; // x21
  struct SkillMaster___c_StaticFields *static_fields; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v62; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v63; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4CEF254 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_SkillAddEntity__GetEnumerator__);
    sub_1C7BAE8(&System_Comparison_SkillAddEntity__TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_SkillAddMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string__getEntityList__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__get_Current__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_SkillAddEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkillAddEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_SkillAddEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__);
    sub_1C7BAE8(&SkillMaster___c_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
    byte_4CEF254 = 1;
  }
  entity = 0;
  memset(&v63, 0, sizeof(v63));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_SkillAddMaster___);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
  if ( !MasterData_object )
    goto LABEL_64;
  Instance = (DataManager_o *)MasterData_object[2].monitor;
  if ( !Instance )
    goto LABEL_64;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_SkillAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v7);
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
          goto LABEL_11;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v12 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_SkillAddEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_SkillAddEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_18:
      v16 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_SkillAddEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    v19 = (Il2CppObject *)v17;
    if ( !v17 )
      sub_1C7BD40(0, v18);
    v20 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            *(_DWORD *)(v17 + 16),
            (const MethodInfo_342E348 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( v20 )
    {
      if ( !entity )
        sub_1C7BD40(v20, v21);
      if ( !v6 )
        sub_1C7BD40(v20, v21);
      v22 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v6,
              (int32_t)entity[1].klass,
              (const MethodInfo_3487904 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
      if ( !v22 )
      {
        if ( !entity )
          sub_1C7BD40(v22, v23);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v6,
          (int32_t)entity[1].klass,
          entity,
          (const MethodInfo_34876FC *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
        v30 = entity;
        v31 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SkillAddEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v31,
          (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
        if ( !v30 )
          sub_1C7BD40(v32, v33);
        v30[5].klass = (Il2CppClass *)v31;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v30[5], (int32_t)v31, v34, v35, v36, v37, v38, v39);
      }
      if ( !entity )
        sub_1C7BD40(v22, v23);
      v40 = (System_Collections_Generic_List_object__o *)entity[5].klass;
      if ( !v40 )
        sub_1C7BD40(0, v23);
      items = v40->fields._items;
      v42 = Method_System_Collections_Generic_List_SkillAddEntity__Add__;
      ++v40->fields._version;
      if ( !items )
        sub_1C7BD40(v40, v23);
      size = v40->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v40,
          v19,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        v40->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v19;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v44 + 4), (int32_t)v19, v24, v25, v26, v27, v28, v29);
      }
    }
  }
  v45 = Enumerator->klass;
  v46 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_38;
    }
    v48 = (__int64)&v45->vtable[*v47];
  }
  else
  {
LABEL_38:
    v48 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(
                                Enumerator,
                                *(_QWORD *)(v48 + 8));
  if ( !v6
    || (Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                      v6,
                                      (const MethodInfo_3487520 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__)) == 0 )
  {
LABEL_64:
    sub_1C7BD40(Instance, v4);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v62,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_3B79D54 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
  v63 = v62;
  while ( 1 )
  {
    v49 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v63,
            (const MethodInfo_35E2804 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    if ( !v49 )
      break;
    if ( !v63.fields._currentValue )
      sub_1C7BD40(v49, v50);
    v51 = SkillMaster___c_TypeInfo;
    v52 = v63.fields._currentValue[5].klass;
    if ( !SkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillMaster___c_TypeInfo);
      v51 = SkillMaster___c_TypeInfo;
    }
    _9__2_0 = (System_Comparison_T__o *)v51->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        v51 = SkillMaster___c_TypeInfo;
      }
      v54 = (Il2CppObject *)v51->static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_SkillAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v54, Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, 0);
      static_fields = SkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_SkillAddEntity__o *)_9__2_0;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0,
        (int32_t)_9__2_0,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
    }
    if ( !v52 )
      sub_1C7BD40(v49, v50);
    System_Collections_Generic_List_object___Sort_58984640(
      (System_Collections_Generic_List_object__o *)v52,
      _9__2_0,
      (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v63,
    (const MethodInfo_35E2800 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
}


bool SkillMaster__preProcess(SkillMaster_o *this, const MethodInfo *method)
{
  SkillMaster__LinkToSkillAddEntity(this, method);
  return 1;
}


void SkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEF257 & 1) == 0 )
  {
    sub_1C7BAE8(&SkillMaster___c_TypeInfo);
    byte_4CEF257 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(SkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SkillMaster___c_TypeInfo->static_fields->__9 = (struct SkillMaster___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)SkillMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SkillMaster___c___ctor(SkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t SkillMaster___c___LinkToSkillAddEntity_b__2_0(
        SkillMaster___c_o *this,
        SkillAddEntity_o *x,
        SkillAddEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1C7BD40(this, x);
  return y->fields.priority - x->fields.priority;
}