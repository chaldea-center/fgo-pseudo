void __fastcall WarMessageMaster___ctor(WarMessageMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B172A3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string___ctor__, method, v2);
    byte_4B172A3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    484,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarMessageEntity_o *__fastcall WarMessageMaster__GetEntity(
        WarMessageMaster_o *this,
        int32_t warId,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *PK; // x1

  if ( (byte_4B172A4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__GetEntity__,
      *(_QWORD *)&warId,
      *(_QWORD *)&idx);
    sub_1BCA7E0(&WarMessageEntity_TypeInfo, v7, v8);
    byte_4B172A4 = 1;
  }
  if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo, *(_QWORD *)&warId);
  PK = (Il2CppObject *)WarMessageEntity__CreatePK(warId, idx, *(const MethodInfo **)&idx);
  return (WarMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31B3198 *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarMessageEntity__o *__fastcall WarMessageMaster__GetValidMessageList(
        WarMessageMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  System_Collections_ObjectModel_Collection_T__o *list; // x20
  System_Collections_Generic_List_object__o *v31; // x19
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  WarMessageEntity_o *v44; // x0
  __int64 v45; // x1
  WarMessageEntity_o *v46; // x22
  __int64 methodPtr_low; // x9
  const MethodInfo *v48; // x1
  _BOOL8 v49; // x0
  __int64 v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  System_Collections_Generic_IEnumerator_T__c *v61; // x8
  __int64 v62; // x9
  int32_t *v63; // x10
  __int64 v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  WarMessageMaster___c_c *v68; // x8
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v70; // x21
  struct WarMessageMaster___c_StaticFields *static_fields; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0

  if ( (byte_4B172A2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&warId,
      method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_WarMessageEntity__int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_WarMessageEntity___, v8, v9);
    sub_1BCA7E0(&System_Func_WarMessageEntity__int__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarMessageEntity__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarMessageEntity___ctor__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_WarMessageEntity__TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_WarMessageMaster___c__GetValidMessageList_b__0_0__, v24, v25);
    sub_1BCA7E0(&WarMessageMaster___c_TypeInfo, v26, v27);
    sub_1BCA7E0(&WarMessageEntity_TypeInfo, v28, v29);
    byte_4B172A2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarMessageEntity__TypeInfo,
                                                       *(_QWORD *)&warId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarMessageEntity___ctor__);
  if ( !list )
    sub_1BCAA3C(v32, v33);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v34);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v37;
        p_offset += 4;
        if ( !v37 )
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
    v40 = Enumerator->klass;
    v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v42 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_16;
      }
      v43 = (__int64)&v40->vtable[*v42].method;
    }
    else
    {
LABEL_16:
      v43 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v44 = (WarMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
                                  Enumerator,
                                  *(_QWORD *)(v43 + 8));
    v46 = v44;
    if ( !v44 )
      goto LABEL_43;
    methodPtr_low = LOBYTE(WarMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v44->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarMessageEntity_c *)v44->klass->_2.typeHierarchy[methodPtr_low - 1] != WarMessageEntity_TypeInfo )
    {
      sub_1BCACFC(v44);
LABEL_43:
      sub_1BCAA3C(v44, v45);
    }
    if ( v44->fields.warId == warId
      && WarMessageEntity__CheckCondition(v44, (const MethodInfo *)WarMessageEntity_TypeInfo) )
    {
      v49 = WarMessageEntity__CheckFrequencyCondition(v46, v48);
      if ( v49 )
      {
        if ( !v31 )
          sub_1BCAA3C(v49, v50);
        items = v31->fields._items;
        v58 = Method_System_Collections_Generic_List_WarMessageEntity__Add__;
        ++v31->fields._version;
        if ( !items )
          sub_1BCAA3C(v49, v50);
        size = v31->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v31,
            (Il2CppObject *)v46,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
        }
        else
        {
          v60 = &items->obj.klass + size;
          v31->fields._size = size + 1;
          v60[4] = (Il2CppClass *)v46;
          sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 4), (int64_t)v46, v51, v52, v53, v54, v55, v56);
        }
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
        goto LABEL_33;
    }
    v64 = (__int64)&v61->vtable[*v63].method;
  }
  else
  {
LABEL_33:
    v64 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v64)(Enumerator, *(_QWORD *)(v64 + 8));
  v68 = WarMessageMaster___c_TypeInfo;
  if ( !WarMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMessageMaster___c_TypeInfo, v65);
    v68 = WarMessageMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v68->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68, v65);
      v68 = WarMessageMaster___c_TypeInfo;
    }
    v70 = (Il2CppObject *)v68->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_WarMessageEntity__int__TypeInfo, v65, v66, v67);
    System_Func_object__int____ctor(_9__0_0, v70, Method_WarMessageMaster___c__GetValidMessageList_b__0_0__, 0LL);
    static_fields = WarMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_WarMessageEntity__int__o *)_9__0_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v72, v73, v74, v75, v76, v77);
  }
  v78 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_WarMessageEntity__int___);
  return (System_Collections_Generic_List_WarMessageEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v78,
                                                                  (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_WarMessageEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarMessageMaster__TryGetEntity(
        WarMessageMaster_o *this,
        WarMessageEntity_o **entity,
        int32_t warId,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *PK; // x2

  if ( (byte_4B172A5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&warId);
    sub_1BCA7E0(&WarMessageEntity_TypeInfo, v9, v10);
    byte_4B172A5 = 1;
  }
  if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo, entity);
  PK = (Il2CppObject *)WarMessageEntity__CreatePK(warId, idx, *(const MethodInfo **)&warId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__TryGetEntity__);
}


void __fastcall WarMessageMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B172A6 & 1) == 0 )
  {
    sub_1BCA7E0(&WarMessageMaster___c_TypeInfo, v1, v2);
    byte_4B172A6 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarMessageMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarMessageMaster___c_TypeInfo->static_fields->__9 = (struct WarMessageMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarMessageMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarMessageMaster___c___ctor(WarMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarMessageMaster___c___GetValidMessageList_b__0_0(
        WarMessageMaster___c_o *this,
        WarMessageEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1BCAA3C(this, 0LL);
  return v->fields.idx;
}