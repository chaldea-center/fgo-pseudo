void __fastcall SkillMaster___ctor(SkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4F005 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__, method);
    byte_4A4F005 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    56,
    (const MethodInfo_3211F5C *)Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillMaster__IsSkippable(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0

  if ( (byte_4A4F007 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, *(_QWORD *)&skillId);
    byte_4A4F007 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_3214280 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsSkippable((SkillEntity_o *)Entity, 0LL);
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillMaster__IsWarBoardForcePassiveEveryBattle(
        SkillMaster_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  Il2CppObject *Entity; // x0

  if ( (byte_4A4F008 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, *(_QWORD *)&skillId);
    byte_4A4F008 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_3214280 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsWarBoardForcePassiveEveryBattle((SkillEntity_o *)Entity, 0LL);
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
  int32_t PK; // w0
  _BOOL8 v45; // x0
  __int64 v46; // x1
  _BOOL8 v47; // x0
  __int64 v48; // x1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  Il2CppObject *v51; // x23
  System_Collections_Generic_List_object__o *v52; // x24
  __int64 v53; // x0
  __int64 v54; // x1
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  System_Collections_Generic_List_object__o *v57; // x0
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x8
  System_Collections_Generic_IEnumerator_T__c *v62; // x8
  __int64 v63; // x9
  int32_t *v64; // x10
  __int64 v65; // x0
  _BOOL8 v66; // x0
  __int64 v67; // x1
  SkillMaster___c_c *v68; // x8
  Il2CppClass *v69; // x19
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v71; // x21
  struct SkillMaster___c_StaticFields *static_fields; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v75; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v76; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A4F006 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_SkillAddEntity__GetEnumerator__, method);
    sub_1B863B8(&System_Comparison_SkillAddEntity__TypeInfo, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_SkillAddMaster___, v4);
    sub_1B863B8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5);
    sub_1B863B8(&Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string__getEntityList__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__, v10);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo, v11);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__,
      v12);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__,
      v13);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__get_Current__,
      v14);
    sub_1B863B8(&System_IDisposable_TypeInfo, v15);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_SkillAddEntity__TypeInfo, v16);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_SkillAddEntity__Add__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_SkillAddEntity__Sort__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_SkillAddEntity___ctor__, v20);
    sub_1B863B8(&System_Collections_Generic_List_SkillAddEntity__TypeInfo, v21);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B863B8(&SkillEntity_TypeInfo, v23);
    sub_1B863B8(&Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, v24);
    sub_1B863B8(&SkillMaster___c_TypeInfo, v25);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__, v26);
    byte_4A4F006 = 1;
  }
  entity = 0LL;
  memset(&v76, 0, sizeof(v76));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SkillAddMaster___);
  v30 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v30,
    (const MethodInfo_326CD90 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
  if ( !MasterData_object )
    goto LABEL_66;
  Instance = (DataManager_o *)MasterData_object[2].monitor;
  if ( !Instance )
    goto LABEL_66;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_31B0EE0 *)Method_System_Collections_ObjectModel_Collection_SkillAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B86614(0LL, v31);
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
      p_method = sub_1BD6B4C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v40 = sub_1BD6B4C(Enumerator, System_Collections_Generic_IEnumerator_SkillAddEntity__TypeInfo, 0LL);
    }
    v42 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
            Enumerator,
            *(_QWORD *)(v40 + 8));
    if ( !v42 )
      sub_1B86614(0LL, v41);
    v43 = *(_DWORD *)(v42 + 16);
    if ( !SkillEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SkillEntity_TypeInfo);
    PK = SkillEntity__CreatePK(v43, 0LL);
    v45 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            PK,
            (const MethodInfo_32142CC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( v45 )
    {
      if ( !entity )
        sub_1B86614(v45, v46);
      if ( !v30 )
        sub_1B86614(v45, v46);
      v47 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v30,
              (int32_t)entity[1].klass,
              (const MethodInfo_326D958 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
      if ( !v47 )
      {
        if ( !entity )
          sub_1B86614(v47, v48);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v30,
          (int32_t)entity[1].klass,
          entity,
          (const MethodInfo_326D750 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
        v51 = entity;
        v52 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_SkillAddEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v52,
          (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
        if ( !v51 )
          sub_1B86614(v53, v54);
        v51[5].klass = (Il2CppClass *)v52;
        sub_1B8635C((CGThumbnailListItem_o *)&v51[5], (int32_t)v52, v55, v56);
      }
      if ( !entity )
        sub_1B86614(v47, v48);
      v57 = (System_Collections_Generic_List_object__o *)entity[5].klass;
      if ( !v57 )
        sub_1B86614(0LL, v48);
      items = v57->fields._items;
      v59 = Method_System_Collections_Generic_List_SkillAddEntity__Add__;
      ++v57->fields._version;
      if ( !items )
        sub_1B86614(v57, v48);
      size = v57->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v57,
          (Il2CppObject *)v42,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
      }
      else
      {
        v61 = &items->obj.klass + size;
        v57->fields._size = size + 1;
        v61[4] = (Il2CppClass *)v42;
        sub_1B8635C((CGThumbnailListItem_o *)(v61 + 4), v42, v49, v50);
      }
    }
  }
  v62 = Enumerator->klass;
  v63 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v64 = &v62->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_40;
    }
    v65 = (__int64)&v62->vtable[*v64].method;
  }
  else
  {
LABEL_40:
    v65 = sub_1BD6B4C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v65)(
                                Enumerator,
                                *(_QWORD *)(v65 + 8));
  if ( !v30
    || (Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                      v30,
                                      (const MethodInfo_326D574 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__)) == 0LL )
  {
LABEL_66:
    sub_1B86614(Instance, v28);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v75,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_39200B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
  v76 = v75;
  while ( 1 )
  {
    v66 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v76,
            (const MethodInfo_33BCA9C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    if ( !v66 )
      break;
    if ( !v76.fields._currentValue )
      sub_1B86614(v66, v67);
    v68 = SkillMaster___c_TypeInfo;
    v69 = v76.fields._currentValue[5].klass;
    if ( !SkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillMaster___c_TypeInfo);
      v68 = SkillMaster___c_TypeInfo;
    }
    _9__2_0 = (System_Comparison_T__o *)v68->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v68->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v68);
        v68 = SkillMaster___c_TypeInfo;
      }
      v71 = (Il2CppObject *)v68->static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_SkillAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v71, Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, 0LL);
      static_fields = SkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_SkillAddEntity__o *)_9__2_0;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v73, v74);
    }
    if ( !v69 )
      sub_1B86614(v66, v67);
    System_Collections_Generic_List_object___Sort_56615964(
      (System_Collections_Generic_List_object__o *)v69,
      _9__2_0,
      (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v76,
    (const MethodInfo_33BCA98 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
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

  if ( (byte_4A4F009 & 1) == 0 )
  {
    sub_1B863B8(&SkillMaster___c_TypeInfo, v1);
    byte_4A4F009 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(SkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SkillMaster___c_TypeInfo->static_fields->__9 = (struct SkillMaster___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)SkillMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B86614(this, x);
  return y->fields.priority - x->fields.priority;
}