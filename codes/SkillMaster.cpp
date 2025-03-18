void __fastcall SkillMaster___ctor(SkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22A6A & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__, method);
    byte_4C22A6A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    56,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillMaster__IsSkippable(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C22A6C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, *(_QWORD *)&skillId);
    byte_4C22A6C = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_329AE48 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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

  if ( (byte_4C22A6D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, *(_QWORD *)&skillId);
    byte_4C22A6D = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_329AE48 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  int64_t v42; // x22
  int32_t v43; // w23
  _BOOL8 v44; // x0
  __int64 v45; // x1
  _BOOL8 v46; // x0
  __int64 v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  Il2CppObject *v54; // x23
  System_Collections_Generic_List_object__o *v55; // x24
  __int64 v56; // x0
  __int64 v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  System_Collections_Generic_List_object__o *v64; // x0
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  Il2CppClass **v68; // x8
  System_Collections_Generic_IEnumerator_T__c *v69; // x8
  __int64 v70; // x9
  int32_t *v71; // x10
  __int64 v72; // x0
  _BOOL8 v73; // x0
  __int64 v74; // x1
  SkillMaster___c_c *v75; // x8
  Il2CppClass *v76; // x19
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v78; // x21
  struct SkillMaster___c_StaticFields *static_fields; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v86; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v87; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C22A6B & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_SkillAddEntity__GetEnumerator__, method);
    sub_1C3B764(&System_Comparison_SkillAddEntity__TypeInfo, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_SkillAddMaster___, v4);
    sub_1C3B764(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5);
    sub_1C3B764(&Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string__getEntityList__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__, v10);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo, v11);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__,
      v12);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__,
      v13);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__get_Current__,
      v14);
    sub_1C3B764(&System_IDisposable_TypeInfo, v15);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_SkillAddEntity__TypeInfo, v16);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_SkillAddEntity__Add__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_SkillAddEntity__Sort__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_SkillAddEntity___ctor__, v20);
    sub_1C3B764(&System_Collections_Generic_List_SkillAddEntity__TypeInfo, v21);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1C3B764(&SkillEntity_TypeInfo, v23);
    sub_1C3B764(&Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, v24);
    sub_1C3B764(&SkillMaster___c_TypeInfo, v25);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__, v26);
    byte_4C22A6B = 1;
  }
  entity = 0LL;
  memset(&v87, 0, sizeof(v87));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_SkillAddMaster___);
  v30 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v30,
    (const MethodInfo_32F41C8 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
  if ( !MasterData_object )
    goto LABEL_66;
  Instance = (DataManager_o *)MasterData_object[2].monitor;
  if ( !Instance )
    goto LABEL_66;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_SkillAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v31);
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
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v40 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_SkillAddEntity__TypeInfo, 0LL);
    }
    v42 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
            Enumerator,
            *(_QWORD *)(v40 + 8));
    if ( !v42 )
      sub_1C3B9C0(0LL, v41);
    v43 = *(_DWORD *)(v42 + 16);
    if ( !SkillEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SkillEntity_TypeInfo);
    v44 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            v43,
            (const MethodInfo_329AE94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( v44 )
    {
      if ( !entity )
        sub_1C3B9C0(v44, v45);
      if ( !v30 )
        sub_1C3B9C0(v44, v45);
      v46 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v30,
              (int32_t)entity[1].klass,
              (const MethodInfo_32F4D90 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
      if ( !v46 )
      {
        if ( !entity )
          sub_1C3B9C0(v46, v47);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v30,
          (int32_t)entity[1].klass,
          entity,
          (const MethodInfo_32F4B88 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
        v54 = entity;
        v55 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_SkillAddEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v55,
          (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
        if ( !v54 )
          sub_1C3B9C0(v56, v57);
        v54[5].klass = (Il2CppClass *)v55;
        sub_1C3B708((PartyOrganizationUtility_o *)&v54[5], (int64_t)v55, v58, v59, v60, v61, v62, v63);
      }
      if ( !entity )
        sub_1C3B9C0(v46, v47);
      v64 = (System_Collections_Generic_List_object__o *)entity[5].klass;
      if ( !v64 )
        sub_1C3B9C0(0LL, v47);
      items = v64->fields._items;
      v66 = Method_System_Collections_Generic_List_SkillAddEntity__Add__;
      ++v64->fields._version;
      if ( !items )
        sub_1C3B9C0(v64, v47);
      size = v64->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v64,
          (Il2CppObject *)v42,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v68 = &items->obj.klass + size;
        v64->fields._size = size + 1;
        v68[4] = (Il2CppClass *)v42;
        sub_1C3B708((PartyOrganizationUtility_o *)(v68 + 4), v42, v48, v49, v50, v51, v52, v53);
      }
    }
  }
  v69 = Enumerator->klass;
  v70 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v71 = &v69->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
    {
      --v70;
      v71 += 4;
      if ( !v70 )
        goto LABEL_40;
    }
    v72 = (__int64)&v69->vtable[*v71].method;
  }
  else
  {
LABEL_40:
    v72 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v72)(
                                Enumerator,
                                *(_QWORD *)(v72 + 8));
  if ( !v30
    || (Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                      v30,
                                      (const MethodInfo_32F49AC *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__)) == 0LL )
  {
LABEL_66:
    sub_1C3B9C0(Instance, v28);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v86,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_39B9954 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
  v87 = v86;
  while ( 1 )
  {
    v73 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v87,
            (const MethodInfo_34445DC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    if ( !v73 )
      break;
    if ( !v87.fields._currentValue )
      sub_1C3B9C0(v73, v74);
    v75 = SkillMaster___c_TypeInfo;
    v76 = v87.fields._currentValue[5].klass;
    if ( !SkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillMaster___c_TypeInfo);
      v75 = SkillMaster___c_TypeInfo;
    }
    _9__2_0 = (System_Comparison_T__o *)v75->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v75->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v75);
        v75 = SkillMaster___c_TypeInfo;
      }
      v78 = (Il2CppObject *)v75->static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_SkillAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v78, Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, 0LL);
      static_fields = SkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_SkillAddEntity__o *)_9__2_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__2_0,
        (int64_t)_9__2_0,
        v80,
        v81,
        v82,
        v83,
        v84,
        v85);
    }
    if ( !v76 )
      sub_1C3B9C0(v73, v74);
    System_Collections_Generic_List_object___Sort_57202480(
      (System_Collections_Generic_List_object__o *)v76,
      _9__2_0,
      (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v87,
    (const MethodInfo_34445D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C22A6E & 1) == 0 )
  {
    sub_1C3B764(&SkillMaster___c_TypeInfo, v1);
    byte_4C22A6E = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(SkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SkillMaster___c_TypeInfo->static_fields->__9 = (struct SkillMaster___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)SkillMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, x);
  return y->fields.priority - x->fields.priority;
}