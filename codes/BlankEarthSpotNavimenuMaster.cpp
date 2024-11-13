void __fastcall BlankEarthSpotNavimenuMaster___ctor(BlankEarthSpotNavimenuMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15ED6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_BlankEarthSpotNavimenuMaster__BlankEarthSpotNavimenuEntity__int___ctor__,
      method,
      v2);
    byte_4B15ED6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    461,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_BlankEarthSpotNavimenuMaster__BlankEarthSpotNavimenuEntity__int___ctor__);
}


BlankEarthSpotNavimenuEntity_array *__fastcall BlankEarthSpotNavimenuMaster__GetEnableShortcutButtons(
        BlankEarthSpotNavimenuMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_object__o *v29; // x19
  __int64 v30; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v32; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  BlankEarthSpotNavimenuEntity_o *v42; // x0
  const MethodInfo *v43; // x1
  Il2CppObject *v44; // x21
  __int64 methodPtr_low; // x10
  _BOOL8 IsEnable; // x0
  __int64 v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x2
  __int64 v63; // x3
  BlankEarthSpotNavimenuMaster___c_c *v64; // x8
  System_Comparison_T__o *_9__0_0; // x20
  Il2CppObject *v66; // x21
  struct BlankEarthSpotNavimenuMaster___c_StaticFields *static_fields; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7

  if ( (byte_4B15ED5 & 1) == 0 )
  {
    sub_1BCA7E0(&BlankEarthSpotNavimenuEntity_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5, v6);
    sub_1BCA7E0(&System_Comparison_BlankEarthSpotNavimenuEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Sort__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__ToArray__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_BlankEarthSpotNavimenuMaster___c__GetEnableShortcutButtons_b__0_0__, v25, v26);
    sub_1BCA7E0(&BlankEarthSpotNavimenuMaster___c_TypeInfo, v27, v28);
    byte_4B15ED5 = 1;
  }
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v32);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v35;
        p_offset += 4;
        if ( !v35 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_16;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_16:
      v41 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v42 = (BlankEarthSpotNavimenuEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                              Enumerator,
                                              *(_QWORD *)(v41 + 8));
    v44 = (Il2CppObject *)v42;
    if ( v42 )
    {
      methodPtr_low = LOBYTE(BlankEarthSpotNavimenuEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v42->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (BlankEarthSpotNavimenuEntity_c *)v42->klass->_2.typeHierarchy[methodPtr_low - 1] == BlankEarthSpotNavimenuEntity_TypeInfo )
      {
        IsEnable = BlankEarthSpotNavimenuEntity__IsEnable(v42, v43);
        if ( IsEnable )
        {
          if ( !v29 )
            sub_1BCAA3C(IsEnable, v47);
          items = v29->fields._items;
          v55 = Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Add__;
          ++v29->fields._version;
          if ( !items )
            sub_1BCAA3C(IsEnable, v47);
          size = v29->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              v44,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v57 = &items->obj.klass + size;
            v29->fields._size = size + 1;
            v57[4] = (Il2CppClass *)v44;
            sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v44, v48, v49, v50, v51, v52, v53);
          }
        }
      }
    }
  }
  v58 = Enumerator->klass;
  v59 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      --v59;
      v60 += 4;
      if ( !v59 )
        goto LABEL_31;
    }
    v61 = (__int64)&v58->vtable[*v60].method;
  }
  else
  {
LABEL_31:
    v61 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(
                                                             Enumerator,
                                                             *(_QWORD *)(v61 + 8));
  v64 = BlankEarthSpotNavimenuMaster___c_TypeInfo;
  if ( !BlankEarthSpotNavimenuMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotNavimenuMaster___c_TypeInfo, v30);
    v64 = BlankEarthSpotNavimenuMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Comparison_T__o *)v64->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64, v30);
      v64 = BlankEarthSpotNavimenuMaster___c_TypeInfo;
    }
    v66 = (Il2CppObject *)v64->static_fields->__9;
    _9__0_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                          System_Comparison_BlankEarthSpotNavimenuEntity__TypeInfo,
                                          v30,
                                          v62,
                                          v63);
    System_Comparison_object____ctor(
      _9__0_0,
      v66,
      Method_BlankEarthSpotNavimenuMaster___c__GetEnableShortcutButtons_b__0_0__,
      0LL);
    static_fields = BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_BlankEarthSpotNavimenuEntity__o *)_9__0_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v68, v69, v70, v71, v72, v73);
  }
  if ( !v29 )
LABEL_41:
    sub_1BCAA3C(list, v30);
  System_Collections_Generic_List_object___Sort_56244000(
    v29,
    _9__0_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__Sort__);
  return (BlankEarthSpotNavimenuEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                 v29,
                                                 (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity__ToArray__);
}


void __fastcall BlankEarthSpotNavimenuMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B15ED7 & 1) == 0 )
  {
    sub_1BCA7E0(&BlankEarthSpotNavimenuMaster___c_TypeInfo, v1, v2);
    byte_4B15ED7 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BlankEarthSpotNavimenuMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields->__9 = (struct BlankEarthSpotNavimenuMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BlankEarthSpotNavimenuMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BlankEarthSpotNavimenuMaster___c___ctor(
        BlankEarthSpotNavimenuMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BlankEarthSpotNavimenuMaster___c___GetEnableShortcutButtons_b__0_0(
        BlankEarthSpotNavimenuMaster___c_o *this,
        BlankEarthSpotNavimenuEntity_o *a,
        BlankEarthSpotNavimenuEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}