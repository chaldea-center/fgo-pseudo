void __fastcall SkillMaster___ctor(SkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BBD8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
    byte_4A5BBD8 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    52,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
}


bool __fastcall SkillMaster__IsSkippable(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A5BBDA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_4A5BBDA = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsSkippable((SkillEntity_o *)Entity, v6);
  return (char)Entity;
}


bool __fastcall SkillMaster__IsWarBoardForcePassiveEveryBattle(
        SkillMaster_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A5BBDB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_4A5BBDB = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsWarBoardForcePassiveEveryBattle((SkillEntity_o *)Entity, v6);
  return (char)Entity;
}


void __fastcall SkillMaster__LinkToSkillAddEntity(SkillMaster_o *this, const MethodInfo *method)
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x22
  __int64 methodPtr_low; // x9
  int32_t v21; // w23
  _BOOL8 v22; // x0
  __int64 v23; // x1
  _BOOL8 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *v28; // x23
  System_Collections_Generic_List_object__o *v29; // x24
  __int64 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_List_object__o *v34; // x0
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x8
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  _BOOL8 v43; // x0
  __int64 v44; // x1
  SkillMaster___c_c *v45; // x8
  Il2CppClass *v46; // x19
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v48; // x21
  struct SkillMaster___c_StaticFields *static_fields; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v52; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v53; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A5BBD9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_Comparison_SkillAddEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillAddMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__get_Current__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkillAddEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SkillAddEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SkillAddEntity_TypeInfo);
    sub_1B885B0(&SkillEntity_TypeInfo);
    sub_1B885B0(&Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__);
    sub_1B885B0(&SkillMaster___c_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
    byte_4A5BBD9 = 1;
  }
  entity = 0LL;
  memset(&v53, 0, sizeof(v53));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillAddMaster___);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
  if ( !MasterData_object )
    goto LABEL_69;
  Instance = (DataManager_o *)MasterData_object[2].klass;
  if ( !Instance )
    goto LABEL_69;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_18:
      v16 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                            Enumerator,
                            *(_QWORD *)(v16 + 8));
    v19 = v17;
    if ( !v17 )
      goto LABEL_59;
    methodPtr_low = LOBYTE(SkillAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v17->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (SkillAddEntity_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] != SkillAddEntity_TypeInfo )
    {
      sub_1B88ACC(v17);
LABEL_59:
      sub_1B8880C(v17, v18);
    }
    v21 = (int32_t)v17[1].klass;
    if ( !SkillEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SkillEntity_TypeInfo);
    v22 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            v21,
            (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( v22 )
    {
      if ( !entity )
        sub_1B8880C(v22, v23);
      if ( !v6 )
        sub_1B8880C(v22, v23);
      v24 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v6,
              (int32_t)entity[1].klass,
              (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
      if ( !v24 )
      {
        if ( !entity )
          sub_1B8880C(v24, v25);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v6,
          (int32_t)entity[1].klass,
          entity,
          (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
        v28 = entity;
        v29 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SkillAddEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v29,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
        if ( !v28 )
          sub_1B8880C(v30, v31);
        v28[5].klass = (Il2CppClass *)v29;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v28[5], (int32_t)v29, v32, v33);
      }
      if ( !entity )
        sub_1B8880C(v24, v25);
      v34 = (System_Collections_Generic_List_object__o *)entity[5].klass;
      if ( !v34 )
        sub_1B8880C(0LL, v25);
      items = v34->fields._items;
      v36 = Method_System_Collections_Generic_List_SkillAddEntity__Add__;
      ++v34->fields._version;
      if ( !items )
        sub_1B8880C(v34, v25);
      size = v34->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          v19,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &items->obj.klass + size;
        v34->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v19, v26, v27);
      }
    }
  }
  v39 = Enumerator->klass;
  v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_42;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_42:
    v42 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                                Enumerator,
                                *(_QWORD *)(v42 + 8));
  if ( !v6
    || (Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                      v6,
                                      (const MethodInfo_316D768 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__)) == 0LL )
  {
LABEL_69:
    sub_1B8880C(Instance, v4);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v52,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_3804A5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
  v53 = v52;
  while ( 1 )
  {
    v43 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v53,
            (const MethodInfo_32B808C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    if ( !v43 )
      break;
    if ( !v53.fields._currentValue )
      sub_1B8880C(v43, v44);
    v45 = SkillMaster___c_TypeInfo;
    v46 = v53.fields._currentValue[5].klass;
    if ( !SkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillMaster___c_TypeInfo);
      v45 = SkillMaster___c_TypeInfo;
    }
    _9__2_0 = (System_Comparison_T__o *)v45->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v45 = SkillMaster___c_TypeInfo;
      }
      v48 = (Il2CppObject *)v45->static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_SkillAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v48, Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, 0LL);
      static_fields = SkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_SkillAddEntity__o *)_9__2_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v50, v51);
    }
    if ( !v46 )
      sub_1B8880C(v43, v44);
    System_Collections_Generic_List_object___Sort_55571192(
      (System_Collections_Generic_List_object__o *)v46,
      _9__2_0,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v53,
    (const MethodInfo_32B8088 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
}


bool __fastcall SkillMaster__preProcess(SkillMaster_o *this, const MethodInfo *method)
{
  SkillMaster__LinkToSkillAddEntity(this, method);
  return 1;
}


void __fastcall SkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BBDC & 1) == 0 )
  {
    sub_1B885B0(&SkillMaster___c_TypeInfo);
    byte_4A5BBDC = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(SkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SkillMaster___c_TypeInfo->static_fields->__9 = (struct SkillMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)SkillMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, x);
  return y->fields.priority - x->fields.priority;
}