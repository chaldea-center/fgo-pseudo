void __fastcall SkillMaster___ctor(SkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B37C40 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__, method);
    byte_4B37C40 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    52,
    (const MethodInfo_31D1EB0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillMaster__IsSkippable(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B37C42 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, *(_QWORD *)&skillId);
    byte_4B37C42 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_31D1EF0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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

  if ( (byte_4B37C43 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, *(_QWORD *)&skillId);
    byte_4B37C43 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_31D1EF0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  Il2CppObject *v43; // x22
  __int64 methodPtr_low; // x9
  int32_t v45; // w23
  _BOOL8 v46; // x0
  __int64 v47; // x1
  _BOOL8 v48; // x0
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  Il2CppObject *v56; // x23
  System_Collections_Generic_List_object__o *v57; // x24
  __int64 v58; // x0
  __int64 v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Collections_Generic_List_object__o *v66; // x0
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  Il2CppClass **v70; // x8
  System_Collections_Generic_IEnumerator_T__c *v71; // x8
  __int64 v72; // x9
  int32_t *v73; // x10
  __int64 v74; // x0
  _BOOL8 v75; // x0
  __int64 v76; // x1
  SkillMaster___c_c *v77; // x8
  Il2CppClass *v78; // x19
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v80; // x21
  struct SkillMaster___c_StaticFields *static_fields; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v88; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v89; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B37C41 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1BD3458(&System_Comparison_SkillAddEntity__TypeInfo, v3);
    sub_1BD3458(&Method_DataManager_GetMasterData_SkillAddMaster___, v4);
    sub_1BD3458(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__, v9);
    sub_1BD3458(&System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo, v10);
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__,
      v11);
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__,
      v12);
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__get_Current__,
      v13);
    sub_1BD3458(&System_IDisposable_TypeInfo, v14);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1BD3458(&Method_System_Collections_Generic_List_SkillAddEntity__Add__, v17);
    sub_1BD3458(&Method_System_Collections_Generic_List_SkillAddEntity__Sort__, v18);
    sub_1BD3458(&Method_System_Collections_Generic_List_SkillAddEntity___ctor__, v19);
    sub_1BD3458(&System_Collections_Generic_List_SkillAddEntity__TypeInfo, v20);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1BD3458(&SkillAddEntity_TypeInfo, v22);
    sub_1BD3458(&SkillEntity_TypeInfo, v23);
    sub_1BD3458(&Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, v24);
    sub_1BD3458(&SkillMaster___c_TypeInfo, v25);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__, v26);
    byte_4B37C41 = 1;
  }
  entity = 0LL;
  memset(&v89, 0, sizeof(v89));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_SkillAddMaster___);
  v30 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v30,
    (const MethodInfo_32245C0 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
  if ( !MasterData_object )
    goto LABEL_69;
  Instance = (DataManager_o *)MasterData_object[2].klass;
  if ( !Instance )
    goto LABEL_69;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_316EA98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BD36B4(0LL, v31);
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
      p_method = sub_1C25438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v39 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v40 = sub_1C25438(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v41 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                            Enumerator,
                            *(_QWORD *)(v40 + 8));
    v43 = v41;
    if ( !v41 )
      goto LABEL_59;
    methodPtr_low = LOBYTE(SkillAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v41->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (SkillAddEntity_c *)v41->klass->_2.typeHierarchy[methodPtr_low - 1] != SkillAddEntity_TypeInfo )
    {
      sub_1BD3974(v41);
LABEL_59:
      sub_1BD36B4(v41, v42);
    }
    v45 = (int32_t)v41[1].klass;
    if ( !SkillEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SkillEntity_TypeInfo);
    v46 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            v45,
            (const MethodInfo_31D1F44 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( v46 )
    {
      if ( !entity )
        sub_1BD36B4(v46, v47);
      if ( !v30 )
        sub_1BD36B4(v46, v47);
      v48 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v30,
              (int32_t)entity[1].klass,
              (const MethodInfo_3225188 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
      if ( !v48 )
      {
        if ( !entity )
          sub_1BD36B4(v48, v49);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v30,
          (int32_t)entity[1].klass,
          entity,
          (const MethodInfo_3224F80 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
        v56 = entity;
        v57 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_SkillAddEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v57,
          (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
        if ( !v56 )
          sub_1BD36B4(v58, v59);
        v56[5].klass = (Il2CppClass *)v57;
        sub_1BD33FC((PartyOrganizationUtility_o *)&v56[5], (int64_t)v57, v60, v61, v62, v63, v64, v65);
      }
      if ( !entity )
        sub_1BD36B4(v48, v49);
      v66 = (System_Collections_Generic_List_object__o *)entity[5].klass;
      if ( !v66 )
        sub_1BD36B4(0LL, v49);
      items = v66->fields._items;
      v68 = Method_System_Collections_Generic_List_SkillAddEntity__Add__;
      ++v66->fields._version;
      if ( !items )
        sub_1BD36B4(v66, v49);
      size = v66->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v66,
          v43,
          *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v70 = &items->obj.klass + size;
        v66->fields._size = size + 1;
        v70[4] = (Il2CppClass *)v43;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v70 + 4), (int64_t)v43, v50, v51, v52, v53, v54, v55);
      }
    }
  }
  v71 = Enumerator->klass;
  v72 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v73 = &v71->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v73 - 1) != System_IDisposable_TypeInfo )
    {
      --v72;
      v73 += 4;
      if ( !v72 )
        goto LABEL_42;
    }
    v74 = (__int64)&v71->vtable[*v73].method;
  }
  else
  {
LABEL_42:
    v74 = sub_1C25438(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v74)(
                                Enumerator,
                                *(_QWORD *)(v74 + 8));
  if ( !v30
    || (Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                      v30,
                                      (const MethodInfo_3224DA4 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__)) == 0LL )
  {
LABEL_69:
    sub_1BD36B4(Instance, v28);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v88,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_38EC738 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
  v89 = v88;
  while ( 1 )
  {
    v75 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v89,
            (const MethodInfo_33764C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    if ( !v75 )
      break;
    if ( !v89.fields._currentValue )
      sub_1BD36B4(v75, v76);
    v77 = SkillMaster___c_TypeInfo;
    v78 = v89.fields._currentValue[5].klass;
    if ( !SkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillMaster___c_TypeInfo);
      v77 = SkillMaster___c_TypeInfo;
    }
    _9__2_0 = (System_Comparison_T__o *)v77->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v77->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v77);
        v77 = SkillMaster___c_TypeInfo;
      }
      v80 = (Il2CppObject *)v77->static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_SkillAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v80, Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, 0LL);
      static_fields = SkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_SkillAddEntity__o *)_9__2_0;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&static_fields->__9__2_0,
        (int64_t)_9__2_0,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
    }
    if ( !v78 )
      sub_1BD36B4(v75, v76);
    System_Collections_Generic_List_object___Sort_56371284(
      (System_Collections_Generic_List_object__o *)v78,
      _9__2_0,
      (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v89,
    (const MethodInfo_33764C0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
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

  if ( (byte_4B37C44 & 1) == 0 )
  {
    sub_1BD3458(&SkillMaster___c_TypeInfo, v1);
    byte_4B37C44 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(SkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SkillMaster___c_TypeInfo->static_fields->__9 = (struct SkillMaster___c_o *)v2;
  sub_1BD33FC(
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
    sub_1BD36B4(this, x);
  return y->fields.priority - x->fields.priority;
}