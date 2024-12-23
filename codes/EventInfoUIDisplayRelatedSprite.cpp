void __fastcall EventInfoUIDisplayRelatedSprite___ctor(
        EventInfoUIDisplayRelatedSprite_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_4B68BA7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor__, method);
    sub_1BE4ACC(&System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__TypeInfo, v3);
    byte_4B68BA7 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor__);
  this->fields.spriteRelationList = (struct System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__o *)v4;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.spriteRelationList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, v11);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppObject *current; // x21
  System_String_o *v25; // x1
  const MethodInfo *v26; // x2
  UnityEngine_Object_o *EventUIObjcet; // x22
  _BOOL8 v28; // x0
  __int64 v29; // x1
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  UnityEngine_Component_o *monitor; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  UnityEngine_Component_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  __int64 v44; // x1
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B68BA6 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__Dispose__,
      method);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__MoveNext__,
      v3);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__get_Current__,
      v4);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_TryGetComponent_EventInfoUIBase___, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__Add__, v6);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__GetEnumerator__,
      v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__TypeInfo, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    byte_4B68BA6 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  component = 0LL;
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor__);
  spriteRelationList = this->fields.spriteRelationList;
  if ( !spriteRelationList )
    goto LABEL_45;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)spriteRelationList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__GetEnumerator__);
  v47 = v45;
  v14 = 1;
LABEL_5:
  v15 = v14;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__MoveNext__);
    if ( !v16 )
      break;
    current = v47.fields._current;
    if ( !v47.fields._current )
      sub_1BE4D28(v16, v17);
    if ( LODWORD(v47.fields._current[1].klass) == -1 )
    {
      if ( !v11 )
        sub_1BE4D28(v16, v17);
      items = v11->fields._items;
      v34 = Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BE4D28(v16, v17);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          current,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v36[4] = (Il2CppClass *)current;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)current, v18, v19, v20, v21, v22, v23);
      }
    }
    else
    {
      v25 = System_Int32__ToString(LODWORD(v47.fields._current) + 16, 0LL);
      EventUIObjcet = (UnityEngine_Object_o *)EventInfoUIBase__FindEventUIObjcet((EventInfoUIBase_o *)this, v25, v26);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v28 = UnityEngine_Object__op_Equality(EventUIObjcet, 0LL, 0LL);
      if ( !v28 )
      {
        if ( !EventUIObjcet )
          sub_1BE4D28(v28, v29);
        if ( !UnityEngine_GameObject__TryGetComponent_object_(
                (UnityEngine_GameObject_o *)EventUIObjcet,
                &component,
                (const MethodInfo_2FAAA2C *)Method_UnityEngine_GameObject_TryGetComponent_EventInfoUIBase___) )
          goto LABEL_24;
        if ( !component )
          sub_1BE4D28(0LL, v29);
        if ( (((__int64 (*)(void))component->klass->vtable[18].method)() & 1) != 0 )
        {
LABEL_24:
          monitor = (UnityEngine_Component_o *)current[1].monitor;
          if ( !monitor )
            sub_1BE4D28(0LL, v29);
          gameObject = UnityEngine_Component__get_gameObject(monitor, 0LL);
          if ( !gameObject )
            sub_1BE4D28(0LL, v39);
          UnityEngine_GameObject__SetActive(gameObject, BYTE4(current[1].klass), 0LL);
          v14 = 0;
          goto LABEL_5;
        }
      }
      v30 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v30 )
        sub_1BE4D28(0LL, v29);
      v31 = UnityEngine_Component__get_gameObject(v30, 0LL);
      if ( !v31 )
        sub_1BE4D28(0LL, v32);
      UnityEngine_GameObject__SetActive(v31, BYTE4(current[1].klass) == 0, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__Dispose__);
  if ( !v11 )
LABEL_45:
    sub_1BE4D28(spriteRelationList, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    v11,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__GetEnumerator__);
  v47 = v45;
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__MoveNext__);
    if ( !v40 )
      break;
    if ( !v47.fields._current )
      sub_1BE4D28(v40, v41);
    v42 = (UnityEngine_Component_o *)v47.fields._current[1].monitor;
    if ( !v42 )
      sub_1BE4D28(0LL, v41);
    v43 = UnityEngine_Component__get_gameObject(v42, 0LL);
    if ( !v43 )
      sub_1BE4D28(0LL, v44);
    UnityEngine_GameObject__SetActive(v43, v15 & 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__Dispose__);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  EventInfoUIDisplayRelatedSprite_c *klass; // x8
  EventInfoUIDisplayRelatedSprite_o *v23; // x19
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x19
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0

  v2 = this;
  if ( (byte_4B68BA5 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_Select_EventInfoUIDisplayRelatedSprite_SpriteRelation__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int____,
      method);
    sub_1BE4ACC(
      &System_Func_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo,
      v3);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v4);
    sub_1BE4ACC(
      &System_Collections_Generic_IEnumerable_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo,
      v5);
    sub_1BE4ACC(
      &System_Collections_Generic_IEnumerator_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo,
      v6);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__get_Count__, v8);
    sub_1BE4ACC(&Method_EventInfoUIDisplayRelatedSprite___c__CheckAssertions_b__3_0__, v9);
    this = (EventInfoUIDisplayRelatedSprite_o *)sub_1BE4ACC(&EventInfoUIDisplayRelatedSprite___c_TypeInfo, v10);
    byte_4B68BA5 = 1;
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
    _9__3_0 = (System_Func_T1__T2__TResult__o *)sub_1BE4D18(System_Func_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo);
    System_Func_object__int__ValueTuple_object__int_____ctor(
      _9__3_0,
      v14,
      Method_EventInfoUIDisplayRelatedSprite___c__CheckAssertions_b__3_0__,
      0LL);
    static_fields = EventInfoUIDisplayRelatedSprite___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___o *)_9__3_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v16, v17, v18, v19, v20, v21);
  }
  this = (EventInfoUIDisplayRelatedSprite_o *)System_Linq_Enumerable__Select_object__ValueTuple_object__int__(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)spriteRelationList,
                                                (System_Func_TSource__int__TResult__o *)_9__3_0,
                                                (const MethodInfo_2F89974 *)Method_System_Linq_Enumerable_Select_EventInfoUIDisplayRelatedSprite_SpriteRelation__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int____);
  if ( !this )
LABEL_41:
    sub_1BE4D28(this, method);
  klass = this->klass;
  v23 = this;
  v24 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___c **)p_offset
            - 1) != System_Collections_Generic_IEnumerable_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo )
    {
      --v24;
      p_offset += 4;
      if ( !v24 )
        goto LABEL_16;
    }
    v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v26 = sub_1C36AAC(
            this,
            System_Collections_Generic_IEnumerable_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo,
            0LL);
  }
  v28 = (*(__int64 (__fastcall **)(EventInfoUIDisplayRelatedSprite_o *, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  if ( !v28 )
    sub_1BE4D28(0LL, v27);
  while ( 1 )
  {
    v29 = *(_QWORD *)v28;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_23;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_23:
      v32 = sub_1C36AAC(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) & 1) == 0 )
      break;
    v33 = *(_QWORD *)v28;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___c **)v35
              - 1) != System_Collections_Generic_IEnumerator_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_30;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_30:
      v36 = sub_1C36AAC(
              v28,
              System_Collections_Generic_IEnumerator_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo,
              0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v36)(v28, *(_QWORD *)(v36 + 8));
  }
  v37 = *(_QWORD *)v28;
  v38 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
  {
    v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_37;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_37:
    v40 = sub_1C36AAC(v28, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v40)(v28, *(_QWORD *)(v40 + 8));
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B68BA8 & 1) == 0 )
  {
    sub_1BE4ACC(&EventInfoUIDisplayRelatedSprite___c_TypeInfo, v1);
    byte_4B68BA8 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(EventInfoUIDisplayRelatedSprite___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoUIDisplayRelatedSprite___c_TypeInfo->static_fields->__9 = (struct EventInfoUIDisplayRelatedSprite___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)EventInfoUIDisplayRelatedSprite___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  const MethodInfo_393E470 *v4; // x4
  struct EventInfoUIDisplayRelatedSprite_SpriteRelation_o *v7; // x0 OVERLAPPED
  __int64 v8; // x1
  struct EventInfoUIDisplayRelatedSprite_SpriteRelation_o *v9; // [xsp+0h] [xbp-40h] BYREF
  __int64 v10; // [xsp+8h] [xbp-38h]
  System_ValueTuple_object__int__o v11; // 0:x0.16
  System_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__o result; // 0:x0.16

  if ( (byte_4B68BA9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___ctor__, value);
    byte_4B68BA9 = 1;
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