void __fastcall EventInfoUIDisplayRelatedSprite___ctor(
        EventInfoUIDisplayRelatedSprite_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  if ( (byte_49BCF2D & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor__, method);
    sub_1B4CF90(&System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__TypeInfo, v3);
    byte_49BCF2D = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor__);
  this->fields.spriteRelationList = (struct System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__o *)v4;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.spriteRelationList, (int32_t)v4, v5, v6);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, v7);
}


void __fastcall EventInfoUIDisplayRelatedSprite__AfterRedisplay(
        EventInfoUIDisplayRelatedSprite_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__o *spriteRelationList; // x0
  char v14; // w8
  char v15; // w26
  _BOOL8 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *current; // x21
  System_String_o *v21; // x1
  const MethodInfo *v22; // x2
  UnityEngine_Object_o *EventUIObjcet; // x22
  _BOOL8 v24; // x0
  __int64 v25; // x1
  UnityEngine_Component_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  __int64 v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  UnityEngine_Component_o *monitor; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v35; // x1
  _BOOL8 v36; // x0
  __int64 v37; // x1
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  __int64 v40; // x1
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49BCF2C & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__Dispose__,
      method);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__MoveNext__,
      v3);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__get_Current__,
      v4);
    sub_1B4CF90(&Method_UnityEngine_GameObject_TryGetComponent_EventInfoUIBase___, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__Add__, v6);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__GetEnumerator__,
      v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__TypeInfo, v9);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v10);
    byte_49BCF2C = 1;
  }
  memset(&v43, 0, sizeof(v43));
  component = 0LL;
  v11 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor__);
  spriteRelationList = this->fields.spriteRelationList;
  if ( !spriteRelationList )
    goto LABEL_45;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)spriteRelationList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__GetEnumerator__);
  v43 = v41;
  v14 = 1;
LABEL_5:
  v15 = v14;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__MoveNext__);
    if ( !v16 )
      break;
    current = v43.fields._current;
    if ( !v43.fields._current )
      sub_1B4D1EC(v16, v17);
    if ( LODWORD(v43.fields._current[1].klass) == -1 )
    {
      if ( !v11 )
        sub_1B4D1EC(v16, v17);
      items = v11->fields._items;
      v30 = Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B4D1EC(v16, v17);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          current,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v32[4] = (Il2CppClass *)current;
        sub_1B4CF34((CGThumbnailListItem_o *)(v32 + 4), (int32_t)current, v18, v19);
      }
    }
    else
    {
      v21 = System_Int32__ToString(LODWORD(v43.fields._current) + 16, 0LL);
      EventUIObjcet = (UnityEngine_Object_o *)EventInfoUIBase__FindEventUIObjcet((EventInfoUIBase_o *)this, v21, v22);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v24 = UnityEngine_Object__op_Equality(EventUIObjcet, 0LL, 0LL);
      if ( !v24 )
      {
        if ( !EventUIObjcet )
          sub_1B4D1EC(v24, v25);
        if ( !UnityEngine_GameObject__TryGetComponent_object_(
                (UnityEngine_GameObject_o *)EventUIObjcet,
                &component,
                (const MethodInfo_2F546D4 *)Method_UnityEngine_GameObject_TryGetComponent_EventInfoUIBase___) )
          goto LABEL_24;
        if ( !component )
          sub_1B4D1EC(0LL, v25);
        if ( (((__int64 (*)(void))component->klass->vtable[18].method)() & 1) != 0 )
        {
LABEL_24:
          monitor = (UnityEngine_Component_o *)current[1].monitor;
          if ( !monitor )
            sub_1B4D1EC(0LL, v25);
          gameObject = UnityEngine_Component__get_gameObject(monitor, 0LL);
          if ( !gameObject )
            sub_1B4D1EC(0LL, v35);
          UnityEngine_GameObject__SetActive(gameObject, BYTE4(current[1].klass), 0LL);
          v14 = 0;
          goto LABEL_5;
        }
      }
      v26 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v26 )
        sub_1B4D1EC(0LL, v25);
      v27 = UnityEngine_Component__get_gameObject(v26, 0LL);
      if ( !v27 )
        sub_1B4D1EC(0LL, v28);
      UnityEngine_GameObject__SetActive(v27, BYTE4(current[1].klass) == 0, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__Dispose__);
  if ( !v11 )
LABEL_45:
    sub_1B4D1EC(spriteRelationList, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    v11,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__GetEnumerator__);
  v43 = v41;
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__MoveNext__);
    if ( !v36 )
      break;
    if ( !v43.fields._current )
      sub_1B4D1EC(v36, v37);
    v38 = (UnityEngine_Component_o *)v43.fields._current[1].monitor;
    if ( !v38 )
      sub_1B4D1EC(0LL, v37);
    v39 = UnityEngine_Component__get_gameObject(v38, 0LL);
    if ( !v39 )
      sub_1B4D1EC(0LL, v40);
    UnityEngine_GameObject__SetActive(v39, v15 & 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__Dispose__);
}


void __fastcall EventInfoUIDisplayRelatedSprite__CheckAssertions(
        EventInfoUIDisplayRelatedSprite_o *this,
        const MethodInfo *method)
{
  EventInfoUIDisplayRelatedSprite_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__o *spriteRelationList; // x19
  EventInfoUIDisplayRelatedSprite___c_c *v12; // x0
  System_Func_T1__T2__TResult__o *_9__3_0; // x20
  Il2CppObject *v14; // x21
  struct EventInfoUIDisplayRelatedSprite___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  EventInfoUIDisplayRelatedSprite_c *klass; // x8
  EventInfoUIDisplayRelatedSprite_o *v19; // x19
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x19
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0

  v2 = this;
  if ( (byte_49BCF2B & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Linq_Enumerable_Select_EventInfoUIDisplayRelatedSprite_SpriteRelation__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int____,
      method);
    sub_1B4CF90(
      &System_Func_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo,
      v3);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v4);
    sub_1B4CF90(
      &System_Collections_Generic_IEnumerable_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo,
      v5);
    sub_1B4CF90(
      &System_Collections_Generic_IEnumerator_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo,
      v6);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__get_Count__, v8);
    sub_1B4CF90(&Method_EventInfoUIDisplayRelatedSprite___c__CheckAssertions_b__3_0__, v9);
    this = (EventInfoUIDisplayRelatedSprite_o *)sub_1B4CF90(&EventInfoUIDisplayRelatedSprite___c_TypeInfo, v10);
    byte_49BCF2B = 1;
  }
  spriteRelationList = v2->fields.spriteRelationList;
  if ( !spriteRelationList )
    goto LABEL_41;
  if ( spriteRelationList->fields._size < 1 )
    return;
  v12 = EventInfoUIDisplayRelatedSprite___c_TypeInfo;
  if ( !EventInfoUIDisplayRelatedSprite___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIDisplayRelatedSprite___c_TypeInfo);
    v12 = EventInfoUIDisplayRelatedSprite___c_TypeInfo;
  }
  _9__3_0 = (System_Func_T1__T2__TResult__o *)v12->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = EventInfoUIDisplayRelatedSprite___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__3_0 = (System_Func_T1__T2__TResult__o *)sub_1B4D1DC(System_Func_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo);
    System_Func_object__int__ValueTuple_object__int_____ctor(
      _9__3_0,
      v14,
      Method_EventInfoUIDisplayRelatedSprite___c__CheckAssertions_b__3_0__,
      0LL);
    static_fields = EventInfoUIDisplayRelatedSprite___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___o *)_9__3_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v16, v17);
  }
  this = (EventInfoUIDisplayRelatedSprite_o *)System_Linq_Enumerable__Select_object__ValueTuple_object__int__(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)spriteRelationList,
                                                (System_Func_TSource__int__TResult__o *)_9__3_0,
                                                (const MethodInfo_2F33284 *)Method_System_Linq_Enumerable_Select_EventInfoUIDisplayRelatedSprite_SpriteRelation__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int____);
  if ( !this )
LABEL_41:
    sub_1B4D1EC(this, method);
  klass = this->klass;
  v19 = this;
  v20 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___c **)p_offset
            - 1) != System_Collections_Generic_IEnumerable_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_16;
    }
    v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v22 = sub_1B9D724(
            this,
            System_Collections_Generic_IEnumerable_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo,
            0LL);
  }
  v24 = (*(__int64 (__fastcall **)(EventInfoUIDisplayRelatedSprite_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
  if ( !v24 )
    sub_1B4D1EC(0LL, v23);
  while ( 1 )
  {
    v25 = *(_QWORD *)v24;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_23;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_23:
      v28 = sub_1B9D724(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v24;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___c **)v31
              - 1) != System_Collections_Generic_IEnumerator_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_30;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_30:
      v32 = sub_1B9D724(
              v24,
              System_Collections_Generic_IEnumerator_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo,
              0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
  }
  v33 = *(_QWORD *)v24;
  v34 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
  {
    v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_37;
    }
    v36 = v33 + 16LL * *v35 + 312;
  }
  else
  {
LABEL_37:
    v36 = sub_1B9D724(v24, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v36)(v24, *(_QWORD *)(v36 + 8));
}


void __fastcall EventInfoUIDisplayRelatedSprite__Initialization(
        EventInfoUIDisplayRelatedSprite_o *this,
        EventUiEntity_o *eventUiEntity,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  EventInfoUIDisplayRelatedSprite__CheckAssertions(this, (const MethodInfo *)eventUiEntity);
  EventInfoUISpriteControl__Initialization((EventInfoUISpriteControl_o *)this, eventUiEntity, v5);
  ((void (__fastcall *)(EventInfoUIDisplayRelatedSprite_o *, Il2CppMethodPointer))this->klass->vtable._11_AfterRedisplay.method)(
    this,
    this->klass->vtable._12_SetUIDisp.methodPtr);
}


void __fastcall EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor(
        EventInfoUIDisplayRelatedSprite_SpriteRelation_o *this,
        const MethodInfo *method)
{
  this->fields.eventUiId = -1;
  this->fields.isDisplay = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoUIDisplayRelatedSprite___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BCF2E & 1) == 0 )
  {
    sub_1B4CF90(&EventInfoUIDisplayRelatedSprite___c_TypeInfo, v1);
    byte_49BCF2E = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(EventInfoUIDisplayRelatedSprite___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoUIDisplayRelatedSprite___c_TypeInfo->static_fields->__9 = (struct EventInfoUIDisplayRelatedSprite___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)EventInfoUIDisplayRelatedSprite___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventInfoUIDisplayRelatedSprite___c___ctor(
        EventInfoUIDisplayRelatedSprite___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__o __fastcall EventInfoUIDisplayRelatedSprite___c___CheckAssertions_b__3_0(
        EventInfoUIDisplayRelatedSprite___c_o *this,
        EventInfoUIDisplayRelatedSprite_SpriteRelation_o *value,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo_38C2004 *v4; // x4
  struct EventInfoUIDisplayRelatedSprite_SpriteRelation_o *v7; // x0 OVERLAPPED
  __int64 v8; // x1
  struct EventInfoUIDisplayRelatedSprite_SpriteRelation_o *v9; // [xsp+0h] [xbp-40h] BYREF
  __int64 v10; // [xsp+8h] [xbp-38h]
  System_ValueTuple_object__int__o v11; // 0:x0.16
  System_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__o result; // 0:x0.16

  if ( (byte_49BCF2F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___ctor__, value);
    byte_49BCF2F = 1;
  }
  v11.fields.Item1 = (Il2CppObject *)&v9;
  *(_QWORD *)&v11.fields.Item2 = value;
  v9 = 0LL;
  v10 = 0LL;
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