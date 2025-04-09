void __fastcall SkillMaster___ctor(SkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB998 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__, method);
    byte_49BB998 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    56,
    (const MethodInfo_319B678 *)Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillMaster__IsSkippable(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_49BB99A & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, *(_QWORD *)&skillId);
    byte_49BB99A = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_319D99C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsSkippable((SkillEntity_o *)Entity, v6);
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillMaster__IsWarBoardForcePassiveEveryBattle(
        SkillMaster_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_49BB99B & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, *(_QWORD *)&skillId);
    byte_49BB99B = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_319D99C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsWarBoardForcePassiveEveryBattle((SkillEntity_o *)Entity, v6);
  return (char)Entity;
}


void __fastcall SkillMaster__LinkToSkillAddEntity(SkillMaster_o *this, const MethodInfo *method)
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  Il2CppObject *MasterData_object; // x19
  System_Collections_Generic_Dictionary_int__object__o *v30; // x20
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x22
  int32_t v43; // w23
  _BOOL8 v44; // x0
  __int64 v45; // x1
  _BOOL8 v46; // x0
  __int64 v47; // x1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  Il2CppObject *v50; // x23
  System_Collections_Generic_List_object__o *v51; // x24
  __int64 v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  System_Collections_Generic_List_object__o *v56; // x0
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x8
  System_Collections_Generic_IEnumerator_T__c *v61; // x8
  __int64 v62; // x9
  int32_t *v63; // x10
  __int64 v64; // x0
  _BOOL8 v65; // x0
  __int64 v66; // x1
  SkillMaster___c_c *v67; // x8
  Il2CppClass *v68; // x19
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v70; // x21
  struct SkillMaster___c_StaticFields *static_fields; // x0
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v74; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v75; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_49BB999 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_SkillAddEntity__GetEnumerator__, method);
    sub_1B4CF90(&System_Comparison_SkillAddEntity__TypeInfo, v3);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillAddMaster___, v4);
    sub_1B4CF90(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5);
    sub_1B4CF90(&Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string__getEntityList__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__, v10);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo, v11);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__,
      v12);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__,
      v13);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__get_Current__,
      v14);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v15);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_SkillAddEntity__TypeInfo, v16);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SkillAddEntity__Add__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SkillAddEntity__Sort__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SkillAddEntity___ctor__, v20);
    sub_1B4CF90(&System_Collections_Generic_List_SkillAddEntity__TypeInfo, v21);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B4CF90(&SkillEntity_TypeInfo, v23);
    sub_1B4CF90(&Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, v24);
    sub_1B4CF90(&SkillMaster___c_TypeInfo, v25);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__, v26);
    byte_49BB999 = 1;
  }
  entity = 0LL;
  memset(&v75, 0, sizeof(v75));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillAddMaster___);
  v30 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v30,
    (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
  if ( !MasterData_object )
    goto LABEL_66;
  Instance = (DataManager_o *)MasterData_object[2].monitor;
  if ( !Instance )
    goto LABEL_66;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_SkillAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v31);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        p_offset += 4;
        if ( !v34 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v37 = Enumerator->klass;
    v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_SkillAddEntity__c **)v39 - 1) != System_Collections_Generic_IEnumerator_SkillAddEntity__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_18;
      }
      v40 = (__int64)&v37->vtable[*v39].method;
    }
    else
    {
LABEL_18:
      v40 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_SkillAddEntity__TypeInfo, 0LL);
    }
    v42 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
            Enumerator,
            *(_QWORD *)(v40 + 8));
    if ( !v42 )
      sub_1B4D1EC(0LL, v41);
    v43 = *(_DWORD *)(v42 + 16);
    if ( !SkillEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SkillEntity_TypeInfo);
    v44 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            v43,
            (const MethodInfo_319D9E8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( v44 )
    {
      if ( !entity )
        sub_1B4D1EC(v44, v45);
      if ( !v30 )
        sub_1B4D1EC(v44, v45);
      v46 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v30,
              (int32_t)entity[1].klass,
              (const MethodInfo_31F7074 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
      if ( !v46 )
      {
        if ( !entity )
          sub_1B4D1EC(v46, v47);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v30,
          (int32_t)entity[1].klass,
          entity,
          (const MethodInfo_31F6E6C *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
        v50 = entity;
        v51 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SkillAddEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v51,
          (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
        if ( !v50 )
          sub_1B4D1EC(v52, v53);
        v50[5].klass = (Il2CppClass *)v51;
        sub_1B4CF34((CGThumbnailListItem_o *)&v50[5], (int32_t)v51, v54, v55);
      }
      if ( !entity )
        sub_1B4D1EC(v46, v47);
      v56 = (System_Collections_Generic_List_object__o *)entity[5].klass;
      if ( !v56 )
        sub_1B4D1EC(0LL, v47);
      items = v56->fields._items;
      v58 = Method_System_Collections_Generic_List_SkillAddEntity__Add__;
      ++v56->fields._version;
      if ( !items )
        sub_1B4D1EC(v56, v47);
      size = v56->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v56,
          (Il2CppObject *)v42,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = &items->obj.klass + size;
        v56->fields._size = size + 1;
        v60[4] = (Il2CppClass *)v42;
        sub_1B4CF34((CGThumbnailListItem_o *)(v60 + 4), v42, v48, v49);
      }
    }
  }
  v61 = Enumerator->klass;
  v62 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v63 = &v61->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
    {
      --v62;
      v63 += 4;
      if ( !v62 )
        goto LABEL_40;
    }
    v64 = (__int64)&v61->vtable[*v63].method;
  }
  else
  {
LABEL_40:
    v64 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v64)(
                                Enumerator,
                                *(_QWORD *)(v64 + 8));
  if ( !v30
    || (Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                      v30,
                                      (const MethodInfo_31F6C90 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__)) == 0LL )
  {
LABEL_66:
    sub_1B4D1EC(Instance, v28);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v74,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_3878284 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
  v75 = v74;
  while ( 1 )
  {
    v65 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v75,
            (const MethodInfo_33458A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    if ( !v65 )
      break;
    if ( !v75.fields._currentValue )
      sub_1B4D1EC(v65, v66);
    v67 = SkillMaster___c_TypeInfo;
    v68 = v75.fields._currentValue[5].klass;
    if ( !SkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillMaster___c_TypeInfo);
      v67 = SkillMaster___c_TypeInfo;
    }
    _9__2_0 = (System_Comparison_T__o *)v67->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v67->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v67);
        v67 = SkillMaster___c_TypeInfo;
      }
      v70 = (Il2CppObject *)v67->static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_SkillAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v70, Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, 0LL);
      static_fields = SkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_SkillAddEntity__o *)_9__2_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v72, v73);
    }
    if ( !v68 )
      sub_1B4D1EC(v65, v66);
    System_Collections_Generic_List_object___Sort_56106144(
      (System_Collections_Generic_List_object__o *)v68,
      _9__2_0,
      (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v75,
    (const MethodInfo_33458A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
}


bool __fastcall SkillMaster__preProcess(SkillMaster_o *this, const MethodInfo *method)
{
  SkillMaster__LinkToSkillAddEntity(this, method);
  return 1;
}


void __fastcall SkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BB99C & 1) == 0 )
  {
    sub_1B4CF90(&SkillMaster___c_TypeInfo, v1);
    byte_49BB99C = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(SkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SkillMaster___c_TypeInfo->static_fields->__9 = (struct SkillMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)SkillMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall SkillMaster___c___ctor(SkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SkillMaster___c___LinkToSkillAddEntity_b__2_0(
        SkillMaster___c_o *this,
        SkillAddEntity_o *x,
        SkillAddEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1B4D1EC(this, x);
  return y->fields.priority - x->fields.priority;
}