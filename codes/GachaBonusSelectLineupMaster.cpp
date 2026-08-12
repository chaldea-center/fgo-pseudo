void GachaBonusSelectLineupMaster___ctor(GachaBonusSelectLineupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970C0F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string___ctor__);
    byte_5970C0F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    196,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBonusSelectLineupEntity_o *GachaBonusSelectLineupMaster__GetEntity(
        GachaBonusSelectLineupMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970C0D & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__GetEntity__);
    byte_5970C0D = 1;
  }
  PK = (Il2CppObject *)GachaBonusSelectLineupEntity__CreatePK(id, type, giftId, *(const MethodInfo **)&giftId);
  return (GachaBonusSelectLineupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_3F157EC *)Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool GachaBonusSelectLineupMaster__TryGetEntity(
        GachaBonusSelectLineupMaster_o *this,
        GachaBonusSelectLineupEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5970C0E & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__TryGetEntity__);
    byte_5970C0E = 1;
  }
  PK = (Il2CppObject *)GachaBonusSelectLineupEntity__CreatePK(id, type, giftId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool GachaBonusSelectLineupMaster__TryGetEntityList(
        GachaBonusSelectLineupMaster_o *this,
        GachaBonusSelectLineupEntity_array **gachaBonusSelectLineupEntities,
        int32_t lineupId,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x1
  __int64 list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int *p_offset; // x10
  __int64 v20; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  System_Object_array *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Collections_Generic_IEnumerator_T__o *v49; // [xsp+18h] [xbp-48h]

  if ( (byte_5970C10 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_GachaBonusSelectLineupEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_GachaBonusSelectLineupEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GachaBonusSelectLineupEntity__TypeInfo);
    byte_5970C10 = 1;
  }
  *gachaBonusSelectLineupEntities = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)gachaBonusSelectLineupEntities,
    0,
    *(System_String_o **)&lineupId,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GachaBonusSelectLineupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_43;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_GachaBonusSelectLineupEntity__GetEnumerator__);
  v49 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v15);
  for ( i = Enumerator; ; i = v49 )
  {
    klass = i->klass;
    v18 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_10;
      }
      v20 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v20 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
             i,
             *(_QWORD *)(v20 + 8));
    if ( (list & 1) == 0 )
      break;
    if ( !v49 )
      sub_2213CDC(list, v12);
    v21 = v49->klass;
    v22 = *(unsigned __int16 *)&v49->klass->_2.rank;
    if ( *(_WORD *)&v49->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaBonusSelectLineupEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_GachaBonusSelectLineupEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_18;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_18:
      v24 = sub_224BC3C(v49, System_Collections_Generic_IEnumerator_GachaBonusSelectLineupEntity__TypeInfo, 0);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            v49,
            *(_QWORD *)(v24 + 8));
    v32 = v25;
    if ( !v25 )
      sub_2213CDC(0, 0);
    if ( *(_DWORD *)(v25 + 16) == lineupId )
    {
      if ( !v11
        || (items = v11->fields._items,
            v34 = Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__Add__,
            ++v11->fields._version,
            !items) )
      {
        sub_2213CDC(v25, v25);
      }
      size = v11->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v25,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v32;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), v32, v26, v27, v28, v29, v30, v31);
      }
    }
  }
  if ( v49 )
  {
    v37 = v49->klass;
    v38 = *(unsigned __int16 *)&v49->klass->_2.rank;
    if ( *(_WORD *)&v49->klass->_2.rank )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_34;
      }
      v40 = (__int64)&v37->vtable[*v39];
    }
    else
    {
LABEL_34:
      v40 = sub_224BC3C(v49, System_IDisposable_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
             v49,
             *(_QWORD *)(v40 + 8));
  }
  if ( !v11
    || (v41 = System_Collections_Generic_List_object___ToArray(
                v11,
                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__ToArray__),
        *gachaBonusSelectLineupEntities = (GachaBonusSelectLineupEntity_array *)v41,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)gachaBonusSelectLineupEntities,
          (int32_t)v41,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47),
        !*gachaBonusSelectLineupEntities) )
  {
LABEL_43:
    sub_2213CDC(list, v12);
  }
  return LODWORD((*gachaBonusSelectLineupEntities)->max_length) != 0;
}