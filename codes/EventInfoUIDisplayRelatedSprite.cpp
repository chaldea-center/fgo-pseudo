void EventInfoUIDisplayRelatedSprite___ctor(EventInfoUIDisplayRelatedSprite_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4C2915E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__TypeInfo);
    byte_4C2915E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor__);
  this->fields.spriteRelationList = (struct System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.spriteRelationList, (int32_t)v3, v4, v5);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, v6);
}


void EventInfoUIDisplayRelatedSprite__AfterRedisplay(EventInfoUIDisplayRelatedSprite_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__o *spriteRelationList; // x0
  char v6; // w8
  char v7; // w26
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *current; // x21
  System_String_o *v13; // x1
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *EventUIObjcet; // x22
  _BOOL8 v16; // x0
  __int64 v17; // x1
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  __int64 v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  UnityEngine_Component_o *monitor; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  _BOOL8 v28; // x0
  __int64 v29; // x1
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C2915D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_TryGetComponent_EventInfoUIBase___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2915D = 1;
  }
  memset(&v35, 0, sizeof(v35));
  component = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor__);
  spriteRelationList = this->fields.spriteRelationList;
  if ( !spriteRelationList )
    goto LABEL_45;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    (System_Collections_Generic_List_object__o *)spriteRelationList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__GetEnumerator__);
  v35 = v33;
  v6 = 1;
LABEL_5:
  v7 = v6;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v35,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__MoveNext__);
    if ( !v8 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_1C2D6EC(v8, v9);
    if ( LODWORD(v35.fields._current[1].klass) == -1 )
    {
      if ( !v3 )
        sub_1C2D6EC(v8, v9);
      items = v3->fields._items;
      v22 = Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(v8, v9);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          current,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v24[4] = (Il2CppClass *)current;
        sub_1C2D434((CGThumbnailListItem_o *)(v24 + 4), (int32_t)current, v10, v11);
      }
    }
    else
    {
      v13 = System_Int32__ToString(LODWORD(v35.fields._current) + 16, 0);
      EventUIObjcet = (UnityEngine_Object_o *)EventInfoUIBase__FindEventUIObjcet((EventInfoUIBase_o *)this, v13, v14);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__op_Equality(EventUIObjcet, 0, 0);
      if ( !v16 )
      {
        if ( !EventUIObjcet )
          sub_1C2D6EC(v16, v17);
        if ( !UnityEngine_GameObject__TryGetComponent_object_(
                (UnityEngine_GameObject_o *)EventUIObjcet,
                &component,
                (const MethodInfo_3127160 *)Method_UnityEngine_GameObject_TryGetComponent_EventInfoUIBase___) )
          goto LABEL_24;
        if ( !component )
          sub_1C2D6EC(0, v17);
        if ( (((__int64 (*)(void))component->klass->vtable[18].methodPtr)() & 1) != 0 )
        {
LABEL_24:
          monitor = (UnityEngine_Component_o *)current[1].monitor;
          if ( !monitor )
            sub_1C2D6EC(0, v17);
          gameObject = UnityEngine_Component__get_gameObject(monitor, 0);
          if ( !gameObject )
            sub_1C2D6EC(0, v27);
          UnityEngine_GameObject__SetActive(gameObject, BYTE4(current[1].klass), 0);
          v6 = 0;
          goto LABEL_5;
        }
      }
      v18 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v18 )
        sub_1C2D6EC(0, v17);
      v19 = UnityEngine_Component__get_gameObject(v18, 0);
      if ( !v19 )
        sub_1C2D6EC(0, v20);
      UnityEngine_GameObject__SetActive(v19, BYTE4(current[1].klass) == 0, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__Dispose__);
  if ( !v3 )
LABEL_45:
    sub_1C2D6EC(spriteRelationList, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    v3,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__GetEnumerator__);
  v35 = v33;
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__MoveNext__);
    if ( !v28 )
      break;
    if ( !v35.fields._current )
      sub_1C2D6EC(v28, v29);
    v30 = (UnityEngine_Component_o *)v35.fields._current[1].monitor;
    if ( !v30 )
      sub_1C2D6EC(0, v29);
    v31 = UnityEngine_Component__get_gameObject(v30, 0);
    if ( !v31 )
      sub_1C2D6EC(0, v32);
    UnityEngine_GameObject__SetActive(v31, v7 & 1, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__Dispose__);
}


void EventInfoUIDisplayRelatedSprite__CheckAssertions(
        EventInfoUIDisplayRelatedSprite_o *this,
        const MethodInfo *method)
{
  EventInfoUIDisplayRelatedSprite_o *v2; // x19
  struct System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__o *spriteRelationList; // x19
  EventInfoUIDisplayRelatedSprite___c_c *v4; // x0
  System_Func_T1__T2__TResult__o *_9__3_0; // x20
  Il2CppObject *v6; // x21
  struct EventInfoUIDisplayRelatedSprite___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  EventInfoUIDisplayRelatedSprite_c *klass; // x8
  EventInfoUIDisplayRelatedSprite_o *v11; // x19
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x19
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0

  v2 = this;
  if ( (byte_4C2915C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_EventInfoUIDisplayRelatedSprite_SpriteRelation__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int____);
    sub_1C2D490(&System_Func_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__get_Count__);
    sub_1C2D490(&Method_EventInfoUIDisplayRelatedSprite___c__CheckAssertions_b__3_0__);
    this = (EventInfoUIDisplayRelatedSprite_o *)sub_1C2D490(&EventInfoUIDisplayRelatedSprite___c_TypeInfo);
    byte_4C2915C = 1;
  }
  spriteRelationList = v2->fields.spriteRelationList;
  if ( !spriteRelationList )
    goto LABEL_41;
  if ( spriteRelationList->fields._size < 1 )
    return;
  v4 = EventInfoUIDisplayRelatedSprite___c_TypeInfo;
  if ( !EventInfoUIDisplayRelatedSprite___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIDisplayRelatedSprite___c_TypeInfo);
    v4 = EventInfoUIDisplayRelatedSprite___c_TypeInfo;
  }
  _9__3_0 = (System_Func_T1__T2__TResult__o *)v4->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = EventInfoUIDisplayRelatedSprite___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__3_0 = (System_Func_T1__T2__TResult__o *)sub_1C2D6DC(System_Func_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo);
    System_Func_object__int__ValueTuple_object__int_____ctor(
      _9__3_0,
      v6,
      Method_EventInfoUIDisplayRelatedSprite___c__CheckAssertions_b__3_0__,
      0);
    static_fields = EventInfoUIDisplayRelatedSprite___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___o *)_9__3_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v8, v9);
  }
  this = (EventInfoUIDisplayRelatedSprite_o *)System_Linq_Enumerable__Select_object__ValueTuple_object__int__(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)spriteRelationList,
                                                (System_Func_TSource__int__TResult__o *)_9__3_0,
                                                (const MethodInfo_31040E8 *)Method_System_Linq_Enumerable_Select_EventInfoUIDisplayRelatedSprite_SpriteRelation__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int____);
  if ( !this )
LABEL_41:
    sub_1C2D6EC(this, method);
  klass = this->klass;
  v11 = this;
  v12 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___c **)p_offset
            - 1) != System_Collections_Generic_IEnumerable_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_16;
    }
    v14 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_16:
    v14 = sub_1C7DCA8(
            this,
            System_Collections_Generic_IEnumerable_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo,
            0);
  }
  v16 = (*(__int64 (__fastcall **)(EventInfoUIDisplayRelatedSprite_o *, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
  if ( !v16 )
    sub_1C2D6EC(0, v15);
  while ( 1 )
  {
    v17 = *(_QWORD *)v16;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_23;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_23:
      v20 = sub_1C7DCA8(v16, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
      break;
    v21 = *(_QWORD *)v16;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___c **)v23
              - 1) != System_Collections_Generic_IEnumerator_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_30;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_30:
      v24 = sub_1C7DCA8(
              v16,
              System_Collections_Generic_IEnumerator_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo,
              0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
  }
  v25 = *(_QWORD *)v16;
  v26 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
  {
    v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_37;
    }
    v28 = v25 + 16LL * *v27 + 312;
  }
  else
  {
LABEL_37:
    v28 = sub_1C7DCA8(v16, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v28)(v16, *(_QWORD *)(v28 + 8));
}


void EventInfoUIDisplayRelatedSprite__Initialization(
        EventInfoUIDisplayRelatedSprite_o *this,
        EventUiEntity_o *eventUiEntity,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  EventInfoUIDisplayRelatedSprite__CheckAssertions(this, (const MethodInfo *)eventUiEntity);
  EventInfoUISpriteControl__Initialization((EventInfoUISpriteControl_o *)this, eventUiEntity, v5);
  ((void (__fastcall *)(EventInfoUIDisplayRelatedSprite_o *, const MethodInfo *))this->klass->vtable._11_AfterRedisplay.methodPtr)(
    this,
    this->klass->vtable._11_AfterRedisplay.method);
}


void EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor(
        EventInfoUIDisplayRelatedSprite_SpriteRelation_o *this,
        const MethodInfo *method)
{
  this->fields.eventUiId = -1;
  this->fields.isDisplay = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoUIDisplayRelatedSprite___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2915F & 1) == 0 )
  {
    sub_1C2D490(&EventInfoUIDisplayRelatedSprite___c_TypeInfo);
    byte_4C2915F = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventInfoUIDisplayRelatedSprite___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoUIDisplayRelatedSprite___c_TypeInfo->static_fields->__9 = (struct EventInfoUIDisplayRelatedSprite___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)EventInfoUIDisplayRelatedSprite___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventInfoUIDisplayRelatedSprite___c___ctor(EventInfoUIDisplayRelatedSprite___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__o EventInfoUIDisplayRelatedSprite___c___CheckAssertions_b__3_0(
        EventInfoUIDisplayRelatedSprite___c_o *this,
        EventInfoUIDisplayRelatedSprite_SpriteRelation_o *value,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo_3AE8B28 *v4; // x4
  struct EventInfoUIDisplayRelatedSprite_SpriteRelation_o *v7; // x0
  __int64 v8; // x1
  struct EventInfoUIDisplayRelatedSprite_SpriteRelation_o *v9; // [xsp+0h] [xbp-40h] BYREF
  __int64 v10; // [xsp+8h] [xbp-38h]
  System_ValueTuple_object__int__o v11; // 0:x0.16
  System_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__o result; // 0:x0.16

  if ( (byte_4C29160 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___ctor__);
    byte_4C29160 = 1;
  }
  v11.fields.Item1 = (Il2CppObject *)&v9;
  *(_QWORD *)&v11.fields.Item2 = value;
  v9 = 0;
  v10 = 0;
  System_ValueTuple_object__int____ctor(
    v11,
    (Il2CppObject *)(unsigned int)index,
    Method_System_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___ctor__,
    v4);
  v7 = v9;
  v8 = v10;
  *(_QWORD *)&result.fields.Item2 = v8;
  result.fields.Item1 = v7;
  return result;
}