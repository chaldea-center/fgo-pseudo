void __fastcall SkillMaster___ctor(SkillMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16C8A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__, method, v2);
    byte_4B16C8A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    52,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillMaster__IsSkippable(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B16C8C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, *(_QWORD *)&skillId, method);
    byte_4B16C8C = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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

  if ( (byte_4B16C8D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, *(_QWORD *)&skillId, method);
    byte_4B16C8D = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsWarBoardForcePassiveEveryBattle((SkillEntity_o *)Entity, v6);
  return (char)Entity;
}


void __fastcall SkillMaster__LinkToSkillAddEntity(SkillMaster_o *this, const MethodInfo *method)
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
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  DataManager_o *Instance; // x0
  __int64 v53; // x1
  Il2CppObject *MasterData_object; // x19
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Collections_Generic_Dictionary_int__object__o *v58; // x20
  __int64 v59; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v62; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v65; // x8
  __int64 v66; // x9
  int32_t *v67; // x10
  __int64 v68; // x0
  Il2CppObject *v69; // x0
  __int64 v70; // x1
  Il2CppObject *v71; // x22
  __int64 methodPtr_low; // x9
  int32_t v73; // w23
  _BOOL8 v74; // x0
  __int64 v75; // x1
  _BOOL8 v76; // x0
  __int64 v77; // x1
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  Il2CppObject *v84; // x23
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  System_Collections_Generic_List_object__o *v88; // x24
  __int64 v89; // x0
  __int64 v90; // x1
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  System_Collections_Generic_List_object__o *v97; // x0
  struct System_Object_array *items; // x8
  _QWORD *v99; // x9
  __int64 size; // x10
  Il2CppClass **v101; // x8
  System_Collections_Generic_IEnumerator_T__c *v102; // x8
  __int64 v103; // x9
  int32_t *v104; // x10
  __int64 v105; // x0
  _BOOL8 v106; // x0
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  SkillMaster___c_c *v110; // x8
  Il2CppClass *v111; // x19
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v113; // x21
  struct SkillMaster___c_StaticFields *static_fields; // x0
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v121; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v122; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B16C8B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&System_Comparison_SkillAddEntity__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillAddMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__,
      v20,
      v21);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__,
      v22,
      v23);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__get_Current__,
      v24,
      v25);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v28, v29);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkillAddEntity__Add__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkillAddEntity__Sort__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkillAddEntity___ctor__, v36, v37);
    sub_1BCA7E0(&System_Collections_Generic_List_SkillAddEntity__TypeInfo, v38, v39);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40, v41);
    sub_1BCA7E0(&SkillAddEntity_TypeInfo, v42, v43);
    sub_1BCA7E0(&SkillEntity_TypeInfo, v44, v45);
    sub_1BCA7E0(&Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, v46, v47);
    sub_1BCA7E0(&SkillMaster___c_TypeInfo, v48, v49);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__,
      v50,
      v51);
    byte_4B16C8B = 1;
  }
  entity = 0LL;
  memset(&v122, 0, sizeof(v122));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillAddMaster___);
  v58 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo,
                                                                  v55,
                                                                  v56,
                                                                  v57);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v58,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
  if ( !MasterData_object )
    goto LABEL_69;
  Instance = (DataManager_o *)MasterData_object[2].klass;
  if ( !Instance )
    goto LABEL_69;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v59);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v62 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v62;
        p_offset += 4;
        if ( !v62 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v65 = Enumerator->klass;
    v66 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v67 = &v65->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v67 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v66;
        v67 += 4;
        if ( !v66 )
          goto LABEL_18;
      }
      v68 = (__int64)&v65->vtable[*v67].method;
    }
    else
    {
LABEL_18:
      v68 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v69 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v68)(
                            Enumerator,
                            *(_QWORD *)(v68 + 8));
    v71 = v69;
    if ( !v69 )
      goto LABEL_59;
    methodPtr_low = LOBYTE(SkillAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v69->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (SkillAddEntity_c *)v69->klass->_2.typeHierarchy[methodPtr_low - 1] != SkillAddEntity_TypeInfo )
    {
      sub_1BCACFC(v69);
LABEL_59:
      sub_1BCAA3C(v69, v70);
    }
    v73 = (int32_t)v69[1].klass;
    if ( !SkillEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SkillEntity_TypeInfo, SkillAddEntity_TypeInfo);
    v74 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            v73,
            (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( v74 )
    {
      if ( !entity )
        sub_1BCAA3C(v74, v75);
      if ( !v58 )
        sub_1BCAA3C(v74, v75);
      v76 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v58,
              (int32_t)entity[1].klass,
              (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
      if ( !v76 )
      {
        if ( !entity )
          sub_1BCAA3C(v76, v77);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v58,
          (int32_t)entity[1].klass,
          entity,
          (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
        v84 = entity;
        v88 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_SkillAddEntity__TypeInfo,
                                                             v85,
                                                             v86,
                                                             v87);
        System_Collections_Generic_List_object____ctor(
          v88,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
        if ( !v84 )
          sub_1BCAA3C(v89, v90);
        v84[5].klass = (Il2CppClass *)v88;
        sub_1BCA784((PartyOrganizationUtility_o *)&v84[5], (int64_t)v88, v91, v92, v93, v94, v95, v96);
      }
      if ( !entity )
        sub_1BCAA3C(v76, v77);
      v97 = (System_Collections_Generic_List_object__o *)entity[5].klass;
      if ( !v97 )
        sub_1BCAA3C(0LL, v77);
      items = v97->fields._items;
      v99 = Method_System_Collections_Generic_List_SkillAddEntity__Add__;
      ++v97->fields._version;
      if ( !items )
        sub_1BCAA3C(v97, v77);
      size = v97->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v97,
          v71,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
      }
      else
      {
        v101 = &items->obj.klass + size;
        v97->fields._size = size + 1;
        v101[4] = (Il2CppClass *)v71;
        sub_1BCA784((PartyOrganizationUtility_o *)(v101 + 4), (int64_t)v71, v78, v79, v80, v81, v82, v83);
      }
    }
  }
  v102 = Enumerator->klass;
  v103 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v104 = &v102->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v104 - 1) != System_IDisposable_TypeInfo )
    {
      --v103;
      v104 += 4;
      if ( !v103 )
        goto LABEL_42;
    }
    v105 = (__int64)&v102->vtable[*v104].method;
  }
  else
  {
LABEL_42:
    v105 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v105)(
                                Enumerator,
                                *(_QWORD *)(v105 + 8));
  if ( !v58
    || (Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                      v58,
                                      (const MethodInfo_3205CF4 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__)) == 0LL )
  {
LABEL_69:
    sub_1BCAA3C(Instance, v53);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v121,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_38CE2BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
  v122 = v121;
  while ( 1 )
  {
    v106 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
             &v122,
             (const MethodInfo_3357390 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    if ( !v106 )
      break;
    if ( !v122.fields._currentValue )
      sub_1BCAA3C(v106, v107);
    v110 = SkillMaster___c_TypeInfo;
    v111 = v122.fields._currentValue[5].klass;
    if ( !SkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillMaster___c_TypeInfo, v107);
      v110 = SkillMaster___c_TypeInfo;
    }
    _9__2_0 = (System_Comparison_T__o *)v110->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v110->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v110, v107);
        v110 = SkillMaster___c_TypeInfo;
      }
      v113 = (Il2CppObject *)v110->static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_SkillAddEntity__TypeInfo, v107, v108, v109);
      System_Comparison_object____ctor(_9__2_0, v113, Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, 0LL);
      static_fields = SkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_SkillAddEntity__o *)_9__2_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__2_0,
        (int64_t)_9__2_0,
        v115,
        v116,
        v117,
        v118,
        v119,
        v120);
    }
    if ( !v111 )
      sub_1BCAA3C(v106, v107);
    System_Collections_Generic_List_object___Sort_56244000(
      (System_Collections_Generic_List_object__o *)v111,
      _9__2_0,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v122,
    (const MethodInfo_335738C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
}


bool __fastcall SkillMaster__preProcess(SkillMaster_o *this, const MethodInfo *method)
{
  SkillMaster__LinkToSkillAddEntity(this, method);
  return 1;
}


void __fastcall SkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16C8E & 1) == 0 )
  {
    sub_1BCA7E0(&SkillMaster___c_TypeInfo, v1, v2);
    byte_4B16C8E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SkillMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SkillMaster___c_TypeInfo->static_fields->__9 = (struct SkillMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SkillMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, x);
  return y->fields.priority - x->fields.priority;
}