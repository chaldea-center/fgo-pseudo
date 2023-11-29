void __fastcall WarBoardAI___ctor(WarBoardAI_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  WarBoardAIRoute_o *v9; // x21
  const MethodInfo *v10; // x2
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40F8BB7 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIRoute_TypeInfo, npc);
    byte_40F8BB7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = (WarBoardAIRoute_o *)sub_B170CC(WarBoardAIRoute_TypeInfo, v5, v6, v7, v8);
  WarBoardAIRoute___ctor(v9, npc, v10);
  this->fields.routeClass = v9;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
}


void __fastcall WarBoardAI__AddRoutePiecePersonalityDic(
        WarBoardAI_o *this,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_B170D4();
  WarBoardAIRoute__AddPiecePersonalityDic(routeClass, aiId, pieceIndex, method);
}


bool __fastcall WarBoardAI__CheckWasteRoute(
        WarBoardAI_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *checkRoute,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v13; // x20
  int32_t size; // w8
  unsigned int v15; // w24
  WarBoardAIRoute_RouteData_o *v16; // x22
  unsigned int v17; // w21
  WarBoardAIRoute_RouteData_o *PrevAiRoute_k__BackingField; // x21
  struct WarBoardPieceData_o *basePiece; // x8
  struct WarBoardPieceData_o *v20; // x9
  struct WarBoardPieceData_o *v21; // x8
  struct WarBoardPieceData_o *v22; // x8
  struct WarBoardPieceData_o *v23; // x8
  System_Enum_o *v24; // x23
  System_Enum_o *v25; // x0
  System_Enum_o *v26; // x23
  System_Enum_o *v27; // x0
  WarBoardAIRoute_RouteData_c *klass; // x8
  unsigned __int64 v29; // x10
  IWarBoardAIRouteWaste_c **p_offset; // x11
  __int64 v31; // x0
  System_Enum_o *v32; // x23
  System_Enum_o *v33; // x0
  WarBoardAIRoute_RouteData_c *v34; // x8
  unsigned __int64 v35; // x10
  IWarBoardAIRouteWaste_c **v36; // x11
  __int64 v37; // x0
  System_Enum_o *v38; // x23
  System_Enum_o *v39; // x0
  WarBoardAIRoute_RouteData_c *v40; // x8
  int32_t actionIndex; // w23
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  WarBoardAIRoute_RouteData_c *v45; // x8
  int32_t baseIndex; // w23
  unsigned __int64 v47; // x10
  IWarBoardAIRouteWaste_c **v48; // x11
  __int64 v49; // x0
  WarBoardAIRoute_RouteData_c *v50; // x8
  unsigned __int64 v51; // x10
  IWarBoardAIRouteWaste_c **v52; // x11
  __int64 v53; // x0
  __int64 v55; // [xsp+0h] [xbp-60h] BYREF
  int64_t flagNow; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F8BB9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__, checkRoute);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo, v8);
    sub_B16FFC(&WarBoardAIRoute_RouteData_Flag_TypeInfo, v9);
    sub_B16FFC(&IWarBoardAIRouteWaste_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v12);
    byte_40F8BB9 = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo,
                                                                                                   checkRoute,
                                                                                                   method,
                                                                                                   v3,
                                                                                                   v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v13,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
  if ( !checkRoute )
LABEL_74:
    sub_B170D4();
  size = checkRoute->fields._size;
  if ( size < 1 )
    return 0;
  v15 = 0;
  while ( 1 )
  {
    if ( size <= v15 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v16 = checkRoute->fields._items->m_Items[v15];
    if ( !v16 )
      goto LABEL_74;
    if ( v16->fields.basePiece && !WarBoardAIRoute_RouteData__get_notAction(v16, 0LL) )
    {
      v17 = v15 - 1;
      if ( (int)(v15 - 1) < 0 )
        goto LABEL_19;
      if ( checkRoute->fields._size <= v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      PrevAiRoute_k__BackingField = checkRoute->fields._items->m_Items[v17];
      if ( !PrevAiRoute_k__BackingField )
        goto LABEL_19;
      basePiece = PrevAiRoute_k__BackingField->fields.basePiece;
      if ( !basePiece )
        goto LABEL_74;
      v20 = v16->fields.basePiece;
      if ( !v20 )
        goto LABEL_74;
      if ( basePiece->fields._uniqueIndex_k__BackingField != v20->fields._uniqueIndex_k__BackingField
        || WarBoardAIRoute_RouteData__get_notAction(PrevAiRoute_k__BackingField, 0LL) )
      {
LABEL_19:
        v21 = v16->fields.basePiece;
        if ( !v21 || !v13 )
          goto LABEL_74;
        if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
               (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v13,
               v21->fields._index_k__BackingField,
               (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__) )
        {
          PrevAiRoute_k__BackingField = 0LL;
        }
        else
        {
          v22 = v16->fields.basePiece;
          if ( !v22 )
            goto LABEL_74;
          PrevAiRoute_k__BackingField = (WarBoardAIRoute_RouteData_o *)v22->fields._PrevAiRoute_k__BackingField;
        }
      }
      v23 = v16->fields.basePiece;
      if ( !v23 || !v13 )
        goto LABEL_74;
      System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
        (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v13,
        v23->fields._index_k__BackingField,
        v16,
        (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
      if ( PrevAiRoute_k__BackingField )
      {
        flagNow = v16->fields.flagNow;
        v24 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow);
        v55 = 2LL;
        v25 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v55);
        if ( !v24 )
          goto LABEL_74;
        if ( !System_Enum__HasFlag(v24, v25, 0LL) )
        {
          flagNow = v16->fields.flagNow;
          v26 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow);
          v55 = 0x10000000LL;
          v27 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v55);
          if ( !v26 )
            goto LABEL_74;
          if ( !System_Enum__HasFlag(v26, v27, 0LL) )
          {
            klass = PrevAiRoute_k__BackingField->klass;
            if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
            {
              v29 = 0LL;
              p_offset = (IWarBoardAIRouteWaste_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != IWarBoardAIRouteWaste_TypeInfo )
              {
                ++v29;
                p_offset += 2;
                if ( v29 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                  goto LABEL_36;
              }
              v31 = (__int64)(&klass->vtable._2_GetHashCode.method + 2 * *(_DWORD *)p_offset);
            }
            else
            {
LABEL_36:
              v31 = sub_AAFEF8(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 2LL);
            }
            flagNow = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v31)(
                        PrevAiRoute_k__BackingField,
                        *(_QWORD *)(v31 + 8));
            v32 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow);
            v55 = 2LL;
            v33 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v55);
            if ( !v32 )
              goto LABEL_74;
            if ( !System_Enum__HasFlag(v32, v33, 0LL) )
            {
              v34 = PrevAiRoute_k__BackingField->klass;
              if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
              {
                v35 = 0LL;
                v36 = (IWarBoardAIRouteWaste_c **)&v34->_1.interfaceOffsets->offset;
                while ( *(v36 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                {
                  ++v35;
                  v36 += 2;
                  if ( v35 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                    goto LABEL_44;
                }
                v37 = (__int64)(&v34->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v36);
              }
              else
              {
LABEL_44:
                v37 = sub_AAFEF8(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 2LL);
              }
              flagNow = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v37)(
                          PrevAiRoute_k__BackingField,
                          *(_QWORD *)(v37 + 8));
              v38 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow);
              v55 = 0x10000000LL;
              v39 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v55);
              if ( !v38 )
                goto LABEL_74;
              if ( !System_Enum__HasFlag(v38, v39, 0LL) )
              {
                v40 = PrevAiRoute_k__BackingField->klass;
                actionIndex = v16->fields.actionIndex;
                if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                {
                  v42 = 0LL;
                  v43 = &v40->_1.interfaceOffsets->offset;
                  while ( *((IWarBoardAIRouteWaste_c **)v43 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                  {
                    ++v42;
                    v43 += 4;
                    if ( v42 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                      goto LABEL_52;
                  }
                  v44 = (__int64)(&v40->vtable._0_Equals.method + 2 * *v43);
                }
                else
                {
LABEL_52:
                  v44 = sub_AAFEF8(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 0LL);
                }
                if ( actionIndex == (*(unsigned int (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v44)(
                                      PrevAiRoute_k__BackingField,
                                      *(_QWORD *)(v44 + 8)) )
                {
                  v45 = PrevAiRoute_k__BackingField->klass;
                  baseIndex = v16->fields.baseIndex;
                  if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                  {
                    v47 = 0LL;
                    v48 = (IWarBoardAIRouteWaste_c **)&v45->_1.interfaceOffsets->offset;
                    while ( *(v48 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                    {
                      ++v47;
                      v48 += 2;
                      if ( v47 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                        goto LABEL_59;
                    }
                    v49 = (__int64)(&v45->vtable._1_Finalize.method + 2 * *(_DWORD *)v48);
                  }
                  else
                  {
LABEL_59:
                    v49 = sub_AAFEF8(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 1LL);
                  }
                  if ( baseIndex == (*(unsigned int (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v49)(
                                      PrevAiRoute_k__BackingField,
                                      *(_QWORD *)(v49 + 8))
                    && !WarBoardAIRoute_RouteData__get_notAction(v16, 0LL) )
                  {
                    v50 = PrevAiRoute_k__BackingField->klass;
                    if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                    {
                      v51 = 0LL;
                      v52 = (IWarBoardAIRouteWaste_c **)&v50->_1.interfaceOffsets->offset;
                      while ( *(v52 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                      {
                        ++v51;
                        v52 += 2;
                        if ( v51 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                          goto LABEL_67;
                      }
                      v53 = (__int64)(&v50->vtable._3_ToString.method + 2 * *(_DWORD *)v52);
                    }
                    else
                    {
LABEL_67:
                      v53 = sub_AAFEF8(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 3LL);
                    }
                    if ( ((*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v53)(
                            PrevAiRoute_k__BackingField,
                            *(_QWORD *)(v53 + 8)) & 1) == 0 )
                      return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    size = checkRoute->fields._size;
    if ( (int)++v15 >= size )
      return 0;
  }
}


void __fastcall WarBoardAI__Clear(WarBoardAI_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_B170D4();
  WarBoardAIRoute__Clear(routeClass, method);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardAI__ConvertForceGroupIndexToString(
        WarBoardAI_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x20
  Il2CppObject *v11; // x0
  int32_t v13; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v14; // [xsp+8h] [xbp-28h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F8BBC & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&forceId);
    sub_B16FFC(&StringLiteral_23494, v8);
    byte_40F8BBC = 1;
  }
  v15 = forceId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v14 = groupId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v13 = index;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return System_String__Format_43744796((System_String_o *)StringLiteral_23494, v9, v10, v11, 0LL);
}


bool __fastcall WarBoardAI__Execute(WarBoardAI_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *executeRoute; // x20
  int size; // w8
  __int64 routeIndex; // x21
  WarBoardAIRoute_RouteData_o *v9; // x8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v10; // x21
  __int64 v11; // x22
  WarBoardPieceData_o *basePiece; // x20
  WarBoardAIRoute_RouteData_o *v13; // x0
  int32_t v14; // w8
  int32_t v15; // w8
  bool v16; // w22
  WebViewManager_o *Instance; // x0
  const MethodInfo *v19; // x1
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v20; // x22
  __int64 v21; // x24
  WarBoardManager_o *v22; // x21
  WarBoardAIRoute_RouteData_o *v23; // x8
  int32_t actionIndex; // w22
  WarBoardSquareData_o *Square; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v26; // x21
  __int64 v27; // x22
  WarBoardAIRoute_RouteData_o *v28; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v29; // x21
  __int64 v30; // x22
  WarBoardAIRoute_RouteData_o *v31; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v32; // x21
  __int64 v33; // x22
  WarBoardAIRoute_RouteData_o *v34; // x8
  int32_t v35; // w21
  WebViewManager_o *v36; // x0
  WarBoardData_o *monitor; // x0
  WarBoardPieceData_o *Piece_22604968; // x0
  WebViewManager_o *v39; // x0
  WarBoardData_o *v40; // x0
  System_Int32_array *v41; // x21
  WebViewManager_o *v42; // x0
  WebViewManager_o *v43; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v44; // x22
  __int64 v45; // x23
  WarBoardAIRoute_RouteData_o *v46; // x8
  bool v47; // w0
  int32_t v48; // w8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v49; // x9

  if ( (byte_40F8BBA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_B16FFC(&WarBoardAIManager_TypeInfo, v5);
    byte_40F8BBA = 1;
  }
  executeRoute = this->fields.executeRoute;
  if ( !executeRoute )
    return 0;
  size = executeRoute->fields._size;
  routeIndex = this->fields.routeIndex;
  if ( size <= (int)routeIndex )
    return 0;
  if ( size <= (unsigned int)routeIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v9 = executeRoute->fields._items->m_Items[routeIndex];
  if ( !v9 )
    goto LABEL_55;
  v10 = this->fields.executeRoute;
  if ( !v10 )
    goto LABEL_55;
  v11 = this->fields.routeIndex;
  basePiece = v9->fields.basePiece;
  if ( v10->fields._size <= (unsigned int)v11 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v13 = v10->fields._items->m_Items[v11];
  if ( !v13 )
    goto LABEL_55;
  if ( WarBoardAIRoute_RouteData__get_notAction(v13, 0LL) )
  {
    v14 = this->fields.routeIndex;
    this->fields.isEndPhase = 0;
    v15 = v14 + 1;
    this->fields.routeIndex = v15;
    goto LABEL_52;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v20 = this->fields.executeRoute;
  if ( !v20 )
    goto LABEL_55;
  v21 = this->fields.routeIndex;
  v22 = (WarBoardManager_o *)Instance;
  if ( v20->fields._size <= (unsigned int)v21 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v23 = v20->fields._items->m_Items[v21];
  if ( !v23 )
    goto LABEL_55;
  actionIndex = v23->fields.actionIndex;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  Square = WarBoardAIManager__GetSquare(actionIndex, v19);
  if ( !v22 )
    goto LABEL_55;
  WarBoardManager__CheckSelectSquare(v22, basePiece, Square, 1, 0LL);
  v26 = this->fields.executeRoute;
  if ( !v26 )
    goto LABEL_55;
  v27 = this->fields.routeIndex;
  if ( v26->fields._size <= (unsigned int)v27 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v28 = v26->fields._items->m_Items[v27];
  if ( !v28 )
    goto LABEL_55;
  if ( WarBoardAIRoute_RouteData__HasFlag(v28, 2LL, 0LL) )
    goto LABEL_34;
  v29 = this->fields.executeRoute;
  if ( !v29 )
    goto LABEL_55;
  v30 = this->fields.routeIndex;
  if ( v29->fields._size <= (unsigned int)v30 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v31 = v29->fields._items->m_Items[v30];
  if ( !v31 )
LABEL_55:
    sub_B170D4();
  if ( !WarBoardAIRoute_RouteData__HasFlag(v31, 4LL, 0LL) )
    goto LABEL_46;
LABEL_34:
  v32 = this->fields.executeRoute;
  if ( !v32 )
    goto LABEL_55;
  v33 = this->fields.routeIndex;
  if ( v32->fields._size <= (unsigned int)v33 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v34 = v32->fields._items->m_Items[v33];
  if ( !v34 )
    goto LABEL_55;
  v35 = v34->fields.actionIndex;
  v36 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v36 )
    goto LABEL_55;
  monitor = (WarBoardData_o *)v36[4].monitor;
  if ( !monitor )
    goto LABEL_55;
  Piece_22604968 = WarBoardData__GetPiece_22604968(monitor, v35, 0LL);
  if ( Piece_22604968 && WarBoardPieceData__get_isServant(Piece_22604968, 0LL) )
  {
    v39 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v39 )
      goto LABEL_55;
    v40 = (WarBoardData_o *)v39[4].monitor;
    if ( !v40 )
      goto LABEL_55;
    v41 = WarBoardData__GetInRangeSquareIndecies(v40, v35, 1, 0, 0LL);
    v42 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v42 )
      goto LABEL_55;
    WarBoardManager__DispPartyBuff((WarBoardManager_o *)v42, v41, 0LL);
  }
LABEL_46:
  v43 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v44 = this->fields.executeRoute;
  if ( !v44 )
    goto LABEL_55;
  v45 = this->fields.routeIndex;
  if ( v44->fields._size <= (unsigned int)v45 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v46 = v44->fields._items->m_Items[v45];
  if ( !v46 || !v43 )
    goto LABEL_55;
  v16 = 1;
  v47 = WarBoardManager__PieceAction_18110304((WarBoardManager_o *)v43, basePiece, v46->fields.actionIndex, 0LL, 1, 0LL);
  v48 = this->fields.routeIndex;
  this->fields.isEndPhase = v47;
  v15 = v48 + 1;
  this->fields.routeIndex = v15;
  if ( v47 )
    return v16;
LABEL_52:
  v49 = this->fields.executeRoute;
  if ( !v49 )
    goto LABEL_55;
  v16 = 1;
  if ( v49->fields._size <= v15 )
    this->fields.isEndRoute = 1;
  return v16;
}


int32_t __fastcall WarBoardAI__GetRandomIndex(
        WarBoardAI_o *this,
        System_Collections_Generic_List_Decimal__o *weightTable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WarBoardAI___c_c *v14; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_Decimal__Decimal__o *_9__14_0; // x20
  Il2CppObject *v17; // x21
  struct WarBoardAI___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Decimal_o v25; // kr00_16
  System_Decimal_o v26; // kr10_16
  float v27; // s0
  float v28; // s0
  System_Decimal_o v29; // kr20_16
  signed __int64 size; // x8
  __int64 v31; // x21
  __int64 v32; // x22
  __int64 v33; // x26
  unsigned __int64 v34; // x20
  char *v35; // x8
  __int64 v36; // x23
  __int64 v37; // x24
  char *v38; // x8
  __int64 v39; // x23
  __int64 v40; // x24
  System_Decimal_o v41; // kr30_16
  System_Decimal_o v43; // 0:x0.16
  System_Decimal_o v44; // 0:x0.16
  System_Decimal_o v45; // 0:x2.16
  System_Decimal_o v46; // 0:x2.16

  if ( (byte_40F8BBB & 1) == 0 )
  {
    sub_B16FFC(&System_Decimal_TypeInfo, weightTable);
    sub_B16FFC(&Method_System_Linq_Enumerable_Sum_Decimal___, v6);
    sub_B16FFC(&Method_System_Func_Decimal__Decimal___ctor__, v7);
    sub_B16FFC(&System_Func_Decimal__Decimal__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Decimal__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Decimal__get_Item__, v10);
    sub_B16FFC(&System_Math_TypeInfo, v11);
    sub_B16FFC(&Method_WarBoardAI___c__GetRandomIndex_b__14_0__, v12);
    sub_B16FFC(&WarBoardAI___c_TypeInfo, v13);
    byte_40F8BBB = 1;
  }
  v14 = WarBoardAI___c_TypeInfo;
  if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v14 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__14_0 = static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = WarBoardAI___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Func_Decimal__Decimal__o *)sub_B170CC(
                                                    System_Func_Decimal__Decimal__TypeInfo,
                                                    weightTable,
                                                    method,
                                                    v3,
                                                    v4);
    System_Func_Decimal__Decimal____ctor(
      _9__14_0,
      v17,
      Method_WarBoardAI___c__GetRandomIndex_b__14_0__,
      (const MethodInfo_2B65530 *)Method_System_Func_Decimal__Decimal___ctor__);
    v18 = WarBoardAI___c_TypeInfo->static_fields;
    v18->__9__14_0 = _9__14_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v18->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = System_Linq_Enumerable__Sum_Decimal_(
          (System_Collections_Generic_IEnumerable_TSource__o *)weightTable,
          (System_Func_TSource__Decimal__o *)_9__14_0,
          (const MethodInfo_19C41F8 *)Method_System_Linq_Enumerable_Sum_Decimal___);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v26 = System_Math__Floor(v25, 0LL);
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v27 = System_Decimal__op_Explicit_43632896(v26, 0LL);
  v28 = UnityEngine_Random__Range(0.0, v27, 0LL);
  v29 = System_Decimal__op_Explicit(v28, 0LL);
  if ( !weightTable )
    sub_B170D4();
  LODWORD(size) = weightTable->fields._size;
  if ( (int)size < 1 )
    goto LABEL_34;
  v31 = *(_QWORD *)&v29.fields.flags;
  v32 = *(_QWORD *)&v29.fields.lo;
  v33 = 0LL;
  v34 = 0LL;
  while ( 1 )
  {
    if ( v34 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v35 = (char *)weightTable->fields._items + v33;
    v37 = *((_QWORD *)v35 + 4);
    v36 = *((_QWORD *)v35 + 5);
    if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    }
    *(_QWORD *)&v43.fields.flags = v37;
    *(_QWORD *)&v43.fields.lo = v36;
    *(_QWORD *)&v45.fields.flags = v31;
    *(_QWORD *)&v45.fields.lo = v32;
    if ( System_Decimal__op_GreaterThanOrEqual(v43, v45, 0LL) )
      break;
    if ( v34 >= (unsigned int)weightTable->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v38 = (char *)weightTable->fields._items + v33;
    v40 = *((_QWORD *)v38 + 4);
    v39 = *((_QWORD *)v38 + 5);
    if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    }
    *(_QWORD *)&v44.fields.flags = v31;
    *(_QWORD *)&v44.fields.lo = v32;
    *(_QWORD *)&v46.fields.flags = v40;
    *(_QWORD *)&v46.fields.lo = v39;
    v41 = System_Decimal__op_Subtraction(v44, v46, 0LL);
    size = weightTable->fields._size;
    ++v34;
    v32 = *(_QWORD *)&v41.fields.lo;
    v31 = *(_QWORD *)&v41.fields.flags;
    v33 += 16LL;
    if ( (__int64)v34 >= size )
      goto LABEL_34;
  }
  if ( (_DWORD)v34 == -1 )
LABEL_34:
    LODWORD(v34) = 0;
  return v34;
}


System_Collections_IEnumerator_o *__fastcall WarBoardAI__Think(WarBoardAI_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8BB8 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAI__Think_d__11_TypeInfo, method);
    byte_40F8BB8 = 1;
  }
  v6 = sub_B170CC(WarBoardAI__Think_d__11_TypeInfo, method, v2, v3, v4);
  WarBoardAI__Think_d__11___ctor((WarBoardAI__Think_d__11_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall WarBoardAI__UpdateRoutePiecePersonalityDic(
        WarBoardAI_o *this,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_B170D4();
  WarBoardAIRoute__UpdatePiecePersonalityDic(routeClass, aiId, pieceIndex, method);
}


bool __fastcall WarBoardAI___Think_b__11_2(
        WarBoardAI_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct WarBoardAIRoute_o *routeClass; // x22
  WarBoardAI___c_c *v12; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__float__o *_9__11_7; // x20
  Il2CppObject *v15; // x21
  struct WarBoardAI___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  float v23; // s0
  struct WarBoardStageNpcEntity_o *npcData; // x8

  if ( (byte_40F8BBD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____66842248, x);
    sub_B16FFC(&Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardAI___c__Think_b__11_7__, v9);
    sub_B16FFC(&WarBoardAI___c_TypeInfo, v10);
    byte_40F8BBD = 1;
  }
  routeClass = this->fields.routeClass;
  v12 = WarBoardAI___c_TypeInfo;
  if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v12 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__11_7 = static_fields->__9__11_7;
  if ( !_9__11_7 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = WarBoardAI___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__11_7 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B170CC(
                                                                    System_Func_WarBoardAIRoute_RouteData__float__TypeInfo,
                                                                    x,
                                                                    method,
                                                                    v3,
                                                                    v4);
    System_Func_WarBoardAIRoute_RouteData__float____ctor(
      _9__11_7,
      v15,
      Method_WarBoardAI___c__Think_b__11_7__,
      (const MethodInfo_2B6CA34 *)Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__);
    v16 = WarBoardAI___c_TypeInfo->static_fields;
    v16->__9__11_7 = _9__11_7;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__11_7,
      (System_Int32_array **)_9__11_7,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__27017828(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__float__o *)_9__11_7,
          (const MethodInfo_19C4264 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____66842248);
  if ( !routeClass || (npcData = routeClass->fields.npcData) == 0LL )
    sub_B170D4();
  return (float)((float)npcData->fields.lowerThinkingValue / 100.0) <= v23;
}


int32_t __fastcall WarBoardAI__get_ForceId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_B170D4();
  return routeClass->fields.forceId;
}


int32_t __fastcall WarBoardAI__get_GroupId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_B170D4();
  return routeClass->fields.groupId;
}


void __fastcall WarBoardAI__Think_d__11___ctor(
        WarBoardAI__Think_d__11_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardAI__Think_d__11__MoveNext(WarBoardAI__Think_d__11_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  struct WarBoardAI_o *_4__this; // x19
  WarBoardAIRoute_o *routeClass; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  WarBoardAIRoute_o *v66; // x20
  System_Collections_Generic_Dictionary_int__uint__o *placePieceData; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x22
  Il2CppObject *RouteData; // x0
  Il2CppObject **p__2__current; // x27
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  bool v77; // w20
  System_Collections_Generic_IEnumerable_TSource__o *availableRouteList_5__4; // x26
  struct WarBoardAIRoute_o *v79; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x1
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList_5__2; // x8
  __int64 v82; // x21
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  struct WarBoardAIRoute_o *v87; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *v88; // x22
  int32_t pickValue; // w8
  BalanceConfig_c *v90; // x0
  _BOOL4 IsWarBoardAiCalcEvalSum; // w9
  WarBoardAI___c_c *v92; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_0; // x23
  Il2CppObject *v95; // x24
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  struct WarBoardAI___c_StaticFields *v102; // x0
  BattleServantConfConponent_o *p__9__11_0; // x0
  struct WarBoardAI___c_StaticFields *v104; // x8
  Il2CppObject *v105; // x24
  struct WarBoardAI___c_StaticFields *v106; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v107; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v108; // x22
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v113; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_availableRouteList_5__4; // x23
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v125; // x25
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **v132; // x24
  __int64 IsNullOrEmpty; // x0
  __int64 v134; // x8
  unsigned __int64 v135; // x20
  int32_t pickValue_5__3; // w28
  BattleServantConfConponent_o *v137; // x25
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v138; // x26
  BalanceConfig_c *v139; // x0
  WarBoardAIRoute_RouteData_o *v140; // x0
  __int64 v141; // x1
  __int64 v142; // x2
  __int64 v143; // x3
  __int64 v144; // x4
  __int64 v145; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *klass; // x27
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v153; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v154; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v155; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v156; // x0
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *evalValueSortList_5__5; // x8
  System_Collections_Generic_List_Decimal__o *v164; // x21
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v165; // x23
  int v166; // w27
  int v167; // w19
  int max_length; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v169; // x0
  int v170; // w24
  int v171; // w25
  char v172; // w26
  WarBoardPieceData_o *actionPiece; // x0
  WarBoardAIRoute_RouteData_o *current; // x23
  int v175; // w27
  int v176; // w8
  WarBoardAI_o *v177; // x9
  struct WarBoardAIRoute_o *v178; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *tacticalTrendList; // x0
  float v180; // s12
  float BestMagnification; // s8
  float LowestMagnification; // s0
  int value; // w21
  float ImmobilityMagnification; // s0
  WarBoardTacticalTrendEntity_o *v185; // x23
  int v186; // w8
  float v187; // s8
  BalanceConfig_c *v188; // x0
  __int64 v189; // x3
  __int64 v190; // x4
  System_Decimal_o v191; // kr00_16
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v192; // x8
  WarBoardAI___c_c *v193; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v194; // x25
  struct WarBoardAI___c_StaticFields *v195; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_8; // x26
  int v197; // w21
  __int64 v198; // x3
  __int64 v199; // x4
  System_Decimal_o v200; // kr10_16
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v201; // x8
  WarBoardAI___c_c *v202; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v203; // x25
  struct WarBoardAI___c_StaticFields *v204; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_9; // x26
  int v206; // w21
  Il2CppObject *v207; // x27
  struct WarBoardAI___c_StaticFields *v208; // x0
  System_String_array **v209; // x2
  System_String_array **v210; // x3
  System_Boolean_array **v211; // x4
  System_Int32_array **v212; // x5
  System_Int32_array *v213; // x6
  System_Int32_array *v214; // x7
  System_Decimal_o v215; // kr20_16
  __int64 v216; // x2
  __int64 v217; // x4
  System_Decimal_o v218; // kr30_16
  Il2CppObject *v219; // x27
  struct WarBoardAI___c_StaticFields *v220; // x0
  System_String_array **v221; // x2
  System_String_array **v222; // x3
  System_Boolean_array **v223; // x4
  System_Int32_array **v224; // x5
  System_Int32_array *v225; // x6
  System_Int32_array *v226; // x7
  System_Decimal_o v227; // kr40_16
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v228; // x8
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v229; // x8
  int v230; // w21
  int32_t size; // w27
  System_Decimal_o v232; // kr50_16
  System_String_array **v233; // x3
  System_Boolean_array **v234; // x4
  System_Int32_array **v235; // x5
  System_Int32_array *v236; // x6
  System_Int32_array *v237; // x7
  System_Int32_array **v238; // x1
  __int64 v239; // x1
  __int64 v240; // x2
  __int64 v241; // x3
  __int64 v242; // x4
  System_Collections_Generic_IEnumerable_TSource__o *executeRoute; // x21
  WarBoardAI___c_c *v244; // x0
  struct WarBoardAI___c_StaticFields *v245; // x8
  System_Func_WarBoardAIRoute_RouteData__float__o *_9__11_3; // x22
  Il2CppObject *v247; // x23
  struct WarBoardAI___c_StaticFields *v248; // x0
  System_String_array **v249; // x2
  System_String_array **v250; // x3
  System_Boolean_array **v251; // x4
  System_Int32_array **v252; // x5
  System_Int32_array *v253; // x6
  System_Int32_array *v254; // x7
  System_Int32_array **v255; // x0
  Il2CppObject **v256; // x27
  System_String_array **v257; // x2
  System_String_array **v258; // x3
  System_Boolean_array **v259; // x4
  System_Int32_array **v260; // x5
  System_Int32_array *v261; // x6
  System_Int32_array *v262; // x7
  int v263; // w8
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v264; // x21
  System_String_array **v265; // x2
  System_String_array **v266; // x3
  System_Boolean_array **v267; // x4
  System_Int32_array **v268; // x5
  System_Int32_array *v269; // x6
  System_Int32_array *v270; // x7
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v271; // x22
  int v272; // w19
  __int64 v273; // x23
  __int64 v274; // x22
  BattleBuffData_BuffData_o *v275; // x1
  WarBoardPieceData_o *v276; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array **p_evalValueSortList_5__5; // x27
  System_String_array **v278; // x2
  System_String_array **v279; // x3
  System_Boolean_array **v280; // x4
  System_Int32_array **v281; // x5
  System_Int32_array *v282; // x6
  System_Int32_array *v283; // x7
  System_Int32_array **v284; // x0
  System_String_array **v285; // x2
  System_String_array **v286; // x3
  System_Boolean_array **v287; // x4
  System_Int32_array **v288; // x5
  System_Int32_array *v289; // x6
  System_Int32_array *v290; // x7
  Il2CppObject *v291; // x0
  System_String_array **v292; // x2
  System_String_array **v293; // x3
  System_Boolean_array **v294; // x4
  System_Int32_array **v295; // x5
  System_Int32_array *v296; // x6
  System_Int32_array *v297; // x7
  System_Int32_array **v298; // x0
  System_String_array **v299; // x2
  System_String_array **v300; // x3
  System_Boolean_array **v301; // x4
  System_Int32_array **v302; // x5
  System_Int32_array *v303; // x6
  System_Int32_array *v304; // x7
  Il2CppObject *v305; // x0
  System_String_array **v306; // x2
  System_String_array **v307; // x3
  System_Boolean_array **v308; // x4
  System_Int32_array **v309; // x5
  System_Int32_array *v310; // x6
  System_Int32_array *v311; // x7
  WarBoardAI__Think_d__11_o *v313; // [xsp+8h] [xbp-118h]
  WarBoardAI__Think_d__11_o *v314; // [xsp+8h] [xbp-118h]
  System_Collections_Generic_List_Decimal__o *v315; // [xsp+10h] [xbp-110h]
  WarBoardAI_o *v316; // [xsp+20h] [xbp-100h]
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o **v317; // [xsp+28h] [xbp-F8h]
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array **object; // [xsp+30h] [xbp-F0h]
  _BYTE v319[32]; // [xsp+38h] [xbp-E8h] BYREF
  int v320; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v321; // [xsp+60h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v322; // [xsp+80h] [xbp-A0h] BYREF
  System_Decimal_o v323; // 0:x1.16
  System_Decimal_o v324; // 0:x2.16
  System_Decimal_o v325; // 0:x2.16

  if ( (byte_40F79C1 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, v9);
    sub_B16FFC(&bool_TypeInfo, v10);
    sub_B16FFC(&System_Decimal_TypeInfo, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, v13);
    sub_B16FFC(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____66842248, v14);
    sub_B16FFC(&Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____, v15);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____, v16);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__get_Current__, v23);
    sub_B16FFC(&Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__, v24);
    sub_B16FFC(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__, v25);
    sub_B16FFC(&Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__, v26);
    sub_B16FFC(&Method_System_Func_List_WarBoardAIRoute_RouteData___bool___ctor__, v27);
    sub_B16FFC(&Method_System_Func_List_WarBoardAIRoute_RouteData___Decimal___ctor__, v28);
    sub_B16FFC(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v29);
    sub_B16FFC(&System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo, v30);
    sub_B16FFC(&System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo, v31);
    sub_B16FFC(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v32);
    sub_B16FFC(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo, v33);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__, v34);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__, v35);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__, v36);
    sub_B16FFC(&System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo, v37);
    sub_B16FFC(&Method_System_Collections_Generic_List_Decimal__Add__, v38);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__, v39);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v40);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__, v41);
    sub_B16FFC(&Method_System_Collections_Generic_List_Decimal___ctor__, v42);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__, v43);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__, v44);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v45);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___get_Count__, v46);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v47);
    sub_B16FFC(&System_Collections_Generic_List_Decimal__TypeInfo, v48);
    sub_B16FFC(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo, v49);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo, v50);
    sub_B16FFC(&Method_WarBoardAI___c__Think_b__11_0__, v51);
    sub_B16FFC(&Method_WarBoardAI___c__Think_b__11_1__, v52);
    sub_B16FFC(&Method_WarBoardAI___c__Think_b__11_3__, v53);
    sub_B16FFC(&Method_WarBoardAI___c__Think_b__11_8__, v54);
    sub_B16FFC(&Method_WarBoardAI___c__Think_b__11_9__, v55);
    sub_B16FFC(&Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__, v56);
    sub_B16FFC(&WarBoardAI___c__DisplayClass11_0_TypeInfo, v57);
    sub_B16FFC(&WarBoardAI___c_TypeInfo, v58);
    sub_B16FFC(&Method_WarBoardAI__Think_b__11_2__, v59);
    byte_40F79C1 = 1;
  }
  memset(&v322, 0, sizeof(v322));
  memset(&v321, 0, sizeof(v321));
  v320 = 0;
  _4__this = this->fields.__4__this;
  v316 = _4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_198;
      routeClass = _4__this->fields.routeClass;
      _4__this->fields.routeIndex = 0;
      _4__this->fields.isEndRoute = 0;
      if ( !routeClass )
        goto LABEL_198;
      WarBoardAIRoute__BeforeCreateRouteData(routeClass, 0LL);
      v66 = _4__this->fields.routeClass;
      if ( !v66 )
        goto LABEL_198;
      placePieceData = v66->fields.placePieceData;
      v68 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo, v62, v63, v64, v65);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v68,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
      RouteData = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                                    v66,
                                    placePieceData,
                                    0,
                                    (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v68,
                                    0LL);
      this->fields.__2__current = RouteData;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(
        (BattleServantConfConponent_o *)p__2__current,
        (System_Int32_array **)RouteData,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76);
      v77 = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return v77;
    case 1:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_198;
      v79 = _4__this->fields.routeClass;
      if ( !v79 )
        goto LABEL_198;
      allRouteList = v79->fields.allRouteList;
      this->fields._allRouteList_5__2 = allRouteList;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._allRouteList_5__2,
        (System_Int32_array **)allRouteList,
        v2,
        v3,
        v4,
        v5,
        v6,
        v7);
      allRouteList_5__2 = this->fields._allRouteList_5__2;
      if ( !allRouteList_5__2 )
        goto LABEL_198;
      if ( !allRouteList_5__2->fields._size )
      {
        v77 = 1;
        v319[0] = 1;
        v305 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v319);
        this->fields.__2__current = v305;
        v256 = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)v256,
          (System_Int32_array **)v305,
          v306,
          v307,
          v308,
          v309,
          v310,
          v311);
        v263 = 2;
        goto LABEL_203;
      }
LABEL_16:
      v82 = sub_B170CC(WarBoardAI___c__DisplayClass11_0_TypeInfo, method, v2, v3, v4);
      System_Object___ctor((Il2CppObject *)v82, 0LL);
      if ( !_4__this )
        goto LABEL_198;
      v87 = _4__this->fields.routeClass;
      if ( !v87 )
        goto LABEL_198;
      v88 = this->fields._allRouteList_5__2;
      if ( !v88 )
        goto LABEL_198;
      pickValue = v87->fields.pickValue;
      if ( pickValue >= v88->fields._size )
        pickValue = v88->fields._size;
      this->fields._pickValue_5__3 = pickValue;
      if ( !pickValue )
        this->fields._pickValue_5__3 = v88->fields._size;
      v90 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v90 = BalanceConfig_TypeInfo;
        v88 = this->fields._allRouteList_5__2;
      }
      IsWarBoardAiCalcEvalSum = v90->static_fields->IsWarBoardAiCalcEvalSum;
      v92 = WarBoardAI___c_TypeInfo;
      if ( IsWarBoardAiCalcEvalSum )
      {
        if ( (WORD1(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v92 = WarBoardAI___c_TypeInfo;
        }
        static_fields = v92->static_fields;
        _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)static_fields->__9__11_0;
        if ( !_9__11_0 )
        {
          if ( (BYTE3(v92->vtable._0_Equals.methodPtr) & 4) != 0 && !v92->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v92);
            static_fields = WarBoardAI___c_TypeInfo->static_fields;
          }
          v95 = (Il2CppObject *)static_fields->__9;
          _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B170CC(
                                                                            System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo,
                                                                            v83,
                                                                            v84,
                                                                            v85,
                                                                            v86);
          System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
            _9__11_0,
            v95,
            Method_WarBoardAI___c__Think_b__11_0__,
            (const MethodInfo_2B6B304 *)Method_System_Func_List_WarBoardAIRoute_RouteData___Decimal___ctor__);
          v102 = WarBoardAI___c_TypeInfo->static_fields;
          v102->__9__11_0 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
          p__9__11_0 = (BattleServantConfConponent_o *)&v102->__9__11_0;
LABEL_45:
          sub_B16F98(p__9__11_0, (System_Int32_array **)_9__11_0, v96, v97, v98, v99, v100, v101);
        }
      }
      else
      {
        if ( (WORD1(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v92 = WarBoardAI___c_TypeInfo;
        }
        v104 = v92->static_fields;
        _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)v104->__9__11_1;
        if ( !_9__11_0 )
        {
          if ( (BYTE3(v92->vtable._0_Equals.methodPtr) & 4) != 0 && !v92->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v92);
            v104 = WarBoardAI___c_TypeInfo->static_fields;
          }
          v105 = (Il2CppObject *)v104->__9;
          _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B170CC(
                                                                            System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo,
                                                                            v83,
                                                                            v84,
                                                                            v85,
                                                                            v86);
          System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
            _9__11_0,
            v105,
            Method_WarBoardAI___c__Think_b__11_1__,
            (const MethodInfo_2B6B304 *)Method_System_Func_List_WarBoardAIRoute_RouteData___Decimal___ctor__);
          v106 = WarBoardAI___c_TypeInfo->static_fields;
          v106->__9__11_1 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
          p__9__11_0 = (BattleServantConfConponent_o *)&v106->__9__11_1;
          goto LABEL_45;
        }
      }
      v107 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Decimal_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v88,
                                                                    (System_Func_TSource__TKey__o *)_9__11_0,
                                                                    (const MethodInfo_19BDA18 *)Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
      v108 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
               v107,
               (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v113 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo, v109, v110, v111, v112);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v113,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
      this->fields._availableRouteList_5__4 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v113;
      p_availableRouteList_5__4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields._availableRouteList_5__4;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._availableRouteList_5__4,
        (System_Int32_array **)v113,
        v115,
        v116,
        v117,
        v118,
        v119,
        v120);
      v125 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                                  System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo,
                                                                                  v121,
                                                                                  v122,
                                                                                  v123,
                                                                                  v124);
      System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
        v125,
        (const MethodInfo_21DE95C *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !v82 )
        goto LABEL_198;
      *(_QWORD *)(v82 + 16) = v125;
      v132 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **)(v82 + 16);
      v313 = this;
      sub_B16F98(
        (BattleServantConfConponent_o *)(v82 + 16),
        (System_Int32_array **)v125,
        v126,
        v127,
        v128,
        v129,
        v130,
        v131);
      if ( !v108 )
        goto LABEL_198;
      v134 = *(_QWORD *)&v108->max_length;
      if ( (int)v134 >= 1 )
      {
        v135 = 0LL;
        pickValue_5__3 = this->fields._pickValue_5__3;
        v317 = &this->fields._availableRouteList_5__4;
        v137 = (BattleServantConfConponent_o *)(v82 + 24);
        while ( 1 )
        {
          if ( v135 >= (unsigned int)v134 )
            goto LABEL_205;
          v138 = v108->m_Items[v135];
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v138, 0LL);
          if ( (IsNullOrEmpty & 1) == 0 )
          {
            v139 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v139 = BalanceConfig_TypeInfo;
            }
            if ( !v139->static_fields->IsWarBoardAiFilterNotAction )
              goto LABEL_70;
            if ( !v138 )
              goto LABEL_198;
            if ( !LODWORD(v138->fields.msgIds) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v140 = *(WarBoardAIRoute_RouteData_o **)(*(_QWORD *)&v138->fields.groupId + 32LL);
            if ( !v140 )
              goto LABEL_198;
            if ( WarBoardAIRoute_RouteData__get_notAction(v140, 0LL) )
            {
              if ( !LODWORD(v138->fields.msgIds) )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v145 = *(_QWORD *)(*(_QWORD *)&v138->fields.groupId + 32LL);
              if ( !v145 || !*v132 )
                goto LABEL_198;
              IsNullOrEmpty = System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                                *v132,
                                *(WarBoardAIRoute_RouteData_o **)(v145 + 48),
                                (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
              goto LABEL_78;
            }
            klass = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v137->klass;
            if ( !v137->klass )
            {
              klass = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                           System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                                                           v141,
                                                                                           v142,
                                                                                           v143,
                                                                                           v144);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                klass,
                (Il2CppObject *)v82,
                Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__,
                (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
              *(_QWORD *)(v82 + 24) = klass;
              p_availableRouteList_5__4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)v317;
              sub_B16F98(v137, (System_Int32_array **)klass, v147, v148, v149, v150, v151, v152);
            }
            IsNullOrEmpty = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                              (System_Collections_Generic_List_T__o *)v138,
                              (System_Func_T__bool__o *)klass,
                              (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
            if ( (IsNullOrEmpty & 1) == 0 )
              break;
          }
LABEL_78:
          LODWORD(v134) = v108->max_length;
          if ( (__int64)++v135 >= (int)v134 )
            goto LABEL_79;
        }
        v139 = BalanceConfig_TypeInfo;
LABEL_70:
        if ( (BYTE3(v139->vtable._0_Equals.methodPtr) & 4) != 0 && !v139->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v139);
          v139 = BalanceConfig_TypeInfo;
        }
        if ( !v139->static_fields->IsWarBoardAiFilterWasteRoute
          || (IsNullOrEmpty = WarBoardAI__CheckWasteRoute(
                                _4__this,
                                (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v138,
                                0LL),
              (IsNullOrEmpty & 1) == 0) )
        {
          if ( !*p_availableRouteList_5__4 )
            goto LABEL_198;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            *p_availableRouteList_5__4,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v138,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
          availableRouteList_5__4 = (System_Collections_Generic_IEnumerable_TSource__o *)*p_availableRouteList_5__4;
          if ( !*p_availableRouteList_5__4 )
            goto LABEL_198;
          if ( pickValue_5__3 <= SLODWORD(availableRouteList_5__4[1].monitor) )
            goto LABEL_80;
        }
        goto LABEL_78;
      }
LABEL_79:
      availableRouteList_5__4 = (System_Collections_Generic_IEnumerable_TSource__o *)*p_availableRouteList_5__4;
      if ( !*p_availableRouteList_5__4 )
        goto LABEL_198;
LABEL_80:
      this = v313;
      if ( SLODWORD(availableRouteList_5__4[1].monitor) <= 0 )
      {
        v77 = 1;
        v319[0] = 1;
        v298 = (System_Int32_array **)j_il2cpp_value_box_0(bool_TypeInfo, v319);
        v313->fields.__2__current = (Il2CppObject *)v298;
        v256 = &v313->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)&v313->fields.__2__current, v298, v299, v300, v301, v302, v303, v304);
        v263 = 3;
        goto LABEL_203;
      }
LABEL_81:
      v153 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                  System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo,
                                                                                  method,
                                                                                  v2,
                                                                                  v3,
                                                                                  v4);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v153,
        (Il2CppObject *)_4__this,
        Method_WarBoardAI__Think_b__11_2__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_List_WarBoardAIRoute_RouteData___bool___ctor__);
      v154 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               availableRouteList_5__4,
               (System_Func_TSource__bool__o *)v153,
               (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
      v155 = System_Linq_Enumerable__Take_BattleData_CommandHistory_(
               v154,
               this->fields._pickValue_5__3,
               (const MethodInfo_19C4328 *)Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
      v156 = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                          v155,
                                                                                          (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      this->fields._evalValueSortList_5__5 = v156;
      object = &this->fields._evalValueSortList_5__5;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._evalValueSortList_5__5,
        (System_Int32_array **)v156,
        v157,
        v158,
        v159,
        v160,
        v161,
        v162);
      evalValueSortList_5__5 = this->fields._evalValueSortList_5__5;
      if ( !evalValueSortList_5__5 )
        goto LABEL_198;
      if ( !*(_QWORD *)&evalValueSortList_5__5->max_length )
      {
        v77 = 1;
        v319[0] = 1;
        v291 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v319);
        this->fields.__2__current = v291;
        v256 = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)v256,
          (System_Int32_array **)v291,
          v292,
          v293,
          v294,
          v295,
          v296,
          v297);
        v263 = 4;
LABEL_203:
        *((_DWORD *)v256 - 2) = v263;
        return v77;
      }
LABEL_83:
      v314 = this;
      v164 = (System_Collections_Generic_List_Decimal__o *)sub_B170CC(
                                                             System_Collections_Generic_List_Decimal__TypeInfo,
                                                             method,
                                                             v2,
                                                             v3,
                                                             v4);
      System_Collections_Generic_List_Decimal____ctor(
        v164,
        (const MethodInfo_2ECD340 *)Method_System_Collections_Generic_List_Decimal___ctor__);
      v165 = *object;
      if ( !*object )
        goto LABEL_198;
      v166 = 0;
      v167 = 0;
      v315 = v164;
      while ( 1 )
      {
        max_length = v165->max_length;
        if ( v167 >= max_length )
          break;
        if ( v167 >= (unsigned int)max_length )
          goto LABEL_205;
        v169 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v165->m_Items[v167];
        if ( !v169 )
          goto LABEL_198;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v319,
          v169,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
        v170 = 0;
        v171 = 0;
        v172 = 0;
        v322 = *(System_Collections_Generic_List_Enumerator_T__o *)v319;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v322,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__) )
        {
          current = (WarBoardAIRoute_RouteData_o *)v322.fields.current;
          if ( !v322.fields.current )
            sub_B170D4();
          if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)v322.fields.current, 4LL, 0LL) )
          {
            actionPiece = current->fields.actionPiece;
            if ( actionPiece )
              v171 |= WarBoardPieceData__get_isMaster(actionPiece, 0LL);
            v172 = 1;
          }
          v170 |= WarBoardAIRoute_RouteData__HasFlag(current, 8LL, 0LL);
        }
        *(_DWORD *)&v319[4 * v166 + 24] = 849;
        v175 = ++v320;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v322,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
        if ( v175 )
        {
          v176 = v175 - 1;
          v177 = v316;
          if ( *(_DWORD *)&v319[4 * v175 + 20] == 849 )
          {
            --v175;
            v320 = v176;
            if ( !v316 )
              goto LABEL_198;
            goto LABEL_103;
          }
        }
        else
        {
          v177 = v316;
        }
        if ( !v177 )
          goto LABEL_198;
LABEL_103:
        v178 = v177->fields.routeClass;
        if ( !v178 )
          goto LABEL_198;
        tacticalTrendList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v178->fields.tacticalTrendList;
        if ( !tacticalTrendList )
          goto LABEL_198;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v319,
          tacticalTrendList,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
        v180 = 0.0;
        v321 = *(System_Collections_Generic_List_Enumerator_T__o *)v319;
LABEL_116:
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v321,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__) )
        {
          v185 = (WarBoardTacticalTrendEntity_o *)v321.fields.current;
          if ( !v321.fields.current )
            sub_B170D4();
          switch ( HIDWORD(v321.fields.current[1].klass) )
          {
            case 0:
              if ( v167 < SLODWORD(v321.fields.current[1].monitor) )
              {
                BestMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(
                                      (WarBoardTacticalTrendEntity_o *)v321.fields.current,
                                      0LL);
                LowestMagnification = WarBoardTacticalTrendEntity__GetLowestMagnification(v185, 0LL);
                value = v185->fields.value;
                ImmobilityMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(v185, 0LL)
                                        - (float)((float)((float)(BestMagnification - LowestMagnification)
                                                        / (float)((float)value + -1.0))
                                                * (float)v167);
                goto LABEL_115;
              }
              break;
            case 1:
              if ( (v172 & 1) != 0 )
                goto LABEL_114;
              break;
            case 4:
              if ( (v171 & 1) != 0 )
                goto LABEL_114;
              break;
            case 5:
              if ( (v170 & 1) != 0 )
              {
LABEL_114:
                ImmobilityMagnification = WarBoardTacticalTrendEntity__GetImmobilityMagnification(
                                            (WarBoardTacticalTrendEntity_o *)v321.fields.current,
                                            0LL);
LABEL_115:
                v180 = v180 + ImmobilityMagnification;
              }
              break;
            default:
              goto LABEL_116;
          }
        }
        *(_DWORD *)&v319[4 * v175 + 24] = 1074;
        v166 = ++v320;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v321,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
        if ( v166 )
        {
          v186 = v166 - 1;
          if ( *(_DWORD *)&v319[4 * v166 + 20] == 1074 )
          {
            --v166;
            v320 = v186;
          }
        }
        if ( v180 == 0.0 )
          v187 = 1.0;
        else
          v187 = v180;
        v188 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v188 = BalanceConfig_TypeInfo;
        }
        if ( v188->static_fields->IsWarBoardAiCalcEvalSum )
        {
          if ( (WORD1(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v191 = System_Decimal__op_Explicit(v187, 0LL);
          method = *(const MethodInfo **)&v191.fields.lo;
          IsNullOrEmpty = *(_QWORD *)&v191.fields.flags;
          v192 = *object;
          if ( !*object )
            goto LABEL_198;
          if ( v167 >= v192->max_length )
            goto LABEL_205;
          v193 = WarBoardAI___c_TypeInfo;
          v194 = (System_Collections_Generic_IEnumerable_TSource__o *)v192->m_Items[v167];
          if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v193 = WarBoardAI___c_TypeInfo;
          }
          v195 = v193->static_fields;
          _9__11_8 = v195->__9__11_8;
          if ( !_9__11_8 )
          {
            if ( (BYTE3(v193->vtable._0_Equals.methodPtr) & 4) != 0 )
            {
              v197 = v166;
              if ( !v193->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v193);
                v195 = WarBoardAI___c_TypeInfo->static_fields;
              }
            }
            else
            {
              v197 = v166;
            }
            v207 = (Il2CppObject *)v195->__9;
            _9__11_8 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B170CC(
                                                                              System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo,
                                                                              method,
                                                                              v2,
                                                                              v189,
                                                                              v190);
            System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
              _9__11_8,
              v207,
              Method_WarBoardAI___c__Think_b__11_8__,
              (const MethodInfo_2B6B304 *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
            v208 = WarBoardAI___c_TypeInfo->static_fields;
            v208->__9__11_8 = _9__11_8;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v208->__9__11_8,
              (System_Int32_array **)_9__11_8,
              v209,
              v210,
              v211,
              v212,
              v213,
              v214);
            v166 = v197;
          }
          v215 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__27017756(
                   v194,
                   (System_Func_TSource__Decimal__o *)_9__11_8,
                   (const MethodInfo_19C421C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
          if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v218 = System_Decimal__op_Multiply(v191, v215, 0LL);
          v217 = *(_QWORD *)&v218.fields.lo;
          v216 = *(_QWORD *)&v218.fields.flags;
        }
        else
        {
          if ( (WORD1(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v200 = System_Decimal__op_Explicit(v187, 0LL);
          method = *(const MethodInfo **)&v200.fields.lo;
          IsNullOrEmpty = *(_QWORD *)&v200.fields.flags;
          v201 = *object;
          if ( !*object )
            goto LABEL_198;
          if ( v167 >= v201->max_length )
            goto LABEL_205;
          v202 = WarBoardAI___c_TypeInfo;
          v203 = (System_Collections_Generic_IEnumerable_TSource__o *)v201->m_Items[v167];
          if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v202 = WarBoardAI___c_TypeInfo;
          }
          v204 = v202->static_fields;
          _9__11_9 = v204->__9__11_9;
          if ( !_9__11_9 )
          {
            if ( (BYTE3(v202->vtable._0_Equals.methodPtr) & 4) != 0 )
            {
              v206 = v166;
              if ( !v202->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v202);
                v204 = WarBoardAI___c_TypeInfo->static_fields;
              }
            }
            else
            {
              v206 = v166;
            }
            v219 = (Il2CppObject *)v204->__9;
            _9__11_9 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B170CC(
                                                                              System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo,
                                                                              method,
                                                                              v2,
                                                                              v198,
                                                                              v199);
            System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
              _9__11_9,
              v219,
              Method_WarBoardAI___c__Think_b__11_9__,
              (const MethodInfo_2B6B304 *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
            v220 = WarBoardAI___c_TypeInfo->static_fields;
            v220->__9__11_9 = _9__11_9;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v220->__9__11_9,
              (System_Int32_array **)_9__11_9,
              v221,
              v222,
              v223,
              v224,
              v225,
              v226);
            v166 = v206;
          }
          v227 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__27017756(
                   v203,
                   (System_Func_TSource__Decimal__o *)_9__11_9,
                   (const MethodInfo_19C421C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
          method = *(const MethodInfo **)&v227.fields.lo;
          IsNullOrEmpty = *(_QWORD *)&v227.fields.flags;
          v228 = *object;
          if ( !*object )
            goto LABEL_198;
          if ( v167 >= v228->max_length )
            goto LABEL_205;
          v229 = v228->m_Items[v167];
          if ( !v229 )
            goto LABEL_198;
          v230 = v166;
          size = v229->fields._size;
          if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v324 = System_Decimal__op_Implicit_43632420(size, 0LL);
          v325 = System_Decimal__op_Division(v227, v324, 0LL);
          v232 = System_Decimal__op_Multiply(v200, v325, 0LL);
          v217 = *(_QWORD *)&v232.fields.lo;
          v216 = *(_QWORD *)&v232.fields.flags;
          v166 = v230;
        }
        v164 = v315;
        if ( v315 )
        {
          *(_QWORD *)&v323.fields.flags = v216;
          *(_QWORD *)&v323.fields.lo = v217;
          System_Collections_Generic_List_Decimal___Add(
            v315,
            v323,
            (const MethodInfo_2ECE0C4 *)Method_System_Collections_Generic_List_Decimal__Add__);
          ++v167;
          v165 = *object;
          if ( *object )
            continue;
        }
        goto LABEL_198;
      }
      _4__this = v316;
      if ( !v316 )
        goto LABEL_198;
      IsNullOrEmpty = WarBoardAI__GetRandomIndex(v316, v164, 0LL);
      this = v314;
      if ( (unsigned int)IsNullOrEmpty >= v165->max_length )
      {
LABEL_205:
        sub_B17100(IsNullOrEmpty, method, v2);
        sub_B170A0();
      }
      v238 = (System_Int32_array **)v165->m_Items[(int)IsNullOrEmpty];
      v316->fields.executeRoute = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v238;
      sub_B16F98((BattleServantConfConponent_o *)&v316->fields.executeRoute, v238, v2, v233, v234, v235, v236, v237);
      executeRoute = (System_Collections_Generic_IEnumerable_TSource__o *)v316->fields.executeRoute;
      v244 = WarBoardAI___c_TypeInfo;
      if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
        v244 = WarBoardAI___c_TypeInfo;
      }
      v245 = v244->static_fields;
      _9__11_3 = v245->__9__11_3;
      if ( !_9__11_3 )
      {
        if ( (BYTE3(v244->vtable._0_Equals.methodPtr) & 4) != 0 && !v244->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v244);
          v245 = WarBoardAI___c_TypeInfo->static_fields;
        }
        v247 = (Il2CppObject *)v245->__9;
        _9__11_3 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B170CC(
                                                                        System_Func_WarBoardAIRoute_RouteData__float__TypeInfo,
                                                                        v239,
                                                                        v240,
                                                                        v241,
                                                                        v242);
        System_Func_WarBoardAIRoute_RouteData__float____ctor(
          _9__11_3,
          v247,
          Method_WarBoardAI___c__Think_b__11_3__,
          (const MethodInfo_2B6CA34 *)Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__);
        v248 = WarBoardAI___c_TypeInfo->static_fields;
        v248->__9__11_3 = _9__11_3;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v248->__9__11_3,
          (System_Int32_array **)_9__11_3,
          v249,
          v250,
          v251,
          v252,
          v253,
          v254);
        _4__this = v316;
      }
      System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__27017828(
        executeRoute,
        (System_Func_TSource__float__o *)_9__11_3,
        (const MethodInfo_19C4264 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____66842248);
      if ( WarBoardAI__CheckWasteRoute(_4__this, _4__this->fields.executeRoute, 0LL) )
      {
        v77 = 1;
        v319[0] = 1;
        v255 = (System_Int32_array **)j_il2cpp_value_box_0(bool_TypeInfo, v319);
        v314->fields.__2__current = (Il2CppObject *)v255;
        v256 = &v314->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)&v314->fields.__2__current, v255, v257, v258, v259, v260, v261, v262);
        v263 = 5;
        goto LABEL_203;
      }
LABEL_183:
      v264 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                                  System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo,
                                                                                  method,
                                                                                  v2,
                                                                                  v3,
                                                                                  v4);
      System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
        v264,
        (const MethodInfo_21DE95C *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !_4__this || (v271 = _4__this->fields.executeRoute) == 0LL )
LABEL_198:
        sub_B170D4();
      v272 = v271->fields._size - 1;
      if ( v272 >= 0 )
      {
        v273 = 8LL * v272 + 32;
        while ( 1 )
        {
          if ( v271->fields._size <= (unsigned int)v272 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v274 = *(__int64 *)((char *)&v271->fields._items->obj.klass + v273);
          if ( !v274 )
            goto LABEL_198;
          v275 = *(BattleBuffData_BuffData_o **)(v274 + 48);
          if ( v275 )
          {
            if ( !v264 )
              goto LABEL_198;
            if ( !System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
                    (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)v264,
                    v275,
                    (const MethodInfo_21DEFE0 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__)
              && !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v274, 0LL) )
            {
              System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                v264,
                *(WarBoardAIRoute_RouteData_o **)(v274 + 48),
                (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
              v276 = *(WarBoardPieceData_o **)(v274 + 48);
              if ( !v276 )
                goto LABEL_198;
              WarBoardPieceData__SetPrevAiRoute(v276, (WarBoardAIRoute_RouteData_o *)v274, 0LL);
            }
          }
          if ( (--v272 & 0x80000000) != 0 )
            break;
          v273 -= 8LL;
          v271 = v316->fields.executeRoute;
          if ( !v271 )
            goto LABEL_198;
        }
      }
      this->fields._availableRouteList_5__4 = 0LL;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._availableRouteList_5__4,
        0LL,
        v265,
        v266,
        v267,
        v268,
        v269,
        v270);
      this->fields._evalValueSortList_5__5 = 0LL;
      p_evalValueSortList_5__5 = &this->fields._evalValueSortList_5__5;
      sub_B16F98((BattleServantConfConponent_o *)p_evalValueSortList_5__5, 0LL, v278, v279, v280, v281, v282, v283);
      v319[0] = 0;
      v284 = (System_Int32_array **)j_il2cpp_value_box_0(bool_TypeInfo, v319);
      *(p_evalValueSortList_5__5 - 5) = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)v284;
      sub_B16F98(
        (BattleServantConfConponent_o *)(p_evalValueSortList_5__5 - 5),
        v284,
        v285,
        v286,
        v287,
        v288,
        v289,
        v290);
      *((_DWORD *)p_evalValueSortList_5__5 - 12) = 6;
      return 1;
    case 2:
      this->fields.__1__state = -1;
      goto LABEL_16;
    case 3:
      availableRouteList_5__4 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._availableRouteList_5__4;
      this->fields.__1__state = -1;
      goto LABEL_81;
    case 4:
      this->fields.__1__state = -1;
      object = &this->fields._evalValueSortList_5__5;
      goto LABEL_83;
    case 5:
      this->fields.__1__state = -1;
      goto LABEL_183;
    case 6:
      v77 = 0;
      this->fields.__1__state = -1;
      return v77;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall WarBoardAI__Think_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardAI__Think_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardAI__Think_d__11__System_Collections_IEnumerator_Reset(
        WarBoardAI__Think_d__11_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_WarBoardAI__Think_d__11_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall WarBoardAI__Think_d__11__System_Collections_IEnumerator_get_Current(
        WarBoardAI__Think_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardAI__Think_d__11__System_IDisposable_Dispose(
        WarBoardAI__Think_d__11_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardAI___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F79B9 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAI___c_TypeInfo, v1);
    byte_40F79B9 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardAI___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAI___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall WarBoardAI___c___ctor(WarBoardAI___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAI___c___GetRandomIndex_b__14_0(
        WarBoardAI___c_o *this,
        System_Decimal_o x,
        const MethodInfo *method)
{
  __int64 v3; // x0 OVERLAPPED
  __int64 v4; // x1
  System_Decimal_o result; // 0:x0.16

  v3 = *(_QWORD *)&x.fields.flags;
  v4 = *(_QWORD *)&x.fields.lo;
  *(_QWORD *)&result.fields.lo = v4;
  *(_QWORD *)&result.fields.flags = v3;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAI___c___Think_b__11_0(
        WarBoardAI___c_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WarBoardAI___c_c *v10; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_4; // x20
  Il2CppObject *v13; // x21
  struct WarBoardAI___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0 OVERLAPPED
  __int64 v22; // x1
  System_Decimal_o v23; // kr00_16
  System_Decimal_o result; // 0:x0.16

  if ( (byte_40F79BA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, x);
    sub_B16FFC(&Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__, v6);
    sub_B16FFC(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v7);
    sub_B16FFC(&Method_WarBoardAI___c__Think_b__11_4__, v8);
    sub_B16FFC(&WarBoardAI___c_TypeInfo, v9);
    byte_40F79BA = 1;
  }
  v10 = WarBoardAI___c_TypeInfo;
  if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v10 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__11_4 = static_fields->__9__11_4;
  if ( !_9__11_4 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = WarBoardAI___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__11_4 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B170CC(
                                                                      System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo,
                                                                      x,
                                                                      method,
                                                                      v3,
                                                                      v4);
    System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
      _9__11_4,
      v13,
      Method_WarBoardAI___c__Think_b__11_4__,
      (const MethodInfo_2B6B304 *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
    v14 = WarBoardAI___c_TypeInfo->static_fields;
    v14->__9__11_4 = _9__11_4;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v14->__9__11_4,
      (System_Int32_array **)_9__11_4,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v23 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__27017756(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_4,
          (const MethodInfo_19C421C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  v22 = *(_QWORD *)&v23.fields.lo;
  v21 = *(_QWORD *)&v23.fields.flags;
  *(_QWORD *)&result.fields.lo = v22;
  *(_QWORD *)&result.fields.flags = v21;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAI___c___Think_b__11_1(
        WarBoardAI___c_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WarBoardAI___c_c *v12; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_5; // x20
  Il2CppObject *v15; // x21
  struct WarBoardAI___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Decimal_o v23; // kr00_16
  int32_t size; // w19
  __int64 v25; // x0 OVERLAPPED
  __int64 v26; // x1
  System_Decimal_o v27; // kr20_16
  System_Decimal_o result; // 0:x0.16
  System_Decimal_o v29; // 0:x2.16

  if ( (byte_40F79BC & 1) == 0 )
  {
    sub_B16FFC(&System_Decimal_TypeInfo, x);
    sub_B16FFC(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, v6);
    sub_B16FFC(&Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v9);
    sub_B16FFC(&Method_WarBoardAI___c__Think_b__11_5__, v10);
    sub_B16FFC(&WarBoardAI___c_TypeInfo, v11);
    byte_40F79BC = 1;
  }
  v12 = WarBoardAI___c_TypeInfo;
  if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v12 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__11_5 = static_fields->__9__11_5;
  if ( !_9__11_5 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = WarBoardAI___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__11_5 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B170CC(
                                                                      System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo,
                                                                      x,
                                                                      method,
                                                                      v3,
                                                                      v4);
    System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
      _9__11_5,
      v15,
      Method_WarBoardAI___c__Think_b__11_5__,
      (const MethodInfo_2B6B304 *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
    v16 = WarBoardAI___c_TypeInfo->static_fields;
    v16->__9__11_5 = _9__11_5;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__11_5,
      (System_Int32_array **)_9__11_5,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__27017756(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_5,
          (const MethodInfo_19C421C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  if ( !x )
    sub_B170D4();
  size = x->fields._size;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v29 = System_Decimal__op_Implicit_43632420(size, 0LL);
  v27 = System_Decimal__op_Division(v23, v29, 0LL);
  v26 = *(_QWORD *)&v27.fields.lo;
  v25 = *(_QWORD *)&v27.fields.flags;
  *(_QWORD *)&result.fields.lo = v26;
  *(_QWORD *)&result.fields.flags = v25;
  return result;
}


float __fastcall WarBoardAI___c___Think_b__11_3(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.evalValue;
}


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAI___c___Think_b__11_4(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  float evalValue; // s8
  __int64 v5; // x0 OVERLAPPED
  __int64 v6; // x1
  System_Decimal_o v7; // kr00_16
  System_Decimal_o result; // 0:x0.16

  if ( (byte_40F79BB & 1) == 0 )
  {
    sub_B16FFC(&System_Decimal_TypeInfo, y);
    byte_40F79BB = 1;
  }
  if ( !y )
    sub_B170D4();
  evalValue = y->fields.evalValue;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v7 = System_Decimal__op_Explicit(evalValue, 0LL);
  v6 = *(_QWORD *)&v7.fields.lo;
  v5 = *(_QWORD *)&v7.fields.flags;
  *(_QWORD *)&result.fields.lo = v6;
  *(_QWORD *)&result.fields.flags = v5;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAI___c___Think_b__11_5(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  float evalValue; // s8
  __int64 v5; // x0 OVERLAPPED
  __int64 v6; // x1
  System_Decimal_o v7; // kr00_16
  System_Decimal_o result; // 0:x0.16

  if ( (byte_40F79BD & 1) == 0 )
  {
    sub_B16FFC(&System_Decimal_TypeInfo, y);
    byte_40F79BD = 1;
  }
  if ( !y )
    sub_B170D4();
  evalValue = y->fields.evalValue;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v7 = System_Decimal__op_Explicit(evalValue, 0LL);
  v6 = *(_QWORD *)&v7.fields.lo;
  v5 = *(_QWORD *)&v7.fields.flags;
  *(_QWORD *)&result.fields.lo = v6;
  *(_QWORD *)&result.fields.flags = v5;
  return result;
}


float __fastcall WarBoardAI___c___Think_b__11_7(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_B170D4();
  return y->fields.evalValue;
}


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAI___c___Think_b__11_8(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  float evalValue; // s8
  __int64 v5; // x0 OVERLAPPED
  __int64 v6; // x1
  System_Decimal_o v7; // kr00_16
  System_Decimal_o result; // 0:x0.16

  if ( (byte_40F79BE & 1) == 0 )
  {
    sub_B16FFC(&System_Decimal_TypeInfo, y);
    byte_40F79BE = 1;
  }
  if ( !y )
    sub_B170D4();
  evalValue = y->fields.evalValue;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v7 = System_Decimal__op_Explicit(evalValue, 0LL);
  v6 = *(_QWORD *)&v7.fields.lo;
  v5 = *(_QWORD *)&v7.fields.flags;
  *(_QWORD *)&result.fields.lo = v6;
  *(_QWORD *)&result.fields.flags = v5;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAI___c___Think_b__11_9(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  float evalValue; // s8
  __int64 v5; // x0 OVERLAPPED
  __int64 v6; // x1
  System_Decimal_o v7; // kr00_16
  System_Decimal_o result; // 0:x0.16

  if ( (byte_40F79BF & 1) == 0 )
  {
    sub_B16FFC(&System_Decimal_TypeInfo, y);
    byte_40F79BF = 1;
  }
  if ( !y )
    sub_B170D4();
  evalValue = y->fields.evalValue;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v7 = System_Decimal__op_Explicit(evalValue, 0LL);
  v6 = *(_QWORD *)&v7.fields.lo;
  v5 = *(_QWORD *)&v7.fields.flags;
  *(_QWORD *)&result.fields.lo = v6;
  *(_QWORD *)&result.fields.flags = v5;
  return result;
}


void __fastcall WarBoardAI___c__DisplayClass11_0___ctor(
        WarBoardAI___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAI___c__DisplayClass11_0___Think_b__6(
        WarBoardAI___c__DisplayClass11_0_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_WarBoardPieceData__o *notActionPieceHash; // x0

  if ( (byte_40F79C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__, x);
    byte_40F79C0 = 1;
  }
  if ( !x || (notActionPieceHash = this->fields.notActionPieceHash) == 0LL )
    sub_B170D4();
  return System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
           (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)notActionPieceHash,
           (BattleBuffData_BuffData_o *)x->fields.basePiece,
           (const MethodInfo_21DEFE0 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
}