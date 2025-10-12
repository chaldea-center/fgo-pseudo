void WarBoardAIManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x19
  struct WarBoardAIManager_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_Dictionary_int__object__o *v8; // x19
  struct WarBoardAIManager_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_Dictionary_int__object__o *v12; // x19
  struct WarBoardAIManager_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C3535F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo);
    sub_1C32C20(&WarBoardAIManager_TypeInfo);
    byte_4C3535F = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v1,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)WarBoardAIManager_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v4,
    (const MethodInfo_3490FC4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
  static_fields = WarBoardAIManager_TypeInfo->static_fields;
  static_fields->dicUniqueIndexPiece = (struct System_Collections_Generic_Dictionary_uint__WarBoardPieceData__o *)v4;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->dicUniqueIndexPiece, (int32_t)v4, v6, v7);
  v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v8,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
  v9 = WarBoardAIManager_TypeInfo->static_fields;
  v9->dicIndexSquare = (struct System_Collections_Generic_Dictionary_int__WarBoardSquareData__o *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&v9->dicIndexSquare, (int32_t)v8, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  v13 = WarBoardAIManager_TypeInfo->static_fields;
  v13->dicIndexItem = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&v13->dicIndexItem, (int32_t)v12, v14, v15);
}


void WarBoardAIManager___ctor(WarBoardAIManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3535E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardAI___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardAI__TypeInfo);
    byte_4C3535E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardAI__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardAI___ctor__);
  this->fields.warBoardAIList = (struct System_Collections_Generic_List_WarBoardAI__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardAIManager__AIEnd(WarBoardAIManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  _QWORD *monitor; // x8
  __int64 v5; // x19
  int v6; // w8
  unsigned int v7; // w20

  if ( (byte_4C35350 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C35350 = 1;
  }
  this->fields.exec = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  monitor = Instance[27].monitor;
  if ( !monitor )
    goto LABEL_12;
  v5 = monitor[6];
  if ( !v5 )
    goto LABEL_12;
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v6 )
        sub_1C32E84(Instance);
      Instance = *(Il2CppObject **)(v5 + 8LL * (int)v7 + 32);
      if ( !Instance )
        break;
      WarBoardPieceData__ClearPrevAiRoute((WarBoardPieceData_o *)Instance, 0);
      v6 = *(_DWORD *)(v5 + 24);
      if ( (int)++v7 >= v6 )
        return;
    }
LABEL_12:
    sub_1C32E7C(Instance);
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
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v14; // x22
  Il2CppObject *v15; // x0

  if ( (byte_4C3535C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_1C32C20(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__);
    sub_1C32C20(&WarBoardAIManager___c__DisplayClass28_0_TypeInfo);
    byte_4C3535C = 1;
  }
  v11 = sub_1C32E6C(WarBoardAIManager___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1C32E7C(v12);
  *(_DWORD *)(v11 + 16) = forceId;
  *(_DWORD *)(v11 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v14 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v11,
    Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__,
    0);
  v15 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v15 )
    WarBoardAI__AddRoutePiecePersonalityDic((WarBoardAI_o *)v15, aiId, pieceIndex, 0);
}


void WarBoardAIManager__CreateAI(WarBoardAIManager_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  WarBoardAI_o *v5; // x19
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *warBoardAIList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppClass **v12; // x8

  if ( (byte_4C3534F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardAI__Add__);
    sub_1C32C20(&WarBoardAI_TypeInfo);
    byte_4C3534F = 1;
  }
  v5 = (WarBoardAI_o *)sub_1C32E6C(WarBoardAI_TypeInfo);
  WarBoardAI___ctor(v5, npc, 0);
  warBoardAIList = (System_Collections_Generic_List_object__o *)this->fields.warBoardAIList;
  if ( !warBoardAIList
    || (items = warBoardAIList->fields._items,
        v10 = Method_System_Collections_Generic_List_WarBoardAI__Add__,
        ++warBoardAIList->fields._version,
        !items) )
  {
    sub_1C32E7C(warBoardAIList);
  }
  size = warBoardAIList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      warBoardAIList,
      (Il2CppObject *)v5,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = &items->obj.klass + size;
    warBoardAIList->fields._size = size + 1;
    v12[4] = (Il2CppClass *)v5;
    sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 4), (int32_t)v5, v6, v7);
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
  const MethodInfo *v9; // x3

  if ( (byte_4C35354 & 1) == 0 )
  {
    sub_1C32C20(&WarBoardAIManager__Execute_d__12_TypeInfo);
    byte_4C35354 = 1;
  }
  v7 = sub_1C32E6C(WarBoardAIManager__Execute_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 32) = forceId;
  *(_DWORD *)(v7 + 36) = groupId;
  return (System_Collections_IEnumerator_o *)v7;
}


float WarBoardAIManager__GetBreakPoint(WarBoardPieceData_o *piece, const MethodInfo *method)
{
  if ( !piece )
    sub_1C32E7C(0);
  return (float)(piece->fields._breakPoint_k__BackingField + 1)
       / (float)(piece->fields._breakPointMax_k__BackingField + 1);
}


System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *WarBoardAIManager__GetEnemyPiece(
        const MethodInfo *method)
{
  WarBoardAIManager_c *v1; // x0

  if ( (byte_4C35356 & 1) == 0 )
  {
    sub_1C32C20(&WarBoardAIManager_TypeInfo);
    byte_4C35356 = 1;
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

  if ( (byte_4C35357 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__);
    sub_1C32C20(&WarBoardAIManager_TypeInfo);
    byte_4C35357 = 1;
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
    sub_1C32E7C(0);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicSquareIndexEnemyPiece,
         squareIndex,
         &value,
         (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__) )
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

  if ( (byte_4C3535A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__);
    sub_1C32C20(&WarBoardAIManager_TypeInfo);
    byte_4C3535A = 1;
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
    sub_1C32E7C(0);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicIndexItem,
         squareIndex,
         &value,
         (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__) )
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

  if ( (byte_4C35358 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__);
    sub_1C32C20(&WarBoardAIManager_TypeInfo);
    byte_4C35358 = 1;
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
    sub_1C32E7C(0);
  if ( System_Collections_Generic_Dictionary_uint__object___TryGetValue(
         dicUniqueIndexPiece,
         uniqueIndex,
         &value,
         (const MethodInfo_3493124 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__) )
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

  if ( (byte_4C35359 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__);
    sub_1C32C20(&WarBoardAIManager_TypeInfo);
    byte_4C35359 = 1;
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
    sub_1C32E7C(0);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicIndexSquare,
         squareIndex,
         &value,
         (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__) )
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
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4C3534E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardAI__Clear__);
    this = (WarBoardAIManager_o *)sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
    byte_4C3534E = 1;
  }
  memset(&v10, 0, sizeof(v10));
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
    sub_1C32E7C(this);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)npcList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    if ( !v8 )
      break;
    if ( !v10.fields._current )
      sub_1C32E7C(v8);
    if ( *(_DWORD *)((char *)&v10.fields._current->klass + (unsigned __int64)&dword_14)
      || *(_DWORD *)((char *)&v10.fields._current->klass + (unsigned __int64)&off_18) )
    {
      WarBoardAIManager__CreateAI(v4, (WarBoardStageNpcEntity_o *)v10.fields._current, v9);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
}


bool WarBoardAIManager__IsAllyPiece(WarBoardPieceData_o *one, WarBoardPieceData_o *two, const MethodInfo *method)
{
  if ( !one || !two )
    sub_1C32E7C(one);
  return one->fields._forceId_k__BackingField == two->fields._forceId_k__BackingField;
}


bool WarBoardAIManager__IsEnemyBlock(int32_t squareIndex, const MethodInfo *method)
{
  if ( (byte_4C3535B & 1) == 0 )
  {
    sub_1C32C20(&WarBoardAIManager_TypeInfo);
    byte_4C3535B = 1;
  }
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  return WarBoardAIManager__GetEnemyPieceSquareIndex(squareIndex, method) != 0;
}


bool WarBoardAIManager__IsEnemyPiece(WarBoardPieceData_o *one, WarBoardPieceData_o *two, const MethodInfo *method)
{
  if ( !one || !two )
    sub_1C32E7C(one);
  return one->fields._forceId_k__BackingField != two->fields._forceId_k__BackingField;
}


bool WarBoardAIManager__IsEqualPiece(WarBoardPieceData_o *one, WarBoardPieceData_o *two, const MethodInfo *method)
{
  if ( !one || !two )
    sub_1C32E7C(one);
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
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v10; // x22
  Il2CppObject *v11; // x0
  AStarSearch_c *v12; // x0
  const MethodInfo *v13; // x3

  if ( (byte_4C35352 & 1) == 0 )
  {
    sub_1C32C20(&AStarSearch_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_1C32C20(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__);
    sub_1C32C20(&WarBoardAIManager___c__DisplayClass9_0_TypeInfo);
    byte_4C35352 = 1;
  }
  v7 = sub_1C32E6C(WarBoardAIManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  *(_DWORD *)(v7 + 16) = forceId;
  *(_DWORD *)(v7 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__,
    0);
  v11 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v11 )
  {
    this->fields.exec = 1;
    LOBYTE(v11[2].klass) = 0;
    v12 = AStarSearch_TypeInfo;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    AStarSearch__DetourCacheClear((const MethodInfo *)v12);
    WarBoardAIManager__StartThink(this, *(_DWORD *)(v7 + 16), *(_DWORD *)(v7 + 20), v13);
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
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v10; // x22
  Il2CppObject *v11; // x0
  WarBoardAIManager_c *v12; // x0
  __int64 v13; // x8
  __int64 v14; // x24
  int v15; // w8
  unsigned int v16; // w25
  __int64 v17; // x21
  WarBoardAIManager_c *v18; // x0
  WarBoardAIManager_c *v19; // x0
  WarBoardAIManager_c *v20; // x0
  __int64 v21; // x8
  __int64 v22; // x24
  int v23; // w8
  unsigned int v24; // w25
  __int64 v25; // x21
  WarBoardAIManager_c *v26; // x0
  const MethodInfo *v27; // x3
  __int64 v28; // x8
  __int64 v29; // x23
  int v30; // w8
  unsigned int v31; // w24
  __int64 v32; // x21
  struct System_Collections_IEnumerator_o *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3

  if ( (byte_4C35353 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__);
    sub_1C32C20(&Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
    sub_1C32C20(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__);
    sub_1C32C20(&WarBoardAIManager___c__DisplayClass11_0_TypeInfo);
    sub_1C32C20(&WarBoardAIManager_TypeInfo);
    byte_4C35353 = 1;
  }
  v7 = sub_1C32E6C(WarBoardAIManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_57;
  *(_DWORD *)(v7 + 16) = forceId;
  *(_DWORD *)(v7 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__,
    0);
  v11 = System_Linq_Enumerable__SingleOrDefault_object__51487704(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_311A3D8 *)Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
  if ( !v11 )
    return;
  this->fields.isPause = 0;
  WarBoardAI__Clear((WarBoardAI_o *)v11, 0);
  v12 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v12 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v12->static_fields->dicUniqueIndexPiece;
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    dicUniqueIndexPiece,
    (const MethodInfo_3491B20 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
    (const MethodInfo_33EFEA4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  v13 = *(_QWORD *)&dicUniqueIndexPiece[5].fields._freeCount;
  if ( !v13 )
    goto LABEL_57;
  v14 = *(_QWORD *)(v13 + 48);
  if ( !v14 )
    goto LABEL_57;
  v15 = *(_DWORD *)(v14 + 24);
  if ( v15 >= 1 )
  {
    v16 = 0;
    while ( v16 < v15 )
    {
      v17 = *(_QWORD *)(v14 + 8LL * (int)v16 + 32);
      if ( !v17 )
        goto LABEL_57;
      if ( !*(_BYTE *)(v17 + 60) )
      {
        v18 = WarBoardAIManager_TypeInfo;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          v18 = WarBoardAIManager_TypeInfo;
        }
        dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v18->static_fields->dicUniqueIndexPiece;
        if ( !dicUniqueIndexPiece )
          goto LABEL_57;
        System_Collections_Generic_Dictionary_uint__object___Add(
          dicUniqueIndexPiece,
          *(_DWORD *)(v17 + 44),
          (Il2CppObject *)v17,
          (const MethodInfo_3491998 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
        if ( *(_DWORD *)(v17 + 20) != *(_DWORD *)(v7 + 16) )
        {
          v19 = WarBoardAIManager_TypeInfo;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            v19 = WarBoardAIManager_TypeInfo;
          }
          dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v19->static_fields->dicSquareIndexEnemyPiece;
          if ( !dicUniqueIndexPiece )
            goto LABEL_57;
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
            *(_DWORD *)(v17 + 64),
            (Il2CppObject *)v17,
            (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
        }
      }
      v15 = *(_DWORD *)(v14 + 24);
      if ( (int)++v16 >= v15 )
        goto LABEL_26;
    }
LABEL_58:
    sub_1C32E84(dicUniqueIndexPiece);
  }
LABEL_26:
  v20 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v20 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v20->static_fields->dicIndexSquare;
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
    (const MethodInfo_33EFEA4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  v21 = *(_QWORD *)&dicUniqueIndexPiece[5].fields._freeCount;
  if ( !v21 )
    goto LABEL_57;
  v22 = *(_QWORD *)(v21 + 56);
  if ( !v22 )
    goto LABEL_57;
  v23 = *(_DWORD *)(v22 + 24);
  if ( v23 >= 1 )
  {
    v24 = 0;
    while ( v24 < v23 )
    {
      dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo;
      v25 = *(_QWORD *)(v22 + 8LL * (int)v24 + 32);
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v25 )
        goto LABEL_57;
      dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicUniqueIndexPiece[2].fields._entries->bounds;
      if ( !dicUniqueIndexPiece )
        goto LABEL_57;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
        *(_DWORD *)(v25 + 16),
        (Il2CppObject *)v25,
        (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
      v23 = *(_DWORD *)(v22 + 24);
      if ( (int)++v24 >= v23 )
        goto LABEL_40;
    }
    goto LABEL_58;
  }
LABEL_40:
  v26 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v26 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v26->static_fields->dicIndexItem;
  if ( !dicUniqueIndexPiece
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
          (const MethodInfo_33EFEA4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__),
        (dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (v28 = *(_QWORD *)&dicUniqueIndexPiece[5].fields._freeCount) == 0
    || (v29 = *(_QWORD *)(v28 + 72)) == 0 )
  {
LABEL_57:
    sub_1C32E7C(dicUniqueIndexPiece);
  }
  v30 = *(_DWORD *)(v29 + 24);
  if ( v30 >= 1 )
  {
    v31 = 0;
    while ( v31 < v30 )
    {
      dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo;
      v32 = *(_QWORD *)(v29 + 8LL * (int)v31 + 32);
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v32 )
        goto LABEL_57;
      dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicUniqueIndexPiece[2].fields._entries->max_length;
      if ( !dicUniqueIndexPiece )
        goto LABEL_57;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
        *(_DWORD *)(v32 + 16),
        (Il2CppObject *)v32,
        (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
      v30 = *(_DWORD *)(v29 + 24);
      if ( (int)++v31 >= v30 )
        goto LABEL_54;
    }
    goto LABEL_58;
  }
LABEL_54:
  if ( !this->fields.executeTask )
  {
    v33 = WarBoardAIManager__Execute(this, *(_DWORD *)(v7 + 16), *(_DWORD *)(v7 + 20), v27);
    this->fields.executeTask = v33;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.executeTask, (int32_t)v33, v34, v35);
  }
}


void WarBoardAIManager__Update(WarBoardAIManager_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_executeTask; // x19
  System_Collections_IEnumerator_o *v4; // x20
  struct System_Collections_IEnumerator_o *executeTask; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C35355 & 1) == 0 )
  {
    sub_1C32C20(&WarBoardManager_TypeInfo);
    byte_4C35355 = 1;
  }
  executeTask = this->fields.executeTask;
  p_executeTask = (CGThumbnailListItem_o *)&this->fields.executeTask;
  v4 = executeTask;
  if ( executeTask )
  {
    if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    if ( !WarBoardManager__IEnumeratorExecute(v4, 0) )
    {
      p_executeTask->klass = 0;
      sub_1C32BC4(p_executeTask, 0, v6, v7);
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
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v14; // x22
  Il2CppObject *v15; // x0

  if ( (byte_4C3535D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_1C32C20(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__);
    sub_1C32C20(&WarBoardAIManager___c__DisplayClass29_0_TypeInfo);
    byte_4C3535D = 1;
  }
  v11 = sub_1C32E6C(WarBoardAIManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1C32E7C(v12);
  *(_DWORD *)(v11 + 16) = forceId;
  *(_DWORD *)(v11 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v14 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v11,
    Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__,
    0);
  v15 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v15 )
    WarBoardAI__UpdateRoutePiecePersonalityDic((WarBoardAI_o *)v15, aiId, pieceIndex, 0);
}


System_Collections_IEnumerator_o *WarBoardAIManager__Wait(WarBoardAIManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C35351 & 1) == 0 )
  {
    sub_1C32C20(&WarBoardAIManager__Wait_d__8_TypeInfo);
    byte_4C35351 = 1;
  }
  v3 = sub_1C32E6C(WarBoardAIManager__Wait_d__8_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  WarBoardAIManager__Execute_d__12_o *v4; // x19
  WarBoardAIManager_o *_4__this; // x20
  Il2CppObject *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *_8__1; // x21
  System_Collections_Generic_IEnumerable_TSource__o *warBoardAIList; // x22
  System_Func_object__bool__o *v11; // x23
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct WarBoardAIManager___c__DisplayClass12_0_o *v15; // x8
  const MethodInfo *v16; // x1
  struct WarBoardAIManager___c__DisplayClass12_0_o *v17; // x22
  System_Func_object__bool__o *_9__2; // x24
  WarBoardAIManager__Execute_d__12_o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Object_array *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  WarBoardAIManager___c_c *v26; // x0
  System_Collections_Generic_IEnumerable_T__o *actPieces_5__4; // x21
  System_Action_object__o *_9__12_3; // x22
  Il2CppObject *v29; // x23
  struct WarBoardAIManager___c_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_IEnumerator_o *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  WarBoardAIManager___c_c *v36; // x0
  System_Func_bool__o *_9__12_1; // x20
  Il2CppObject *v38; // x21
  struct WarBoardAIManager___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  UnityEngine_WaitWhile_o *v42; // x21
  CGThumbnailListItem_o *v43; // x19
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  bool result; // w0
  struct System_Collections_IEnumerator_o *v47; // x21
  System_Collections_IEnumerator_c *v48; // x8
  __int64 v49; // x9
  System_Collections_IEnumerator_c **v50; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  struct System_Collections_IEnumerator_o *v53; // x22
  System_Collections_IEnumerator_c *v54; // x8
  WarBoardAIManager__Execute_d__12_o *v55; // x21
  __int64 v56; // x9
  System_Collections_IEnumerator_c **v57; // x10
  __int64 v58; // x0
  WarBoardAIManager__Execute_d__12_o *v59; // x22
  int32_t v60; // w0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_Collections_IEnumerator_o **p_enumeratorChild_5__7; // x21
  System_Collections_IEnumerator_o *v64; // x22
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  float realtimeSinceStartup; // s0
  Il2CppObject **p__2__current; // x19
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  int v71; // w8
  struct System_Collections_IEnumerator_o *exe_5__5; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v74; // x9
  int *p_offset; // x10
  __int64 v76; // x0
  WarBoardAIManager___c_c *v77; // x0
  System_Collections_Generic_IEnumerable_T__o *v78; // x21
  System_Action_object__o *_9__12_4; // x22
  Il2CppObject *v80; // x23
  struct WarBoardAIManager___c_StaticFields *v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  const MethodInfo *v84; // x1
  struct WarBoardAI_o *ai_5__2; // x8
  const MethodInfo *v86; // x1
  const MethodInfo *v87; // x1
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  struct WarBoardAI_o *v90; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v91; // x8
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  struct System_Collections_IEnumerator_o *v94; // x21
  System_Collections_IEnumerator_c *v95; // x8
  __int64 v96; // x9
  System_Collections_IEnumerator_c **v97; // x10
  __int64 v98; // x0
  float v99; // s0
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  System_Collections_IEnumerator_o *v102; // x0
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  const MethodInfo *v105; // x1
  WarBoardData_o *v106; // x0
  const MethodInfo *v107; // x1

  v4 = this;
  if ( (byte_4C35362 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_WarBoardPieceData__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_WarBoardPieceData___);
    sub_1C32C20(&bool_TypeInfo);
    sub_1C32C20(&DefenseAreaData_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardAIManager___c__Execute_b__12_1__);
    sub_1C32C20(&Method_WarBoardAIManager___c__Execute_b__12_3__);
    sub_1C32C20(&Method_WarBoardAIManager___c__Execute_b__12_4__);
    sub_1C32C20(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__);
    sub_1C32C20(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__);
    sub_1C32C20(&WarBoardAIManager___c__DisplayClass12_0_TypeInfo);
    sub_1C32C20(&WarBoardAIManager___c_TypeInfo);
    sub_1C32C20(&UnityEngine_WaitWhile_TypeInfo);
    this = (WarBoardAIManager__Execute_d__12_o *)sub_1C32C20(&WarBoardManager_TypeInfo);
    byte_4C35362 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1C32E6C(WarBoardAIManager___c__DisplayClass12_0_TypeInfo);
      System_Object___ctor(v6, 0);
      v4->fields.__8__1 = (struct WarBoardAIManager___c__DisplayClass12_0_o *)v6;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v6, v7, v8);
      _8__1 = (Il2CppObject *)v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_123;
      _8__1[1].klass = *(Il2CppClass **)&v4->fields.forceId;
      if ( !_4__this )
        goto LABEL_123;
      warBoardAIList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.warBoardAIList;
      v11 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardAI__bool__TypeInfo);
      System_Func_object__bool____ctor(v11, _8__1, Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__, 0);
      v12 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
              warBoardAIList,
              (System_Func_TSource__bool__o *)v11,
              (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
      v4->fields._ai_5__2 = (struct WarBoardAI_o *)v12;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._ai_5__2, (int32_t)v12, v13, v14);
      if ( !v4->fields._ai_5__2 )
        return 0;
      goto LABEL_102;
    case 1:
      v15 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v15 || !_4__this )
        goto LABEL_123;
      WarBoardAIManager__StartThink(_4__this, v15->fields.forceId, v15->fields.groupId, v3);
      goto LABEL_19;
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_59;
    case 3:
      v4->fields.__1__state = -1;
      goto LABEL_68;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_123;
      if ( !_4__this->fields.exec )
        return 0;
      break;
    case 5:
      v4->fields.__1__state = -1;
      goto LABEL_85;
    default:
      return 0;
  }
  while ( 2 )
  {
    ai_5__2 = v4->fields._ai_5__2;
    if ( !ai_5__2 )
      goto LABEL_123;
    if ( !ai_5__2->fields.isEndPhase )
    {
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
        if ( this )
        {
          if ( WarBoardData__IsWin((WarBoardData_o *)this, v86) )
            return 0;
          this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !this )
            goto LABEL_123;
          this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
          if ( !this )
            goto LABEL_123;
          this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__IsLose((WarBoardData_o *)this, v87);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 0;
          v90 = v4->fields._ai_5__2;
          if ( v90 )
          {
            if ( !v90->fields.isEndRoute )
            {
              v4->fields.__2__current = 0;
              p__2__current = &v4->fields.__2__current;
              sub_1C32BC4((CGThumbnailListItem_o *)p__2__current, 0, v88, v89);
              v71 = 5;
              goto LABEL_65;
            }
            v91 = v4->fields.__8__1;
            if ( v91 )
            {
              WarBoardAIManager__StartThink(_4__this, v91->fields.forceId, v91->fields.groupId, v89);
              goto LABEL_101;
            }
          }
        }
      }
LABEL_123:
      sub_1C32E7C(this);
    }
    do
    {
LABEL_101:
      v4->fields._actPieces_5__4 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._actPieces_5__4, 0, v2, v3);
      v4->fields._exe_5__5 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._exe_5__5, 0, v92, v93);
LABEL_102:
      if ( !_4__this->fields.exec )
        return 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_123;
      if ( WarBoardManager__HasSchedule((WarBoardManager_o *)this, 0) )
      {
        v36 = WarBoardAIManager___c_TypeInfo;
        if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
          v36 = WarBoardAIManager___c_TypeInfo;
        }
        _9__12_1 = v36->static_fields->__9__12_1;
        if ( !_9__12_1 )
        {
          if ( !v36->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v36);
            v36 = WarBoardAIManager___c_TypeInfo;
          }
          v38 = (Il2CppObject *)v36->static_fields->__9;
          _9__12_1 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(_9__12_1, v38, Method_WarBoardAIManager___c__Execute_b__12_1__, 0);
          static_fields = WarBoardAIManager___c_TypeInfo->static_fields;
          static_fields->__9__12_1 = _9__12_1;
          sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__12_1, (int32_t)_9__12_1, v40, v41);
        }
        v42 = (UnityEngine_WaitWhile_o *)sub_1C32E6C(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v42, _9__12_1, 0);
        v4->fields.__2__current = (Il2CppObject *)v42;
        v43 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C32BC4(v43, (int32_t)v42, v44, v45);
        result = 1;
        LODWORD(v43[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
LABEL_19:
      v4->fields._isNextPhase_5__3 = 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetConnect((CommonUI_o *)this, 1, 0);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetLoadMode((CommonUI_o *)this, 10, 0);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_123;
      this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
      if ( !this )
        goto LABEL_123;
      this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__GetAlivePieces((WarBoardData_o *)this, v16);
      v17 = v4->fields.__8__1;
      if ( !v17 )
        goto LABEL_123;
      _9__2 = (System_Func_object__bool__o *)v17->fields.__9__2;
      v19 = this;
      if ( !_9__2 )
      {
        _9__2 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__2,
          (Il2CppObject *)v17,
          Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__,
          0);
        v17->fields.__9__2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__2;
        sub_1C32BC4((CGThumbnailListItem_o *)&v17->fields.__9__2, (int32_t)_9__2, v20, v21);
      }
      v22 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v19,
              (System_Func_TSource__bool__o *)_9__2,
              (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      v23 = System_Linq_Enumerable__ToArray_object_(
              v22,
              (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      v4->fields._actPieces_5__4 = (struct WarBoardPieceData_array *)v23;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._actPieces_5__4, (int32_t)v23, v24, v25);
      v26 = WarBoardAIManager___c_TypeInfo;
      actPieces_5__4 = (System_Collections_Generic_IEnumerable_T__o *)v4->fields._actPieces_5__4;
      if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v26 = WarBoardAIManager___c_TypeInfo;
      }
      _9__12_3 = (System_Action_object__o *)v26->static_fields->__9__12_3;
      if ( !_9__12_3 )
      {
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v26 = WarBoardAIManager___c_TypeInfo;
        }
        v29 = (Il2CppObject *)v26->static_fields->__9;
        _9__12_3 = (System_Action_object__o *)sub_1C32E6C(System_Action_WarBoardPieceData__TypeInfo);
        System_Action_object____ctor(_9__12_3, v29, Method_WarBoardAIManager___c__Execute_b__12_3__, 0);
        v30 = WarBoardAIManager___c_TypeInfo->static_fields;
        v30->__9__12_3 = (struct System_Action_WarBoardPieceData__o *)_9__12_3;
        sub_1C32BC4((CGThumbnailListItem_o *)&v30->__9__12_3, (int32_t)_9__12_3, v31, v32);
      }
      BasicHelper__ForEach_object_(
        actPieces_5__4,
        (System_Action_T__o *)_9__12_3,
        (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      if ( !DefenseAreaData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DefenseAreaData_TypeInfo);
      DefenseAreaData__ClearCache(0);
      this = (WarBoardAIManager__Execute_d__12_o *)v4->fields._ai_5__2;
      if ( !this )
        goto LABEL_123;
      v33 = WarBoardAI__Think((WarBoardAI_o *)this, 0);
      v4->fields._exe_5__5 = v33;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._exe_5__5, (int32_t)v33, v34, v35);
      v4->fields._prevTime_5__6 = UnityEngine_Time__get_realtimeSinceStartup(0);
      while ( 1 )
      {
LABEL_68:
        exe_5__5 = v4->fields._exe_5__5;
        if ( !exe_5__5 )
          goto LABEL_123;
        klass = exe_5__5->klass;
        v74 = *(unsigned __int16 *)&exe_5__5->klass->_2.rank;
        if ( *(_WORD *)&exe_5__5->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v74;
            p_offset += 4;
            if ( !v74 )
              goto LABEL_73;
          }
          v76 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_73:
          v76 = sub_1C83438(v4->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 0);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v76)(
                                                       exe_5__5,
                                                       *(_QWORD *)(v76 + 8));
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_76;
        v47 = v4->fields._exe_5__5;
        if ( !v47 )
          goto LABEL_123;
        v48 = v47->klass;
        v49 = *(unsigned __int16 *)&v47->klass->_2.rank;
        if ( *(_WORD *)&v47->klass->_2.rank )
        {
          v50 = (System_Collections_IEnumerator_c **)&v48->_1.interfaceOffsets->offset;
          while ( *(v50 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v49;
            v50 += 2;
            if ( !v49 )
              goto LABEL_48;
          }
          v51 = (__int64)&v48->vtable[*(_DWORD *)v50 + 1];
        }
        else
        {
LABEL_48:
          v51 = sub_1C83438(v4->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v52 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v51)(
                v47,
                *(_QWORD *)(v51 + 8));
        this = (WarBoardAIManager__Execute_d__12_o *)sub_1C32D5C(v52, System_Collections_IEnumerator_TypeInfo);
        v53 = v4->fields._exe_5__5;
        if ( !v53 )
          goto LABEL_123;
        v54 = v53->klass;
        v55 = this;
        v56 = *(unsigned __int16 *)&v53->klass->_2.rank;
        if ( *(_WORD *)&v53->klass->_2.rank )
        {
          v57 = (System_Collections_IEnumerator_c **)&v54->_1.interfaceOffsets->offset;
          while ( *(v57 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v56;
            v57 += 2;
            if ( !v56 )
              goto LABEL_55;
          }
          v58 = (__int64)&v54->vtable[*(_DWORD *)v57 + 1];
        }
        else
        {
LABEL_55:
          v58 = sub_1C83438(v4->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v58)(
                                                       v53,
                                                       *(_QWORD *)(v58 + 8));
        v59 = this;
        if ( v55 )
        {
          v4->fields._enumeratorChild_5__7 = (struct System_Collections_IEnumerator_o *)sub_1C32D5C(
                                                                                          this,
                                                                                          System_Collections_IEnumerator_TypeInfo);
          v60 = sub_1C32D5C(v59, System_Collections_IEnumerator_TypeInfo);
          sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._enumeratorChild_5__7, v60, v61, v62);
LABEL_59:
          p_enumeratorChild_5__7 = &v4->fields._enumeratorChild_5__7;
          while ( 1 )
          {
            v64 = *p_enumeratorChild_5__7;
            if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
            if ( !WarBoardManager__IEnumeratorExecute(v64, 0) )
              break;
            if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - v4->fields._prevTime_5__6) >= 0.1 )
            {
              realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
              v4->fields.__2__current = 0;
              p__2__current = &v4->fields.__2__current;
              *((float *)p__2__current + 16) = realtimeSinceStartup;
              sub_1C32BC4((CGThumbnailListItem_o *)p__2__current, 0, v69, v70);
              v71 = 2;
              goto LABEL_65;
            }
          }
          *p_enumeratorChild_5__7 = 0;
          sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._enumeratorChild_5__7, 0, v65, v66);
          goto LABEL_67;
        }
        if ( this && (System_Boolean_c *)this->klass == bool_TypeInfo )
          break;
LABEL_67:
        if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - v4->fields._prevTime_5__6) >= 0.1 )
        {
          v99 = UnityEngine_Time__get_realtimeSinceStartup(0);
          v4->fields.__2__current = 0;
          p__2__current = &v4->fields.__2__current;
          *((float *)p__2__current + 16) = v99;
          sub_1C32BC4((CGThumbnailListItem_o *)p__2__current, 0, v100, v101);
          v71 = 3;
          goto LABEL_65;
        }
      }
      v94 = v4->fields._exe_5__5;
      if ( !v94 )
        goto LABEL_123;
      v95 = v94->klass;
      v96 = *(unsigned __int16 *)&v94->klass->_2.rank;
      if ( *(_WORD *)&v94->klass->_2.rank )
      {
        v97 = (System_Collections_IEnumerator_c **)&v95->_1.interfaceOffsets->offset;
        while ( *(v97 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v96;
          v97 += 2;
          if ( !v96 )
            goto LABEL_111;
        }
        v98 = (__int64)&v95->vtable[*(_DWORD *)v97 + 1];
      }
      else
      {
LABEL_111:
        v98 = sub_1C83438(v4->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1);
      }
      this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v98)(
                                                     v94,
                                                     *(_QWORD *)(v98 + 8));
      if ( !this )
        goto LABEL_123;
      if ( this->klass->_1.element_class != bool_TypeInfo->_1.element_class )
      {
        sub_1C3313C(this);
        return (unsigned __int8)WarBoardData__GetAlivePieces(v106, v107);
      }
      v4->fields._isNextPhase_5__3 = *(_BYTE *)j_il2cpp_object_unbox_0();
LABEL_76:
      v77 = WarBoardAIManager___c_TypeInfo;
      v78 = (System_Collections_Generic_IEnumerable_T__o *)v4->fields._actPieces_5__4;
      if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v77 = WarBoardAIManager___c_TypeInfo;
      }
      _9__12_4 = (System_Action_object__o *)v77->static_fields->__9__12_4;
      if ( !_9__12_4 )
      {
        if ( !v77->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v77);
          v77 = WarBoardAIManager___c_TypeInfo;
        }
        v80 = (Il2CppObject *)v77->static_fields->__9;
        _9__12_4 = (System_Action_object__o *)sub_1C32E6C(System_Action_WarBoardPieceData__TypeInfo);
        System_Action_object____ctor(_9__12_4, v80, Method_WarBoardAIManager___c__Execute_b__12_4__, 0);
        v81 = WarBoardAIManager___c_TypeInfo->static_fields;
        v81->__9__12_4 = (struct System_Action_WarBoardPieceData__o *)_9__12_4;
        sub_1C32BC4((CGThumbnailListItem_o *)&v81->__9__12_4, (int32_t)_9__12_4, v82, v83);
      }
      BasicHelper__ForEach_object_(
        v78,
        (System_Action_T__o *)_9__12_4,
        (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
      if ( v4->fields._isNextPhase_5__3 )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( this )
        {
          WarBoardManager__NextTurn((WarBoardManager_o *)this, 0);
          if ( _4__this )
          {
            WarBoardAIManager__AIEnd(_4__this, v105);
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
    this = (WarBoardAIManager__Execute_d__12_o *)v4->fields._ai_5__2;
    if ( !this )
      goto LABEL_123;
    this = (WarBoardAIManager__Execute_d__12_o *)WarBoardAI__Execute((WarBoardAI_o *)this, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      continue;
    break;
  }
  v102 = WarBoardAIManager__Wait(_4__this, v84);
  v4->fields.__2__current = (Il2CppObject *)v102;
  p__2__current = &v4->fields.__2__current;
  sub_1C32BC4((CGThumbnailListItem_o *)p__2__current, (int32_t)v102, v103, v104);
  v71 = 4;
LABEL_65:
  *((_DWORD *)p__2__current - 2) = v71;
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_WarBoardAIManager__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w8

  if ( (byte_4C35363 & 1) == 0 )
  {
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&UnityEngine_WaitWhile_TypeInfo);
    sub_1C32C20(&Method_WarBoardAIManager__Wait_b__8_0__);
    byte_4C35363 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v10 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v6 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v6, _4__this, Method_WarBoardAIManager__Wait_b__8_0__, 0);
    v7 = (UnityEngine_WaitWhile_o *)sub_1C32E6C(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v7, v6, 0);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9);
    v10 = 1;
    result = 1;
  }
  this->fields.__1__state = v10;
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_WarBoardAIManager__Wait_d__8_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C35360 & 1) == 0 )
  {
    sub_1C32C20(&WarBoardAIManager___c_TypeInfo);
    byte_4C35360 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(WarBoardAIManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAIManager___c_TypeInfo->static_fields->__9 = (struct WarBoardAIManager___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)WarBoardAIManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void WarBoardAIManager___c___ctor(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIManager___c___Execute_b__12_1(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C35361 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C35361 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  return WarBoardManager__HasSchedule((WarBoardManager_o *)Instance, 0);
}


void WarBoardAIManager___c___Execute_b__12_3(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  WarBoardPieceData__ActivateCacheMode(x, 1, 0);
}


void WarBoardAIManager___c___Execute_b__12_4(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return WarBoardAI__get_ForceId(x, 0) == this->fields.forceId && WarBoardAI__get_GroupId(x, 0) == this->fields.groupId;
}


bool WarBoardAIManager___c__DisplayClass12_0___Execute_b__2(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return WarBoardAI__get_ForceId(x, 0) == this->fields.forceId && WarBoardAI__get_GroupId(x, 0) == this->fields.groupId;
}