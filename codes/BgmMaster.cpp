void __fastcall BgmMaster___ctor(BgmMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E9C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__, method, v2);
    byte_4B15E9C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    81,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BgmMaster__GetBgmFileName(
        BgmMaster_o *this,
        int32_t id,
        System_String_o *defName,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = defName;
  if ( (byte_4B15E9E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, *(_QWORD *)&id, defName);
    byte_4B15E9E = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1BCAA3C(v7, v8);
    return (System_String_o *)entity[1].monitor;
  }
  return v4;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Func_object__bool__o *v28; // x21
  Il2CppObject *v29; // x0

  v4 = defId;
  if ( (byte_4B15E9F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___, bgmName, *(_QWORD *)&defId);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_BgmEntity___, v7, v8);
    sub_1BCA7E0(&System_Func_BgmEntity__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__, v11, v12);
    sub_1BCA7E0(&BgmMaster___c__DisplayClass3_0_TypeInfo, v13, v14);
    byte_4B15E9F = 1;
  }
  v15 = sub_1BCAA2C(BgmMaster___c__DisplayClass3_0_TypeInfo, bgmName, *(_QWORD *)&defId, method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_QWORD *)(v15 + 16) = bgmName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)bgmName, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_BgmEntity___);
  v28 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BgmEntity__bool__TypeInfo, v25, v26, v27);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v15,
    Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__,
    0LL);
  v29 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          v24,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___);
  if ( v29 )
    return (int32_t)v29[1].klass;
  return v4;
}


System_String_array *__fastcall BgmMaster__GetBgmNameListWithIds(
        BgmMaster_o *this,
        System_Int32_array *ids,
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
  System_Collections_Generic_List_object__o *v16; // x21
  System_String_o *v17; // x0
  Il2CppObject *v18; // x1
  unsigned __int64 i; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v21; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v22; // x22
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v24; // x23
  __int64 v25; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 methodPtr_low; // x9
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  BgmMaster_o *v40; // x0
  int32_t v41; // w1
  System_String_o *v42; // x2
  const MethodInfo *v43; // x3
  System_String_o *v44; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B15E9D & 1) == 0 )
  {
    sub_1BCA7E0(&BgmEntity_TypeInfo, ids, method);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v14, v15);
    byte_4B15E9D = 1;
  }
  v44 = 0LL;
  if ( !ids || !*(_QWORD *)&ids->max_length )
    return 0LL;
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       ids,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)ids->max_length >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)ids->max_length; ++i )
    {
      lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( i >= ids->max_length )
        sub_1BCAA44(lookup, v21);
      v22 = lookup;
      v17 = System_Int32__ToString((int)ids + 4 * (int)i + 32, 0LL);
      if ( !v22 )
        goto LABEL_28;
      klass = v22->klass;
      v24 = v17;
      v25 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
      {
        p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v25;
          p_offset += 2;
          if ( !v25 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
      }
      else
      {
LABEL_13:
        p_method = sub_1C1C7C0(
                     v22,
                     System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                     1LL);
      }
      v17 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, System_String_o **, _QWORD))p_method)(
                                 v22,
                                 v24,
                                 &v44,
                                 *(_QWORD *)(p_method + 8));
      if ( ((unsigned __int8)v17 & 1) != 0 )
      {
        v17 = v44;
        if ( !v44 )
          goto LABEL_28;
        v18 = (Il2CppObject *)BgmEntity_TypeInfo;
        methodPtr_low = LOBYTE(BgmEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v44->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (BgmEntity_c *)v44->klass->_2.typeHierarchy[methodPtr_low - 1] != BgmEntity_TypeInfo )
        {
          sub_1BCACFC(v44);
          return (System_String_array *)BgmMaster__GetBgmFileName(v40, v41, v42, v43);
        }
        if ( !v16 )
          goto LABEL_28;
        v18 = (Il2CppObject *)v44[1].klass;
        items = v16->fields._items;
        v36 = Method_System_Collections_Generic_List_string__Add__;
        ++v16->fields._version;
        if ( !items )
          goto LABEL_28;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            v18,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v18;
          sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)v18, v28, v29, v30, v31, v32, v33);
        }
      }
    }
  }
  if ( !v16 )
LABEL_28:
    sub_1BCAA3C(v17, v18);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v16,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BgmMaster__GetBgmPriority(
        BgmMaster_o *this,
        int32_t bgmId,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  const MethodInfo *v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = defVal;
  if ( (byte_4B15EA1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, *(_QWORD *)&bgmId, *(_QWORD *)&defVal);
    byte_4B15EA1 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         bgmId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1BCAA3C(0LL, v7);
    return BgmEntity__GetPriorityBgm((BgmEntity_o *)entity, v7);
  }
  return v4;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BgmMaster__GetInvalidOverwrite(BgmMaster_o *this, int32_t bgmId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15EA0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, *(_QWORD *)&bgmId, method);
    byte_4B15EA0 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          bgmId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_1BCAA3C(0LL, v5);
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
    sub_1BCAA3C(this, x);
  return System_String__Equals_62409536((System_String_o *)this, x->fields.fileName, 0LL);
}