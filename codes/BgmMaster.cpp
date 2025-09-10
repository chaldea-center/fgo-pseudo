void BgmMaster___ctor(BgmMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C26F3C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__);
    byte_4C26F3C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    85,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__);
}


System_String_o *BgmMaster__GetBgmFileName(
        BgmMaster_o *this,
        int32_t id,
        System_String_o *defName,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C26F3E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    byte_4C26F3E = 1;
  }
  entity = 0;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_3387DE4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1C2D6EC(v7, v8);
    return *(System_String_o **)((char *)&off_18 + (_QWORD)entity);
  }
  return defName;
}


int32_t BgmMaster__GetBgmIdFromFileName(
        BgmMaster_o *this,
        System_String_o *bgmName,
        int32_t defId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x20
  System_Func_object__bool__o *v13; // x21
  Il2CppObject *v14; // x0

  if ( (byte_4C26F3F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_OfType_BgmEntity___);
    sub_1C2D490(&System_Func_BgmEntity__bool__TypeInfo);
    sub_1C2D490(&Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__);
    sub_1C2D490(&BgmMaster___c__DisplayClass3_0_TypeInfo);
    byte_4C26F3F = 1;
  }
  v7 = sub_1C2D6DC(BgmMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 16) = bgmName;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)bgmName, v10, v11);
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_30FDB2C *)Method_System_Linq_Enumerable_OfType_BgmEntity___);
  v13 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BgmEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__,
    0);
  v14 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
          v12,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___);
  if ( v14 )
    return (int32_t)v14[1].klass;
  return defId;
}


System_String_array *BgmMaster__GetBgmNameListWithIds(
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
  __int64 v11; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v12; // x22
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_String_o *v14; // x23
  __int64 v15; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__BgmEntity__c **p_offset; // x10
  __int64 v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  __int64 v25; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C26F3D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_BgmMaster__BgmEntity__int__get_lookup__);
    sub_1C2D490(&System_Collections_Generic_IReadOnlyDictionary_string__BgmEntity__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    byte_4C26F3D = 1;
  }
  v25 = 0;
  if ( !ids || !ids->max_length )
    return 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( SLODWORD(ids->max_length) >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      lookup = DataMasterBase_object__object__int___get_lookup(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 (const MethodInfo_3385B8C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__get_lookup__);
      if ( v8 >= LODWORD(ids->max_length) )
        sub_1C2D6F4(lookup, v10, v11);
      v12 = lookup;
      v6 = System_Int32__ToString((int)ids + 4 * (int)v8 + 32, 0);
      if ( !v12 )
        break;
      klass = v12->klass;
      v14 = v6;
      v15 = *(unsigned __int16 *)&v12->klass->_2.rank;
      if ( *(_WORD *)&v12->klass->_2.rank )
      {
        p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__BgmEntity__c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__BgmEntity__TypeInfo )
        {
          --v15;
          p_offset += 2;
          if ( !v15 )
            goto LABEL_13;
        }
        v17 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
      }
      else
      {
LABEL_13:
        v17 = sub_1C7DCA8(v12, System_Collections_Generic_IReadOnlyDictionary_string__BgmEntity__TypeInfo, 1);
      }
      v6 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, __int64 *, _QWORD))v17)(
                                v12,
                                v14,
                                &v25,
                                *(_QWORD *)(v17 + 8));
      if ( ((unsigned __int8)v6 & 1) != 0 )
      {
        if ( !v25 )
          break;
        if ( !v5 )
          break;
        v7 = *(Il2CppObject **)(v25 + 24);
        items = v5->fields._items;
        v21 = Method_System_Collections_Generic_List_string__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v7,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v7;
          sub_1C2D434((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v7, v18, v19);
        }
      }
      if ( (__int64)++v8 >= SLODWORD(ids->max_length) )
        goto LABEL_23;
    }
LABEL_26:
    sub_1C2D6EC(v6, v7);
  }
LABEL_23:
  if ( !v5 )
    goto LABEL_26;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t BgmMaster__GetBgmPriority(BgmMaster_o *this, int32_t bgmId, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C26F41 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    byte_4C26F41 = 1;
  }
  entity = 0;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         bgmId,
         (const MethodInfo_3387DE4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1C2D6EC(0, v7);
    return BgmEntity__GetPriorityBgm((BgmEntity_o *)entity, v7);
  }
  return defVal;
}


int32_t BgmMaster__GetInvalidOverwrite(BgmMaster_o *this, int32_t bgmId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C26F40 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    byte_4C26F40 = 1;
  }
  entity = 0;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          bgmId,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_1C2D6EC(0, v5);
  return BgmEntity__GetInvalidOverwrite((BgmEntity_o *)entity, v5);
}


void BgmMaster___c__DisplayClass3_0___ctor(BgmMaster___c__DisplayClass3_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmMaster___c__DisplayClass3_0___GetBgmIdFromFileName_b__0(
        BgmMaster___c__DisplayClass3_0_o *this,
        BgmEntity_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (BgmMaster___c__DisplayClass3_0_o *)this->fields.bgmName) == 0 )
    sub_1C2D6EC(this, x);
  return System_String__Equals_63493168((System_String_o *)this, x->fields.fileName, 0);
}