void SkillMaster___ctor(SkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43BAA & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
    byte_4C43BAA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    56,
    (const MethodInfo_339ED7C *)Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
}


bool SkillMaster__IsSkippable(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C43BAC & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_4C43BAC = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsSkippable((SkillEntity_o *)Entity, v6);
  return (char)Entity;
}


bool SkillMaster__IsWarBoardForcePassiveEveryBattle(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C43BAD & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_4C43BAD = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsWarBoardForcePassiveEveryBattle((SkillEntity_o *)Entity, v6);
  return (char)Entity;
}


void SkillMaster__LinkToSkillAddEntity(SkillMaster_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x19
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x22
  int32_t v16; // w23
  _BOOL8 v17; // x0
  _BOOL8 v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x23
  System_Collections_Generic_List_object__o *v22; // x24
  __int64 v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_object__o *v26; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  _BOOL8 v35; // x0
  SkillMaster___c_c *v36; // x8
  Il2CppClass *v37; // x19
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v39; // x21
  struct SkillMaster___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v43; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v44; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C43BAB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_SkillAddEntity__GetEnumerator__);
    sub_1C37058(&System_Comparison_SkillAddEntity__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_SkillAddMaster___);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string__getEntityList__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__get_Current__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_SkillAddEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_SkillAddEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_SkillAddEntity__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&SkillEntity_TypeInfo);
    sub_1C37058(&Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__);
    sub_1C37058(&SkillMaster___c_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
    byte_4C43BAB = 1;
  }
  entity = 0;
  memset(&v44, 0, sizeof(v44));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillAddMaster___);
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
  if ( !MasterData_object )
    goto LABEL_66;
  Instance = (DataManager_o *)MasterData_object[2].monitor;
  if ( !Instance )
    goto LABEL_66;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_SkillAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
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
          goto LABEL_11;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v10 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            Enumerator,
            *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_SkillAddEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_SkillAddEntity__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_18;
      }
      v14 = (__int64)&v11->vtable[*v13];
    }
    else
    {
LABEL_18:
      v14 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_SkillAddEntity__TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    if ( !v15 )
      sub_1C372B4(0);
    v16 = *(_DWORD *)(v15 + 16);
    if ( !SkillEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SkillEntity_TypeInfo);
    v17 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            v16,
            (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( v17 )
    {
      if ( !entity )
        sub_1C372B4(v17);
      if ( !v5 )
        sub_1C372B4(v17);
      v18 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v5,
              (int32_t)entity[1].klass,
              (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
      if ( !v18 )
      {
        if ( !entity )
          sub_1C372B4(v18);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v5,
          (int32_t)entity[1].klass,
          entity,
          (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
        v21 = entity;
        v22 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SkillAddEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v22,
          (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
        if ( !v21 )
          sub_1C372B4(v23);
        v21[5].klass = (Il2CppClass *)v22;
        sub_1C36FFC((CGThumbnailListItem_o *)&v21[5], (int32_t)v22, v24, v25);
      }
      if ( !entity )
        sub_1C372B4(v18);
      v26 = (System_Collections_Generic_List_object__o *)entity[5].klass;
      if ( !v26 )
        sub_1C372B4(0);
      items = v26->fields._items;
      v28 = Method_System_Collections_Generic_List_SkillAddEntity__Add__;
      ++v26->fields._version;
      if ( !items )
        sub_1C372B4(v26);
      size = v26->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          (Il2CppObject *)v15,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v26->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v15;
        sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 4), v15, v19, v20);
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_40;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_40:
    v34 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                Enumerator,
                                *(_QWORD *)(v34 + 8));
  if ( !v5
    || (Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                      v5,
                                      (const MethodInfo_33FA394 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__)) == 0 )
  {
LABEL_66:
    sub_1C372B4(Instance);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v43,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_3AD998C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
  v44 = v43;
  while ( 1 )
  {
    v35 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v44,
            (const MethodInfo_355206C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    if ( !v35 )
      break;
    if ( !v44.fields._currentValue )
      sub_1C372B4(v35);
    v36 = SkillMaster___c_TypeInfo;
    v37 = v44.fields._currentValue[5].klass;
    if ( !SkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillMaster___c_TypeInfo);
      v36 = SkillMaster___c_TypeInfo;
    }
    _9__2_0 = (System_Comparison_T__o *)v36->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        v36 = SkillMaster___c_TypeInfo;
      }
      v39 = (Il2CppObject *)v36->static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_SkillAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v39, Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, 0);
      static_fields = SkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_SkillAddEntity__o *)_9__2_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v41, v42);
    }
    if ( !v37 )
      sub_1C372B4(v35);
    System_Collections_Generic_List_object___Sort_58346216(
      (System_Collections_Generic_List_object__o *)v37,
      _9__2_0,
      (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v44,
    (const MethodInfo_3552068 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C43BAE & 1) == 0 )
  {
    sub_1C37058(&SkillMaster___c_TypeInfo);
    byte_4C43BAE = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(SkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SkillMaster___c_TypeInfo->static_fields->__9 = (struct SkillMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)SkillMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return y->fields.priority - x->fields.priority;
}