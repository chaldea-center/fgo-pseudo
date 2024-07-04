void __fastcall SkillMaster___ctor(SkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E3126 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__, method);
    byte_48E3126 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    51,
    (const MethodInfo_2FE6A0C *)Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillMaster__IsSkippable(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0

  if ( (byte_48E3128 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, *(_QWORD *)&skillId);
    byte_48E3128 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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

  if ( (byte_48E3129 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, *(_QWORD *)&skillId);
    byte_48E3129 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  Il2CppObject *v43; // x22
  __int64 methodPtr_low; // x9
  int32_t v45; // w23
  int32_t PK; // w0
  _BOOL8 v47; // x0
  __int64 v48; // x1
  _BOOL8 v49; // x0
  __int64 v50; // x1
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *v53; // x23
  System_Collections_Generic_List_object__o *v54; // x24
  __int64 v55; // x0
  __int64 v56; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  System_Collections_Generic_List_object__o *v59; // x0
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x8
  System_Collections_Generic_IEnumerator_T__c *v64; // x8
  __int64 v65; // x9
  int32_t *v66; // x10
  __int64 v67; // x0
  _BOOL8 v68; // x0
  __int64 v69; // x1
  SkillMaster___c_c *v70; // x8
  Il2CppClass *v71; // x19
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v73; // x21
  struct SkillMaster___c_StaticFields *static_fields; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v77; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v78; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_48E3127 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B00CCC(&System_Comparison_SkillAddEntity__TypeInfo, v3);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillAddMaster___, v4);
    sub_1B00CCC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__, v9);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo, v10);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__,
      v11);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__,
      v12);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__get_Current__,
      v13);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v14);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_SkillAddEntity__Add__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_SkillAddEntity__Sort__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_SkillAddEntity___ctor__, v19);
    sub_1B00CCC(&System_Collections_Generic_List_SkillAddEntity__TypeInfo, v20);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B00CCC(&SkillAddEntity_TypeInfo, v22);
    sub_1B00CCC(&SkillEntity_TypeInfo, v23);
    sub_1B00CCC(&Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, v24);
    sub_1B00CCC(&SkillMaster___c_TypeInfo, v25);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__, v26);
    byte_48E3127 = 1;
  }
  entity = 0LL;
  memset(&v78, 0, sizeof(v78));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillAddMaster___);
  v30 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v30,
    (const MethodInfo_3035B58 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
  if ( !MasterData_object )
    goto LABEL_69;
  Instance = (DataManager_o *)MasterData_object[2].klass;
  if ( !Instance )
    goto LABEL_69;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_2F83C88 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B00F28(0LL, v31);
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
      p_method = sub_1B52CAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v40 = sub_1B52CAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
      sub_1B011E8(v41);
LABEL_59:
      sub_1B00F28(v41, v42);
    }
    v45 = (int32_t)v41[1].klass;
    if ( !SkillEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SkillEntity_TypeInfo);
    PK = SkillEntity__CreatePK(v45, 0LL);
    v47 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            PK,
            (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( v47 )
    {
      if ( !entity )
        sub_1B00F28(v47, v48);
      if ( !v30 )
        sub_1B00F28(v47, v48);
      v49 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v30,
              (int32_t)entity[1].klass,
              (const MethodInfo_3036720 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
      if ( !v49 )
      {
        if ( !entity )
          sub_1B00F28(v49, v50);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v30,
          (int32_t)entity[1].klass,
          entity,
          (const MethodInfo_3036518 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
        v53 = entity;
        v54 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_SkillAddEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v54,
          (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
        if ( !v53 )
          sub_1B00F28(v55, v56);
        v53[5].klass = (Il2CppClass *)v54;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v53[5], (int32_t)v54, v57, v58);
      }
      if ( !entity )
        sub_1B00F28(v49, v50);
      v59 = (System_Collections_Generic_List_object__o *)entity[5].klass;
      if ( !v59 )
        sub_1B00F28(0LL, v50);
      items = v59->fields._items;
      v61 = Method_System_Collections_Generic_List_SkillAddEntity__Add__;
      ++v59->fields._version;
      if ( !items )
        sub_1B00F28(v59, v50);
      size = v59->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v59,
          v43,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = &items->obj.klass + size;
        v59->fields._size = size + 1;
        v63[4] = (Il2CppClass *)v43;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v63 + 4), (int32_t)v43, v51, v52);
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
        goto LABEL_42;
    }
    v67 = (__int64)&v64->vtable[*v66].method;
  }
  else
  {
LABEL_42:
    v67 = sub_1B52CAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v67)(
                                Enumerator,
                                *(_QWORD *)(v67 + 8));
  if ( !v30
    || (Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                      v30,
                                      (const MethodInfo_303633C *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__)) == 0LL )
  {
LABEL_69:
    sub_1B00F28(Instance, v28);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v77,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_36C51AC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
  v78 = v77;
  while ( 1 )
  {
    v68 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v78,
            (const MethodInfo_3182110 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    if ( !v68 )
      break;
    if ( !v78.fields._currentValue )
      sub_1B00F28(v68, v69);
    v70 = SkillMaster___c_TypeInfo;
    v71 = v78.fields._currentValue[5].klass;
    if ( !SkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillMaster___c_TypeInfo);
      v70 = SkillMaster___c_TypeInfo;
    }
    _9__2_0 = (System_Comparison_T__o *)v70->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v70->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v70);
        v70 = SkillMaster___c_TypeInfo;
      }
      v73 = (Il2CppObject *)v70->static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_SkillAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v73, Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, 0LL);
      static_fields = SkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_SkillAddEntity__o *)_9__2_0;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v75, v76);
    }
    if ( !v71 )
      sub_1B00F28(v68, v69);
    System_Collections_Generic_List_object___Sort_54277268(
      (System_Collections_Generic_List_object__o *)v71,
      _9__2_0,
      (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v78,
    (const MethodInfo_318210C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
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
  int32_t v4; // w3

  if ( (byte_48E312A & 1) == 0 )
  {
    sub_1B00CCC(&SkillMaster___c_TypeInfo, v1);
    byte_48E312A = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(SkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SkillMaster___c_TypeInfo->static_fields->__9 = (struct SkillMaster___c_o *)v2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)SkillMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B00F28(this, x);
  return y->fields.priority - x->fields.priority;
}