void __fastcall WarBoardAIManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v8; // x19
  struct WarBoardAIManager_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_Generic_Dictionary_int__object__o *v16; // x19
  struct WarBoardAIManager_StaticFields *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_Dictionary_int__object__o *v24; // x19
  struct WarBoardAIManager_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4BDA077 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo);
    sub_1C21E38(&WarBoardAIManager_TypeInfo);
    byte_4BDA077 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v1,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)WarBoardAIManager_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v8,
    (const MethodInfo_334E914 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
  static_fields = WarBoardAIManager_TypeInfo->static_fields;
  static_fields->dicUniqueIndexPiece = (struct System_Collections_Generic_Dictionary_uint__WarBoardPieceData__o *)v8;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->dicUniqueIndexPiece,
    (int64_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v16,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
  v17 = WarBoardAIManager_TypeInfo->static_fields;
  v17->dicIndexSquare = (struct System_Collections_Generic_Dictionary_int__WarBoardSquareData__o *)v16;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v17->dicIndexSquare, (int64_t)v16, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v24,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  v25 = WarBoardAIManager_TypeInfo->static_fields;
  v25->dicIndexItem = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v24;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v25->dicIndexItem, (int64_t)v24, v26, v27, v28, v29, v30, v31);
}


void __fastcall WarBoardAIManager___ctor(WarBoardAIManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDA076 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardAI___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_WarBoardAI__TypeInfo);
    byte_4BDA076 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarBoardAI__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarBoardAI___ctor__);
  this->fields.warBoardAIList = (struct System_Collections_Generic_List_WarBoardAI__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4BDA068 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4BDA068 = 1;
  }
  this->fields.exec = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        sub_1C2209C(Instance, v4);
      Instance = *(Il2CppObject **)(v6 + 8LL * (int)v8 + 32);
      if ( !Instance )
        break;
      WarBoardPieceData__ClearPrevAiRoute((WarBoardPieceData_o *)Instance, 0LL);
      v7 = *(_DWORD *)(v6 + 24);
      if ( (int)++v8 >= v7 )
        return;
    }
LABEL_12:
    sub_1C22094(Instance, v4);
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
  __int64 v12; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v15; // x22
  Il2CppObject *v16; // x0

  if ( (byte_4BDA074 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_1C21E38(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1C21E38(&Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__);
    sub_1C21E38(&WarBoardAIManager___c__DisplayClass28_0_TypeInfo);
    byte_4BDA074 = 1;
  }
  v11 = sub_1C22084(WarBoardAIManager___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1C22094(v12, v13);
  *(_DWORD *)(v11 + 16) = forceId;
  *(_DWORD *)(v11 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v15 = (System_Func_object__bool__o *)sub_1C22084(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v16 )
    WarBoardAI__AddRoutePiecePersonalityDic((WarBoardAI_o *)v16, aiId, pieceIndex, 0LL);
}


void __fastcall WarBoardAIManager__CreateAI(
        WarBoardAIManager_o *this,
        WarBoardStageNpcEntity_o *npc,
        const MethodInfo *method)
{
  WarBoardAI_o *v5; // x19
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_List_object__o *warBoardAIList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8

  if ( (byte_4BDA067 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardAI__Add__);
    sub_1C21E38(&WarBoardAI_TypeInfo);
    byte_4BDA067 = 1;
  }
  v5 = (WarBoardAI_o *)sub_1C22084(WarBoardAI_TypeInfo);
  WarBoardAI___ctor(v5, npc, 0LL);
  warBoardAIList = (System_Collections_Generic_List_object__o *)this->fields.warBoardAIList;
  if ( !warBoardAIList
    || (items = warBoardAIList->fields._items,
        v15 = Method_System_Collections_Generic_List_WarBoardAI__Add__,
        ++warBoardAIList->fields._version,
        !items) )
  {
    sub_1C22094(warBoardAIList, v6);
  }
  size = warBoardAIList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      warBoardAIList,
      (Il2CppObject *)v5,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    warBoardAIList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v5;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 4), (int64_t)v5, v7, v8, v9, v10, v11, v12);
  }
}


System_Collections_IEnumerator_o *__fastcall WarBoardAIManager__Execute(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDA06C & 1) == 0 )
  {
    sub_1C21E38(&WarBoardAIManager__Execute_d__12_TypeInfo);
    byte_4BDA06C = 1;
  }
  v7 = sub_1C22084(WarBoardAIManager__Execute_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 32) = forceId;
  *(_DWORD *)(v7 + 36) = groupId;
  return (System_Collections_IEnumerator_o *)v7;
}


float __fastcall WarBoardAIManager__GetBreakPoint(WarBoardPieceData_o *piece, const MethodInfo *method)
{
  if ( !piece )
    sub_1C22094(0LL, method);
  return (float)(piece->fields._breakPoint_k__BackingField + 1)
       / (float)(piece->fields._breakPointMax_k__BackingField + 1);
}


System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *__fastcall WarBoardAIManager__GetEnemyPiece(
        const MethodInfo *method)
{
  WarBoardAIManager_c *v1; // x0

  if ( (byte_4BDA06E & 1) == 0 )
  {
    sub_1C21E38(&WarBoardAIManager_TypeInfo);
    byte_4BDA06E = 1;
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

  if ( (byte_4BDA06F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__);
    sub_1C21E38(&WarBoardAIManager_TypeInfo);
    byte_4BDA06F = 1;
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
    sub_1C22094(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicSquareIndexEnemyPiece,
         squareIndex,
         &value,
         (const MethodInfo_32B71D8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__) )
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

  if ( (byte_4BDA072 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__);
    sub_1C21E38(&WarBoardAIManager_TypeInfo);
    byte_4BDA072 = 1;
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
    sub_1C22094(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicIndexItem,
         squareIndex,
         &value,
         (const MethodInfo_32B71D8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__) )
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

  if ( (byte_4BDA070 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__);
    sub_1C21E38(&WarBoardAIManager_TypeInfo);
    byte_4BDA070 = 1;
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
    sub_1C22094(0LL, method);
  if ( System_Collections_Generic_Dictionary_uint__object___TryGetValue(
         dicUniqueIndexPiece,
         uniqueIndex,
         &value,
         (const MethodInfo_3350A74 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__) )
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

  if ( (byte_4BDA071 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__);
    sub_1C21E38(&WarBoardAIManager_TypeInfo);
    byte_4BDA071 = 1;
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
    sub_1C22094(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicIndexSquare,
         squareIndex,
         &value,
         (const MethodInfo_32B71D8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__) )
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
  if ( (byte_4BDA066 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardAI__Clear__);
    this = (WarBoardAIManager_o *)sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
    byte_4BDA066 = 1;
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
    sub_1C22094(this, npcList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)npcList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1C22094(v8, v9);
    if ( HIDWORD(v11.fields._current[1].klass) || LODWORD(v11.fields._current[1].monitor) )
      WarBoardAIManager__CreateAI(v4, (WarBoardStageNpcEntity_o *)v11.fields._current, v10);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
}


bool __fastcall WarBoardAIManager__IsAllyPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_1C22094(one, two);
  return one->fields._forceId_k__BackingField == two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEnemyBlock(int32_t squareIndex, const MethodInfo *method)
{
  if ( (byte_4BDA073 & 1) == 0 )
  {
    sub_1C21E38(&WarBoardAIManager_TypeInfo);
    byte_4BDA073 = 1;
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
    sub_1C22094(one, two);
  return one->fields._forceId_k__BackingField != two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEqualPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_1C22094(one, two);
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
  AStarSearch_c *v13; // x0
  const MethodInfo *v14; // x3

  if ( (byte_4BDA06A & 1) == 0 )
  {
    sub_1C21E38(&AStarSearch_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_1C21E38(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1C21E38(&Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__);
    sub_1C21E38(&WarBoardAIManager___c__DisplayClass9_0_TypeInfo);
    byte_4BDA06A = 1;
  }
  v7 = sub_1C22084(WarBoardAIManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_DWORD *)(v7 + 16) = forceId;
  *(_DWORD *)(v7 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v11 = (System_Func_object__bool__o *)sub_1C22084(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__,
    0LL);
  v12 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
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


void __fastcall WarBoardAIManager__StartThink(
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
  struct System_Collections_IEnumerator_o *v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4BDA06B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__);
    sub_1C21E38(&Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
    sub_1C21E38(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__);
    sub_1C21E38(&WarBoardAIManager___c__DisplayClass11_0_TypeInfo);
    sub_1C21E38(&WarBoardAIManager_TypeInfo);
    byte_4BDA06B = 1;
  }
  v7 = sub_1C22084(WarBoardAIManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_57;
  *(_DWORD *)(v7 + 16) = forceId;
  *(_DWORD *)(v7 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v11 = (System_Func_object__bool__o *)sub_1C22084(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__,
    0LL);
  v12 = System_Linq_Enumerable__SingleOrDefault_object__50230776(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_2FE75F8 *)Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
  if ( !v12 )
    return;
  this->fields.isPause = 0;
  WarBoardAI__Clear((WarBoardAI_o *)v12, 0LL);
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
    (const MethodInfo_334F470 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
    (const MethodInfo_32B5BD4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
          (const MethodInfo_334F2E8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
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
            (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
        }
      }
      v16 = *(_DWORD *)(v15 + 24);
      if ( (int)++v17 >= v16 )
        goto LABEL_26;
    }
LABEL_58:
    sub_1C2209C(dicUniqueIndexPiece, v9);
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
    (const MethodInfo_32B5BD4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
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
          (const MethodInfo_32B5BD4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__),
        (dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v29 = *(_QWORD *)&dicUniqueIndexPiece[5].fields._freeCount) == 0
    || (v30 = *(_QWORD *)(v29 + 72)) == 0 )
  {
LABEL_57:
    sub_1C22094(dicUniqueIndexPiece, v9);
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
      dicUniqueIndexPiece = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&dicUniqueIndexPiece[2].fields._entries->max_length;
      if ( !dicUniqueIndexPiece )
        goto LABEL_57;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
        *(_DWORD *)(v33 + 16),
        (Il2CppObject *)v33,
        (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
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
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.executeTask, (int64_t)v34, v35, v36, v37, v38, v39, v40);
  }
}


void __fastcall WarBoardAIManager__Update(WarBoardAIManager_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_executeTask; // x19
  System_Collections_IEnumerator_o *v4; // x20
  struct System_Collections_IEnumerator_o *executeTask; // t1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDA06D & 1) == 0 )
  {
    sub_1C21E38(&WarBoardManager_TypeInfo);
    byte_4BDA06D = 1;
  }
  executeTask = this->fields.executeTask;
  p_executeTask = (PartyOrganizationUtility_o *)&this->fields.executeTask;
  v4 = executeTask;
  if ( executeTask )
  {
    if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    if ( !WarBoardManager__IEnumeratorExecute(v4, 0LL) )
    {
      p_executeTask->klass = 0LL;
      sub_1C21DDC(p_executeTask, 0LL, v6, v7, v8, v9, v10, v11);
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
  __int64 v12; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v15; // x22
  Il2CppObject *v16; // x0

  if ( (byte_4BDA075 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_1C21E38(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1C21E38(&Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__);
    sub_1C21E38(&WarBoardAIManager___c__DisplayClass29_0_TypeInfo);
    byte_4BDA075 = 1;
  }
  v11 = sub_1C22084(WarBoardAIManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1C22094(v12, v13);
  *(_DWORD *)(v11 + 16) = forceId;
  *(_DWORD *)(v11 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v15 = (System_Func_object__bool__o *)sub_1C22084(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v16 )
    WarBoardAI__UpdateRoutePiecePersonalityDic((WarBoardAI_o *)v16, aiId, pieceIndex, 0LL);
}


System_Collections_IEnumerator_o *__fastcall WarBoardAIManager__Wait(
        WarBoardAIManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDA069 & 1) == 0 )
  {
    sub_1C21E38(&WarBoardAIManager__Wait_d__8_TypeInfo);
    byte_4BDA069 = 1;
  }
  v3 = sub_1C22084(WarBoardAIManager__Wait_d__8_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
  int64_t v2; // x2
  const MethodInfo *v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  WarBoardAIManager__Execute_d__12_o *v8; // x19
  WarBoardAIManager_o *_4__this; // x20
  Il2CppObject *v10; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *_8__1; // x21
  System_Collections_Generic_IEnumerable_TSource__o *warBoardAIList; // x22
  System_Func_object__bool__o *v19; // x23
  Il2CppObject *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct WarBoardAIManager___c__DisplayClass12_0_o *v27; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v28; // x22
  System_Func_object__bool__o *_9__2; // x24
  WarBoardAIManager__Execute_d__12_o *v30; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Object_array *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  WarBoardAIManager___c_c *v45; // x0
  System_Collections_Generic_IEnumerable_T__o *actPieces_5__4; // x21
  System_Action_object__o *_9__12_3; // x22
  Il2CppObject *v48; // x23
  struct WarBoardAIManager___c_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_IEnumerator_o *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  WarBoardAIManager___c_c *v63; // x0
  System_Func_bool__o *_9__12_1; // x20
  Il2CppObject *v65; // x21
  struct WarBoardAIManager___c_StaticFields *static_fields; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  UnityEngine_WaitWhile_o *v73; // x21
  PartyOrganizationUtility_o *v74; // x19
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  bool result; // w0
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
  int64_t v95; // x0
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  System_Collections_IEnumerator_o **p_enumeratorChild_5__7; // x21
  System_Collections_IEnumerator_o *v103; // x22
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  float realtimeSinceStartup; // s0
  Il2CppObject **p__2__current; // x19
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  int v118; // w8
  struct System_Collections_IEnumerator_o *exe_5__5; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v121; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  WarBoardAIManager___c_c *v124; // x0
  System_Collections_Generic_IEnumerable_T__o *v125; // x21
  System_Action_object__o *_9__12_4; // x22
  Il2CppObject *v127; // x23
  struct WarBoardAIManager___c_StaticFields *v128; // x0
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  struct WarBoardAI_o *ai_5__2; // x8
  int64_t v136; // x2
  const MethodInfo *v137; // x3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  struct WarBoardAI_o *v142; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v143; // x8
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  struct System_Collections_IEnumerator_o *v150; // x21
  System_Collections_IEnumerator_c *v151; // x8
  __int64 v152; // x9
  System_Collections_IEnumerator_c **v153; // x10
  __int64 v154; // x0
  float v155; // s0
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  System_Collections_IEnumerator_o *v162; // x0
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  WarBoardData_o *v169; // x0
  const MethodInfo *v170; // x1

  v8 = this;
  if ( (byte_4BDA07A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_WarBoardPieceData__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_WarBoardPieceData___);
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&DefenseAreaData_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_1C21E38(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&Method_WarBoardAIManager___c__Execute_b__12_1__);
    sub_1C21E38(&Method_WarBoardAIManager___c__Execute_b__12_3__);
    sub_1C21E38(&Method_WarBoardAIManager___c__Execute_b__12_4__);
    sub_1C21E38(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__);
    sub_1C21E38(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__);
    sub_1C21E38(&WarBoardAIManager___c__DisplayClass12_0_TypeInfo);
    sub_1C21E38(&WarBoardAIManager___c_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitWhile_TypeInfo);
    this = (WarBoardAIManager__Execute_d__12_o *)sub_1C21E38(&WarBoardManager_TypeInfo);
    byte_4BDA07A = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (Il2CppObject *)sub_1C22084(WarBoardAIManager___c__DisplayClass12_0_TypeInfo);
      System_Object___ctor(v10, 0LL);
      v8->fields.__8__1 = (struct WarBoardAIManager___c__DisplayClass12_0_o *)v10;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v10, v11, v12, v13, v14, v15, v16);
      _8__1 = (Il2CppObject *)v8->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_123;
      _8__1[1].klass = *(Il2CppClass **)&v8->fields.forceId;
      if ( !_4__this )
        goto LABEL_123;
      warBoardAIList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.warBoardAIList;
      v19 = (System_Func_object__bool__o *)sub_1C22084(System_Func_WarBoardAI__bool__TypeInfo);
      System_Func_object__bool____ctor(v19, _8__1, Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__, 0LL);
      v20 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
              warBoardAIList,
              (System_Func_TSource__bool__o *)v19,
              (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
      v8->fields._ai_5__2 = (struct WarBoardAI_o *)v20;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._ai_5__2, (int64_t)v20, v21, v22, v23, v24, v25, v26);
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
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
        if ( this )
        {
          if ( WarBoardData__IsWin((WarBoardData_o *)this, method) )
            return 0;
          this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !this )
            goto LABEL_123;
          this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
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
              v8->fields.__2__current = 0LL;
              p__2__current = &v8->fields.__2__current;
              sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, 0LL, v136, (int32_t)v137, v138, v139, v140, v141);
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
      sub_1C22094(this, method);
    }
    do
    {
LABEL_101:
      v8->fields._actPieces_5__4 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._actPieces_5__4, 0LL, v2, (int32_t)v3, v4, v5, v6, v7);
      v8->fields._exe_5__5 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._exe_5__5, 0LL, v144, v145, v146, v147, v148, v149);
LABEL_102:
      if ( !_4__this->fields.exec )
        return 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_123;
      if ( WarBoardManager__HasSchedule((WarBoardManager_o *)this, 0LL) )
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
          _9__12_1 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(_9__12_1, v65, Method_WarBoardAIManager___c__Execute_b__12_1__, 0LL);
          static_fields = WarBoardAIManager___c_TypeInfo->static_fields;
          static_fields->__9__12_1 = _9__12_1;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&static_fields->__9__12_1,
            (int64_t)_9__12_1,
            v67,
            v68,
            v69,
            v70,
            v71,
            v72);
        }
        v73 = (UnityEngine_WaitWhile_o *)sub_1C22084(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v73, _9__12_1, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v73;
        v74 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v74, (int64_t)v73, v75, v76, v77, v78, v79, v80);
        result = 1;
        *(_DWORD *)&v74[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
LABEL_19:
      v8->fields._isNextPhase_5__3 = 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetLoadMode((CommonUI_o *)this, 10, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_123;
      this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
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
        _9__2 = (System_Func_object__bool__o *)sub_1C22084(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__2,
          (Il2CppObject *)v28,
          Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__,
          0LL);
        v28->fields.__9__2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__2;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v28->fields.__9__2, (int64_t)_9__2, v31, v32, v33, v34, v35, v36);
      }
      v37 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v30,
              (System_Func_TSource__bool__o *)_9__2,
              (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      v38 = System_Linq_Enumerable__ToArray_object_(
              v37,
              (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      v8->fields._actPieces_5__4 = (struct WarBoardPieceData_array *)v38;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._actPieces_5__4, (int64_t)v38, v39, v40, v41, v42, v43, v44);
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
        _9__12_3 = (System_Action_object__o *)sub_1C22084(System_Action_WarBoardPieceData__TypeInfo);
        System_Action_object____ctor(_9__12_3, v48, Method_WarBoardAIManager___c__Execute_b__12_3__, 0LL);
        v49 = WarBoardAIManager___c_TypeInfo->static_fields;
        v49->__9__12_3 = (struct System_Action_WarBoardPieceData__o *)_9__12_3;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v49->__9__12_3, (int64_t)_9__12_3, v50, v51, v52, v53, v54, v55);
      }
      BasicHelper__ForEach_object_(
        actPieces_5__4,
        (System_Action_T__o *)_9__12_3,
        (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      if ( !DefenseAreaData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DefenseAreaData_TypeInfo);
      DefenseAreaData__ClearCache(0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)v8->fields._ai_5__2;
      if ( !this )
        goto LABEL_123;
      v56 = WarBoardAI__Think((WarBoardAI_o *)this, 0LL);
      v8->fields._exe_5__5 = v56;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._exe_5__5, (int64_t)v56, v57, v58, v59, v60, v61, v62);
      v8->fields._prevTime_5__6 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      while ( 1 )
      {
LABEL_68:
        exe_5__5 = v8->fields._exe_5__5;
        if ( !exe_5__5 )
          goto LABEL_123;
        klass = exe_5__5->klass;
        v121 = *(unsigned __int16 *)(&exe_5__5->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&exe_5__5->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v121;
            p_offset += 4;
            if ( !v121 )
              goto LABEL_73;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_73:
          p_method = sub_1C73E18(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                       exe_5__5,
                                                       *(_QWORD *)(p_method + 8));
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_76;
        v82 = v8->fields._exe_5__5;
        if ( !v82 )
          goto LABEL_123;
        v83 = v82->klass;
        v84 = *(unsigned __int16 *)(&v82->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v82->klass->_2.bitflags2 + 3) )
        {
          v85 = (System_Collections_IEnumerator_c **)&v83->_1.interfaceOffsets->offset;
          while ( *(v85 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v84;
            v85 += 2;
            if ( !v84 )
              goto LABEL_48;
          }
          v86 = (__int64)&v83->vtable[*(_DWORD *)v85 + 1].method;
        }
        else
        {
LABEL_48:
          v86 = sub_1C73E18(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v87 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v86)(
                v82,
                *(_QWORD *)(v86 + 8));
        this = (WarBoardAIManager__Execute_d__12_o *)sub_1C21F74(v87, System_Collections_IEnumerator_TypeInfo);
        v88 = v8->fields._exe_5__5;
        if ( !v88 )
          goto LABEL_123;
        v89 = v88->klass;
        v90 = this;
        v91 = *(unsigned __int16 *)(&v88->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v88->klass->_2.bitflags2 + 3) )
        {
          v92 = (System_Collections_IEnumerator_c **)&v89->_1.interfaceOffsets->offset;
          while ( *(v92 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v91;
            v92 += 2;
            if ( !v91 )
              goto LABEL_55;
          }
          v93 = (__int64)&v89->vtable[*(_DWORD *)v92 + 1].method;
        }
        else
        {
LABEL_55:
          v93 = sub_1C73E18(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v93)(
                                                       v88,
                                                       *(_QWORD *)(v93 + 8));
        v94 = this;
        if ( v90 )
        {
          v8->fields._enumeratorChild_5__7 = (struct System_Collections_IEnumerator_o *)sub_1C21F74(
                                                                                          this,
                                                                                          System_Collections_IEnumerator_TypeInfo);
          v95 = sub_1C21F74(v94, System_Collections_IEnumerator_TypeInfo);
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v8->fields._enumeratorChild_5__7,
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
            if ( !WarBoardManager__IEnumeratorExecute(v103, 0LL) )
              break;
            if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v8->fields._prevTime_5__6) >= 0.1 )
            {
              realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
              v8->fields.__2__current = 0LL;
              p__2__current = &v8->fields.__2__current;
              *((float *)p__2__current + 16) = realtimeSinceStartup;
              sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, 0LL, v112, v113, v114, v115, v116, v117);
              v118 = 2;
              goto LABEL_65;
            }
          }
          *p_enumeratorChild_5__7 = 0LL;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v8->fields._enumeratorChild_5__7,
            0LL,
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
        if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v8->fields._prevTime_5__6) >= 0.1 )
        {
          v155 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          v8->fields.__2__current = 0LL;
          p__2__current = &v8->fields.__2__current;
          *((float *)p__2__current + 16) = v155;
          sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, 0LL, v156, v157, v158, v159, v160, v161);
          v118 = 3;
          goto LABEL_65;
        }
      }
      v150 = v8->fields._exe_5__5;
      if ( !v150 )
        goto LABEL_123;
      v151 = v150->klass;
      v152 = *(unsigned __int16 *)(&v150->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v150->klass->_2.bitflags2 + 3) )
      {
        v153 = (System_Collections_IEnumerator_c **)&v151->_1.interfaceOffsets->offset;
        while ( *(v153 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v152;
          v153 += 2;
          if ( !v152 )
            goto LABEL_111;
        }
        v154 = (__int64)&v151->vtable[*(_DWORD *)v153 + 1].method;
      }
      else
      {
LABEL_111:
        v154 = sub_1C73E18(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v154)(
                                                     v150,
                                                     *(_QWORD *)(v154 + 8));
      if ( !this )
        goto LABEL_123;
      if ( this->klass->_1.element_class != bool_TypeInfo->_1.element_class )
      {
        sub_1C22354(this);
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
        _9__12_4 = (System_Action_object__o *)sub_1C22084(System_Action_WarBoardPieceData__TypeInfo);
        System_Action_object____ctor(_9__12_4, v127, Method_WarBoardAIManager___c__Execute_b__12_4__, 0LL);
        v128 = WarBoardAIManager___c_TypeInfo->static_fields;
        v128->__9__12_4 = (struct System_Action_WarBoardPieceData__o *)_9__12_4;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v128->__9__12_4,
          (int64_t)_9__12_4,
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
        (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( v8->fields._isNextPhase_5__3 )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    this = (WarBoardAIManager__Execute_d__12_o *)v8->fields._ai_5__2;
    if ( !this )
      goto LABEL_123;
    this = (WarBoardAIManager__Execute_d__12_o *)WarBoardAI__Execute((WarBoardAI_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      continue;
    break;
  }
  v162 = WarBoardAIManager__Wait(_4__this, method);
  v8->fields.__2__current = (Il2CppObject *)v162;
  p__2__current = &v8->fields.__2__current;
  sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v162, v163, v164, v165, v166, v167, v168);
  v118 = 4;
LABEL_65:
  *((_DWORD *)p__2__current - 2) = v118;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_WarBoardAIManager__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int32_t v14; // w8

  if ( (byte_4BDA07B & 1) == 0 )
  {
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&UnityEngine_WaitWhile_TypeInfo);
    sub_1C21E38(&Method_WarBoardAIManager__Wait_b__8_0__);
    byte_4BDA07B = 1;
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
    v6 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v6, _4__this, Method_WarBoardAIManager__Wait_b__8_0__, 0LL);
    v7 = (UnityEngine_WaitWhile_o *)sub_1C22084(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v7, v6, 0LL);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v7, v8, v9, v10, v11, v12, v13);
    v14 = 1;
    result = 1;
  }
  this->fields.__1__state = v14;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_WarBoardAIManager__Wait_d__8_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDA078 & 1) == 0 )
  {
    sub_1C21E38(&WarBoardAIManager___c_TypeInfo);
    byte_4BDA078 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(WarBoardAIManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardAIManager___c_TypeInfo->static_fields->__9 = (struct WarBoardAIManager___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)WarBoardAIManager___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardAIManager___c___ctor(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c___Execute_b__12_1(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BDA079 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4BDA079 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  return WarBoardManager__HasSchedule((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_3(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  WarBoardPieceData__ActivateCacheMode(x, 1, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_4(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
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
  if ( !x )
    sub_1C22094(this, 0LL);
  return WarBoardAI__get_ForceId(x, 0LL) == this->fields.forceId
      && WarBoardAI__get_GroupId(x, 0LL) == this->fields.groupId;
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
  if ( !x )
    sub_1C22094(this, 0LL);
  return WarBoardAI__get_ForceId(x, 0LL) == this->fields.forceId
      && WarBoardAI__get_GroupId(x, 0LL) == this->fields.groupId;
}


bool __fastcall WarBoardAIManager___c__DisplayClass12_0___Execute_b__2(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
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
  if ( !x )
    sub_1C22094(this, 0LL);
  return WarBoardAI__get_ForceId(x, 0LL) == this->fields.forceId
      && WarBoardAI__get_GroupId(x, 0LL) == this->fields.groupId;
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
  if ( !x )
    sub_1C22094(this, 0LL);
  return WarBoardAI__get_ForceId(x, 0LL) == this->fields.forceId
      && WarBoardAI__get_GroupId(x, 0LL) == this->fields.groupId;
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
  if ( !x )
    sub_1C22094(this, 0LL);
  return WarBoardAI__get_ForceId(x, 0LL) == this->fields.forceId
      && WarBoardAI__get_GroupId(x, 0LL) == this->fields.groupId;
}