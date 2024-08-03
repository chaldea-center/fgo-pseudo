void __fastcall BgmMaster___ctor(BgmMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC0CC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__, method);
    byte_49FC0CC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    81,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BgmMaster__GetBgmFileName(
        BgmMaster_o *this,
        int32_t id,
        System_String_o *defName,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FC0CE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, *(_QWORD *)&id);
    byte_49FC0CE = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1B64324(v7);
    return (System_String_o *)entity[1].monitor;
  }
  return defName;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BgmMaster__GetBgmIdFromFileName(
        BgmMaster_o *this,
        System_String_o *bgmName,
        int32_t defId,
        const MethodInfo *method)
{
  int32_t v4; // w19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Func_object__bool__o *v18; // x21
  Il2CppObject *v19; // x0

  v4 = defId;
  if ( (byte_49FC0CF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___, bgmName);
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_BgmEntity___, v7);
    sub_1B640C8(&System_Func_BgmEntity__bool__TypeInfo, v8);
    sub_1B640C8(&Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__, v9);
    sub_1B640C8(&BgmMaster___c__DisplayClass3_0_TypeInfo, v10);
    byte_49FC0CF = 1;
  }
  v11 = sub_1B64314(BgmMaster___c__DisplayClass3_0_TypeInfo, bgmName, *(_QWORD *)&defId);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  *(_QWORD *)(v11 + 16) = bgmName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)bgmName, v13, v14);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_BgmEntity___);
  v18 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BgmEntity__bool__TypeInfo, v16, v17);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v11,
    Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
          v15,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___);
  if ( v19 )
    return (int32_t)v19[1].klass;
  return v4;
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
  unsigned __int64 i; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v14; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v15; // x22
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v17; // x23
  __int64 v18; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 methodPtr_low; // x9
  Il2CppObject *v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  BgmMaster_o *v30; // x0
  int32_t v31; // w1
  System_String_o *v32; // x2
  const MethodInfo *v33; // x3
  System_String_o *v34; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FC0CD & 1) == 0 )
  {
    sub_1B640C8(&BgmEntity_TypeInfo, ids);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v9);
    byte_49FC0CD = 1;
  }
  v34 = 0LL;
  if ( !ids || !*(_QWORD *)&ids->max_length )
    return 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       ids,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)ids->max_length >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)ids->max_length; ++i )
    {
      lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( i >= ids->max_length )
        sub_1B6432C(lookup, v14);
      v15 = lookup;
      v11 = System_Int32__ToString((int)ids + 4 * (int)i + 32, 0LL);
      if ( !v15 )
        goto LABEL_28;
      klass = v15->klass;
      v17 = v11;
      v18 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
      {
        p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v18;
          p_offset += 2;
          if ( !v18 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
      }
      else
      {
LABEL_13:
        p_method = sub_1BB60A8(
                     v15,
                     System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                     1LL);
      }
      v11 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, System_String_o **, _QWORD))p_method)(
                                 v15,
                                 v17,
                                 &v34,
                                 *(_QWORD *)(p_method + 8));
      if ( ((unsigned __int8)v11 & 1) != 0 )
      {
        v11 = v34;
        if ( !v34 )
          goto LABEL_28;
        methodPtr_low = LOBYTE(BgmEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v34->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (BgmEntity_c *)v34->klass->_2.typeHierarchy[methodPtr_low - 1] != BgmEntity_TypeInfo )
        {
          sub_1B645E4(v34);
          return (System_String_array *)BgmMaster__GetBgmFileName(v30, v31, v32, v33);
        }
        if ( !v10 )
          goto LABEL_28;
        v24 = (Il2CppObject *)v34[1].klass;
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
            v24,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v24;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v24, v21, v22);
        }
      }
    }
  }
  if ( !v10 )
LABEL_28:
    sub_1B64324(v11);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v10,
                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_49FC0D1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, *(_QWORD *)&bgmId);
    byte_49FC0D1 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         bgmId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1B64324(0LL);
    return BgmEntity__GetPriorityBgm((BgmEntity_o *)entity, v7);
  }
  return defVal;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BgmMaster__GetInvalidOverwrite(BgmMaster_o *this, int32_t bgmId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC0D0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, *(_QWORD *)&bgmId);
    byte_49FC0D0 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          bgmId,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_1B64324(0LL);
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
    sub_1B64324(this);
  return System_String__Equals_61383712((System_String_o *)this, x->fields.fileName, 0LL);
}