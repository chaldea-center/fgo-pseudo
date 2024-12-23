// local variable allocation has failed, the output may be wrong!
void __fastcall EventPersonalMargeUpValInfo___ctor(
        EventPersonalMargeUpValInfo_o *this,
        int32_t eventId,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct ServantEntity_o **p_servantEntity; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B66766 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v7);
    byte_4B66766 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v8;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.margeList, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  *((_DWORD *)p_servantEntity - 2) = eventId;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_servantEntity, (int64_t)servantEntity, v16, v17, v18, v19, v20, v21);
}


void __fastcall EventPersonalMargeUpValInfo__Add(
        EventPersonalMargeUpValInfo_o *this,
        EventDropItemUpValInfo_array *dropItemInfoList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  __int64 v12; // x0
  EventDropItemUpValInfo_o *v13; // x1
  int64_t v14; // x2
  const MethodInfo *v15; // x3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  signed int max_length; // w8
  __int64 v21; // x22
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  const MethodInfo *v26; // x3
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B6676A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__, dropItemInfoList);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v10);
    byte_4B6676A = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( dropItemInfoList )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    max_length = dropItemInfoList->max_length;
    if ( max_length >= 1 )
    {
      v21 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v21 >= max_length )
          sub_1BE4D30(v12, v13);
        v13 = dropItemInfoList->m_Items[v21];
        if ( !v13 )
          break;
        if ( v13->fields.isInvalid )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v23 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v13,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v13;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)v13, v14, (int32_t)v15, v16, v17, v18, v19);
          }
        }
        else
        {
          EventPersonalMargeUpValInfo__Add_39816660(this, v13, 0, v15);
        }
        max_length = dropItemInfoList->max_length;
        if ( (int)++v21 >= max_length )
          goto LABEL_16;
      }
LABEL_22:
      sub_1BE4D28(v12, v13);
    }
LABEL_16:
    if ( !v11 )
      goto LABEL_22;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      v11,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__) )
      EventPersonalMargeUpValInfo__Add_39816660(this, (EventDropItemUpValInfo_o *)v27.fields._current, 1, v26);
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
  }
}


void __fastcall EventPersonalMargeUpValInfo__Add_39816660(
        EventPersonalMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        bool isInvalid,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  unsigned int baseFuncType; // w8
  int v13; // w9
  System_Collections_Generic_List_object__o *margeList; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMargeItemUpValInfo_o *current; // x22
  _BOOL8 v18; // x0
  __int64 v19; // x1
  _BOOL8 v20; // x0
  __int64 v21; // x1
  int32_t rateCount; // w8
  _BOOL8 v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x8
  EventMargeItemUpValInfo_o *v36; // x20
  const MethodInfo *v37; // x2
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x8
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B6676B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__, dropItemInfo);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v8);
    sub_1BE4ACC(&EventMargeItemUpValInfo_TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__, v11);
    byte_4B6676B = 1;
  }
  memset(&v49, 0, sizeof(v49));
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v48,
          margeList,
          (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v49 = v48;
        while ( 1 )
        {
          v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v49,
                  (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v20 )
            break;
          current = (EventMargeItemUpValInfo_o *)v49.fields._current;
          if ( !v49.fields._current )
            sub_1BE4D28(v20, v21);
          if ( LODWORD(v49.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
            && v49.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v49,
              (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
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
          &v49,
          (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        v36 = (EventMargeItemUpValInfo_o *)sub_1BE4D18(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor(v36, dropItemInfo, v37);
        if ( v36 )
        {
          v36->fields.rateCount = dropItemInfo->fields.rateCount;
          margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
          if ( margeList )
          {
            items = margeList->fields._items;
            v45 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++margeList->fields._version;
            if ( items )
            {
              size = margeList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  margeList,
                  (Il2CppObject *)v36,
                  *(const MethodInfo_35EC224 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
              }
              else
              {
                v47 = &items->obj.klass + size;
                margeList->fields._size = size + 1;
                v47[4] = (Il2CppClass *)v36;
                sub_1BE4A70((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v36, v38, v39, v40, v41, v42, v43);
              }
              return;
            }
          }
        }
LABEL_63:
        sub_1BE4D28(margeList, dropItemInfo);
      }
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v48,
        margeList,
        (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v49 = v48;
      do
      {
        v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v49,
                (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v23 )
          goto LABEL_40;
        current = (EventMargeItemUpValInfo_o *)v49.fields._current;
        if ( !v49.fields._current )
          sub_1BE4D28(v23, v24);
      }
      while ( LODWORD(v49.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId
           || v49.fields._current[5].klass != (Il2CppClass *)dropItemInfo->fields.itemEntity );
LABEL_22:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v49,
        (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( !isInvalid )
        goto LABEL_50;
      goto LABEL_44;
    }
    goto LABEL_16;
  }
  v13 = 1 << (baseFuncType - 111);
  if ( (v13 & 0x240001) == 0 )
  {
    if ( (v13 & 0x18) != 0 )
    {
      margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
      if ( !margeList )
        goto LABEL_63;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v48,
        margeList,
        (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v49 = v48;
      while ( 1 )
      {
        v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v49,
                (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v15 )
          goto LABEL_40;
        current = (EventMargeItemUpValInfo_o *)v49.fields._current;
        if ( !v49.fields._current )
          sub_1BE4D28(v15, v16);
        if ( LODWORD(v49.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    margeList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v49 = v48;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v49,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v18 )
      break;
    current = (EventMargeItemUpValInfo_o *)v49.fields._current;
    if ( !v49.fields._current )
      sub_1BE4D28(v18, v19);
    if ( LODWORD(v49.fields._current[4].klass) == dropItemInfo->fields.targetType
      && LODWORD(v49.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
    {
      goto LABEL_22;
    }
  }
LABEL_40:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  current = (EventMargeItemUpValInfo_o *)sub_1BE4D18(EventMargeItemUpValInfo_TypeInfo);
  EventMargeItemUpValInfo___ctor(current, dropItemInfo, v25);
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !margeList )
    goto LABEL_63;
  v32 = margeList->fields._items;
  v33 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
  ++margeList->fields._version;
  if ( !v32 )
    goto LABEL_63;
  v34 = margeList->fields._size;
  if ( (unsigned int)v34 < v32->max_length )
  {
    v35 = &v32->obj.klass + v34;
    margeList->fields._size = v34 + 1;
    v35[4] = (Il2CppClass *)current;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)current, v26, v27, v28, v29, v30, v31);
    if ( isInvalid )
      goto LABEL_44;
    goto LABEL_50;
  }
  System_Collections_Generic_List_object___AddWithResize(
    margeList,
    (Il2CppObject *)current,
    *(const MethodInfo_35EC224 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
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
  if ( (byte_4B66768 & 1) == 0 )
  {
    this = (EventPersonalMargeUpValInfo_o *)sub_1BE4ACC(
                                              &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                              method);
    byte_4B66768 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1BE4D28(this, method);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventPersonalMargeUpValInfo__GetList(
        EventPersonalMargeUpValInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  void *v7; // x0
  System_Collections_Generic_List_object__o *margeList; // x20
  System_Comparison_T__o *v9; // x21
  Il2CppObject *v10; // x22
  struct EventPersonalMargeUpValInfo___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B6676C & 1) == 0 )
  {
    sub_1BE4ACC(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v4);
    sub_1BE4ACC(&Method_EventPersonalMargeUpValInfo___c__GetList_b__9_0__, v5);
    sub_1BE4ACC(&EventPersonalMargeUpValInfo___c_TypeInfo, v6);
    byte_4B6676C = 1;
  }
  v7 = EventPersonalMargeUpValInfo___c_TypeInfo;
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !EventPersonalMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPersonalMargeUpValInfo___c_TypeInfo);
    v7 = EventPersonalMargeUpValInfo___c_TypeInfo;
  }
  v9 = *(System_Comparison_T__o **)(*((_QWORD *)v7 + 23) + 8LL);
  if ( !v9 )
  {
    if ( !*((_DWORD *)v7 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = EventPersonalMargeUpValInfo___c_TypeInfo;
    }
    v10 = (Il2CppObject *)**((_QWORD **)v7 + 23);
    v9 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(v9, v10, Method_EventPersonalMargeUpValInfo___c__GetList_b__9_0__, 0LL);
    static_fields = EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v9;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__9_0, (int64_t)v9, v12, v13, v14, v15, v16, v17);
  }
  if ( !margeList
    || (System_Collections_Generic_List_object___Sort_56548584(
          margeList,
          v9,
          (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v7 = this->fields.margeList) == 0LL) )
  {
    sub_1BE4D28(v7, method);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v7,
                                            (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMargeItemUpValInfo_o *__fastcall EventPersonalMargeUpValInfo__GetMargeItem(
        EventPersonalMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *margeList; // x0

  if ( (byte_4B66769 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, *(_QWORD *)&index);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__, v5);
    byte_4B66769 = 1;
  }
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !margeList )
    sub_1BE4D28(0LL, *(_QWORD *)&index);
  if ( margeList->fields._size <= index )
    return 0LL;
  else
    return (EventMargeItemUpValInfo_o *)System_Collections_Generic_List_object___get_Item(
                                          margeList,
                                          index,
                                          (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
}


bool __fastcall EventPersonalMargeUpValInfo__IsEmpty(EventPersonalMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPersonalMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4B66767 & 1) == 0 )
  {
    this = (EventPersonalMargeUpValInfo_o *)sub_1BE4ACC(
                                              &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                              method);
    byte_4B66767 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1BE4D28(this, method);
  return margeList->fields._size < 1;
}


void __fastcall EventPersonalMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6676D & 1) == 0 )
  {
    sub_1BE4ACC(&EventPersonalMargeUpValInfo___c_TypeInfo, v1);
    byte_4B6676D = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(EventPersonalMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventPersonalMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventPersonalMargeUpValInfo___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)EventPersonalMargeUpValInfo___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, a);
  priority1 = a->fields.priority1;
  v5 = b->fields.priority1;
  result = v5 - priority1;
  if ( v5 == priority1 )
    return a->fields.priority2 - b->fields.priority2;
  return result;
}