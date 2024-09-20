void __fastcall GachaBonusSelectLineupMaster___ctor(GachaBonusSelectLineupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B3D0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string___ctor__);
    byte_4A5B3D0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    190,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBonusSelectLineupEntity_o *__fastcall GachaBonusSelectLineupMaster__GetEntity(
        GachaBonusSelectLineupMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B3CE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__GetEntity__);
    byte_4A5B3CE = 1;
  }
  PK = (Il2CppObject *)GachaBonusSelectLineupEntity__CreatePK(id, type, giftId, *(const MethodInfo **)&giftId);
  return (GachaBonusSelectLineupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_311DC8C *)Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaBonusSelectLineupMaster__TryGetEntity(
        GachaBonusSelectLineupMaster_o *this,
        GachaBonusSelectLineupEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B3CF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__TryGetEntity__);
    byte_4A5B3CF = 1;
  }
  PK = (Il2CppObject *)GachaBonusSelectLineupEntity__CreatePK(id, type, giftId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_GachaBonusSelectLineupMaster__GachaBonusSelectLineupEntity__string__TryGetEntity__);
}


bool __fastcall GachaBonusSelectLineupMaster__TryGetEntityList(
        GachaBonusSelectLineupMaster_o *this,
        GachaBonusSelectLineupEntity_array **gachaBonusSelectLineupEntities,
        int32_t lineupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x21
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x8
  __int64 methodPtr_low; // x11
  struct System_Object_array *items; // x9
  _QWORD *v27; // x10
  __int64 size; // x11
  Il2CppClass **v29; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  System_Object_array *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3

  if ( (byte_4A5B3D1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&GachaBonusSelectLineupEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GachaBonusSelectLineupEntity__TypeInfo);
    byte_4A5B3D1 = 1;
  }
  *gachaBonusSelectLineupEntities = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)gachaBonusSelectLineupEntities, 0, lineupId, (int32_t)method);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GachaBonusSelectLineupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v24 = v20;
    if ( !v20
      || (methodPtr_low = LOBYTE(GachaBonusSelectLineupEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v20 + 304LL) < (unsigned int)methodPtr_low)
      || *(GachaBonusSelectLineupEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * methodPtr_low - 8) != GachaBonusSelectLineupEntity_TypeInfo )
    {
      sub_1B8880C(v20, v21);
    }
    if ( *(_DWORD *)(v20 + 16) == lineupId )
    {
      if ( !v7 )
        sub_1B8880C(v20, v21);
      items = v7->fields._items;
      v27 = Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1B8880C(v20, v21);
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v24;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), v24, v22, v23);
      }
    }
  }
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_31;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_31:
    v33 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                                                             Enumerator,
                                                             *(_QWORD *)(v33 + 8));
  if ( !v7
    || (v34 = System_Collections_Generic_List_object___ToArray(
                v7,
                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_GachaBonusSelectLineupEntity__ToArray__),
        *gachaBonusSelectLineupEntities = (GachaBonusSelectLineupEntity_array *)v34,
        sub_1B88554((ServantStatusBattleListViewItem_o *)gachaBonusSelectLineupEntities, (int32_t)v34, v35, v36),
        !*gachaBonusSelectLineupEntities) )
  {
LABEL_39:
    sub_1B8880C(list, v8);
  }
  return (*gachaBonusSelectLineupEntities)->max_length != 0;
}