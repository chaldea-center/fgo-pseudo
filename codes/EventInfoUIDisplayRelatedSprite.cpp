void EventInfoUIDisplayRelatedSprite___ctor(EventInfoUIDisplayRelatedSprite_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x1

  if ( (byte_5973030 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__TypeInfo);
    byte_5973030 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor__);
  this->fields.spriteRelationList = (struct System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.spriteRelationList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, v10);
}


void EventInfoUIDisplayRelatedSprite__AfterRedisplay(EventInfoUIDisplayRelatedSprite_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__o *spriteRelationList; // x0
  __int128 v6; // q0
  char v7; // w8
  char v8; // w25
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *current; // x21
  Il2CppObject *v18; // x0
  System_String_o *v19; // x1
  const MethodInfo *v20; // x2
  __int64 v21; // x1
  UnityEngine_Object_o *EventUIObjcet; // x22
  _BOOL8 v23; // x0
  __int64 v24; // x1
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  UnityEngine_Component_o *monitor; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v34; // x1
  _BOOL8 v35; // x0
  __int64 v36; // x1
  UnityEngine_Component_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  __int64 v39; // x1
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_597302F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_TryGetComponent_EventInfoUIBase___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597302F = 1;
  }
  memset(&v42, 0, sizeof(v42));
  component = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor__);
  spriteRelationList = this->fields.spriteRelationList;
  if ( !spriteRelationList )
    goto LABEL_44;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)spriteRelationList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__GetEnumerator__);
  v6 = *(_OWORD *)&v40.fields._list;
  v40.fields._list = 0;
  *(_QWORD *)&v40.fields._index = &v42;
  *(_OWORD *)&v42.fields._list = v6;
  v42.fields._current = v40.fields._current;
  v7 = 1;
LABEL_5:
  v8 = v7;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v42,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__MoveNext__);
    if ( !v9 )
      break;
    current = v42.fields._current;
    if ( !v42.fields._current )
      sub_2213CDC(v9, v10);
    v18 = v42.fields._current + 1;
    if ( LODWORD(v42.fields._current[1].klass) == -1 )
    {
      if ( !v3
        || (items = v3->fields._items,
            v29 = Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(v18, v10);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          current,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v31[4] = (Il2CppClass *)current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)current, v11, v12, v13, v14, v15, v16);
      }
    }
    else
    {
      v19 = System_Int32__ToString((int32_t)v18, 0);
      EventUIObjcet = (UnityEngine_Object_o *)EventInfoUIBase__FindEventUIObjcet((EventInfoUIBase_o *)this, v19, v20);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      v23 = UnityEngine_Object__op_Equality(EventUIObjcet, 0, 0);
      if ( !v23 )
      {
        if ( !EventUIObjcet )
          sub_2213CDC(v23, v24);
        if ( !UnityEngine_GameObject__TryGetComponent_object_(
                (UnityEngine_GameObject_o *)EventUIObjcet,
                &component,
                (const MethodInfo_38B7F30 *)Method_UnityEngine_GameObject_TryGetComponent_EventInfoUIBase___) )
          goto LABEL_24;
        if ( !component )
          sub_2213CDC(0, v24);
        if ( (((__int64 (*)(void))component->klass->vtable[18].methodPtr)() & 1) != 0 )
        {
LABEL_24:
          monitor = (UnityEngine_Component_o *)current[1].monitor;
          if ( !monitor )
            sub_2213CDC(0, v24);
          gameObject = UnityEngine_Component__get_gameObject(monitor, 0);
          if ( !gameObject )
            sub_2213CDC(0, v34);
          UnityEngine_GameObject__SetActive(gameObject, BYTE4(current[1].klass), 0);
          v7 = 0;
          goto LABEL_5;
        }
      }
      v25 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v25 )
        sub_2213CDC(0, v24);
      v26 = UnityEngine_Component__get_gameObject(v25, 0);
      if ( !v26 )
        sub_2213CDC(0, v27);
      UnityEngine_GameObject__SetActive(v26, BYTE4(current[1].klass) == 0, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__Dispose__);
  if ( !v3 )
LABEL_44:
    sub_2213CDC(spriteRelationList, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    v3,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__GetEnumerator__);
  v42 = v40;
  v40.fields._list = 0;
  *(_QWORD *)&v40.fields._index = &v42;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__MoveNext__);
    if ( !v35 )
      break;
    if ( !v42.fields._current )
      sub_2213CDC(v35, v36);
    v37 = (UnityEngine_Component_o *)v42.fields._current[1].monitor;
    if ( !v37 )
      sub_2213CDC(0, v36);
    v38 = UnityEngine_Component__get_gameObject(v37, 0);
    if ( !v38 )
      sub_2213CDC(0, v39);
    UnityEngine_GameObject__SetActive(v38, v8 & 1, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__Dispose__);
}


void EventInfoUIDisplayRelatedSprite__CheckAssertions(
        EventInfoUIDisplayRelatedSprite_o *this,
        const MethodInfo *method)
{
  EventInfoUIDisplayRelatedSprite_o *v2; // x19
  struct System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__o *spriteRelationList; // x19
  EventInfoUIDisplayRelatedSprite___c_c *v4; // x0
  struct EventInfoUIDisplayRelatedSprite___c_StaticFields *static_fields; // x8
  System_Func_T1__T2__TResult__o *_9__3_0; // x20
  Il2CppObject *v7; // x21
  struct EventInfoUIDisplayRelatedSprite___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  EventInfoUIDisplayRelatedSprite_c *klass; // x8
  EventInfoUIDisplayRelatedSprite_o *v16; // x19
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 i; // [xsp+18h] [xbp-38h]

  v2 = this;
  if ( (byte_597302E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_EventInfoUIDisplayRelatedSprite_SpriteRelation__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int____);
    sub_2213A60(&System_Func_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__get_Count__);
    sub_2213A60(&Method_EventInfoUIDisplayRelatedSprite___c__CheckAssertions_b__3_0__);
    this = (EventInfoUIDisplayRelatedSprite_o *)sub_2213A60(&EventInfoUIDisplayRelatedSprite___c_TypeInfo);
    byte_597302E = 1;
  }
  spriteRelationList = v2->fields.spriteRelationList;
  if ( !spriteRelationList )
    goto LABEL_43;
  if ( spriteRelationList->fields._size < 1 )
    return;
  v4 = EventInfoUIDisplayRelatedSprite___c_TypeInfo;
  if ( !*(&EventInfoUIDisplayRelatedSprite___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIDisplayRelatedSprite___c_TypeInfo, method);
    v4 = EventInfoUIDisplayRelatedSprite___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__3_0 = (System_Func_T1__T2__TResult__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      static_fields = EventInfoUIDisplayRelatedSprite___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_T1__T2__TResult__o *)sub_2213CCC(System_Func_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo);
    System_Func_object__int__ValueTuple_object__int_____ctor(
      _9__3_0,
      v7,
      Method_EventInfoUIDisplayRelatedSprite___c__CheckAssertions_b__3_0__,
      0);
    v8 = EventInfoUIDisplayRelatedSprite___c_TypeInfo->static_fields;
    v8->__9__3_0 = (struct System_Func_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___o *)_9__3_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__3_0, (int32_t)_9__3_0, v9, v10, v11, v12, v13, v14);
  }
  this = (EventInfoUIDisplayRelatedSprite_o *)System_Linq_Enumerable__Select_object__ValueTuple_object__int__(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)spriteRelationList,
                                                (System_Func_TSource__int__TResult__o *)_9__3_0,
                                                (const MethodInfo_388FE80 *)Method_System_Linq_Enumerable_Select_EventInfoUIDisplayRelatedSprite_SpriteRelation__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int____);
  if ( !this )
LABEL_43:
    sub_2213CDC(this, method);
  klass = this->klass;
  v16 = this;
  v17 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___c **)p_offset
            - 1) != System_Collections_Generic_IEnumerable_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_16;
    }
    v19 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_16:
    v19 = sub_224BC3C(
            this,
            System_Collections_Generic_IEnumerable_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo,
            0);
  }
  v20 = (*(__int64 (__fastcall **)(EventInfoUIDisplayRelatedSprite_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
  for ( i = v20; ; v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(i, *(_QWORD *)(v29 + 8)) )
  {
    if ( !i )
      sub_2213CDC(v20, v21);
    v22 = *(_QWORD *)i;
    v23 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_24;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_24:
      v25 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(i, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)i;
    v27 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___c **)v28
              - 1) != System_Collections_Generic_IEnumerator_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_31;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_31:
      v29 = sub_224BC3C(
              i,
              System_Collections_Generic_IEnumerator_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo,
              0);
    }
  }
  v30 = *(_QWORD *)i;
  v31 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
  if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
  {
    v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_38;
    }
    v33 = v30 + 16LL * *v32 + 312;
  }
  else
  {
LABEL_38:
    v33 = sub_224BC3C(i, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v33)(i, *(_QWORD *)(v33 + 8));
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973031 & 1) == 0 )
  {
    sub_2213A60(&EventInfoUIDisplayRelatedSprite___c_TypeInfo);
    byte_5973031 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventInfoUIDisplayRelatedSprite___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoUIDisplayRelatedSprite___c_TypeInfo->static_fields->__9 = (struct EventInfoUIDisplayRelatedSprite___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoUIDisplayRelatedSprite___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoUIDisplayRelatedSprite___c___ctor(EventInfoUIDisplayRelatedSprite___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__o EventInfoUIDisplayRelatedSprite___c___CheckAssertions_b__3_0(
        EventInfoUIDisplayRelatedSprite___c_o *this,
        EventInfoUIDisplayRelatedSprite_SpriteRelation_o *value,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo_3CF7EFC *v4; // x4
  struct EventInfoUIDisplayRelatedSprite_SpriteRelation_o *v9; // [xsp+0h] [xbp-40h] BYREF
  __int64 v10; // [xsp+8h] [xbp-38h]
  System_ValueTuple_object__int__o v11; // 0:x0.16
  System_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__o result; // 0:x0.16

  if ( (byte_5973032 & 1) == 0 )
  {
    sub_2213A60(&Method_System_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___ctor__);
    byte_5973032 = 1;
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
  result.fields.Item1 = v9;
  *(_QWORD *)&result.fields.Item2 = v10;
  return result;
}