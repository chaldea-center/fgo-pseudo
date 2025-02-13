void __fastcall BgmMaster___ctor(BgmMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC1D8 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__);
    byte_4BDC1D8 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    85,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__);
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

  if ( (byte_4BDC1DA & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    byte_4BDC1DA = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1C22094(v7, v8);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  System_Func_object__bool__o *v17; // x21
  Il2CppObject *v18; // x0

  if ( (byte_4BDC1DB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OfType_BgmEntity___);
    sub_1C21E38(&System_Func_BgmEntity__bool__TypeInfo);
    sub_1C21E38(&Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__);
    sub_1C21E38(&BgmMaster___c__DisplayClass3_0_TypeInfo);
    byte_4BDC1DB = 1;
  }
  v7 = sub_1C22084(BgmMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_QWORD *)(v7 + 16) = bgmName;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)bgmName, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2FD8A3C *)Method_System_Linq_Enumerable_OfType_BgmEntity___);
  v17 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BgmEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__,
    0LL);
  v18 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
          v16,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___);
  if ( v18 )
    return (int32_t)v18[1].klass;
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
  unsigned __int64 v8; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v10; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v11; // x22
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_String_o *v13; // x23
  __int64 v14; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__BgmEntity__c **p_offset; // x10
  __int64 p_method; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  __int64 v28; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BDC1D9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_BgmMaster__BgmEntity__int__get_lookup__);
    sub_1C21E38(&System_Collections_Generic_IReadOnlyDictionary_string__BgmEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    byte_4BDC1D9 = 1;
  }
  v28 = 0LL;
  if ( !ids || !*(_QWORD *)&ids->max_length )
    return 0LL;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)ids->max_length >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      lookup = DataMasterBase_object__object__int___get_lookup(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 (const MethodInfo_3259BBC *)Method_DataMasterBase_BgmMaster__BgmEntity__int__get_lookup__);
      if ( v8 >= ids->max_length )
        sub_1C2209C(lookup, v10);
      v11 = lookup;
      v6 = System_Int32__ToString((int)ids + 4 * (int)v8 + 32, 0LL);
      if ( !v11 )
        break;
      klass = v11->klass;
      v13 = v6;
      v14 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
      {
        p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__BgmEntity__c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__BgmEntity__TypeInfo )
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
        p_method = sub_1C73E18(v11, System_Collections_Generic_IReadOnlyDictionary_string__BgmEntity__TypeInfo, 1LL);
      }
      v6 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, __int64 *, _QWORD))p_method)(
                                v11,
                                v13,
                                &v28,
                                *(_QWORD *)(p_method + 8));
      if ( ((unsigned __int8)v6 & 1) != 0 )
      {
        if ( !v28 )
          break;
        if ( !v5 )
          break;
        v7 = *(Il2CppObject **)(v28 + 24);
        items = v5->fields._items;
        v24 = Method_System_Collections_Generic_List_string__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v7,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v7;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v7, v17, v18, v19, v20, v21, v22);
        }
      }
      if ( (__int64)++v8 >= (int)ids->max_length )
        goto LABEL_23;
    }
LABEL_26:
    sub_1C22094(v6, v7);
  }
LABEL_23:
  if ( !v5 )
    goto LABEL_26;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall BgmMaster__GetBgmPriority(
        BgmMaster_o *this,
        int32_t bgmId,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDC1DD & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    byte_4BDC1DD = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         bgmId,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1C22094(0LL, v7);
    return BgmEntity__GetPriorityBgm((BgmEntity_o *)entity, v7);
  }
  return defVal;
}


int32_t __fastcall BgmMaster__GetInvalidOverwrite(BgmMaster_o *this, int32_t bgmId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDC1DC & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    byte_4BDC1DC = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          bgmId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_1C22094(0LL, v5);
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
    sub_1C22094(this, x);
  return System_String__Equals_63123792((System_String_o *)this, x->fields.fileName, 0LL);
}