void __fastcall WarBoardAIManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_int__object__o *v10; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v13; // x19
  struct WarBoardAIManager_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_Dictionary_int__object__o *v17; // x19
  struct WarBoardAIManager_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_Dictionary_int__object__o *v21; // x19
  struct WarBoardAIManager_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A2BB45 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__, v1);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__, v2);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__, v4);
    sub_1B761C0(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo, v5);
    sub_1B761C0(&System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo, v6);
    sub_1B761C0(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo, v7);
    sub_1B761C0(&System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo, v8);
    sub_1B761C0(&WarBoardAIManager_TypeInfo, v9);
    byte_4A2BB45 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B7640C(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_314EEA0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v10;
  sub_1B76164((ServantStatusBattleListViewItem_o *)WarBoardAIManager_TypeInfo->static_fields, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B7640C(System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v13,
    (const MethodInfo_31DDFC4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
  static_fields = WarBoardAIManager_TypeInfo->static_fields;
  static_fields->dicUniqueIndexPiece = (struct System_Collections_Generic_Dictionary_uint__WarBoardPieceData__o *)v13;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->dicUniqueIndexPiece, (int32_t)v13, v15, v16);
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B7640C(System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v17,
    (const MethodInfo_314EEA0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
  v18 = WarBoardAIManager_TypeInfo->static_fields;
  v18->dicIndexSquare = (struct System_Collections_Generic_Dictionary_int__WarBoardSquareData__o *)v17;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v18->dicIndexSquare, (int32_t)v17, v19, v20);
  v21 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B7640C(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v21,
    (const MethodInfo_314EEA0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  v22 = WarBoardAIManager_TypeInfo->static_fields;
  v22->dicIndexItem = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v21;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v22->dicIndexItem, (int32_t)v21, v23, v24);
}


void __fastcall WarBoardAIManager___ctor(WarBoardAIManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A2BB44 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_WarBoardAI___ctor__, method);
    sub_1B761C0(&System_Collections_Generic_List_WarBoardAI__TypeInfo, v3);
    byte_4A2BB44 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_WarBoardAI__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_WarBoardAI___ctor__);
  this->fields.warBoardAIList = (struct System_Collections_Generic_List_WarBoardAI__o *)v4;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v5, v6);
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

  if ( (byte_4A2BB36 & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4A2BB36 = 1;
  }
  this->fields.exec = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        sub_1B76424(Instance, v4);
      Instance = *(Il2CppObject **)(v6 + 8LL * (int)v8 + 32);
      if ( !Instance )
        break;
      WarBoardPieceData__ClearPrevAiRoute((WarBoardPieceData_o *)Instance, 0LL);
      v7 = *(_DWORD *)(v6 + 24);
      if ( (int)++v8 >= v7 )
        return;
    }
LABEL_12:
    sub_1B7641C(Instance, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIManager__AddReinforcementsAI(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x24
  WarBoardAIRoute_o *klass; // x0
  __int64 v16; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v18; // x22
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x3

  if ( (byte_4A2BB42 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, *(_QWORD *)&forceId);
    sub_1B761C0(&System_Func_WarBoardAI__bool__TypeInfo, v11);
    sub_1B761C0(&Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__, v12);
    sub_1B761C0(&WarBoardAIManager___c__DisplayClass28_0_TypeInfo, v13);
    byte_4A2BB42 = 1;
  }
  v14 = sub_1B7640C(WarBoardAIManager___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_DWORD *)(v14 + 16) = forceId;
  *(_DWORD *)(v14 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v18 = (System_Func_object__bool__o *)sub_1B7640C(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v14,
    Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__FirstOrDefault_object__48787792(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_2E87150 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v19 )
  {
    klass = (WarBoardAIRoute_o *)v19[1].klass;
    if ( klass )
    {
      WarBoardAIRoute__AddPiecePersonalityDic(klass, aiId, pieceIndex, v20);
      return;
    }
LABEL_8:
    sub_1B7641C(klass, v16);
  }
}


void __fastcall WarBoardAIManager__CreateAI(
        WarBoardAIManager_o *this,
        WarBoardStageNpcEntity_o *npc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WarBoardAI_o *v6; // x19
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_List_object__o *warBoardAIList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8

  if ( (byte_4A2BB35 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_WarBoardAI__Add__, npc);
    sub_1B761C0(&WarBoardAI_TypeInfo, v5);
    byte_4A2BB35 = 1;
  }
  v6 = (WarBoardAI_o *)sub_1B7640C(WarBoardAI_TypeInfo);
  WarBoardAI___ctor(v6, npc, v7);
  warBoardAIList = (System_Collections_Generic_List_object__o *)this->fields.warBoardAIList;
  if ( !warBoardAIList
    || (items = warBoardAIList->fields._items,
        v13 = Method_System_Collections_Generic_List_WarBoardAI__Add__,
        ++warBoardAIList->fields._version,
        !items) )
  {
    sub_1B7641C(warBoardAIList, v8);
  }
  size = warBoardAIList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      warBoardAIList,
      (Il2CppObject *)v6,
      *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    warBoardAIList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v6;
    sub_1B76164((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v9, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall WarBoardAIManager__Execute(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A2BB3A & 1) == 0 )
  {
    sub_1B761C0(&WarBoardAIManager__Execute_d__12_TypeInfo, *(_QWORD *)&forceId);
    byte_4A2BB3A = 1;
  }
  v7 = sub_1B7640C(WarBoardAIManager__Execute_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 32) = forceId;
  *(_DWORD *)(v7 + 36) = groupId;
  return (System_Collections_IEnumerator_o *)v7;
}


float __fastcall WarBoardAIManager__GetBreakPoint(WarBoardPieceData_o *piece, const MethodInfo *method)
{
  if ( !piece )
    sub_1B7641C(0LL, method);
  return (float)(piece->fields._breakPoint_k__BackingField + 1)
       / (float)(piece->fields._breakPointMax_k__BackingField + 1);
}


System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *__fastcall WarBoardAIManager__GetEnemyPiece(
        const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardAIManager_c *v2; // x0

  if ( (byte_4A2BB3C & 1) == 0 )
  {
    sub_1B761C0(&WarBoardAIManager_TypeInfo, v1);
    byte_4A2BB3C = 1;
  }
  v2 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v2 = WarBoardAIManager_TypeInfo;
  }
  return v2->static_fields->dicSquareIndexEnemyPiece;
}


WarBoardPieceData_o *__fastcall WarBoardAIManager__GetEnemyPieceSquareIndex(
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardAIManager_c *v4; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexEnemyPiece; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A2BB3D & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__, method);
    sub_1B761C0(&WarBoardAIManager_TypeInfo, v3);
    byte_4A2BB3D = 1;
  }
  v4 = WarBoardAIManager_TypeInfo;
  value = 0LL;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v4 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v4->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    sub_1B7641C(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicSquareIndexEnemyPiece,
         squareIndex,
         &value,
         (const MethodInfo_3151000 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__) )
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
  __int64 v3; // x1
  WarBoardAIManager_c *v4; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicIndexItem; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A2BB40 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__, method);
    sub_1B761C0(&WarBoardAIManager_TypeInfo, v3);
    byte_4A2BB40 = 1;
  }
  v4 = WarBoardAIManager_TypeInfo;
  value = 0LL;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v4 = WarBoardAIManager_TypeInfo;
  }
  dicIndexItem = (System_Collections_Generic_Dictionary_int__object__o *)v4->static_fields->dicIndexItem;
  if ( !dicIndexItem )
    sub_1B7641C(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicIndexItem,
         squareIndex,
         &value,
         (const MethodInfo_3151000 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__) )
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
  __int64 v3; // x1
  WarBoardAIManager_c *v4; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicUniqueIndexPiece; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A2BB3E & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__, method);
    sub_1B761C0(&WarBoardAIManager_TypeInfo, v3);
    byte_4A2BB3E = 1;
  }
  v4 = WarBoardAIManager_TypeInfo;
  value = 0LL;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v4 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v4->static_fields->dicUniqueIndexPiece;
  if ( !dicUniqueIndexPiece )
    sub_1B7641C(0LL, method);
  if ( System_Collections_Generic_Dictionary_uint__object___TryGetValue(
         dicUniqueIndexPiece,
         uniqueIndex,
         &value,
         (const MethodInfo_31E0124 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__) )
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
  __int64 v3; // x1
  WarBoardAIManager_c *v4; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicIndexSquare; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A2BB3F & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__, method);
    sub_1B761C0(&WarBoardAIManager_TypeInfo, v3);
    byte_4A2BB3F = 1;
  }
  v4 = WarBoardAIManager_TypeInfo;
  value = 0LL;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v4 = WarBoardAIManager_TypeInfo;
  }
  dicIndexSquare = (System_Collections_Generic_Dictionary_int__object__o *)v4->static_fields->dicIndexSquare;
  if ( !dicIndexSquare )
    sub_1B7641C(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicIndexSquare,
         squareIndex,
         &value,
         (const MethodInfo_3151000 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__) )
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x8
  int32_t size; // w2
  int v11; // w9
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4A2BB34 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__, npcList);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__get_Current__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_WarBoardAI__Clear__, v7);
    this = (WarBoardAIManager_o *)sub_1B761C0(
                                    &Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__,
                                    v8);
    byte_4A2BB34 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  warBoardAIList = v4->fields.warBoardAIList;
  if ( !warBoardAIList )
    goto LABEL_15;
  size = warBoardAIList->fields._size;
  v11 = warBoardAIList->fields._version + 1;
  warBoardAIList->fields._size = 0;
  warBoardAIList->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)warBoardAIList->fields._items, 0, size, 0LL);
  if ( !npcList )
LABEL_15:
    sub_1B7641C(this, npcList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)npcList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    if ( !v12 )
      break;
    if ( !v15.fields._current )
      sub_1B7641C(v12, v13);
    if ( HIDWORD(v15.fields._current[1].klass) || LODWORD(v15.fields._current[1].monitor) )
      WarBoardAIManager__CreateAI(v4, (WarBoardStageNpcEntity_o *)v15.fields._current, v14);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
}


bool __fastcall WarBoardAIManager__IsAllyPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_1B7641C(one, two);
  return one->fields._forceId_k__BackingField == two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEnemyBlock(int32_t squareIndex, const MethodInfo *method)
{
  if ( (byte_4A2BB41 & 1) == 0 )
  {
    sub_1B761C0(&WarBoardAIManager_TypeInfo, method);
    byte_4A2BB41 = 1;
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
    sub_1B7641C(one, two);
  return one->fields._forceId_k__BackingField != two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEqualPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_1B7641C(one, two);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIManager__StartAIPhase(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v15; // x22
  Il2CppObject *v16; // x0
  const MethodInfo *v17; // x3

  if ( (byte_4A2BB38 & 1) == 0 )
  {
    sub_1B761C0(&AStarSearch_TypeInfo, *(_QWORD *)&forceId);
    sub_1B761C0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, v7);
    sub_1B761C0(&System_Func_WarBoardAI__bool__TypeInfo, v8);
    sub_1B761C0(&Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__, v9);
    sub_1B761C0(&WarBoardAIManager___c__DisplayClass9_0_TypeInfo, v10);
    byte_4A2BB38 = 1;
  }
  v11 = sub_1B7640C(WarBoardAIManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B7641C(v12, v13);
  *(_DWORD *)(v11 + 16) = forceId;
  *(_DWORD *)(v11 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v15 = (System_Func_object__bool__o *)sub_1B7640C(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__48787792(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_2E87150 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v16 )
  {
    this->fields.exec = 1;
    LOBYTE(v16[2].klass) = 0;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    AStarSearch__DetourCacheClear(0LL);
    WarBoardAIManager__StartThink(this, *(_DWORD *)(v11 + 16), *(_DWORD *)(v11 + 20), v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIManager__StartThink(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x20
  WarBoardAIRoute_o *klass; // x0
  const MethodInfo *v22; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v24; // x22
  Il2CppObject *v25; // x0
  WarBoardAIManager_c *v26; // x0
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  WarBoardAIRoute_AIRouteMasterData_c *v28; // x24
  int namespaze; // w8
  unsigned int v30; // w25
  __int64 v31; // x21
  WarBoardAIManager_c *v32; // x0
  WarBoardAIManager_c *v33; // x0
  WarBoardAIManager_c *v34; // x0
  struct WarBoardAIRoute_AIRouteMasterData_o *v35; // x8
  _DWORD *monitor; // x24
  int v37; // w8
  unsigned int v38; // w25
  __int64 v39; // x21
  WarBoardAIManager_c *v40; // x0
  const MethodInfo *v41; // x3
  struct WarBoardAIRoute_AIRouteMasterData_o *v42; // x8
  __int64 v43; // x23
  int v44; // w8
  unsigned int v45; // w24
  __int64 v46; // x21
  struct System_Collections_IEnumerator_o *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3

  if ( (byte_4A2BB39 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__, *(_QWORD *)&forceId);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__, v12);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__, v13);
    sub_1B761C0(&Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___, v14);
    sub_1B761C0(&System_Func_WarBoardAI__bool__TypeInfo, v15);
    sub_1B761C0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    sub_1B761C0(&Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__, v17);
    sub_1B761C0(&WarBoardAIManager___c__DisplayClass11_0_TypeInfo, v18);
    sub_1B761C0(&WarBoardAIManager_TypeInfo, v19);
    byte_4A2BB39 = 1;
  }
  v20 = sub_1B7640C(WarBoardAIManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_58;
  *(_DWORD *)(v20 + 16) = forceId;
  *(_DWORD *)(v20 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v24 = (System_Func_object__bool__o *)sub_1B7640C(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v20,
    Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__,
    0LL);
  v25 = System_Linq_Enumerable__SingleOrDefault_object__48860344(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_2E98CB8 *)Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
  if ( !v25 )
    return;
  this->fields.isPause = 0;
  klass = (WarBoardAIRoute_o *)v25[1].klass;
  if ( !klass )
    goto LABEL_58;
  WarBoardAIRoute__Clear(klass, v22);
  v26 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v26 = WarBoardAIManager_TypeInfo;
  }
  klass = (WarBoardAIRoute_o *)v26->static_fields->dicUniqueIndexPiece;
  if ( !klass )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)klass,
    (const MethodInfo_31DEB20 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
  klass = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece;
  if ( !klass )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)klass,
    (const MethodInfo_314F9FC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
  klass = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !klass )
    goto LABEL_58;
  aiRouteMasterData = klass[1].fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    goto LABEL_58;
  v28 = aiRouteMasterData[1].klass;
  if ( !v28 )
    goto LABEL_58;
  namespaze = (int)v28->_1.namespaze;
  if ( namespaze >= 1 )
  {
    v30 = 0;
    while ( v30 < namespaze )
    {
      v31 = *((_QWORD *)&v28->_1.byval_arg.data + (int)v30);
      if ( !v31 )
        goto LABEL_58;
      if ( !*(_BYTE *)(v31 + 60) )
      {
        v32 = WarBoardAIManager_TypeInfo;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          v32 = WarBoardAIManager_TypeInfo;
        }
        klass = (WarBoardAIRoute_o *)v32->static_fields->dicUniqueIndexPiece;
        if ( !klass )
          goto LABEL_58;
        System_Collections_Generic_Dictionary_uint__object___Add(
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)klass,
          *(_DWORD *)(v31 + 44),
          (Il2CppObject *)v31,
          (const MethodInfo_31DE998 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
        if ( *(_DWORD *)(v31 + 20) != *(_DWORD *)(v20 + 16) )
        {
          v33 = WarBoardAIManager_TypeInfo;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            v33 = WarBoardAIManager_TypeInfo;
          }
          klass = (WarBoardAIRoute_o *)v33->static_fields->dicSquareIndexEnemyPiece;
          if ( !klass )
            goto LABEL_58;
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)klass,
            *(_DWORD *)(v31 + 64),
            (Il2CppObject *)v31,
            (const MethodInfo_314F874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
        }
      }
      namespaze = (int)v28->_1.namespaze;
      if ( (int)++v30 >= namespaze )
        goto LABEL_27;
    }
LABEL_59:
    sub_1B76424(klass, v22);
  }
LABEL_27:
  v34 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v34 = WarBoardAIManager_TypeInfo;
  }
  klass = (WarBoardAIRoute_o *)v34->static_fields->dicIndexSquare;
  if ( !klass )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)klass,
    (const MethodInfo_314F9FC *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
  klass = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !klass )
    goto LABEL_58;
  v35 = klass[1].fields.aiRouteMasterData;
  if ( !v35 )
    goto LABEL_58;
  monitor = v35[1].monitor;
  if ( !monitor )
    goto LABEL_58;
  v37 = monitor[6];
  if ( v37 >= 1 )
  {
    v38 = 0;
    while ( v38 < v37 )
    {
      klass = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      v39 = *(_QWORD *)&monitor[2 * v38 + 8];
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        klass = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v39 )
        goto LABEL_58;
      klass = (WarBoardAIRoute_o *)klass->fields.dicUniqueKeyTarget->fields._buckets;
      if ( !klass )
        goto LABEL_58;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)klass,
        *(_DWORD *)(v39 + 16),
        (Il2CppObject *)v39,
        (const MethodInfo_314F874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
      v37 = monitor[6];
      if ( (int)++v38 >= v37 )
        goto LABEL_41;
    }
    goto LABEL_59;
  }
LABEL_41:
  v40 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v40 = WarBoardAIManager_TypeInfo;
  }
  klass = (WarBoardAIRoute_o *)v40->static_fields->dicIndexItem;
  if ( !klass
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)klass,
          (const MethodInfo_314F9FC *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__),
        (klass = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v42 = klass[1].fields.aiRouteMasterData) == 0LL
    || (v43 = *(_QWORD *)&v42[1].fields.masterUniqueIndex) == 0 )
  {
LABEL_58:
    sub_1B7641C(klass, v22);
  }
  v44 = *(_DWORD *)(v43 + 24);
  if ( v44 >= 1 )
  {
    v45 = 0;
    while ( v45 < v44 )
    {
      klass = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      v46 = *(_QWORD *)(v43 + 8LL * (int)v45 + 32);
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        klass = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v46 )
        goto LABEL_58;
      klass = (WarBoardAIRoute_o *)klass->fields.dicUniqueKeyTarget->fields._entries;
      if ( !klass )
        goto LABEL_58;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)klass,
        *(_DWORD *)(v46 + 16),
        (Il2CppObject *)v46,
        (const MethodInfo_314F874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
      v44 = *(_DWORD *)(v43 + 24);
      if ( (int)++v45 >= v44 )
        goto LABEL_55;
    }
    goto LABEL_59;
  }
LABEL_55:
  if ( !this->fields.executeTask )
  {
    v47 = WarBoardAIManager__Execute(this, *(_DWORD *)(v20 + 16), *(_DWORD *)(v20 + 20), v41);
    this->fields.executeTask = v47;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.executeTask, (int32_t)v47, v48, v49);
  }
}


void __fastcall WarBoardAIManager__Update(WarBoardAIManager_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_executeTask; // x19
  System_Collections_IEnumerator_o *v4; // x20
  struct System_Collections_IEnumerator_o *executeTask; // t1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A2BB3B & 1) == 0 )
  {
    sub_1B761C0(&WarBoardManager_TypeInfo, method);
    byte_4A2BB3B = 1;
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
      sub_1B76164(p_executeTask, 0, v6, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIManager__UpdateAiId(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x24
  WarBoardAIRoute_o *klass; // x0
  __int64 v16; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v18; // x22
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x3

  if ( (byte_4A2BB43 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, *(_QWORD *)&forceId);
    sub_1B761C0(&System_Func_WarBoardAI__bool__TypeInfo, v11);
    sub_1B761C0(&Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__, v12);
    sub_1B761C0(&WarBoardAIManager___c__DisplayClass29_0_TypeInfo, v13);
    byte_4A2BB43 = 1;
  }
  v14 = sub_1B7640C(WarBoardAIManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_DWORD *)(v14 + 16) = forceId;
  *(_DWORD *)(v14 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v18 = (System_Func_object__bool__o *)sub_1B7640C(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v14,
    Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__FirstOrDefault_object__48787792(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_2E87150 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v19 )
  {
    klass = (WarBoardAIRoute_o *)v19[1].klass;
    if ( klass )
    {
      WarBoardAIRoute__UpdatePiecePersonalityDic(klass, aiId, pieceIndex, v20);
      return;
    }
LABEL_8:
    sub_1B7641C(klass, v16);
  }
}


System_Collections_IEnumerator_o *__fastcall WarBoardAIManager__Wait(
        WarBoardAIManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A2BB37 & 1) == 0 )
  {
    sub_1B761C0(&WarBoardAIManager__Wait_d__8_TypeInfo, method);
    byte_4A2BB37 = 1;
  }
  v3 = sub_1B7640C(WarBoardAIManager__Wait_d__8_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  WarBoardAIManager_o *_4__this; // x20
  Il2CppObject *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *_8__1; // x21
  System_Collections_Generic_IEnumerable_TSource__o *warBoardAIList; // x22
  System_Func_object__bool__o *v32; // x23
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  struct WarBoardAIManager___c__DisplayClass12_0_o *v36; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v37; // x22
  System_Func_object__bool__o *_9__2; // x24
  WarBoardAIManager__Execute_d__12_o *v39; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_Object_array *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  WarBoardAIManager___c_c *v46; // x0
  System_Collections_Generic_IEnumerable_T__o *actPieces_5__4; // x21
  System_Action_object__o *_9__12_3; // x22
  Il2CppObject *v49; // x23
  struct WarBoardAIManager___c_StaticFields *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  DefenseAreaData_c *v53; // x0
  System_Collections_IEnumerator_o *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  WarBoardAIManager___c_c *v57; // x0
  System_Func_bool__o *_9__12_1; // x20
  Il2CppObject *v59; // x21
  struct WarBoardAIManager___c_StaticFields *static_fields; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  UnityEngine_WaitWhile_o *v63; // x21
  ServantStatusBattleListViewItem_o *v64; // x19
  int32_t v65; // w2
  int32_t v66; // w3
  bool result; // w0
  struct System_Collections_IEnumerator_o *v68; // x21
  System_Collections_IEnumerator_c *v69; // x8
  __int64 v70; // x9
  System_Collections_IEnumerator_c **v71; // x10
  __int64 v72; // x0
  __int64 v73; // x0
  struct System_Collections_IEnumerator_o *v74; // x22
  System_Collections_IEnumerator_c *v75; // x8
  WarBoardAIManager__Execute_d__12_o *v76; // x21
  __int64 v77; // x9
  System_Collections_IEnumerator_c **v78; // x10
  __int64 v79; // x0
  WarBoardAIManager__Execute_d__12_o *v80; // x22
  int32_t v81; // w0
  int32_t v82; // w2
  int32_t v83; // w3
  System_Collections_IEnumerator_o **p_enumeratorChild_5__7; // x21
  System_Collections_IEnumerator_o *v85; // x22
  int32_t v86; // w2
  int32_t v87; // w3
  float realtimeSinceStartup; // s0
  Il2CppObject **p__2__current; // x19
  int32_t v90; // w2
  int32_t v91; // w3
  int v92; // w8
  struct System_Collections_IEnumerator_o *exe_5__5; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v95; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  WarBoardAIManager___c_c *v98; // x0
  System_Collections_Generic_IEnumerable_T__o *v99; // x21
  System_Action_object__o *_9__12_4; // x22
  Il2CppObject *v101; // x23
  struct WarBoardAIManager___c_StaticFields *v102; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  struct WarBoardAI_o *ai_5__2; // x8
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  struct WarBoardAI_o *v108; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v109; // x8
  int32_t v110; // w2
  int32_t v111; // w3
  struct System_Collections_IEnumerator_o *v112; // x21
  System_Collections_IEnumerator_c *v113; // x8
  __int64 v114; // x9
  System_Collections_IEnumerator_c **v115; // x10
  __int64 v116; // x0
  float v117; // s0
  int32_t v118; // w2
  int32_t v119; // w3
  System_Collections_IEnumerator_o *v120; // x0
  int32_t v121; // w2
  int32_t v122; // w3
  WarBoardAIManager__Execute_d__12_o *v123; // x0
  const MethodInfo *v124; // x1

  v4 = this;
  if ( (byte_4A2BB48 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_WarBoardPieceData__TypeInfo, method);
    sub_1B761C0(&Method_BasicHelper_ForEach_WarBoardPieceData___, v5);
    sub_1B761C0(&bool_TypeInfo, v6);
    sub_1B761C0(&DefenseAreaData_TypeInfo, v7);
    sub_1B761C0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, v8);
    sub_1B761C0(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, v9);
    sub_1B761C0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v10);
    sub_1B761C0(&System_Func_bool__TypeInfo, v11);
    sub_1B761C0(&System_Func_WarBoardAI__bool__TypeInfo, v12);
    sub_1B761C0(&System_Func_WarBoardPieceData__bool__TypeInfo, v13);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B761C0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    sub_1B761C0(&Method_WarBoardAIManager___c__Execute_b__12_1__, v17);
    sub_1B761C0(&Method_WarBoardAIManager___c__Execute_b__12_3__, v18);
    sub_1B761C0(&Method_WarBoardAIManager___c__Execute_b__12_4__, v19);
    sub_1B761C0(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__, v20);
    sub_1B761C0(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__, v21);
    sub_1B761C0(&WarBoardAIManager___c__DisplayClass12_0_TypeInfo, v22);
    sub_1B761C0(&WarBoardAIManager___c_TypeInfo, v23);
    sub_1B761C0(&UnityEngine_WaitWhile_TypeInfo, v24);
    this = (WarBoardAIManager__Execute_d__12_o *)sub_1B761C0(&WarBoardManager_TypeInfo, v25);
    byte_4A2BB48 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v27 = (Il2CppObject *)sub_1B7640C(WarBoardAIManager___c__DisplayClass12_0_TypeInfo);
      System_Object___ctor(v27, 0LL);
      v4->fields.__8__1 = (struct WarBoardAIManager___c__DisplayClass12_0_o *)v27;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v27, v28, v29);
      _8__1 = (Il2CppObject *)v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_123;
      _8__1[1].klass = *(Il2CppClass **)&v4->fields.forceId;
      if ( !_4__this )
        goto LABEL_123;
      warBoardAIList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.warBoardAIList;
      v32 = (System_Func_object__bool__o *)sub_1B7640C(System_Func_WarBoardAI__bool__TypeInfo);
      System_Func_object__bool____ctor(v32, _8__1, Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__, 0LL);
      v33 = System_Linq_Enumerable__FirstOrDefault_object__48787792(
              warBoardAIList,
              (System_Func_TSource__bool__o *)v32,
              (const MethodInfo_2E87150 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
      v4->fields._ai_5__2 = (struct WarBoardAI_o *)v33;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._ai_5__2, (int32_t)v33, v34, v35);
      if ( !v4->fields._ai_5__2 )
        return 0;
      goto LABEL_102;
    case 1:
      v36 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v36 || !_4__this )
        goto LABEL_123;
      WarBoardAIManager__StartThink(_4__this, v36->fields.forceId, v36->fields.groupId, v3);
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
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
        if ( this )
        {
          if ( WarBoardData__IsWin((WarBoardData_o *)this, 0LL) )
            return 0;
          this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !this )
            goto LABEL_123;
          this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
          if ( !this )
            goto LABEL_123;
          this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__IsLose((WarBoardData_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 0;
          v108 = v4->fields._ai_5__2;
          if ( v108 )
          {
            if ( !v108->fields.isEndRoute )
            {
              v4->fields.__2__current = 0LL;
              p__2__current = &v4->fields.__2__current;
              sub_1B76164((ServantStatusBattleListViewItem_o *)p__2__current, 0, v106, (int32_t)v107);
              v92 = 5;
              goto LABEL_65;
            }
            v109 = v4->fields.__8__1;
            if ( v109 )
            {
              WarBoardAIManager__StartThink(_4__this, v109->fields.forceId, v109->fields.groupId, v107);
              goto LABEL_101;
            }
          }
        }
      }
LABEL_123:
      sub_1B7641C(this, method);
    }
    do
    {
LABEL_101:
      v4->fields._actPieces_5__4 = 0LL;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._actPieces_5__4, 0, v2, (int32_t)v3);
      v4->fields._exe_5__5 = 0LL;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._exe_5__5, 0, v110, v111);
LABEL_102:
      if ( !_4__this->fields.exec )
        return 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_123;
      if ( WarBoardManager__HasSchedule((WarBoardManager_o *)this, 0LL) )
      {
        v57 = WarBoardAIManager___c_TypeInfo;
        if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
          v57 = WarBoardAIManager___c_TypeInfo;
        }
        _9__12_1 = v57->static_fields->__9__12_1;
        if ( !_9__12_1 )
        {
          if ( !v57->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v57);
            v57 = WarBoardAIManager___c_TypeInfo;
          }
          v59 = (Il2CppObject *)v57->static_fields->__9;
          _9__12_1 = (System_Func_bool__o *)sub_1B7640C(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(_9__12_1, v59, Method_WarBoardAIManager___c__Execute_b__12_1__, 0LL);
          static_fields = WarBoardAIManager___c_TypeInfo->static_fields;
          static_fields->__9__12_1 = _9__12_1;
          sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_1, (int32_t)_9__12_1, v61, v62);
        }
        v63 = (UnityEngine_WaitWhile_o *)sub_1B7640C(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v63, _9__12_1, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v63;
        v64 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B76164(v64, (int32_t)v63, v65, v66);
        result = 1;
        *(_DWORD *)&v64[-1].fields.isMine = 1;
        return result;
      }
LABEL_19:
      v4->fields._isNextPhase_5__3 = 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetLoadMode((CommonUI_o *)this, 10, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_123;
      this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
      if ( !this )
        goto LABEL_123;
      this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__GetAlivePieces((WarBoardData_o *)this, 0LL);
      v37 = v4->fields.__8__1;
      if ( !v37 )
        goto LABEL_123;
      _9__2 = (System_Func_object__bool__o *)v37->fields.__9__2;
      v39 = this;
      if ( !_9__2 )
      {
        _9__2 = (System_Func_object__bool__o *)sub_1B7640C(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__2,
          (Il2CppObject *)v37,
          Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__,
          0LL);
        v37->fields.__9__2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__2;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&v37->fields.__9__2, (int32_t)_9__2, v40, v41);
      }
      v42 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v39,
              (System_Func_TSource__bool__o *)_9__2,
              (const MethodInfo_2EA0B7C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      v43 = System_Linq_Enumerable__ToArray_object_(
              v42,
              (const MethodInfo_2E9AEA4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      v4->fields._actPieces_5__4 = (struct WarBoardPieceData_array *)v43;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._actPieces_5__4, (int32_t)v43, v44, v45);
      v46 = WarBoardAIManager___c_TypeInfo;
      actPieces_5__4 = (System_Collections_Generic_IEnumerable_T__o *)v4->fields._actPieces_5__4;
      if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v46 = WarBoardAIManager___c_TypeInfo;
      }
      _9__12_3 = (System_Action_object__o *)v46->static_fields->__9__12_3;
      if ( !_9__12_3 )
      {
        if ( !v46->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v46);
          v46 = WarBoardAIManager___c_TypeInfo;
        }
        v49 = (Il2CppObject *)v46->static_fields->__9;
        _9__12_3 = (System_Action_object__o *)sub_1B7640C(System_Action_WarBoardPieceData__TypeInfo);
        System_Action_object____ctor(_9__12_3, v49, Method_WarBoardAIManager___c__Execute_b__12_3__, 0LL);
        v50 = WarBoardAIManager___c_TypeInfo->static_fields;
        v50->__9__12_3 = (struct System_Action_WarBoardPieceData__o *)_9__12_3;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&v50->__9__12_3, (int32_t)_9__12_3, v51, v52);
      }
      BasicHelper__ForEach_object_(
        actPieces_5__4,
        (System_Action_T__o *)_9__12_3,
        (const MethodInfo_2E4F7C0 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      v53 = DefenseAreaData_TypeInfo;
      if ( !DefenseAreaData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DefenseAreaData_TypeInfo);
      DefenseAreaData__ClearCache((const MethodInfo *)v53);
      this = (WarBoardAIManager__Execute_d__12_o *)v4->fields._ai_5__2;
      if ( !this )
        goto LABEL_123;
      v54 = WarBoardAI__Think((WarBoardAI_o *)this, method);
      v4->fields._exe_5__5 = v54;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._exe_5__5, (int32_t)v54, v55, v56);
      v4->fields._prevTime_5__6 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      while ( 1 )
      {
LABEL_68:
        exe_5__5 = v4->fields._exe_5__5;
        if ( !exe_5__5 )
          goto LABEL_123;
        klass = exe_5__5->klass;
        v95 = *(unsigned __int16 *)(&exe_5__5->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&exe_5__5->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v95;
            p_offset += 4;
            if ( !v95 )
              goto LABEL_73;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_73:
          p_method = sub_1BC81A0(v4->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                       exe_5__5,
                                                       *(_QWORD *)(p_method + 8));
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_76;
        v68 = v4->fields._exe_5__5;
        if ( !v68 )
          goto LABEL_123;
        v69 = v68->klass;
        v70 = *(unsigned __int16 *)(&v68->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v68->klass->_2.bitflags2 + 3) )
        {
          v71 = (System_Collections_IEnumerator_c **)&v69->_1.interfaceOffsets->offset;
          while ( *(v71 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v70;
            v71 += 2;
            if ( !v70 )
              goto LABEL_48;
          }
          v72 = (__int64)&v69->vtable[*(_DWORD *)v71 + 1].method;
        }
        else
        {
LABEL_48:
          v72 = sub_1BC81A0(v4->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v73 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v72)(
                v68,
                *(_QWORD *)(v72 + 8));
        this = (WarBoardAIManager__Execute_d__12_o *)sub_1B762FC(v73, System_Collections_IEnumerator_TypeInfo);
        v74 = v4->fields._exe_5__5;
        if ( !v74 )
          goto LABEL_123;
        v75 = v74->klass;
        v76 = this;
        v77 = *(unsigned __int16 *)(&v74->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v74->klass->_2.bitflags2 + 3) )
        {
          v78 = (System_Collections_IEnumerator_c **)&v75->_1.interfaceOffsets->offset;
          while ( *(v78 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v77;
            v78 += 2;
            if ( !v77 )
              goto LABEL_55;
          }
          v79 = (__int64)&v75->vtable[*(_DWORD *)v78 + 1].method;
        }
        else
        {
LABEL_55:
          v79 = sub_1BC81A0(v4->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v79)(
                                                       v74,
                                                       *(_QWORD *)(v79 + 8));
        v80 = this;
        if ( v76 )
        {
          v4->fields._enumeratorChild_5__7 = (struct System_Collections_IEnumerator_o *)sub_1B762FC(
                                                                                          this,
                                                                                          System_Collections_IEnumerator_TypeInfo);
          v81 = sub_1B762FC(v80, System_Collections_IEnumerator_TypeInfo);
          sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._enumeratorChild_5__7, v81, v82, v83);
LABEL_59:
          p_enumeratorChild_5__7 = &v4->fields._enumeratorChild_5__7;
          while ( 1 )
          {
            v85 = *p_enumeratorChild_5__7;
            if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
            if ( !WarBoardManager__IEnumeratorExecute(v85, 0LL) )
              break;
            if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v4->fields._prevTime_5__6) >= 0.1 )
            {
              realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
              v4->fields.__2__current = 0LL;
              p__2__current = &v4->fields.__2__current;
              *((float *)p__2__current + 16) = realtimeSinceStartup;
              sub_1B76164((ServantStatusBattleListViewItem_o *)p__2__current, 0, v90, v91);
              v92 = 2;
              goto LABEL_65;
            }
          }
          *p_enumeratorChild_5__7 = 0LL;
          sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._enumeratorChild_5__7, 0, v86, v87);
          goto LABEL_67;
        }
        if ( this && (System_Boolean_c *)this->klass == bool_TypeInfo )
          break;
LABEL_67:
        if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v4->fields._prevTime_5__6) >= 0.1 )
        {
          v117 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          v4->fields.__2__current = 0LL;
          p__2__current = &v4->fields.__2__current;
          *((float *)p__2__current + 16) = v117;
          sub_1B76164((ServantStatusBattleListViewItem_o *)p__2__current, 0, v118, v119);
          v92 = 3;
          goto LABEL_65;
        }
      }
      v112 = v4->fields._exe_5__5;
      if ( !v112 )
        goto LABEL_123;
      v113 = v112->klass;
      v114 = *(unsigned __int16 *)(&v112->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v112->klass->_2.bitflags2 + 3) )
      {
        v115 = (System_Collections_IEnumerator_c **)&v113->_1.interfaceOffsets->offset;
        while ( *(v115 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v114;
          v115 += 2;
          if ( !v114 )
            goto LABEL_111;
        }
        v116 = (__int64)&v113->vtable[*(_DWORD *)v115 + 1].method;
      }
      else
      {
LABEL_111:
        v116 = sub_1BC81A0(v4->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v116)(
                                                     v112,
                                                     *(_QWORD *)(v116 + 8));
      if ( !this )
        goto LABEL_123;
      if ( this->klass->_1.element_class != bool_TypeInfo->_1.element_class )
      {
        sub_1B766DC(this);
        return (unsigned __int8)WarBoardAIManager__Execute_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                  v123,
                                  v124);
      }
      v4->fields._isNextPhase_5__3 = *(_BYTE *)j_il2cpp_object_unbox_0();
LABEL_76:
      v98 = WarBoardAIManager___c_TypeInfo;
      v99 = (System_Collections_Generic_IEnumerable_T__o *)v4->fields._actPieces_5__4;
      if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v98 = WarBoardAIManager___c_TypeInfo;
      }
      _9__12_4 = (System_Action_object__o *)v98->static_fields->__9__12_4;
      if ( !_9__12_4 )
      {
        if ( !v98->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v98);
          v98 = WarBoardAIManager___c_TypeInfo;
        }
        v101 = (Il2CppObject *)v98->static_fields->__9;
        _9__12_4 = (System_Action_object__o *)sub_1B7640C(System_Action_WarBoardPieceData__TypeInfo);
        System_Action_object____ctor(_9__12_4, v101, Method_WarBoardAIManager___c__Execute_b__12_4__, 0LL);
        v102 = WarBoardAIManager___c_TypeInfo->static_fields;
        v102->__9__12_4 = (struct System_Action_WarBoardPieceData__o *)_9__12_4;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&v102->__9__12_4, (int32_t)_9__12_4, v103, v104);
      }
      BasicHelper__ForEach_object_(
        v99,
        (System_Action_T__o *)_9__12_4,
        (const MethodInfo_2E4F7C0 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( v4->fields._isNextPhase_5__3 )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v120 = WarBoardAIManager__Wait(_4__this, method);
  v4->fields.__2__current = (Il2CppObject *)v120;
  p__2__current = &v4->fields.__2__current;
  sub_1B76164((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v120, v121, v122);
  v92 = 4;
LABEL_65:
  *((_DWORD *)p__2__current - 2) = v92;
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

  v2 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B7640C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B761D4(&Method_WarBoardAIManager__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_1B762E8(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v8; // x21
  UnityEngine_WaitWhile_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w8

  if ( (byte_4A2BB49 & 1) == 0 )
  {
    sub_1B761C0(&System_Func_bool__TypeInfo, method);
    sub_1B761C0(&UnityEngine_WaitWhile_TypeInfo, v3);
    sub_1B761C0(&Method_WarBoardAIManager__Wait_b__8_0__, v4);
    byte_4A2BB49 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v12 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v8 = (System_Func_bool__o *)sub_1B7640C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v8, _4__this, Method_WarBoardAIManager__Wait_b__8_0__, 0LL);
    v9 = (UnityEngine_WaitWhile_o *)sub_1B7640C(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v9, v8, 0LL);
    this->fields.__2__current = (Il2CppObject *)v9;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v9, v10, v11);
    v12 = 1;
    result = 1;
  }
  this->fields.__1__state = v12;
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

  v2 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B7640C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B761D4(&Method_WarBoardAIManager__Wait_d__8_System_Collections_IEnumerator_Reset__);
  sub_1B762E8(v3, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A2BB46 & 1) == 0 )
  {
    sub_1B761C0(&WarBoardAIManager___c_TypeInfo, v1);
    byte_4A2BB46 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(WarBoardAIManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardAIManager___c_TypeInfo->static_fields->__9 = (struct WarBoardAIManager___c_o *)v2;
  sub_1B76164((ServantStatusBattleListViewItem_o *)WarBoardAIManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall WarBoardAIManager___c___ctor(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c___Execute_b__12_1(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A2BB47 & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4A2BB47 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v3);
  return WarBoardManager__HasSchedule((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_3(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B7641C(this, 0LL);
  WarBoardPieceData__ActivateCacheMode(x, 1, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_4(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B7641C(this, 0LL);
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
    sub_1B7641C(this, x);
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
    sub_1B7641C(this, x);
  return routeClass->fields.forceId == this->fields.forceId && routeClass->fields.groupId == this->fields.groupId;
}


bool __fastcall WarBoardAIManager___c__DisplayClass12_0___Execute_b__2(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B7641C(this, 0LL);
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
    sub_1B7641C(this, x);
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
    sub_1B7641C(this, x);
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
    sub_1B7641C(this, x);
  return routeClass->fields.forceId == this->fields.forceId && routeClass->fields.groupId == this->fields.groupId;
}