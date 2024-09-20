void __fastcall WarBoardAIManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x19
  struct WarBoardAIManager_StaticFields *static_fields; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_Dictionary_int__object__o *v8; // x19
  struct WarBoardAIManager_StaticFields *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_Dictionary_int__object__o *v12; // x19
  struct WarBoardAIManager_StaticFields *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A58D53 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo);
    sub_1B885B0(&WarBoardAIManager_TypeInfo);
    byte_4A58D53 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v1,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)WarBoardAIManager_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v4,
    (const MethodInfo_31FF45C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
  static_fields = WarBoardAIManager_TypeInfo->static_fields;
  static_fields->dicUniqueIndexPiece = (struct System_Collections_Generic_Dictionary_uint__WarBoardPieceData__o *)v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->dicUniqueIndexPiece, (int32_t)v4, v6, v7);
  v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v8,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
  v9 = WarBoardAIManager_TypeInfo->static_fields;
  v9->dicIndexSquare = (struct System_Collections_Generic_Dictionary_int__WarBoardSquareData__o *)v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->dicIndexSquare, (int32_t)v8, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  v13 = WarBoardAIManager_TypeInfo->static_fields;
  v13->dicIndexItem = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v13->dicIndexItem, (int32_t)v12, v14, v15);
}


void __fastcall WarBoardAIManager___ctor(WarBoardAIManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A58D52 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAI___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardAI__TypeInfo);
    byte_4A58D52 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardAI__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardAI___ctor__);
  this->fields.warBoardAIList = (struct System_Collections_Generic_List_WarBoardAI__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIManager__AIEnd(WarBoardAIManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  _QWORD *monitor; // x8
  __int64 v6; // x19
  int v7; // w8
  unsigned int v8; // w20

  if ( (byte_4A58D44 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A58D44 = 1;
  }
  this->fields.exec = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        sub_1B88814(Instance, v4);
      Instance = *(Il2CppObject **)(v6 + 8LL * (int)v8 + 32);
      if ( !Instance )
        break;
      WarBoardPieceData__ClearPrevAiRoute((WarBoardPieceData_o *)Instance, 0LL);
      v7 = *(_DWORD *)(v6 + 24);
      if ( (int)++v8 >= v7 )
        return;
    }
LABEL_12:
    sub_1B8880C(Instance, v4);
  }
}


void __fastcall WarBoardAIManager__AddReinforcementsAI(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  __int64 v11; // x24
  WarBoardAIRoute_o *klass; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v15; // x22
  Il2CppObject *v16; // x0
  const MethodInfo *v17; // x3

  if ( (byte_4A58D50 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_1B885B0(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1B885B0(&Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__);
    sub_1B885B0(&WarBoardAIManager___c__DisplayClass28_0_TypeInfo);
    byte_4A58D50 = 1;
  }
  v11 = sub_1B887FC(WarBoardAIManager___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_DWORD *)(v11 + 16) = forceId;
  *(_DWORD *)(v11 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v15 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v16 )
  {
    klass = (WarBoardAIRoute_o *)v16[1].klass;
    if ( klass )
    {
      WarBoardAIRoute__AddPiecePersonalityDic(klass, aiId, pieceIndex, v17);
      return;
    }
LABEL_8:
    sub_1B8880C(klass, v13);
  }
}


void __fastcall WarBoardAIManager__CreateAI(
        WarBoardAIManager_o *this,
        WarBoardStageNpcEntity_o *npc,
        const MethodInfo *method)
{
  WarBoardAI_o *v5; // x19
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_object__o *warBoardAIList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4A58D43 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAI__Add__);
    sub_1B885B0(&WarBoardAI_TypeInfo);
    byte_4A58D43 = 1;
  }
  v5 = (WarBoardAI_o *)sub_1B887FC(WarBoardAI_TypeInfo);
  WarBoardAI___ctor(v5, npc, v6);
  warBoardAIList = (System_Collections_Generic_List_object__o *)this->fields.warBoardAIList;
  if ( !warBoardAIList
    || (items = warBoardAIList->fields._items,
        v12 = Method_System_Collections_Generic_List_WarBoardAI__Add__,
        ++warBoardAIList->fields._version,
        !items) )
  {
    sub_1B8880C(warBoardAIList, v7);
  }
  size = warBoardAIList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      warBoardAIList,
      (Il2CppObject *)v5,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    warBoardAIList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v5, v8, v9);
  }
}


System_Collections_IEnumerator_o *__fastcall WarBoardAIManager__Execute(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A58D48 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAIManager__Execute_d__12_TypeInfo);
    byte_4A58D48 = 1;
  }
  v7 = sub_1B887FC(WarBoardAIManager__Execute_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 32) = forceId;
  *(_DWORD *)(v7 + 36) = groupId;
  return (System_Collections_IEnumerator_o *)v7;
}


float __fastcall WarBoardAIManager__GetBreakPoint(WarBoardPieceData_o *piece, const MethodInfo *method)
{
  if ( !piece )
    sub_1B8880C(0LL, method);
  return (float)(piece->fields._breakPoint_k__BackingField + 1)
       / (float)(piece->fields._breakPointMax_k__BackingField + 1);
}


System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *__fastcall WarBoardAIManager__GetEnemyPiece(
        const MethodInfo *method)
{
  WarBoardAIManager_c *v1; // x0

  if ( (byte_4A58D4A & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAIManager_TypeInfo);
    byte_4A58D4A = 1;
  }
  v1 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v1 = WarBoardAIManager_TypeInfo;
  }
  return v1->static_fields->dicSquareIndexEnemyPiece;
}


WarBoardPieceData_o *__fastcall WarBoardAIManager__GetEnemyPieceSquareIndex(
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardAIManager_c *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexEnemyPiece; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A58D4B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__);
    sub_1B885B0(&WarBoardAIManager_TypeInfo);
    byte_4A58D4B = 1;
  }
  v3 = WarBoardAIManager_TypeInfo;
  value = 0LL;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v3 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v3->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    sub_1B8880C(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicSquareIndexEnemyPiece,
         squareIndex,
         &value,
         (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__) )
  {
    return (WarBoardPieceData_o *)value;
  }
  else
  {
    return 0LL;
  }
}


WarBoardItemData_o *__fastcall WarBoardAIManager__GetItem(int32_t squareIndex, const MethodInfo *method)
{
  WarBoardAIManager_c *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicIndexItem; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A58D4E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__);
    sub_1B885B0(&WarBoardAIManager_TypeInfo);
    byte_4A58D4E = 1;
  }
  v3 = WarBoardAIManager_TypeInfo;
  value = 0LL;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v3 = WarBoardAIManager_TypeInfo;
  }
  dicIndexItem = (System_Collections_Generic_Dictionary_int__object__o *)v3->static_fields->dicIndexItem;
  if ( !dicIndexItem )
    sub_1B8880C(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicIndexItem,
         squareIndex,
         &value,
         (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__) )
  {
    return (WarBoardItemData_o *)value;
  }
  else
  {
    return 0LL;
  }
}


WarBoardPieceData_o *__fastcall WarBoardAIManager__GetPieceUnique(uint32_t uniqueIndex, const MethodInfo *method)
{
  WarBoardAIManager_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicUniqueIndexPiece; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A58D4C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__);
    sub_1B885B0(&WarBoardAIManager_TypeInfo);
    byte_4A58D4C = 1;
  }
  v3 = WarBoardAIManager_TypeInfo;
  value = 0LL;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v3 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->dicUniqueIndexPiece;
  if ( !dicUniqueIndexPiece )
    sub_1B8880C(0LL, method);
  if ( System_Collections_Generic_Dictionary_uint__object___TryGetValue(
         dicUniqueIndexPiece,
         uniqueIndex,
         &value,
         (const MethodInfo_32015BC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__) )
  {
    return (WarBoardPieceData_o *)value;
  }
  else
  {
    return 0LL;
  }
}


WarBoardSquareData_o *__fastcall WarBoardAIManager__GetSquare(int32_t squareIndex, const MethodInfo *method)
{
  WarBoardAIManager_c *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicIndexSquare; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A58D4D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__);
    sub_1B885B0(&WarBoardAIManager_TypeInfo);
    byte_4A58D4D = 1;
  }
  v3 = WarBoardAIManager_TypeInfo;
  value = 0LL;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v3 = WarBoardAIManager_TypeInfo;
  }
  dicIndexSquare = (System_Collections_Generic_Dictionary_int__object__o *)v3->static_fields->dicIndexSquare;
  if ( !dicIndexSquare )
    sub_1B8880C(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicIndexSquare,
         squareIndex,
         &value,
         (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__) )
  {
    return (WarBoardSquareData_o *)value;
  }
  else
  {
    return 0LL;
  }
}


void __fastcall WarBoardAIManager__Initialize(
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
  if ( (byte_4A58D42 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAI__Clear__);
    this = (WarBoardAIManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
    byte_4A58D42 = 1;
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
    System_Array__Clear((System_Array_o *)warBoardAIList->fields._items, 0, size, 0LL);
  if ( !npcList )
LABEL_15:
    sub_1B8880C(this, npcList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)npcList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1B8880C(v8, v9);
    if ( HIDWORD(v11.fields._current[1].klass) || LODWORD(v11.fields._current[1].monitor) )
      WarBoardAIManager__CreateAI(v4, (WarBoardStageNpcEntity_o *)v11.fields._current, v10);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
}


bool __fastcall WarBoardAIManager__IsAllyPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_1B8880C(one, two);
  return one->fields._forceId_k__BackingField == two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEnemyBlock(int32_t squareIndex, const MethodInfo *method)
{
  if ( (byte_4A58D4F & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAIManager_TypeInfo);
    byte_4A58D4F = 1;
  }
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  return WarBoardAIManager__GetEnemyPieceSquareIndex(squareIndex, method) != 0LL;
}


bool __fastcall WarBoardAIManager__IsEnemyPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_1B8880C(one, two);
  return one->fields._forceId_k__BackingField != two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEqualPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_1B8880C(one, two);
  return one->fields._forceId_k__BackingField == two->fields._forceId_k__BackingField
      && one->fields._index_k__BackingField == two->fields._index_k__BackingField;
}


void __fastcall WarBoardAIManager__Pause(WarBoardAIManager_o *this, const MethodInfo *method)
{
  this->fields.isPause = 1;
}


void __fastcall WarBoardAIManager__Resume(WarBoardAIManager_o *this, const MethodInfo *method)
{
  this->fields.isPause = 0;
}


void __fastcall WarBoardAIManager__StartAIPhase(
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
  const MethodInfo *v13; // x3

  if ( (byte_4A58D46 & 1) == 0 )
  {
    sub_1B885B0(&AStarSearch_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_1B885B0(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1B885B0(&Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__);
    sub_1B885B0(&WarBoardAIManager___c__DisplayClass9_0_TypeInfo);
    byte_4A58D46 = 1;
  }
  v7 = sub_1B887FC(WarBoardAIManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_DWORD *)(v7 + 16) = forceId;
  *(_DWORD *)(v7 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__,
    0LL);
  v12 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v12 )
  {
    this->fields.exec = 1;
    LOBYTE(v12[2].klass) = 0;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    AStarSearch__DetourCacheClear(0LL);
    WarBoardAIManager__StartThink(this, *(_DWORD *)(v7 + 16), *(_DWORD *)(v7 + 20), v13);
  }
}


void __fastcall WarBoardAIManager__StartThink(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x20
  WarBoardAIRoute_o *klass; // x0
  const MethodInfo *v9; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v11; // x22
  Il2CppObject *v12; // x0
  WarBoardAIManager_c *v13; // x0
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  WarBoardAIRoute_AIRouteMasterData_c *v15; // x24
  int namespaze; // w8
  unsigned int v17; // w25
  __int64 v18; // x21
  WarBoardAIManager_c *v19; // x0
  WarBoardAIManager_c *v20; // x0
  WarBoardAIManager_c *v21; // x0
  struct WarBoardAIRoute_AIRouteMasterData_o *v22; // x8
  _DWORD *monitor; // x24
  int v24; // w8
  unsigned int v25; // w25
  __int64 v26; // x21
  WarBoardAIManager_c *v27; // x0
  const MethodInfo *v28; // x3
  struct WarBoardAIRoute_AIRouteMasterData_o *v29; // x8
  __int64 v30; // x23
  int v31; // w8
  unsigned int v32; // w24
  __int64 v33; // x21
  struct System_Collections_IEnumerator_o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3

  if ( (byte_4A58D47 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__);
    sub_1B885B0(&Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
    sub_1B885B0(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__);
    sub_1B885B0(&WarBoardAIManager___c__DisplayClass11_0_TypeInfo);
    sub_1B885B0(&WarBoardAIManager_TypeInfo);
    byte_4A58D47 = 1;
  }
  v7 = sub_1B887FC(WarBoardAIManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_58;
  *(_DWORD *)(v7 + 16) = forceId;
  *(_DWORD *)(v7 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__,
    0LL);
  v12 = System_Linq_Enumerable__SingleOrDefault_object__48981240(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_2EB64F8 *)Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
  if ( !v12 )
    return;
  this->fields.isPause = 0;
  klass = (WarBoardAIRoute_o *)v12[1].klass;
  if ( !klass )
    goto LABEL_58;
  WarBoardAIRoute__Clear(klass, v9);
  v13 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v13 = WarBoardAIManager_TypeInfo;
  }
  klass = (WarBoardAIRoute_o *)v13->static_fields->dicUniqueIndexPiece;
  if ( !klass )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)klass,
    (const MethodInfo_31FFFB8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
  klass = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece;
  if ( !klass )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)klass,
    (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
  klass = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !klass )
    goto LABEL_58;
  aiRouteMasterData = klass[1].fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    goto LABEL_58;
  v15 = aiRouteMasterData[1].klass;
  if ( !v15 )
    goto LABEL_58;
  namespaze = (int)v15->_1.namespaze;
  if ( namespaze >= 1 )
  {
    v17 = 0;
    while ( v17 < namespaze )
    {
      v18 = *((_QWORD *)&v15->_1.byval_arg.data + (int)v17);
      if ( !v18 )
        goto LABEL_58;
      if ( !*(_BYTE *)(v18 + 60) )
      {
        v19 = WarBoardAIManager_TypeInfo;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          v19 = WarBoardAIManager_TypeInfo;
        }
        klass = (WarBoardAIRoute_o *)v19->static_fields->dicUniqueIndexPiece;
        if ( !klass )
          goto LABEL_58;
        System_Collections_Generic_Dictionary_uint__object___Add(
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)klass,
          *(_DWORD *)(v18 + 44),
          (Il2CppObject *)v18,
          (const MethodInfo_31FFE30 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
        if ( *(_DWORD *)(v18 + 20) != *(_DWORD *)(v7 + 16) )
        {
          v20 = WarBoardAIManager_TypeInfo;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            v20 = WarBoardAIManager_TypeInfo;
          }
          klass = (WarBoardAIRoute_o *)v20->static_fields->dicSquareIndexEnemyPiece;
          if ( !klass )
            goto LABEL_58;
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)klass,
            *(_DWORD *)(v18 + 64),
            (Il2CppObject *)v18,
            (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
        }
      }
      namespaze = (int)v15->_1.namespaze;
      if ( (int)++v17 >= namespaze )
        goto LABEL_27;
    }
LABEL_59:
    sub_1B88814(klass, v9);
  }
LABEL_27:
  v21 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v21 = WarBoardAIManager_TypeInfo;
  }
  klass = (WarBoardAIRoute_o *)v21->static_fields->dicIndexSquare;
  if ( !klass )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)klass,
    (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
  klass = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !klass )
    goto LABEL_58;
  v22 = klass[1].fields.aiRouteMasterData;
  if ( !v22 )
    goto LABEL_58;
  monitor = v22[1].monitor;
  if ( !monitor )
    goto LABEL_58;
  v24 = monitor[6];
  if ( v24 >= 1 )
  {
    v25 = 0;
    while ( v25 < v24 )
    {
      klass = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      v26 = *(_QWORD *)&monitor[2 * v25 + 8];
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        klass = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v26 )
        goto LABEL_58;
      klass = (WarBoardAIRoute_o *)klass->fields.dicUniqueKeyTarget->fields._buckets;
      if ( !klass )
        goto LABEL_58;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)klass,
        *(_DWORD *)(v26 + 16),
        (Il2CppObject *)v26,
        (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
      v24 = monitor[6];
      if ( (int)++v25 >= v24 )
        goto LABEL_41;
    }
    goto LABEL_59;
  }
LABEL_41:
  v27 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v27 = WarBoardAIManager_TypeInfo;
  }
  klass = (WarBoardAIRoute_o *)v27->static_fields->dicIndexItem;
  if ( !klass
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)klass,
          (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__),
        (klass = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v29 = klass[1].fields.aiRouteMasterData) == 0LL
    || (v30 = *(_QWORD *)&v29[1].fields.masterUniqueIndex) == 0 )
  {
LABEL_58:
    sub_1B8880C(klass, v9);
  }
  v31 = *(_DWORD *)(v30 + 24);
  if ( v31 >= 1 )
  {
    v32 = 0;
    while ( v32 < v31 )
    {
      klass = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      v33 = *(_QWORD *)(v30 + 8LL * (int)v32 + 32);
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        klass = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v33 )
        goto LABEL_58;
      klass = (WarBoardAIRoute_o *)klass->fields.dicUniqueKeyTarget->fields._entries;
      if ( !klass )
        goto LABEL_58;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)klass,
        *(_DWORD *)(v33 + 16),
        (Il2CppObject *)v33,
        (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
      v31 = *(_DWORD *)(v30 + 24);
      if ( (int)++v32 >= v31 )
        goto LABEL_55;
    }
    goto LABEL_59;
  }
LABEL_55:
  if ( !this->fields.executeTask )
  {
    v34 = WarBoardAIManager__Execute(this, *(_DWORD *)(v7 + 16), *(_DWORD *)(v7 + 20), v28);
    this->fields.executeTask = v34;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.executeTask, (int32_t)v34, v35, v36);
  }
}


void __fastcall WarBoardAIManager__Update(WarBoardAIManager_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_executeTask; // x19
  System_Collections_IEnumerator_o *v4; // x20
  struct System_Collections_IEnumerator_o *executeTask; // t1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A58D49 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardManager_TypeInfo);
    byte_4A58D49 = 1;
  }
  executeTask = this->fields.executeTask;
  p_executeTask = (ServantStatusBattleListViewItem_o *)&this->fields.executeTask;
  v4 = executeTask;
  if ( executeTask )
  {
    if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    if ( !WarBoardManager__IEnumeratorExecute(v4, 0LL) )
    {
      p_executeTask->klass = 0LL;
      sub_1B88554(p_executeTask, 0, v6, v7);
    }
  }
}


void __fastcall WarBoardAIManager__UpdateAiId(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  __int64 v11; // x24
  WarBoardAIRoute_o *klass; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v15; // x22
  Il2CppObject *v16; // x0
  const MethodInfo *v17; // x3

  if ( (byte_4A58D51 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_1B885B0(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1B885B0(&Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__);
    sub_1B885B0(&WarBoardAIManager___c__DisplayClass29_0_TypeInfo);
    byte_4A58D51 = 1;
  }
  v11 = sub_1B887FC(WarBoardAIManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_DWORD *)(v11 + 16) = forceId;
  *(_DWORD *)(v11 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v15 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v16 )
  {
    klass = (WarBoardAIRoute_o *)v16[1].klass;
    if ( klass )
    {
      WarBoardAIRoute__UpdatePiecePersonalityDic(klass, aiId, pieceIndex, v17);
      return;
    }
LABEL_8:
    sub_1B8880C(klass, v13);
  }
}


System_Collections_IEnumerator_o *__fastcall WarBoardAIManager__Wait(
        WarBoardAIManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A58D45 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAIManager__Wait_d__8_TypeInfo);
    byte_4A58D45 = 1;
  }
  v3 = sub_1B887FC(WarBoardAIManager__Wait_d__8_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall WarBoardAIManager___Wait_b__8_0(WarBoardAIManager_o *this, const MethodInfo *method)
{
  return this->fields.isPause && this->fields.exec;
}


void __fastcall WarBoardAIManager__Execute_d__12___ctor(
        WarBoardAIManager__Execute_d__12_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardAIManager__Execute_d__12__MoveNext(
        WarBoardAIManager__Execute_d__12_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  WarBoardAIManager__Execute_d__12_o *v4; // x19
  WarBoardAIManager_o *_4__this; // x20
  Il2CppObject *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *_8__1; // x21
  System_Collections_Generic_IEnumerable_TSource__o *warBoardAIList; // x22
  System_Func_object__bool__o *v11; // x23
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct WarBoardAIManager___c__DisplayClass12_0_o *v15; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v16; // x22
  System_Func_object__bool__o *_9__2; // x24
  WarBoardAIManager__Execute_d__12_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Object_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  WarBoardAIManager___c_c *v25; // x0
  System_Collections_Generic_IEnumerable_T__o *actPieces_5__4; // x21
  System_Action_object__o *_9__12_3; // x22
  Il2CppObject *v28; // x23
  struct WarBoardAIManager___c_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  DefenseAreaData_c *v32; // x0
  System_Collections_IEnumerator_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  WarBoardAIManager___c_c *v36; // x0
  System_Func_bool__o *_9__12_1; // x20
  Il2CppObject *v38; // x21
  struct WarBoardAIManager___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  UnityEngine_WaitWhile_o *v42; // x21
  ServantStatusBattleListViewItem_o *v43; // x19
  int32_t v44; // w2
  int32_t v45; // w3
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
  int32_t v62; // w3
  System_Collections_IEnumerator_o **p_enumeratorChild_5__7; // x21
  System_Collections_IEnumerator_o *v64; // x22
  int32_t v65; // w2
  int32_t v66; // w3
  float realtimeSinceStartup; // s0
  Il2CppObject **p__2__current; // x19
  int32_t v69; // w2
  int32_t v70; // w3
  int v71; // w8
  struct System_Collections_IEnumerator_o *exe_5__5; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v74; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  WarBoardAIManager___c_c *v77; // x0
  System_Collections_Generic_IEnumerable_T__o *v78; // x21
  System_Action_object__o *_9__12_4; // x22
  Il2CppObject *v80; // x23
  struct WarBoardAIManager___c_StaticFields *v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  struct WarBoardAI_o *ai_5__2; // x8
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  struct WarBoardAI_o *v87; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v88; // x8
  int32_t v89; // w2
  int32_t v90; // w3
  struct System_Collections_IEnumerator_o *v91; // x21
  System_Collections_IEnumerator_c *v92; // x8
  __int64 v93; // x9
  System_Collections_IEnumerator_c **v94; // x10
  __int64 v95; // x0
  float v96; // s0
  int32_t v97; // w2
  int32_t v98; // w3
  System_Collections_IEnumerator_o *v99; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  WarBoardAIManager__Execute_d__12_o *v102; // x0
  const MethodInfo *v103; // x1

  v4 = this;
  if ( (byte_4A58D56 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_WarBoardPieceData__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_WarBoardPieceData___);
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&DefenseAreaData_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1B885B0(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardAIManager___c__Execute_b__12_1__);
    sub_1B885B0(&Method_WarBoardAIManager___c__Execute_b__12_3__);
    sub_1B885B0(&Method_WarBoardAIManager___c__Execute_b__12_4__);
    sub_1B885B0(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__);
    sub_1B885B0(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__);
    sub_1B885B0(&WarBoardAIManager___c__DisplayClass12_0_TypeInfo);
    sub_1B885B0(&WarBoardAIManager___c_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitWhile_TypeInfo);
    this = (WarBoardAIManager__Execute_d__12_o *)sub_1B885B0(&WarBoardManager_TypeInfo);
    byte_4A58D56 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1B887FC(WarBoardAIManager___c__DisplayClass12_0_TypeInfo);
      System_Object___ctor(v6, 0LL);
      v4->fields.__8__1 = (struct WarBoardAIManager___c__DisplayClass12_0_o *)v6;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v6, v7, v8);
      _8__1 = (Il2CppObject *)v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_123;
      _8__1[1].klass = *(Il2CppClass **)&v4->fields.forceId;
      if ( !_4__this )
        goto LABEL_123;
      warBoardAIList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.warBoardAIList;
      v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardAI__bool__TypeInfo);
      System_Func_object__bool____ctor(v11, _8__1, Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__, 0LL);
      v12 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
              warBoardAIList,
              (System_Func_TSource__bool__o *)v11,
              (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
      v4->fields._ai_5__2 = (struct WarBoardAI_o *)v12;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._ai_5__2, (int32_t)v12, v13, v14);
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
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
        if ( this )
        {
          if ( WarBoardData__IsWin((WarBoardData_o *)this, 0LL) )
            return 0;
          this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !this )
            goto LABEL_123;
          this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
          if ( !this )
            goto LABEL_123;
          this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__IsLose((WarBoardData_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 0;
          v87 = v4->fields._ai_5__2;
          if ( v87 )
          {
            if ( !v87->fields.isEndRoute )
            {
              v4->fields.__2__current = 0LL;
              p__2__current = &v4->fields.__2__current;
              sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, 0, v85, (int32_t)v86);
              v71 = 5;
              goto LABEL_65;
            }
            v88 = v4->fields.__8__1;
            if ( v88 )
            {
              WarBoardAIManager__StartThink(_4__this, v88->fields.forceId, v88->fields.groupId, v86);
              goto LABEL_101;
            }
          }
        }
      }
LABEL_123:
      sub_1B8880C(this, method);
    }
    do
    {
LABEL_101:
      v4->fields._actPieces_5__4 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._actPieces_5__4, 0, v2, (int32_t)v3);
      v4->fields._exe_5__5 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._exe_5__5, 0, v89, v90);
LABEL_102:
      if ( !_4__this->fields.exec )
        return 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_123;
      if ( WarBoardManager__HasSchedule((WarBoardManager_o *)this, 0LL) )
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
          _9__12_1 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(_9__12_1, v38, Method_WarBoardAIManager___c__Execute_b__12_1__, 0LL);
          static_fields = WarBoardAIManager___c_TypeInfo->static_fields;
          static_fields->__9__12_1 = _9__12_1;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_1, (int32_t)_9__12_1, v40, v41);
        }
        v42 = (UnityEngine_WaitWhile_o *)sub_1B887FC(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v42, _9__12_1, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v42;
        v43 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v43, (int32_t)v42, v44, v45);
        result = 1;
        *(_DWORD *)&v43[-1].fields.isMine = 1;
        return result;
      }
LABEL_19:
      v4->fields._isNextPhase_5__3 = 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetLoadMode((CommonUI_o *)this, 10, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_123;
      this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
      if ( !this )
        goto LABEL_123;
      this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__GetAlivePieces((WarBoardData_o *)this, 0LL);
      v16 = v4->fields.__8__1;
      if ( !v16 )
        goto LABEL_123;
      _9__2 = (System_Func_object__bool__o *)v16->fields.__9__2;
      v18 = this;
      if ( !_9__2 )
      {
        _9__2 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__2,
          (Il2CppObject *)v16,
          Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__,
          0LL);
        v16->fields.__9__2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__2;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->fields.__9__2, (int32_t)_9__2, v19, v20);
      }
      v21 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v18,
              (System_Func_TSource__bool__o *)_9__2,
              (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      v22 = System_Linq_Enumerable__ToArray_object_(
              v21,
              (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      v4->fields._actPieces_5__4 = (struct WarBoardPieceData_array *)v22;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._actPieces_5__4, (int32_t)v22, v23, v24);
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
        _9__12_3 = (System_Action_object__o *)sub_1B887FC(System_Action_WarBoardPieceData__TypeInfo);
        System_Action_object____ctor(_9__12_3, v28, Method_WarBoardAIManager___c__Execute_b__12_3__, 0LL);
        v29 = WarBoardAIManager___c_TypeInfo->static_fields;
        v29->__9__12_3 = (struct System_Action_WarBoardPieceData__o *)_9__12_3;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->__9__12_3, (int32_t)_9__12_3, v30, v31);
      }
      BasicHelper__ForEach_object_(
        actPieces_5__4,
        (System_Action_T__o *)_9__12_3,
        (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      v32 = DefenseAreaData_TypeInfo;
      if ( !DefenseAreaData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DefenseAreaData_TypeInfo);
      DefenseAreaData__ClearCache((const MethodInfo *)v32);
      this = (WarBoardAIManager__Execute_d__12_o *)v4->fields._ai_5__2;
      if ( !this )
        goto LABEL_123;
      v33 = WarBoardAI__Think((WarBoardAI_o *)this, method);
      v4->fields._exe_5__5 = v33;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._exe_5__5, (int32_t)v33, v34, v35);
      v4->fields._prevTime_5__6 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      while ( 1 )
      {
LABEL_68:
        exe_5__5 = v4->fields._exe_5__5;
        if ( !exe_5__5 )
          goto LABEL_123;
        klass = exe_5__5->klass;
        v74 = *(unsigned __int16 *)(&exe_5__5->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&exe_5__5->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v74;
            p_offset += 4;
            if ( !v74 )
              goto LABEL_73;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_73:
          p_method = sub_1BDA590(v4->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                       exe_5__5,
                                                       *(_QWORD *)(p_method + 8));
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_76;
        v47 = v4->fields._exe_5__5;
        if ( !v47 )
          goto LABEL_123;
        v48 = v47->klass;
        v49 = *(unsigned __int16 *)(&v47->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v47->klass->_2.bitflags2 + 3) )
        {
          v50 = (System_Collections_IEnumerator_c **)&v48->_1.interfaceOffsets->offset;
          while ( *(v50 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v49;
            v50 += 2;
            if ( !v49 )
              goto LABEL_48;
          }
          v51 = (__int64)&v48->vtable[*(_DWORD *)v50 + 1].method;
        }
        else
        {
LABEL_48:
          v51 = sub_1BDA590(v4->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v52 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v51)(
                v47,
                *(_QWORD *)(v51 + 8));
        this = (WarBoardAIManager__Execute_d__12_o *)sub_1B886EC(v52, System_Collections_IEnumerator_TypeInfo);
        v53 = v4->fields._exe_5__5;
        if ( !v53 )
          goto LABEL_123;
        v54 = v53->klass;
        v55 = this;
        v56 = *(unsigned __int16 *)(&v53->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v53->klass->_2.bitflags2 + 3) )
        {
          v57 = (System_Collections_IEnumerator_c **)&v54->_1.interfaceOffsets->offset;
          while ( *(v57 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v56;
            v57 += 2;
            if ( !v56 )
              goto LABEL_55;
          }
          v58 = (__int64)&v54->vtable[*(_DWORD *)v57 + 1].method;
        }
        else
        {
LABEL_55:
          v58 = sub_1BDA590(v4->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v58)(
                                                       v53,
                                                       *(_QWORD *)(v58 + 8));
        v59 = this;
        if ( v55 )
        {
          v4->fields._enumeratorChild_5__7 = (struct System_Collections_IEnumerator_o *)sub_1B886EC(
                                                                                          this,
                                                                                          System_Collections_IEnumerator_TypeInfo);
          v60 = sub_1B886EC(v59, System_Collections_IEnumerator_TypeInfo);
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._enumeratorChild_5__7, v60, v61, v62);
LABEL_59:
          p_enumeratorChild_5__7 = &v4->fields._enumeratorChild_5__7;
          while ( 1 )
          {
            v64 = *p_enumeratorChild_5__7;
            if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
            if ( !WarBoardManager__IEnumeratorExecute(v64, 0LL) )
              break;
            if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v4->fields._prevTime_5__6) >= 0.1 )
            {
              realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
              v4->fields.__2__current = 0LL;
              p__2__current = &v4->fields.__2__current;
              *((float *)p__2__current + 16) = realtimeSinceStartup;
              sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, 0, v69, v70);
              v71 = 2;
              goto LABEL_65;
            }
          }
          *p_enumeratorChild_5__7 = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._enumeratorChild_5__7, 0, v65, v66);
          goto LABEL_67;
        }
        if ( this && (System_Boolean_c *)this->klass == bool_TypeInfo )
          break;
LABEL_67:
        if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v4->fields._prevTime_5__6) >= 0.1 )
        {
          v96 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          v4->fields.__2__current = 0LL;
          p__2__current = &v4->fields.__2__current;
          *((float *)p__2__current + 16) = v96;
          sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, 0, v97, v98);
          v71 = 3;
          goto LABEL_65;
        }
      }
      v91 = v4->fields._exe_5__5;
      if ( !v91 )
        goto LABEL_123;
      v92 = v91->klass;
      v93 = *(unsigned __int16 *)(&v91->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v91->klass->_2.bitflags2 + 3) )
      {
        v94 = (System_Collections_IEnumerator_c **)&v92->_1.interfaceOffsets->offset;
        while ( *(v94 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v93;
          v94 += 2;
          if ( !v93 )
            goto LABEL_111;
        }
        v95 = (__int64)&v92->vtable[*(_DWORD *)v94 + 1].method;
      }
      else
      {
LABEL_111:
        v95 = sub_1BDA590(v4->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v95)(
                                                     v91,
                                                     *(_QWORD *)(v95 + 8));
      if ( !this )
        goto LABEL_123;
      if ( this->klass->_1.element_class != bool_TypeInfo->_1.element_class )
      {
        sub_1B88ACC(this);
        return (unsigned __int8)WarBoardAIManager__Execute_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                  v102,
                                  v103);
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
        _9__12_4 = (System_Action_object__o *)sub_1B887FC(System_Action_WarBoardPieceData__TypeInfo);
        System_Action_object____ctor(_9__12_4, v80, Method_WarBoardAIManager___c__Execute_b__12_4__, 0LL);
        v81 = WarBoardAIManager___c_TypeInfo->static_fields;
        v81->__9__12_4 = (struct System_Action_WarBoardPieceData__o *)_9__12_4;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v81->__9__12_4, (int32_t)_9__12_4, v82, v83);
      }
      BasicHelper__ForEach_object_(
        v78,
        (System_Action_T__o *)_9__12_4,
        (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( v4->fields._isNextPhase_5__3 )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( this )
        {
          WarBoardManager__NextTurn((WarBoardManager_o *)this, 0LL);
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
    this = (WarBoardAIManager__Execute_d__12_o *)WarBoardAI__Execute((WarBoardAI_o *)this, method);
    if ( ((unsigned __int8)this & 1) == 0 )
      continue;
    break;
  }
  v99 = WarBoardAIManager__Wait(_4__this, method);
  v4->fields.__2__current = (Il2CppObject *)v99;
  p__2__current = &v4->fields.__2__current;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v99, v100, v101);
  v71 = 4;
LABEL_65:
  *((_DWORD *)p__2__current - 2) = v71;
  return 1;
}


Il2CppObject *__fastcall WarBoardAIManager__Execute_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardAIManager__Execute_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardAIManager__Execute_d__12__System_Collections_IEnumerator_Reset(
        WarBoardAIManager__Execute_d__12_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_WarBoardAIManager__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall WarBoardAIManager__Execute_d__12__System_Collections_IEnumerator_get_Current(
        WarBoardAIManager__Execute_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardAIManager__Execute_d__12__System_IDisposable_Dispose(
        WarBoardAIManager__Execute_d__12_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardAIManager__Wait_d__8___ctor(
        WarBoardAIManager__Wait_d__8_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardAIManager__Wait_d__8__MoveNext(WarBoardAIManager__Wait_d__8_o *this, const MethodInfo *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitWhile_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w8

  if ( (byte_4A58D57 & 1) == 0 )
  {
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&UnityEngine_WaitWhile_TypeInfo);
    sub_1B885B0(&Method_WarBoardAIManager__Wait_b__8_0__);
    byte_4A58D57 = 1;
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
    v6 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v6, _4__this, Method_WarBoardAIManager__Wait_b__8_0__, 0LL);
    v7 = (UnityEngine_WaitWhile_o *)sub_1B887FC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v7, v6, 0LL);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9);
    v10 = 1;
    result = 1;
  }
  this->fields.__1__state = v10;
  return result;
}


Il2CppObject *__fastcall WarBoardAIManager__Wait_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardAIManager__Wait_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardAIManager__Wait_d__8__System_Collections_IEnumerator_Reset(
        WarBoardAIManager__Wait_d__8_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_WarBoardAIManager__Wait_d__8_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall WarBoardAIManager__Wait_d__8__System_Collections_IEnumerator_get_Current(
        WarBoardAIManager__Wait_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardAIManager__Wait_d__8__System_IDisposable_Dispose(
        WarBoardAIManager__Wait_d__8_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardAIManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A58D54 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAIManager___c_TypeInfo);
    byte_4A58D54 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarBoardAIManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardAIManager___c_TypeInfo->static_fields->__9 = (struct WarBoardAIManager___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)WarBoardAIManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall WarBoardAIManager___c___ctor(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c___Execute_b__12_1(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A58D55 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A58D55 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  return WarBoardManager__HasSchedule((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_3(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  WarBoardPieceData__ActivateCacheMode(x, 1, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_4(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  WarBoardPieceData__ActivateCacheMode(x, 0, 0LL);
}


void __fastcall WarBoardAIManager___c__DisplayClass11_0___ctor(
        WarBoardAIManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c__DisplayClass11_0___StartThink_b__0(
        WarBoardAIManager___c__DisplayClass11_0_o *this,
        WarBoardAI_o *x,
        const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  if ( !x || (routeClass = x->fields.routeClass) == 0LL )
    sub_1B8880C(this, x);
  return routeClass->fields.forceId == this->fields.forceId && routeClass->fields.groupId == this->fields.groupId;
}


void __fastcall WarBoardAIManager___c__DisplayClass12_0___ctor(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c__DisplayClass12_0___Execute_b__0(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        WarBoardAI_o *x,
        const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  if ( !x || (routeClass = x->fields.routeClass) == 0LL )
    sub_1B8880C(this, x);
  return routeClass->fields.forceId == this->fields.forceId && routeClass->fields.groupId == this->fields.groupId;
}


bool __fastcall WarBoardAIManager___c__DisplayClass12_0___Execute_b__2(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields._forceId_k__BackingField == this->fields.forceId
      && x->fields._groupId_k__BackingField == this->fields.groupId;
}


void __fastcall WarBoardAIManager___c__DisplayClass28_0___ctor(
        WarBoardAIManager___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c__DisplayClass28_0___AddReinforcementsAI_b__0(
        WarBoardAIManager___c__DisplayClass28_0_o *this,
        WarBoardAI_o *x,
        const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  if ( !x || (routeClass = x->fields.routeClass) == 0LL )
    sub_1B8880C(this, x);
  return routeClass->fields.forceId == this->fields.forceId && routeClass->fields.groupId == this->fields.groupId;
}


void __fastcall WarBoardAIManager___c__DisplayClass29_0___ctor(
        WarBoardAIManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c__DisplayClass29_0___UpdateAiId_b__0(
        WarBoardAIManager___c__DisplayClass29_0_o *this,
        WarBoardAI_o *x,
        const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  if ( !x || (routeClass = x->fields.routeClass) == 0LL )
    sub_1B8880C(this, x);
  return routeClass->fields.forceId == this->fields.forceId && routeClass->fields.groupId == this->fields.groupId;
}


void __fastcall WarBoardAIManager___c__DisplayClass9_0___ctor(
        WarBoardAIManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c__DisplayClass9_0___StartAIPhase_b__0(
        WarBoardAIManager___c__DisplayClass9_0_o *this,
        WarBoardAI_o *x,
        const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  if ( !x || (routeClass = x->fields.routeClass) == 0LL )
    sub_1B8880C(this, x);
  return routeClass->fields.forceId == this->fields.forceId && routeClass->fields.groupId == this->fields.groupId;
}