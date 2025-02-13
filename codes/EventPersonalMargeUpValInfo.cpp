void __fastcall EventPersonalMargeUpValInfo___ctor(
        EventPersonalMargeUpValInfo_o *this,
        int32_t eventId,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct ServantEntity_o **p_servantEntity; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4BDC0F7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4BDC0F7 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v7;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.margeList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  *((_DWORD *)p_servantEntity - 2) = eventId;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_servantEntity, (int64_t)servantEntity, v15, v16, v17, v18, v19, v20);
}


void __fastcall EventPersonalMargeUpValInfo__Add(
        EventPersonalMargeUpValInfo_o *this,
        EventDropItemUpValInfo_array *dropItemInfoList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  __int64 v6; // x0
  EventDropItemUpValInfo_o *v7; // x1
  int64_t v8; // x2
  const MethodInfo *v9; // x3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  signed int max_length; // w8
  __int64 v15; // x22
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BDC0FB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    byte_4BDC0FB = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( dropItemInfoList )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    max_length = dropItemInfoList->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= max_length )
          sub_1C2209C(v6, v7);
        v7 = dropItemInfoList->m_Items[v15];
        if ( !v7 )
          break;
        if ( v7->fields.isInvalid )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v17 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v7,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v7;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 4), (int64_t)v7, v8, (int32_t)v9, v10, v11, v12, v13);
          }
        }
        else
        {
          EventPersonalMargeUpValInfo__Add_40160044(this, v7, 0, v9);
        }
        max_length = dropItemInfoList->max_length;
        if ( (int)++v15 >= max_length )
          goto LABEL_16;
      }
LABEL_22:
      sub_1C22094(v6, v7);
    }
LABEL_16:
    if ( !v5 )
      goto LABEL_22;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      v5,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__) )
      EventPersonalMargeUpValInfo__Add_40160044(this, (EventDropItemUpValInfo_o *)v21.fields._current, 1, v20);
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
  }
}


void __fastcall EventPersonalMargeUpValInfo__Add_40160044(
        EventPersonalMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        bool isInvalid,
        const MethodInfo *method)
{
  unsigned int baseFuncType; // w8
  int v8; // w9
  System_Collections_Generic_List_object__o *margeList; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  EventMargeItemUpValInfo_o *current; // x22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  _BOOL8 v15; // x0
  __int64 v16; // x1
  int32_t rateCount; // w8
  _BOOL8 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x8
  EventMargeItemUpValInfo_o *v31; // x20
  const MethodInfo *v32; // x2
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x8
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BDC0FC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_1C21E38(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    byte_4BDC0FC = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( !dropItemInfo || dropItemInfo->fields.eventId != this->fields.eventId )
    return;
  baseFuncType = dropItemInfo->fields.baseFuncType;
  if ( baseFuncType - 111 > 0x15 )
  {
LABEL_14:
    if ( baseFuncType > 0x10 || ((1 << baseFuncType) & 0x10082) == 0 )
    {
      margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
      if ( !margeList )
        goto LABEL_63;
      if ( baseFuncType == 116 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v43,
          margeList,
          (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v44 = v43;
        while ( 1 )
        {
          v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v44,
                  (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v15 )
            break;
          current = (EventMargeItemUpValInfo_o *)v44.fields._current;
          if ( !v44.fields._current )
            sub_1C22094(v15, v16);
          if ( LODWORD(v44.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
            && v44.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v44,
              (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
            if ( isInvalid )
              return;
            rateCount = dropItemInfo->fields.rateCount;
            if ( current->fields.rateCount <= rateCount )
              return;
LABEL_53:
            current->fields.rateCount = rateCount;
            return;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v44,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        v31 = (EventMargeItemUpValInfo_o *)sub_1C22084(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor(v31, dropItemInfo, v32);
        if ( v31 )
        {
          v31->fields.rateCount = dropItemInfo->fields.rateCount;
          margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
          if ( margeList )
          {
            items = margeList->fields._items;
            v40 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++margeList->fields._version;
            if ( items )
            {
              size = margeList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  margeList,
                  (Il2CppObject *)v31,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
              }
              else
              {
                v42 = &items->obj.klass + size;
                margeList->fields._size = size + 1;
                v42[4] = (Il2CppClass *)v31;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)v31, v33, v34, v35, v36, v37, v38);
              }
              return;
            }
          }
        }
LABEL_63:
        sub_1C22094(margeList, dropItemInfo);
      }
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v43,
        margeList,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v44 = v43;
      do
      {
        v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v44,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v18 )
          goto LABEL_40;
        current = (EventMargeItemUpValInfo_o *)v44.fields._current;
        if ( !v44.fields._current )
          sub_1C22094(v18, v19);
      }
      while ( LODWORD(v44.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId
           || v44.fields._current[5].klass != (Il2CppClass *)dropItemInfo->fields.itemEntity );
LABEL_22:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v44,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( !isInvalid )
        goto LABEL_50;
      goto LABEL_44;
    }
    goto LABEL_16;
  }
  v8 = 1 << (baseFuncType - 111);
  if ( (v8 & 0x240001) == 0 )
  {
    if ( (v8 & 0x18) != 0 )
    {
      margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
      if ( !margeList )
        goto LABEL_63;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v43,
        margeList,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v44 = v43;
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v44,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v10 )
          goto LABEL_40;
        current = (EventMargeItemUpValInfo_o *)v44.fields._current;
        if ( !v44.fields._current )
          sub_1C22094(v10, v11);
        if ( LODWORD(v44.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
          goto LABEL_22;
      }
    }
    goto LABEL_14;
  }
LABEL_16:
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !margeList )
    goto LABEL_63;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    margeList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v44 = v43;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v13 )
      break;
    current = (EventMargeItemUpValInfo_o *)v44.fields._current;
    if ( !v44.fields._current )
      sub_1C22094(v13, v14);
    if ( LODWORD(v44.fields._current[4].klass) == dropItemInfo->fields.targetType
      && LODWORD(v44.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
    {
      goto LABEL_22;
    }
  }
LABEL_40:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  current = (EventMargeItemUpValInfo_o *)sub_1C22084(EventMargeItemUpValInfo_TypeInfo);
  EventMargeItemUpValInfo___ctor(current, dropItemInfo, v20);
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !margeList )
    goto LABEL_63;
  v27 = margeList->fields._items;
  v28 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
  ++margeList->fields._version;
  if ( !v27 )
    goto LABEL_63;
  v29 = margeList->fields._size;
  if ( (unsigned int)v29 < v27->max_length )
  {
    v30 = &v27->obj.klass + v29;
    margeList->fields._size = v29 + 1;
    v30[4] = (Il2CppClass *)current;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)current, v21, v22, v23, v24, v25, v26);
    if ( isInvalid )
      goto LABEL_44;
    goto LABEL_50;
  }
  System_Collections_Generic_List_object___AddWithResize(
    margeList,
    (Il2CppObject *)current,
    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  if ( !isInvalid )
  {
LABEL_50:
    if ( current )
    {
      current->fields.addCount += dropItemInfo->fields.addCount;
LABEL_52:
      rateCount = dropItemInfo->fields.rateCount + current->fields.rateCount;
      goto LABEL_53;
    }
    goto LABEL_63;
  }
LABEL_44:
  if ( !current )
    goto LABEL_63;
  if ( !current->fields.addCount )
    current->fields.addCount += dropItemInfo->fields.addCount;
  if ( !current->fields.rateCount )
    goto LABEL_52;
}


int32_t __fastcall EventPersonalMargeUpValInfo__GetCount(EventPersonalMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPersonalMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4BDC0F9 & 1) == 0 )
  {
    this = (EventPersonalMargeUpValInfo_o *)sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4BDC0F9 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1C22094(this, method);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventPersonalMargeUpValInfo__GetList(
        EventPersonalMargeUpValInfo_o *this,
        const MethodInfo *method)
{
  void *v3; // x0
  System_Collections_Generic_List_object__o *margeList; // x20
  System_Comparison_T__o *v5; // x21
  Il2CppObject *v6; // x22
  struct EventPersonalMargeUpValInfo___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDC0FD & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C21E38(&Method_EventPersonalMargeUpValInfo___c__GetList_b__9_0__);
    sub_1C21E38(&EventPersonalMargeUpValInfo___c_TypeInfo);
    byte_4BDC0FD = 1;
  }
  v3 = EventPersonalMargeUpValInfo___c_TypeInfo;
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !EventPersonalMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPersonalMargeUpValInfo___c_TypeInfo);
    v3 = EventPersonalMargeUpValInfo___c_TypeInfo;
  }
  v5 = *(System_Comparison_T__o **)(*((_QWORD *)v3 + 23) + 8LL);
  if ( !v5 )
  {
    if ( !*((_DWORD *)v3 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EventPersonalMargeUpValInfo___c_TypeInfo;
    }
    v6 = (Il2CppObject *)**((_QWORD **)v3 + 23);
    v5 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(v5, v6, Method_EventPersonalMargeUpValInfo___c__GetList_b__9_0__, 0LL);
    static_fields = EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v5;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__9_0, (int64_t)v5, v8, v9, v10, v11, v12, v13);
  }
  if ( !margeList
    || (System_Collections_Generic_List_object___Sort_56953720(
          margeList,
          v5,
          (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v3 = this->fields.margeList) == 0LL) )
  {
    sub_1C22094(v3, method);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v3,
                                            (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMargeItemUpValInfo_o *__fastcall EventPersonalMargeUpValInfo__GetMargeItem(
        EventPersonalMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *margeList; // x0

  if ( (byte_4BDC0FA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
    byte_4BDC0FA = 1;
  }
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !margeList )
    sub_1C22094(0LL, *(_QWORD *)&index);
  if ( margeList->fields._size <= index )
    return 0LL;
  else
    return (EventMargeItemUpValInfo_o *)System_Collections_Generic_List_object___get_Item(
                                          margeList,
                                          index,
                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
}


bool __fastcall EventPersonalMargeUpValInfo__IsEmpty(EventPersonalMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPersonalMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4BDC0F8 & 1) == 0 )
  {
    this = (EventPersonalMargeUpValInfo_o *)sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4BDC0F8 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1C22094(this, method);
  return margeList->fields._size < 1;
}


void __fastcall EventPersonalMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC0FE & 1) == 0 )
  {
    sub_1C21E38(&EventPersonalMargeUpValInfo___c_TypeInfo);
    byte_4BDC0FE = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(EventPersonalMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventPersonalMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventPersonalMargeUpValInfo___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventPersonalMargeUpValInfo___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventPersonalMargeUpValInfo___c___ctor(
        EventPersonalMargeUpValInfo___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventPersonalMargeUpValInfo___c___GetList_b__9_0(
        EventPersonalMargeUpValInfo___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  int32_t priority1; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !a || !b )
    sub_1C22094(this, a);
  priority1 = a->fields.priority1;
  v5 = b->fields.priority1;
  result = v5 - priority1;
  if ( v5 == priority1 )
    return a->fields.priority2 - b->fields.priority2;
  return result;
}