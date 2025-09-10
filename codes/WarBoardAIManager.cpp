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

  if ( (byte_4C24C8B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo);
    sub_1C2D490(&WarBoardAIManager_TypeInfo);
    byte_4C24C8B = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v1,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)WarBoardAIManager_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v4,
    (const MethodInfo_3482524 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
  static_fields = WarBoardAIManager_TypeInfo->static_fields;
  static_fields->dicUniqueIndexPiece = (struct System_Collections_Generic_Dictionary_uint__WarBoardPieceData__o *)v4;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->dicUniqueIndexPiece, (int32_t)v4, v6, v7);
  v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v8,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
  v9 = WarBoardAIManager_TypeInfo->static_fields;
  v9->dicIndexSquare = (struct System_Collections_Generic_Dictionary_int__WarBoardSquareData__o *)v8;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->dicIndexSquare, (int32_t)v8, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  v13 = WarBoardAIManager_TypeInfo->static_fields;
  v13->dicIndexItem = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)&v13->dicIndexItem, (int32_t)v12, v14, v15);
}


void WarBoardAIManager___ctor(WarBoardAIManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C24C8A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardAI___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardAI__TypeInfo);
    byte_4C24C8A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardAI__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardAI___ctor__);
  this->fields.warBoardAIList = (struct System_Collections_Generic_List_WarBoardAI__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardAIManager__AIEnd(WarBoardAIManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *monitor; // x8
  __int64 v7; // x19
  int v8; // w8
  unsigned int v9; // w20

  if ( (byte_4C24C7C & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C24C7C = 1;
  }
  this->fields.exec = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  monitor = Instance[27].monitor;
  if ( !monitor )
    goto LABEL_12;
  v7 = monitor[6];
  if ( !v7 )
    goto LABEL_12;
  v8 = *(_DWORD *)(v7 + 24);
  if ( v8 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v8 )
        sub_1C2D6F4(Instance, v4, v5);
      Instance = *(Il2CppObject **)(v7 + 8LL * (int)v9 + 32);
      if ( !Instance )
        break;
      WarBoardPieceData__ClearPrevAiRoute((WarBoardPieceData_o *)Instance, 0);
      v8 = *(_DWORD *)(v7 + 24);
      if ( (int)++v9 >= v8 )
        return;
    }
LABEL_12:
    sub_1C2D6EC(Instance, v4);
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

  if ( (byte_4C24C88 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_1C2D490(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1C2D490(&Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__);
    sub_1C2D490(&WarBoardAIManager___c__DisplayClass28_0_TypeInfo);
    byte_4C24C88 = 1;
  }
  v11 = sub_1C2D6DC(WarBoardAIManager___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1C2D6EC(v12, v13);
  *(_DWORD *)(v11 + 16) = forceId;
  *(_DWORD *)(v11 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v15 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__,
    0);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v16 )
    WarBoardAI__AddRoutePiecePersonalityDic((WarBoardAI_o *)v16, aiId, pieceIndex, 0);
}


void WarBoardAIManager__CreateAI(WarBoardAIManager_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  WarBoardAI_o *v5; // x19
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *warBoardAIList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x8

  if ( (byte_4C24C7B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardAI__Add__);
    sub_1C2D490(&WarBoardAI_TypeInfo);
    byte_4C24C7B = 1;
  }
  v5 = (WarBoardAI_o *)sub_1C2D6DC(WarBoardAI_TypeInfo);
  WarBoardAI___ctor(v5, npc, 0);
  warBoardAIList = (System_Collections_Generic_List_object__o *)this->fields.warBoardAIList;
  if ( !warBoardAIList
    || (items = warBoardAIList->fields._items,
        v11 = Method_System_Collections_Generic_List_WarBoardAI__Add__,
        ++warBoardAIList->fields._version,
        !items) )
  {
    sub_1C2D6EC(warBoardAIList, v6);
  }
  size = warBoardAIList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      warBoardAIList,
      (Il2CppObject *)v5,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    warBoardAIList->fields._size = size + 1;
    v13[4] = (Il2CppClass *)v5;
    sub_1C2D434((CGThumbnailListItem_o *)(v13 + 4), (int32_t)v5, v7, v8);
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

  if ( (byte_4C24C80 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardAIManager__Execute_d__12_TypeInfo);
    byte_4C24C80 = 1;
  }
  v7 = sub_1C2D6DC(WarBoardAIManager__Execute_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 32) = forceId;
  *(_DWORD *)(v7 + 36) = groupId;
  return (System_Collections_IEnumerator_o *)v7;
}


float WarBoardAIManager__GetBreakPoint(WarBoardPieceData_o *piece, const MethodInfo *method)
{
  if ( !piece )
    sub_1C2D6EC(0, method);
  return (float)(piece->fields._breakPoint_k__BackingField + 1)
       / (float)(piece->fields._breakPointMax_k__BackingField + 1);
}


System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *WarBoardAIManager__GetEnemyPiece(
        const MethodInfo *method)
{
  WarBoardAIManager_c *v1; // x0

  if ( (byte_4C24C82 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardAIManager_TypeInfo);
    byte_4C24C82 = 1;
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

  if ( (byte_4C24C83 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__);
    sub_1C2D490(&WarBoardAIManager_TypeInfo);
    byte_4C24C83 = 1;
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
    sub_1C2D6EC(0, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicSquareIndexEnemyPiece,
         squareIndex,
         &value,
         (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__) )
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

  if ( (byte_4C24C86 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__);
    sub_1C2D490(&WarBoardAIManager_TypeInfo);
    byte_4C24C86 = 1;
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
    sub_1C2D6EC(0, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicIndexItem,
         squareIndex,
         &value,
         (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__) )
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

  if ( (byte_4C24C84 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__);
    sub_1C2D490(&WarBoardAIManager_TypeInfo);
    byte_4C24C84 = 1;
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
    sub_1C2D6EC(0, method);
  if ( System_Collections_Generic_Dictionary_uint__object___TryGetValue(
         dicUniqueIndexPiece,
         uniqueIndex,
         &value,
         (const MethodInfo_3484684 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__) )
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

  if ( (byte_4C24C85 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__);
    sub_1C2D490(&WarBoardAIManager_TypeInfo);
    byte_4C24C85 = 1;
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
    sub_1C2D6EC(0, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicIndexSquare,
         squareIndex,
         &value,
         (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__) )
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
  if ( (byte_4C24C7A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardAI__Clear__);
    this = (WarBoardAIManager_o *)sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
    byte_4C24C7A = 1;
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
    sub_1C2D6EC(this, npcList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)npcList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1C2D6EC(v8, v9);
    if ( *(_DWORD *)((char *)&v11.fields._current->klass + (unsigned __int64)&dword_14)
      || *(_DWORD *)((char *)&v11.fields._current->klass + (unsigned __int64)&off_18) )
    {
      WarBoardAIManager__CreateAI(v4, (WarBoardStageNpcEntity_o *)v11.fields._current, v10);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
}


bool WarBoardAIManager__IsAllyPiece(WarBoardPieceData_o *one, WarBoardPieceData_o *two, const MethodInfo *method)
{
  if ( !one || !two )
    sub_1C2D6EC(one, two);
  return one->fields._forceId_k__BackingField == two->fields._forceId_k__BackingField;
}


bool WarBoardAIManager__IsEnemyBlock(int32_t squareIndex, const MethodInfo *method)
{
  if ( (byte_4C24C87 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardAIManager_TypeInfo);
    byte_4C24C87 = 1;
  }
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  return WarBoardAIManager__GetEnemyPieceSquareIndex(squareIndex, method) != 0;
}


bool WarBoardAIManager__IsEnemyPiece(WarBoardPieceData_o *one, WarBoardPieceData_o *two, const MethodInfo *method)
{
  if ( !one || !two )
    sub_1C2D6EC(one, two);
  return one->fields._forceId_k__BackingField != two->fields._forceId_k__BackingField;
}


bool WarBoardAIManager__IsEqualPiece(WarBoardPieceData_o *one, WarBoardPieceData_o *two, const MethodInfo *method)
{
  if ( !one || !two )
    sub_1C2D6EC(one, two);
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

  if ( (byte_4C24C7E & 1) == 0 )
  {
    sub_1C2D490(&AStarSearch_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_1C2D490(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1C2D490(&Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__);
    sub_1C2D490(&WarBoardAIManager___c__DisplayClass9_0_TypeInfo);
    byte_4C24C7E = 1;
  }
  v7 = sub_1C2D6DC(WarBoardAIManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_DWORD *)(v7 + 16) = forceId;
  *(_DWORD *)(v7 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v11 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__,
    0);
  v12 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
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
  __int64 v14; // x2
  __int64 v15; // x8
  __int64 v16; // x24
  int v17; // w8
  unsigned int v18; // w25
  __int64 v19; // x21
  WarBoardAIManager_c *v20; // x0
  WarBoardAIManager_c *v21; // x0
  WarBoardAIManager_c *v22; // x0
  __int64 v23; // x8
  __int64 v24; // x24
  int v25; // w8
  unsigned int v26; // w25
  __int64 v27; // x21
  WarBoardAIManager_c *v28; // x0
  const MethodInfo *v29; // x3
  __int64 v30; // x8
  __int64 v31; // x23
  int v32; // w8
  unsigned int v33; // w24
  __int64 v34; // x21
  struct System_Collections_IEnumerator_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3

  if ( (byte_4C24C7F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__);
    sub_1C2D490(&Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
    sub_1C2D490(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__);
    sub_1C2D490(&WarBoardAIManager___c__DisplayClass11_0_TypeInfo);
    sub_1C2D490(&WarBoardAIManager_TypeInfo);
    byte_4C24C7F = 1;
  }
  v7 = sub_1C2D6DC(WarBoardAIManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_57;
  *(_DWORD *)(v7 + 16) = forceId;
  *(_DWORD *)(v7 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v11 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__,
    0);
  v12 = System_Linq_Enumerable__SingleOrDefault_object__51427640(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_310B938 *)Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
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
    (const MethodInfo_3483080 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
    (const MethodInfo_33E1404 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  v15 = *(_QWORD *)&dicUniqueIndexPiece[5].fields._freeCount;
  if ( !v15 )
    goto LABEL_57;
  v16 = *(_QWORD *)(v15 + 48);
  if ( !v16 )
    goto LABEL_57;
  v17 = *(_DWORD *)(v16 + 24);
  if ( v17 >= 1 )
  {
    v18 = 0;
    while ( v18 < v17 )
    {
      v19 = *(_QWORD *)(v16 + 8LL * (int)v18 + 32);
      if ( !v19 )
        goto LABEL_57;
      if ( !*(_BYTE *)(v19 + 60) )
      {
        v20 = WarBoardAIManager_TypeInfo;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          v20 = WarBoardAIManager_TypeInfo;
        }
        dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v20->static_fields->dicUniqueIndexPiece;
        if ( !dicUniqueIndexPiece )
          goto LABEL_57;
        System_Collections_Generic_Dictionary_uint__object___Add(
          dicUniqueIndexPiece,
          *(_DWORD *)(v19 + 44),
          (Il2CppObject *)v19,
          (const MethodInfo_3482EF8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
        if ( *(_DWORD *)(v19 + 20) != *(_DWORD *)(v7 + 16) )
        {
          v21 = WarBoardAIManager_TypeInfo;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            v21 = WarBoardAIManager_TypeInfo;
          }
          dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v21->static_fields->dicSquareIndexEnemyPiece;
          if ( !dicUniqueIndexPiece )
            goto LABEL_57;
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
            *(_DWORD *)(v19 + 64),
            (Il2CppObject *)v19,
            (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
        }
      }
      v17 = *(_DWORD *)(v16 + 24);
      if ( (int)++v18 >= v17 )
        goto LABEL_26;
    }
LABEL_58:
    sub_1C2D6F4(dicUniqueIndexPiece, v9, v14);
  }
LABEL_26:
  v22 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v22 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v22->static_fields->dicIndexSquare;
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
    (const MethodInfo_33E1404 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  v23 = *(_QWORD *)&dicUniqueIndexPiece[5].fields._freeCount;
  if ( !v23 )
    goto LABEL_57;
  v24 = *(_QWORD *)(v23 + 56);
  if ( !v24 )
    goto LABEL_57;
  v25 = *(_DWORD *)(v24 + 24);
  if ( v25 >= 1 )
  {
    v26 = 0;
    while ( v26 < v25 )
    {
      dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo;
      v27 = *(_QWORD *)(v24 + 8LL * (int)v26 + 32);
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v27 )
        goto LABEL_57;
      dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicUniqueIndexPiece[2].fields._entries->bounds;
      if ( !dicUniqueIndexPiece )
        goto LABEL_57;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
        *(_DWORD *)(v27 + 16),
        (Il2CppObject *)v27,
        (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
      v25 = *(_DWORD *)(v24 + 24);
      if ( (int)++v26 >= v25 )
        goto LABEL_40;
    }
    goto LABEL_58;
  }
LABEL_40:
  v28 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v28 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v28->static_fields->dicIndexItem;
  if ( !dicUniqueIndexPiece
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
          (const MethodInfo_33E1404 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__),
        (dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (v30 = *(_QWORD *)&dicUniqueIndexPiece[5].fields._freeCount) == 0
    || (v31 = *(_QWORD *)(v30 + 72)) == 0 )
  {
LABEL_57:
    sub_1C2D6EC(dicUniqueIndexPiece, v9);
  }
  v32 = *(_DWORD *)(v31 + 24);
  if ( v32 >= 1 )
  {
    v33 = 0;
    while ( v33 < v32 )
    {
      dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo;
      v34 = *(_QWORD *)(v31 + 8LL * (int)v33 + 32);
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v34 )
        goto LABEL_57;
      dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicUniqueIndexPiece[2].fields._entries->max_length;
      if ( !dicUniqueIndexPiece )
        goto LABEL_57;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
        *(_DWORD *)(v34 + 16),
        (Il2CppObject *)v34,
        (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
      v32 = *(_DWORD *)(v31 + 24);
      if ( (int)++v33 >= v32 )
        goto LABEL_54;
    }
    goto LABEL_58;
  }
LABEL_54:
  if ( !this->fields.executeTask )
  {
    v35 = WarBoardAIManager__Execute(this, *(_DWORD *)(v7 + 16), *(_DWORD *)(v7 + 20), v29);
    this->fields.executeTask = v35;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.executeTask, (int32_t)v35, v36, v37);
  }
}


void WarBoardAIManager__Update(WarBoardAIManager_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_executeTask; // x19
  System_Collections_IEnumerator_o *v4; // x20
  struct System_Collections_IEnumerator_o *executeTask; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C24C81 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardManager_TypeInfo);
    byte_4C24C81 = 1;
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
      sub_1C2D434(p_executeTask, 0, v6, v7);
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

  if ( (byte_4C24C89 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_1C2D490(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1C2D490(&Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__);
    sub_1C2D490(&WarBoardAIManager___c__DisplayClass29_0_TypeInfo);
    byte_4C24C89 = 1;
  }
  v11 = sub_1C2D6DC(WarBoardAIManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1C2D6EC(v12, v13);
  *(_DWORD *)(v11 + 16) = forceId;
  *(_DWORD *)(v11 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v15 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__,
    0);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v16 )
    WarBoardAI__UpdateRoutePiecePersonalityDic((WarBoardAI_o *)v16, aiId, pieceIndex, 0);
}


System_Collections_IEnumerator_o *WarBoardAIManager__Wait(WarBoardAIManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C24C7D & 1) == 0 )
  {
    sub_1C2D490(&WarBoardAIManager__Wait_d__8_TypeInfo);
    byte_4C24C7D = 1;
  }
  v3 = sub_1C2D6DC(WarBoardAIManager__Wait_d__8_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  struct WarBoardAIManager___c__DisplayClass12_0_o *v16; // x22
  System_Func_object__bool__o *_9__2; // x24
  WarBoardAIManager__Execute_d__12_o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Object_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  WarBoardAIManager___c_c *v25; // x0
  System_Collections_Generic_IEnumerable_T__o *actPieces_5__4; // x21
  System_Action_object__o *_9__12_3; // x22
  Il2CppObject *v28; // x23
  struct WarBoardAIManager___c_StaticFields *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_IEnumerator_o *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  WarBoardAIManager___c_c *v35; // x0
  System_Func_bool__o *_9__12_1; // x20
  Il2CppObject *v37; // x21
  struct WarBoardAIManager___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  UnityEngine_WaitWhile_o *v41; // x21
  CGThumbnailListItem_o *v42; // x19
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  bool result; // w0
  struct System_Collections_IEnumerator_o *v46; // x21
  System_Collections_IEnumerator_c *v47; // x8
  __int64 v48; // x9
  System_Collections_IEnumerator_c **v49; // x10
  __int64 v50; // x0
  __int64 v51; // x0
  struct System_Collections_IEnumerator_o *v52; // x22
  System_Collections_IEnumerator_c *v53; // x8
  WarBoardAIManager__Execute_d__12_o *v54; // x21
  __int64 v55; // x9
  System_Collections_IEnumerator_c **v56; // x10
  __int64 v57; // x0
  WarBoardAIManager__Execute_d__12_o *v58; // x22
  int32_t v59; // w0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  System_Collections_IEnumerator_o **p_enumeratorChild_5__7; // x21
  System_Collections_IEnumerator_o *v63; // x22
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  float realtimeSinceStartup; // s0
  Il2CppObject **p__2__current; // x19
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  int v70; // w8
  struct System_Collections_IEnumerator_o *exe_5__5; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v73; // x9
  int *p_offset; // x10
  __int64 v75; // x0
  WarBoardAIManager___c_c *v76; // x0
  System_Collections_Generic_IEnumerable_T__o *v77; // x21
  System_Action_object__o *_9__12_4; // x22
  Il2CppObject *v79; // x23
  struct WarBoardAIManager___c_StaticFields *v80; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  struct WarBoardAI_o *ai_5__2; // x8
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  struct WarBoardAI_o *v86; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v87; // x8
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  struct System_Collections_IEnumerator_o *v90; // x21
  System_Collections_IEnumerator_c *v91; // x8
  __int64 v92; // x9
  System_Collections_IEnumerator_c **v93; // x10
  __int64 v94; // x0
  float v95; // s0
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  System_Collections_IEnumerator_o *v98; // x0
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  WarBoardData_o *v101; // x0
  const MethodInfo *v102; // x1

  v4 = this;
  if ( (byte_4C24C8E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_WarBoardPieceData__TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_WarBoardPieceData___);
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&DefenseAreaData_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1C2D490(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&Method_WarBoardAIManager___c__Execute_b__12_1__);
    sub_1C2D490(&Method_WarBoardAIManager___c__Execute_b__12_3__);
    sub_1C2D490(&Method_WarBoardAIManager___c__Execute_b__12_4__);
    sub_1C2D490(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__);
    sub_1C2D490(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__);
    sub_1C2D490(&WarBoardAIManager___c__DisplayClass12_0_TypeInfo);
    sub_1C2D490(&WarBoardAIManager___c_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitWhile_TypeInfo);
    this = (WarBoardAIManager__Execute_d__12_o *)sub_1C2D490(&WarBoardManager_TypeInfo);
    byte_4C24C8E = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1C2D6DC(WarBoardAIManager___c__DisplayClass12_0_TypeInfo);
      System_Object___ctor(v6, 0);
      v4->fields.__8__1 = (struct WarBoardAIManager___c__DisplayClass12_0_o *)v6;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v6, v7, v8);
      _8__1 = (Il2CppObject *)v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_123;
      _8__1[1].klass = *(Il2CppClass **)&v4->fields.forceId;
      if ( !_4__this )
        goto LABEL_123;
      warBoardAIList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.warBoardAIList;
      v11 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_WarBoardAI__bool__TypeInfo);
      System_Func_object__bool____ctor(v11, _8__1, Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__, 0);
      v12 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
              warBoardAIList,
              (System_Func_TSource__bool__o *)v11,
              (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
      v4->fields._ai_5__2 = (struct WarBoardAI_o *)v12;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._ai_5__2, (int32_t)v12, v13, v14);
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
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
        if ( this )
        {
          if ( WarBoardData__IsWin((WarBoardData_o *)this, method) )
            return 0;
          this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !this )
            goto LABEL_123;
          this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
          if ( !this )
            goto LABEL_123;
          this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__IsLose((WarBoardData_o *)this, method);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 0;
          v86 = v4->fields._ai_5__2;
          if ( v86 )
          {
            if ( !v86->fields.isEndRoute )
            {
              v4->fields.__2__current = 0;
              p__2__current = &v4->fields.__2__current;
              sub_1C2D434((CGThumbnailListItem_o *)p__2__current, 0, v84, v85);
              v70 = 5;
              goto LABEL_65;
            }
            v87 = v4->fields.__8__1;
            if ( v87 )
            {
              WarBoardAIManager__StartThink(_4__this, v87->fields.forceId, v87->fields.groupId, v85);
              goto LABEL_101;
            }
          }
        }
      }
LABEL_123:
      sub_1C2D6EC(this, method);
    }
    do
    {
LABEL_101:
      v4->fields._actPieces_5__4 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._actPieces_5__4, 0, v2, v3);
      v4->fields._exe_5__5 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._exe_5__5, 0, v88, v89);
LABEL_102:
      if ( !_4__this->fields.exec )
        return 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_123;
      if ( WarBoardManager__HasSchedule((WarBoardManager_o *)this, 0) )
      {
        v35 = WarBoardAIManager___c_TypeInfo;
        if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
          v35 = WarBoardAIManager___c_TypeInfo;
        }
        _9__12_1 = v35->static_fields->__9__12_1;
        if ( !_9__12_1 )
        {
          if ( !v35->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v35);
            v35 = WarBoardAIManager___c_TypeInfo;
          }
          v37 = (Il2CppObject *)v35->static_fields->__9;
          _9__12_1 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(_9__12_1, v37, Method_WarBoardAIManager___c__Execute_b__12_1__, 0);
          static_fields = WarBoardAIManager___c_TypeInfo->static_fields;
          static_fields->__9__12_1 = _9__12_1;
          sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__12_1, (int32_t)_9__12_1, v39, v40);
        }
        v41 = (UnityEngine_WaitWhile_o *)sub_1C2D6DC(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v41, _9__12_1, 0);
        v4->fields.__2__current = (Il2CppObject *)v41;
        v42 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434(v42, (int32_t)v41, v43, v44);
        result = 1;
        LODWORD(v42[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
LABEL_19:
      v4->fields._isNextPhase_5__3 = 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetConnect((CommonUI_o *)this, 1, 0);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetLoadMode((CommonUI_o *)this, 10, 0);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_123;
      this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
      if ( !this )
        goto LABEL_123;
      this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__GetAlivePieces((WarBoardData_o *)this, method);
      v16 = v4->fields.__8__1;
      if ( !v16 )
        goto LABEL_123;
      _9__2 = (System_Func_object__bool__o *)v16->fields.__9__2;
      v18 = this;
      if ( !_9__2 )
      {
        _9__2 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__2,
          (Il2CppObject *)v16,
          Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__,
          0);
        v16->fields.__9__2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__2;
        sub_1C2D434((CGThumbnailListItem_o *)&v16->fields.__9__2, (int32_t)_9__2, v19, v20);
      }
      v21 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v18,
              (System_Func_TSource__bool__o *)_9__2,
              (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      v22 = System_Linq_Enumerable__ToArray_object_(
              v21,
              (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      v4->fields._actPieces_5__4 = (struct WarBoardPieceData_array *)v22;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._actPieces_5__4, (int32_t)v22, v23, v24);
      v25 = WarBoardAIManager___c_TypeInfo;
      actPieces_5__4 = (System_Collections_Generic_IEnumerable_T__o *)v4->fields._actPieces_5__4;
      if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v25 = WarBoardAIManager___c_TypeInfo;
      }
      _9__12_3 = (System_Action_object__o *)v25->static_fields->__9__12_3;
      if ( !_9__12_3 )
      {
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          v25 = WarBoardAIManager___c_TypeInfo;
        }
        v28 = (Il2CppObject *)v25->static_fields->__9;
        _9__12_3 = (System_Action_object__o *)sub_1C2D6DC(System_Action_WarBoardPieceData__TypeInfo);
        System_Action_object____ctor(_9__12_3, v28, Method_WarBoardAIManager___c__Execute_b__12_3__, 0);
        v29 = WarBoardAIManager___c_TypeInfo->static_fields;
        v29->__9__12_3 = (struct System_Action_WarBoardPieceData__o *)_9__12_3;
        sub_1C2D434((CGThumbnailListItem_o *)&v29->__9__12_3, (int32_t)_9__12_3, v30, v31);
      }
      BasicHelper__ForEach_object_(
        actPieces_5__4,
        (System_Action_T__o *)_9__12_3,
        (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      if ( !DefenseAreaData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DefenseAreaData_TypeInfo);
      DefenseAreaData__ClearCache(0);
      this = (WarBoardAIManager__Execute_d__12_o *)v4->fields._ai_5__2;
      if ( !this )
        goto LABEL_123;
      v32 = WarBoardAI__Think((WarBoardAI_o *)this, 0);
      v4->fields._exe_5__5 = v32;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._exe_5__5, (int32_t)v32, v33, v34);
      v4->fields._prevTime_5__6 = UnityEngine_Time__get_realtimeSinceStartup(0);
      while ( 1 )
      {
LABEL_68:
        exe_5__5 = v4->fields._exe_5__5;
        if ( !exe_5__5 )
          goto LABEL_123;
        klass = exe_5__5->klass;
        v73 = *(unsigned __int16 *)&exe_5__5->klass->_2.rank;
        if ( *(_WORD *)&exe_5__5->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v73;
            p_offset += 4;
            if ( !v73 )
              goto LABEL_73;
          }
          v75 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_73:
          v75 = sub_1C7DCA8(v4->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 0);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v75)(
                                                       exe_5__5,
                                                       *(_QWORD *)(v75 + 8));
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_76;
        v46 = v4->fields._exe_5__5;
        if ( !v46 )
          goto LABEL_123;
        v47 = v46->klass;
        v48 = *(unsigned __int16 *)&v46->klass->_2.rank;
        if ( *(_WORD *)&v46->klass->_2.rank )
        {
          v49 = (System_Collections_IEnumerator_c **)&v47->_1.interfaceOffsets->offset;
          while ( *(v49 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v48;
            v49 += 2;
            if ( !v48 )
              goto LABEL_48;
          }
          v50 = (__int64)&v47->vtable[*(_DWORD *)v49 + 1];
        }
        else
        {
LABEL_48:
          v50 = sub_1C7DCA8(v4->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v51 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v50)(
                v46,
                *(_QWORD *)(v50 + 8));
        this = (WarBoardAIManager__Execute_d__12_o *)sub_1C2D5CC(v51, System_Collections_IEnumerator_TypeInfo);
        v52 = v4->fields._exe_5__5;
        if ( !v52 )
          goto LABEL_123;
        v53 = v52->klass;
        v54 = this;
        v55 = *(unsigned __int16 *)&v52->klass->_2.rank;
        if ( *(_WORD *)&v52->klass->_2.rank )
        {
          v56 = (System_Collections_IEnumerator_c **)&v53->_1.interfaceOffsets->offset;
          while ( *(v56 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v55;
            v56 += 2;
            if ( !v55 )
              goto LABEL_55;
          }
          v57 = (__int64)&v53->vtable[*(_DWORD *)v56 + 1];
        }
        else
        {
LABEL_55:
          v57 = sub_1C7DCA8(v4->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v57)(
                                                       v52,
                                                       *(_QWORD *)(v57 + 8));
        v58 = this;
        if ( v54 )
        {
          v4->fields._enumeratorChild_5__7 = (struct System_Collections_IEnumerator_o *)sub_1C2D5CC(
                                                                                          this,
                                                                                          System_Collections_IEnumerator_TypeInfo);
          v59 = sub_1C2D5CC(v58, System_Collections_IEnumerator_TypeInfo);
          sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._enumeratorChild_5__7, v59, v60, v61);
LABEL_59:
          p_enumeratorChild_5__7 = &v4->fields._enumeratorChild_5__7;
          while ( 1 )
          {
            v63 = *p_enumeratorChild_5__7;
            if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
            if ( !WarBoardManager__IEnumeratorExecute(v63, 0) )
              break;
            if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - v4->fields._prevTime_5__6) >= 0.1 )
            {
              realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
              v4->fields.__2__current = 0;
              p__2__current = &v4->fields.__2__current;
              *((float *)p__2__current + 16) = realtimeSinceStartup;
              sub_1C2D434((CGThumbnailListItem_o *)p__2__current, 0, v68, v69);
              v70 = 2;
              goto LABEL_65;
            }
          }
          *p_enumeratorChild_5__7 = 0;
          sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._enumeratorChild_5__7, 0, v64, v65);
          goto LABEL_67;
        }
        if ( this && (System_Boolean_c *)this->klass == bool_TypeInfo )
          break;
LABEL_67:
        if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - v4->fields._prevTime_5__6) >= 0.1 )
        {
          v95 = UnityEngine_Time__get_realtimeSinceStartup(0);
          v4->fields.__2__current = 0;
          p__2__current = &v4->fields.__2__current;
          *((float *)p__2__current + 16) = v95;
          sub_1C2D434((CGThumbnailListItem_o *)p__2__current, 0, v96, v97);
          v70 = 3;
          goto LABEL_65;
        }
      }
      v90 = v4->fields._exe_5__5;
      if ( !v90 )
        goto LABEL_123;
      v91 = v90->klass;
      v92 = *(unsigned __int16 *)&v90->klass->_2.rank;
      if ( *(_WORD *)&v90->klass->_2.rank )
      {
        v93 = (System_Collections_IEnumerator_c **)&v91->_1.interfaceOffsets->offset;
        while ( *(v93 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v92;
          v93 += 2;
          if ( !v92 )
            goto LABEL_111;
        }
        v94 = (__int64)&v91->vtable[*(_DWORD *)v93 + 1];
      }
      else
      {
LABEL_111:
        v94 = sub_1C7DCA8(v4->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1);
      }
      this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v94)(
                                                     v90,
                                                     *(_QWORD *)(v94 + 8));
      if ( !this )
        goto LABEL_123;
      if ( this->klass->_1.element_class != bool_TypeInfo->_1.element_class )
      {
        sub_1C2D9AC(this);
        return (unsigned __int8)WarBoardData__GetAlivePieces(v101, v102);
      }
      v4->fields._isNextPhase_5__3 = *(_BYTE *)j_il2cpp_object_unbox_0();
LABEL_76:
      v76 = WarBoardAIManager___c_TypeInfo;
      v77 = (System_Collections_Generic_IEnumerable_T__o *)v4->fields._actPieces_5__4;
      if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v76 = WarBoardAIManager___c_TypeInfo;
      }
      _9__12_4 = (System_Action_object__o *)v76->static_fields->__9__12_4;
      if ( !_9__12_4 )
      {
        if ( !v76->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v76);
          v76 = WarBoardAIManager___c_TypeInfo;
        }
        v79 = (Il2CppObject *)v76->static_fields->__9;
        _9__12_4 = (System_Action_object__o *)sub_1C2D6DC(System_Action_WarBoardPieceData__TypeInfo);
        System_Action_object____ctor(_9__12_4, v79, Method_WarBoardAIManager___c__Execute_b__12_4__, 0);
        v80 = WarBoardAIManager___c_TypeInfo->static_fields;
        v80->__9__12_4 = (struct System_Action_WarBoardPieceData__o *)_9__12_4;
        sub_1C2D434((CGThumbnailListItem_o *)&v80->__9__12_4, (int32_t)_9__12_4, v81, v82);
      }
      BasicHelper__ForEach_object_(
        v77,
        (System_Action_T__o *)_9__12_4,
        (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
      if ( v4->fields._isNextPhase_5__3 )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    this = (WarBoardAIManager__Execute_d__12_o *)v4->fields._ai_5__2;
    if ( !this )
      goto LABEL_123;
    this = (WarBoardAIManager__Execute_d__12_o *)WarBoardAI__Execute((WarBoardAI_o *)this, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      continue;
    break;
  }
  v98 = WarBoardAIManager__Wait(_4__this, method);
  v4->fields.__2__current = (Il2CppObject *)v98;
  p__2__current = &v4->fields.__2__current;
  sub_1C2D434((CGThumbnailListItem_o *)p__2__current, (int32_t)v98, v99, v100);
  v70 = 4;
LABEL_65:
  *((_DWORD *)p__2__current - 2) = v70;
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_WarBoardAIManager__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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

  if ( (byte_4C24C8F & 1) == 0 )
  {
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&UnityEngine_WaitWhile_TypeInfo);
    sub_1C2D490(&Method_WarBoardAIManager__Wait_b__8_0__);
    byte_4C24C8F = 1;
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
    v6 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v6, _4__this, Method_WarBoardAIManager__Wait_b__8_0__, 0);
    v7 = (UnityEngine_WaitWhile_o *)sub_1C2D6DC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v7, v6, 0);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_WarBoardAIManager__Wait_d__8_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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

  if ( (byte_4C24C8C & 1) == 0 )
  {
    sub_1C2D490(&WarBoardAIManager___c_TypeInfo);
    byte_4C24C8C = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(WarBoardAIManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAIManager___c_TypeInfo->static_fields->__9 = (struct WarBoardAIManager___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)WarBoardAIManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void WarBoardAIManager___c___ctor(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAIManager___c___Execute_b__12_1(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C24C8D & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C24C8D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  return WarBoardManager__HasSchedule((WarBoardManager_o *)Instance, 0);
}


void WarBoardAIManager___c___Execute_b__12_3(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  WarBoardPieceData__ActivateCacheMode(x, 1, 0);
}


void WarBoardAIManager___c___Execute_b__12_4(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
  return WarBoardAI__get_ForceId(x, 0) == this->fields.forceId && WarBoardAI__get_GroupId(x, 0) == this->fields.groupId;
}


bool WarBoardAIManager___c__DisplayClass12_0___Execute_b__2(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
  return WarBoardAI__get_ForceId(x, 0) == this->fields.forceId && WarBoardAI__get_GroupId(x, 0) == this->fields.groupId;
}