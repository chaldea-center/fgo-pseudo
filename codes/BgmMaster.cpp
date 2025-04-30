void __fastcall BgmMaster___ctor(BgmMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E131 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__, method);
    byte_4A4E131 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    85,
    (const MethodInfo_3211F5C *)Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__);
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

  if ( (byte_4A4E133 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, *(_QWORD *)&id);
    byte_4A4E133 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_32142CC *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1B86614(v7, v8);
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
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  System_Func_object__bool__o *v17; // x21
  Il2CppObject *v18; // x0

  if ( (byte_4A4E134 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___, bgmName);
    sub_1B863B8(&Method_System_Linq_Enumerable_OfType_BgmEntity___, v7);
    sub_1B863B8(&System_Func_BgmEntity__bool__TypeInfo, v8);
    sub_1B863B8(&Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__, v9);
    sub_1B863B8(&BgmMaster___c__DisplayClass3_0_TypeInfo, v10);
    byte_4A4E134 = 1;
  }
  v11 = sub_1B86604(BgmMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B86614(v12, v13);
  *(_QWORD *)(v11 + 16) = bgmName;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)bgmName, v14, v15);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2F9A6B0 *)Method_System_Linq_Enumerable_OfType_BgmEntity___);
  v17 = (System_Func_object__bool__o *)sub_1B86604(System_Func_BgmEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__,
    0LL);
  v18 = System_Linq_Enumerable__FirstOrDefault_object__49893388(
          v16,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_2F9500C *)Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___);
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
  unsigned __int64 v13; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v15; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v16; // x22
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_String_o *v18; // x23
  __int64 v19; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__BgmEntity__c **p_offset; // x10
  __int64 p_method; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  __int64 v29; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A4E132 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__get_lookup__, ids);
    sub_1B863B8(&System_Collections_Generic_IReadOnlyDictionary_string__BgmEntity__TypeInfo, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_string___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_string__TypeInfo, v9);
    byte_4A4E132 = 1;
  }
  v29 = 0LL;
  if ( !ids || !*(_QWORD *)&ids->max_length )
    return 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)ids->max_length >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      lookup = DataMasterBase_object__object__int___get_lookup(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 (const MethodInfo_3212074 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__get_lookup__);
      if ( v13 >= ids->max_length )
        sub_1B8661C(lookup, v15);
      v16 = lookup;
      v11 = System_Int32__ToString((int)ids + 4 * (int)v13 + 32, 0LL);
      if ( !v16 )
        break;
      klass = v16->klass;
      v18 = v11;
      v19 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
      {
        p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__BgmEntity__c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__BgmEntity__TypeInfo )
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
        p_method = sub_1BD6B4C(v16, System_Collections_Generic_IReadOnlyDictionary_string__BgmEntity__TypeInfo, 1LL);
      }
      v11 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, __int64 *, _QWORD))p_method)(
                                 v16,
                                 v18,
                                 &v29,
                                 *(_QWORD *)(p_method + 8));
      if ( ((unsigned __int8)v11 & 1) != 0 )
      {
        if ( !v29 )
          break;
        if ( !v10 )
          break;
        v12 = *(Il2CppObject **)(v29 + 24);
        items = v10->fields._items;
        v25 = Method_System_Collections_Generic_List_string__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v12,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v12;
          sub_1B8635C((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v12, v22, v23);
        }
      }
      if ( (__int64)++v13 >= (int)ids->max_length )
        goto LABEL_23;
    }
LABEL_26:
    sub_1B86614(v11, v12);
  }
LABEL_23:
  if ( !v10 )
    goto LABEL_26;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v10,
                                  (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_4A4E136 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, *(_QWORD *)&bgmId);
    byte_4A4E136 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         bgmId,
         (const MethodInfo_32142CC *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1B86614(0LL, v7);
    return BgmEntity__GetPriorityBgm((BgmEntity_o *)entity, v7);
  }
  return defVal;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BgmMaster__GetInvalidOverwrite(BgmMaster_o *this, int32_t bgmId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A4E135 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, *(_QWORD *)&bgmId);
    byte_4A4E135 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          bgmId,
          (const MethodInfo_32142CC *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_1B86614(0LL, v5);
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
    sub_1B86614(this, x);
  return System_String__Equals_61680480((System_String_o *)this, x->fields.fileName, 0LL);
}