void __fastcall BgmMaster___ctor(BgmMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE10 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__);
    byte_4A5AE10 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    81,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__);
}


System_String_o *__fastcall BgmMaster__GetBgmFileName(
        BgmMaster_o *this,
        int32_t id,
        System_String_o *defName,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5AE12 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    byte_4A5AE12 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_311D988 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1B8880C(v7, v8);
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
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x20
  System_Func_object__bool__o *v13; // x21
  Il2CppObject *v14; // x0

  if ( (byte_4A5AE13 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_BgmEntity___);
    sub_1B885B0(&System_Func_BgmEntity__bool__TypeInfo);
    sub_1B885B0(&Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__);
    sub_1B885B0(&BgmMaster___c__DisplayClass3_0_TypeInfo);
    byte_4A5AE13 = 1;
  }
  v7 = sub_1B887FC(BgmMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 16) = bgmName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)bgmName, v10, v11);
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_BgmEntity___);
  v13 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BgmEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__,
    0LL);
  v14 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          v12,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___);
  if ( v14 )
    return (int32_t)v14[1].klass;
  return defId;
}


System_String_array *__fastcall BgmMaster__GetBgmNameListWithIds(
        BgmMaster_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_String_o *v6; // x0
  Il2CppObject *v7; // x1
  unsigned __int64 i; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v10; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v11; // x22
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v13; // x23
  __int64 v14; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 methodPtr_low; // x9
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  BgmMaster_o *v25; // x0
  int32_t v26; // w1
  System_String_o *v27; // x2
  const MethodInfo *v28; // x3
  System_String_o *v29; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5AE11 & 1) == 0 )
  {
    sub_1B885B0(&BgmEntity_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    byte_4A5AE11 = 1;
  }
  v29 = 0LL;
  if ( !ids || !*(_QWORD *)&ids->max_length )
    return 0LL;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)ids->max_length >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)ids->max_length; ++i )
    {
      lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( i >= ids->max_length )
        sub_1B88814(lookup, v10);
      v11 = lookup;
      v6 = System_Int32__ToString((int)ids + 4 * (int)i + 32, 0LL);
      if ( !v11 )
        goto LABEL_28;
      klass = v11->klass;
      v13 = v6;
      v14 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
      {
        p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v14;
          p_offset += 2;
          if ( !v14 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
      }
      else
      {
LABEL_13:
        p_method = sub_1BDA590(
                     v11,
                     System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                     1LL);
      }
      v6 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, System_String_o **, _QWORD))p_method)(
                                v11,
                                v13,
                                &v29,
                                *(_QWORD *)(p_method + 8));
      if ( ((unsigned __int8)v6 & 1) != 0 )
      {
        v6 = v29;
        if ( !v29 )
          goto LABEL_28;
        v7 = (Il2CppObject *)BgmEntity_TypeInfo;
        methodPtr_low = LOBYTE(BgmEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v29->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (BgmEntity_c *)v29->klass->_2.typeHierarchy[methodPtr_low - 1] != BgmEntity_TypeInfo )
        {
          sub_1B88ACC(v29);
          return (System_String_array *)BgmMaster__GetBgmFileName(v25, v26, v27, v28);
        }
        if ( !v5 )
          goto LABEL_28;
        v7 = (Il2CppObject *)v29[1].klass;
        items = v5->fields._items;
        v21 = Method_System_Collections_Generic_List_string__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_28;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v7,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v7;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v7, v17, v18);
        }
      }
    }
  }
  if ( !v5 )
LABEL_28:
    sub_1B8880C(v6, v7);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall BgmMaster__GetBgmPriority(
        BgmMaster_o *this,
        int32_t bgmId,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5AE15 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    byte_4A5AE15 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         bgmId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1B8880C(0LL, v7);
    return BgmEntity__GetPriorityBgm((BgmEntity_o *)entity, v7);
  }
  return defVal;
}


int32_t __fastcall BgmMaster__GetInvalidOverwrite(BgmMaster_o *this, int32_t bgmId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5AE14 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    byte_4A5AE14 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          bgmId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_1B8880C(0LL, v5);
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
    sub_1B8880C(this, x);
  return System_String__Equals_61715348((System_String_o *)this, x->fields.fileName, 0LL);
}