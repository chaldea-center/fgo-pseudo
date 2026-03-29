void WarBoardAIManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v8; // x19
  struct WarBoardAIManager_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_Dictionary_int__object__o *v16; // x19
  struct WarBoardAIManager_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_Dictionary_int__object__o *v24; // x19
  struct WarBoardAIManager_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4D2E2A5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo);
    sub_1C93AD4(&WarBoardAIManager_TypeInfo);
    byte_4D2E2A5 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v1,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)WarBoardAIManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v8,
    (const MethodInfo_3566DA4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
  static_fields = WarBoardAIManager_TypeInfo->static_fields;
  static_fields->dicUniqueIndexPiece = (struct System_Collections_Generic_Dictionary_uint__WarBoardPieceData__o *)v8;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->dicUniqueIndexPiece,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v16,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
  v17 = WarBoardAIManager_TypeInfo->static_fields;
  v17->dicIndexSquare = (struct System_Collections_Generic_Dictionary_int__WarBoardSquareData__o *)v16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v17->dicIndexSquare, (int32_t)v16, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v24,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  v25 = WarBoardAIManager_TypeInfo->static_fields;
  v25->dicIndexItem = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v25->dicIndexItem, (int32_t)v24, v26, v27, v28, v29, v30, v31);
}


void WarBoardAIManager___ctor(WarBoardAIManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2E2A4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardAI___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardAI__TypeInfo);
    byte_4D2E2A4 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardAI__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardAI___ctor__);
  this->fields.warBoardAIList = (struct System_Collections_Generic_List_WarBoardAI__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardAIManager__AIEnd(WarBoardAIManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  _QWORD *monitor; // x8
  __int64 v6; // x19
  int v7; // w8
  unsigned int v8; // w20

  if ( (byte_4D2E296 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E296 = 1;
  }
  this->fields.exec = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  monitor = Instance[27].monitor;
  if ( !monitor )
    goto LABEL_12;
  v6 = monitor[6];
  if ( !v6 )
    goto LABEL_12;
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v7 )
        sub_1C93D34(Instance);
      Instance = *(Il2CppObject **)(v6 + 8LL * (int)v8 + 32);
      if ( !Instance )
        break;
      WarBoardPieceData__ClearPrevAiRoute((WarBoardPieceData_o *)Instance, 0);
      v7 = *(_DWORD *)(v6 + 24);
      if ( (int)++v8 >= v7 )
        return;
    }
LABEL_12:
    sub_1C93D2C(Instance, v4);
  }
}


void WarBoardAIManager__AddReinforcementsAI(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v15; // x22
  Il2CppObject *v16; // x0

  if ( (byte_4D2E2A2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_1C93AD4(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__);
    sub_1C93AD4(&WarBoardAIManager___c__DisplayClass28_0_TypeInfo);
    byte_4D2E2A2 = 1;
  }
  v11 = sub_1C93D20(WarBoardAIManager___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1C93D2C(v12, v13);
  *(_DWORD *)(v11 + 16) = forceId;
  *(_DWORD *)(v11 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v15 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__,
    0);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v16 )
    WarBoardAI__AddRoutePiecePersonalityDic((WarBoardAI_o *)v16, aiId, pieceIndex, 0);
}


void WarBoardAIManager__CreateAI(WarBoardAIManager_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  WarBoardAI_o *v5; // x19
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Collections_Generic_List_object__o *warBoardAIList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8

  if ( (byte_4D2E295 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardAI__Add__);
    sub_1C93AD4(&WarBoardAI_TypeInfo);
    byte_4D2E295 = 1;
  }
  v5 = (WarBoardAI_o *)sub_1C93D20(WarBoardAI_TypeInfo);
  WarBoardAI___ctor(v5, npc, 0);
  warBoardAIList = (System_Collections_Generic_List_object__o *)this->fields.warBoardAIList;
  if ( !warBoardAIList
    || (items = warBoardAIList->fields._items,
        v15 = Method_System_Collections_Generic_List_WarBoardAI__Add__,
        ++warBoardAIList->fields._version,
        !items) )
  {
    sub_1C93D2C(warBoardAIList, v6);
  }
  size = warBoardAIList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      warBoardAIList,
      (Il2CppObject *)v5,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    warBoardAIList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v5;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 4), (int32_t)v5, v7, v8, v9, v10, v11, v12);
  }
}


System_Collections_IEnumerator_o *WarBoardAIManager__Execute(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2E29A & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardAIManager__Execute_d__12_TypeInfo);
    byte_4D2E29A = 1;
  }
  v7 = sub_1C93D20(WarBoardAIManager__Execute_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 32) = forceId;
  *(_DWORD *)(v7 + 36) = groupId;
  return (System_Collections_IEnumerator_o *)v7;
}


float WarBoardAIManager__GetBreakPoint(WarBoardPieceData_o *piece, const MethodInfo *method)
{
  if ( !piece )
    sub_1C93D2C(0, method);
  return (float)(piece->fields._breakPoint_k__BackingField + 1)
       / (float)(piece->fields._breakPointMax_k__BackingField + 1);
}


System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *WarBoardAIManager__GetEnemyPiece(
        const MethodInfo *method)
{
  WarBoardAIManager_c *v1; // x0

  if ( (byte_4D2E29C & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardAIManager_TypeInfo);
    byte_4D2E29C = 1;
  }
  v1 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v1 = WarBoardAIManager_TypeInfo;
  }
  return v1->static_fields->dicSquareIndexEnemyPiece;
}


WarBoardPieceData_o *WarBoardAIManager__GetEnemyPieceSquareIndex(int32_t squareIndex, const MethodInfo *method)
{
  WarBoardAIManager_c *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexEnemyPiece; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2E29D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__);
    sub_1C93AD4(&WarBoardAIManager_TypeInfo);
    byte_4D2E29D = 1;
  }
  v3 = WarBoardAIManager_TypeInfo;
  value = 0;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v3 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v3->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    sub_1C93D2C(0, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicSquareIndexEnemyPiece,
         squareIndex,
         &value,
         (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__) )
  {
    return (WarBoardPieceData_o *)value;
  }
  else
  {
    return 0;
  }
}


WarBoardItemData_o *WarBoardAIManager__GetItem(int32_t squareIndex, const MethodInfo *method)
{
  WarBoardAIManager_c *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicIndexItem; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2E2A0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__);
    sub_1C93AD4(&WarBoardAIManager_TypeInfo);
    byte_4D2E2A0 = 1;
  }
  v3 = WarBoardAIManager_TypeInfo;
  value = 0;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v3 = WarBoardAIManager_TypeInfo;
  }
  dicIndexItem = (System_Collections_Generic_Dictionary_int__object__o *)v3->static_fields->dicIndexItem;
  if ( !dicIndexItem )
    sub_1C93D2C(0, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicIndexItem,
         squareIndex,
         &value,
         (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__) )
  {
    return (WarBoardItemData_o *)value;
  }
  else
  {
    return 0;
  }
}


WarBoardPieceData_o *WarBoardAIManager__GetPieceUnique(uint32_t uniqueIndex, const MethodInfo *method)
{
  WarBoardAIManager_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicUniqueIndexPiece; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2E29E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__);
    sub_1C93AD4(&WarBoardAIManager_TypeInfo);
    byte_4D2E29E = 1;
  }
  v3 = WarBoardAIManager_TypeInfo;
  value = 0;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v3 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->dicUniqueIndexPiece;
  if ( !dicUniqueIndexPiece )
    sub_1C93D2C(0, method);
  if ( System_Collections_Generic_Dictionary_uint__object___TryGetValue(
         dicUniqueIndexPiece,
         uniqueIndex,
         &value,
         (const MethodInfo_3568F04 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__) )
  {
    return (WarBoardPieceData_o *)value;
  }
  else
  {
    return 0;
  }
}


WarBoardSquareData_o *WarBoardAIManager__GetSquare(int32_t squareIndex, const MethodInfo *method)
{
  WarBoardAIManager_c *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicIndexSquare; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2E29F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__);
    sub_1C93AD4(&WarBoardAIManager_TypeInfo);
    byte_4D2E29F = 1;
  }
  v3 = WarBoardAIManager_TypeInfo;
  value = 0;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v3 = WarBoardAIManager_TypeInfo;
  }
  dicIndexSquare = (System_Collections_Generic_Dictionary_int__object__o *)v3->static_fields->dicIndexSquare;
  if ( !dicIndexSquare )
    sub_1C93D2C(0, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicIndexSquare,
         squareIndex,
         &value,
         (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__) )
  {
    return (WarBoardSquareData_o *)value;
  }
  else
  {
    return 0;
  }
}


void WarBoardAIManager__Initialize(
        WarBoardAIManager_o *this,
        System_Collections_Generic_List_WarBoardStageNpcEntity__o *npcList,
        const MethodInfo *method)
{
  WarBoardAIManager_o *v4; // x19
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x8
  int32_t size; // w2
  int v7; // w9
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4D2E294 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardAI__Clear__);
    this = (WarBoardAIManager_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
    byte_4D2E294 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  warBoardAIList = v4->fields.warBoardAIList;
  if ( !warBoardAIList )
    goto LABEL_15;
  size = warBoardAIList->fields._size;
  v7 = warBoardAIList->fields._version + 1;
  warBoardAIList->fields._size = 0;
  warBoardAIList->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)warBoardAIList->fields._items, 0, size, 0);
  if ( !npcList )
LABEL_15:
    sub_1C93D2C(this, npcList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)npcList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1C93D2C(v8, v9);
    if ( *(_DWORD *)((char *)&v11.fields._current->klass + (unsigned __int64)&dword_14)
      || *(_DWORD *)((char *)&v11.fields._current->klass + (unsigned __int64)&off_18) )
    {
      WarBoardAIManager__CreateAI(v4, (WarBoardStageNpcEntity_o *)v11.fields._current, v10);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
}


bool WarBoardAIManager__IsAllyPiece(WarBoardPieceData_o *one, WarBoardPieceData_o *two, const MethodInfo *method)
{
  if ( !one || !two )
    sub_1C93D2C(one, two);
  return one->fields._forceId_k__BackingField == two->fields._forceId_k__BackingField;
}


bool WarBoardAIManager__IsEnemyBlock(int32_t squareIndex, const MethodInfo *method)
{
  if ( (byte_4D2E2A1 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardAIManager_TypeInfo);
    byte_4D2E2A1 = 1;
  }
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  return WarBoardAIManager__GetEnemyPieceSquareIndex(squareIndex, method) != 0;
}


bool WarBoardAIManager__IsEnemyPiece(WarBoardPieceData_o *one, WarBoardPieceData_o *two, const MethodInfo *method)
{
  if ( !one || !two )
    sub_1C93D2C(one, two);
  return one->fields._forceId_k__BackingField != two->fields._forceId_k__BackingField;
}


bool WarBoardAIManager__IsEqualPiece(WarBoardPieceData_o *one, WarBoardPieceData_o *two, const MethodInfo *method)
{
  if ( !one || !two )
    sub_1C93D2C(one, two);
  return one->fields._forceId_k__BackingField == two->fields._forceId_k__BackingField
      && one->fields._index_k__BackingField == two->fields._index_k__BackingField;
}


void WarBoardAIManager__Pause(WarBoardAIManager_o *this, const MethodInfo *method)
{
  this->fields.isPause = 1;
}


void WarBoardAIManager__Resume(WarBoardAIManager_o *this, const MethodInfo *method)
{
  this->fields.isPause = 0;
}


void WarBoardAIManager__StartAIPhase(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v11; // x22
  Il2CppObject *v12; // x0
  AStarSearch_c *v13; // x0
  const MethodInfo *v14; // x3

  if ( (byte_4D2E298 & 1) == 0 )
  {
    sub_1C93AD4(&AStarSearch_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_1C93AD4(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__);
    sub_1C93AD4(&WarBoardAIManager___c__DisplayClass9_0_TypeInfo);
    byte_4D2E298 = 1;
  }
  v7 = sub_1C93D20(WarBoardAIManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  *(_DWORD *)(v7 + 16) = forceId;
  *(_DWORD *)(v7 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v11 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__,
    0);
  v12 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v12 )
  {
    this->fields.exec = 1;
    LOBYTE(v12[2].klass) = 0;
    v13 = AStarSearch_TypeInfo;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    AStarSearch__DetourCacheClear((const MethodInfo *)v13);
    WarBoardAIManager__StartThink(this, *(_DWORD *)(v7 + 16), *(_DWORD *)(v7 + 20), v14);
  }
}


void WarBoardAIManager__StartThink(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicUniqueIndexPiece; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v11; // x22
  Il2CppObject *v12; // x0
  WarBoardAIManager_c *v13; // x0
  __int64 v14; // x8
  __int64 v15; // x24
  int v16; // w8
  unsigned int v17; // w25
  __int64 v18; // x21
  WarBoardAIManager_c *v19; // x0
  WarBoardAIManager_c *v20; // x0
  WarBoardAIManager_c *v21; // x0
  __int64 v22; // x8
  __int64 v23; // x24
  int v24; // w8
  unsigned int v25; // w25
  __int64 v26; // x21
  WarBoardAIManager_c *v27; // x0
  const MethodInfo *v28; // x3
  __int64 v29; // x8
  __int64 v30; // x23
  int v31; // w8
  unsigned int v32; // w24
  __int64 v33; // x21
  struct System_Collections_IEnumerator_o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7

  if ( (byte_4D2E299 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
    sub_1C93AD4(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__);
    sub_1C93AD4(&WarBoardAIManager___c__DisplayClass11_0_TypeInfo);
    sub_1C93AD4(&WarBoardAIManager_TypeInfo);
    byte_4D2E299 = 1;
  }
  v7 = sub_1C93D20(WarBoardAIManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_57;
  *(_DWORD *)(v7 + 16) = forceId;
  *(_DWORD *)(v7 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v11 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__,
    0);
  v12 = System_Linq_Enumerable__SingleOrDefault_object__52303388(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_31E161C *)Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
  if ( !v12 )
    return;
  this->fields.isPause = 0;
  WarBoardAI__Clear((WarBoardAI_o *)v12, 0);
  v13 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v13 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v13->static_fields->dicUniqueIndexPiece;
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    dicUniqueIndexPiece,
    (const MethodInfo_3567900 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
    (const MethodInfo_34BCF0C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  v14 = *(_QWORD *)&dicUniqueIndexPiece[5].fields._freeCount;
  if ( !v14 )
    goto LABEL_57;
  v15 = *(_QWORD *)(v14 + 48);
  if ( !v15 )
    goto LABEL_57;
  v16 = *(_DWORD *)(v15 + 24);
  if ( v16 >= 1 )
  {
    v17 = 0;
    while ( v17 < v16 )
    {
      v18 = *(_QWORD *)(v15 + 8LL * (int)v17 + 32);
      if ( !v18 )
        goto LABEL_57;
      if ( !*(_BYTE *)(v18 + 60) )
      {
        v19 = WarBoardAIManager_TypeInfo;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          v19 = WarBoardAIManager_TypeInfo;
        }
        dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v19->static_fields->dicUniqueIndexPiece;
        if ( !dicUniqueIndexPiece )
          goto LABEL_57;
        System_Collections_Generic_Dictionary_uint__object___Add(
          dicUniqueIndexPiece,
          *(_DWORD *)(v18 + 44),
          (Il2CppObject *)v18,
          (const MethodInfo_3567778 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
        if ( *(_DWORD *)(v18 + 20) != *(_DWORD *)(v7 + 16) )
        {
          v20 = WarBoardAIManager_TypeInfo;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            v20 = WarBoardAIManager_TypeInfo;
          }
          dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v20->static_fields->dicSquareIndexEnemyPiece;
          if ( !dicUniqueIndexPiece )
            goto LABEL_57;
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
            *(_DWORD *)(v18 + 64),
            (Il2CppObject *)v18,
            (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
        }
      }
      v16 = *(_DWORD *)(v15 + 24);
      if ( (int)++v17 >= v16 )
        goto LABEL_26;
    }
LABEL_58:
    sub_1C93D34(dicUniqueIndexPiece);
  }
LABEL_26:
  v21 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v21 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v21->static_fields->dicIndexSquare;
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
    (const MethodInfo_34BCF0C *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  v22 = *(_QWORD *)&dicUniqueIndexPiece[5].fields._freeCount;
  if ( !v22 )
    goto LABEL_57;
  v23 = *(_QWORD *)(v22 + 56);
  if ( !v23 )
    goto LABEL_57;
  v24 = *(_DWORD *)(v23 + 24);
  if ( v24 >= 1 )
  {
    v25 = 0;
    while ( v25 < v24 )
    {
      dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo;
      v26 = *(_QWORD *)(v23 + 8LL * (int)v25 + 32);
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v26 )
        goto LABEL_57;
      dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicUniqueIndexPiece[2].fields._entries->bounds;
      if ( !dicUniqueIndexPiece )
        goto LABEL_57;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
        *(_DWORD *)(v26 + 16),
        (Il2CppObject *)v26,
        (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
      v24 = *(_DWORD *)(v23 + 24);
      if ( (int)++v25 >= v24 )
        goto LABEL_40;
    }
    goto LABEL_58;
  }
LABEL_40:
  v27 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v27 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v27->static_fields->dicIndexItem;
  if ( !dicUniqueIndexPiece
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
          (const MethodInfo_34BCF0C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__),
        (dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (v29 = *(_QWORD *)&dicUniqueIndexPiece[5].fields._freeCount) == 0
    || (v30 = *(_QWORD *)(v29 + 72)) == 0 )
  {
LABEL_57:
    sub_1C93D2C(dicUniqueIndexPiece, v9);
  }
  v31 = *(_DWORD *)(v30 + 24);
  if ( v31 >= 1 )
  {
    v32 = 0;
    while ( v32 < v31 )
    {
      dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo;
      v33 = *(_QWORD *)(v30 + 8LL * (int)v32 + 32);
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v33 )
        goto LABEL_57;
      dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicUniqueIndexPiece[2].fields._entries->max_length;
      if ( !dicUniqueIndexPiece )
        goto LABEL_57;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
        *(_DWORD *)(v33 + 16),
        (Il2CppObject *)v33,
        (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
      v31 = *(_DWORD *)(v30 + 24);
      if ( (int)++v32 >= v31 )
        goto LABEL_54;
    }
    goto LABEL_58;
  }
LABEL_54:
  if ( !this->fields.executeTask )
  {
    v34 = WarBoardAIManager__Execute(this, *(_DWORD *)(v7 + 16), *(_DWORD *)(v7 + 20), v28);
    this->fields.executeTask = v34;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.executeTask, (int32_t)v34, v35, v36, v37, v38, v39, v40);
  }
}


void WarBoardAIManager__Update(WarBoardAIManager_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_executeTask; // x19
  System_Collections_IEnumerator_o *v4; // x20
  struct System_Collections_IEnumerator_o *executeTask; // t1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2E29B & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardManager_TypeInfo);
    byte_4D2E29B = 1;
  }
  executeTask = this->fields.executeTask;
  p_executeTask = (GrandQuestFolderBoardItem_o *)&this->fields.executeTask;
  v4 = executeTask;
  if ( executeTask )
  {
    if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    if ( !WarBoardManager__IEnumeratorExecute(v4, 0) )
    {
      p_executeTask->klass = 0;
      sub_1C93A78(p_executeTask, 0, v6, v7, v8, v9, v10, v11);
    }
  }
}


void WarBoardAIManager__UpdateAiId(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v15; // x22
  Il2CppObject *v16; // x0

  if ( (byte_4D2E2A3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_1C93AD4(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__);
    sub_1C93AD4(&WarBoardAIManager___c__DisplayClass29_0_TypeInfo);
    byte_4D2E2A3 = 1;
  }
  v11 = sub_1C93D20(WarBoardAIManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1C93D2C(v12, v13);
  *(_DWORD *)(v11 + 16) = forceId;
  *(_DWORD *)(v11 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v15 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__,
    0);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v16 )
    WarBoardAI__UpdateRoutePiecePersonalityDic((WarBoardAI_o *)v16, aiId, pieceIndex, 0);
}


System_Collections_IEnumerator_o *WarBoardAIManager__Wait(WarBoardAIManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2E297 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardAIManager__Wait_d__8_TypeInfo);
    byte_4D2E297 = 1;
  }
  v3 = sub_1C93D20(WarBoardAIManager__Wait_d__8_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


bool WarBoardAIManager___Wait_b__8_0(WarBoardAIManager_o *this, const MethodInfo *method)
{
  return this->fields.isPause && this->fields.exec;
}


void WarBoardAIManager__Execute_d__12___ctor(
        WarBoardAIManager__Execute_d__12_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardAIManager__Execute_d__12__MoveNext(WarBoardAIManager__Execute_d__12_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  WarBoardAIManager__Execute_d__12_o *v8; // x19
  WarBoardAIManager_o *_4__this; // x20
  Il2CppObject *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *_8__1; // x21
  System_Collections_Generic_IEnumerable_TSource__o *warBoardAIList; // x22
  System_Func_object__bool__o *v19; // x23
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct WarBoardAIManager___c__DisplayClass12_0_o *v27; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v28; // x22
  System_Func_object__bool__o *_9__2; // x24
  WarBoardAIManager__Execute_d__12_o *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Object_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  WarBoardAIManager___c_c *v45; // x0
  System_Collections_Generic_IEnumerable_T__o *actPieces_5__4; // x21
  System_Action_object__o *_9__12_3; // x22
  Il2CppObject *v48; // x23
  struct WarBoardAIManager___c_StaticFields *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  System_Collections_IEnumerator_o *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  WarBoardAIManager___c_c *v63; // x0
  System_Func_bool__o *_9__12_1; // x20
  Il2CppObject *v65; // x21
  struct WarBoardAIManager___c_StaticFields *static_fields; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  UnityEngine_WaitWhile_o *v73; // x21
  GrandQuestFolderBoardItem_o *v74; // x19
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  struct System_Collections_IEnumerator_o *v82; // x21
  System_Collections_IEnumerator_c *v83; // x8
  __int64 v84; // x9
  System_Collections_IEnumerator_c **v85; // x10
  __int64 v86; // x0
  __int64 v87; // x0
  struct System_Collections_IEnumerator_o *v88; // x22
  System_Collections_IEnumerator_c *v89; // x8
  WarBoardAIManager__Execute_d__12_o *v90; // x21
  __int64 v91; // x9
  System_Collections_IEnumerator_c **v92; // x10
  __int64 v93; // x0
  WarBoardAIManager__Execute_d__12_o *v94; // x22
  int32_t v95; // w0
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  System_Collections_IEnumerator_o **p_enumeratorChild_5__7; // x21
  System_Collections_IEnumerator_o *v103; // x22
  int32_t v104; // w2
  int32_t v105; // w3
  System_String_o *v106; // x4
  int32_t v107; // w5
  int64_t v108; // x6
  System_String_o *v109; // x7
  float realtimeSinceStartup; // s0
  Il2CppObject **p__2__current; // x19
  int32_t v112; // w2
  int32_t v113; // w3
  System_String_o *v114; // x4
  int32_t v115; // w5
  int64_t v116; // x6
  System_String_o *v117; // x7
  int v118; // w8
  struct System_Collections_IEnumerator_o *exe_5__5; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v121; // x9
  int *p_offset; // x10
  __int64 v123; // x0
  WarBoardAIManager___c_c *v124; // x0
  System_Collections_Generic_IEnumerable_T__o *v125; // x21
  System_Action_object__o *_9__12_4; // x22
  Il2CppObject *v127; // x23
  struct WarBoardAIManager___c_StaticFields *v128; // x0
  int32_t v129; // w2
  int32_t v130; // w3
  System_String_o *v131; // x4
  int32_t v132; // w5
  int64_t v133; // x6
  System_String_o *v134; // x7
  struct WarBoardAI_o *ai_5__2; // x8
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  System_String_o *v138; // x4
  int32_t v139; // w5
  int64_t v140; // x6
  System_String_o *v141; // x7
  struct WarBoardAI_o *v142; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v143; // x8
  int32_t v144; // w2
  int32_t v145; // w3
  System_String_o *v146; // x4
  int32_t v147; // w5
  int64_t v148; // x6
  System_String_o *v149; // x7
  struct System_Collections_IEnumerator_o *v150; // x21
  System_Collections_IEnumerator_c *v151; // x8
  __int64 v152; // x9
  System_Collections_IEnumerator_c **v153; // x10
  __int64 v154; // x0
  float v155; // s0
  int32_t v156; // w2
  int32_t v157; // w3
  System_String_o *v158; // x4
  int32_t v159; // w5
  int64_t v160; // x6
  System_String_o *v161; // x7
  System_Collections_IEnumerator_o *v162; // x0
  int32_t v163; // w2
  int32_t v164; // w3
  System_String_o *v165; // x4
  int32_t v166; // w5
  int64_t v167; // x6
  System_String_o *v168; // x7
  WarBoardData_o *v169; // x0
  const MethodInfo *v170; // x1

  v8 = this;
  if ( (byte_4D2E2A8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_WarBoardPieceData__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_WarBoardPieceData___);
    sub_1C93AD4(&bool_TypeInfo);
    sub_1C93AD4(&DefenseAreaData_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_bool__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardAIManager___c__Execute_b__12_1__);
    sub_1C93AD4(&Method_WarBoardAIManager___c__Execute_b__12_3__);
    sub_1C93AD4(&Method_WarBoardAIManager___c__Execute_b__12_4__);
    sub_1C93AD4(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__);
    sub_1C93AD4(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__);
    sub_1C93AD4(&WarBoardAIManager___c__DisplayClass12_0_TypeInfo);
    sub_1C93AD4(&WarBoardAIManager___c_TypeInfo);
    sub_1C93AD4(&UnityEngine_WaitWhile_TypeInfo);
    this = (WarBoardAIManager__Execute_d__12_o *)sub_1C93AD4(&WarBoardManager_TypeInfo);
    byte_4D2E2A8 = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (Il2CppObject *)sub_1C93D20(WarBoardAIManager___c__DisplayClass12_0_TypeInfo);
      System_Object___ctor(v10, 0);
      v8->fields.__8__1 = (struct WarBoardAIManager___c__DisplayClass12_0_o *)v10;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, (int32_t)v10, v11, v12, v13, v14, v15, v16);
      _8__1 = (Il2CppObject *)v8->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_123;
      _8__1[1].klass = *(Il2CppClass **)&v8->fields.forceId;
      if ( !_4__this )
        goto LABEL_123;
      warBoardAIList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.warBoardAIList;
      v19 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardAI__bool__TypeInfo);
      System_Func_object__bool____ctor(v19, _8__1, Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__, 0);
      v20 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
              warBoardAIList,
              (System_Func_TSource__bool__o *)v19,
              (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
      v8->fields._ai_5__2 = (struct WarBoardAI_o *)v20;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields._ai_5__2, (int32_t)v20, v21, v22, v23, v24, v25, v26);
      if ( !v8->fields._ai_5__2 )
        return 0;
      goto LABEL_102;
    case 1:
      v27 = v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !v27 || !_4__this )
        goto LABEL_123;
      WarBoardAIManager__StartThink(_4__this, v27->fields.forceId, v27->fields.groupId, v3);
      goto LABEL_19;
    case 2:
      v8->fields.__1__state = -1;
      goto LABEL_59;
    case 3:
      v8->fields.__1__state = -1;
      goto LABEL_68;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_123;
      if ( !_4__this->fields.exec )
        return 0;
      break;
    case 5:
      v8->fields.__1__state = -1;
      goto LABEL_85;
    default:
      return 0;
  }
  while ( 2 )
  {
    ai_5__2 = v8->fields._ai_5__2;
    if ( !ai_5__2 )
      goto LABEL_123;
    if ( !ai_5__2->fields.isEndPhase )
    {
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)*((_QWORD *)this + 55);
        if ( this )
        {
          if ( WarBoardData__IsWin((WarBoardData_o *)this, method) )
            return 0;
          this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !this )
            goto LABEL_123;
          this = (WarBoardAIManager__Execute_d__12_o *)*((_QWORD *)this + 55);
          if ( !this )
            goto LABEL_123;
          this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__IsLose((WarBoardData_o *)this, method);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 0;
          v142 = v8->fields._ai_5__2;
          if ( v142 )
          {
            if ( !v142->fields.isEndRoute )
            {
              v8->fields.__2__current = 0;
              p__2__current = &v8->fields.__2__current;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)p__2__current, 0, v136, (int32_t)v137, v138, v139, v140, v141);
              v118 = 5;
              goto LABEL_65;
            }
            v143 = v8->fields.__8__1;
            if ( v143 )
            {
              WarBoardAIManager__StartThink(_4__this, v143->fields.forceId, v143->fields.groupId, v137);
              goto LABEL_101;
            }
          }
        }
      }
LABEL_123:
      sub_1C93D2C(this, method);
    }
    do
    {
LABEL_101:
      v8->fields._actPieces_5__4 = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields._actPieces_5__4, 0, v2, (int32_t)v3, v4, v5, v6, v7);
      v8->fields._exe_5__5 = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields._exe_5__5, 0, v144, v145, v146, v147, v148, v149);
LABEL_102:
      if ( !_4__this->fields.exec )
        return 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_123;
      if ( WarBoardManager__HasSchedule((WarBoardManager_o *)this, 0) )
      {
        v63 = WarBoardAIManager___c_TypeInfo;
        if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
          v63 = WarBoardAIManager___c_TypeInfo;
        }
        _9__12_1 = v63->static_fields->__9__12_1;
        if ( !_9__12_1 )
        {
          if ( !v63->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v63);
            v63 = WarBoardAIManager___c_TypeInfo;
          }
          v65 = (Il2CppObject *)v63->static_fields->__9;
          _9__12_1 = (System_Func_bool__o *)sub_1C93D20(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(_9__12_1, v65, Method_WarBoardAIManager___c__Execute_b__12_1__, 0);
          static_fields = WarBoardAIManager___c_TypeInfo->static_fields;
          static_fields->__9__12_1 = _9__12_1;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__12_1,
            (int32_t)_9__12_1,
            v67,
            v68,
            v69,
            v70,
            v71,
            v72);
        }
        v73 = (UnityEngine_WaitWhile_o *)sub_1C93D20(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v73, _9__12_1, 0);
        v8->fields.__2__current = (Il2CppObject *)v73;
        v74 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C93A78(v74, (int32_t)v73, v75, v76, v77, v78, v79, v80);
        LODWORD(v74[-1].fields._ClosedMessage_k__BackingField) = 1;
        return 1;
      }
LABEL_19:
      v8->fields._isNextPhase_5__3 = 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetConnect((CommonUI_o *)this, 1, 0);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetLoadMode((CommonUI_o *)this, 10, 0);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_123;
      this = (WarBoardAIManager__Execute_d__12_o *)*((_QWORD *)this + 55);
      if ( !this )
        goto LABEL_123;
      this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__GetAlivePieces((WarBoardData_o *)this, method);
      v28 = v8->fields.__8__1;
      if ( !v28 )
        goto LABEL_123;
      _9__2 = (System_Func_object__bool__o *)v28->fields.__9__2;
      v30 = this;
      if ( !_9__2 )
      {
        _9__2 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__2,
          (Il2CppObject *)v28,
          Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__,
          0);
        v28->fields.__9__2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__2;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v28->fields.__9__2, (int32_t)_9__2, v31, v32, v33, v34, v35, v36);
      }
      v37 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v30,
              (System_Func_TSource__bool__o *)_9__2,
              (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      v38 = System_Linq_Enumerable__ToArray_object_(
              v37,
              (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      v8->fields._actPieces_5__4 = (struct WarBoardPieceData_array *)v38;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v8->fields._actPieces_5__4,
        (int32_t)v38,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      v45 = WarBoardAIManager___c_TypeInfo;
      actPieces_5__4 = (System_Collections_Generic_IEnumerable_T__o *)v8->fields._actPieces_5__4;
      if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v45 = WarBoardAIManager___c_TypeInfo;
      }
      _9__12_3 = (System_Action_object__o *)v45->static_fields->__9__12_3;
      if ( !_9__12_3 )
      {
        if ( !v45->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v45);
          v45 = WarBoardAIManager___c_TypeInfo;
        }
        v48 = (Il2CppObject *)v45->static_fields->__9;
        _9__12_3 = (System_Action_object__o *)sub_1C93D20(System_Action_WarBoardPieceData__TypeInfo);
        System_Action_object____ctor(_9__12_3, v48, Method_WarBoardAIManager___c__Execute_b__12_3__, 0);
        v49 = WarBoardAIManager___c_TypeInfo->static_fields;
        v49->__9__12_3 = (struct System_Action_WarBoardPieceData__o *)_9__12_3;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v49->__9__12_3, (int32_t)_9__12_3, v50, v51, v52, v53, v54, v55);
      }
      BasicHelper__ForEach_object_(
        actPieces_5__4,
        (System_Action_T__o *)_9__12_3,
        (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      if ( !DefenseAreaData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DefenseAreaData_TypeInfo);
      DefenseAreaData__ClearCache(0);
      this = (WarBoardAIManager__Execute_d__12_o *)v8->fields._ai_5__2;
      if ( !this )
        goto LABEL_123;
      v56 = WarBoardAI__Think((WarBoardAI_o *)this, 0);
      v8->fields._exe_5__5 = v56;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields._exe_5__5, (int32_t)v56, v57, v58, v59, v60, v61, v62);
      v8->fields._prevTime_5__6 = UnityEngine_Time__get_realtimeSinceStartup(0);
      while ( 1 )
      {
LABEL_68:
        exe_5__5 = v8->fields._exe_5__5;
        if ( !exe_5__5 )
          goto LABEL_123;
        klass = exe_5__5->klass;
        v121 = *(unsigned __int16 *)&exe_5__5->klass->_2.rank;
        if ( *(_WORD *)&exe_5__5->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v121;
            p_offset += 4;
            if ( !v121 )
              goto LABEL_73;
          }
          v123 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_73:
          v123 = sub_1C69E5C(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 0);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v123)(
                                                       exe_5__5,
                                                       *(_QWORD *)(v123 + 8));
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_76;
        v82 = v8->fields._exe_5__5;
        if ( !v82 )
          goto LABEL_123;
        v83 = v82->klass;
        v84 = *(unsigned __int16 *)&v82->klass->_2.rank;
        if ( *(_WORD *)&v82->klass->_2.rank )
        {
          v85 = (System_Collections_IEnumerator_c **)&v83->_1.interfaceOffsets->offset;
          while ( *(v85 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v84;
            v85 += 2;
            if ( !v84 )
              goto LABEL_48;
          }
          v86 = (__int64)&v83->vtable[*(_DWORD *)v85 + 1];
        }
        else
        {
LABEL_48:
          v86 = sub_1C69E5C(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v87 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v86)(
                v82,
                *(_QWORD *)(v86 + 8));
        this = (WarBoardAIManager__Execute_d__12_o *)sub_1C93C10(v87, System_Collections_IEnumerator_TypeInfo);
        v88 = v8->fields._exe_5__5;
        if ( !v88 )
          goto LABEL_123;
        v89 = v88->klass;
        v90 = this;
        v91 = *(unsigned __int16 *)&v88->klass->_2.rank;
        if ( *(_WORD *)&v88->klass->_2.rank )
        {
          v92 = (System_Collections_IEnumerator_c **)&v89->_1.interfaceOffsets->offset;
          while ( *(v92 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v91;
            v92 += 2;
            if ( !v91 )
              goto LABEL_55;
          }
          v93 = (__int64)&v89->vtable[*(_DWORD *)v92 + 1];
        }
        else
        {
LABEL_55:
          v93 = sub_1C69E5C(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v93)(
                                                       v88,
                                                       *(_QWORD *)(v93 + 8));
        v94 = this;
        if ( v90 )
        {
          v8->fields._enumeratorChild_5__7 = (struct System_Collections_IEnumerator_o *)sub_1C93C10(
                                                                                          this,
                                                                                          System_Collections_IEnumerator_TypeInfo);
          v95 = sub_1C93C10(v94, System_Collections_IEnumerator_TypeInfo);
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&v8->fields._enumeratorChild_5__7,
            v95,
            v96,
            v97,
            v98,
            v99,
            v100,
            v101);
LABEL_59:
          p_enumeratorChild_5__7 = &v8->fields._enumeratorChild_5__7;
          while ( 1 )
          {
            v103 = *p_enumeratorChild_5__7;
            if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
            if ( !WarBoardManager__IEnumeratorExecute(v103, 0) )
              break;
            if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - v8->fields._prevTime_5__6) >= 0.1 )
            {
              realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
              v8->fields.__2__current = 0;
              p__2__current = &v8->fields.__2__current;
              *((float *)p__2__current + 16) = realtimeSinceStartup;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)p__2__current, 0, v112, v113, v114, v115, v116, v117);
              v118 = 2;
              goto LABEL_65;
            }
          }
          *p_enumeratorChild_5__7 = 0;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&v8->fields._enumeratorChild_5__7,
            0,
            v104,
            v105,
            v106,
            v107,
            v108,
            v109);
          goto LABEL_67;
        }
        if ( this && (System_Boolean_c *)this->klass == bool_TypeInfo )
          break;
LABEL_67:
        if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - v8->fields._prevTime_5__6) >= 0.1 )
        {
          v155 = UnityEngine_Time__get_realtimeSinceStartup(0);
          v8->fields.__2__current = 0;
          p__2__current = &v8->fields.__2__current;
          *((float *)p__2__current + 16) = v155;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)p__2__current, 0, v156, v157, v158, v159, v160, v161);
          v118 = 3;
          goto LABEL_65;
        }
      }
      v150 = v8->fields._exe_5__5;
      if ( !v150 )
        goto LABEL_123;
      v151 = v150->klass;
      v152 = *(unsigned __int16 *)&v150->klass->_2.rank;
      if ( *(_WORD *)&v150->klass->_2.rank )
      {
        v153 = (System_Collections_IEnumerator_c **)&v151->_1.interfaceOffsets->offset;
        while ( *(v153 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v152;
          v153 += 2;
          if ( !v152 )
            goto LABEL_111;
        }
        v154 = (__int64)&v151->vtable[*(_DWORD *)v153 + 1];
      }
      else
      {
LABEL_111:
        v154 = sub_1C69E5C(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1);
      }
      this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v154)(
                                                     v150,
                                                     *(_QWORD *)(v154 + 8));
      if ( !this )
        goto LABEL_123;
      if ( this->klass->_1.element_class != bool_TypeInfo->_1.element_class )
      {
        sub_1C940C8(this);
        return (unsigned __int8)WarBoardData__GetAlivePieces(v169, v170);
      }
      v8->fields._isNextPhase_5__3 = *(_BYTE *)j_il2cpp_object_unbox_0();
LABEL_76:
      v124 = WarBoardAIManager___c_TypeInfo;
      v125 = (System_Collections_Generic_IEnumerable_T__o *)v8->fields._actPieces_5__4;
      if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v124 = WarBoardAIManager___c_TypeInfo;
      }
      _9__12_4 = (System_Action_object__o *)v124->static_fields->__9__12_4;
      if ( !_9__12_4 )
      {
        if ( !v124->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v124);
          v124 = WarBoardAIManager___c_TypeInfo;
        }
        v127 = (Il2CppObject *)v124->static_fields->__9;
        _9__12_4 = (System_Action_object__o *)sub_1C93D20(System_Action_WarBoardPieceData__TypeInfo);
        System_Action_object____ctor(_9__12_4, v127, Method_WarBoardAIManager___c__Execute_b__12_4__, 0);
        v128 = WarBoardAIManager___c_TypeInfo->static_fields;
        v128->__9__12_4 = (struct System_Action_WarBoardPieceData__o *)_9__12_4;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v128->__9__12_4,
          (int32_t)_9__12_4,
          v129,
          v130,
          v131,
          v132,
          v133,
          v134);
      }
      BasicHelper__ForEach_object_(
        v125,
        (System_Action_T__o *)_9__12_4,
        (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
      if ( v8->fields._isNextPhase_5__3 )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( this )
        {
          WarBoardManager__NextTurn((WarBoardManager_o *)this, 0);
          if ( _4__this )
          {
            WarBoardAIManager__AIEnd(_4__this, method);
            return 0;
          }
        }
        goto LABEL_123;
      }
LABEL_85:
      if ( !_4__this )
        goto LABEL_123;
    }
    while ( !_4__this->fields.exec );
    this = (WarBoardAIManager__Execute_d__12_o *)v8->fields._ai_5__2;
    if ( !this )
      goto LABEL_123;
    this = (WarBoardAIManager__Execute_d__12_o *)WarBoardAI__Execute((WarBoardAI_o *)this, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      continue;
    break;
  }
  v162 = WarBoardAIManager__Wait(_4__this, method);
  v8->fields.__2__current = (Il2CppObject *)v162;
  p__2__current = &v8->fields.__2__current;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v162, v163, v164, v165, v166, v167, v168);
  v118 = 4;
LABEL_65:
  *((_DWORD *)p__2__current - 2) = v118;
  return 1;
}


Il2CppObject *WarBoardAIManager__Execute_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardAIManager__Execute_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardAIManager__Execute_d__12__System_Collections_IEnumerator_Reset(
        WarBoardAIManager__Execute_d__12_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_WarBoardAIManager__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *WarBoardAIManager__Execute_d__12__System_Collections_IEnumerator_get_Current(
        WarBoardAIManager__Execute_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardAIManager__Execute_d__12__System_IDisposable_Dispose(
        WarBoardAIManager__Execute_d__12_o *this,
        const MethodInfo *method)
{
  ;
}


void WarBoardAIManager__Wait_d__8___ctor(
        WarBoardAIManager__Wait_d__8_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardAIManager__Wait_d__8__MoveNext(WarBoardAIManager__Wait_d__8_o *this, const MethodInfo *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitWhile_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w8

  if ( (byte_4D2E2A9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Func_bool__TypeInfo);
    sub_1C93AD4(&UnityEngine_WaitWhile_TypeInfo);
    sub_1C93AD4(&Method_WarBoardAIManager__Wait_b__8_0__);
    byte_4D2E2A9 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v14 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v6 = (System_Func_bool__o *)sub_1C93D20(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v6, _4__this, Method_WarBoardAIManager__Wait_b__8_0__, 0);
    v7 = (UnityEngine_WaitWhile_o *)sub_1C93D20(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v7, v6, 0);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    v14 = 1;
    result = 1;
  }
  this->fields.__1__state = v14;
  return result;
}


Il2CppObject *WarBoardAIManager__Wait_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardAIManager__Wait_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardAIManager__Wait_d__8__System_Collections_IEnumerator_Reset(
        WarBoardAIManager__Wait_d__8_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_WarBoardAIManager__Wait_d__8_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *WarBoardAIManager__Wait_d__8__System_Collections_IEnumerator_get_Current(
        WarBoardAIManager__Wait_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardAIManager__Wait_d__8__System_IDisposable_Dispose(
        WarBoardAIManager__Wait_d__8_o *this,
        const MethodInfo *method)
{
  ;
}


void WarBoardAIManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2E2A6 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardAIManager___c_TypeInfo);
    byte_4D2E2A6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(WarBoardAIManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAIManager___c_TypeInfo->static_fields->__9 = (struct WarBoardAIManager___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)WarBoardAIManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardAIManager___c___ctor(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIManager___c___Execute_b__12_1(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D2E2A7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E2A7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v3);
  return WarBoardManager__HasSchedule((WarBoardManager_o *)Instance, 0);
}


void WarBoardAIManager___c___Execute_b__12_3(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  WarBoardPieceData__ActivateCacheMode(x, 1, 0);
}


void WarBoardAIManager___c___Execute_b__12_4(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  WarBoardPieceData__ActivateCacheMode(x, 0, 0);
}


void WarBoardAIManager___c__DisplayClass11_0___ctor(
        WarBoardAIManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIManager___c__DisplayClass11_0___StartThink_b__0(
        WarBoardAIManager___c__DisplayClass11_0_o *this,
        WarBoardAI_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return WarBoardAI__get_ForceId(x, 0) == this->fields.forceId && WarBoardAI__get_GroupId(x, 0) == this->fields.groupId;
}


void WarBoardAIManager___c__DisplayClass12_0___ctor(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIManager___c__DisplayClass12_0___Execute_b__0(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        WarBoardAI_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return WarBoardAI__get_ForceId(x, 0) == this->fields.forceId && WarBoardAI__get_GroupId(x, 0) == this->fields.groupId;
}


bool WarBoardAIManager___c__DisplayClass12_0___Execute_b__2(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields._forceId_k__BackingField == this->fields.forceId
      && x->fields._groupId_k__BackingField == this->fields.groupId;
}


void WarBoardAIManager___c__DisplayClass28_0___ctor(
        WarBoardAIManager___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIManager___c__DisplayClass28_0___AddReinforcementsAI_b__0(
        WarBoardAIManager___c__DisplayClass28_0_o *this,
        WarBoardAI_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return WarBoardAI__get_ForceId(x, 0) == this->fields.forceId && WarBoardAI__get_GroupId(x, 0) == this->fields.groupId;
}


void WarBoardAIManager___c__DisplayClass29_0___ctor(
        WarBoardAIManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIManager___c__DisplayClass29_0___UpdateAiId_b__0(
        WarBoardAIManager___c__DisplayClass29_0_o *this,
        WarBoardAI_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return WarBoardAI__get_ForceId(x, 0) == this->fields.forceId && WarBoardAI__get_GroupId(x, 0) == this->fields.groupId;
}


void WarBoardAIManager___c__DisplayClass9_0___ctor(
        WarBoardAIManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIManager___c__DisplayClass9_0___StartAIPhase_b__0(
        WarBoardAIManager___c__DisplayClass9_0_o *this,
        WarBoardAI_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return WarBoardAI__get_ForceId(x, 0) == this->fields.forceId && WarBoardAI__get_GroupId(x, 0) == this->fields.groupId;
}