void __fastcall EventServantMaster___ctor(EventServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C220AB & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string___ctor__, method);
    byte_4C220AB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    127,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_array *__fastcall EventServantMaster__GetEntities(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_4C220AF & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventServantEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1C3B764(&System_IDisposable_TypeInfo, v5);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_EventServantEntity__TypeInfo, v6);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventServantEntity__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventServantEntity__ToArray__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventServantEntity___ctor__, v10);
    sub_1C3B764(&System_Collections_Generic_List_EventServantEntity__TypeInfo, v11);
    byte_4C220AF = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventServantEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_EventServantEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_EventServantEntity__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v32 = v25;
    if ( v25 && *(_DWORD *)(v25 + 20) == svtId )
    {
      if ( !v12 )
        sub_1C3B9C0(v25, v25);
      items = v12->fields._items;
      v34 = Method_System_Collections_Generic_List_EventServantEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1C3B9C0(v25, v25);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v25,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v32;
        sub_1C3B708((PartyOrganizationUtility_o *)(v36 + 4), v32, v26, v27, v28, v29, v30, v31);
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_29;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_29:
    v40 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                                                             Enumerator,
                                                             *(_QWORD *)(v40 + 8));
  if ( !v12 )
LABEL_35:
    sub_1C3B9C0(list, v13);
  return (EventServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v12,
                                       (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventServantEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__GetEntity(
        EventServantMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *PK; // x1

  if ( (byte_4C220A9 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string__GetEntity__, *(_QWORD *)&eventId);
    sub_1C3B764(&EventServantEntity_TypeInfo, v7);
    byte_4C220A9 = 1;
  }
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
  PK = (Il2CppObject *)EventServantEntity__CreatePK(eventId, svtId, *(const MethodInfo **)&svtId);
  return (EventServantEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_329F900 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventServantMaster__TryGetEntity(
        EventServantMaster_o *this,
        EventServantEntity_o **entity,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *PK; // x2

  if ( (byte_4C220AA & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string__TryGetEntity__, entity);
    sub_1C3B764(&EventServantEntity_TypeInfo, v9);
    byte_4C220AA = 1;
  }
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
  PK = (Il2CppObject *)EventServantEntity__CreatePK(eventId, svtId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__getEntity(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  EventServantEntity_o *result; // x0

  if ( (byte_4C220AC & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__, v5);
    byte_4C220AC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_12;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventServantEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         list,
                                         v9,
                                         (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__);
      if ( result && result->fields.svtId == svtId )
        return result;
      if ( v8 == ++v9 )
        return 0LL;
    }
LABEL_12:
    sub_1C3B9C0(list, *(_QWORD *)&svtId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__getEntityServantIgnoreEnd(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  Il2CppObject *v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v18; // x24
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  void **v25; // x23
  int32_t v26; // w24
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Collections_Generic_IList_T__o *items; // x8
  _QWORD *v34; // x9
  __int64 klass_low; // x10
  __int64 v36; // x8
  System_Collections_Generic_List_object__o *v37; // x19
  System_Predicate_object__o *v38; // x20

  if ( (byte_4C220AD & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventServantEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventServantEntity__Find__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventServantEntity___ctor__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventServantEntity__get_Count__, v9);
    sub_1C3B764(&System_Collections_Generic_List_EventServantEntity__TypeInfo, v10);
    sub_1C3B764(&System_Predicate_EventServantEntity__TypeInfo, v11);
    sub_1C3B764(&Method_EventServantMaster___c__DisplayClass4_0__getEntityServantIgnoreEnd_b__0__, v12);
    sub_1C3B764(&EventServantMaster___c__DisplayClass4_0_TypeInfo, v13);
    byte_4C220AD = 1;
  }
  v14 = sub_1C3B9B0(EventServantMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventServantEntity___ctor__);
  if ( !v14 )
    goto LABEL_20;
  *(_QWORD *)(v14 + 16) = v18;
  v25 = (void **)(v14 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)v18, v19, v20, v21, v22, v23, v24);
  if ( Count >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v26,
                                                                 (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__);
      if ( list )
      {
        v15 = (Il2CppObject *)list;
        if ( HIDWORD(list->fields.items) == svtId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)*v25;
          if ( !*v25 )
            break;
          items = list->fields.items;
          v34 = Method_System_Collections_Generic_List_EventServantEntity__Add__;
          ++HIDWORD(list[1].klass);
          if ( !items )
            break;
          klass_low = SLODWORD(list[1].klass);
          if ( (unsigned int)klass_low >= LODWORD(items[1].monitor) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              v15,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = (__int64)items + 8 * klass_low;
            LODWORD(list[1].klass) = klass_low + 1;
            *(_QWORD *)(v36 + 32) = v15;
            sub_1C3B708((PartyOrganizationUtility_o *)(v36 + 32), (int64_t)v15, v27, v28, v29, v30, v31, v32);
          }
        }
      }
      if ( Count == ++v26 )
        goto LABEL_16;
    }
LABEL_20:
    sub_1C3B9C0(list, v15);
  }
LABEL_16:
  v37 = (System_Collections_Generic_List_object__o *)*v25;
  if ( !*v25 )
    goto LABEL_20;
  if ( v37->fields._size < 1 )
    return 0LL;
  v38 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_EventServantEntity__TypeInfo);
  System_Predicate_object____ctor(
    v38,
    (Il2CppObject *)v14,
    Method_EventServantMaster___c__DisplayClass4_0__getEntityServantIgnoreEnd_b__0__,
    0LL);
  return (EventServantEntity_o *)System_Collections_Generic_List_object___Find(
                                   v37,
                                   (System_Predicate_T__o *)v38,
                                   (const MethodInfo_368C2D4 *)Method_System_Collections_Generic_List_EventServantEntity__Find__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__getEntity_40698640(
        EventServantMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w22
  int32_t v11; // w23
  EventServantEntity_o *result; // x0

  if ( (byte_4C220AE & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__, v7);
    byte_4C220AE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventServantEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         list,
                                         v11,
                                         (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventServantEntity__get_Item__);
      if ( result && result->fields.eventId == eventId && result->fields.svtId == svtId )
        return result;
      if ( v10 == ++v11 )
        return 0LL;
    }
LABEL_13:
    sub_1C3B9C0(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}


void __fastcall EventServantMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C220B0 & 1) == 0 )
  {
    sub_1C3B764(&EventServantMaster___c_TypeInfo, v1);
    byte_4C220B0 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(EventServantMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventServantMaster___c_TypeInfo->static_fields->__9 = (struct EventServantMaster___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventServantMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall EventServantMaster___c___ctor(EventServantMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall EventServantMaster___c___getEntityServantIgnoreEnd_b__4_1(
        EventServantMaster___c_o *this,
        EventServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  return x->fields.endedAt;
}


void __fastcall EventServantMaster___c__DisplayClass4_0___ctor(
        EventServantMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventServantMaster___c__DisplayClass4_0___getEntityServantIgnoreEnd_b__0(
        EventServantMaster___c__DisplayClass4_0_o *this,
        EventServantEntity_o *a,
        const MethodInfo *method)
{
  EventServantMaster___c__DisplayClass4_0_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t endedAt; // x22
  System_Collections_Generic_IEnumerable_TSource__o *servantEntitys; // x19
  EventServantMaster___c_c *v10; // x0
  System_Func_T__TResult__o *_9__4_1; // x20
  Il2CppObject *v12; // x21
  struct EventServantMaster___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v20; // x0

  v4 = this;
  if ( (byte_4C220B1 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Select_EventServantEntity__long___, a);
    sub_1C3B764(&System_Func_EventServantEntity__long__TypeInfo, v5);
    sub_1C3B764(&Method_EventServantMaster___c__getEntityServantIgnoreEnd_b__4_1__, v6);
    this = (EventServantMaster___c__DisplayClass4_0_o *)sub_1C3B764(&EventServantMaster___c_TypeInfo, v7);
    byte_4C220B1 = 1;
  }
  if ( !a )
    sub_1C3B9C0(this, a);
  endedAt = a->fields.endedAt;
  servantEntitys = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.servantEntitys;
  v10 = EventServantMaster___c_TypeInfo;
  if ( !EventServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantMaster___c_TypeInfo);
    v10 = EventServantMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_T__TResult__o *)v10->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = EventServantMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__4_1 = (System_Func_T__TResult__o *)sub_1C3B9B0(System_Func_EventServantEntity__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__4_1,
      v12,
      Method_EventServantMaster___c__getEntityServantIgnoreEnd_b__4_1__,
      0LL);
    static_fields = EventServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_1 = (struct System_Func_EventServantEntity__long__o *)_9__4_1;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__4_1, (int64_t)_9__4_1, v14, v15, v16, v17, v18, v19);
  }
  v20 = System_Linq_Enumerable__Select_object__long_(
          servantEntitys,
          (System_Func_TSource__TResult__o *)_9__4_1,
          (const MethodInfo_30227A8 *)Method_System_Linq_Enumerable_Select_EventServantEntity__long___);
  return endedAt == System_Linq_Enumerable__Max_65592380((System_Collections_Generic_IEnumerable_long__o *)v20, 0LL);
}