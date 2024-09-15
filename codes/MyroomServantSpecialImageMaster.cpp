void __fastcall MyroomServantSpecialImageMaster___ctor(
        MyroomServantSpecialImageMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A2E2EF & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string___ctor__,
      method);
    byte_4A2E2EF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    518,
    (const MethodInfo_30FFA98 *)Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MyroomServantSpecialImageEntity_array *__fastcall MyroomServantSpecialImageMaster__GetEntitiesByBaseLimitCount(
        MyroomServantSpecialImageMaster_o *this,
        int32_t svtId,
        int32_t baseLimitCount,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v19; // x19
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x8
  __int64 methodPtr_low; // x11
  struct System_Object_array *items; // x9
  _QWORD *v39; // x10
  __int64 size; // x11
  Il2CppClass **v41; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0
  MyroomServantSpecialImageMaster___c_c *v46; // x8
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v48; // x21
  struct MyroomServantSpecialImageMaster___c_StaticFields *static_fields; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0

  if ( (byte_4A2E2EE & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1B761C0(&Method_System_Linq_Enumerable_OrderBy_MyroomServantSpecialImageEntity__int___, v7);
    sub_1B761C0(&Method_System_Linq_Enumerable_ToArray_MyroomServantSpecialImageEntity___, v8);
    sub_1B761C0(&System_Func_MyroomServantSpecialImageEntity__int__TypeInfo, v9);
    sub_1B761C0(&System_IDisposable_TypeInfo, v10);
    sub_1B761C0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B761C0(&Method_System_Collections_Generic_List_MyroomServantSpecialImageEntity__Add__, v13);
    sub_1B761C0(&Method_System_Collections_Generic_List_MyroomServantSpecialImageEntity___ctor__, v14);
    sub_1B761C0(&System_Collections_Generic_List_MyroomServantSpecialImageEntity__TypeInfo, v15);
    sub_1B761C0(&MyroomServantSpecialImageEntity_TypeInfo, v16);
    sub_1B761C0(&Method_MyroomServantSpecialImageMaster___c__GetEntitiesByBaseLimitCount_b__0_0__, v17);
    sub_1B761C0(&MyroomServantSpecialImageMaster___c_TypeInfo, v18);
    byte_4A2E2EE = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_MyroomServantSpecialImageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_MyroomServantSpecialImageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B7641C(0LL, v20);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_309D0A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B7641C(0LL, v22);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        p_offset += 4;
        if ( !v25 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BC81A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v28 = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_16;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_16:
      v31 = sub_1BC81A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
            Enumerator,
            *(_QWORD *)(v31 + 8));
    v36 = v32;
    if ( !v32
      || (methodPtr_low = LOBYTE(MyroomServantSpecialImageEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v32 + 304LL) < (unsigned int)methodPtr_low)
      || *(MyroomServantSpecialImageEntity_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * methodPtr_low - 8) != MyroomServantSpecialImageEntity_TypeInfo )
    {
      sub_1B7641C(v32, v33);
    }
    if ( *(_DWORD *)(v32 + 16) == svtId && *(_DWORD *)(v32 + 24) == baseLimitCount )
    {
      if ( !v19 )
        sub_1B7641C(v32, v33);
      items = v19->fields._items;
      v39 = Method_System_Collections_Generic_List_MyroomServantSpecialImageEntity__Add__;
      ++v19->fields._version;
      if ( !items )
        sub_1B7641C(v32, v33);
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          (Il2CppObject *)v32,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v19->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v36;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v41 + 4), v36, v34, v35);
      }
    }
  }
  v42 = Enumerator->klass;
  v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_32;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_32:
    v45 = sub_1BC81A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(Enumerator, *(_QWORD *)(v45 + 8));
  v46 = MyroomServantSpecialImageMaster___c_TypeInfo;
  if ( !MyroomServantSpecialImageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyroomServantSpecialImageMaster___c_TypeInfo);
    v46 = MyroomServantSpecialImageMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v46->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v46 = MyroomServantSpecialImageMaster___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v46->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1B7640C(System_Func_MyroomServantSpecialImageEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_0,
      v48,
      Method_MyroomServantSpecialImageMaster___c__GetEntitiesByBaseLimitCount_b__0_0__,
      0LL);
    static_fields = MyroomServantSpecialImageMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_MyroomServantSpecialImageEntity__int__o *)_9__0_0;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v50, v51);
  }
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_2E8C92C *)Method_System_Linq_Enumerable_OrderBy_MyroomServantSpecialImageEntity__int___);
  return (MyroomServantSpecialImageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                    v52,
                                                    (const MethodInfo_2E9AEA4 *)Method_System_Linq_Enumerable_ToArray_MyroomServantSpecialImageEntity___);
}


// local variable allocation has failed, the output may be wrong!
MyroomServantSpecialImageEntity_o *__fastcall MyroomServantSpecialImageMaster__GetEntity(
        MyroomServantSpecialImageMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A2E2F0 & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4A2E2F0 = 1;
  }
  PK = (Il2CppObject *)MyroomServantSpecialImageEntity__CreatePK(svtId, num, 0LL);
  return (MyroomServantSpecialImageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_30FFAD8 *)Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string__GetEntity__);
}


bool __fastcall MyroomServantSpecialImageMaster__TryGetEntity(
        MyroomServantSpecialImageMaster_o *this,
        MyroomServantSpecialImageEntity_o **entity,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A2E2F1 & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string__TryGetEntity__,
      entity);
    byte_4A2E2F1 = 1;
  }
  PK = (Il2CppObject *)MyroomServantSpecialImageEntity__CreatePK(svtId, num, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30FFB28 *)Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string__TryGetEntity__);
}


void __fastcall MyroomServantSpecialImageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A2E2F2 & 1) == 0 )
  {
    sub_1B761C0(&MyroomServantSpecialImageMaster___c_TypeInfo, v1);
    byte_4A2E2F2 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(MyroomServantSpecialImageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MyroomServantSpecialImageMaster___c_TypeInfo->static_fields->__9 = (struct MyroomServantSpecialImageMaster___c_o *)v2;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)MyroomServantSpecialImageMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B7641C(this, 0LL);
  return a->fields.num;
}