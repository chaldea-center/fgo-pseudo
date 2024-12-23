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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v17; // x19
  struct WarBoardAIManager_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_Dictionary_int__object__o *v25; // x19
  struct WarBoardAIManager_StaticFields *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_Dictionary_int__object__o *v33; // x19
  struct WarBoardAIManager_StaticFields *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4B64719 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__, v1);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__, v2);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__, v4);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo, v8);
    sub_1BE4ACC(&WarBoardAIManager_TypeInfo, v9);
    byte_4B64719 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v10;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)WarBoardAIManager_TypeInfo->static_fields,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v17,
    (const MethodInfo_32E84B8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
  static_fields = WarBoardAIManager_TypeInfo->static_fields;
  static_fields->dicUniqueIndexPiece = (struct System_Collections_Generic_Dictionary_uint__WarBoardPieceData__o *)v17;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&static_fields->dicUniqueIndexPiece,
    (int64_t)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v25,
    (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
  v26 = WarBoardAIManager_TypeInfo->static_fields;
  v26->dicIndexSquare = (struct System_Collections_Generic_Dictionary_int__WarBoardSquareData__o *)v25;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v26->dicIndexSquare, (int64_t)v25, v27, v28, v29, v30, v31, v32);
  v33 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v33,
    (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  v34 = WarBoardAIManager_TypeInfo->static_fields;
  v34->dicIndexItem = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v33;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v34->dicIndexItem, (int64_t)v33, v35, v36, v37, v38, v39, v40);
}


void __fastcall WarBoardAIManager___ctor(WarBoardAIManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B64718 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardAI___ctor__, method);
    sub_1BE4ACC(&System_Collections_Generic_List_WarBoardAI__TypeInfo, v3);
    byte_4B64718 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_WarBoardAI__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_WarBoardAI___ctor__);
  this->fields.warBoardAIList = (struct System_Collections_Generic_List_WarBoardAI__o *)v4;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4B6470A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4B6470A = 1;
  }
  this->fields.exec = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        sub_1BE4D30(Instance, v4);
      Instance = *(Il2CppObject **)(v6 + 8LL * (int)v8 + 32);
      if ( !Instance )
        break;
      WarBoardPieceData__ClearPrevAiRoute((WarBoardPieceData_o *)Instance, 0LL);
      v7 = *(_DWORD *)(v6 + 24);
      if ( (int)++v8 >= v7 )
        return;
    }
LABEL_12:
    sub_1BE4D28(Instance, v4);
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
  __int64 v15; // x0
  __int64 v16; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v18; // x22
  Il2CppObject *v19; // x0

  if ( (byte_4B64716 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, *(_QWORD *)&forceId);
    sub_1BE4ACC(&System_Func_WarBoardAI__bool__TypeInfo, v11);
    sub_1BE4ACC(&Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__, v12);
    sub_1BE4ACC(&WarBoardAIManager___c__DisplayClass28_0_TypeInfo, v13);
    byte_4B64716 = 1;
  }
  v14 = sub_1BE4D18(WarBoardAIManager___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BE4D28(v15, v16);
  *(_DWORD *)(v14 + 16) = forceId;
  *(_DWORD *)(v14 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v18 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v14,
    Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__FirstOrDefault_object__49793520(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_2F7C9F0 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v19 )
    WarBoardAI__AddRoutePiecePersonalityDic((WarBoardAI_o *)v19, aiId, pieceIndex, 0LL);
}


void __fastcall WarBoardAIManager__CreateAI(
        WarBoardAIManager_o *this,
        WarBoardStageNpcEntity_o *npc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WarBoardAI_o *v6; // x19
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_List_object__o *warBoardAIList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  if ( (byte_4B64709 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardAI__Add__, npc);
    sub_1BE4ACC(&WarBoardAI_TypeInfo, v5);
    byte_4B64709 = 1;
  }
  v6 = (WarBoardAI_o *)sub_1BE4D18(WarBoardAI_TypeInfo);
  WarBoardAI___ctor(v6, npc, 0LL);
  warBoardAIList = (System_Collections_Generic_List_object__o *)this->fields.warBoardAIList;
  if ( !warBoardAIList
    || (items = warBoardAIList->fields._items,
        v16 = Method_System_Collections_Generic_List_WarBoardAI__Add__,
        ++warBoardAIList->fields._version,
        !items) )
  {
    sub_1BE4D28(warBoardAIList, v7);
  }
  size = warBoardAIList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      warBoardAIList,
      (Il2CppObject *)v6,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    warBoardAIList->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v6;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v18 + 4), (int64_t)v6, v8, v9, v10, v11, v12, v13);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B6470E & 1) == 0 )
  {
    sub_1BE4ACC(&WarBoardAIManager__Execute_d__12_TypeInfo, *(_QWORD *)&forceId);
    byte_4B6470E = 1;
  }
  v7 = sub_1BE4D18(WarBoardAIManager__Execute_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 32) = forceId;
  *(_DWORD *)(v7 + 36) = groupId;
  return (System_Collections_IEnumerator_o *)v7;
}


float __fastcall WarBoardAIManager__GetBreakPoint(WarBoardPieceData_o *piece, const MethodInfo *method)
{
  if ( !piece )
    sub_1BE4D28(0LL, method);
  return (float)(piece->fields._breakPoint_k__BackingField + 1)
       / (float)(piece->fields._breakPointMax_k__BackingField + 1);
}


System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *__fastcall WarBoardAIManager__GetEnemyPiece(
        const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardAIManager_c *v2; // x0

  if ( (byte_4B64710 & 1) == 0 )
  {
    sub_1BE4ACC(&WarBoardAIManager_TypeInfo, v1);
    byte_4B64710 = 1;
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

  if ( (byte_4B64711 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__, method);
    sub_1BE4ACC(&WarBoardAIManager_TypeInfo, v3);
    byte_4B64711 = 1;
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
    sub_1BE4D28(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicSquareIndexEnemyPiece,
         squareIndex,
         &value,
         (const MethodInfo_3251FF4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__) )
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

  if ( (byte_4B64714 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__, method);
    sub_1BE4ACC(&WarBoardAIManager_TypeInfo, v3);
    byte_4B64714 = 1;
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
    sub_1BE4D28(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicIndexItem,
         squareIndex,
         &value,
         (const MethodInfo_3251FF4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__) )
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

  if ( (byte_4B64712 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__, method);
    sub_1BE4ACC(&WarBoardAIManager_TypeInfo, v3);
    byte_4B64712 = 1;
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
    sub_1BE4D28(0LL, method);
  if ( System_Collections_Generic_Dictionary_uint__object___TryGetValue(
         dicUniqueIndexPiece,
         uniqueIndex,
         &value,
         (const MethodInfo_32EA618 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__) )
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

  if ( (byte_4B64713 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__, method);
    sub_1BE4ACC(&WarBoardAIManager_TypeInfo, v3);
    byte_4B64713 = 1;
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
    sub_1BE4D28(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicIndexSquare,
         squareIndex,
         &value,
         (const MethodInfo_3251FF4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__) )
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
  if ( (byte_4B64708 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__, npcList);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__get_Current__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardAI__Clear__, v7);
    this = (WarBoardAIManager_o *)sub_1BE4ACC(
                                    &Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__,
                                    v8);
    byte_4B64708 = 1;
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
    sub_1BE4D28(this, npcList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)npcList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    if ( !v12 )
      break;
    if ( !v15.fields._current )
      sub_1BE4D28(v12, v13);
    if ( HIDWORD(v15.fields._current[1].klass) || LODWORD(v15.fields._current[1].monitor) )
      WarBoardAIManager__CreateAI(v4, (WarBoardStageNpcEntity_o *)v15.fields._current, v14);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
}


bool __fastcall WarBoardAIManager__IsAllyPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_1BE4D28(one, two);
  return one->fields._forceId_k__BackingField == two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEnemyBlock(int32_t squareIndex, const MethodInfo *method)
{
  if ( (byte_4B64715 & 1) == 0 )
  {
    sub_1BE4ACC(&WarBoardAIManager_TypeInfo, method);
    byte_4B64715 = 1;
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
    sub_1BE4D28(one, two);
  return one->fields._forceId_k__BackingField != two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEqualPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_1BE4D28(one, two);
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
  AStarSearch_c *v17; // x0
  const MethodInfo *v18; // x3

  if ( (byte_4B6470C & 1) == 0 )
  {
    sub_1BE4ACC(&AStarSearch_TypeInfo, *(_QWORD *)&forceId);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, v7);
    sub_1BE4ACC(&System_Func_WarBoardAI__bool__TypeInfo, v8);
    sub_1BE4ACC(&Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__, v9);
    sub_1BE4ACC(&WarBoardAIManager___c__DisplayClass9_0_TypeInfo, v10);
    byte_4B6470C = 1;
  }
  v11 = sub_1BE4D18(WarBoardAIManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1BE4D28(v12, v13);
  *(_DWORD *)(v11 + 16) = forceId;
  *(_DWORD *)(v11 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v15 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__49793520(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_2F7C9F0 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v16 )
  {
    this->fields.exec = 1;
    LOBYTE(v16[2].klass) = 0;
    v17 = AStarSearch_TypeInfo;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    AStarSearch__DetourCacheClear((const MethodInfo *)v17);
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicUniqueIndexPiece; // x0
  __int64 v22; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v24; // x22
  Il2CppObject *v25; // x0
  WarBoardAIManager_c *v26; // x0
  __int64 v27; // x8
  __int64 v28; // x24
  int v29; // w8
  unsigned int v30; // w25
  __int64 v31; // x21
  WarBoardAIManager_c *v32; // x0
  WarBoardAIManager_c *v33; // x0
  WarBoardAIManager_c *v34; // x0
  __int64 v35; // x8
  __int64 v36; // x24
  int v37; // w8
  unsigned int v38; // w25
  __int64 v39; // x21
  WarBoardAIManager_c *v40; // x0
  const MethodInfo *v41; // x3
  __int64 v42; // x8
  __int64 v43; // x23
  int v44; // w8
  unsigned int v45; // w24
  __int64 v46; // x21
  struct System_Collections_IEnumerator_o *v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7

  if ( (byte_4B6470D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__, *(_QWORD *)&forceId);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__, v13);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___, v14);
    sub_1BE4ACC(&System_Func_WarBoardAI__bool__TypeInfo, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    sub_1BE4ACC(&Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__, v17);
    sub_1BE4ACC(&WarBoardAIManager___c__DisplayClass11_0_TypeInfo, v18);
    sub_1BE4ACC(&WarBoardAIManager_TypeInfo, v19);
    byte_4B6470D = 1;
  }
  v20 = sub_1BE4D18(WarBoardAIManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_57;
  *(_DWORD *)(v20 + 16) = forceId;
  *(_DWORD *)(v20 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v24 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v20,
    Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__,
    0LL);
  v25 = System_Linq_Enumerable__SingleOrDefault_object__49875176(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_2F908E8 *)Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
  if ( !v25 )
    return;
  this->fields.isPause = 0;
  WarBoardAI__Clear((WarBoardAI_o *)v25, 0LL);
  v26 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v26 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v26->static_fields->dicUniqueIndexPiece;
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    dicUniqueIndexPiece,
    (const MethodInfo_32E9014 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
    (const MethodInfo_32509F0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  v27 = *(_QWORD *)&dicUniqueIndexPiece[5].fields._freeCount;
  if ( !v27 )
    goto LABEL_57;
  v28 = *(_QWORD *)(v27 + 48);
  if ( !v28 )
    goto LABEL_57;
  v29 = *(_DWORD *)(v28 + 24);
  if ( v29 >= 1 )
  {
    v30 = 0;
    while ( v30 < v29 )
    {
      v31 = *(_QWORD *)(v28 + 8LL * (int)v30 + 32);
      if ( !v31 )
        goto LABEL_57;
      if ( !*(_BYTE *)(v31 + 60) )
      {
        v32 = WarBoardAIManager_TypeInfo;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          v32 = WarBoardAIManager_TypeInfo;
        }
        dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v32->static_fields->dicUniqueIndexPiece;
        if ( !dicUniqueIndexPiece )
          goto LABEL_57;
        System_Collections_Generic_Dictionary_uint__object___Add(
          dicUniqueIndexPiece,
          *(_DWORD *)(v31 + 44),
          (Il2CppObject *)v31,
          (const MethodInfo_32E8E8C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
        if ( *(_DWORD *)(v31 + 20) != *(_DWORD *)(v20 + 16) )
        {
          v33 = WarBoardAIManager_TypeInfo;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            v33 = WarBoardAIManager_TypeInfo;
          }
          dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v33->static_fields->dicSquareIndexEnemyPiece;
          if ( !dicUniqueIndexPiece )
            goto LABEL_57;
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
            *(_DWORD *)(v31 + 64),
            (Il2CppObject *)v31,
            (const MethodInfo_3250868 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
        }
      }
      v29 = *(_DWORD *)(v28 + 24);
      if ( (int)++v30 >= v29 )
        goto LABEL_26;
    }
LABEL_58:
    sub_1BE4D30(dicUniqueIndexPiece, v22);
  }
LABEL_26:
  v34 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v34 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v34->static_fields->dicIndexSquare;
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
    (const MethodInfo_32509F0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !dicUniqueIndexPiece )
    goto LABEL_57;
  v35 = *(_QWORD *)&dicUniqueIndexPiece[5].fields._freeCount;
  if ( !v35 )
    goto LABEL_57;
  v36 = *(_QWORD *)(v35 + 56);
  if ( !v36 )
    goto LABEL_57;
  v37 = *(_DWORD *)(v36 + 24);
  if ( v37 >= 1 )
  {
    v38 = 0;
    while ( v38 < v37 )
    {
      dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo;
      v39 = *(_QWORD *)(v36 + 8LL * (int)v38 + 32);
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v39 )
        goto LABEL_57;
      dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicUniqueIndexPiece[2].fields._entries->bounds;
      if ( !dicUniqueIndexPiece )
        goto LABEL_57;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
        *(_DWORD *)(v39 + 16),
        (Il2CppObject *)v39,
        (const MethodInfo_3250868 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
      v37 = *(_DWORD *)(v36 + 24);
      if ( (int)++v38 >= v37 )
        goto LABEL_40;
    }
    goto LABEL_58;
  }
LABEL_40:
  v40 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v40 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v40->static_fields->dicIndexItem;
  if ( !dicUniqueIndexPiece
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
          (const MethodInfo_32509F0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__),
        (dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v42 = *(_QWORD *)&dicUniqueIndexPiece[5].fields._freeCount) == 0
    || (v43 = *(_QWORD *)(v42 + 72)) == 0 )
  {
LABEL_57:
    sub_1BE4D28(dicUniqueIndexPiece, v22);
  }
  v44 = *(_DWORD *)(v43 + 24);
  if ( v44 >= 1 )
  {
    v45 = 0;
    while ( v45 < v44 )
    {
      dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo;
      v46 = *(_QWORD *)(v43 + 8LL * (int)v45 + 32);
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v46 )
        goto LABEL_57;
      dicUniqueIndexPiece = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&dicUniqueIndexPiece[2].fields._entries->max_length;
      if ( !dicUniqueIndexPiece )
        goto LABEL_57;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)dicUniqueIndexPiece,
        *(_DWORD *)(v46 + 16),
        (Il2CppObject *)v46,
        (const MethodInfo_3250868 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
      v44 = *(_DWORD *)(v43 + 24);
      if ( (int)++v45 >= v44 )
        goto LABEL_54;
    }
    goto LABEL_58;
  }
LABEL_54:
  if ( !this->fields.executeTask )
  {
    v47 = WarBoardAIManager__Execute(this, *(_DWORD *)(v20 + 16), *(_DWORD *)(v20 + 20), v41);
    this->fields.executeTask = v47;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.executeTask, (int64_t)v47, v48, v49, v50, v51, v52, v53);
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

  if ( (byte_4B6470F & 1) == 0 )
  {
    sub_1BE4ACC(&WarBoardManager_TypeInfo, method);
    byte_4B6470F = 1;
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
      sub_1BE4A70(p_executeTask, 0LL, v6, v7, v8, v9, v10, v11);
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
  __int64 v15; // x0
  __int64 v16; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v18; // x22
  Il2CppObject *v19; // x0

  if ( (byte_4B64717 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, *(_QWORD *)&forceId);
    sub_1BE4ACC(&System_Func_WarBoardAI__bool__TypeInfo, v11);
    sub_1BE4ACC(&Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__, v12);
    sub_1BE4ACC(&WarBoardAIManager___c__DisplayClass29_0_TypeInfo, v13);
    byte_4B64717 = 1;
  }
  v14 = sub_1BE4D18(WarBoardAIManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BE4D28(v15, v16);
  *(_DWORD *)(v14 + 16) = forceId;
  *(_DWORD *)(v14 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v18 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v14,
    Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__FirstOrDefault_object__49793520(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_2F7C9F0 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v19 )
    WarBoardAI__UpdateRoutePiecePersonalityDic((WarBoardAI_o *)v19, aiId, pieceIndex, 0LL);
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

  if ( (byte_4B6470B & 1) == 0 )
  {
    sub_1BE4ACC(&WarBoardAIManager__Wait_d__8_TypeInfo, method);
    byte_4B6470B = 1;
  }
  v3 = sub_1BE4D18(WarBoardAIManager__Wait_d__8_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  WarBoardAIManager_o *_4__this; // x20
  Il2CppObject *v31; // x21
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  Il2CppObject *_8__1; // x21
  System_Collections_Generic_IEnumerable_TSource__o *warBoardAIList; // x22
  System_Func_object__bool__o *v40; // x23
  Il2CppObject *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct WarBoardAIManager___c__DisplayClass12_0_o *v48; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v49; // x22
  System_Func_object__bool__o *_9__2; // x24
  WarBoardAIManager__Execute_d__12_o *v51; // x21
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  System_Object_array *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  WarBoardAIManager___c_c *v66; // x0
  System_Collections_Generic_IEnumerable_T__o *actPieces_5__4; // x21
  System_Action_object__o *_9__12_3; // x22
  Il2CppObject *v69; // x23
  struct WarBoardAIManager___c_StaticFields *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  System_Collections_IEnumerator_o *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  WarBoardAIManager___c_c *v84; // x0
  System_Func_bool__o *_9__12_1; // x20
  Il2CppObject *v86; // x21
  struct WarBoardAIManager___c_StaticFields *static_fields; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  UnityEngine_WaitWhile_o *v94; // x21
  PartyOrganizationUtility_o *v95; // x19
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  bool result; // w0
  struct System_Collections_IEnumerator_o *v103; // x21
  System_Collections_IEnumerator_c *v104; // x8
  __int64 v105; // x9
  System_Collections_IEnumerator_c **v106; // x10
  __int64 v107; // x0
  __int64 v108; // x0
  struct System_Collections_IEnumerator_o *v109; // x22
  System_Collections_IEnumerator_c *v110; // x8
  WarBoardAIManager__Execute_d__12_o *v111; // x21
  __int64 v112; // x9
  System_Collections_IEnumerator_c **v113; // x10
  __int64 v114; // x0
  WarBoardAIManager__Execute_d__12_o *v115; // x22
  int64_t v116; // x0
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  System_Collections_IEnumerator_o **p_enumeratorChild_5__7; // x21
  System_Collections_IEnumerator_o *v124; // x22
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  float realtimeSinceStartup; // s0
  Il2CppObject **p__2__current; // x19
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  int v139; // w8
  struct System_Collections_IEnumerator_o *exe_5__5; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v142; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  WarBoardAIManager___c_c *v145; // x0
  System_Collections_Generic_IEnumerable_T__o *v146; // x21
  System_Action_object__o *_9__12_4; // x22
  Il2CppObject *v148; // x23
  struct WarBoardAIManager___c_StaticFields *v149; // x0
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  struct WarBoardAI_o *ai_5__2; // x8
  int64_t v157; // x2
  const MethodInfo *v158; // x3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  struct WarBoardAI_o *v163; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v164; // x8
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  struct System_Collections_IEnumerator_o *v171; // x21
  System_Collections_IEnumerator_c *v172; // x8
  __int64 v173; // x9
  System_Collections_IEnumerator_c **v174; // x10
  __int64 v175; // x0
  float v176; // s0
  int64_t v177; // x2
  int32_t v178; // w3
  System_String_o *v179; // x4
  BattleSetupInfo_o *v180; // x5
  FollowerInfo_o *v181; // x6
  PartyListViewItem_o *v182; // x7
  System_Collections_IEnumerator_o *v183; // x0
  int64_t v184; // x2
  int32_t v185; // w3
  System_String_o *v186; // x4
  BattleSetupInfo_o *v187; // x5
  FollowerInfo_o *v188; // x6
  PartyListViewItem_o *v189; // x7
  WarBoardData_o *v190; // x0
  const MethodInfo *v191; // x1

  v8 = this;
  if ( (byte_4B6471C & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_WarBoardPieceData__TypeInfo, method);
    sub_1BE4ACC(&Method_BasicHelper_ForEach_WarBoardPieceData___, v9);
    sub_1BE4ACC(&bool_TypeInfo, v10);
    sub_1BE4ACC(&DefenseAreaData_TypeInfo, v11);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, v12);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, v13);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v14);
    sub_1BE4ACC(&System_Func_bool__TypeInfo, v15);
    sub_1BE4ACC(&System_Func_WarBoardAI__bool__TypeInfo, v16);
    sub_1BE4ACC(&System_Func_WarBoardPieceData__bool__TypeInfo, v17);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v20);
    sub_1BE4ACC(&Method_WarBoardAIManager___c__Execute_b__12_1__, v21);
    sub_1BE4ACC(&Method_WarBoardAIManager___c__Execute_b__12_3__, v22);
    sub_1BE4ACC(&Method_WarBoardAIManager___c__Execute_b__12_4__, v23);
    sub_1BE4ACC(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__, v24);
    sub_1BE4ACC(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__, v25);
    sub_1BE4ACC(&WarBoardAIManager___c__DisplayClass12_0_TypeInfo, v26);
    sub_1BE4ACC(&WarBoardAIManager___c_TypeInfo, v27);
    sub_1BE4ACC(&UnityEngine_WaitWhile_TypeInfo, v28);
    this = (WarBoardAIManager__Execute_d__12_o *)sub_1BE4ACC(&WarBoardManager_TypeInfo, v29);
    byte_4B6471C = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v31 = (Il2CppObject *)sub_1BE4D18(WarBoardAIManager___c__DisplayClass12_0_TypeInfo);
      System_Object___ctor(v31, 0LL);
      v8->fields.__8__1 = (struct WarBoardAIManager___c__DisplayClass12_0_o *)v31;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v31, v32, v33, v34, v35, v36, v37);
      _8__1 = (Il2CppObject *)v8->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_123;
      _8__1[1].klass = *(Il2CppClass **)&v8->fields.forceId;
      if ( !_4__this )
        goto LABEL_123;
      warBoardAIList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.warBoardAIList;
      v40 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_WarBoardAI__bool__TypeInfo);
      System_Func_object__bool____ctor(v40, _8__1, Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__, 0LL);
      v41 = System_Linq_Enumerable__FirstOrDefault_object__49793520(
              warBoardAIList,
              (System_Func_TSource__bool__o *)v40,
              (const MethodInfo_2F7C9F0 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
      v8->fields._ai_5__2 = (struct WarBoardAI_o *)v41;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._ai_5__2, (int64_t)v41, v42, v43, v44, v45, v46, v47);
      if ( !v8->fields._ai_5__2 )
        return 0;
      goto LABEL_102;
    case 1:
      v48 = v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !v48 || !_4__this )
        goto LABEL_123;
      WarBoardAIManager__StartThink(_4__this, v48->fields.forceId, v48->fields.groupId, v3);
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
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
        if ( this )
        {
          if ( WarBoardData__IsWin((WarBoardData_o *)this, method) )
            return 0;
          this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !this )
            goto LABEL_123;
          this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
          if ( !this )
            goto LABEL_123;
          this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__IsLose((WarBoardData_o *)this, method);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 0;
          v163 = v8->fields._ai_5__2;
          if ( v163 )
          {
            if ( !v163->fields.isEndRoute )
            {
              v8->fields.__2__current = 0LL;
              p__2__current = &v8->fields.__2__current;
              sub_1BE4A70((PartyOrganizationUtility_o *)p__2__current, 0LL, v157, (int32_t)v158, v159, v160, v161, v162);
              v139 = 5;
              goto LABEL_65;
            }
            v164 = v8->fields.__8__1;
            if ( v164 )
            {
              WarBoardAIManager__StartThink(_4__this, v164->fields.forceId, v164->fields.groupId, v158);
              goto LABEL_101;
            }
          }
        }
      }
LABEL_123:
      sub_1BE4D28(this, method);
    }
    do
    {
LABEL_101:
      v8->fields._actPieces_5__4 = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._actPieces_5__4, 0LL, v2, (int32_t)v3, v4, v5, v6, v7);
      v8->fields._exe_5__5 = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._exe_5__5, 0LL, v165, v166, v167, v168, v169, v170);
LABEL_102:
      if ( !_4__this->fields.exec )
        return 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_123;
      if ( WarBoardManager__HasSchedule((WarBoardManager_o *)this, 0LL) )
      {
        v84 = WarBoardAIManager___c_TypeInfo;
        if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
          v84 = WarBoardAIManager___c_TypeInfo;
        }
        _9__12_1 = v84->static_fields->__9__12_1;
        if ( !_9__12_1 )
        {
          if ( !v84->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v84);
            v84 = WarBoardAIManager___c_TypeInfo;
          }
          v86 = (Il2CppObject *)v84->static_fields->__9;
          _9__12_1 = (System_Func_bool__o *)sub_1BE4D18(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(_9__12_1, v86, Method_WarBoardAIManager___c__Execute_b__12_1__, 0LL);
          static_fields = WarBoardAIManager___c_TypeInfo->static_fields;
          static_fields->__9__12_1 = _9__12_1;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&static_fields->__9__12_1,
            (int64_t)_9__12_1,
            v88,
            v89,
            v90,
            v91,
            v92,
            v93);
        }
        v94 = (UnityEngine_WaitWhile_o *)sub_1BE4D18(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v94, _9__12_1, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v94;
        v95 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BE4A70(v95, (int64_t)v94, v96, v97, v98, v99, v100, v101);
        result = 1;
        *(_DWORD *)&v95[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
LABEL_19:
      v8->fields._isNextPhase_5__3 = 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetLoadMode((CommonUI_o *)this, 10, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_123;
      this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
      if ( !this )
        goto LABEL_123;
      this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__GetAlivePieces((WarBoardData_o *)this, method);
      v49 = v8->fields.__8__1;
      if ( !v49 )
        goto LABEL_123;
      _9__2 = (System_Func_object__bool__o *)v49->fields.__9__2;
      v51 = this;
      if ( !_9__2 )
      {
        _9__2 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__2,
          (Il2CppObject *)v49,
          Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__,
          0LL);
        v49->fields.__9__2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__2;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v49->fields.__9__2, (int64_t)_9__2, v52, v53, v54, v55, v56, v57);
      }
      v58 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v51,
              (System_Func_TSource__bool__o *)_9__2,
              (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      v59 = System_Linq_Enumerable__ToArray_object_(
              v58,
              (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      v8->fields._actPieces_5__4 = (struct WarBoardPieceData_array *)v59;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._actPieces_5__4, (int64_t)v59, v60, v61, v62, v63, v64, v65);
      v66 = WarBoardAIManager___c_TypeInfo;
      actPieces_5__4 = (System_Collections_Generic_IEnumerable_T__o *)v8->fields._actPieces_5__4;
      if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v66 = WarBoardAIManager___c_TypeInfo;
      }
      _9__12_3 = (System_Action_object__o *)v66->static_fields->__9__12_3;
      if ( !_9__12_3 )
      {
        if ( !v66->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v66);
          v66 = WarBoardAIManager___c_TypeInfo;
        }
        v69 = (Il2CppObject *)v66->static_fields->__9;
        _9__12_3 = (System_Action_object__o *)sub_1BE4D18(System_Action_WarBoardPieceData__TypeInfo);
        System_Action_object____ctor(_9__12_3, v69, Method_WarBoardAIManager___c__Execute_b__12_3__, 0LL);
        v70 = WarBoardAIManager___c_TypeInfo->static_fields;
        v70->__9__12_3 = (struct System_Action_WarBoardPieceData__o *)_9__12_3;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v70->__9__12_3, (int64_t)_9__12_3, v71, v72, v73, v74, v75, v76);
      }
      BasicHelper__ForEach_object_(
        actPieces_5__4,
        (System_Action_T__o *)_9__12_3,
        (const MethodInfo_2F4606C *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      if ( !DefenseAreaData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DefenseAreaData_TypeInfo);
      DefenseAreaData__ClearCache(0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)v8->fields._ai_5__2;
      if ( !this )
        goto LABEL_123;
      v77 = WarBoardAI__Think((WarBoardAI_o *)this, 0LL);
      v8->fields._exe_5__5 = v77;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._exe_5__5, (int64_t)v77, v78, v79, v80, v81, v82, v83);
      v8->fields._prevTime_5__6 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      while ( 1 )
      {
LABEL_68:
        exe_5__5 = v8->fields._exe_5__5;
        if ( !exe_5__5 )
          goto LABEL_123;
        klass = exe_5__5->klass;
        v142 = *(unsigned __int16 *)(&exe_5__5->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&exe_5__5->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v142;
            p_offset += 4;
            if ( !v142 )
              goto LABEL_73;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_73:
          p_method = sub_1C36AAC(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                       exe_5__5,
                                                       *(_QWORD *)(p_method + 8));
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_76;
        v103 = v8->fields._exe_5__5;
        if ( !v103 )
          goto LABEL_123;
        v104 = v103->klass;
        v105 = *(unsigned __int16 *)(&v103->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v103->klass->_2.bitflags2 + 3) )
        {
          v106 = (System_Collections_IEnumerator_c **)&v104->_1.interfaceOffsets->offset;
          while ( *(v106 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v105;
            v106 += 2;
            if ( !v105 )
              goto LABEL_48;
          }
          v107 = (__int64)&v104->vtable[*(_DWORD *)v106 + 1].method;
        }
        else
        {
LABEL_48:
          v107 = sub_1C36AAC(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v108 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v107)(
                 v103,
                 *(_QWORD *)(v107 + 8));
        this = (WarBoardAIManager__Execute_d__12_o *)sub_1BE4C08(v108, System_Collections_IEnumerator_TypeInfo);
        v109 = v8->fields._exe_5__5;
        if ( !v109 )
          goto LABEL_123;
        v110 = v109->klass;
        v111 = this;
        v112 = *(unsigned __int16 *)(&v109->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v109->klass->_2.bitflags2 + 3) )
        {
          v113 = (System_Collections_IEnumerator_c **)&v110->_1.interfaceOffsets->offset;
          while ( *(v113 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v112;
            v113 += 2;
            if ( !v112 )
              goto LABEL_55;
          }
          v114 = (__int64)&v110->vtable[*(_DWORD *)v113 + 1].method;
        }
        else
        {
LABEL_55:
          v114 = sub_1C36AAC(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v114)(
                                                       v109,
                                                       *(_QWORD *)(v114 + 8));
        v115 = this;
        if ( v111 )
        {
          v8->fields._enumeratorChild_5__7 = (struct System_Collections_IEnumerator_o *)sub_1BE4C08(
                                                                                          this,
                                                                                          System_Collections_IEnumerator_TypeInfo);
          v116 = sub_1BE4C08(v115, System_Collections_IEnumerator_TypeInfo);
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&v8->fields._enumeratorChild_5__7,
            v116,
            v117,
            v118,
            v119,
            v120,
            v121,
            v122);
LABEL_59:
          p_enumeratorChild_5__7 = &v8->fields._enumeratorChild_5__7;
          while ( 1 )
          {
            v124 = *p_enumeratorChild_5__7;
            if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
            if ( !WarBoardManager__IEnumeratorExecute(v124, 0LL) )
              break;
            if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v8->fields._prevTime_5__6) >= 0.1 )
            {
              realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
              v8->fields.__2__current = 0LL;
              p__2__current = &v8->fields.__2__current;
              *((float *)p__2__current + 16) = realtimeSinceStartup;
              sub_1BE4A70((PartyOrganizationUtility_o *)p__2__current, 0LL, v133, v134, v135, v136, v137, v138);
              v139 = 2;
              goto LABEL_65;
            }
          }
          *p_enumeratorChild_5__7 = 0LL;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&v8->fields._enumeratorChild_5__7,
            0LL,
            v125,
            v126,
            v127,
            v128,
            v129,
            v130);
          goto LABEL_67;
        }
        if ( this && (System_Boolean_c *)this->klass == bool_TypeInfo )
          break;
LABEL_67:
        if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v8->fields._prevTime_5__6) >= 0.1 )
        {
          v176 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          v8->fields.__2__current = 0LL;
          p__2__current = &v8->fields.__2__current;
          *((float *)p__2__current + 16) = v176;
          sub_1BE4A70((PartyOrganizationUtility_o *)p__2__current, 0LL, v177, v178, v179, v180, v181, v182);
          v139 = 3;
          goto LABEL_65;
        }
      }
      v171 = v8->fields._exe_5__5;
      if ( !v171 )
        goto LABEL_123;
      v172 = v171->klass;
      v173 = *(unsigned __int16 *)(&v171->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v171->klass->_2.bitflags2 + 3) )
      {
        v174 = (System_Collections_IEnumerator_c **)&v172->_1.interfaceOffsets->offset;
        while ( *(v174 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v173;
          v174 += 2;
          if ( !v173 )
            goto LABEL_111;
        }
        v175 = (__int64)&v172->vtable[*(_DWORD *)v174 + 1].method;
      }
      else
      {
LABEL_111:
        v175 = sub_1C36AAC(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v175)(
                                                     v171,
                                                     *(_QWORD *)(v175 + 8));
      if ( !this )
        goto LABEL_123;
      if ( this->klass->_1.element_class != bool_TypeInfo->_1.element_class )
      {
        sub_1BE4FE8(this);
        return (unsigned __int8)WarBoardData__GetAlivePieces(v190, v191);
      }
      v8->fields._isNextPhase_5__3 = *(_BYTE *)j_il2cpp_object_unbox_0();
LABEL_76:
      v145 = WarBoardAIManager___c_TypeInfo;
      v146 = (System_Collections_Generic_IEnumerable_T__o *)v8->fields._actPieces_5__4;
      if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v145 = WarBoardAIManager___c_TypeInfo;
      }
      _9__12_4 = (System_Action_object__o *)v145->static_fields->__9__12_4;
      if ( !_9__12_4 )
      {
        if ( !v145->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v145);
          v145 = WarBoardAIManager___c_TypeInfo;
        }
        v148 = (Il2CppObject *)v145->static_fields->__9;
        _9__12_4 = (System_Action_object__o *)sub_1BE4D18(System_Action_WarBoardPieceData__TypeInfo);
        System_Action_object____ctor(_9__12_4, v148, Method_WarBoardAIManager___c__Execute_b__12_4__, 0LL);
        v149 = WarBoardAIManager___c_TypeInfo->static_fields;
        v149->__9__12_4 = (struct System_Action_WarBoardPieceData__o *)_9__12_4;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v149->__9__12_4,
          (int64_t)_9__12_4,
          v150,
          v151,
          v152,
          v153,
          v154,
          v155);
      }
      BasicHelper__ForEach_object_(
        v146,
        (System_Action_T__o *)_9__12_4,
        (const MethodInfo_2F4606C *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( v8->fields._isNextPhase_5__3 )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v183 = WarBoardAIManager__Wait(_4__this, method);
  v8->fields.__2__current = (Il2CppObject *)v183;
  p__2__current = &v8->fields.__2__current;
  sub_1BE4A70((PartyOrganizationUtility_o *)p__2__current, (int64_t)v183, v184, v185, v186, v187, v188, v189);
  v139 = 4;
LABEL_65:
  *((_DWORD *)p__2__current - 2) = v139;
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_WarBoardAIManager__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int32_t v16; // w8

  if ( (byte_4B6471D & 1) == 0 )
  {
    sub_1BE4ACC(&System_Func_bool__TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_WaitWhile_TypeInfo, v3);
    sub_1BE4ACC(&Method_WarBoardAIManager__Wait_b__8_0__, v4);
    byte_4B6471D = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v16 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v8 = (System_Func_bool__o *)sub_1BE4D18(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v8, _4__this, Method_WarBoardAIManager__Wait_b__8_0__, 0LL);
    v9 = (UnityEngine_WaitWhile_o *)sub_1BE4D18(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v9, v8, 0LL);
    this->fields.__2__current = (Il2CppObject *)v9;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v9, v10, v11, v12, v13, v14, v15);
    v16 = 1;
    result = 1;
  }
  this->fields.__1__state = v16;
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_WarBoardAIManager__Wait_d__8_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6471A & 1) == 0 )
  {
    sub_1BE4ACC(&WarBoardAIManager___c_TypeInfo, v1);
    byte_4B6471A = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(WarBoardAIManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardAIManager___c_TypeInfo->static_fields->__9 = (struct WarBoardAIManager___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)WarBoardAIManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall WarBoardAIManager___c___ctor(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c___Execute_b__12_1(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B6471B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4B6471B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v3);
  return WarBoardManager__HasSchedule((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_3(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BE4D28(this, 0LL);
  WarBoardPieceData__ActivateCacheMode(x, 1, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_4(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BE4D28(this, 0LL);
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
    sub_1BE4D28(this, 0LL);
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
    sub_1BE4D28(this, 0LL);
  return WarBoardAI__get_ForceId(x, 0LL) == this->fields.forceId
      && WarBoardAI__get_GroupId(x, 0LL) == this->fields.groupId;
}


bool __fastcall WarBoardAIManager___c__DisplayClass12_0___Execute_b__2(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BE4D28(this, 0LL);
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
    sub_1BE4D28(this, 0LL);
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
    sub_1BE4D28(this, 0LL);
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
    sub_1BE4D28(this, 0LL);
  return WarBoardAI__get_ForceId(x, 0LL) == this->fields.forceId
      && WarBoardAI__get_GroupId(x, 0LL) == this->fields.groupId;
}