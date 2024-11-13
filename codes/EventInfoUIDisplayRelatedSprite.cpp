void __fastcall EventInfoUIDisplayRelatedSprite___ctor(
        EventInfoUIDisplayRelatedSprite_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x1

  if ( (byte_4B18173 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor__,
      method,
      v2);
    sub_1BCA7E0(&System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__TypeInfo, v5, v6);
    byte_4B18173 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor__);
  this->fields.spriteRelationList = (struct System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.spriteRelationList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, v14);
}


void __fastcall EventInfoUIDisplayRelatedSprite__AfterRedisplay(
        EventInfoUIDisplayRelatedSprite_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__o *spriteRelationList; // x0
  char v24; // w8
  char v25; // w26
  _BOOL8 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  Il2CppObject *current; // x21
  System_String_o *v35; // x1
  const MethodInfo *v36; // x2
  __int64 v37; // x1
  UnityEngine_Object_o *EventUIObjcet; // x22
  _BOOL8 v39; // x0
  __int64 v40; // x1
  UnityEngine_Component_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  __int64 v43; // x1
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  UnityEngine_Component_o *monitor; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v50; // x1
  _BOOL8 v51; // x0
  __int64 v52; // x1
  UnityEngine_Component_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  __int64 v55; // x1
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B18172 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__MoveNext__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__get_Current__,
      v7,
      v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_TryGetComponent_EventInfoUIBase___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__Add__, v11, v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__GetEnumerator__,
      v13,
      v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor__,
      v15,
      v16);
    sub_1BCA7E0(&System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B18172 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  component = 0LL;
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation___ctor__);
  spriteRelationList = this->fields.spriteRelationList;
  if ( !spriteRelationList )
    goto LABEL_45;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    (System_Collections_Generic_List_object__o *)spriteRelationList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__GetEnumerator__);
  v58 = v56;
  v24 = 1;
LABEL_5:
  v25 = v24;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__MoveNext__);
    if ( !v26 )
      break;
    current = v58.fields._current;
    if ( !v58.fields._current )
      sub_1BCAA3C(v26, v27);
    if ( LODWORD(v58.fields._current[1].klass) == -1 )
    {
      if ( !v21 )
        sub_1BCAA3C(v26, v27);
      items = v21->fields._items;
      v45 = Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(v26, v27);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          current,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v47[4] = (Il2CppClass *)current;
        sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)current, v28, v29, v30, v31, v32, v33);
      }
    }
    else
    {
      v35 = System_Int32__ToString(LODWORD(v58.fields._current) + 16, 0LL);
      EventUIObjcet = (UnityEngine_Object_o *)EventInfoUIBase__FindEventUIObjcet((EventInfoUIBase_o *)this, v35, v36);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
      v39 = UnityEngine_Object__op_Equality(EventUIObjcet, 0LL, 0LL);
      if ( !v39 )
      {
        if ( !EventUIObjcet )
          sub_1BCAA3C(v39, v40);
        if ( !UnityEngine_GameObject__TryGetComponent_object_(
                (UnityEngine_GameObject_o *)EventUIObjcet,
                &component,
                (const MethodInfo_2F63960 *)Method_UnityEngine_GameObject_TryGetComponent_EventInfoUIBase___) )
          goto LABEL_24;
        if ( !component )
          sub_1BCAA3C(0LL, v40);
        if ( (((__int64 (*)(void))component->klass->vtable[18].method)() & 1) != 0 )
        {
LABEL_24:
          monitor = (UnityEngine_Component_o *)current[1].monitor;
          if ( !monitor )
            sub_1BCAA3C(0LL, v40);
          gameObject = UnityEngine_Component__get_gameObject(monitor, 0LL);
          if ( !gameObject )
            sub_1BCAA3C(0LL, v50);
          UnityEngine_GameObject__SetActive(gameObject, BYTE4(current[1].klass), 0LL);
          v24 = 0;
          goto LABEL_5;
        }
      }
      v41 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v41 )
        sub_1BCAA3C(0LL, v40);
      v42 = UnityEngine_Component__get_gameObject(v41, 0LL);
      if ( !v42 )
        sub_1BCAA3C(0LL, v43);
      UnityEngine_GameObject__SetActive(v42, BYTE4(current[1].klass) == 0, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__Dispose__);
  if ( !v21 )
LABEL_45:
    sub_1BCAA3C(spriteRelationList, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    v21,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__GetEnumerator__);
  v58 = v56;
  while ( 1 )
  {
    v51 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__MoveNext__);
    if ( !v51 )
      break;
    if ( !v58.fields._current )
      sub_1BCAA3C(v51, v52);
    v53 = (UnityEngine_Component_o *)v58.fields._current[1].monitor;
    if ( !v53 )
      sub_1BCAA3C(0LL, v52);
    v54 = UnityEngine_Component__get_gameObject(v53, 0LL);
    if ( !v54 )
      sub_1BCAA3C(0LL, v55);
    UnityEngine_GameObject__SetActive(v54, v25 & 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIDisplayRelatedSprite_SpriteRelation__Dispose__);
}


void __fastcall EventInfoUIDisplayRelatedSprite__CheckAssertions(
        EventInfoUIDisplayRelatedSprite_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  EventInfoUIDisplayRelatedSprite_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__o *spriteRelationList; // x19
  EventInfoUIDisplayRelatedSprite___c_c *v22; // x0
  System_Func_T1__T2__TResult__o *_9__3_0; // x20
  Il2CppObject *v24; // x21
  struct EventInfoUIDisplayRelatedSprite___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  EventInfoUIDisplayRelatedSprite_c *klass; // x8
  EventInfoUIDisplayRelatedSprite_o *v33; // x19
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x19
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0

  v4 = this;
  if ( (byte_4B18171 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_EventInfoUIDisplayRelatedSprite_SpriteRelation__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int____,
      method,
      v2);
    sub_1BCA7E0(
      &System_Func_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo,
      v5,
      v6);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(
      &System_Collections_Generic_IEnumerable_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo,
      v9,
      v10);
    sub_1BCA7E0(
      &System_Collections_Generic_IEnumerator_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo,
      v11,
      v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoUIDisplayRelatedSprite_SpriteRelation__get_Count__,
      v15,
      v16);
    sub_1BCA7E0(&Method_EventInfoUIDisplayRelatedSprite___c__CheckAssertions_b__3_0__, v17, v18);
    this = (EventInfoUIDisplayRelatedSprite_o *)sub_1BCA7E0(&EventInfoUIDisplayRelatedSprite___c_TypeInfo, v19, v20);
    byte_4B18171 = 1;
  }
  spriteRelationList = v4->fields.spriteRelationList;
  if ( !spriteRelationList )
    goto LABEL_41;
  if ( spriteRelationList->fields._size < 1 )
    return;
  v22 = EventInfoUIDisplayRelatedSprite___c_TypeInfo;
  if ( !EventInfoUIDisplayRelatedSprite___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIDisplayRelatedSprite___c_TypeInfo, method);
    v22 = EventInfoUIDisplayRelatedSprite___c_TypeInfo;
  }
  _9__3_0 = (System_Func_T1__T2__TResult__o *)v22->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22, method);
      v22 = EventInfoUIDisplayRelatedSprite___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__3_0 = (System_Func_T1__T2__TResult__o *)sub_1BCAA2C(
                                                  System_Func_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
    System_Func_object__int__ValueTuple_object__int_____ctor(
      _9__3_0,
      v24,
      Method_EventInfoUIDisplayRelatedSprite___c__CheckAssertions_b__3_0__,
      0LL);
    static_fields = EventInfoUIDisplayRelatedSprite___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v26, v27, v28, v29, v30, v31);
  }
  this = (EventInfoUIDisplayRelatedSprite_o *)System_Linq_Enumerable__Select_object__ValueTuple_object__int__(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)spriteRelationList,
                                                (System_Func_TSource__int__TResult__o *)_9__3_0,
                                                (const MethodInfo_2F42B3C *)Method_System_Linq_Enumerable_Select_EventInfoUIDisplayRelatedSprite_SpriteRelation__ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int____);
  if ( !this )
LABEL_41:
    sub_1BCAA3C(this, method);
  klass = this->klass;
  v33 = this;
  v34 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___c **)p_offset
            - 1) != System_Collections_Generic_IEnumerable_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo )
    {
      --v34;
      p_offset += 4;
      if ( !v34 )
        goto LABEL_16;
    }
    v36 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v36 = sub_1C1C7C0(
            this,
            System_Collections_Generic_IEnumerable_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo,
            0LL);
  }
  v38 = (*(__int64 (__fastcall **)(EventInfoUIDisplayRelatedSprite_o *, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
  if ( !v38 )
    sub_1BCAA3C(0LL, v37);
  while ( 1 )
  {
    v39 = *(_QWORD *)v38;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_23;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_23:
      v42 = sub_1C1C7C0(v38, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8)) & 1) == 0 )
      break;
    v43 = *(_QWORD *)v38;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___c **)v45
              - 1) != System_Collections_Generic_IEnumerator_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_30;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_30:
      v46 = sub_1C1C7C0(
              v38,
              System_Collections_Generic_IEnumerator_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___TypeInfo,
              0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v46)(v38, *(_QWORD *)(v46 + 8));
  }
  v47 = *(_QWORD *)v38;
  v48 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
  {
    v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_37;
    }
    v50 = v47 + 16LL * *v49 + 312;
  }
  else
  {
LABEL_37:
    v50 = sub_1C1C7C0(v38, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v50)(v38, *(_QWORD *)(v50 + 8));
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18174 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoUIDisplayRelatedSprite___c_TypeInfo, v1, v2);
    byte_4B18174 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventInfoUIDisplayRelatedSprite___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventInfoUIDisplayRelatedSprite___c_TypeInfo->static_fields->__9 = (struct EventInfoUIDisplayRelatedSprite___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoUIDisplayRelatedSprite___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  const MethodInfo_38F5D00 *v4; // x4
  struct EventInfoUIDisplayRelatedSprite_SpriteRelation_o *v7; // x0 OVERLAPPED
  __int64 v8; // x1
  struct EventInfoUIDisplayRelatedSprite_SpriteRelation_o *v9; // [xsp+0h] [xbp-40h] BYREF
  __int64 v10; // [xsp+8h] [xbp-38h]
  System_ValueTuple_object__int__o v11; // 0:x0.16
  System_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int__o result; // 0:x0.16

  if ( (byte_4B18175 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_ValueTuple_EventInfoUIDisplayRelatedSprite_SpriteRelation__int___ctor__,
      value,
      *(_QWORD *)&index);
    byte_4B18175 = 1;
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