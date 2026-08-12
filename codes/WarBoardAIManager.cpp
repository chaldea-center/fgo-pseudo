void WarBoardAIManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v8; // x19
  struct WarBoardAIManager_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_Dictionary_int__object__o *v16; // x19
  struct WarBoardAIManager_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_Dictionary_int__object__o *v24; // x19
  struct WarBoardAIManager_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_596E0B4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo);
    sub_2213A60(&WarBoardAIManager_TypeInfo);
    byte_596E0B4 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v1,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarBoardAIManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v8,
    (const MethodInfo_40551AC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
  static_fields = WarBoardAIManager_TypeInfo->static_fields;
  static_fields->dicUniqueIndexPiece = (struct System_Collections_Generic_Dictionary_uint__WarBoardPieceData__o *)v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->dicUniqueIndexPiece,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v16,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
  v17 = WarBoardAIManager_TypeInfo->static_fields;
  v17->dicIndexSquare = (struct System_Collections_Generic_Dictionary_int__WarBoardSquareData__o *)v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->dicIndexSquare, (int32_t)v16, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v24,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  v25 = WarBoardAIManager_TypeInfo->static_fields;
  v25->dicIndexItem = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->dicIndexItem, (int32_t)v24, v26, v27, v28, v29, v30, v31);
}


void WarBoardAIManager___ctor(WarBoardAIManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596E0B3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardAI___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardAI__TypeInfo);
    byte_596E0B3 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardAI__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardAI___ctor__);
  this->fields.warBoardAIList = (struct System_Collections_Generic_List_WarBoardAI__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardAIManager__AIEnd(WarBoardAIManager_o *this, const MethodInfo *method)
{
  const MethodInfo_47A29F8 *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  _QWORD *monitor; // x8
  __int64 v7; // x19
  int v8; // w8
  __int64 v9; // x20

  if ( (byte_596E0A5 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596E0A5 = 1;
  }
  v3 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
  this->fields.exec = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance(v3);
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
      if ( (unsigned int)v9 >= v8 )
        sub_2213CE4(Instance);
      Instance = *(Il2CppObject **)(v7 + 32 + 8 * v9);
      if ( !Instance )
        break;
      WarBoardPieceData__ClearPrevAiRoute((WarBoardPieceData_o *)Instance, 0);
      v8 = *(_DWORD *)(v7 + 24);
      if ( (int)++v9 >= v8 )
        return;
    }
LABEL_12:
    sub_2213CDC(Instance, v5);
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
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x23
  System_Func_object__bool__o *v15; // x21
  Il2CppObject *v16; // x0

  if ( (byte_596E0B1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_2213A60(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_2213A60(&Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__);
    sub_2213A60(&WarBoardAIManager___c__DisplayClass28_0_TypeInfo);
    byte_596E0B1 = 1;
  }
  v11 = sub_2213CCC(WarBoardAIManager___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_2213CDC(v12, v13);
  warBoardAIList = this->fields.warBoardAIList;
  *(_DWORD *)(v11 + 16) = forceId;
  *(_DWORD *)(v11 + 20) = groupId;
  v15 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__,
    0);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v16 )
    WarBoardAI__AddRoutePiecePersonalityDic((WarBoardAI_o *)v16, aiId, pieceIndex, 0);
}


void WarBoardAIManager__CreateAI(WarBoardAIManager_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  WarBoardAI_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_object__o *warBoardAIList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v16; // x10
  __int64 size; // x11
  Il2CppClass **v18; // x0

  if ( (byte_596E0A4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardAI__Add__);
    sub_2213A60(&WarBoardAI_TypeInfo);
    byte_596E0A4 = 1;
  }
  v5 = (WarBoardAI_o *)sub_2213CCC(WarBoardAI_TypeInfo);
  WarBoardAI___ctor(v5, npc, 0);
  warBoardAIList = (System_Collections_Generic_List_object__o *)this->fields.warBoardAIList;
  if ( !warBoardAIList
    || (items = warBoardAIList->fields._items,
        v16 = Method_System_Collections_Generic_List_WarBoardAI__Add__,
        ++warBoardAIList->fields._version,
        !items) )
  {
    sub_2213CDC(v6, v7);
  }
  size = warBoardAIList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      warBoardAIList,
      (Il2CppObject *)v5,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    warBoardAIList->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v5, v8, v9, v10, v11, v12, v13);
  }
}


System_Collections_IEnumerator_o *WarBoardAIManager__Execute(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596E0A9 & 1) == 0 )
  {
    sub_2213A60(&WarBoardAIManager__Execute_d__12_TypeInfo);
    byte_596E0A9 = 1;
  }
  v7 = sub_2213CCC(WarBoardAIManager__Execute_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 32) = forceId;
  *(_DWORD *)(v7 + 36) = groupId;
  return (System_Collections_IEnumerator_o *)v7;
}


float WarBoardAIManager__GetBreakPoint(WarBoardPieceData_o *piece, const MethodInfo *method)
{
  int32x2_t v2; // d0
  float result; // s0

  if ( !piece )
    sub_2213CDC(0, method);
  v2.n64_u64[0] = vcvt_f32_s32(vadd_s32(*(int32x2_t *)&piece->fields._breakPoint_k__BackingField, (int32x2_t)0x100000001LL)).n64_u64[0];
  LODWORD(result) = vdiv_f32(v2, vdup_lane_s32(v2, 1)).n64_u32[0];
  return result;
}


System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *WarBoardAIManager__GetEnemyPiece(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  WarBoardAIManager_c *v3; // x0

  if ( (byte_596E0AB & 1) == 0 )
  {
    sub_2213A60(&WarBoardAIManager_TypeInfo);
    byte_596E0AB = 1;
  }
  v3 = WarBoardAIManager_TypeInfo;
  if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v1, v2);
    v3 = WarBoardAIManager_TypeInfo;
  }
  return v3->static_fields->dicSquareIndexEnemyPiece;
}


WarBoardPieceData_o *WarBoardAIManager__GetEnemyPieceSquareIndex(int32_t squareIndex, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardAIManager_c *v4; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexEnemyPiece; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596E0AC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__);
    sub_2213A60(&WarBoardAIManager_TypeInfo);
    byte_596E0AC = 1;
  }
  v4 = WarBoardAIManager_TypeInfo;
  value = 0;
  if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, method, v2);
    v4 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v4->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    sub_2213CDC(0, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicSquareIndexEnemyPiece,
         squareIndex,
         &value,
         (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__) )
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
  __int64 v2; // x2
  WarBoardAIManager_c *v4; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicIndexItem; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596E0AF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__);
    sub_2213A60(&WarBoardAIManager_TypeInfo);
    byte_596E0AF = 1;
  }
  v4 = WarBoardAIManager_TypeInfo;
  value = 0;
  if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, method, v2);
    v4 = WarBoardAIManager_TypeInfo;
  }
  dicIndexItem = (System_Collections_Generic_Dictionary_int__object__o *)v4->static_fields->dicIndexItem;
  if ( !dicIndexItem )
    sub_2213CDC(0, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicIndexItem,
         squareIndex,
         &value,
         (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__) )
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
  __int64 v2; // x2
  WarBoardAIManager_c *v4; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicUniqueIndexPiece; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596E0AD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__);
    sub_2213A60(&WarBoardAIManager_TypeInfo);
    byte_596E0AD = 1;
  }
  v4 = WarBoardAIManager_TypeInfo;
  value = 0;
  if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, method, v2);
    v4 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v4->static_fields->dicUniqueIndexPiece;
  if ( !dicUniqueIndexPiece )
    sub_2213CDC(0, method);
  if ( System_Collections_Generic_Dictionary_uint__object___TryGetValue(
         dicUniqueIndexPiece,
         uniqueIndex,
         &value,
         (const MethodInfo_405763C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__) )
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
  __int64 v2; // x2
  WarBoardAIManager_c *v4; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicIndexSquare; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596E0AE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__);
    sub_2213A60(&WarBoardAIManager_TypeInfo);
    byte_596E0AE = 1;
  }
  v4 = WarBoardAIManager_TypeInfo;
  value = 0;
  if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, method, v2);
    v4 = WarBoardAIManager_TypeInfo;
  }
  dicIndexSquare = (System_Collections_Generic_Dictionary_int__object__o *)v4->static_fields->dicIndexSquare;
  if ( !dicIndexSquare )
    sub_2213CDC(0, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicIndexSquare,
         squareIndex,
         &value,
         (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__) )
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
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+18h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_596E0A3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardAI__Clear__);
    this = (WarBoardAIManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
    byte_596E0A3 = 1;
  }
  warBoardAIList = v4->fields.warBoardAIList;
  memset(&v10, 0, sizeof(v10));
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
    sub_2213CDC(this, npcList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)npcList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    if ( !v8 )
      break;
    if ( !v10.fields._current )
      sub_2213CDC(v8, 0);
    if ( *(_DWORD *)((char *)&v10.fields._current->klass + (unsigned __int64)&dword_14)
      || *(_DWORD *)((char *)&v10.fields._current->klass + (unsigned __int64)off_18) )
    {
      WarBoardAIManager__CreateAI(v4, (WarBoardStageNpcEntity_o *)v10.fields._current, v9);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
}


bool WarBoardAIManager__IsAllyPiece(WarBoardPieceData_o *one, WarBoardPieceData_o *two, const MethodInfo *method)
{
  if ( !one || !two )
    sub_2213CDC(one, two);
  return one->fields._forceId_k__BackingField == two->fields._forceId_k__BackingField;
}


bool WarBoardAIManager__IsEnemyBlock(int32_t squareIndex, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596E0B0 & 1) == 0 )
  {
    sub_2213A60(&WarBoardAIManager_TypeInfo);
    byte_596E0B0 = 1;
  }
  if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, method, v2);
  return WarBoardAIManager__GetEnemyPieceSquareIndex(squareIndex, method) != 0;
}


bool WarBoardAIManager__IsEnemyPiece(WarBoardPieceData_o *one, WarBoardPieceData_o *two, const MethodInfo *method)
{
  if ( !one || !two )
    sub_2213CDC(one, two);
  return one->fields._forceId_k__BackingField != two->fields._forceId_k__BackingField;
}


bool WarBoardAIManager__IsEqualPiece(WarBoardPieceData_o *one, WarBoardPieceData_o *two, const MethodInfo *method)
{
  if ( !one || !two )
    sub_2213CDC(one, two);
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
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x23
  System_Func_object__bool__o *v11; // x21
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x3

  if ( (byte_596E0A7 & 1) == 0 )
  {
    sub_2213A60(&AStarSearch_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_2213A60(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_2213A60(&Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__);
    sub_2213A60(&WarBoardAIManager___c__DisplayClass9_0_TypeInfo);
    byte_596E0A7 = 1;
  }
  v7 = sub_2213CCC(WarBoardAIManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  warBoardAIList = this->fields.warBoardAIList;
  *(_DWORD *)(v7 + 16) = forceId;
  *(_DWORD *)(v7 + 20) = groupId;
  v11 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__,
    0);
  v12 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v12 )
  {
    this->fields.exec = 1;
    LOBYTE(v12[2].klass) = 0;
    if ( !*(&AStarSearch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v13, v14);
    AStarSearch__DetourCacheClear((const MethodInfo *)v12);
    WarBoardAIManager__StartThink(this, *(_DWORD *)(v7 + 16), *(_DWORD *)(v7 + 20), v15);
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
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x23
  System_Func_object__bool__o *v11; // x21
  Il2CppObject *v12; // x0
  __int64 v13; // x2
  WarBoardAIManager_c *v14; // x0
  __int64 v15; // x2
  __int64 v16; // x8
  __int64 v17; // x24
  int v18; // w8
  unsigned int v19; // w27
  __int64 v20; // x21
  WarBoardAIManager_c *v21; // x0
  WarBoardAIManager_c *v22; // x0
  WarBoardAIManager_c *v23; // x0
  __int64 v24; // x2
  __int64 v25; // x8
  __int64 v26; // x24
  int v27; // w8
  unsigned int v28; // w26
  __int64 v29; // x21
  WarBoardAIManager_c *v30; // x0
  __int64 v31; // x2
  const MethodInfo *v32; // x3
  __int64 v33; // x8
  __int64 v34; // x23
  int v35; // w8
  unsigned int v36; // w25
  __int64 v37; // x21
  struct System_Collections_IEnumerator_o *v38; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7

  if ( (byte_596E0A8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__);
    sub_2213A60(&Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
    sub_2213A60(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__);
    sub_2213A60(&WarBoardAIManager___c__DisplayClass11_0_TypeInfo);
    sub_2213A60(&WarBoardAIManager_TypeInfo);
    byte_596E0A8 = 1;
  }
  v7 = sub_2213CCC(WarBoardAIManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_57;
  warBoardAIList = this->fields.warBoardAIList;
  *(_DWORD *)(v7 + 16) = forceId;
  *(_DWORD *)(v7 + 20) = groupId;
  v11 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__,
    0);
  v12 = System_Linq_Enumerable__SingleOrDefault_object__59347436(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_38991EC *)Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
  if ( !v12 )
    return;
  this->fields.isPause = 0;
  WarBoardAI__Clear((WarBoardAI_o *)v12, 0);
  v14 = WarBoardAIManager_TypeInfo;
  if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v9, v13);
    v14 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v14->static_fields->dicUniqueIndexPiece;
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    dicUniqueIndexPiece,
    (const MethodInfo_4055CE8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
    (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  v16 = *(_QWORD *)&dicUniqueIndexPiece[5].fields._freeCount;
  if ( !v16 )
    goto LABEL_57;
  v17 = *(_QWORD *)(v16 + 48);
  if ( !v17 )
    goto LABEL_57;
  v18 = *(_DWORD *)(v17 + 24);
  if ( v18 >= 1 )
  {
    v19 = 0;
    while ( v19 < v18 )
    {
      v20 = *(_QWORD *)(v17 + 8LL * (int)v19 + 32);
      if ( !v20 )
        goto LABEL_57;
      if ( !*(_BYTE *)(v20 + 60) )
      {
        v21 = WarBoardAIManager_TypeInfo;
        if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v9, v15);
          v21 = WarBoardAIManager_TypeInfo;
        }
        dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v21->static_fields->dicUniqueIndexPiece;
        if ( !dicUniqueIndexPiece )
          goto LABEL_57;
        System_Collections_Generic_Dictionary_uint__object___Add(
          dicUniqueIndexPiece,
          *(_DWORD *)(v20 + 44),
          (Il2CppObject *)v20,
          (const MethodInfo_4055B60 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
        if ( *(_DWORD *)(v20 + 20) != *(_DWORD *)(v7 + 16) )
        {
          v22 = WarBoardAIManager_TypeInfo;
          if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v9, v15);
            v22 = WarBoardAIManager_TypeInfo;
          }
          dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v22->static_fields->dicSquareIndexEnemyPiece;
          if ( !dicUniqueIndexPiece )
            goto LABEL_57;
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
            *(_DWORD *)(v20 + 64),
            (Il2CppObject *)v20,
            (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
        }
      }
      v18 = *(_DWORD *)(v17 + 24);
      if ( (int)++v19 >= v18 )
        goto LABEL_26;
    }
LABEL_58:
    sub_2213CE4(dicUniqueIndexPiece);
  }
LABEL_26:
  v23 = WarBoardAIManager_TypeInfo;
  if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v9, v15);
    v23 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v23->static_fields->dicIndexSquare;
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
    (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  v25 = *(_QWORD *)&dicUniqueIndexPiece[5].fields._freeCount;
  if ( !v25 )
    goto LABEL_57;
  v26 = *(_QWORD *)(v25 + 56);
  if ( !v26 )
    goto LABEL_57;
  v27 = *(_DWORD *)(v26 + 24);
  if ( v27 >= 1 )
  {
    v28 = 0;
    while ( v28 < v27 )
    {
      dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo;
      v29 = *(_QWORD *)(v26 + 8LL * (int)v28 + 32);
      if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v9, v24);
        dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v29 )
        goto LABEL_57;
      dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicUniqueIndexPiece[2].fields._entries->bounds;
      if ( !dicUniqueIndexPiece )
        goto LABEL_57;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
        *(_DWORD *)(v29 + 16),
        (Il2CppObject *)v29,
        (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
      v27 = *(_DWORD *)(v26 + 24);
      if ( (int)++v28 >= v27 )
        goto LABEL_40;
    }
    goto LABEL_58;
  }
LABEL_40:
  v30 = WarBoardAIManager_TypeInfo;
  if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v9, v24);
    v30 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v30->static_fields->dicIndexItem;
  if ( !dicUniqueIndexPiece
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
          (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__),
        (dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (v33 = *(_QWORD *)&dicUniqueIndexPiece[5].fields._freeCount) == 0
    || (v34 = *(_QWORD *)(v33 + 72)) == 0 )
  {
LABEL_57:
    sub_2213CDC(dicUniqueIndexPiece, v9);
  }
  v35 = *(_DWORD *)(v34 + 24);
  if ( v35 >= 1 )
  {
    v36 = 0;
    while ( v36 < v35 )
    {
      dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo;
      v37 = *(_QWORD *)(v34 + 8LL * (int)v36 + 32);
      if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v9, v31);
        dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v37 )
        goto LABEL_57;
      dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicUniqueIndexPiece[2].fields._entries->max_length;
      if ( !dicUniqueIndexPiece )
        goto LABEL_57;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
        *(_DWORD *)(v37 + 16),
        (Il2CppObject *)v37,
        (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
      v35 = *(_DWORD *)(v34 + 24);
      if ( (int)++v36 >= v35 )
        goto LABEL_54;
    }
    goto LABEL_58;
  }
LABEL_54:
  if ( !this->fields.executeTask )
  {
    v38 = WarBoardAIManager__Execute(this, *(_DWORD *)(v7 + 16), *(_DWORD *)(v7 + 20), v32);
    this->fields.executeTask = v38;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.executeTask,
      (int32_t)v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
}


void WarBoardAIManager__Update(WarBoardAIManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_executeTask; // x19
  System_Collections_IEnumerator_o *v5; // x20
  struct System_Collections_IEnumerator_o *executeTask; // t1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_596E0AA & 1) == 0 )
  {
    sub_2213A60(&WarBoardManager_TypeInfo);
    byte_596E0AA = 1;
  }
  executeTask = this->fields.executeTask;
  p_executeTask = (MissionNaviTransitionBoardItem_o *)&this->fields.executeTask;
  v5 = executeTask;
  if ( executeTask )
  {
    if ( !*(&WarBoardManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo, method, v2);
    if ( !WarBoardManager__IEnumeratorExecute(v5, 0) )
    {
      p_executeTask->klass = 0;
      sub_2213A04(p_executeTask, 0, v7, v8, v9, v10, v11, v12);
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
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x23
  System_Func_object__bool__o *v15; // x21
  Il2CppObject *v16; // x0

  if ( (byte_596E0B2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_2213A60(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_2213A60(&Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__);
    sub_2213A60(&WarBoardAIManager___c__DisplayClass29_0_TypeInfo);
    byte_596E0B2 = 1;
  }
  v11 = sub_2213CCC(WarBoardAIManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_2213CDC(v12, v13);
  warBoardAIList = this->fields.warBoardAIList;
  *(_DWORD *)(v11 + 16) = forceId;
  *(_DWORD *)(v11 + 20) = groupId;
  v15 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__,
    0);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v16 )
    WarBoardAI__UpdateRoutePiecePersonalityDic((WarBoardAI_o *)v16, aiId, pieceIndex, 0);
}


System_Collections_IEnumerator_o *WarBoardAIManager__Wait(WarBoardAIManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596E0A6 & 1) == 0 )
  {
    sub_2213A60(&WarBoardAIManager__Wait_d__8_TypeInfo);
    byte_596E0A6 = 1;
  }
  v3 = sub_2213CCC(WarBoardAIManager__Wait_d__8_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  System_String_o *v2; // x2
  MethodInfo *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct WarBoardAIManager_o *_4__this; // x20
  __int64 Instance; // x0
  Il2CppObject *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *_8__1; // x21
  System_Collections_Generic_IEnumerable_TSource__o *warBoardAIList; // x22
  System_Func_object__bool__o *v21; // x23
  Il2CppObject *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct WarBoardAIManager___c__DisplayClass12_0_o *v29; // x8
  System_Collections_IEnumerator_o *enumeratorChild_5__7; // x21
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  float realtimeSinceStartup; // s0
  Il2CppObject **p__2__current; // x19
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int v45; // w8
  float v46; // s0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct WarBoardAI_o *ai_5__2; // x8
  System_String_o *v54; // x2
  MethodInfo *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  struct WarBoardAI_o *v60; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v61; // x8
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  __int64 v68; // x1
  __int64 v69; // x2
  const MethodInfo_47A29F8 *v70; // x0
  struct WarBoardAIManager___c__DisplayClass12_0_o *v71; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x21
  System_Func_object__bool__o *_9__2; // x24
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x0
  System_Object_array *v81; // x0
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  __int64 v88; // x1
  __int64 v89; // x2
  WarBoardAIManager___c_c *v90; // x0
  System_Collections_Generic_IEnumerable_T__o *v91; // x21
  struct WarBoardAIManager___c_StaticFields *v92; // x8
  System_Action_object__o *_9__12_3; // x22
  Il2CppObject *v94; // x23
  struct WarBoardAIManager___c_StaticFields *v95; // x0
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  __int64 v102; // x1
  __int64 v103; // x2
  struct System_Collections_IEnumerator_o *v104; // x0
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  struct System_Collections_IEnumerator_o *exe_5__5; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v113; // x9
  int32_t *p_offset; // x10
  __int64 v115; // x0
  __int64 v116; // x2
  struct System_Collections_IEnumerator_o *v117; // x21
  System_Collections_IEnumerator_c *v118; // x8
  __int64 v119; // x9
  System_Collections_IEnumerator_c **v120; // x10
  __int64 v121; // x0
  __int64 v122; // x0
  struct System_Collections_IEnumerator_o *v123; // x21
  System_Collections_IEnumerator_c *v124; // x8
  __int64 v125; // x9
  System_Collections_IEnumerator_c **v126; // x10
  __int64 v127; // x0
  System_Collections_IEnumerator_c *v128; // x8
  __int64 v129; // x9
  System_Collections_IEnumerator_c **v130; // x10
  __int64 v131; // x0
  __int64 v132; // x21
  struct System_Collections_IEnumerator_o *v133; // x0
  System_Collections_IEnumerator_c *v134; // x1
  int32_t v135; // w0
  System_String_o *v136; // x2
  System_String_o *v137; // x3
  int32_t v138; // w4
  int32_t v139; // w5
  bool v140; // w6
  bool v141; // w7
  struct System_Collections_IEnumerator_o *v142; // x21
  System_Collections_IEnumerator_c *v143; // x8
  __int64 v144; // x9
  System_Collections_IEnumerator_c **v145; // x10
  __int64 v146; // x0
  WarBoardAIManager___c_c *v147; // x0
  struct WarBoardAIManager___c_StaticFields *v148; // x8
  System_Func_bool__o *_9__12_1; // x20
  Il2CppObject *v150; // x21
  struct WarBoardAIManager___c_StaticFields *v151; // x0
  System_String_o *v152; // x2
  System_String_o *v153; // x3
  int32_t v154; // w4
  int32_t v155; // w5
  bool v156; // w6
  bool v157; // w7
  UnityEngine_WaitWhile_o *v158; // x21
  Il2CppObject **v159; // x19
  System_String_o *v160; // x2
  System_String_o *v161; // x3
  int32_t v162; // w4
  int32_t v163; // w5
  bool v164; // w6
  bool v165; // w7
  Il2CppObject *v166; // x0
  System_String_o *v167; // x2
  System_String_o *v168; // x3
  int32_t v169; // w4
  int32_t v170; // w5
  bool v171; // w6
  bool v172; // w7
  __int64 v173; // x2
  __int64 v174; // x3
  WarBoardAIManager___c_c *v175; // x0
  System_Collections_Generic_IEnumerable_T__o *actPieces_5__4; // x21
  struct WarBoardAIManager___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__12_4; // x22
  Il2CppObject *v179; // x23
  struct WarBoardAIManager___c_StaticFields *v180; // x0
  System_String_o *v181; // x2
  System_String_o *v182; // x3
  int32_t v183; // w4
  int32_t v184; // w5
  bool v185; // w6
  bool v186; // w7
  WarBoardData_o *v187; // x0
  const MethodInfo *v188; // x1

  if ( (byte_596E0B7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_WarBoardPieceData__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_WarBoardPieceData___);
    sub_2213A60(&DefenseAreaData_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_2213A60(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&Method_WarBoardAIManager___c__Execute_b__12_1__);
    sub_2213A60(&Method_WarBoardAIManager___c__Execute_b__12_3__);
    sub_2213A60(&Method_WarBoardAIManager___c__Execute_b__12_4__);
    sub_2213A60(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__);
    sub_2213A60(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__);
    sub_2213A60(&WarBoardAIManager___c__DisplayClass12_0_TypeInfo);
    sub_2213A60(&WarBoardAIManager___c_TypeInfo);
    sub_2213A60(&UnityEngine_WaitWhile_TypeInfo);
    sub_2213A60(&WarBoardManager_TypeInfo);
    byte_596E0B7 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  Instance = 0;
  if ( _1__state > 2 )
  {
    if ( _1__state == 3 )
    {
      this->fields.__1__state = -1;
      goto LABEL_69;
    }
    if ( _1__state != 4 )
    {
      if ( _1__state == 5 )
      {
        this->fields.__1__state = -1;
        goto LABEL_32;
      }
      return Instance;
    }
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      if ( _4__this->fields.exec )
        goto LABEL_36;
      goto LABEL_132;
    }
    goto LABEL_135;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v12 = (Il2CppObject *)sub_2213CCC(WarBoardAIManager___c__DisplayClass12_0_TypeInfo);
    System_Object___ctor(v12, 0);
    this->fields.__8__1 = (struct WarBoardAIManager___c__DisplayClass12_0_o *)v12;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__8__1, (int32_t)v12, v13, v14, v15, v16, v17, v18);
    _8__1 = (Il2CppObject *)this->fields.__8__1;
    if ( _8__1 )
    {
      _8__1[1].klass = *(Il2CppClass **)&this->fields.forceId;
      if ( _4__this )
      {
        warBoardAIList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.warBoardAIList;
        v21 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarBoardAI__bool__TypeInfo);
        System_Func_object__bool____ctor(v21, _8__1, Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__, 0);
        v22 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
                warBoardAIList,
                (System_Func_TSource__bool__o *)v21,
                (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
        this->fields._ai_5__2 = (struct WarBoardAI_o *)v22;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields._ai_5__2,
          (int32_t)v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        if ( this->fields._ai_5__2 )
          goto LABEL_49;
        goto LABEL_132;
      }
    }
LABEL_135:
    sub_2213CDC(Instance, method);
  }
  if ( _1__state == 1 )
  {
    v29 = this->fields.__8__1;
    this->fields.__1__state = -1;
    if ( v29 && _4__this )
    {
      WarBoardAIManager__StartThink(_4__this, v29->fields.forceId, v29->fields.groupId, v3);
      goto LABEL_52;
    }
    goto LABEL_135;
  }
  if ( _1__state != 2 )
    return Instance;
  this->fields.__1__state = -1;
  while ( 1 )
  {
LABEL_23:
    enumeratorChild_5__7 = this->fields._enumeratorChild_5__7;
    if ( !*(&WarBoardManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo, method, v2);
    if ( !WarBoardManager__IEnumeratorExecute(enumeratorChild_5__7, 0) )
      break;
    if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - this->fields._prevTime_5__6) >= 0.1 )
    {
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      *((float *)p__2__current + 16) = realtimeSinceStartup;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v39, v40, v41, v42, v43, v44);
      v45 = 2;
      goto LABEL_28;
    }
  }
  this->fields._enumeratorChild_5__7 = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._enumeratorChild_5__7, 0, v31, v32, v33, v34, v35, v36);
LABEL_30:
  if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - this->fields._prevTime_5__6) >= 0.1 )
  {
    v46 = UnityEngine_Time__get_realtimeSinceStartup(0);
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    *((float *)p__2__current + 16) = v46;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v47, v48, v49, v50, v51, v52);
    v45 = 3;
    goto LABEL_28;
  }
  while ( 1 )
  {
LABEL_69:
    exe_5__5 = this->fields._exe_5__5;
    if ( !exe_5__5 )
      goto LABEL_135;
    klass = exe_5__5->klass;
    v113 = *(unsigned __int16 *)&exe_5__5->klass->_2.rank;
    if ( *(_WORD *)&exe_5__5->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v113;
        p_offset += 4;
        if ( !v113 )
          goto LABEL_74;
      }
      v115 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_74:
      v115 = sub_224BC3C(this->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 0);
    }
    Instance = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v115)(
                 exe_5__5,
                 *(_QWORD *)(v115 + 8));
    if ( (Instance & 1) != 0 )
    {
      v117 = this->fields._exe_5__5;
      if ( !v117 )
        goto LABEL_135;
      v118 = v117->klass;
      v119 = *(unsigned __int16 *)&v117->klass->_2.rank;
      if ( *(_WORD *)&v117->klass->_2.rank )
      {
        v120 = (System_Collections_IEnumerator_c **)&v118->_1.interfaceOffsets->offset;
        while ( *(v120 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v119;
          v120 += 2;
          if ( !v119 )
            goto LABEL_82;
        }
        v121 = (__int64)&v118->vtable[*(_DWORD *)v120 + 1];
      }
      else
      {
LABEL_82:
        v121 = sub_224BC3C(this->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v122 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v121)(
               v117,
               *(_QWORD *)(v121 + 8));
      Instance = sub_2213BB4(v122, System_Collections_IEnumerator_TypeInfo);
      v123 = this->fields._exe_5__5;
      if ( Instance )
      {
        if ( !v123 )
          goto LABEL_135;
        v124 = v123->klass;
        v125 = *(unsigned __int16 *)&v123->klass->_2.rank;
        if ( *(_WORD *)&v123->klass->_2.rank )
        {
          v126 = (System_Collections_IEnumerator_c **)&v124->_1.interfaceOffsets->offset;
          while ( *(v126 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v125;
            v126 += 2;
            if ( !v125 )
              goto LABEL_90;
          }
          v127 = (__int64)&v124->vtable[*(_DWORD *)v126 + 1];
        }
        else
        {
LABEL_90:
          v127 = sub_224BC3C(this->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v132 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v127)(
                 v123,
                 *(_QWORD *)(v127 + 8));
        v133 = (struct System_Collections_IEnumerator_o *)sub_2213BB4(v132, System_Collections_IEnumerator_TypeInfo);
        v134 = System_Collections_IEnumerator_TypeInfo;
        this->fields._enumeratorChild_5__7 = v133;
        v135 = sub_2213BB4(v132, v134);
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields._enumeratorChild_5__7,
          v135,
          v136,
          v137,
          v138,
          v139,
          v140,
          v141);
        goto LABEL_23;
      }
      if ( !v123 )
        goto LABEL_135;
      v128 = v123->klass;
      v129 = *(unsigned __int16 *)&v123->klass->_2.rank;
      if ( *(_WORD *)&v123->klass->_2.rank )
      {
        v130 = (System_Collections_IEnumerator_c **)&v128->_1.interfaceOffsets->offset;
        while ( *(v130 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v129;
          v130 += 2;
          if ( !v129 )
            goto LABEL_96;
        }
        v131 = (__int64)&v128->vtable[*(_DWORD *)v130 + 1];
      }
      else
      {
LABEL_96:
        v131 = sub_224BC3C(this->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1);
      }
      Instance = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v131)(
                   v123,
                   *(_QWORD *)(v131 + 8));
      if ( !Instance || *(_QWORD *)Instance != qword_5984328 )
        goto LABEL_30;
      v142 = this->fields._exe_5__5;
      if ( !v142 )
        goto LABEL_135;
      v143 = v142->klass;
      v144 = *(unsigned __int16 *)&v142->klass->_2.rank;
      if ( *(_WORD *)&v142->klass->_2.rank )
      {
        v145 = (System_Collections_IEnumerator_c **)&v143->_1.interfaceOffsets->offset;
        while ( *(v145 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v144;
          v145 += 2;
          if ( !v144 )
            goto LABEL_107;
        }
        v146 = (__int64)&v143->vtable[*(_DWORD *)v145 + 1];
      }
      else
      {
LABEL_107:
        v146 = sub_224BC3C(this->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1);
      }
      Instance = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v146)(
                   v142,
                   *(_QWORD *)(v146 + 8));
      if ( !Instance )
        goto LABEL_135;
      if ( *(_QWORD *)(*(_QWORD *)Instance + 64LL) != *(_QWORD *)(qword_5984328 + 64) )
      {
        sub_221405C(Instance, qword_5984328, v173, v174);
        LOBYTE(Instance) = (unsigned __int8)WarBoardData__GetAlivePieces(v187, v188);
        return Instance;
      }
      this->fields._isNextPhase_5__3 = *(_BYTE *)j_il2cpp_object_unbox_0(Instance, qword_5984328, v173, v174);
    }
    v175 = WarBoardAIManager___c_TypeInfo;
    actPieces_5__4 = (System_Collections_Generic_IEnumerable_T__o *)this->fields._actPieces_5__4;
    if ( !*(&WarBoardAIManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo, method, v116);
      v175 = WarBoardAIManager___c_TypeInfo;
    }
    static_fields = v175->static_fields;
    _9__12_4 = (System_Action_object__o *)static_fields->__9__12_4;
    if ( !_9__12_4 )
    {
      if ( !*(&v175->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v175, method, v116);
        static_fields = WarBoardAIManager___c_TypeInfo->static_fields;
      }
      v179 = (Il2CppObject *)static_fields->__9;
      _9__12_4 = (System_Action_object__o *)sub_2213CCC(System_Action_WarBoardPieceData__TypeInfo);
      System_Action_object____ctor(_9__12_4, v179, Method_WarBoardAIManager___c__Execute_b__12_4__, 0);
      v180 = WarBoardAIManager___c_TypeInfo->static_fields;
      v180->__9__12_4 = (struct System_Action_WarBoardPieceData__o *)_9__12_4;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v180->__9__12_4,
        (int32_t)_9__12_4,
        v181,
        v182,
        v183,
        v184,
        v185,
        v186);
    }
    BasicHelper__ForEach_object_(
      actPieces_5__4,
      (System_Action_T__o *)_9__12_4,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_WarBoardPieceData___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_135;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_135;
    CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0);
    if ( this->fields._isNextPhase_5__3 )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        WarBoardManager__NextTurn((WarBoardManager_o *)Instance, 0);
        if ( _4__this )
        {
          WarBoardAIManager__AIEnd(_4__this, method);
LABEL_132:
          LOBYTE(Instance) = 0;
          return Instance;
        }
      }
      goto LABEL_135;
    }
LABEL_32:
    if ( !_4__this )
      goto LABEL_135;
    if ( _4__this->fields.exec )
    {
      Instance = (__int64)this->fields._ai_5__2;
      if ( !Instance )
        goto LABEL_135;
      Instance = WarBoardAI__Execute((WarBoardAI_o *)Instance, 0);
      if ( (Instance & 1) != 0 )
      {
        v166 = (Il2CppObject *)WarBoardAIManager__Wait(_4__this, method);
        this->fields.__2__current = v166;
        p__2__current = &this->fields.__2__current;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)p__2__current,
          (int32_t)v166,
          v167,
          v168,
          v169,
          v170,
          v171,
          v172);
        v45 = 4;
        goto LABEL_28;
      }
LABEL_36:
      ai_5__2 = this->fields._ai_5__2;
      if ( !ai_5__2 )
        goto LABEL_135;
      if ( !ai_5__2->fields.isEndPhase )
        break;
    }
LABEL_48:
    this->fields._actPieces_5__4 = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._actPieces_5__4,
      0,
      v2,
      (System_String_o *)v3,
      v4,
      v5,
      v6,
      v7);
    this->fields._exe_5__5 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._exe_5__5, 0, v62, v63, v64, v65, v66, v67);
LABEL_49:
    if ( !_4__this->fields.exec )
      goto LABEL_132;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_135;
    if ( WarBoardManager__HasSchedule((WarBoardManager_o *)Instance, 0) )
    {
      v147 = WarBoardAIManager___c_TypeInfo;
      if ( !*(&WarBoardAIManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo, v68, v69);
        v147 = WarBoardAIManager___c_TypeInfo;
      }
      v148 = v147->static_fields;
      _9__12_1 = v148->__9__12_1;
      if ( !_9__12_1 )
      {
        if ( !*(&v147->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v147, v68, v69);
          v148 = WarBoardAIManager___c_TypeInfo->static_fields;
        }
        v150 = (Il2CppObject *)v148->__9;
        _9__12_1 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(_9__12_1, v150, Method_WarBoardAIManager___c__Execute_b__12_1__, 0);
        v151 = WarBoardAIManager___c_TypeInfo->static_fields;
        v151->__9__12_1 = _9__12_1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v151->__9__12_1,
          (int32_t)_9__12_1,
          v152,
          v153,
          v154,
          v155,
          v156,
          v157);
      }
      v158 = (UnityEngine_WaitWhile_o *)sub_2213CCC(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v158, _9__12_1, 0);
      this->fields.__2__current = (Il2CppObject *)v158;
      v159 = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)v159, (int32_t)v158, v160, v161, v162, v163, v164, v165);
      *((_DWORD *)v159 - 2) = 1;
      LOBYTE(Instance) = 1;
      return Instance;
    }
LABEL_52:
    v70 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
    this->fields._isNextPhase_5__3 = 0;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance(v70);
    if ( !Instance )
      goto LABEL_135;
    CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_135;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 10, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_135;
    Instance = *(_QWORD *)(Instance + 440);
    if ( !Instance )
      goto LABEL_135;
    Instance = (__int64)WarBoardData__GetAlivePieces((WarBoardData_o *)Instance, method);
    v71 = this->fields.__8__1;
    if ( !v71 )
      goto LABEL_135;
    v72 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
    _9__2 = (System_Func_object__bool__o *)v71->fields.__9__2;
    if ( !_9__2 )
    {
      _9__2 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarBoardPieceData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__2,
        (Il2CppObject *)v71,
        Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__,
        0);
      v71->fields.__9__2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__2;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v71->fields.__9__2, (int32_t)_9__2, v74, v75, v76, v77, v78, v79);
    }
    v80 = System_Linq_Enumerable__Where_object_(
            v72,
            (System_Func_TSource__bool__o *)_9__2,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    v81 = System_Linq_Enumerable__ToArray_object_(
            v80,
            (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    this->fields._actPieces_5__4 = (struct WarBoardPieceData_array *)v81;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._actPieces_5__4,
      (int32_t)v81,
      v82,
      v83,
      v84,
      v85,
      v86,
      v87);
    v90 = WarBoardAIManager___c_TypeInfo;
    v91 = (System_Collections_Generic_IEnumerable_T__o *)this->fields._actPieces_5__4;
    if ( !*(&WarBoardAIManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo, v88, v89);
      v90 = WarBoardAIManager___c_TypeInfo;
    }
    v92 = v90->static_fields;
    _9__12_3 = (System_Action_object__o *)v92->__9__12_3;
    if ( !_9__12_3 )
    {
      if ( !*(&v90->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v90, v88, v89);
        v92 = WarBoardAIManager___c_TypeInfo->static_fields;
      }
      v94 = (Il2CppObject *)v92->__9;
      _9__12_3 = (System_Action_object__o *)sub_2213CCC(System_Action_WarBoardPieceData__TypeInfo);
      System_Action_object____ctor(_9__12_3, v94, Method_WarBoardAIManager___c__Execute_b__12_3__, 0);
      v95 = WarBoardAIManager___c_TypeInfo->static_fields;
      v95->__9__12_3 = (struct System_Action_WarBoardPieceData__o *)_9__12_3;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v95->__9__12_3,
        (int32_t)_9__12_3,
        v96,
        v97,
        v98,
        v99,
        v100,
        v101);
    }
    BasicHelper__ForEach_object_(
      v91,
      (System_Action_T__o *)_9__12_3,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_WarBoardPieceData___);
    if ( !*(&DefenseAreaData_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DefenseAreaData_TypeInfo, v102, v103);
    DefenseAreaData__ClearCache(0);
    Instance = (__int64)this->fields._ai_5__2;
    if ( !Instance )
      goto LABEL_135;
    v104 = WarBoardAI__Think((WarBoardAI_o *)Instance, 0);
    this->fields._exe_5__5 = v104;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._exe_5__5,
      (int32_t)v104,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
    this->fields._prevTime_5__6 = UnityEngine_Time__get_realtimeSinceStartup(0);
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_135;
  Instance = *(_QWORD *)(Instance + 440);
  if ( !Instance )
    goto LABEL_135;
  if ( WarBoardData__IsWin((WarBoardData_o *)Instance, method) )
    goto LABEL_132;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_135;
  Instance = *(_QWORD *)(Instance + 440);
  if ( !Instance )
    goto LABEL_135;
  Instance = WarBoardData__IsLose((WarBoardData_o *)Instance, method);
  if ( (Instance & 1) != 0 )
    goto LABEL_132;
  v60 = this->fields._ai_5__2;
  if ( !v60 )
    goto LABEL_135;
  if ( v60->fields.isEndRoute )
  {
    v61 = this->fields.__8__1;
    if ( !v61 )
      goto LABEL_135;
    WarBoardAIManager__StartThink(_4__this, v61->fields.forceId, v61->fields.groupId, v55);
    goto LABEL_48;
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v54, (System_String_o *)v55, v56, v57, v58, v59);
  v45 = 5;
LABEL_28:
  *((_DWORD *)p__2__current - 2) = v45;
  LOBYTE(Instance) = 1;
  return Instance;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_WarBoardAIManager__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  int32_t _1__state; // w22
  int32_t v4; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitWhile_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596E0B8 & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&UnityEngine_WaitWhile_TypeInfo);
    sub_2213A60(&Method_WarBoardAIManager__Wait_b__8_0__);
    byte_596E0B8 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( !_1__state )
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    this->fields.__1__state = -1;
    v6 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v6, _4__this, Method_WarBoardAIManager__Wait_b__8_0__, 0);
    v7 = (UnityEngine_WaitWhile_o *)sub_2213CCC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v7, v6, 0);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    v4 = 1;
    goto LABEL_7;
  }
  if ( _1__state == 1 )
  {
    v4 = -1;
LABEL_7:
    this->fields.__1__state = v4;
  }
  return _1__state == 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_WarBoardAIManager__Wait_d__8_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596E0B5 & 1) == 0 )
  {
    sub_2213A60(&WarBoardAIManager___c_TypeInfo);
    byte_596E0B5 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(WarBoardAIManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAIManager___c_TypeInfo->static_fields->__9 = (struct WarBoardAIManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarBoardAIManager___c_TypeInfo->static_fields,
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

  if ( (byte_596E0B6 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596E0B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  return WarBoardManager__HasSchedule((WarBoardManager_o *)Instance, 0);
}


void WarBoardAIManager___c___Execute_b__12_3(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  WarBoardPieceData__ActivateCacheMode(x, 1, 0);
}


void WarBoardAIManager___c___Execute_b__12_4(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return WarBoardAI__get_ForceId(x, 0) == this->fields.forceId && WarBoardAI__get_GroupId(x, 0) == this->fields.groupId;
}


bool WarBoardAIManager___c__DisplayClass12_0___Execute_b__2(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return WarBoardAI__get_ForceId(x, 0) == this->fields.forceId && WarBoardAI__get_GroupId(x, 0) == this->fields.groupId;
}