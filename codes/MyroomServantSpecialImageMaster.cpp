void __fastcall MyroomServantSpecialImageMaster___ctor(
        MyroomServantSpecialImageMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B165B3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string___ctor__,
      method,
      v2);
    byte_4B165B3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    520,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MyroomServantSpecialImageEntity_array *__fastcall MyroomServantSpecialImageMaster__GetEntitiesByBaseLimitCount(
        MyroomServantSpecialImageMaster_o *this,
        int32_t svtId,
        int32_t baseLimitCount,
        const MethodInfo *method)
{
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
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *v31; // x19
  __int64 v32; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
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
  __int64 v44; // x0
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x8
  __int64 methodPtr_low; // x11
  struct System_Object_array *items; // x9
  _QWORD *v55; // x10
  __int64 size; // x11
  Il2CppClass **v57; // x0
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  MyroomServantSpecialImageMaster___c_c *v65; // x8
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v67; // x21
  struct MyroomServantSpecialImageMaster___c_StaticFields *static_fields; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x0

  if ( (byte_4B165B2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&baseLimitCount);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_MyroomServantSpecialImageEntity__int___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_MyroomServantSpecialImageEntity___, v9, v10);
    sub_1BCA7E0(&System_Func_MyroomServantSpecialImageEntity__int__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MyroomServantSpecialImageEntity__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MyroomServantSpecialImageEntity___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_MyroomServantSpecialImageEntity__TypeInfo, v23, v24);
    sub_1BCA7E0(&MyroomServantSpecialImageEntity_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_MyroomServantSpecialImageMaster___c__GetEntitiesByBaseLimitCount_b__0_0__, v27, v28);
    sub_1BCA7E0(&MyroomServantSpecialImageMaster___c_TypeInfo, v29, v30);
    byte_4B165B2 = 1;
  }
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MyroomServantSpecialImageEntity__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       *(_QWORD *)&baseLimitCount,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MyroomServantSpecialImageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v32);
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
    v44 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
            Enumerator,
            *(_QWORD *)(v43 + 8));
    v52 = v44;
    if ( !v44
      || (methodPtr_low = LOBYTE(MyroomServantSpecialImageEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v44 + 304LL) < (unsigned int)methodPtr_low)
      || *(MyroomServantSpecialImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v44 + 200LL) + 8 * methodPtr_low - 8) != MyroomServantSpecialImageEntity_TypeInfo )
    {
      sub_1BCAA3C(v44, v45);
    }
    if ( *(_DWORD *)(v44 + 16) == svtId && *(_DWORD *)(v44 + 24) == baseLimitCount )
    {
      if ( !v31 )
        sub_1BCAA3C(v44, v45);
      items = v31->fields._items;
      v55 = Method_System_Collections_Generic_List_MyroomServantSpecialImageEntity__Add__;
      ++v31->fields._version;
      if ( !items )
        sub_1BCAA3C(v44, v45);
      size = v31->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v31,
          (Il2CppObject *)v44,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &items->obj.klass + size;
        v31->fields._size = size + 1;
        v57[4] = (Il2CppClass *)v52;
        sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 4), v52, v46, v47, v48, v49, v50, v51);
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
        goto LABEL_32;
    }
    v61 = (__int64)&v58->vtable[*v60].method;
  }
  else
  {
LABEL_32:
    v61 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(Enumerator, *(_QWORD *)(v61 + 8));
  v65 = MyroomServantSpecialImageMaster___c_TypeInfo;
  if ( !MyroomServantSpecialImageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyroomServantSpecialImageMaster___c_TypeInfo, v62);
    v65 = MyroomServantSpecialImageMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v65->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v65->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v65, v62);
      v65 = MyroomServantSpecialImageMaster___c_TypeInfo;
    }
    v67 = (Il2CppObject *)v65->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_MyroomServantSpecialImageEntity__int__TypeInfo,
                                              v62,
                                              v63,
                                              v64);
    System_Func_object__int____ctor(
      _9__0_0,
      v67,
      Method_MyroomServantSpecialImageMaster___c__GetEntitiesByBaseLimitCount_b__0_0__,
      0LL);
    static_fields = MyroomServantSpecialImageMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_MyroomServantSpecialImageEntity__int__o *)_9__0_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v69, v70, v71, v72, v73, v74);
  }
  v75 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_MyroomServantSpecialImageEntity__int___);
  return (MyroomServantSpecialImageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                    v75,
                                                    (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_MyroomServantSpecialImageEntity___);
}


// local variable allocation has failed, the output may be wrong!
MyroomServantSpecialImageEntity_o *__fastcall MyroomServantSpecialImageMaster__GetEntity(
        MyroomServantSpecialImageMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B165B4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&num);
    byte_4B165B4 = 1;
  }
  PK = (Il2CppObject *)MyroomServantSpecialImageEntity__CreatePK(svtId, num, 0LL);
  return (MyroomServantSpecialImageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_31B3198 *)Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MyroomServantSpecialImageMaster__TryGetEntity(
        MyroomServantSpecialImageMaster_o *this,
        MyroomServantSpecialImageEntity_o **entity,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B165B5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B165B5 = 1;
  }
  PK = (Il2CppObject *)MyroomServantSpecialImageEntity__CreatePK(svtId, num, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string__TryGetEntity__);
}


void __fastcall MyroomServantSpecialImageMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B165B6 & 1) == 0 )
  {
    sub_1BCA7E0(&MyroomServantSpecialImageMaster___c_TypeInfo, v1, v2);
    byte_4B165B6 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MyroomServantSpecialImageMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MyroomServantSpecialImageMaster___c_TypeInfo->static_fields->__9 = (struct MyroomServantSpecialImageMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MyroomServantSpecialImageMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall MyroomServantSpecialImageMaster___c___ctor(
        MyroomServantSpecialImageMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall MyroomServantSpecialImageMaster___c___GetEntitiesByBaseLimitCount_b__0_0(
        MyroomServantSpecialImageMaster___c_o *this,
        MyroomServantSpecialImageEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1BCAA3C(this, 0LL);
  return a->fields.num;
}