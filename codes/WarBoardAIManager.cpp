void __fastcall WarBoardAIManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__object__o *v11; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v16; // x19
  struct WarBoardAIManager_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_Dictionary_int__object__o *v22; // x19
  struct WarBoardAIManager_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_Dictionary_int__object__o *v28; // x19
  struct WarBoardAIManager_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_49FA03B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo, v8);
    sub_1B640C8(&System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo, v9);
    sub_1B640C8(&WarBoardAIManager_TypeInfo, v10);
    byte_49FA03B = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                  v1,
                                                                  v2);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)WarBoardAIManager_TypeInfo->static_fields, (int32_t)v11, v12, v13);
  v16 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo,
                                                                   v14,
                                                                   v15);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v16,
    (const MethodInfo_31B175C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
  static_fields = WarBoardAIManager_TypeInfo->static_fields;
  static_fields->dicUniqueIndexPiece = (struct System_Collections_Generic_Dictionary_uint__WarBoardPieceData__o *)v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->dicUniqueIndexPiece, (int32_t)v16, v18, v19);
  v22 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo,
                                                                  v20,
                                                                  v21);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v22,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
  v23 = WarBoardAIManager_TypeInfo->static_fields;
  v23->dicIndexSquare = (struct System_Collections_Generic_Dictionary_int__WarBoardSquareData__o *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->dicIndexSquare, (int32_t)v22, v24, v25);
  v28 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo,
                                                                  v26,
                                                                  v27);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v28,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  v29 = WarBoardAIManager_TypeInfo->static_fields;
  v29->dicIndexItem = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v28;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v29->dicIndexItem, (int32_t)v28, v30, v31);
}


void __fastcall WarBoardAIManager___ctor(WarBoardAIManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FA03A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAI___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardAI__TypeInfo, v4);
    byte_49FA03A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_WarBoardAI__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardAI___ctor__);
  this->fields.warBoardAIList = (struct System_Collections_Generic_List_WarBoardAI__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
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

  if ( (byte_49FA02C & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49FA02C = 1;
  }
  this->fields.exec = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        sub_1B6432C(Instance, v4);
      Instance = *(Il2CppObject **)(v6 + 8LL * (int)v8 + 32);
      if ( !Instance )
        break;
      WarBoardPieceData__ClearPrevAiRoute((WarBoardPieceData_o *)Instance, 0LL);
      v7 = *(_DWORD *)(v6 + 24);
      if ( (int)++v8 >= v7 )
        return;
    }
LABEL_12:
    sub_1B64324(Instance);
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
  __int64 v17; // x2
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v19; // x22
  Il2CppObject *v20; // x0
  const MethodInfo *v21; // x3

  if ( (byte_49FA038 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, *(_QWORD *)&forceId);
    sub_1B640C8(&System_Func_WarBoardAI__bool__TypeInfo, v11);
    sub_1B640C8(&Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__, v12);
    sub_1B640C8(&WarBoardAIManager___c__DisplayClass28_0_TypeInfo, v13);
    byte_49FA038 = 1;
  }
  v14 = sub_1B64314(WarBoardAIManager___c__DisplayClass28_0_TypeInfo, *(_QWORD *)&forceId, *(_QWORD *)&groupId);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_DWORD *)(v14 + 16) = forceId;
  *(_DWORD *)(v14 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v19 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardAI__bool__TypeInfo, v16, v17);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v14,
    Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__,
    0LL);
  v20 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v20 )
  {
    klass = (WarBoardAIRoute_o *)v20[1].klass;
    if ( klass )
    {
      WarBoardAIRoute__AddPiecePersonalityDic(klass, aiId, pieceIndex, v21);
      return;
    }
LABEL_8:
    sub_1B64324(klass);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_object__o *warBoardAIList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_49FA02B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAI__Add__, npc);
    sub_1B640C8(&WarBoardAI_TypeInfo, v5);
    byte_49FA02B = 1;
  }
  v6 = (WarBoardAI_o *)sub_1B64314(WarBoardAI_TypeInfo, npc, method);
  WarBoardAI___ctor(v6, npc, v7);
  warBoardAIList = (System_Collections_Generic_List_object__o *)this->fields.warBoardAIList;
  if ( !warBoardAIList
    || (items = warBoardAIList->fields._items,
        v12 = Method_System_Collections_Generic_List_WarBoardAI__Add__,
        ++warBoardAIList->fields._version,
        !items) )
  {
    sub_1B64324(warBoardAIList);
  }
  size = warBoardAIList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      warBoardAIList,
      (Il2CppObject *)v6,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    warBoardAIList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v6;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v6, v8, v9);
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

  if ( (byte_49FA030 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAIManager__Execute_d__12_TypeInfo, *(_QWORD *)&forceId);
    byte_49FA030 = 1;
  }
  v7 = sub_1B64314(WarBoardAIManager__Execute_d__12_TypeInfo, *(_QWORD *)&forceId, *(_QWORD *)&groupId);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 32) = forceId;
  *(_DWORD *)(v7 + 36) = groupId;
  return (System_Collections_IEnumerator_o *)v7;
}


float __fastcall WarBoardAIManager__GetBreakPoint(WarBoardPieceData_o *piece, const MethodInfo *method)
{
  if ( !piece )
    sub_1B64324(0LL);
  return (float)(piece->fields._breakPoint_k__BackingField + 1)
       / (float)(piece->fields._breakPointMax_k__BackingField + 1);
}


System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *__fastcall WarBoardAIManager__GetEnemyPiece(
        const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardAIManager_c *v2; // x0

  if ( (byte_49FA032 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAIManager_TypeInfo, v1);
    byte_49FA032 = 1;
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

  if ( (byte_49FA033 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__, method);
    sub_1B640C8(&WarBoardAIManager_TypeInfo, v3);
    byte_49FA033 = 1;
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
    sub_1B64324(0LL);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicSquareIndexEnemyPiece,
         squareIndex,
         &value,
         (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__) )
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

  if ( (byte_49FA036 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__, method);
    sub_1B640C8(&WarBoardAIManager_TypeInfo, v3);
    byte_49FA036 = 1;
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
    sub_1B64324(0LL);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicIndexItem,
         squareIndex,
         &value,
         (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__) )
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

  if ( (byte_49FA034 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__, method);
    sub_1B640C8(&WarBoardAIManager_TypeInfo, v3);
    byte_49FA034 = 1;
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
    sub_1B64324(0LL);
  if ( System_Collections_Generic_Dictionary_uint__object___TryGetValue(
         dicUniqueIndexPiece,
         uniqueIndex,
         &value,
         (const MethodInfo_31B38BC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__) )
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

  if ( (byte_49FA035 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__, method);
    sub_1B640C8(&WarBoardAIManager_TypeInfo, v3);
    byte_49FA035 = 1;
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
    sub_1B64324(0LL);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicIndexSquare,
         squareIndex,
         &value,
         (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__) )
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
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_49FA02A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__, npcList);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAI__Clear__, v7);
    this = (WarBoardAIManager_o *)sub_1B640C8(
                                    &Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__,
                                    v8);
    byte_49FA02A = 1;
  }
  memset(&v14, 0, sizeof(v14));
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
    sub_1B64324(this);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)npcList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    if ( !v12 )
      break;
    if ( !v14.fields._current )
      sub_1B64324(v12);
    if ( HIDWORD(v14.fields._current[1].klass) || LODWORD(v14.fields._current[1].monitor) )
      WarBoardAIManager__CreateAI(v4, (WarBoardStageNpcEntity_o *)v14.fields._current, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
}


bool __fastcall WarBoardAIManager__IsAllyPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_1B64324(one);
  return one->fields._forceId_k__BackingField == two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEnemyBlock(int32_t squareIndex, const MethodInfo *method)
{
  if ( (byte_49FA037 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAIManager_TypeInfo, method);
    byte_49FA037 = 1;
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
    sub_1B64324(one);
  return one->fields._forceId_k__BackingField != two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEqualPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_1B64324(one);
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
  __int64 v14; // x2
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v16; // x22
  Il2CppObject *v17; // x0
  const MethodInfo *v18; // x3

  if ( (byte_49FA02E & 1) == 0 )
  {
    sub_1B640C8(&AStarSearch_TypeInfo, *(_QWORD *)&forceId);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, v7);
    sub_1B640C8(&System_Func_WarBoardAI__bool__TypeInfo, v8);
    sub_1B640C8(&Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__, v9);
    sub_1B640C8(&WarBoardAIManager___c__DisplayClass9_0_TypeInfo, v10);
    byte_49FA02E = 1;
  }
  v11 = sub_1B64314(WarBoardAIManager___c__DisplayClass9_0_TypeInfo, *(_QWORD *)&forceId, *(_QWORD *)&groupId);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  *(_DWORD *)(v11 + 16) = forceId;
  *(_DWORD *)(v11 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v16 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardAI__bool__TypeInfo, v13, v14);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__,
    0LL);
  v17 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v17 )
  {
    this->fields.exec = 1;
    LOBYTE(v17[2].klass) = 0;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    AStarSearch__DetourCacheClear(0LL);
    WarBoardAIManager__StartThink(this, *(_DWORD *)(v11 + 16), *(_DWORD *)(v11 + 20), v18);
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
  __int64 v22; // x1
  __int64 v23; // x2
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v25; // x22
  Il2CppObject *v26; // x0
  const MethodInfo *v27; // x1
  WarBoardAIManager_c *v28; // x0
  __int64 v29; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  WarBoardAIRoute_AIRouteMasterData_c *v31; // x24
  int namespaze; // w8
  unsigned int v33; // w25
  __int64 v34; // x21
  WarBoardAIManager_c *v35; // x0
  WarBoardAIManager_c *v36; // x0
  WarBoardAIManager_c *v37; // x0
  struct WarBoardAIRoute_AIRouteMasterData_o *v38; // x8
  _DWORD *monitor; // x24
  int v40; // w8
  unsigned int v41; // w25
  __int64 v42; // x21
  WarBoardAIManager_c *v43; // x0
  const MethodInfo *v44; // x3
  struct WarBoardAIRoute_AIRouteMasterData_o *v45; // x8
  __int64 v46; // x23
  int v47; // w8
  unsigned int v48; // w24
  __int64 v49; // x21
  struct System_Collections_IEnumerator_o *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3

  if ( (byte_49FA02F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__, *(_QWORD *)&forceId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__, v13);
    sub_1B640C8(&Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___, v14);
    sub_1B640C8(&System_Func_WarBoardAI__bool__TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    sub_1B640C8(&Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__, v17);
    sub_1B640C8(&WarBoardAIManager___c__DisplayClass11_0_TypeInfo, v18);
    sub_1B640C8(&WarBoardAIManager_TypeInfo, v19);
    byte_49FA02F = 1;
  }
  v20 = sub_1B64314(WarBoardAIManager___c__DisplayClass11_0_TypeInfo, *(_QWORD *)&forceId, *(_QWORD *)&groupId);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_58;
  *(_DWORD *)(v20 + 16) = forceId;
  *(_DWORD *)(v20 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v25 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardAI__bool__TypeInfo, v22, v23);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v20,
    Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__,
    0LL);
  v26 = System_Linq_Enumerable__SingleOrDefault_object__48689496(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_2E6F158 *)Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
  if ( !v26 )
    return;
  this->fields.isPause = 0;
  klass = (WarBoardAIRoute_o *)v26[1].klass;
  if ( !klass )
    goto LABEL_58;
  WarBoardAIRoute__Clear(klass, v27);
  v28 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v28 = WarBoardAIManager_TypeInfo;
  }
  klass = (WarBoardAIRoute_o *)v28->static_fields->dicUniqueIndexPiece;
  if ( !klass )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)klass,
    (const MethodInfo_31B22B8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
  klass = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece;
  if ( !klass )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)klass,
    (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
  klass = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !klass )
    goto LABEL_58;
  aiRouteMasterData = klass[1].fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    goto LABEL_58;
  v31 = aiRouteMasterData[1].klass;
  if ( !v31 )
    goto LABEL_58;
  namespaze = (int)v31->_1.namespaze;
  if ( namespaze >= 1 )
  {
    v33 = 0;
    while ( v33 < namespaze )
    {
      v34 = *((_QWORD *)&v31->_1.byval_arg.data + (int)v33);
      if ( !v34 )
        goto LABEL_58;
      if ( !*(_BYTE *)(v34 + 60) )
      {
        v35 = WarBoardAIManager_TypeInfo;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          v35 = WarBoardAIManager_TypeInfo;
        }
        klass = (WarBoardAIRoute_o *)v35->static_fields->dicUniqueIndexPiece;
        if ( !klass )
          goto LABEL_58;
        System_Collections_Generic_Dictionary_uint__object___Add(
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)klass,
          *(_DWORD *)(v34 + 44),
          (Il2CppObject *)v34,
          (const MethodInfo_31B2130 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
        if ( *(_DWORD *)(v34 + 20) != *(_DWORD *)(v20 + 16) )
        {
          v36 = WarBoardAIManager_TypeInfo;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            v36 = WarBoardAIManager_TypeInfo;
          }
          klass = (WarBoardAIRoute_o *)v36->static_fields->dicSquareIndexEnemyPiece;
          if ( !klass )
            goto LABEL_58;
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)klass,
            *(_DWORD *)(v34 + 64),
            (Il2CppObject *)v34,
            (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
        }
      }
      namespaze = (int)v31->_1.namespaze;
      if ( (int)++v33 >= namespaze )
        goto LABEL_27;
    }
LABEL_59:
    sub_1B6432C(klass, v29);
  }
LABEL_27:
  v37 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v37 = WarBoardAIManager_TypeInfo;
  }
  klass = (WarBoardAIRoute_o *)v37->static_fields->dicIndexSquare;
  if ( !klass )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)klass,
    (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
  klass = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !klass )
    goto LABEL_58;
  v38 = klass[1].fields.aiRouteMasterData;
  if ( !v38 )
    goto LABEL_58;
  monitor = v38[1].monitor;
  if ( !monitor )
    goto LABEL_58;
  v40 = monitor[6];
  if ( v40 >= 1 )
  {
    v41 = 0;
    while ( v41 < v40 )
    {
      klass = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      v42 = *(_QWORD *)&monitor[2 * v41 + 8];
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        klass = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v42 )
        goto LABEL_58;
      klass = (WarBoardAIRoute_o *)klass->fields.dicUniqueKeyTarget->fields._buckets;
      if ( !klass )
        goto LABEL_58;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)klass,
        *(_DWORD *)(v42 + 16),
        (Il2CppObject *)v42,
        (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
      v40 = monitor[6];
      if ( (int)++v41 >= v40 )
        goto LABEL_41;
    }
    goto LABEL_59;
  }
LABEL_41:
  v43 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v43 = WarBoardAIManager_TypeInfo;
  }
  klass = (WarBoardAIRoute_o *)v43->static_fields->dicIndexItem;
  if ( !klass
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)klass,
          (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__),
        (klass = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v45 = klass[1].fields.aiRouteMasterData) == 0LL
    || (v46 = *(_QWORD *)&v45[1].fields.masterUniqueIndex) == 0 )
  {
LABEL_58:
    sub_1B64324(klass);
  }
  v47 = *(_DWORD *)(v46 + 24);
  if ( v47 >= 1 )
  {
    v48 = 0;
    while ( v48 < v47 )
    {
      klass = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      v49 = *(_QWORD *)(v46 + 8LL * (int)v48 + 32);
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        klass = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v49 )
        goto LABEL_58;
      klass = (WarBoardAIRoute_o *)klass->fields.dicUniqueKeyTarget->fields._entries;
      if ( !klass )
        goto LABEL_58;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)klass,
        *(_DWORD *)(v49 + 16),
        (Il2CppObject *)v49,
        (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
      v47 = *(_DWORD *)(v46 + 24);
      if ( (int)++v48 >= v47 )
        goto LABEL_55;
    }
    goto LABEL_59;
  }
LABEL_55:
  if ( !this->fields.executeTask )
  {
    v50 = WarBoardAIManager__Execute(this, *(_DWORD *)(v20 + 16), *(_DWORD *)(v20 + 20), v44);
    this->fields.executeTask = v50;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.executeTask, (int32_t)v50, v51, v52);
  }
}


void __fastcall WarBoardAIManager__Update(WarBoardAIManager_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_executeTask; // x19
  System_Collections_IEnumerator_o *v4; // x20
  struct System_Collections_IEnumerator_o *executeTask; // t1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FA031 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardManager_TypeInfo, method);
    byte_49FA031 = 1;
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
      sub_1B6406C(p_executeTask, 0, v6, v7);
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
  __int64 v17; // x2
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v19; // x22
  Il2CppObject *v20; // x0
  const MethodInfo *v21; // x3

  if ( (byte_49FA039 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, *(_QWORD *)&forceId);
    sub_1B640C8(&System_Func_WarBoardAI__bool__TypeInfo, v11);
    sub_1B640C8(&Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__, v12);
    sub_1B640C8(&WarBoardAIManager___c__DisplayClass29_0_TypeInfo, v13);
    byte_49FA039 = 1;
  }
  v14 = sub_1B64314(WarBoardAIManager___c__DisplayClass29_0_TypeInfo, *(_QWORD *)&forceId, *(_QWORD *)&groupId);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_DWORD *)(v14 + 16) = forceId;
  *(_DWORD *)(v14 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v19 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardAI__bool__TypeInfo, v16, v17);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v14,
    Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__,
    0LL);
  v20 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v20 )
  {
    klass = (WarBoardAIRoute_o *)v20[1].klass;
    if ( klass )
    {
      WarBoardAIRoute__UpdatePiecePersonalityDic(klass, aiId, pieceIndex, v21);
      return;
    }
LABEL_8:
    sub_1B64324(klass);
  }
}


System_Collections_IEnumerator_o *__fastcall WarBoardAIManager__Wait(
        WarBoardAIManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FA02D & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAIManager__Wait_d__8_TypeInfo, method);
    byte_49FA02D = 1;
  }
  v4 = sub_1B64314(WarBoardAIManager__Wait_d__8_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
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
  __int64 v2; // x2
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
  __int64 v30; // x1
  __int64 v31; // x2
  Il2CppObject *_8__1; // x21
  System_Collections_Generic_IEnumerable_TSource__o *warBoardAIList; // x22
  System_Func_object__bool__o *v34; // x23
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  struct WarBoardAIManager___c__DisplayClass12_0_o *v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  struct WarBoardAIManager___c__DisplayClass12_0_o *v43; // x22
  System_Func_object__bool__o *_9__2; // x24
  WarBoardAIManager__Execute_d__12_o *v45; // x21
  int32_t v46; // w2
  int32_t v47; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Object_array *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x1
  __int64 v53; // x2
  WarBoardAIManager___c_c *v54; // x0
  System_Collections_Generic_IEnumerable_T__o *actPieces_5__4; // x21
  System_Action_object__o *_9__12_3; // x22
  Il2CppObject *v57; // x23
  struct WarBoardAIManager___c_StaticFields *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  DefenseAreaData_c *v61; // x0
  const MethodInfo *v62; // x1
  System_Collections_IEnumerator_o *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  WarBoardAIManager___c_c *v66; // x0
  System_Func_bool__o *_9__12_1; // x20
  Il2CppObject *v68; // x21
  struct WarBoardAIManager___c_StaticFields *static_fields; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  UnityEngine_WaitWhile_o *v72; // x21
  ServantStatusBattleListViewItem_o *v73; // x19
  int32_t v74; // w2
  int32_t v75; // w3
  bool result; // w0
  struct System_Collections_IEnumerator_o *v77; // x21
  System_Collections_IEnumerator_c *v78; // x8
  __int64 v79; // x9
  System_Collections_IEnumerator_c **v80; // x10
  __int64 v81; // x0
  __int64 v82; // x0
  struct System_Collections_IEnumerator_o *v83; // x22
  System_Collections_IEnumerator_c *v84; // x8
  WarBoardAIManager__Execute_d__12_o *v85; // x21
  __int64 v86; // x9
  System_Collections_IEnumerator_c **v87; // x10
  __int64 v88; // x0
  WarBoardAIManager__Execute_d__12_o *v89; // x22
  int32_t v90; // w0
  int32_t v91; // w2
  int32_t v92; // w3
  System_Collections_IEnumerator_o **p_enumeratorChild_5__7; // x21
  System_Collections_IEnumerator_o *v94; // x22
  int32_t v95; // w2
  int32_t v96; // w3
  float realtimeSinceStartup; // s0
  Il2CppObject **p__2__current; // x19
  int32_t v99; // w2
  int32_t v100; // w3
  int v101; // w8
  struct System_Collections_IEnumerator_o *exe_5__5; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v104; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v107; // x1
  __int64 v108; // x2
  WarBoardAIManager___c_c *v109; // x0
  System_Collections_Generic_IEnumerable_T__o *v110; // x21
  System_Action_object__o *_9__12_4; // x22
  Il2CppObject *v112; // x23
  struct WarBoardAIManager___c_StaticFields *v113; // x0
  int32_t v114; // w2
  int32_t v115; // w3
  const MethodInfo *v116; // x1
  struct WarBoardAI_o *ai_5__2; // x8
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  struct WarBoardAI_o *v120; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v121; // x8
  int32_t v122; // w2
  int32_t v123; // w3
  struct System_Collections_IEnumerator_o *v124; // x21
  System_Collections_IEnumerator_c *v125; // x8
  __int64 v126; // x9
  System_Collections_IEnumerator_c **v127; // x10
  __int64 v128; // x0
  float v129; // s0
  int32_t v130; // w2
  int32_t v131; // w3
  System_Collections_IEnumerator_o *v132; // x0
  int32_t v133; // w2
  int32_t v134; // w3
  const MethodInfo *v135; // x1
  WarBoardAIManager__Execute_d__12_o *v136; // x0
  const MethodInfo *v137; // x1

  v4 = this;
  if ( (byte_49FA03E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_WarBoardPieceData__TypeInfo, method);
    sub_1B640C8(&Method_BasicHelper_ForEach_WarBoardPieceData___, v5);
    sub_1B640C8(&bool_TypeInfo, v6);
    sub_1B640C8(&DefenseAreaData_TypeInfo, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v10);
    sub_1B640C8(&System_Func_bool__TypeInfo, v11);
    sub_1B640C8(&System_Func_WarBoardAI__bool__TypeInfo, v12);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v13);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    sub_1B640C8(&Method_WarBoardAIManager___c__Execute_b__12_1__, v17);
    sub_1B640C8(&Method_WarBoardAIManager___c__Execute_b__12_3__, v18);
    sub_1B640C8(&Method_WarBoardAIManager___c__Execute_b__12_4__, v19);
    sub_1B640C8(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__, v20);
    sub_1B640C8(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__, v21);
    sub_1B640C8(&WarBoardAIManager___c__DisplayClass12_0_TypeInfo, v22);
    sub_1B640C8(&WarBoardAIManager___c_TypeInfo, v23);
    sub_1B640C8(&UnityEngine_WaitWhile_TypeInfo, v24);
    this = (WarBoardAIManager__Execute_d__12_o *)sub_1B640C8(&WarBoardManager_TypeInfo, v25);
    byte_49FA03E = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v27 = (Il2CppObject *)sub_1B64314(WarBoardAIManager___c__DisplayClass12_0_TypeInfo, method, v2);
      System_Object___ctor(v27, 0LL);
      v4->fields.__8__1 = (struct WarBoardAIManager___c__DisplayClass12_0_o *)v27;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v27, v28, v29);
      _8__1 = (Il2CppObject *)v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_123;
      _8__1[1].klass = *(Il2CppClass **)&v4->fields.forceId;
      if ( !_4__this )
        goto LABEL_123;
      warBoardAIList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.warBoardAIList;
      v34 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardAI__bool__TypeInfo, v30, v31);
      System_Func_object__bool____ctor(v34, _8__1, Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__, 0LL);
      v35 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
              warBoardAIList,
              (System_Func_TSource__bool__o *)v34,
              (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
      v4->fields._ai_5__2 = (struct WarBoardAI_o *)v35;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._ai_5__2, (int32_t)v35, v36, v37);
      if ( !v4->fields._ai_5__2 )
        return 0;
      goto LABEL_102;
    case 1:
      v38 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v38 || !_4__this )
        goto LABEL_123;
      WarBoardAIManager__StartThink(_4__this, v38->fields.forceId, v38->fields.groupId, v3);
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
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
        if ( this )
        {
          if ( WarBoardData__IsWin((WarBoardData_o *)this, 0LL) )
            return 0;
          this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !this )
            goto LABEL_123;
          this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
          if ( !this )
            goto LABEL_123;
          this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__IsLose((WarBoardData_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 0;
          v120 = v4->fields._ai_5__2;
          if ( v120 )
          {
            if ( !v120->fields.isEndRoute )
            {
              v4->fields.__2__current = 0LL;
              p__2__current = &v4->fields.__2__current;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, 0, v118, (int32_t)v119);
              v101 = 5;
              goto LABEL_65;
            }
            v121 = v4->fields.__8__1;
            if ( v121 )
            {
              WarBoardAIManager__StartThink(_4__this, v121->fields.forceId, v121->fields.groupId, v119);
              goto LABEL_101;
            }
          }
        }
      }
LABEL_123:
      sub_1B64324(this);
    }
    do
    {
LABEL_101:
      v4->fields._actPieces_5__4 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._actPieces_5__4, 0, v2, (int32_t)v3);
      v4->fields._exe_5__5 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._exe_5__5, 0, v122, v123);
LABEL_102:
      if ( !_4__this->fields.exec )
        return 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_123;
      if ( WarBoardManager__HasSchedule((WarBoardManager_o *)this, 0LL) )
      {
        v66 = WarBoardAIManager___c_TypeInfo;
        if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
          v66 = WarBoardAIManager___c_TypeInfo;
        }
        _9__12_1 = v66->static_fields->__9__12_1;
        if ( !_9__12_1 )
        {
          if ( !v66->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v66);
            v66 = WarBoardAIManager___c_TypeInfo;
          }
          v68 = (Il2CppObject *)v66->static_fields->__9;
          _9__12_1 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v39, v40);
          System_Func_bool____ctor(_9__12_1, v68, Method_WarBoardAIManager___c__Execute_b__12_1__, 0LL);
          static_fields = WarBoardAIManager___c_TypeInfo->static_fields;
          static_fields->__9__12_1 = _9__12_1;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_1, (int32_t)_9__12_1, v70, v71);
        }
        v72 = (UnityEngine_WaitWhile_o *)sub_1B64314(UnityEngine_WaitWhile_TypeInfo, v39, v40);
        UnityEngine_WaitWhile___ctor(v72, _9__12_1, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v72;
        v73 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(v73, (int32_t)v72, v74, v75);
        result = 1;
        *(_DWORD *)&v73[-1].fields.isMine = 1;
        return result;
      }
LABEL_19:
      v4->fields._isNextPhase_5__3 = 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetLoadMode((CommonUI_o *)this, 10, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_123;
      this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
      if ( !this )
        goto LABEL_123;
      this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__GetAlivePieces((WarBoardData_o *)this, 0LL);
      v43 = v4->fields.__8__1;
      if ( !v43 )
        goto LABEL_123;
      _9__2 = (System_Func_object__bool__o *)v43->fields.__9__2;
      v45 = this;
      if ( !_9__2 )
      {
        _9__2 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v41, v42);
        System_Func_object__bool____ctor(
          _9__2,
          (Il2CppObject *)v43,
          Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__,
          0LL);
        v43->fields.__9__2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__2;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v43->fields.__9__2, (int32_t)_9__2, v46, v47);
      }
      v48 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v45,
              (System_Func_TSource__bool__o *)_9__2,
              (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      v49 = System_Linq_Enumerable__ToArray_object_(
              v48,
              (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      v4->fields._actPieces_5__4 = (struct WarBoardPieceData_array *)v49;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._actPieces_5__4, (int32_t)v49, v50, v51);
      v54 = WarBoardAIManager___c_TypeInfo;
      actPieces_5__4 = (System_Collections_Generic_IEnumerable_T__o *)v4->fields._actPieces_5__4;
      if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v54 = WarBoardAIManager___c_TypeInfo;
      }
      _9__12_3 = (System_Action_object__o *)v54->static_fields->__9__12_3;
      if ( !_9__12_3 )
      {
        if ( !v54->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v54);
          v54 = WarBoardAIManager___c_TypeInfo;
        }
        v57 = (Il2CppObject *)v54->static_fields->__9;
        _9__12_3 = (System_Action_object__o *)sub_1B64314(System_Action_WarBoardPieceData__TypeInfo, v52, v53);
        System_Action_object____ctor(_9__12_3, v57, Method_WarBoardAIManager___c__Execute_b__12_3__, 0LL);
        v58 = WarBoardAIManager___c_TypeInfo->static_fields;
        v58->__9__12_3 = (struct System_Action_WarBoardPieceData__o *)_9__12_3;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v58->__9__12_3, (int32_t)_9__12_3, v59, v60);
      }
      BasicHelper__ForEach_object_(
        actPieces_5__4,
        (System_Action_T__o *)_9__12_3,
        (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      v61 = DefenseAreaData_TypeInfo;
      if ( !DefenseAreaData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DefenseAreaData_TypeInfo);
      DefenseAreaData__ClearCache((const MethodInfo *)v61);
      this = (WarBoardAIManager__Execute_d__12_o *)v4->fields._ai_5__2;
      if ( !this )
        goto LABEL_123;
      v63 = WarBoardAI__Think((WarBoardAI_o *)this, v62);
      v4->fields._exe_5__5 = v63;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._exe_5__5, (int32_t)v63, v64, v65);
      v4->fields._prevTime_5__6 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      while ( 1 )
      {
LABEL_68:
        exe_5__5 = v4->fields._exe_5__5;
        if ( !exe_5__5 )
          goto LABEL_123;
        klass = exe_5__5->klass;
        v104 = *(unsigned __int16 *)(&exe_5__5->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&exe_5__5->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v104;
            p_offset += 4;
            if ( !v104 )
              goto LABEL_73;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_73:
          p_method = sub_1BB60A8(v4->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                       exe_5__5,
                                                       *(_QWORD *)(p_method + 8));
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_76;
        v77 = v4->fields._exe_5__5;
        if ( !v77 )
          goto LABEL_123;
        v78 = v77->klass;
        v79 = *(unsigned __int16 *)(&v77->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v77->klass->_2.bitflags2 + 3) )
        {
          v80 = (System_Collections_IEnumerator_c **)&v78->_1.interfaceOffsets->offset;
          while ( *(v80 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v79;
            v80 += 2;
            if ( !v79 )
              goto LABEL_48;
          }
          v81 = (__int64)&v78->vtable[*(_DWORD *)v80 + 1].method;
        }
        else
        {
LABEL_48:
          v81 = sub_1BB60A8(v4->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v82 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v81)(
                v77,
                *(_QWORD *)(v81 + 8));
        this = (WarBoardAIManager__Execute_d__12_o *)sub_1B64204(v82, System_Collections_IEnumerator_TypeInfo);
        v83 = v4->fields._exe_5__5;
        if ( !v83 )
          goto LABEL_123;
        v84 = v83->klass;
        v85 = this;
        v86 = *(unsigned __int16 *)(&v83->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v83->klass->_2.bitflags2 + 3) )
        {
          v87 = (System_Collections_IEnumerator_c **)&v84->_1.interfaceOffsets->offset;
          while ( *(v87 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v86;
            v87 += 2;
            if ( !v86 )
              goto LABEL_55;
          }
          v88 = (__int64)&v84->vtable[*(_DWORD *)v87 + 1].method;
        }
        else
        {
LABEL_55:
          v88 = sub_1BB60A8(v4->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v88)(
                                                       v83,
                                                       *(_QWORD *)(v88 + 8));
        v89 = this;
        if ( v85 )
        {
          v4->fields._enumeratorChild_5__7 = (struct System_Collections_IEnumerator_o *)sub_1B64204(
                                                                                          this,
                                                                                          System_Collections_IEnumerator_TypeInfo);
          v90 = sub_1B64204(v89, System_Collections_IEnumerator_TypeInfo);
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._enumeratorChild_5__7, v90, v91, v92);
LABEL_59:
          p_enumeratorChild_5__7 = &v4->fields._enumeratorChild_5__7;
          while ( 1 )
          {
            v94 = *p_enumeratorChild_5__7;
            if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
            if ( !WarBoardManager__IEnumeratorExecute(v94, 0LL) )
              break;
            if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v4->fields._prevTime_5__6) >= 0.1 )
            {
              realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
              v4->fields.__2__current = 0LL;
              p__2__current = &v4->fields.__2__current;
              *((float *)p__2__current + 16) = realtimeSinceStartup;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, 0, v99, v100);
              v101 = 2;
              goto LABEL_65;
            }
          }
          *p_enumeratorChild_5__7 = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._enumeratorChild_5__7, 0, v95, v96);
          goto LABEL_67;
        }
        if ( this && (System_Boolean_c *)this->klass == bool_TypeInfo )
          break;
LABEL_67:
        if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v4->fields._prevTime_5__6) >= 0.1 )
        {
          v129 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          v4->fields.__2__current = 0LL;
          p__2__current = &v4->fields.__2__current;
          *((float *)p__2__current + 16) = v129;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, 0, v130, v131);
          v101 = 3;
          goto LABEL_65;
        }
      }
      v124 = v4->fields._exe_5__5;
      if ( !v124 )
        goto LABEL_123;
      v125 = v124->klass;
      v126 = *(unsigned __int16 *)(&v124->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v124->klass->_2.bitflags2 + 3) )
      {
        v127 = (System_Collections_IEnumerator_c **)&v125->_1.interfaceOffsets->offset;
        while ( *(v127 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v126;
          v127 += 2;
          if ( !v126 )
            goto LABEL_111;
        }
        v128 = (__int64)&v125->vtable[*(_DWORD *)v127 + 1].method;
      }
      else
      {
LABEL_111:
        v128 = sub_1BB60A8(v4->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v128)(
                                                     v124,
                                                     *(_QWORD *)(v128 + 8));
      if ( !this )
        goto LABEL_123;
      if ( this->klass->_1.element_class != bool_TypeInfo->_1.element_class )
      {
        sub_1B645E4(this);
        return (unsigned __int8)WarBoardAIManager__Execute_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                  v136,
                                  v137);
      }
      v4->fields._isNextPhase_5__3 = *(_BYTE *)j_il2cpp_object_unbox_0();
LABEL_76:
      v109 = WarBoardAIManager___c_TypeInfo;
      v110 = (System_Collections_Generic_IEnumerable_T__o *)v4->fields._actPieces_5__4;
      if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v109 = WarBoardAIManager___c_TypeInfo;
      }
      _9__12_4 = (System_Action_object__o *)v109->static_fields->__9__12_4;
      if ( !_9__12_4 )
      {
        if ( !v109->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v109);
          v109 = WarBoardAIManager___c_TypeInfo;
        }
        v112 = (Il2CppObject *)v109->static_fields->__9;
        _9__12_4 = (System_Action_object__o *)sub_1B64314(System_Action_WarBoardPieceData__TypeInfo, v107, v108);
        System_Action_object____ctor(_9__12_4, v112, Method_WarBoardAIManager___c__Execute_b__12_4__, 0LL);
        v113 = WarBoardAIManager___c_TypeInfo->static_fields;
        v113->__9__12_4 = (struct System_Action_WarBoardPieceData__o *)_9__12_4;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v113->__9__12_4, (int32_t)_9__12_4, v114, v115);
      }
      BasicHelper__ForEach_object_(
        v110,
        (System_Action_T__o *)_9__12_4,
        (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( v4->fields._isNextPhase_5__3 )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( this )
        {
          WarBoardManager__NextTurn((WarBoardManager_o *)this, 0LL);
          if ( _4__this )
          {
            WarBoardAIManager__AIEnd(_4__this, v135);
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
  v132 = WarBoardAIManager__Wait(_4__this, v116);
  v4->fields.__2__current = (Il2CppObject *)v132;
  p__2__current = &v4->fields.__2__current;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v132, v133, v134);
  v101 = 4;
LABEL_65:
  *((_DWORD *)p__2__current - 2) = v101;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_WarBoardAIManager__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_WaitWhile_o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w8

  if ( (byte_49FA03F & 1) == 0 )
  {
    sub_1B640C8(&System_Func_bool__TypeInfo, method);
    sub_1B640C8(&UnityEngine_WaitWhile_TypeInfo, v4);
    sub_1B640C8(&Method_WarBoardAIManager__Wait_b__8_0__, v5);
    byte_49FA03F = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v15 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v9 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, method, v2);
    System_Func_bool____ctor(v9, _4__this, Method_WarBoardAIManager__Wait_b__8_0__, 0LL);
    v12 = (UnityEngine_WaitWhile_o *)sub_1B64314(UnityEngine_WaitWhile_TypeInfo, v10, v11);
    UnityEngine_WaitWhile___ctor(v12, v9, 0LL);
    this->fields.__2__current = (Il2CppObject *)v12;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v12, v13, v14);
    v15 = 1;
    result = 1;
  }
  this->fields.__1__state = v15;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_WarBoardAIManager__Wait_d__8_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA03C & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAIManager___c_TypeInfo, v1);
    byte_49FA03C = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardAIManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardAIManager___c_TypeInfo->static_fields->__9 = (struct WarBoardAIManager___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)WarBoardAIManager___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall WarBoardAIManager___c___ctor(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c___Execute_b__12_1(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FA03D & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49FA03D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return WarBoardManager__HasSchedule((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_3(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  WarBoardPieceData__ActivateCacheMode(x, 1, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_4(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return routeClass->fields.forceId == this->fields.forceId && routeClass->fields.groupId == this->fields.groupId;
}


bool __fastcall WarBoardAIManager___c__DisplayClass12_0___Execute_b__2(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return routeClass->fields.forceId == this->fields.forceId && routeClass->fields.groupId == this->fields.groupId;
}