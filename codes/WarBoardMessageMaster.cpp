void __fastcall WarBoardMessageMaster___ctor(WarBoardMessageMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B171DF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__, method, v2);
    byte_4B171DF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    413,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__);
}


bool __fastcall WarBoardMessageMaster__CheckCondition(
        WarBoardMessageMaster_o *this,
        WarBoardMessageEntity_o *entity,
        int32_t checkValue,
        bool isValueByPlayer,
        const MethodInfo *method)
{
  bool result; // w0
  struct System_Int64_array *playCondValues; // x8
  struct System_Int64_array *v10; // x8
  struct System_Int64_array *v11; // x8

  if ( !entity )
LABEL_24:
    sub_1BCAA3C(this, entity);
  this = (WarBoardMessageMaster_o *)BasicHelper__IsNullOrEmpty(
                                      (System_Collections_ICollection_o *)entity->fields.playCondValues,
                                      0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  switch ( entity->fields.playCondType )
  {
    case 0:
      return 1;
    case 1:
      if ( !isValueByPlayer )
        return 0;
      goto LABEL_12;
    case 2:
      if ( !isValueByPlayer )
        return 0;
      goto LABEL_16;
    case 3:
      if ( isValueByPlayer )
        goto LABEL_21;
      return 0;
    case 4:
      if ( isValueByPlayer )
        return 0;
LABEL_12:
      playCondValues = entity->fields.playCondValues;
      if ( !playCondValues )
        goto LABEL_24;
      if ( !playCondValues->max_length )
        goto LABEL_25;
      result = playCondValues->m_Items[0] == checkValue;
      break;
    case 5:
      if ( isValueByPlayer )
        return 0;
LABEL_16:
      v10 = entity->fields.playCondValues;
      if ( !v10 )
        goto LABEL_24;
      if ( !v10->max_length )
        goto LABEL_25;
      result = v10->m_Items[0] >= checkValue;
      break;
    case 6:
      if ( isValueByPlayer )
        return 0;
LABEL_21:
      v11 = entity->fields.playCondValues;
      if ( !v11 )
        goto LABEL_24;
      if ( !v11->max_length )
LABEL_25:
        sub_1BCAA44(this, entity);
      result = v11->m_Items[0] <= checkValue;
      break;
    default:
      return 0;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarBoardTaskBase__o *__fastcall WarBoardMessageMaster__GetMessageTasks(
        WarBoardMessageMaster_o *this,
        int32_t stageId,
        int32_t type,
        int32_t checkValue,
        bool isValueByPlayer,
        const MethodInfo *method)
{
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *v31; // x20
  __int64 v32; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v34; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  bool v36; // w24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x4
  Il2CppObject *v48; // x25
  __int64 methodPtr_low; // x9
  _BOOL8 v50; // x0
  __int64 v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  System_Collections_Generic_IEnumerator_T__c *v62; // x8
  __int64 v63; // x9
  int32_t *v64; // x10
  __int64 v65; // x0
  _BOOL8 v66; // x0
  __int64 v67; // x1
  const MethodInfo *v68; // x2
  __int64 v69; // x3
  WarBoardMessageEntity_o *v70; // x0
  const MethodInfo *v71; // x2
  System_Collections_Generic_List_object__o *v73; // x19

  if ( (byte_4B171E0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&stageId,
      *(_QWORD *)&type);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo, v27, v28);
    sub_1BCA7E0(&WarBoardMessageEntity_TypeInfo, v29, v30);
    byte_4B171E0 = 1;
  }
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo,
                                                       *(_QWORD *)&stageId,
                                                       *(_QWORD *)&type,
                                                       *(_QWORD *)&checkValue);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v32);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v34);
  v36 = isValueByPlayer;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v38;
        p_offset += 4;
        if ( !v38 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v41 = Enumerator->klass;
    v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v43 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_17;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_17:
      v44 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v45 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
            Enumerator,
            *(_QWORD *)(v44 + 8));
    v48 = (Il2CppObject *)v45;
    if ( !v45 )
      goto LABEL_40;
    methodPtr_low = LOBYTE(WarBoardMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v45 + 304LL) < (unsigned int)methodPtr_low
      || *(WarBoardMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)v45 + 200LL) + 8 * methodPtr_low - 8) != WarBoardMessageEntity_TypeInfo )
    {
      sub_1BCACFC(v45);
LABEL_40:
      sub_1BCAA3C(v45, v46);
    }
    if ( *(_DWORD *)(v45 + 16) == stageId && *(_DWORD *)(v45 + 20) == type )
    {
      v50 = WarBoardMessageMaster__CheckCondition(
              (WarBoardMessageMaster_o *)v45,
              (WarBoardMessageEntity_o *)v45,
              checkValue,
              v36,
              v47);
      if ( v50 )
      {
        if ( !v31 )
          sub_1BCAA3C(v50, v51);
        items = v31->fields._items;
        v59 = Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__;
        ++v31->fields._version;
        if ( !items )
          sub_1BCAA3C(v50, v51);
        size = v31->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v31,
            v48,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          v61 = &items->obj.klass + size;
          v31->fields._size = size + 1;
          v61[4] = (Il2CppClass *)v48;
          sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)v48, v52, v53, v54, v55, v56, v57);
        }
      }
    }
  }
  v62 = Enumerator->klass;
  v63 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v64 = &v62->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_34;
    }
    v65 = (__int64)&v62->vtable[*v64].method;
  }
  else
  {
LABEL_34:
    v65 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v65)(Enumerator, *(_QWORD *)(v65 + 8));
  v66 = System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v31,
          (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
  if ( v66 )
  {
    v70 = WarBoardMessageMaster__Lottery(
            (WarBoardMessageMaster_o *)v66,
            (System_Collections_Generic_List_WarBoardMessageEntity__o *)v31,
            v68);
    return WarBoardMessageMaster__GetTaskList((WarBoardMessageMaster_o *)v70, v70, v71);
  }
  else
  {
    v73 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                         v67,
                                                         v68,
                                                         v69);
    System_Collections_Generic_List_object____ctor(
      v73,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    return (System_Collections_Generic_List_WarBoardTaskBase__o *)v73;
  }
}


System_Collections_Generic_List_WarBoardTaskBase__o *__fastcall WarBoardMessageMaster__GetTaskList(
        WarBoardMessageMaster_o *this,
        WarBoardMessageEntity_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  struct System_Int64_array *scriptIds; // x25
  __int64 v17; // x8
  unsigned __int64 v18; // x26
  int64_t v19; // x22
  int32_t stageId; // w23
  int32_t sceneType; // w24
  WarBoardFaceMessagePerformance_o *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B171E2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, result, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7, v8);
    sub_1BCA7E0(&WarBoardFaceMessagePerformance_TypeInfo, v9, v10);
    byte_4B171E2 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       result,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !result )
    goto LABEL_15;
  scriptIds = result->fields.scriptIds;
  if ( !scriptIds )
    goto LABEL_15;
  v17 = *(_QWORD *)&scriptIds->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v17 )
        sub_1BCAA44(v12, v13);
      v19 = scriptIds->m_Items[v18];
      stageId = result->fields.stageId;
      sceneType = result->fields.sceneType;
      v22 = (WarBoardFaceMessagePerformance_o *)sub_1BCAA2C(WarBoardFaceMessagePerformance_TypeInfo, v13, v14, v15);
      WarBoardFaceMessagePerformance___ctor(v22, stageId, sceneType, v19, 0LL);
      if ( !v11 )
        break;
      items = v11->fields._items;
      v30 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v11->fields._version;
      if ( !items )
        break;
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v22,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v22;
        sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v22, v23, v24, v25, v26, v27, v28);
      }
      LODWORD(v17) = scriptIds->max_length;
      if ( (__int64)++v18 >= (int)v17 )
        return (System_Collections_Generic_List_WarBoardTaskBase__o *)v11;
    }
LABEL_15:
    sub_1BCAA3C(v12, v13);
  }
  return (System_Collections_Generic_List_WarBoardTaskBase__o *)v11;
}


WarBoardMessageEntity_o *__fastcall WarBoardMessageMaster__Lottery(
        WarBoardMessageMaster_o *this,
        System_Collections_Generic_List_WarBoardMessageEntity__o *entities,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  WarBoardMessageMaster___c_c *v19; // x0
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v21; // x21
  struct WarBoardMessageMaster___c_StaticFields *static_fields; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Int32_array *v30; // x0
  __int64 RandomRangeIndex; // x0
  __int64 v32; // x1

  if ( (byte_4B171E1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___, entities, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v6, v7);
    sub_1BCA7E0(&System_Func_WarBoardMessageEntity__int__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardMessageEntity__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_WarBoardMessageMaster___c__Lottery_b__4_0__, v12, v13);
    sub_1BCA7E0(&WarBoardMessageMaster___c_TypeInfo, v14, v15);
    byte_4B171E1 = 1;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___) )
    return 0LL;
  v19 = WarBoardMessageMaster___c_TypeInfo;
  if ( !WarBoardMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageMaster___c_TypeInfo, v16);
    v19 = WarBoardMessageMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v19->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19, v16);
      v19 = WarBoardMessageMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_WarBoardMessageEntity__int__TypeInfo, v16, v17, v18);
    System_Func_object__int____ctor(_9__4_0, v21, Method_WarBoardMessageMaster___c__Lottery_b__4_0__, 0LL);
    static_fields = WarBoardMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_WarBoardMessageEntity__int__o *)_9__4_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v23, v24, v25, v26, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)entities,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___);
  v30 = System_Linq_Enumerable__ToArray_int_(
          v29,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v30, 0, 0LL);
  if ( !entities )
    sub_1BCAA3C(RandomRangeIndex, v32);
  return (WarBoardMessageEntity_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)entities,
                                      RandomRangeIndex,
                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardMessageEntity__get_Item__);
}


void __fastcall WarBoardMessageMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B171E3 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardMessageMaster___c_TypeInfo, v1, v2);
    byte_4B171E3 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardMessageMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardMessageMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardMessageMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardMessageMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardMessageMaster___c___ctor(WarBoardMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarBoardMessageMaster___c___Lottery_b__4_0(
        WarBoardMessageMaster___c_o *this,
        WarBoardMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BCAA3C(this, 0LL);
  return ent->fields.playProbabirity;
}