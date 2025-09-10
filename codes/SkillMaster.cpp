void SkillMaster___ctor(SkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27EAE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
    byte_4C27EAE = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    56,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
}


bool SkillMaster__IsSkippable(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C27EB0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_4C27EB0 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsSkippable((SkillEntity_o *)Entity, v6);
  return (char)Entity;
}


bool SkillMaster__IsWarBoardForcePassiveEveryBattle(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C27EB1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_4C27EB1 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  __int64 v17; // x1
  __int64 v18; // x22
  int32_t v19; // w23
  _BOOL8 v20; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x23
  System_Collections_Generic_List_object__o *v27; // x24
  __int64 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_object__o *v32; // x0
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  _BOOL8 v41; // x0
  __int64 v42; // x1
  SkillMaster___c_c *v43; // x8
  Il2CppClass *v44; // x19
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v46; // x21
  struct SkillMaster___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v50; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v51; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C27EAF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_SkillAddEntity__GetEnumerator__);
    sub_1C2D490(&System_Comparison_SkillAddEntity__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillAddMaster___);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string__getEntityList__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__get_Current__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_SkillAddEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillAddEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_SkillAddEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&SkillEntity_TypeInfo);
    sub_1C2D490(&Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__);
    sub_1C2D490(&SkillMaster___c_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
    byte_4C27EAF = 1;
  }
  entity = 0;
  memset(&v51, 0, sizeof(v51));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillAddMaster___);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
  if ( !MasterData_object )
    goto LABEL_66;
  Instance = (DataManager_o *)MasterData_object[2].monitor;
  if ( !Instance )
    goto LABEL_66;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_SkillAddEntity__GetEnumerator__);
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
          goto LABEL_11;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
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
      v16 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_SkillAddEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    if ( !v18 )
      sub_1C2D6EC(0, v17);
    v19 = *(_DWORD *)(v18 + 16);
    if ( !SkillEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SkillEntity_TypeInfo);
    v20 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            v19,
            (const MethodInfo_3387DE4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( v20 )
    {
      if ( !entity )
        sub_1C2D6EC(v20, v21);
      if ( !v6 )
        sub_1C2D6EC(v20, v21);
      v22 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v6,
              (int32_t)entity[1].klass,
              (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
      if ( !v22 )
      {
        if ( !entity )
          sub_1C2D6EC(v22, v23);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v6,
          (int32_t)entity[1].klass,
          entity,
          (const MethodInfo_33E1268 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
        v26 = entity;
        v27 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SkillAddEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v27,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
        if ( !v26 )
          sub_1C2D6EC(v28, v29);
        v26[5].klass = (Il2CppClass *)v27;
        sub_1C2D434((CGThumbnailListItem_o *)&v26[5], (int32_t)v27, v30, v31);
      }
      if ( !entity )
        sub_1C2D6EC(v22, v23);
      v32 = (System_Collections_Generic_List_object__o *)entity[5].klass;
      if ( !v32 )
        sub_1C2D6EC(0, v23);
      items = v32->fields._items;
      v34 = Method_System_Collections_Generic_List_SkillAddEntity__Add__;
      ++v32->fields._version;
      if ( !items )
        sub_1C2D6EC(v32, v23);
      size = v32->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v32,
          (Il2CppObject *)v18,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v32->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v18;
        sub_1C2D434((CGThumbnailListItem_o *)(v36 + 4), v18, v24, v25);
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_40;
    }
    v40 = (__int64)&v37->vtable[*v39];
  }
  else
  {
LABEL_40:
    v40 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                                Enumerator,
                                *(_QWORD *)(v40 + 8));
  if ( !v6
    || (Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                      v6,
                                      (const MethodInfo_33E108C *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__)) == 0 )
  {
LABEL_66:
    sub_1C2D6EC(Instance, v4);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v50,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_3AC041C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
  v51 = v50;
  while ( 1 )
  {
    v41 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v51,
            (const MethodInfo_3538D64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    if ( !v41 )
      break;
    if ( !v51.fields._currentValue )
      sub_1C2D6EC(v41, v42);
    v43 = SkillMaster___c_TypeInfo;
    v44 = v51.fields._currentValue[5].klass;
    if ( !SkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillMaster___c_TypeInfo);
      v43 = SkillMaster___c_TypeInfo;
    }
    _9__2_0 = (System_Comparison_T__o *)v43->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43);
        v43 = SkillMaster___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v43->static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_SkillAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v46, Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, 0);
      static_fields = SkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_SkillAddEntity__o *)_9__2_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v48, v49);
    }
    if ( !v44 )
      sub_1C2D6EC(v41, v42);
    System_Collections_Generic_List_object___Sort_58242632(
      (System_Collections_Generic_List_object__o *)v44,
      _9__2_0,
      (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v51,
    (const MethodInfo_3538D60 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
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

  if ( (byte_4C27EB2 & 1) == 0 )
  {
    sub_1C2D490(&SkillMaster___c_TypeInfo);
    byte_4C27EB2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(SkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SkillMaster___c_TypeInfo->static_fields->__9 = (struct SkillMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)SkillMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, x);
  return y->fields.priority - x->fields.priority;
}