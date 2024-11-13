void __fastcall WarBoardAIManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
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
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_Dictionary_int__object__o *v20; // x19
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v30; // x19
  struct WarBoardAIManager_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Collections_Generic_Dictionary_int__object__o *v41; // x19
  struct WarBoardAIManager_StaticFields *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Collections_Generic_Dictionary_int__object__o *v52; // x19
  struct WarBoardAIManager_StaticFields *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7

  if ( (byte_4B13CAE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo, v16, v17);
    sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v18, v19);
    byte_4B13CAE = 1;
  }
  v20 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                  v1,
                                                                  v2,
                                                                  v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v20,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v20;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardAIManager_TypeInfo->static_fields,
    (int64_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v30 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo,
                                                                   v27,
                                                                   v28,
                                                                   v29);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v30,
    (const MethodInfo_329D4F4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
  static_fields = WarBoardAIManager_TypeInfo->static_fields;
  static_fields->dicUniqueIndexPiece = (struct System_Collections_Generic_Dictionary_uint__WarBoardPieceData__o *)v30;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->dicUniqueIndexPiece,
    (int64_t)v30,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v41 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo,
                                                                  v38,
                                                                  v39,
                                                                  v40);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v41,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
  v42 = WarBoardAIManager_TypeInfo->static_fields;
  v42->dicIndexSquare = (struct System_Collections_Generic_Dictionary_int__WarBoardSquareData__o *)v41;
  sub_1BCA784((PartyOrganizationUtility_o *)&v42->dicIndexSquare, (int64_t)v41, v43, v44, v45, v46, v47, v48);
  v52 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo,
                                                                  v49,
                                                                  v50,
                                                                  v51);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v52,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  v53 = WarBoardAIManager_TypeInfo->static_fields;
  v53->dicIndexItem = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v52;
  sub_1BCA784((PartyOrganizationUtility_o *)&v53->dicIndexItem, (int64_t)v52, v54, v55, v56, v57, v58, v59);
}


void __fastcall WarBoardAIManager___ctor(WarBoardAIManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B13CAD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAI___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardAI__TypeInfo, v5, v6);
    byte_4B13CAD = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_WarBoardAI__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardAI___ctor__);
  this->fields.warBoardAIList = (struct System_Collections_Generic_List_WarBoardAI__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIManager__AIEnd(WarBoardAIManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  _QWORD *monitor; // x8
  __int64 v7; // x19
  int v8; // w8
  unsigned int v9; // w20

  if ( (byte_4B13C9F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B13C9F = 1;
  }
  this->fields.exec = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        sub_1BCAA44(Instance, v5);
      Instance = *(Il2CppObject **)(v7 + 8LL * (int)v9 + 32);
      if ( !Instance )
        break;
      WarBoardPieceData__ClearPrevAiRoute((WarBoardPieceData_o *)Instance, 0LL);
      v8 = *(_DWORD *)(v7 + 24);
      if ( (int)++v9 >= v8 )
        return;
    }
LABEL_12:
    sub_1BCAA3C(Instance, v5);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x24
  WarBoardAIRoute_o *klass; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v23; // x22
  Il2CppObject *v24; // x0
  const MethodInfo *v25; // x3

  if ( (byte_4B13CAB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, *(_QWORD *)&forceId, *(_QWORD *)&groupId);
    sub_1BCA7E0(&System_Func_WarBoardAI__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__, v13, v14);
    sub_1BCA7E0(&WarBoardAIManager___c__DisplayClass28_0_TypeInfo, v15, v16);
    byte_4B13CAB = 1;
  }
  v17 = sub_1BCAA2C(
          WarBoardAIManager___c__DisplayClass28_0_TypeInfo,
          *(_QWORD *)&forceId,
          *(_QWORD *)&groupId,
          *(_QWORD *)&aiId);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_8;
  *(_DWORD *)(v17 + 16) = forceId;
  *(_DWORD *)(v17 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v23 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardAI__bool__TypeInfo, v19, v20, v21);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v17,
    Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__,
    0LL);
  v24 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v24 )
  {
    klass = (WarBoardAIRoute_o *)v24[1].klass;
    if ( klass )
    {
      WarBoardAIRoute__AddPiecePersonalityDic(klass, aiId, pieceIndex, v25);
      return;
    }
LABEL_8:
    sub_1BCAA3C(klass, v19);
  }
}


void __fastcall WarBoardAIManager__CreateAI(
        WarBoardAIManager_o *this,
        WarBoardStageNpcEntity_o *npc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  WarBoardAI_o *v8; // x19
  const MethodInfo *v9; // x2
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_List_object__o *warBoardAIList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8

  if ( (byte_4B13C9E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAI__Add__, npc, method);
    sub_1BCA7E0(&WarBoardAI_TypeInfo, v6, v7);
    byte_4B13C9E = 1;
  }
  v8 = (WarBoardAI_o *)sub_1BCAA2C(WarBoardAI_TypeInfo, npc, method, v3);
  WarBoardAI___ctor(v8, npc, v9);
  warBoardAIList = (System_Collections_Generic_List_object__o *)this->fields.warBoardAIList;
  if ( !warBoardAIList
    || (items = warBoardAIList->fields._items,
        v19 = Method_System_Collections_Generic_List_WarBoardAI__Add__,
        ++warBoardAIList->fields._version,
        !items) )
  {
    sub_1BCAA3C(warBoardAIList, v10);
  }
  size = warBoardAIList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      warBoardAIList,
      (Il2CppObject *)v8,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    warBoardAIList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v8;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 4), (int64_t)v8, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_4B13CA3 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAIManager__Execute_d__12_TypeInfo, *(_QWORD *)&forceId, *(_QWORD *)&groupId);
    byte_4B13CA3 = 1;
  }
  v7 = sub_1BCAA2C(WarBoardAIManager__Execute_d__12_TypeInfo, *(_QWORD *)&forceId, *(_QWORD *)&groupId, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 32) = forceId;
  *(_DWORD *)(v7 + 36) = groupId;
  return (System_Collections_IEnumerator_o *)v7;
}


float __fastcall WarBoardAIManager__GetBreakPoint(WarBoardPieceData_o *piece, const MethodInfo *method)
{
  if ( !piece )
    sub_1BCAA3C(0LL, method);
  return (float)(piece->fields._breakPoint_k__BackingField + 1)
       / (float)(piece->fields._breakPointMax_k__BackingField + 1);
}


System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *__fastcall WarBoardAIManager__GetEnemyPiece(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  WarBoardAIManager_c *v3; // x0

  if ( (byte_4B13CA5 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v1, v2);
    byte_4B13CA5 = 1;
  }
  v3 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v1);
    v3 = WarBoardAIManager_TypeInfo;
  }
  return v3->static_fields->dicSquareIndexEnemyPiece;
}


WarBoardPieceData_o *__fastcall WarBoardAIManager__GetEnemyPieceSquareIndex(
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardAIManager_c *v6; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexEnemyPiece; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B13CA6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__, method, v2);
    sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v4, v5);
    byte_4B13CA6 = 1;
  }
  v6 = WarBoardAIManager_TypeInfo;
  value = 0LL;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, method);
    v6 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v6->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    sub_1BCAA3C(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicSquareIndexEnemyPiece,
         squareIndex,
         &value,
         (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__) )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardAIManager_c *v6; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicIndexItem; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B13CA9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__, method, v2);
    sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v4, v5);
    byte_4B13CA9 = 1;
  }
  v6 = WarBoardAIManager_TypeInfo;
  value = 0LL;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, method);
    v6 = WarBoardAIManager_TypeInfo;
  }
  dicIndexItem = (System_Collections_Generic_Dictionary_int__object__o *)v6->static_fields->dicIndexItem;
  if ( !dicIndexItem )
    sub_1BCAA3C(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicIndexItem,
         squareIndex,
         &value,
         (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__) )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardAIManager_c *v6; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicUniqueIndexPiece; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B13CA7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__, method, v2);
    sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v4, v5);
    byte_4B13CA7 = 1;
  }
  v6 = WarBoardAIManager_TypeInfo;
  value = 0LL;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, method);
    v6 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v6->static_fields->dicUniqueIndexPiece;
  if ( !dicUniqueIndexPiece )
    sub_1BCAA3C(0LL, method);
  if ( System_Collections_Generic_Dictionary_uint__object___TryGetValue(
         dicUniqueIndexPiece,
         uniqueIndex,
         &value,
         (const MethodInfo_329F654 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__) )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardAIManager_c *v6; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicIndexSquare; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B13CA8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__, method, v2);
    sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v4, v5);
    byte_4B13CA8 = 1;
  }
  v6 = WarBoardAIManager_TypeInfo;
  value = 0LL;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, method);
    v6 = WarBoardAIManager_TypeInfo;
  }
  dicIndexSquare = (System_Collections_Generic_Dictionary_int__object__o *)v6->static_fields->dicIndexSquare;
  if ( !dicIndexSquare )
    sub_1BCAA3C(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         dicIndexSquare,
         squareIndex,
         &value,
         (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__) )
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x8
  int32_t size; // w2
  int v15; // w9
  _BOOL8 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4B13C9D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__, npcList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAI__Clear__, v9, v10);
    this = (WarBoardAIManager_o *)sub_1BCA7E0(
                                    &Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__,
                                    v11,
                                    v12);
    byte_4B13C9D = 1;
  }
  memset(&v19, 0, sizeof(v19));
  warBoardAIList = v4->fields.warBoardAIList;
  if ( !warBoardAIList )
    goto LABEL_15;
  size = warBoardAIList->fields._size;
  v15 = warBoardAIList->fields._version + 1;
  warBoardAIList->fields._size = 0;
  warBoardAIList->fields._version = v15;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)warBoardAIList->fields._items, 0, size, 0LL);
  if ( !npcList )
LABEL_15:
    sub_1BCAA3C(this, npcList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)npcList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    if ( !v16 )
      break;
    if ( !v19.fields._current )
      sub_1BCAA3C(v16, v17);
    if ( HIDWORD(v19.fields._current[1].klass) || LODWORD(v19.fields._current[1].monitor) )
      WarBoardAIManager__CreateAI(v4, (WarBoardStageNpcEntity_o *)v19.fields._current, v18);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
}


bool __fastcall WarBoardAIManager__IsAllyPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_1BCAA3C(one, two);
  return one->fields._forceId_k__BackingField == two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEnemyBlock(int32_t squareIndex, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B13CAA & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAIManager_TypeInfo, method, v2);
    byte_4B13CAA = 1;
  }
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, method);
  return WarBoardAIManager__GetEnemyPieceSquareIndex(squareIndex, method) != 0LL;
}


bool __fastcall WarBoardAIManager__IsEnemyPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_1BCAA3C(one, two);
  return one->fields._forceId_k__BackingField != two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEqualPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_1BCAA3C(one, two);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v21; // x22
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x3

  if ( (byte_4B13CA1 & 1) == 0 )
  {
    sub_1BCA7E0(&AStarSearch_TypeInfo, *(_QWORD *)&forceId, *(_QWORD *)&groupId);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, v7, v8);
    sub_1BCA7E0(&System_Func_WarBoardAI__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__, v11, v12);
    sub_1BCA7E0(&WarBoardAIManager___c__DisplayClass9_0_TypeInfo, v13, v14);
    byte_4B13CA1 = 1;
  }
  v15 = sub_1BCAA2C(WarBoardAIManager___c__DisplayClass9_0_TypeInfo, *(_QWORD *)&forceId, *(_QWORD *)&groupId, method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_DWORD *)(v15 + 16) = forceId;
  *(_DWORD *)(v15 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v21 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardAI__bool__TypeInfo, v17, v18, v19);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v15,
    Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__,
    0LL);
  v22 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v22 )
  {
    this->fields.exec = 1;
    LOBYTE(v22[2].klass) = 0;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v23);
    AStarSearch__DetourCacheClear(0LL);
    WarBoardAIManager__StartThink(this, *(_DWORD *)(v15 + 16), *(_DWORD *)(v15 + 20), v24);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
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
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x20
  WarBoardAIRoute_o *klass; // x0
  const MethodInfo *v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v39; // x22
  Il2CppObject *v40; // x0
  WarBoardAIManager_c *v41; // x0
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  WarBoardAIRoute_AIRouteMasterData_c *v43; // x24
  int namespaze; // w8
  unsigned int v45; // w25
  __int64 v46; // x21
  WarBoardAIManager_c *v47; // x0
  WarBoardAIManager_c *v48; // x0
  WarBoardAIManager_c *v49; // x0
  struct WarBoardAIRoute_AIRouteMasterData_o *v50; // x8
  _DWORD *monitor; // x24
  int v52; // w8
  unsigned int v53; // w25
  __int64 v54; // x21
  WarBoardAIManager_c *v55; // x0
  const MethodInfo *v56; // x3
  struct WarBoardAIRoute_AIRouteMasterData_o *v57; // x8
  __int64 v58; // x23
  int v59; // w8
  unsigned int v60; // w24
  __int64 v61; // x21
  struct System_Collections_IEnumerator_o *v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7

  if ( (byte_4B13CA2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__,
      *(_QWORD *)&forceId,
      *(_QWORD *)&groupId);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___, v21, v22);
    sub_1BCA7E0(&System_Func_WarBoardAI__bool__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__, v27, v28);
    sub_1BCA7E0(&WarBoardAIManager___c__DisplayClass11_0_TypeInfo, v29, v30);
    sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v31, v32);
    byte_4B13CA2 = 1;
  }
  v33 = sub_1BCAA2C(WarBoardAIManager___c__DisplayClass11_0_TypeInfo, *(_QWORD *)&forceId, *(_QWORD *)&groupId, method);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    goto LABEL_58;
  *(_DWORD *)(v33 + 16) = forceId;
  *(_DWORD *)(v33 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v39 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardAI__bool__TypeInfo, v35, v36, v37);
  System_Func_object__bool____ctor(
    v39,
    (Il2CppObject *)v33,
    Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__,
    0LL);
  v40 = System_Linq_Enumerable__SingleOrDefault_object__49584156(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v39,
          (const MethodInfo_2F4981C *)Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
  if ( !v40 )
    return;
  this->fields.isPause = 0;
  klass = (WarBoardAIRoute_o *)v40[1].klass;
  if ( !klass )
    goto LABEL_58;
  WarBoardAIRoute__Clear(klass, v35);
  v41 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v35);
    v41 = WarBoardAIManager_TypeInfo;
  }
  klass = (WarBoardAIRoute_o *)v41->static_fields->dicUniqueIndexPiece;
  if ( !klass )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)klass,
    (const MethodInfo_329E050 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
  klass = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece;
  if ( !klass )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)klass,
    (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
  klass = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !klass )
    goto LABEL_58;
  aiRouteMasterData = klass[1].fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    goto LABEL_58;
  v43 = aiRouteMasterData[1].klass;
  if ( !v43 )
    goto LABEL_58;
  namespaze = (int)v43->_1.namespaze;
  if ( namespaze >= 1 )
  {
    v45 = 0;
    while ( v45 < namespaze )
    {
      v46 = *((_QWORD *)&v43->_1.byval_arg.data + (int)v45);
      if ( !v46 )
        goto LABEL_58;
      if ( !*(_BYTE *)(v46 + 60) )
      {
        v47 = WarBoardAIManager_TypeInfo;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v35);
          v47 = WarBoardAIManager_TypeInfo;
        }
        klass = (WarBoardAIRoute_o *)v47->static_fields->dicUniqueIndexPiece;
        if ( !klass )
          goto LABEL_58;
        System_Collections_Generic_Dictionary_uint__object___Add(
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)klass,
          *(_DWORD *)(v46 + 44),
          (Il2CppObject *)v46,
          (const MethodInfo_329DEC8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
        if ( *(_DWORD *)(v46 + 20) != *(_DWORD *)(v33 + 16) )
        {
          v48 = WarBoardAIManager_TypeInfo;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v35);
            v48 = WarBoardAIManager_TypeInfo;
          }
          klass = (WarBoardAIRoute_o *)v48->static_fields->dicSquareIndexEnemyPiece;
          if ( !klass )
            goto LABEL_58;
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)klass,
            *(_DWORD *)(v46 + 64),
            (Il2CppObject *)v46,
            (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
        }
      }
      namespaze = (int)v43->_1.namespaze;
      if ( (int)++v45 >= namespaze )
        goto LABEL_27;
    }
LABEL_59:
    sub_1BCAA44(klass, v35);
  }
LABEL_27:
  v49 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v35);
    v49 = WarBoardAIManager_TypeInfo;
  }
  klass = (WarBoardAIRoute_o *)v49->static_fields->dicIndexSquare;
  if ( !klass )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)klass,
    (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
  klass = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !klass )
    goto LABEL_58;
  v50 = klass[1].fields.aiRouteMasterData;
  if ( !v50 )
    goto LABEL_58;
  monitor = v50[1].monitor;
  if ( !monitor )
    goto LABEL_58;
  v52 = monitor[6];
  if ( v52 >= 1 )
  {
    v53 = 0;
    while ( v53 < v52 )
    {
      klass = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      v54 = *(_QWORD *)&monitor[2 * v53 + 8];
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v35);
        klass = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v54 )
        goto LABEL_58;
      klass = (WarBoardAIRoute_o *)klass->fields.dicUniqueKeyTarget->fields._buckets;
      if ( !klass )
        goto LABEL_58;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)klass,
        *(_DWORD *)(v54 + 16),
        (Il2CppObject *)v54,
        (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
      v52 = monitor[6];
      if ( (int)++v53 >= v52 )
        goto LABEL_41;
    }
    goto LABEL_59;
  }
LABEL_41:
  v55 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v35);
    v55 = WarBoardAIManager_TypeInfo;
  }
  klass = (WarBoardAIRoute_o *)v55->static_fields->dicIndexItem;
  if ( !klass
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)klass,
          (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__),
        (klass = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v57 = klass[1].fields.aiRouteMasterData) == 0LL
    || (v58 = *(_QWORD *)&v57[1].fields.masterUniqueIndex) == 0 )
  {
LABEL_58:
    sub_1BCAA3C(klass, v35);
  }
  v59 = *(_DWORD *)(v58 + 24);
  if ( v59 >= 1 )
  {
    v60 = 0;
    while ( v60 < v59 )
    {
      klass = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      v61 = *(_QWORD *)(v58 + 8LL * (int)v60 + 32);
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v35);
        klass = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v61 )
        goto LABEL_58;
      klass = (WarBoardAIRoute_o *)klass->fields.dicUniqueKeyTarget->fields._entries;
      if ( !klass )
        goto LABEL_58;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)klass,
        *(_DWORD *)(v61 + 16),
        (Il2CppObject *)v61,
        (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
      v59 = *(_DWORD *)(v58 + 24);
      if ( (int)++v60 >= v59 )
        goto LABEL_55;
    }
    goto LABEL_59;
  }
LABEL_55:
  if ( !this->fields.executeTask )
  {
    v62 = WarBoardAIManager__Execute(this, *(_DWORD *)(v33 + 16), *(_DWORD *)(v33 + 20), v56);
    this->fields.executeTask = v62;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.executeTask, (int64_t)v62, v63, v64, v65, v66, v67, v68);
  }
}


void __fastcall WarBoardAIManager__Update(WarBoardAIManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility_o *p_executeTask; // x19
  System_Collections_IEnumerator_o *v5; // x20
  struct System_Collections_IEnumerator_o *executeTask; // t1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B13CA4 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardManager_TypeInfo, method, v2);
    byte_4B13CA4 = 1;
  }
  executeTask = this->fields.executeTask;
  p_executeTask = (PartyOrganizationUtility_o *)&this->fields.executeTask;
  v5 = executeTask;
  if ( executeTask )
  {
    if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo, method);
    if ( !WarBoardManager__IEnumeratorExecute(v5, 0LL) )
    {
      p_executeTask->klass = 0LL;
      sub_1BCA784(p_executeTask, 0LL, v7, v8, v9, v10, v11, v12);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x24
  WarBoardAIRoute_o *klass; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_object__bool__o *v23; // x22
  Il2CppObject *v24; // x0
  const MethodInfo *v25; // x3

  if ( (byte_4B13CAC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, *(_QWORD *)&forceId, *(_QWORD *)&groupId);
    sub_1BCA7E0(&System_Func_WarBoardAI__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__, v13, v14);
    sub_1BCA7E0(&WarBoardAIManager___c__DisplayClass29_0_TypeInfo, v15, v16);
    byte_4B13CAC = 1;
  }
  v17 = sub_1BCAA2C(
          WarBoardAIManager___c__DisplayClass29_0_TypeInfo,
          *(_QWORD *)&forceId,
          *(_QWORD *)&groupId,
          *(_QWORD *)&aiId);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_8;
  *(_DWORD *)(v17 + 16) = forceId;
  *(_DWORD *)(v17 + 20) = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v23 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardAI__bool__TypeInfo, v19, v20, v21);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v17,
    Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__,
    0LL);
  v24 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v24 )
  {
    klass = (WarBoardAIRoute_o *)v24[1].klass;
    if ( klass )
    {
      WarBoardAIRoute__UpdatePiecePersonalityDic(klass, aiId, pieceIndex, v25);
      return;
    }
LABEL_8:
    sub_1BCAA3C(klass, v19);
  }
}


System_Collections_IEnumerator_o *__fastcall WarBoardAIManager__Wait(
        WarBoardAIManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B13CA0 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAIManager__Wait_d__8_TypeInfo, method, v2);
    byte_4B13CA0 = 1;
  }
  v5 = sub_1BCAA2C(WarBoardAIManager__Wait_d__8_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
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
  __int64 v10; // x2
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
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  WarBoardAIManager_o *_4__this; // x20
  Il2CppObject *v52; // x21
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x2
  __int64 v60; // x3
  Il2CppObject *_8__1; // x21
  System_Collections_Generic_IEnumerable_TSource__o *warBoardAIList; // x22
  System_Func_object__bool__o *v63; // x23
  Il2CppObject *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct WarBoardAIManager___c__DisplayClass12_0_o *v71; // x8
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x2
  __int64 v76; // x3
  struct WarBoardAIManager___c__DisplayClass12_0_o *v77; // x22
  System_Func_object__bool__o *_9__2; // x24
  WarBoardAIManager__Execute_d__12_o *v79; // x21
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x0
  System_Object_array *v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  WarBoardAIManager___c_c *v97; // x0
  System_Collections_Generic_IEnumerable_T__o *actPieces_5__4; // x21
  System_Action_object__o *_9__12_3; // x22
  Il2CppObject *v100; // x23
  struct WarBoardAIManager___c_StaticFields *v101; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  __int64 v108; // x1
  DefenseAreaData_c *v109; // x0
  System_Collections_IEnumerator_o *v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  WarBoardAIManager___c_c *v117; // x0
  System_Func_bool__o *_9__12_1; // x20
  Il2CppObject *v119; // x21
  struct WarBoardAIManager___c_StaticFields *static_fields; // x0
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  UnityEngine_WaitWhile_o *v127; // x21
  PartyOrganizationUtility_o *v128; // x19
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  bool result; // w0
  struct System_Collections_IEnumerator_o *v136; // x21
  System_Collections_IEnumerator_c *v137; // x8
  __int64 v138; // x9
  System_Collections_IEnumerator_c **v139; // x10
  __int64 v140; // x0
  __int64 v141; // x0
  struct System_Collections_IEnumerator_o *v142; // x22
  System_Collections_IEnumerator_c *v143; // x8
  WarBoardAIManager__Execute_d__12_o *v144; // x21
  __int64 v145; // x9
  System_Collections_IEnumerator_c **v146; // x10
  __int64 v147; // x0
  WarBoardAIManager__Execute_d__12_o *v148; // x22
  int64_t v149; // x0
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  System_Collections_IEnumerator_o **p_enumeratorChild_5__7; // x21
  System_Collections_IEnumerator_o *v157; // x22
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  float realtimeSinceStartup; // s0
  Il2CppObject **p__2__current; // x19
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  int v172; // w8
  struct System_Collections_IEnumerator_o *exe_5__5; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v175; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v178; // x2
  __int64 v179; // x3
  WarBoardAIManager___c_c *v180; // x0
  System_Collections_Generic_IEnumerable_T__o *v181; // x21
  System_Action_object__o *_9__12_4; // x22
  Il2CppObject *v183; // x23
  struct WarBoardAIManager___c_StaticFields *v184; // x0
  int64_t v185; // x2
  int32_t v186; // w3
  System_String_o *v187; // x4
  BattleSetupInfo_o *v188; // x5
  FollowerInfo_o *v189; // x6
  PartyListViewItem_o *v190; // x7
  struct WarBoardAI_o *ai_5__2; // x8
  int64_t v192; // x2
  const MethodInfo *v193; // x3
  System_String_o *v194; // x4
  BattleSetupInfo_o *v195; // x5
  FollowerInfo_o *v196; // x6
  PartyListViewItem_o *v197; // x7
  struct WarBoardAI_o *v198; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v199; // x8
  int64_t v200; // x2
  int32_t v201; // w3
  System_String_o *v202; // x4
  BattleSetupInfo_o *v203; // x5
  FollowerInfo_o *v204; // x6
  PartyListViewItem_o *v205; // x7
  struct System_Collections_IEnumerator_o *v206; // x21
  System_Collections_IEnumerator_c *v207; // x8
  __int64 v208; // x9
  System_Collections_IEnumerator_c **v209; // x10
  __int64 v210; // x0
  float v211; // s0
  int64_t v212; // x2
  int32_t v213; // w3
  System_String_o *v214; // x4
  BattleSetupInfo_o *v215; // x5
  FollowerInfo_o *v216; // x6
  PartyListViewItem_o *v217; // x7
  System_Collections_IEnumerator_o *v218; // x0
  int64_t v219; // x2
  int32_t v220; // w3
  System_String_o *v221; // x4
  BattleSetupInfo_o *v222; // x5
  FollowerInfo_o *v223; // x6
  PartyListViewItem_o *v224; // x7
  WarBoardAIManager__Execute_d__12_o *v225; // x0
  const MethodInfo *v226; // x1

  v8 = this;
  if ( (byte_4B13CB1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_WarBoardPieceData__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_WarBoardPieceData___, v9, v10);
    sub_1BCA7E0(&bool_TypeInfo, v11, v12);
    sub_1BCA7E0(&DefenseAreaData_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v19, v20);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Func_WarBoardAI__bool__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v31, v32);
    sub_1BCA7E0(&Method_WarBoardAIManager___c__Execute_b__12_1__, v33, v34);
    sub_1BCA7E0(&Method_WarBoardAIManager___c__Execute_b__12_3__, v35, v36);
    sub_1BCA7E0(&Method_WarBoardAIManager___c__Execute_b__12_4__, v37, v38);
    sub_1BCA7E0(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__, v39, v40);
    sub_1BCA7E0(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__, v41, v42);
    sub_1BCA7E0(&WarBoardAIManager___c__DisplayClass12_0_TypeInfo, v43, v44);
    sub_1BCA7E0(&WarBoardAIManager___c_TypeInfo, v45, v46);
    sub_1BCA7E0(&UnityEngine_WaitWhile_TypeInfo, v47, v48);
    this = (WarBoardAIManager__Execute_d__12_o *)sub_1BCA7E0(&WarBoardManager_TypeInfo, v49, v50);
    byte_4B13CB1 = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v52 = (Il2CppObject *)sub_1BCAA2C(WarBoardAIManager___c__DisplayClass12_0_TypeInfo, method, v2, v3);
      System_Object___ctor(v52, 0LL);
      v8->fields.__8__1 = (struct WarBoardAIManager___c__DisplayClass12_0_o *)v52;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v52, v53, v54, v55, v56, v57, v58);
      _8__1 = (Il2CppObject *)v8->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_123;
      _8__1[1].klass = *(Il2CppClass **)&v8->fields.forceId;
      if ( !_4__this )
        goto LABEL_123;
      warBoardAIList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.warBoardAIList;
      v63 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardAI__bool__TypeInfo, method, v59, v60);
      System_Func_object__bool____ctor(v63, _8__1, Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__, 0LL);
      v64 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
              warBoardAIList,
              (System_Func_TSource__bool__o *)v63,
              (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
      v8->fields._ai_5__2 = (struct WarBoardAI_o *)v64;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._ai_5__2, (int64_t)v64, v65, v66, v67, v68, v69, v70);
      if ( !v8->fields._ai_5__2 )
        return 0;
      goto LABEL_102;
    case 1:
      v71 = v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !v71 || !_4__this )
        goto LABEL_123;
      WarBoardAIManager__StartThink(_4__this, v71->fields.forceId, v71->fields.groupId, v3);
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
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
        if ( this )
        {
          if ( WarBoardData__IsWin((WarBoardData_o *)this, 0LL) )
            return 0;
          this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !this )
            goto LABEL_123;
          this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
          if ( !this )
            goto LABEL_123;
          this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__IsLose((WarBoardData_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 0;
          v198 = v8->fields._ai_5__2;
          if ( v198 )
          {
            if ( !v198->fields.isEndRoute )
            {
              v8->fields.__2__current = 0LL;
              p__2__current = &v8->fields.__2__current;
              sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, 0LL, v192, (int32_t)v193, v194, v195, v196, v197);
              v172 = 5;
              goto LABEL_65;
            }
            v199 = v8->fields.__8__1;
            if ( v199 )
            {
              WarBoardAIManager__StartThink(_4__this, v199->fields.forceId, v199->fields.groupId, v193);
              goto LABEL_101;
            }
          }
        }
      }
LABEL_123:
      sub_1BCAA3C(this, method);
    }
    do
    {
LABEL_101:
      v8->fields._actPieces_5__4 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._actPieces_5__4, 0LL, v2, (int32_t)v3, v4, v5, v6, v7);
      v8->fields._exe_5__5 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._exe_5__5, 0LL, v200, v201, v202, v203, v204, v205);
LABEL_102:
      if ( !_4__this->fields.exec )
        return 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_123;
      if ( WarBoardManager__HasSchedule((WarBoardManager_o *)this, 0LL) )
      {
        v117 = WarBoardAIManager___c_TypeInfo;
        if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo, v72);
          v117 = WarBoardAIManager___c_TypeInfo;
        }
        _9__12_1 = v117->static_fields->__9__12_1;
        if ( !_9__12_1 )
        {
          if ( !v117->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v117, v72);
            v117 = WarBoardAIManager___c_TypeInfo;
          }
          v119 = (Il2CppObject *)v117->static_fields->__9;
          _9__12_1 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v72, v73, v74);
          System_Func_bool____ctor(_9__12_1, v119, Method_WarBoardAIManager___c__Execute_b__12_1__, 0LL);
          static_fields = WarBoardAIManager___c_TypeInfo->static_fields;
          static_fields->__9__12_1 = _9__12_1;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__12_1,
            (int64_t)_9__12_1,
            v121,
            v122,
            v123,
            v124,
            v125,
            v126);
        }
        v127 = (UnityEngine_WaitWhile_o *)sub_1BCAA2C(UnityEngine_WaitWhile_TypeInfo, v72, v73, v74);
        UnityEngine_WaitWhile___ctor(v127, _9__12_1, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v127;
        v128 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(v128, (int64_t)v127, v129, v130, v131, v132, v133, v134);
        result = 1;
        *(_DWORD *)&v128[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
LABEL_19:
      v8->fields._isNextPhase_5__3 = 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetLoadMode((CommonUI_o *)this, 10, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_123;
      this = (WarBoardAIManager__Execute_d__12_o *)this[4].fields.__2__current;
      if ( !this )
        goto LABEL_123;
      this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__GetAlivePieces((WarBoardData_o *)this, 0LL);
      v77 = v8->fields.__8__1;
      if ( !v77 )
        goto LABEL_123;
      _9__2 = (System_Func_object__bool__o *)v77->fields.__9__2;
      v79 = this;
      if ( !_9__2 )
      {
        _9__2 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_WarBoardPieceData__bool__TypeInfo,
                                                 method,
                                                 v75,
                                                 v76);
        System_Func_object__bool____ctor(
          _9__2,
          (Il2CppObject *)v77,
          Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__,
          0LL);
        v77->fields.__9__2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__2;
        sub_1BCA784((PartyOrganizationUtility_o *)&v77->fields.__9__2, (int64_t)_9__2, v80, v81, v82, v83, v84, v85);
      }
      v86 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v79,
              (System_Func_TSource__bool__o *)_9__2,
              (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      v87 = System_Linq_Enumerable__ToArray_object_(
              v86,
              (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      v8->fields._actPieces_5__4 = (struct WarBoardPieceData_array *)v87;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._actPieces_5__4, (int64_t)v87, v88, v89, v90, v91, v92, v93);
      v97 = WarBoardAIManager___c_TypeInfo;
      actPieces_5__4 = (System_Collections_Generic_IEnumerable_T__o *)v8->fields._actPieces_5__4;
      if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo, v94);
        v97 = WarBoardAIManager___c_TypeInfo;
      }
      _9__12_3 = (System_Action_object__o *)v97->static_fields->__9__12_3;
      if ( !_9__12_3 )
      {
        if ( !v97->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v97, v94);
          v97 = WarBoardAIManager___c_TypeInfo;
        }
        v100 = (Il2CppObject *)v97->static_fields->__9;
        _9__12_3 = (System_Action_object__o *)sub_1BCAA2C(System_Action_WarBoardPieceData__TypeInfo, v94, v95, v96);
        System_Action_object____ctor(_9__12_3, v100, Method_WarBoardAIManager___c__Execute_b__12_3__, 0LL);
        v101 = WarBoardAIManager___c_TypeInfo->static_fields;
        v101->__9__12_3 = (struct System_Action_WarBoardPieceData__o *)_9__12_3;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v101->__9__12_3,
          (int64_t)_9__12_3,
          v102,
          v103,
          v104,
          v105,
          v106,
          v107);
      }
      BasicHelper__ForEach_object_(
        actPieces_5__4,
        (System_Action_T__o *)_9__12_3,
        (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      v109 = DefenseAreaData_TypeInfo;
      if ( !DefenseAreaData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DefenseAreaData_TypeInfo, v108);
      DefenseAreaData__ClearCache((const MethodInfo *)v109);
      this = (WarBoardAIManager__Execute_d__12_o *)v8->fields._ai_5__2;
      if ( !this )
        goto LABEL_123;
      v110 = WarBoardAI__Think((WarBoardAI_o *)this, method);
      v8->fields._exe_5__5 = v110;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._exe_5__5,
        (int64_t)v110,
        v111,
        v112,
        v113,
        v114,
        v115,
        v116);
      v8->fields._prevTime_5__6 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      while ( 1 )
      {
LABEL_68:
        exe_5__5 = v8->fields._exe_5__5;
        if ( !exe_5__5 )
          goto LABEL_123;
        klass = exe_5__5->klass;
        v175 = *(unsigned __int16 *)(&exe_5__5->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&exe_5__5->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v175;
            p_offset += 4;
            if ( !v175 )
              goto LABEL_73;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_73:
          p_method = sub_1C1C7C0(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                       exe_5__5,
                                                       *(_QWORD *)(p_method + 8));
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_76;
        v136 = v8->fields._exe_5__5;
        if ( !v136 )
          goto LABEL_123;
        v137 = v136->klass;
        v138 = *(unsigned __int16 *)(&v136->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v136->klass->_2.bitflags2 + 3) )
        {
          v139 = (System_Collections_IEnumerator_c **)&v137->_1.interfaceOffsets->offset;
          while ( *(v139 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v138;
            v139 += 2;
            if ( !v138 )
              goto LABEL_48;
          }
          v140 = (__int64)&v137->vtable[*(_DWORD *)v139 + 1].method;
        }
        else
        {
LABEL_48:
          v140 = sub_1C1C7C0(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v141 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v140)(
                 v136,
                 *(_QWORD *)(v140 + 8));
        this = (WarBoardAIManager__Execute_d__12_o *)sub_1BCA91C(v141, System_Collections_IEnumerator_TypeInfo);
        v142 = v8->fields._exe_5__5;
        if ( !v142 )
          goto LABEL_123;
        v143 = v142->klass;
        v144 = this;
        v145 = *(unsigned __int16 *)(&v142->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v142->klass->_2.bitflags2 + 3) )
        {
          v146 = (System_Collections_IEnumerator_c **)&v143->_1.interfaceOffsets->offset;
          while ( *(v146 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v145;
            v146 += 2;
            if ( !v145 )
              goto LABEL_55;
          }
          v147 = (__int64)&v143->vtable[*(_DWORD *)v146 + 1].method;
        }
        else
        {
LABEL_55:
          v147 = sub_1C1C7C0(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v147)(
                                                       v142,
                                                       *(_QWORD *)(v147 + 8));
        v148 = this;
        if ( v144 )
        {
          v8->fields._enumeratorChild_5__7 = (struct System_Collections_IEnumerator_o *)sub_1BCA91C(
                                                                                          this,
                                                                                          System_Collections_IEnumerator_TypeInfo);
          v149 = sub_1BCA91C(v148, System_Collections_IEnumerator_TypeInfo);
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v8->fields._enumeratorChild_5__7,
            v149,
            v150,
            v151,
            v152,
            v153,
            v154,
            v155);
LABEL_59:
          p_enumeratorChild_5__7 = &v8->fields._enumeratorChild_5__7;
          while ( 1 )
          {
            v157 = *p_enumeratorChild_5__7;
            if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo, method);
            if ( !WarBoardManager__IEnumeratorExecute(v157, 0LL) )
              break;
            if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v8->fields._prevTime_5__6) >= 0.1 )
            {
              realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
              v8->fields.__2__current = 0LL;
              p__2__current = &v8->fields.__2__current;
              *((float *)p__2__current + 16) = realtimeSinceStartup;
              sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, 0LL, v166, v167, v168, v169, v170, v171);
              v172 = 2;
              goto LABEL_65;
            }
          }
          *p_enumeratorChild_5__7 = 0LL;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v8->fields._enumeratorChild_5__7,
            0LL,
            v158,
            v159,
            v160,
            v161,
            v162,
            v163);
          goto LABEL_67;
        }
        if ( this && (System_Boolean_c *)this->klass == bool_TypeInfo )
          break;
LABEL_67:
        if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v8->fields._prevTime_5__6) >= 0.1 )
        {
          v211 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          v8->fields.__2__current = 0LL;
          p__2__current = &v8->fields.__2__current;
          *((float *)p__2__current + 16) = v211;
          sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, 0LL, v212, v213, v214, v215, v216, v217);
          v172 = 3;
          goto LABEL_65;
        }
      }
      v206 = v8->fields._exe_5__5;
      if ( !v206 )
        goto LABEL_123;
      v207 = v206->klass;
      v208 = *(unsigned __int16 *)(&v206->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v206->klass->_2.bitflags2 + 3) )
      {
        v209 = (System_Collections_IEnumerator_c **)&v207->_1.interfaceOffsets->offset;
        while ( *(v209 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v208;
          v209 += 2;
          if ( !v208 )
            goto LABEL_111;
        }
        v210 = (__int64)&v207->vtable[*(_DWORD *)v209 + 1].method;
      }
      else
      {
LABEL_111:
        v210 = sub_1C1C7C0(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v210)(
                                                     v206,
                                                     *(_QWORD *)(v210 + 8));
      if ( !this )
        goto LABEL_123;
      if ( this->klass->_1.element_class != bool_TypeInfo->_1.element_class )
      {
        sub_1BCACFC(this);
        return (unsigned __int8)WarBoardAIManager__Execute_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                  v225,
                                  v226);
      }
      v8->fields._isNextPhase_5__3 = *(_BYTE *)j_il2cpp_object_unbox_0();
LABEL_76:
      v180 = WarBoardAIManager___c_TypeInfo;
      v181 = (System_Collections_Generic_IEnumerable_T__o *)v8->fields._actPieces_5__4;
      if ( !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo, method);
        v180 = WarBoardAIManager___c_TypeInfo;
      }
      _9__12_4 = (System_Action_object__o *)v180->static_fields->__9__12_4;
      if ( !_9__12_4 )
      {
        if ( !v180->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v180, method);
          v180 = WarBoardAIManager___c_TypeInfo;
        }
        v183 = (Il2CppObject *)v180->static_fields->__9;
        _9__12_4 = (System_Action_object__o *)sub_1BCAA2C(System_Action_WarBoardPieceData__TypeInfo, method, v178, v179);
        System_Action_object____ctor(_9__12_4, v183, Method_WarBoardAIManager___c__Execute_b__12_4__, 0LL);
        v184 = WarBoardAIManager___c_TypeInfo->static_fields;
        v184->__9__12_4 = (struct System_Action_WarBoardPieceData__o *)_9__12_4;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v184->__9__12_4,
          (int64_t)_9__12_4,
          v185,
          v186,
          v187,
          v188,
          v189,
          v190);
      }
      BasicHelper__ForEach_object_(
        v181,
        (System_Action_T__o *)_9__12_4,
        (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_123;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( v8->fields._isNextPhase_5__3 )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    this = (WarBoardAIManager__Execute_d__12_o *)WarBoardAI__Execute((WarBoardAI_o *)this, method);
    if ( ((unsigned __int8)this & 1) == 0 )
      continue;
    break;
  }
  v218 = WarBoardAIManager__Wait(_4__this, method);
  v8->fields.__2__current = (Il2CppObject *)v218;
  p__2__current = &v8->fields.__2__current;
  sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v218, v219, v220, v221, v222, v223, v224);
  v172 = 4;
LABEL_65:
  *((_DWORD *)p__2__current - 2) = v172;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_WarBoardAIManager__Execute_d__12_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  UnityEngine_WaitWhile_o *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int32_t v23; // w8

  if ( (byte_4B13CB2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_WaitWhile_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_WarBoardAIManager__Wait_b__8_0__, v7, v8);
    byte_4B13CB2 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v23 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v12 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, method, v2, v3);
    System_Func_bool____ctor(v12, _4__this, Method_WarBoardAIManager__Wait_b__8_0__, 0LL);
    v16 = (UnityEngine_WaitWhile_o *)sub_1BCAA2C(UnityEngine_WaitWhile_TypeInfo, v13, v14, v15);
    UnityEngine_WaitWhile___ctor(v16, v12, 0LL);
    this->fields.__2__current = (Il2CppObject *)v16;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    v23 = 1;
    result = 1;
  }
  this->fields.__1__state = v23;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_WarBoardAIManager__Wait_d__8_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B13CAF & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAIManager___c_TypeInfo, v1, v2);
    byte_4B13CAF = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardAIManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardAIManager___c_TypeInfo->static_fields->__9 = (struct WarBoardAIManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardAIManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardAIManager___c___ctor(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c___Execute_b__12_1(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B13CB0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B13CB0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  return WarBoardManager__HasSchedule((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_3(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  WarBoardPieceData__ActivateCacheMode(x, 1, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_4(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
  return routeClass->fields.forceId == this->fields.forceId && routeClass->fields.groupId == this->fields.groupId;
}


bool __fastcall WarBoardAIManager___c__DisplayClass12_0___Execute_b__2(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
  return routeClass->fields.forceId == this->fields.forceId && routeClass->fields.groupId == this->fields.groupId;
}