void WarBoardMessageMaster___ctor(WarBoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59398AE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__);
    byte_59398AE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    421,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__);
}


bool WarBoardMessageMaster__CheckCondition(
        WarBoardMessageMaster_o *this,
        WarBoardMessageEntity_o *entity,
        int32_t checkValue,
        bool isValueByPlayer,
        const MethodInfo *method)
{
  int32_t playCondType; // w8
  struct System_Int64_array *v9; // x8
  struct System_Int64_array *v10; // x8
  struct System_Int64_array *playCondValues; // x8

  if ( !entity )
    goto LABEL_32;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.playCondValues, 0) )
  {
    playCondType = entity->fields.playCondType;
    this = 0;
    if ( playCondType <= 2 )
    {
      if ( !playCondType )
        goto LABEL_3;
      if ( playCondType == 1 )
      {
        if ( isValueByPlayer )
          goto LABEL_27;
        goto LABEL_30;
      }
      if ( playCondType != 2 )
        return (char)this;
      if ( !isValueByPlayer )
        goto LABEL_30;
    }
    else
    {
      if ( playCondType <= 4 )
      {
        if ( playCondType != 3 )
        {
          if ( isValueByPlayer )
            goto LABEL_30;
LABEL_27:
          playCondValues = entity->fields.playCondValues;
          if ( playCondValues )
          {
            if ( LODWORD(playCondValues->max_length) )
            {
              LOBYTE(this) = playCondValues->m_Items[0] == checkValue;
              return (char)this;
            }
            goto LABEL_33;
          }
LABEL_32:
          sub_21FFECC(this, entity);
        }
        if ( isValueByPlayer )
          goto LABEL_19;
        goto LABEL_30;
      }
      if ( playCondType != 5 )
      {
        if ( playCondType != 6 )
          return (char)this;
        if ( !isValueByPlayer )
        {
LABEL_19:
          v9 = entity->fields.playCondValues;
          if ( !v9 )
            goto LABEL_32;
          if ( LODWORD(v9->max_length) )
          {
            LOBYTE(this) = v9->m_Items[0] <= checkValue;
            return (char)this;
          }
          goto LABEL_33;
        }
LABEL_30:
        LOBYTE(this) = 0;
        return (char)this;
      }
      if ( isValueByPlayer )
        goto LABEL_30;
    }
    v10 = entity->fields.playCondValues;
    if ( !v10 )
      goto LABEL_32;
    if ( LODWORD(v10->max_length) )
    {
      LOBYTE(this) = v10->m_Items[0] >= checkValue;
      return (char)this;
    }
LABEL_33:
    sub_21FFED4(0);
  }
LABEL_3:
  LOBYTE(this) = 1;
  return (char)this;
}


System_Collections_Generic_List_WarBoardTaskBase__o *WarBoardMessageMaster__GetMessageTasks(
        WarBoardMessageMaster_o *this,
        int32_t stageId,
        int32_t type,
        int32_t checkValue,
        bool isValueByPlayer,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int *p_offset; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x4
  Il2CppObject *v30; // x24
  _BOOL8 v31; // x0
  __int64 v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  _BOOL8 v47; // x0
  const MethodInfo *v48; // x2
  WarBoardMessageEntity_o *v49; // x0
  const MethodInfo *v50; // x2
  System_Collections_Generic_List_object__o *v51; // x19
  System_Collections_Generic_IEnumerator_T__o *v53; // [xsp+18h] [xbp-58h]

  if ( (byte_59398AF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_WarBoardMessageEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_WarBoardMessageEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo);
    byte_59398AF = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_WarBoardMessageEntity__GetEnumerator__);
  v53 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v15);
  for ( i = Enumerator; ; i = v53 )
  {
    klass = i->klass;
    v18 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_10;
      }
      v20 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v20 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            i,
            *(_QWORD *)(v20 + 8));
    if ( (v21 & 1) == 0 )
      break;
    if ( !v53 )
      sub_21FFECC(v21, v22);
    v23 = v53->klass;
    v24 = *(unsigned __int16 *)&v53->klass->_2.rank;
    if ( *(_WORD *)&v53->klass->_2.rank )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarBoardMessageEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_WarBoardMessageEntity__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_18;
      }
      v26 = (__int64)&v23->vtable[*v25];
    }
    else
    {
LABEL_18:
      v26 = sub_2237E2C(v53, System_Collections_Generic_IEnumerator_WarBoardMessageEntity__TypeInfo, 0);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            v53,
            *(_QWORD *)(v26 + 8));
    v30 = (Il2CppObject *)v27;
    if ( !v27 )
      sub_21FFECC(0, v28);
    if ( *(_DWORD *)(v27 + 16) == stageId && *(_DWORD *)(v27 + 20) == type )
    {
      v31 = WarBoardMessageMaster__CheckCondition(
              (WarBoardMessageMaster_o *)v27,
              (WarBoardMessageEntity_o *)v27,
              checkValue,
              isValueByPlayer,
              v29);
      if ( v31 )
      {
        if ( !v11
          || (items = v11->fields._items,
              v40 = Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__,
              ++v11->fields._version,
              !items) )
        {
          sub_21FFECC(v31, v32);
        }
        size = v11->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v30,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v30;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v42 + 4), (int32_t)v30, v33, v34, v35, v36, v37, v38);
        }
      }
    }
  }
  if ( v53 )
  {
    v43 = v53->klass;
    v44 = *(unsigned __int16 *)&v53->klass->_2.rank;
    if ( *(_WORD *)&v53->klass->_2.rank )
    {
      v45 = &v43->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_36;
      }
      v46 = (__int64)&v43->vtable[*v45];
    }
    else
    {
LABEL_36:
      v46 = sub_2237E2C(v53, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(v53, *(_QWORD *)(v46 + 8));
  }
  v47 = System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
  if ( v47 )
  {
    v49 = WarBoardMessageMaster__Lottery(
            (WarBoardMessageMaster_o *)v47,
            (System_Collections_Generic_List_WarBoardMessageEntity__o *)v11,
            v48);
    return WarBoardMessageMaster__GetTaskList((WarBoardMessageMaster_o *)v49, v49, v50);
  }
  else
  {
    v51 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v51,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  }
  return (System_Collections_Generic_List_WarBoardTaskBase__o *)v51;
}


System_Collections_Generic_List_WarBoardTaskBase__o *WarBoardMessageMaster__GetTaskList(
        WarBoardMessageMaster_o *this,
        WarBoardMessageEntity_o *result,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Int64_array *scriptIds; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x26
  int32_t stageId; // w23
  int32_t sceneType; // w24
  int64_t v12; // x22
  WarBoardFaceMessagePerformance_o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_59398B1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&WarBoardFaceMessagePerformance_TypeInfo);
    byte_59398B1 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !result )
    goto LABEL_15;
  scriptIds = result->fields.scriptIds;
  if ( !scriptIds )
    goto LABEL_15;
  max_length = scriptIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_21FFED4(v5);
      stageId = result->fields.stageId;
      sceneType = result->fields.sceneType;
      v12 = scriptIds->m_Items[v9];
      v13 = (WarBoardFaceMessagePerformance_o *)sub_21FFEBC(WarBoardFaceMessagePerformance_TypeInfo);
      WarBoardFaceMessagePerformance___ctor(v13, stageId, sceneType, v12, 0);
      if ( !v4 )
        break;
      items = v4->fields._items;
      v21 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v4->fields._version;
      if ( !items )
        break;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          (Il2CppObject *)v13,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v4->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v13;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v13, v14, v15, v16, v17, v18, v19);
      }
      LODWORD(max_length) = scriptIds->max_length;
      if ( (__int64)++v9 >= (int)max_length )
        return (System_Collections_Generic_List_WarBoardTaskBase__o *)v4;
    }
LABEL_15:
    sub_21FFECC(v5, v6);
  }
  return (System_Collections_Generic_List_WarBoardTaskBase__o *)v4;
}


WarBoardMessageEntity_o *WarBoardMessageMaster__Lottery(
        WarBoardMessageMaster_o *this,
        System_Collections_Generic_List_WarBoardMessageEntity__o *entities,
        const MethodInfo *method)
{
  __int64 v4; // x1
  WarBoardMessageMaster___c_c *v5; // x0
  struct WarBoardMessageMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v8; // x21
  struct WarBoardMessageMaster___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Int32_array *v17; // x0
  __int64 RandomRangeIndex; // x0
  __int64 v19; // x1

  if ( (byte_59398B0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&System_Func_WarBoardMessageEntity__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardMessageEntity__get_Item__);
    sub_21FFC50(&Method_WarBoardMessageMaster___c__Lottery_b__4_0__);
    sub_21FFC50(&WarBoardMessageMaster___c_TypeInfo);
    byte_59398B0 = 1;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___) )
    return 0;
  v5 = WarBoardMessageMaster___c_TypeInfo;
  if ( !*(&WarBoardMessageMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageMaster___c_TypeInfo, v4);
    v5 = WarBoardMessageMaster___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__4_0 = (System_Func_object__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v4);
      static_fields = WarBoardMessageMaster___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_WarBoardMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v8, Method_WarBoardMessageMaster___c__Lottery_b__4_0__, 0);
    v9 = WarBoardMessageMaster___c_TypeInfo->static_fields;
    v9->__9__4_0 = (struct System_Func_WarBoardMessageEntity__int__o *)_9__4_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__4_0, (int32_t)_9__4_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)entities,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___);
  v17 = System_Linq_Enumerable__ToArray_int_(
          v16,
          (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v17, 0, 0);
  if ( !entities )
    sub_21FFECC(RandomRangeIndex, v19);
  return (WarBoardMessageEntity_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)entities,
                                      RandomRangeIndex,
                                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarBoardMessageEntity__get_Item__);
}


void WarBoardMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59398B2 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardMessageMaster___c_TypeInfo);
    byte_59398B2 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarBoardMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardMessageMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardMessageMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardMessageMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardMessageMaster___c___ctor(WarBoardMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WarBoardMessageMaster___c___Lottery_b__4_0(
        WarBoardMessageMaster___c_o *this,
        WarBoardMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_21FFECC(this, 0);
  return ent->fields.playProbabirity;
}