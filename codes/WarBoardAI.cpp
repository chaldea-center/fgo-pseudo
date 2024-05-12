void __fastcall WarBoardAI___ctor(WarBoardAI_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  WarBoardAIRoute_o *v5; // x21
  const MethodInfo *v6; // x2
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4388FC0 & 1) == 0 )
  {
    sub_B775C4(&WarBoardAIRoute_TypeInfo);
    byte_4388FC0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (WarBoardAIRoute_o *)sub_B77694(WarBoardAIRoute_TypeInfo);
  WarBoardAIRoute___ctor(v5, npc, v6);
  this->fields.routeClass = v5;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B7769C(0LL, aiId);
  WarBoardAIRoute__AddPiecePersonalityDic(routeClass, aiId, pieceIndex, method);
}


bool __fastcall WarBoardAI__CheckWasteRoute(
        WarBoardAI_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *checkRoute,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v4; // x20
  __int64 notAction; // x0
  __int64 v6; // x1
  int32_t size; // w8
  unsigned int v8; // w24
  WarBoardAIRoute_RouteData_o *v9; // x22
  unsigned int v10; // w21
  WarBoardAIRoute_RouteData_o *PrevAiRoute_k__BackingField; // x21
  struct WarBoardPieceData_o *basePiece; // x8
  struct WarBoardPieceData_o *v13; // x9
  struct WarBoardPieceData_o *v14; // x8
  struct WarBoardPieceData_o *v15; // x8
  struct WarBoardPieceData_o *v16; // x8
  __int64 v17; // x2
  System_Enum_o *v18; // x23
  __int64 v19; // x2
  __int64 v20; // x2
  System_Enum_o *v21; // x23
  __int64 v22; // x2
  WarBoardAIRoute_RouteData_c *klass; // x8
  unsigned __int64 v24; // x10
  IWarBoardAIRouteWaste_c **p_offset; // x11
  __int64 v26; // x0
  __int64 v27; // x2
  System_Enum_o *v28; // x23
  __int64 v29; // x2
  WarBoardAIRoute_RouteData_c *v30; // x8
  unsigned __int64 v31; // x10
  IWarBoardAIRouteWaste_c **v32; // x11
  __int64 v33; // x0
  __int64 v34; // x2
  System_Enum_o *v35; // x23
  __int64 v36; // x2
  WarBoardAIRoute_RouteData_c *v37; // x8
  int32_t actionIndex; // w23
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  WarBoardAIRoute_RouteData_c *v42; // x8
  int32_t baseIndex; // w23
  unsigned __int64 v44; // x10
  IWarBoardAIRouteWaste_c **v45; // x11
  __int64 v46; // x0
  WarBoardAIRoute_RouteData_c *v47; // x8
  unsigned __int64 v48; // x10
  IWarBoardAIRouteWaste_c **v49; // x11
  __int64 v50; // x0
  __int64 v52; // [xsp+0h] [xbp-60h] BYREF
  int64_t flagNow; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4388FC2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
    sub_B775C4(&WarBoardAIRoute_RouteData_Flag_TypeInfo);
    sub_B775C4(&IWarBoardAIRouteWaste_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    byte_4388FC2 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v4,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
  if ( !checkRoute )
LABEL_74:
    sub_B7769C(notAction, v6);
  size = checkRoute->fields._size;
  if ( size < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( size <= v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v9 = checkRoute->fields._items->m_Items[v8];
    if ( !v9 )
      goto LABEL_74;
    if ( v9->fields.basePiece )
    {
      notAction = WarBoardAIRoute_RouteData__get_notAction(v9, 0LL);
      if ( (notAction & 1) == 0 )
      {
        v10 = v8 - 1;
        if ( (int)(v8 - 1) < 0 )
          goto LABEL_19;
        if ( checkRoute->fields._size <= v10 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        PrevAiRoute_k__BackingField = checkRoute->fields._items->m_Items[v10];
        if ( !PrevAiRoute_k__BackingField )
          goto LABEL_19;
        basePiece = PrevAiRoute_k__BackingField->fields.basePiece;
        if ( !basePiece )
          goto LABEL_74;
        v13 = v9->fields.basePiece;
        if ( !v13 )
          goto LABEL_74;
        if ( basePiece->fields._uniqueIndex_k__BackingField != v13->fields._uniqueIndex_k__BackingField
          || (notAction = WarBoardAIRoute_RouteData__get_notAction(PrevAiRoute_k__BackingField, 0LL),
              (notAction & 1) != 0) )
        {
LABEL_19:
          v14 = v9->fields.basePiece;
          if ( !v14 || !v4 )
            goto LABEL_74;
          notAction = System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                        (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v4,
                        v14->fields._index_k__BackingField,
                        (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
          if ( (notAction & 1) != 0 )
          {
            PrevAiRoute_k__BackingField = 0LL;
          }
          else
          {
            v15 = v9->fields.basePiece;
            if ( !v15 )
              goto LABEL_74;
            PrevAiRoute_k__BackingField = (WarBoardAIRoute_RouteData_o *)v15->fields._PrevAiRoute_k__BackingField;
          }
        }
        v16 = v9->fields.basePiece;
        if ( !v16 || !v4 )
          goto LABEL_74;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v4,
          v16->fields._index_k__BackingField,
          v9,
          (const MethodInfo_2FF4150 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
        if ( PrevAiRoute_k__BackingField )
        {
          flagNow = v9->fields.flagNow;
          v18 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow, v17);
          v52 = 2LL;
          notAction = j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v52, v19);
          if ( !v18 )
            goto LABEL_74;
          notAction = System_Enum__HasFlag(v18, (System_Enum_o *)notAction, 0LL);
          if ( (notAction & 1) == 0 )
          {
            flagNow = v9->fields.flagNow;
            v21 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow, v20);
            v52 = 0x10000000LL;
            notAction = j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v52, v22);
            if ( !v21 )
              goto LABEL_74;
            notAction = System_Enum__HasFlag(v21, (System_Enum_o *)notAction, 0LL);
            if ( (notAction & 1) == 0 )
            {
              klass = PrevAiRoute_k__BackingField->klass;
              if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
              {
                v24 = 0LL;
                p_offset = (IWarBoardAIRouteWaste_c **)&klass->_1.interfaceOffsets->offset;
                while ( *(p_offset - 1) != IWarBoardAIRouteWaste_TypeInfo )
                {
                  ++v24;
                  p_offset += 2;
                  if ( v24 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                    goto LABEL_36;
                }
                v26 = (__int64)(&klass->vtable._2_GetHashCode.method + 2 * *(_DWORD *)p_offset);
              }
              else
              {
LABEL_36:
                v26 = sub_B0F4C0(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 2LL);
              }
              flagNow = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v26)(
                          PrevAiRoute_k__BackingField,
                          *(_QWORD *)(v26 + 8));
              v28 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow, v27);
              v52 = 2LL;
              notAction = j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v52, v29);
              if ( !v28 )
                goto LABEL_74;
              notAction = System_Enum__HasFlag(v28, (System_Enum_o *)notAction, 0LL);
              if ( (notAction & 1) == 0 )
              {
                v30 = PrevAiRoute_k__BackingField->klass;
                if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                {
                  v31 = 0LL;
                  v32 = (IWarBoardAIRouteWaste_c **)&v30->_1.interfaceOffsets->offset;
                  while ( *(v32 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                  {
                    ++v31;
                    v32 += 2;
                    if ( v31 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                      goto LABEL_44;
                  }
                  v33 = (__int64)(&v30->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v32);
                }
                else
                {
LABEL_44:
                  v33 = sub_B0F4C0(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 2LL);
                }
                flagNow = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v33)(
                            PrevAiRoute_k__BackingField,
                            *(_QWORD *)(v33 + 8));
                v35 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow, v34);
                v52 = 0x10000000LL;
                notAction = j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v52, v36);
                if ( !v35 )
                  goto LABEL_74;
                notAction = System_Enum__HasFlag(v35, (System_Enum_o *)notAction, 0LL);
                if ( (notAction & 1) == 0 )
                {
                  v37 = PrevAiRoute_k__BackingField->klass;
                  actionIndex = v9->fields.actionIndex;
                  if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                  {
                    v39 = 0LL;
                    v40 = &v37->_1.interfaceOffsets->offset;
                    while ( *((IWarBoardAIRouteWaste_c **)v40 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                    {
                      ++v39;
                      v40 += 4;
                      if ( v39 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                        goto LABEL_52;
                    }
                    v41 = (__int64)(&v37->vtable._0_Equals.method + 2 * *v40);
                  }
                  else
                  {
LABEL_52:
                    v41 = sub_B0F4C0(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 0LL);
                  }
                  notAction = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v41)(
                                PrevAiRoute_k__BackingField,
                                *(_QWORD *)(v41 + 8));
                  if ( actionIndex == (_DWORD)notAction )
                  {
                    v42 = PrevAiRoute_k__BackingField->klass;
                    baseIndex = v9->fields.baseIndex;
                    if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                    {
                      v44 = 0LL;
                      v45 = (IWarBoardAIRouteWaste_c **)&v42->_1.interfaceOffsets->offset;
                      while ( *(v45 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                      {
                        ++v44;
                        v45 += 2;
                        if ( v44 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                          goto LABEL_59;
                      }
                      v46 = (__int64)(&v42->vtable._1_Finalize.method + 2 * *(_DWORD *)v45);
                    }
                    else
                    {
LABEL_59:
                      v46 = sub_B0F4C0(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 1LL);
                    }
                    notAction = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v46)(
                                  PrevAiRoute_k__BackingField,
                                  *(_QWORD *)(v46 + 8));
                    if ( baseIndex == (_DWORD)notAction )
                    {
                      notAction = WarBoardAIRoute_RouteData__get_notAction(v9, 0LL);
                      if ( (notAction & 1) == 0 )
                      {
                        v47 = PrevAiRoute_k__BackingField->klass;
                        if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                        {
                          v48 = 0LL;
                          v49 = (IWarBoardAIRouteWaste_c **)&v47->_1.interfaceOffsets->offset;
                          while ( *(v49 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                          {
                            ++v48;
                            v49 += 2;
                            if ( v48 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                              goto LABEL_67;
                          }
                          v50 = (__int64)(&v47->vtable._3_ToString.method + 2 * *(_DWORD *)v49);
                        }
                        else
                        {
LABEL_67:
                          v50 = sub_B0F4C0(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 3LL);
                        }
                        notAction = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v50)(
                                      PrevAiRoute_k__BackingField,
                                      *(_QWORD *)(v50 + 8));
                        if ( (notAction & 1) == 0 )
                          return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    size = checkRoute->fields._size;
    if ( (int)++v8 >= size )
      return 0;
  }
}


void __fastcall WarBoardAI__Clear(WarBoardAI_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_B7769C(0LL, method);
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
  Il2CppObject *v8; // x21
  __int64 v9; // x2
  Il2CppObject *v10; // x20
  __int64 v11; // x2
  Il2CppObject *v12; // x0
  int32_t v14; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v15; // [xsp+8h] [xbp-28h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4388FC5 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_24075/*"{0},{1},{2}"*/);
    byte_4388FC5 = 1;
  }
  v16 = forceId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, *(_QWORD *)&groupId);
  v15 = groupId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v9);
  v14 = index;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v11);
  return System_String__Format_44903000((System_String_o *)StringLiteral_24075/*"{0},{1},{2}"*/, v8, v10, v12, 0LL);
}


bool __fastcall WarBoardAI__Execute(WarBoardAI_o *this, const MethodInfo *method)
{
  WarBoardAI_o *v2; // x19
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *executeRoute; // x20
  int size; // w8
  __int64 routeIndex; // x21
  WarBoardAIRoute_RouteData_o *v6; // x8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v7; // x21
  __int64 v8; // x22
  WarBoardPieceData_o *basePiece; // x20
  int32_t v10; // w8
  int32_t v11; // w8
  bool v12; // w22
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v14; // x22
  __int64 v15; // x24
  WarBoardAI_o *v16; // x21
  WarBoardAIRoute_RouteData_o *v17; // x8
  int32_t actionIndex; // w22
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v19; // x21
  __int64 v20; // x22
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v21; // x21
  __int64 v22; // x22
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v23; // x21
  __int64 v24; // x22
  WarBoardAIRoute_RouteData_o *v25; // x8
  int32_t v26; // w21
  WarBoardPieceData_o *Piece_22695252; // x0
  System_Int32_array *v28; // x21
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v29; // x22
  __int64 v30; // x23
  WarBoardAIRoute_RouteData_o *v31; // x8
  int32_t v32; // w8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v33; // x9

  v2 = this;
  if ( (byte_4388FC3 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardAI_o *)sub_B775C4(&WarBoardAIManager_TypeInfo);
    byte_4388FC3 = 1;
  }
  executeRoute = v2->fields.executeRoute;
  if ( !executeRoute )
    return 0;
  size = executeRoute->fields._size;
  routeIndex = v2->fields.routeIndex;
  if ( size <= (int)routeIndex )
    return 0;
  if ( size <= (unsigned int)routeIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = executeRoute->fields._items->m_Items[routeIndex];
  if ( !v6 )
    goto LABEL_55;
  v7 = v2->fields.executeRoute;
  if ( !v7 )
    goto LABEL_55;
  v8 = v2->fields.routeIndex;
  basePiece = v6->fields.basePiece;
  if ( v7->fields._size <= (unsigned int)v8 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  this = (WarBoardAI_o *)v7->fields._items->m_Items[v8];
  if ( !this )
    goto LABEL_55;
  this = (WarBoardAI_o *)WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = v2->fields.routeIndex;
    v2->fields.isEndPhase = 0;
    v11 = v10 + 1;
    v2->fields.routeIndex = v11;
    goto LABEL_52;
  }
  this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v14 = v2->fields.executeRoute;
  if ( !v14 )
    goto LABEL_55;
  v15 = v2->fields.routeIndex;
  v16 = this;
  if ( v14->fields._size <= (unsigned int)v15 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v17 = v14->fields._items->m_Items[v15];
  if ( !v17 )
    goto LABEL_55;
  actionIndex = v17->fields.actionIndex;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  this = (WarBoardAI_o *)WarBoardAIManager__GetSquare(actionIndex, method);
  if ( !v16 )
    goto LABEL_55;
  this = (WarBoardAI_o *)WarBoardManager__CheckSelectSquare(
                           (WarBoardManager_o *)v16,
                           basePiece,
                           (WarBoardSquareData_o *)this,
                           1,
                           0LL);
  v19 = v2->fields.executeRoute;
  if ( !v19 )
    goto LABEL_55;
  v20 = v2->fields.routeIndex;
  if ( v19->fields._size <= (unsigned int)v20 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  this = (WarBoardAI_o *)v19->fields._items->m_Items[v20];
  if ( !this )
    goto LABEL_55;
  this = (WarBoardAI_o *)WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)this, 2LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_34;
  v21 = v2->fields.executeRoute;
  if ( !v21 )
    goto LABEL_55;
  v22 = v2->fields.routeIndex;
  if ( v21->fields._size <= (unsigned int)v22 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  this = (WarBoardAI_o *)v21->fields._items->m_Items[v22];
  if ( !this )
LABEL_55:
    sub_B7769C(this, method);
  this = (WarBoardAI_o *)WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)this, 4LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_46;
LABEL_34:
  v23 = v2->fields.executeRoute;
  if ( !v23 )
    goto LABEL_55;
  v24 = v2->fields.routeIndex;
  if ( v23->fields._size <= (unsigned int)v24 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v25 = v23->fields._items->m_Items[v24];
  if ( !v25 )
    goto LABEL_55;
  v26 = v25->fields.actionIndex;
  this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_55;
  this = *(WarBoardAI_o **)&this[10].fields.isEndPhase;
  if ( !this )
    goto LABEL_55;
  Piece_22695252 = WarBoardData__GetPiece_22695252((WarBoardData_o *)this, v26, 0LL);
  if ( Piece_22695252 && WarBoardPieceData__get_isServant(Piece_22695252, 0LL) )
  {
    this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_55;
    this = *(WarBoardAI_o **)&this[10].fields.isEndPhase;
    if ( !this )
      goto LABEL_55;
    v28 = WarBoardData__GetInRangeSquareIndecies((WarBoardData_o *)this, v26, 1, 0, 0LL);
    this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_55;
    WarBoardManager__DispPartyBuff((WarBoardManager_o *)this, v28, 0LL);
  }
LABEL_46:
  this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v29 = v2->fields.executeRoute;
  if ( !v29 )
    goto LABEL_55;
  v30 = v2->fields.routeIndex;
  if ( v29->fields._size <= (unsigned int)v30 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v31 = v29->fields._items->m_Items[v30];
  if ( !v31 || !this )
    goto LABEL_55;
  v12 = 1;
  this = (WarBoardAI_o *)WarBoardManager__PieceAction_19010712(
                           (WarBoardManager_o *)this,
                           basePiece,
                           v31->fields.actionIndex,
                           0LL,
                           1,
                           0LL);
  v32 = v2->fields.routeIndex;
  v2->fields.isEndPhase = (unsigned __int8)this & 1;
  v11 = v32 + 1;
  v2->fields.routeIndex = v11;
  if ( ((unsigned __int8)this & 1) != 0 )
    return v12;
LABEL_52:
  v33 = v2->fields.executeRoute;
  if ( !v33 )
    goto LABEL_55;
  v12 = 1;
  if ( v33->fields._size <= v11 )
    v2->fields.isEndRoute = 1;
  return v12;
}


int32_t __fastcall WarBoardAI__GetRandomIndex(
        WarBoardAI_o *this,
        System_Collections_Generic_List_Decimal__o *weightTable,
        const MethodInfo *method)
{
  WarBoardAI___c_c *v4; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_Decimal__Decimal__o *_9__14_0; // x20
  Il2CppObject *v7; // x21
  struct WarBoardAI___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Decimal_o v15; // kr00_16
  System_Decimal_o v16; // kr10_16
  float v17; // s0
  float v18; // s0
  System_Decimal_o v19; // kr20_16
  signed __int64 size; // x8
  __int64 v21; // x21
  __int64 v22; // x22
  __int64 v23; // x26
  unsigned __int64 v24; // x20
  char *v25; // x8
  __int64 v26; // x23
  __int64 v27; // x24
  char *v28; // x8
  __int64 v29; // x23
  __int64 v30; // x24
  System_Decimal_o v31; // kr30_16
  System_Decimal_o v33; // 0:x0.16
  System_Decimal_o v34; // 0:x0.16
  System_Decimal_o v35; // 0:x2.16
  System_Decimal_o v36; // 0:x2.16

  if ( (byte_4388FC4 & 1) == 0 )
  {
    sub_B775C4(&System_Decimal_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Sum_Decimal___);
    sub_B775C4(&Method_System_Func_Decimal__Decimal___ctor__);
    sub_B775C4(&System_Func_Decimal__Decimal__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Decimal__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_Decimal__get_Item__);
    sub_B775C4(&System_Math_TypeInfo);
    sub_B775C4(&Method_WarBoardAI___c__GetRandomIndex_b__14_0__);
    sub_B775C4(&WarBoardAI___c_TypeInfo);
    byte_4388FC4 = 1;
  }
  v4 = WarBoardAI___c_TypeInfo;
  if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v4 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__14_0 = static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = WarBoardAI___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Func_Decimal__Decimal__o *)sub_B77694(System_Func_Decimal__Decimal__TypeInfo);
    System_Func_Decimal__Decimal____ctor(
      _9__14_0,
      v7,
      Method_WarBoardAI___c__GetRandomIndex_b__14_0__,
      (const MethodInfo_29E29FC *)Method_System_Func_Decimal__Decimal___ctor__);
    v8 = WarBoardAI___c_TypeInfo->static_fields;
    v8->__9__14_0 = _9__14_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Sum_Decimal_(
          (System_Collections_Generic_IEnumerable_TSource__o *)weightTable,
          (System_Func_TSource__Decimal__o *)_9__14_0,
          (const MethodInfo_1D3C9C4 *)Method_System_Linq_Enumerable_Sum_Decimal___);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v16 = System_Math__Floor(v15, 0LL);
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v17 = System_Decimal__op_Explicit_45003164(v16, 0LL);
  v18 = UnityEngine_Random__Range(0.0, v17, 0LL);
  v19 = System_Decimal__op_Explicit(v18, 0LL);
  if ( !weightTable )
    sub_B7769C(*(_QWORD *)&v19.fields.flags, *(_QWORD *)&v19.fields.lo);
  LODWORD(size) = weightTable->fields._size;
  if ( (int)size < 1 )
    goto LABEL_34;
  v21 = *(_QWORD *)&v19.fields.flags;
  v22 = *(_QWORD *)&v19.fields.lo;
  v23 = 0LL;
  v24 = 0LL;
  while ( 1 )
  {
    if ( v24 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v25 = (char *)weightTable->fields._items + v23;
    v27 = *((_QWORD *)v25 + 4);
    v26 = *((_QWORD *)v25 + 5);
    if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    }
    *(_QWORD *)&v33.fields.flags = v27;
    *(_QWORD *)&v33.fields.lo = v26;
    *(_QWORD *)&v35.fields.flags = v21;
    *(_QWORD *)&v35.fields.lo = v22;
    if ( System_Decimal__op_GreaterThanOrEqual(v33, v35, 0LL) )
      break;
    if ( v24 >= (unsigned int)weightTable->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v28 = (char *)weightTable->fields._items + v23;
    v30 = *((_QWORD *)v28 + 4);
    v29 = *((_QWORD *)v28 + 5);
    if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    }
    *(_QWORD *)&v34.fields.flags = v21;
    *(_QWORD *)&v34.fields.lo = v22;
    *(_QWORD *)&v36.fields.flags = v30;
    *(_QWORD *)&v36.fields.lo = v29;
    v31 = System_Decimal__op_Subtraction(v34, v36, 0LL);
    size = weightTable->fields._size;
    ++v24;
    v22 = *(_QWORD *)&v31.fields.lo;
    v21 = *(_QWORD *)&v31.fields.flags;
    v23 += 16LL;
    if ( (__int64)v24 >= size )
      goto LABEL_34;
  }
  if ( (_DWORD)v24 == -1 )
LABEL_34:
    LODWORD(v24) = 0;
  return v24;
}


System_Collections_IEnumerator_o *__fastcall WarBoardAI__Think(WarBoardAI_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4388FC1 & 1) == 0 )
  {
    sub_B775C4(&WarBoardAI__Think_d__11_TypeInfo);
    byte_4388FC1 = 1;
  }
  v3 = sub_B77694(WarBoardAI__Think_d__11_TypeInfo);
  WarBoardAI__Think_d__11___ctor((WarBoardAI__Think_d__11_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
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
    sub_B7769C(0LL, aiId);
  WarBoardAIRoute__UpdatePiecePersonalityDic(routeClass, aiId, pieceIndex, method);
}


bool __fastcall WarBoardAI___Think_b__11_2(
        WarBoardAI_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *x,
        const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x22
  WarBoardAI___c_c *v6; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__float__o *_9__11_7; // x20
  Il2CppObject *v9; // x21
  struct WarBoardAI___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x0
  __int64 v18; // x1
  float v19; // s0
  struct WarBoardStageNpcEntity_o *npcData; // x8

  if ( (byte_4388FC6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____69507664);
    sub_B775C4(&Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__);
    sub_B775C4(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    sub_B775C4(&Method_WarBoardAI___c__Think_b__11_7__);
    sub_B775C4(&WarBoardAI___c_TypeInfo);
    byte_4388FC6 = 1;
  }
  routeClass = this->fields.routeClass;
  v6 = WarBoardAI___c_TypeInfo;
  if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v6 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__11_7 = static_fields->__9__11_7;
  if ( !_9__11_7 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = WarBoardAI___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__11_7 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B77694(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    System_Func_WarBoardAIRoute_RouteData__float____ctor(
      _9__11_7,
      v9,
      Method_WarBoardAI___c__Think_b__11_7__,
      (const MethodInfo_29EB1B8 *)Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__);
    v10 = WarBoardAI___c_TypeInfo->static_fields;
    v10->__9__11_7 = _9__11_7;
    sub_B77560(
      (BattleServantConfConponent_o *)&v10->__9__11_7,
      (System_Int32_array **)_9__11_7,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v19 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__30657072(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__float__o *)_9__11_7,
          (const MethodInfo_1D3CA30 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____69507664);
  if ( !routeClass || (npcData = routeClass->fields.npcData) == 0LL )
    sub_B7769C(v17, v18);
  return (float)((float)npcData->fields.lowerThinkingValue / 100.0) <= v19;
}


int32_t __fastcall WarBoardAI__get_ForceId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_B7769C(this, method);
  return routeClass->fields.forceId;
}


int32_t __fastcall WarBoardAI__get_GroupId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_B7769C(this, method);
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
  WarBoardAI__Think_d__11_o *v2; // x27
  struct WarBoardAI_o *_4__this; // x19
  WarBoardAIRoute_o *routeClass; // x20
  System_Collections_Generic_Dictionary_int__uint__o *placePieceData; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x22
  Il2CppObject **p__2__current; // x27
  bool v8; // w20
  WarBoardAI__Think_d__11_o *availableRouteList_5__4; // x26
  struct WarBoardAIRoute_o *v10; // x8
  __int64 v11; // x2
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList_5__2; // x8
  Il2CppObject *v13; // x21
  struct WarBoardAIRoute_o *v14; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *v15; // x22
  int32_t pickValue; // w8
  BalanceConfig_c *v17; // x0
  _BOOL4 IsWarBoardAiCalcEvalSum; // w9
  WarBoardAI___c_c *v19; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_0; // x23
  Il2CppObject *v22; // x24
  struct WarBoardAI___c_StaticFields *v23; // x0
  struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o **p__9__11_0; // x0
  struct WarBoardAI___c_StaticFields *v25; // x8
  Il2CppObject *v26; // x24
  struct WarBoardAI___c_StaticFields *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v29; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x24
  WarBoardAI__Think_d__11_o **p_availableRouteList_5__4; // x23
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v32; // x25
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **v33; // x24
  __int64 v34; // x2
  __int64 v35; // x8
  unsigned __int64 v36; // x20
  int32_t pickValue_5__3; // w28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **p_monitor; // x25
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v39; // x26
  __int64 v40; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v41; // x27
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v42; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  __int64 v45; // x2
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *evalValueSortList_5__5; // x8
  System_Collections_Generic_List_Decimal__o *v47; // x21
  Il2CppClass *klass; // x23
  int v49; // w27
  int v50; // w19
  int namespaze; // w8
  int v52; // w24
  int v53; // w25
  char v54; // w26
  WarBoardPieceData_o *actionPiece; // x0
  _BOOL8 v56; // x0
  __int64 v57; // x1
  WarBoardAIRoute_RouteData_o *current; // x23
  int v59; // w27
  int v60; // w8
  WarBoardAI_o *v61; // x9
  struct WarBoardAIRoute_o *v62; // x8
  float v63; // s12
  float BestMagnification; // s8
  float LowestMagnification; // s0
  int value; // w21
  float ImmobilityMagnification; // s0
  _BOOL8 v68; // x0
  __int64 v69; // x1
  WarBoardTacticalTrendEntity_o *v70; // x23
  int v71; // w8
  float v72; // s8
  BalanceConfig_c *v73; // x0
  System_Decimal_o v74; // kr00_16
  Il2CppClass *v75; // x8
  WarBoardAI___c_c *v76; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x25
  struct WarBoardAI___c_StaticFields *v78; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_8; // x26
  int v80; // w21
  System_Decimal_o v81; // kr10_16
  Il2CppClass *v82; // x8
  WarBoardAI___c_c *v83; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x25
  struct WarBoardAI___c_StaticFields *v85; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_9; // x26
  int v87; // w21
  Il2CppObject *v88; // x27
  struct WarBoardAI___c_StaticFields *v89; // x0
  System_Decimal_o v90; // kr20_16
  System_Decimal_o v91; // kr30_16
  __int64 v92; // x2
  __int64 v93; // x4
  Il2CppObject *v94; // x27
  struct WarBoardAI___c_StaticFields *v95; // x0
  System_Decimal_o v96; // kr40_16
  Il2CppClass *v97; // x8
  __int64 v98; // x8
  int v99; // w21
  int32_t v100; // w27
  System_Decimal_o v101; // kr70_16
  System_Collections_Generic_IEnumerable_TSource__o *executeRoute; // x21
  WarBoardAI___c_c *v103; // x0
  struct WarBoardAI___c_StaticFields *v104; // x8
  System_Func_WarBoardAIRoute_RouteData__float__o *_9__11_3; // x22
  Il2CppObject *v106; // x23
  struct WarBoardAI___c_StaticFields *v107; // x0
  __int64 v108; // x2
  Il2CppObject **v109; // x27
  int v110; // w8
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v111; // x21
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v112; // x22
  int v113; // w19
  __int64 v114; // x23
  __int64 v115; // x22
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array **p_evalValueSortList_5__5; // x27
  __int64 v117; // x2
  __int64 v119; // x0
  WarBoardAI__Think_d__11_o *v120; // [xsp+8h] [xbp-118h]
  WarBoardAI__Think_d__11_o *v121; // [xsp+8h] [xbp-118h]
  System_Collections_Generic_List_Decimal__o *v122; // [xsp+10h] [xbp-110h]
  WarBoardAI_o *v123; // [xsp+20h] [xbp-100h]
  WarBoardAI__Think_d__11_o **v124; // [xsp+28h] [xbp-F8h]
  Il2CppObject *object; // [xsp+30h] [xbp-F0h]
  _BYTE v126[32]; // [xsp+38h] [xbp-E8h] BYREF
  int v127; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v128; // [xsp+60h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v129; // [xsp+80h] [xbp-A0h] BYREF
  System_Decimal_o v130; // 0:x1.16
  System_Decimal_o v131; // 0:x2.16
  System_Decimal_o v132; // 0:x2.16

  v2 = this;
  if ( (byte_438892C & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&System_Decimal_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
    sub_B775C4(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_B775C4(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____69507664);
    sub_B775C4(&Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__get_Current__);
    sub_B775C4(&Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
    sub_B775C4(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    sub_B775C4(&Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__);
    sub_B775C4(&Method_System_Func_List_WarBoardAIRoute_RouteData___bool___ctor__);
    sub_B775C4(&Method_System_Func_List_WarBoardAIRoute_RouteData___Decimal___ctor__);
    sub_B775C4(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_B775C4(&System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
    sub_B775C4(&System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
    sub_B775C4(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_B775C4(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
    sub_B775C4(&System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Decimal__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_Decimal___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_Decimal__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
    sub_B775C4(&Method_WarBoardAI___c__Think_b__11_0__);
    sub_B775C4(&Method_WarBoardAI___c__Think_b__11_1__);
    sub_B775C4(&Method_WarBoardAI___c__Think_b__11_3__);
    sub_B775C4(&Method_WarBoardAI___c__Think_b__11_8__);
    sub_B775C4(&Method_WarBoardAI___c__Think_b__11_9__);
    sub_B775C4(&Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__);
    sub_B775C4(&WarBoardAI___c__DisplayClass11_0_TypeInfo);
    sub_B775C4(&WarBoardAI___c_TypeInfo);
    this = (WarBoardAI__Think_d__11_o *)sub_B775C4(&Method_WarBoardAI__Think_b__11_2__);
    byte_438892C = 1;
  }
  memset(&v129, 0, sizeof(v129));
  memset(&v128, 0, sizeof(v128));
  v127 = 0;
  _4__this = v2->fields.__4__this;
  v123 = _4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_198;
      this = (WarBoardAI__Think_d__11_o *)_4__this->fields.routeClass;
      _4__this->fields.routeIndex = 0;
      _4__this->fields.isEndRoute = 0;
      if ( !this )
        goto LABEL_198;
      WarBoardAIRoute__BeforeCreateRouteData((WarBoardAIRoute_o *)this, 0LL);
      routeClass = _4__this->fields.routeClass;
      if ( !routeClass )
        goto LABEL_198;
      placePieceData = routeClass->fields.placePieceData;
      v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v6,
        (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
      v2->fields.__2__current = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                                                  routeClass,
                                                  placePieceData,
                                                  0,
                                                  (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v6,
                                                  0LL);
      p__2__current = &v2->fields.__2__current;
      sub_B77560(p__2__current);
      v8 = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return v8;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_198;
      v10 = _4__this->fields.routeClass;
      if ( !v10 )
        goto LABEL_198;
      v2->fields._allRouteList_5__2 = v10->fields.allRouteList;
      sub_B77560(&v2->fields._allRouteList_5__2);
      allRouteList_5__2 = v2->fields._allRouteList_5__2;
      if ( !allRouteList_5__2 )
        goto LABEL_198;
      if ( !allRouteList_5__2->fields._size )
      {
        v8 = 1;
        v126[0] = 1;
        v2->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v126, v11);
        v109 = &v2->fields.__2__current;
        sub_B77560(v109);
        v110 = 2;
        goto LABEL_203;
      }
LABEL_16:
      v13 = (Il2CppObject *)sub_B77694(WarBoardAI___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor(v13, 0LL);
      if ( !_4__this )
        goto LABEL_198;
      v14 = _4__this->fields.routeClass;
      if ( !v14 )
        goto LABEL_198;
      v15 = v2->fields._allRouteList_5__2;
      if ( !v15 )
        goto LABEL_198;
      pickValue = v14->fields.pickValue;
      if ( pickValue >= v15->fields._size )
        pickValue = v15->fields._size;
      v2->fields._pickValue_5__3 = pickValue;
      if ( !pickValue )
        v2->fields._pickValue_5__3 = v15->fields._size;
      v17 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v17 = BalanceConfig_TypeInfo;
        v15 = v2->fields._allRouteList_5__2;
      }
      IsWarBoardAiCalcEvalSum = v17->static_fields->IsWarBoardAiCalcEvalSum;
      v19 = WarBoardAI___c_TypeInfo;
      if ( IsWarBoardAiCalcEvalSum )
      {
        if ( (WORD1(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v19 = WarBoardAI___c_TypeInfo;
        }
        static_fields = v19->static_fields;
        _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)static_fields->__9__11_0;
        if ( !_9__11_0 )
        {
          if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v19);
            static_fields = WarBoardAI___c_TypeInfo->static_fields;
          }
          v22 = (Il2CppObject *)static_fields->__9;
          _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B77694(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
          System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
            _9__11_0,
            v22,
            Method_WarBoardAI___c__Think_b__11_0__,
            (const MethodInfo_29E9A88 *)Method_System_Func_List_WarBoardAIRoute_RouteData___Decimal___ctor__);
          v23 = WarBoardAI___c_TypeInfo->static_fields;
          v23->__9__11_0 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
          p__9__11_0 = &v23->__9__11_0;
LABEL_45:
          sub_B77560(p__9__11_0);
        }
      }
      else
      {
        if ( (WORD1(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v19 = WarBoardAI___c_TypeInfo;
        }
        v25 = v19->static_fields;
        _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)v25->__9__11_1;
        if ( !_9__11_0 )
        {
          if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v19);
            v25 = WarBoardAI___c_TypeInfo->static_fields;
          }
          v26 = (Il2CppObject *)v25->__9;
          _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B77694(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
          System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
            _9__11_0,
            v26,
            Method_WarBoardAI___c__Think_b__11_1__,
            (const MethodInfo_29E9A88 *)Method_System_Func_List_WarBoardAIRoute_RouteData___Decimal___ctor__);
          v27 = WarBoardAI___c_TypeInfo->static_fields;
          v27->__9__11_1 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
          p__9__11_0 = &v27->__9__11_1;
          goto LABEL_45;
        }
      }
      v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Decimal_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                                                   (System_Func_TSource__TKey__o *)_9__11_0,
                                                                   (const MethodInfo_1D34D48 *)Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
      v29 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
              v28,
              (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v30,
        (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
      v2->fields._availableRouteList_5__4 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v30;
      p_availableRouteList_5__4 = (WarBoardAI__Think_d__11_o **)&v2->fields._availableRouteList_5__4;
      sub_B77560(&v2->fields._availableRouteList_5__4);
      v32 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
      System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
        v32,
        (const MethodInfo_2EE2460 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !v13 )
        goto LABEL_198;
      v13[1].klass = (Il2CppClass *)v32;
      v33 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **)&v13[1];
      v120 = v2;
      sub_B77560(&v13[1]);
      if ( !v29 )
        goto LABEL_198;
      v35 = *(_QWORD *)&v29->max_length;
      if ( (int)v35 >= 1 )
      {
        v36 = 0LL;
        pickValue_5__3 = v2->fields._pickValue_5__3;
        v124 = (WarBoardAI__Think_d__11_o **)&v2->fields._availableRouteList_5__4;
        p_monitor = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)&v13[1].monitor;
        while ( 1 )
        {
          if ( v36 >= (unsigned int)v35 )
            goto LABEL_205;
          v39 = v29->m_Items[v36];
          this = (WarBoardAI__Think_d__11_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v39, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
            }
            if ( !LOBYTE(this[2].fields._allRouteList_5__2[21].fields._syncRoot) )
              goto LABEL_70;
            if ( !v39 )
              goto LABEL_198;
            if ( !LODWORD(v39->fields.msgIds) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            this = *(WarBoardAI__Think_d__11_o **)(*(_QWORD *)&v39->fields.groupId + 32LL);
            if ( !this )
              goto LABEL_198;
            this = (WarBoardAI__Think_d__11_o *)WarBoardAIRoute_RouteData__get_notAction(
                                                  (WarBoardAIRoute_RouteData_o *)this,
                                                  0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !LODWORD(v39->fields.msgIds) )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
              v40 = *(_QWORD *)(*(_QWORD *)&v39->fields.groupId + 32LL);
              if ( !v40 || !*v33 )
                goto LABEL_198;
              this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                                                    *v33,
                                                    *(WarBoardAIRoute_RouteData_o **)(v40 + 48),
                                                    (const MethodInfo_2EE361C *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
              goto LABEL_78;
            }
            v41 = *p_monitor;
            if ( !*p_monitor )
            {
              v41 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v41,
                v13,
                Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__,
                (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
              v13[1].monitor = v41;
              p_availableRouteList_5__4 = v124;
              sub_B77560(p_monitor);
            }
            this = (WarBoardAI__Think_d__11_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                  (System_Collections_Generic_List_T__o *)v39,
                                                  (System_Func_T__bool__o *)v41,
                                                  (const MethodInfo_1C66144 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
            if ( ((unsigned __int8)this & 1) == 0 )
              break;
          }
LABEL_78:
          LODWORD(v35) = v29->max_length;
          if ( (__int64)++v36 >= (int)v35 )
            goto LABEL_79;
        }
        this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
LABEL_70:
        if ( (this[4].fields.__1__state & 0x4000000) != 0 && !LODWORD(this[3].monitor) )
        {
          j_il2cpp_runtime_class_init_0(this);
          this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
        }
        if ( !BYTE1(this[2].fields._allRouteList_5__2[21].fields._syncRoot)
          || (this = (WarBoardAI__Think_d__11_o *)WarBoardAI__CheckWasteRoute(
                                                    _4__this,
                                                    (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v39,
                                                    0LL),
              ((unsigned __int8)this & 1) == 0) )
        {
          this = *p_availableRouteList_5__4;
          if ( !*p_availableRouteList_5__4 )
            goto LABEL_198;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
          availableRouteList_5__4 = *p_availableRouteList_5__4;
          if ( !*p_availableRouteList_5__4 )
            goto LABEL_198;
          if ( pickValue_5__3 <= SLODWORD(availableRouteList_5__4->fields.__2__current) )
            goto LABEL_80;
        }
        goto LABEL_78;
      }
LABEL_79:
      availableRouteList_5__4 = *p_availableRouteList_5__4;
      if ( !*p_availableRouteList_5__4 )
        goto LABEL_198;
LABEL_80:
      v2 = v120;
      if ( SLODWORD(availableRouteList_5__4->fields.__2__current) <= 0 )
      {
        v8 = 1;
        v126[0] = 1;
        v120->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v126, v34);
        v109 = &v120->fields.__2__current;
        sub_B77560(&v120->fields.__2__current);
        v110 = 3;
        goto LABEL_203;
      }
LABEL_81:
      v42 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v42,
        (Il2CppObject *)_4__this,
        Method_WarBoardAI__Think_b__11_2__,
        (const MethodInfo_29E92C4 *)Method_System_Func_List_WarBoardAIRoute_RouteData___bool___ctor__);
      v43 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)availableRouteList_5__4,
              (System_Func_TSource__bool__o *)v42,
              (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
      v44 = System_Linq_Enumerable__Take_BattleData_CommandHistory_(
              v43,
              v2->fields._pickValue_5__3,
              (const MethodInfo_1D3CAF4 *)Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
      v2->fields._evalValueSortList_5__5 = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(v44, (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      object = (Il2CppObject *)&v2->fields._evalValueSortList_5__5;
      sub_B77560(&v2->fields._evalValueSortList_5__5);
      evalValueSortList_5__5 = v2->fields._evalValueSortList_5__5;
      if ( !evalValueSortList_5__5 )
        goto LABEL_198;
      if ( !*(_QWORD *)&evalValueSortList_5__5->max_length )
      {
        v8 = 1;
        v126[0] = 1;
        v2->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v126, v45);
        v109 = &v2->fields.__2__current;
        sub_B77560(v109);
        v110 = 4;
LABEL_203:
        *((_DWORD *)v109 - 2) = v110;
        return v8;
      }
LABEL_83:
      v121 = v2;
      v47 = (System_Collections_Generic_List_Decimal__o *)sub_B77694(System_Collections_Generic_List_Decimal__TypeInfo);
      System_Collections_Generic_List_Decimal____ctor(
        v47,
        (const MethodInfo_30BD8D8 *)Method_System_Collections_Generic_List_Decimal___ctor__);
      klass = object->klass;
      if ( !object->klass )
        goto LABEL_198;
      v49 = 0;
      v50 = 0;
      v122 = v47;
      while ( 1 )
      {
        namespaze = (int)klass->_1.namespaze;
        if ( v50 >= namespaze )
          break;
        if ( v50 >= (unsigned int)namespaze )
          goto LABEL_205;
        this = (WarBoardAI__Think_d__11_o *)*((_QWORD *)&klass->_1.byval_arg.data + v50);
        if ( !this )
          goto LABEL_198;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v126,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
          (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
        v52 = 0;
        v53 = 0;
        v54 = 0;
        v129 = *(System_Collections_Generic_List_Enumerator_T__o *)v126;
        while ( 1 )
        {
          v56 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v129,
                  (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
          if ( !v56 )
            break;
          current = (WarBoardAIRoute_RouteData_o *)v129.fields.current;
          if ( !v129.fields.current )
            sub_B7769C(v56, v57);
          if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)v129.fields.current, 4LL, 0LL) )
          {
            actionPiece = current->fields.actionPiece;
            if ( actionPiece )
              v53 |= WarBoardPieceData__get_isMaster(actionPiece, 0LL);
            v54 = 1;
          }
          v52 |= WarBoardAIRoute_RouteData__HasFlag(current, 8LL, 0LL);
        }
        *(_DWORD *)&v126[4 * v49 + 24] = 849;
        v59 = ++v127;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v129,
          (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
        if ( v59 )
        {
          v60 = v59 - 1;
          v61 = v123;
          if ( *(_DWORD *)&v126[4 * v59 + 20] == 849 )
          {
            --v59;
            v127 = v60;
            if ( !v123 )
              goto LABEL_198;
            goto LABEL_103;
          }
        }
        else
        {
          v61 = v123;
        }
        if ( !v61 )
          goto LABEL_198;
LABEL_103:
        v62 = v61->fields.routeClass;
        if ( !v62 )
          goto LABEL_198;
        this = (WarBoardAI__Think_d__11_o *)v62->fields.tacticalTrendList;
        if ( !this )
          goto LABEL_198;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v126,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
          (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
        v63 = 0.0;
        v128 = *(System_Collections_Generic_List_Enumerator_T__o *)v126;
        while ( 1 )
        {
          v68 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v128,
                  (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
          if ( !v68 )
            break;
          v70 = (WarBoardTacticalTrendEntity_o *)v128.fields.current;
          if ( !v128.fields.current )
            sub_B7769C(v68, v69);
          switch ( HIDWORD(v128.fields.current[1].klass) )
          {
            case 0:
              if ( v50 < SLODWORD(v128.fields.current[1].monitor) )
              {
                BestMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(
                                      (WarBoardTacticalTrendEntity_o *)v128.fields.current,
                                      0LL);
                LowestMagnification = WarBoardTacticalTrendEntity__GetLowestMagnification(v70, 0LL);
                value = v70->fields.value;
                ImmobilityMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(v70, 0LL)
                                        - (float)((float)((float)(BestMagnification - LowestMagnification)
                                                        / (float)((float)value + -1.0))
                                                * (float)v50);
                goto LABEL_115;
              }
              break;
            case 1:
              if ( (v54 & 1) != 0 )
                goto LABEL_114;
              break;
            case 4:
              if ( (v53 & 1) != 0 )
                goto LABEL_114;
              break;
            case 5:
              if ( (v52 & 1) != 0 )
              {
LABEL_114:
                ImmobilityMagnification = WarBoardTacticalTrendEntity__GetImmobilityMagnification(
                                            (WarBoardTacticalTrendEntity_o *)v128.fields.current,
                                            0LL);
LABEL_115:
                v63 = v63 + ImmobilityMagnification;
              }
              break;
            default:
              continue;
          }
        }
        *(_DWORD *)&v126[4 * v59 + 24] = 1074;
        v49 = ++v127;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v128,
          (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
        if ( v49 )
        {
          v71 = v49 - 1;
          if ( *(_DWORD *)&v126[4 * v49 + 20] == 1074 )
          {
            --v49;
            v127 = v71;
          }
        }
        if ( v63 == 0.0 )
          v72 = 1.0;
        else
          v72 = v63;
        v73 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v73 = BalanceConfig_TypeInfo;
        }
        if ( v73->static_fields->IsWarBoardAiCalcEvalSum )
        {
          if ( (WORD1(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v74 = System_Decimal__op_Explicit(v72, 0LL);
          method = *(const MethodInfo **)&v74.fields.lo;
          this = *(WarBoardAI__Think_d__11_o **)&v74.fields.flags;
          v75 = object->klass;
          if ( !object->klass )
            goto LABEL_198;
          if ( (unsigned int)v50 >= LODWORD(v75->_1.namespaze) )
            goto LABEL_205;
          v76 = WarBoardAI___c_TypeInfo;
          v77 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)&v75->_1.byval_arg.data + v50);
          if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v76 = WarBoardAI___c_TypeInfo;
          }
          v78 = v76->static_fields;
          _9__11_8 = v78->__9__11_8;
          if ( !_9__11_8 )
          {
            if ( (BYTE3(v76->vtable._0_Equals.methodPtr) & 4) != 0 )
            {
              v80 = v49;
              if ( !v76->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v76);
                v78 = WarBoardAI___c_TypeInfo->static_fields;
              }
            }
            else
            {
              v80 = v49;
            }
            v88 = (Il2CppObject *)v78->__9;
            _9__11_8 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B77694(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
            System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
              _9__11_8,
              v88,
              Method_WarBoardAI___c__Think_b__11_8__,
              (const MethodInfo_29E9A88 *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
            v89 = WarBoardAI___c_TypeInfo->static_fields;
            v89->__9__11_8 = _9__11_8;
            sub_B77560(&v89->__9__11_8);
            v49 = v80;
          }
          v90 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__30657000(
                  v77,
                  (System_Func_TSource__Decimal__o *)_9__11_8,
                  (const MethodInfo_1D3C9E8 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
          if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v91 = System_Decimal__op_Multiply(v74, v90, 0LL);
          method = *(const MethodInfo **)&v91.fields.lo;
          v93 = *(unsigned __int128 *)&v91 >> 64;
          this = (WarBoardAI__Think_d__11_o *)*(_OWORD *)&v91;
          v92 = *(_QWORD *)&v91.fields.flags;
        }
        else
        {
          if ( (WORD1(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v81 = System_Decimal__op_Explicit(v72, 0LL);
          method = *(const MethodInfo **)&v81.fields.lo;
          this = *(WarBoardAI__Think_d__11_o **)&v81.fields.flags;
          v82 = object->klass;
          if ( !object->klass )
            goto LABEL_198;
          if ( (unsigned int)v50 >= LODWORD(v82->_1.namespaze) )
            goto LABEL_205;
          v83 = WarBoardAI___c_TypeInfo;
          v84 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)&v82->_1.byval_arg.data + v50);
          if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v83 = WarBoardAI___c_TypeInfo;
          }
          v85 = v83->static_fields;
          _9__11_9 = v85->__9__11_9;
          if ( !_9__11_9 )
          {
            if ( (BYTE3(v83->vtable._0_Equals.methodPtr) & 4) != 0 )
            {
              v87 = v49;
              if ( !v83->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v83);
                v85 = WarBoardAI___c_TypeInfo->static_fields;
              }
            }
            else
            {
              v87 = v49;
            }
            v94 = (Il2CppObject *)v85->__9;
            _9__11_9 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B77694(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
            System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
              _9__11_9,
              v94,
              Method_WarBoardAI___c__Think_b__11_9__,
              (const MethodInfo_29E9A88 *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
            v95 = WarBoardAI___c_TypeInfo->static_fields;
            v95->__9__11_9 = _9__11_9;
            sub_B77560(&v95->__9__11_9);
            v49 = v87;
          }
          v96 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__30657000(
                  v84,
                  (System_Func_TSource__Decimal__o *)_9__11_9,
                  (const MethodInfo_1D3C9E8 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
          method = *(const MethodInfo **)&v96.fields.lo;
          this = *(WarBoardAI__Think_d__11_o **)&v96.fields.flags;
          v97 = object->klass;
          if ( !object->klass )
            goto LABEL_198;
          if ( (unsigned int)v50 >= LODWORD(v97->_1.namespaze) )
            goto LABEL_205;
          v98 = *((_QWORD *)&v97->_1.byval_arg.data + v50);
          if ( !v98 )
            goto LABEL_198;
          v99 = v49;
          v100 = *(_DWORD *)(v98 + 24);
          if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v131 = System_Decimal__op_Implicit_45002688(v100, 0LL);
          v132 = System_Decimal__op_Division(v96, v131, 0LL);
          v101 = System_Decimal__op_Multiply(v81, v132, 0LL);
          method = *(const MethodInfo **)&v101.fields.lo;
          v93 = *(unsigned __int128 *)&v101 >> 64;
          this = (WarBoardAI__Think_d__11_o *)*(_OWORD *)&v101;
          v92 = *(_QWORD *)&v101.fields.flags;
          v49 = v99;
        }
        v47 = v122;
        if ( v122 )
        {
          *(_QWORD *)&v130.fields.flags = v92;
          *(_QWORD *)&v130.fields.lo = v93;
          System_Collections_Generic_List_Decimal___Add(
            v122,
            v130,
            (const MethodInfo_30BE65C *)Method_System_Collections_Generic_List_Decimal__Add__);
          ++v50;
          klass = object->klass;
          if ( object->klass )
            continue;
        }
        goto LABEL_198;
      }
      _4__this = v123;
      if ( !v123 )
        goto LABEL_198;
      this = (WarBoardAI__Think_d__11_o *)WarBoardAI__GetRandomIndex(v123, v47, 0LL);
      v2 = v121;
      if ( (unsigned int)this >= LODWORD(klass->_1.namespaze) )
      {
LABEL_205:
        v119 = sub_B776C8(this);
        sub_B77668(v119, 0LL);
      }
      v123->fields.executeRoute = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)this);
      sub_B77560(&v123->fields.executeRoute);
      executeRoute = (System_Collections_Generic_IEnumerable_TSource__o *)v123->fields.executeRoute;
      v103 = WarBoardAI___c_TypeInfo;
      if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
        v103 = WarBoardAI___c_TypeInfo;
      }
      v104 = v103->static_fields;
      _9__11_3 = v104->__9__11_3;
      if ( !_9__11_3 )
      {
        if ( (BYTE3(v103->vtable._0_Equals.methodPtr) & 4) != 0 && !v103->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v103);
          v104 = WarBoardAI___c_TypeInfo->static_fields;
        }
        v106 = (Il2CppObject *)v104->__9;
        _9__11_3 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B77694(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
        System_Func_WarBoardAIRoute_RouteData__float____ctor(
          _9__11_3,
          v106,
          Method_WarBoardAI___c__Think_b__11_3__,
          (const MethodInfo_29EB1B8 *)Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__);
        v107 = WarBoardAI___c_TypeInfo->static_fields;
        v107->__9__11_3 = _9__11_3;
        sub_B77560(&v107->__9__11_3);
        _4__this = v123;
      }
      System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__30657072(
        executeRoute,
        (System_Func_TSource__float__o *)_9__11_3,
        (const MethodInfo_1D3CA30 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____69507664);
      if ( WarBoardAI__CheckWasteRoute(_4__this, _4__this->fields.executeRoute, 0LL) )
      {
        v8 = 1;
        v126[0] = 1;
        v121->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v126, v108);
        v109 = &v121->fields.__2__current;
        sub_B77560(&v121->fields.__2__current);
        v110 = 5;
        goto LABEL_203;
      }
LABEL_183:
      v111 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
      System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
        v111,
        (const MethodInfo_2EE2460 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !_4__this || (v112 = _4__this->fields.executeRoute) == 0LL )
LABEL_198:
        sub_B7769C(this, method);
      v113 = v112->fields._size - 1;
      if ( v113 >= 0 )
      {
        v114 = 8LL * v113 + 32;
        while ( 1 )
        {
          if ( v112->fields._size <= (unsigned int)v113 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v115 = *(__int64 *)((char *)&v112->fields._items->obj.klass + v114);
          if ( !v115 )
            goto LABEL_198;
          method = *(const MethodInfo **)(v115 + 48);
          if ( method )
          {
            if ( !v111 )
              goto LABEL_198;
            this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
                                                  (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)v111,
                                                  (BattleBuffData_BuffData_o *)method,
                                                  (const MethodInfo_2EE2AE4 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (WarBoardAI__Think_d__11_o *)WarBoardAIRoute_RouteData__get_notAction(
                                                    (WarBoardAIRoute_RouteData_o *)v115,
                                                    0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                  v111,
                  *(WarBoardAIRoute_RouteData_o **)(v115 + 48),
                  (const MethodInfo_2EE361C *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                this = *(WarBoardAI__Think_d__11_o **)(v115 + 48);
                if ( !this )
                  goto LABEL_198;
                WarBoardPieceData__SetPrevAiRoute((WarBoardPieceData_o *)this, (WarBoardAIRoute_RouteData_o *)v115, 0LL);
              }
            }
          }
          if ( (--v113 & 0x80000000) != 0 )
            break;
          v114 -= 8LL;
          v112 = v123->fields.executeRoute;
          if ( !v112 )
            goto LABEL_198;
        }
      }
      v2->fields._availableRouteList_5__4 = 0LL;
      sub_B77560(&v2->fields._availableRouteList_5__4);
      v2->fields._evalValueSortList_5__5 = 0LL;
      p_evalValueSortList_5__5 = &v2->fields._evalValueSortList_5__5;
      sub_B77560(p_evalValueSortList_5__5);
      v126[0] = 0;
      *(p_evalValueSortList_5__5 - 5) = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)j_il2cpp_value_box_0(bool_TypeInfo, v126, v117);
      sub_B77560(p_evalValueSortList_5__5 - 5);
      *((_DWORD *)p_evalValueSortList_5__5 - 12) = 6;
      return 1;
    case 2:
      v2->fields.__1__state = -1;
      goto LABEL_16;
    case 3:
      availableRouteList_5__4 = (WarBoardAI__Think_d__11_o *)v2->fields._availableRouteList_5__4;
      v2->fields.__1__state = -1;
      goto LABEL_81;
    case 4:
      v2->fields.__1__state = -1;
      object = (Il2CppObject *)&v2->fields._evalValueSortList_5__5;
      goto LABEL_83;
    case 5:
      v2->fields.__1__state = -1;
      goto LABEL_183;
    case 6:
      v8 = 0;
      v2->fields.__1__state = -1;
      return v8;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_WarBoardAI__Think_d__11_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  Il2CppObject *v1; // x19
  struct WarBoardAI___c_StaticFields *static_fields; // x0

  if ( (byte_4388924 & 1) == 0 )
  {
    sub_B775C4(&WarBoardAI___c_TypeInfo);
    byte_4388924 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(WarBoardAI___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = WarBoardAI___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardAI___c_o *)v1;
  sub_B77560(static_fields);
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
  WarBoardAI___c_c *v4; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_4; // x20
  Il2CppObject *v7; // x21
  struct WarBoardAI___c_StaticFields *v8; // x0
  __int64 v9; // x0 OVERLAPPED
  __int64 v10; // x1
  System_Decimal_o v11; // kr00_16
  System_Decimal_o result; // 0:x0.16

  if ( (byte_4388925 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_B775C4(&Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
    sub_B775C4(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_B775C4(&Method_WarBoardAI___c__Think_b__11_4__);
    sub_B775C4(&WarBoardAI___c_TypeInfo);
    byte_4388925 = 1;
  }
  v4 = WarBoardAI___c_TypeInfo;
  if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v4 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__11_4 = static_fields->__9__11_4;
  if ( !_9__11_4 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = WarBoardAI___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__11_4 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B77694(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
      _9__11_4,
      v7,
      Method_WarBoardAI___c__Think_b__11_4__,
      (const MethodInfo_29E9A88 *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
    v8 = WarBoardAI___c_TypeInfo->static_fields;
    v8->__9__11_4 = _9__11_4;
    sub_B77560(&v8->__9__11_4);
  }
  v11 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__30657000(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_4,
          (const MethodInfo_1D3C9E8 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  v10 = *(_QWORD *)&v11.fields.lo;
  v9 = *(_QWORD *)&v11.fields.flags;
  *(_QWORD *)&result.fields.lo = v10;
  *(_QWORD *)&result.fields.flags = v9;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAI___c___Think_b__11_1(
        WarBoardAI___c_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *x,
        const MethodInfo *method)
{
  WarBoardAI___c_c *v4; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_5; // x20
  Il2CppObject *v7; // x21
  struct WarBoardAI___c_StaticFields *v8; // x0
  System_Decimal_o v9; // kr00_16
  int32_t size; // w19
  __int64 v11; // x0 OVERLAPPED
  __int64 v12; // x1
  System_Decimal_o v13; // kr20_16
  System_Decimal_o result; // 0:x0.16
  System_Decimal_o v15; // 0:x2.16

  if ( (byte_4388927 & 1) == 0 )
  {
    sub_B775C4(&System_Decimal_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_B775C4(&Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
    sub_B775C4(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_B775C4(&Method_WarBoardAI___c__Think_b__11_5__);
    sub_B775C4(&WarBoardAI___c_TypeInfo);
    byte_4388927 = 1;
  }
  v4 = WarBoardAI___c_TypeInfo;
  if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v4 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__11_5 = static_fields->__9__11_5;
  if ( !_9__11_5 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = WarBoardAI___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__11_5 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B77694(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
      _9__11_5,
      v7,
      Method_WarBoardAI___c__Think_b__11_5__,
      (const MethodInfo_29E9A88 *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
    v8 = WarBoardAI___c_TypeInfo->static_fields;
    v8->__9__11_5 = _9__11_5;
    sub_B77560(&v8->__9__11_5);
  }
  v9 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__30657000(
         (System_Collections_Generic_IEnumerable_TSource__o *)x,
         (System_Func_TSource__Decimal__o *)_9__11_5,
         (const MethodInfo_1D3C9E8 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  if ( !x )
    sub_B7769C(*(_QWORD *)&v9.fields.flags, *(_QWORD *)&v9.fields.lo);
  size = x->fields._size;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v15 = System_Decimal__op_Implicit_45002688(size, 0LL);
  v13 = System_Decimal__op_Division(v9, v15, 0LL);
  v12 = *(_QWORD *)&v13.fields.lo;
  v11 = *(_QWORD *)&v13.fields.flags;
  *(_QWORD *)&result.fields.lo = v12;
  *(_QWORD *)&result.fields.flags = v11;
  return result;
}


float __fastcall WarBoardAI___c___Think_b__11_3(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
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

  if ( (byte_4388926 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_B775C4(&System_Decimal_TypeInfo);
    byte_4388926 = 1;
  }
  if ( !y )
    sub_B7769C(this, y);
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

  if ( (byte_4388928 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_B775C4(&System_Decimal_TypeInfo);
    byte_4388928 = 1;
  }
  if ( !y )
    sub_B7769C(this, y);
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
    sub_B7769C(this, 0LL);
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

  if ( (byte_4388929 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_B775C4(&System_Decimal_TypeInfo);
    byte_4388929 = 1;
  }
  if ( !y )
    sub_B7769C(this, y);
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

  if ( (byte_438892A & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_B775C4(&System_Decimal_TypeInfo);
    byte_438892A = 1;
  }
  if ( !y )
    sub_B7769C(this, y);
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
  WarBoardAI___c__DisplayClass11_0_o *v4; // x20

  v4 = this;
  if ( (byte_438892B & 1) == 0 )
  {
    this = (WarBoardAI___c__DisplayClass11_0_o *)sub_B775C4(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
    byte_438892B = 1;
  }
  if ( !x || (this = (WarBoardAI___c__DisplayClass11_0_o *)v4->fields.notActionPieceHash) == 0LL )
    sub_B7769C(this, x);
  return System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
           (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)this,
           (BattleBuffData_BuffData_o *)x->fields.basePiece,
           (const MethodInfo_2EE2AE4 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
}