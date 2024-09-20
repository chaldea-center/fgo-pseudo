void __fastcall EventPersonalMargeUpValInfo___ctor(
        EventPersonalMargeUpValInfo_o *this,
        int32_t eventId,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  struct ServantEntity_o **p_servantEntity; // x21
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5AD27 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4A5AD27 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.margeList, (int32_t)v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  *((_DWORD *)p_servantEntity - 2) = eventId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_servantEntity, (int32_t)servantEntity, v11, v12);
}


void __fastcall EventPersonalMargeUpValInfo__Add(
        EventPersonalMargeUpValInfo_o *this,
        EventDropItemUpValInfo_array *dropItemInfoList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  __int64 v6; // x0
  EventDropItemUpValInfo_o *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  signed int max_length; // w8
  __int64 v11; // x22
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5AD2B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    byte_4A5AD2B = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( dropItemInfoList )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    max_length = dropItemInfoList->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= max_length )
          sub_1B88814(v6, v7);
        v7 = dropItemInfoList->m_Items[v11];
        if ( !v7 )
          break;
        if ( v7->fields.isInvalid )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v13 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v7,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v7;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v7, v8, (int32_t)v9);
          }
        }
        else
        {
          EventPersonalMargeUpValInfo__Add_38900392(this, v7, 0, v9);
        }
        max_length = dropItemInfoList->max_length;
        if ( (int)++v11 >= max_length )
          goto LABEL_16;
      }
LABEL_22:
      sub_1B8880C(v6, v7);
    }
LABEL_16:
    if ( !v5 )
      goto LABEL_22;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      v5,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__) )
      EventPersonalMargeUpValInfo__Add_38900392(this, (EventDropItemUpValInfo_o *)v17.fields._current, 1, v16);
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
  }
}


void __fastcall EventPersonalMargeUpValInfo__Add_38900392(
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
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x8
  EventMargeItemUpValInfo_o *v27; // x20
  const MethodInfo *v28; // x2
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x8
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5AD2C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_1B885B0(&EventMargeItemUpValInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    byte_4A5AD2C = 1;
  }
  memset(&v36, 0, sizeof(v36));
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v35,
          margeList,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v36 = v35;
        while ( 1 )
        {
          v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v36,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v15 )
            break;
          current = (EventMargeItemUpValInfo_o *)v36.fields._current;
          if ( !v36.fields._current )
            sub_1B8880C(v15, v16);
          if ( LODWORD(v36.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
            && v36.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v36,
              (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
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
          &v36,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        v27 = (EventMargeItemUpValInfo_o *)sub_1B887FC(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor(v27, dropItemInfo, v28);
        if ( v27 )
        {
          v27->fields.rateCount = dropItemInfo->fields.rateCount;
          margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
          if ( margeList )
          {
            items = margeList->fields._items;
            v32 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++margeList->fields._version;
            if ( items )
            {
              size = margeList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  margeList,
                  (Il2CppObject *)v27,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
              }
              else
              {
                v34 = &items->obj.klass + size;
                margeList->fields._size = size + 1;
                v34[4] = (Il2CppClass *)v27;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v27, v29, v30);
              }
              return;
            }
          }
        }
LABEL_63:
        sub_1B8880C(margeList, dropItemInfo);
      }
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v35,
        margeList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v36 = v35;
      do
      {
        v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v36,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v18 )
          goto LABEL_40;
        current = (EventMargeItemUpValInfo_o *)v36.fields._current;
        if ( !v36.fields._current )
          sub_1B8880C(v18, v19);
      }
      while ( LODWORD(v36.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId
           || v36.fields._current[5].klass != (Il2CppClass *)dropItemInfo->fields.itemEntity );
LABEL_22:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v36,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v35,
        margeList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v36 = v35;
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v36,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v10 )
          goto LABEL_40;
        current = (EventMargeItemUpValInfo_o *)v36.fields._current;
        if ( !v36.fields._current )
          sub_1B8880C(v10, v11);
        if ( LODWORD(v36.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    margeList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v13 )
      break;
    current = (EventMargeItemUpValInfo_o *)v36.fields._current;
    if ( !v36.fields._current )
      sub_1B8880C(v13, v14);
    if ( LODWORD(v36.fields._current[4].klass) == dropItemInfo->fields.targetType
      && LODWORD(v36.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
    {
      goto LABEL_22;
    }
  }
LABEL_40:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  current = (EventMargeItemUpValInfo_o *)sub_1B887FC(EventMargeItemUpValInfo_TypeInfo);
  EventMargeItemUpValInfo___ctor(current, dropItemInfo, v20);
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !margeList )
    goto LABEL_63;
  v23 = margeList->fields._items;
  v24 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
  ++margeList->fields._version;
  if ( !v23 )
    goto LABEL_63;
  v25 = margeList->fields._size;
  if ( (unsigned int)v25 < v23->max_length )
  {
    v26 = &v23->obj.klass + v25;
    margeList->fields._size = v25 + 1;
    v26[4] = (Il2CppClass *)current;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)current, v21, v22);
    if ( isInvalid )
      goto LABEL_44;
    goto LABEL_50;
  }
  System_Collections_Generic_List_object___AddWithResize(
    margeList,
    (Il2CppObject *)current,
    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
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
  if ( (byte_4A5AD29 & 1) == 0 )
  {
    this = (EventPersonalMargeUpValInfo_o *)sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4A5AD29 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1B8880C(this, method);
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
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5AD2D & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1B885B0(&Method_EventPersonalMargeUpValInfo___c__GetList_b__9_0__);
    sub_1B885B0(&EventPersonalMargeUpValInfo___c_TypeInfo);
    byte_4A5AD2D = 1;
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
    v5 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(v5, v6, Method_EventPersonalMargeUpValInfo___c__GetList_b__9_0__, 0LL);
    static_fields = EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_0, (int32_t)v5, v8, v9);
  }
  if ( !margeList
    || (System_Collections_Generic_List_object___Sort_55571192(
          margeList,
          v5,
          (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v3 = this->fields.margeList) == 0LL) )
  {
    sub_1B8880C(v3, method);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v3,
                                            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMargeItemUpValInfo_o *__fastcall EventPersonalMargeUpValInfo__GetMargeItem(
        EventPersonalMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *margeList; // x0

  if ( (byte_4A5AD2A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
    byte_4A5AD2A = 1;
  }
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !margeList )
    sub_1B8880C(0LL, *(_QWORD *)&index);
  if ( margeList->fields._size <= index )
    return 0LL;
  else
    return (EventMargeItemUpValInfo_o *)System_Collections_Generic_List_object___get_Item(
                                          margeList,
                                          index,
                                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
}


bool __fastcall EventPersonalMargeUpValInfo__IsEmpty(EventPersonalMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPersonalMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4A5AD28 & 1) == 0 )
  {
    this = (EventPersonalMargeUpValInfo_o *)sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4A5AD28 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1B8880C(this, method);
  return margeList->fields._size < 1;
}


void __fastcall EventPersonalMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5AD2E & 1) == 0 )
  {
    sub_1B885B0(&EventPersonalMargeUpValInfo___c_TypeInfo);
    byte_4A5AD2E = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventPersonalMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventPersonalMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventPersonalMargeUpValInfo___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventPersonalMargeUpValInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
  priority1 = a->fields.priority1;
  v5 = b->fields.priority1;
  result = v5 - priority1;
  if ( v5 == priority1 )
    return a->fields.priority2 - b->fields.priority2;
  return result;
}