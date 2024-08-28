void __fastcall BgmMaster___ctor(BgmMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A08919 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__, method);
    byte_4A08919 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    81,
    (const MethodInfo_30E4480 *)Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BgmMaster__GetBgmFileName(
        BgmMaster_o *this,
        int32_t id,
        System_String_o *defName,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A0891B & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, *(_QWORD *)&id);
    byte_4A0891B = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_30E4514 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1B68930(v7, v8);
    return (System_String_o *)entity[1].monitor;
  }
  return defName;
}


int32_t __fastcall BgmMaster__GetBgmIdFromFileName(
        BgmMaster_o *this,
        System_String_o *bgmName,
        int32_t defId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  System_Func_object__bool__o *v17; // x21
  Il2CppObject *v18; // x0

  if ( (byte_4A0891C & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___, bgmName);
    sub_1B686D4(&Method_System_Linq_Enumerable_OfType_BgmEntity___, v7);
    sub_1B686D4(&System_Func_BgmEntity__bool__TypeInfo, v8);
    sub_1B686D4(&Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__, v9);
    sub_1B686D4(&BgmMaster___c__DisplayClass3_0_TypeInfo, v10);
    byte_4A0891C = 1;
  }
  v11 = sub_1B68920(BgmMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B68930(v12, v13);
  *(_QWORD *)(v11 + 16) = bgmName;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)bgmName, v14, v15);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2E738B0 *)Method_System_Linq_Enumerable_OfType_BgmEntity___);
  v17 = (System_Func_object__bool__o *)sub_1B68920(System_Func_BgmEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__,
    0LL);
  v18 = System_Linq_Enumerable__FirstOrDefault_object__48686452(
          v16,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_2E6E574 *)Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___);
  if ( v18 )
    return (int32_t)v18[1].klass;
  return defId;
}


System_String_array *__fastcall BgmMaster__GetBgmNameListWithIds(
        BgmMaster_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_String_o *v11; // x0
  Il2CppObject *v12; // x1
  unsigned __int64 i; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v15; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v16; // x22
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v18; // x23
  __int64 v19; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 methodPtr_low; // x9
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  BgmMaster_o *v30; // x0
  int32_t v31; // w1
  System_String_o *v32; // x2
  const MethodInfo *v33; // x3
  System_String_o *v34; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A0891A & 1) == 0 )
  {
    sub_1B686D4(&BgmEntity_TypeInfo, ids);
    sub_1B686D4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_string___ctor__, v8);
    sub_1B686D4(&System_Collections_Generic_List_string__TypeInfo, v9);
    byte_4A0891A = 1;
  }
  v34 = 0LL;
  if ( !ids || !*(_QWORD *)&ids->max_length )
    return 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)ids->max_length >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)ids->max_length; ++i )
    {
      lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( i >= ids->max_length )
        sub_1B68938(lookup, v15);
      v16 = lookup;
      v11 = System_Int32__ToString((int)ids + 4 * (int)i + 32, 0LL);
      if ( !v16 )
        goto LABEL_28;
      klass = v16->klass;
      v18 = v11;
      v19 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
      {
        p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v19;
          p_offset += 2;
          if ( !v19 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
      }
      else
      {
LABEL_13:
        p_method = sub_1BBA6B4(
                     v16,
                     System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                     1LL);
      }
      v11 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, System_String_o **, _QWORD))p_method)(
                                 v16,
                                 v18,
                                 &v34,
                                 *(_QWORD *)(p_method + 8));
      if ( ((unsigned __int8)v11 & 1) != 0 )
      {
        v11 = v34;
        if ( !v34 )
          goto LABEL_28;
        v12 = (Il2CppObject *)BgmEntity_TypeInfo;
        methodPtr_low = LOBYTE(BgmEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v34->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (BgmEntity_c *)v34->klass->_2.typeHierarchy[methodPtr_low - 1] != BgmEntity_TypeInfo )
        {
          sub_1B68BF0(v34);
          return (System_String_array *)BgmMaster__GetBgmFileName(v30, v31, v32, v33);
        }
        if ( !v10 )
          goto LABEL_28;
        v12 = (Il2CppObject *)v34[1].klass;
        items = v10->fields._items;
        v26 = Method_System_Collections_Generic_List_string__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_28;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v12,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v12;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v12, v22, v23);
        }
      }
    }
  }
  if ( !v10 )
LABEL_28:
    sub_1B68930(v11, v12);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v10,
                                  (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BgmMaster__GetBgmPriority(
        BgmMaster_o *this,
        int32_t bgmId,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A0891E & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, *(_QWORD *)&bgmId);
    byte_4A0891E = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         bgmId,
         (const MethodInfo_30E4514 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1B68930(0LL, v7);
    return BgmEntity__GetPriorityBgm((BgmEntity_o *)entity, v7);
  }
  return defVal;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BgmMaster__GetInvalidOverwrite(BgmMaster_o *this, int32_t bgmId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A0891D & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, *(_QWORD *)&bgmId);
    byte_4A0891D = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          bgmId,
          (const MethodInfo_30E4514 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_1B68930(0LL, v5);
  return BgmEntity__GetInvalidOverwrite((BgmEntity_o *)entity, v5);
}


void __fastcall BgmMaster___c__DisplayClass3_0___ctor(BgmMaster___c__DisplayClass3_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmMaster___c__DisplayClass3_0___GetBgmIdFromFileName_b__0(
        BgmMaster___c__DisplayClass3_0_o *this,
        BgmEntity_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (BgmMaster___c__DisplayClass3_0_o *)this->fields.bgmName) == 0LL )
    sub_1B68930(this, x);
  return System_String__Equals_61427784((System_String_o *)this, x->fields.fileName, 0LL);
}