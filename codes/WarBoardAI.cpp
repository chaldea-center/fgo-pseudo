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

  if ( (byte_4186749 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAIRoute_TypeInfo, npc);
    byte_4186749 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (WarBoardAIRoute_o *)sub_B2C42C(WarBoardAIRoute_TypeInfo);
  WarBoardAIRoute___ctor(v5, npc, v6);
  this->fields.routeClass = v5;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B2C434(0LL, aiId);
  WarBoardAIRoute__AddPiecePersonalityDic(routeClass, aiId, pieceIndex, method);
}


bool __fastcall WarBoardAI__CheckWasteRoute(
        WarBoardAI_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *checkRoute,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v11; // x20
  __int64 notAction; // x0
  __int64 v13; // x1
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
  System_Enum_o *v25; // x23
  __int64 v26; // x3
  WarBoardAIRoute_RouteData_c *klass; // x8
  unsigned __int64 v28; // x10
  IWarBoardAIRouteWaste_c **p_offset; // x11
  __int64 v30; // x0
  System_Enum_o *v31; // x23
  __int64 v32; // x3
  WarBoardAIRoute_RouteData_c *v33; // x8
  unsigned __int64 v34; // x10
  IWarBoardAIRouteWaste_c **v35; // x11
  __int64 v36; // x0
  System_Enum_o *v37; // x23
  __int64 v38; // x3
  WarBoardAIRoute_RouteData_c *v39; // x8
  int32_t actionIndex; // w23
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x3
  WarBoardAIRoute_RouteData_c *v45; // x8
  int32_t baseIndex; // w23
  unsigned __int64 v47; // x10
  IWarBoardAIRouteWaste_c **v48; // x11
  __int64 v49; // x0
  __int64 v50; // x3
  WarBoardAIRoute_RouteData_c *v51; // x8
  unsigned __int64 v52; // x10
  IWarBoardAIRouteWaste_c **v53; // x11
  __int64 v54; // x0
  __int64 v56; // [xsp+0h] [xbp-60h] BYREF
  int64_t flagNow; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418674B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__, checkRoute);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo, v6);
    sub_B2C35C(&WarBoardAIRoute_RouteData_Flag_TypeInfo, v7);
    sub_B2C35C(&IWarBoardAIRouteWaste_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v10);
    byte_418674B = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v11,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
  if ( !checkRoute )
LABEL_74:
    sub_B2C434(notAction, v13);
  size = checkRoute->fields._size;
  if ( size < 1 )
    return 0;
  v15 = 0;
  while ( 1 )
  {
    if ( size <= v15 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v16 = checkRoute->fields._items->m_Items[v15];
    if ( !v16 )
      goto LABEL_74;
    if ( v16->fields.basePiece )
    {
      notAction = WarBoardAIRoute_RouteData__get_notAction(v16, 0LL);
      if ( (notAction & 1) == 0 )
      {
        v17 = v15 - 1;
        if ( (int)(v15 - 1) < 0 )
          goto LABEL_19;
        if ( checkRoute->fields._size <= v17 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
          || (notAction = WarBoardAIRoute_RouteData__get_notAction(PrevAiRoute_k__BackingField, 0LL),
              (notAction & 1) != 0) )
        {
LABEL_19:
          v21 = v16->fields.basePiece;
          if ( !v21 || !v11 )
            goto LABEL_74;
          notAction = System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                        (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v11,
                        v21->fields._index_k__BackingField,
                        (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
          if ( (notAction & 1) != 0 )
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
        if ( !v23 || !v11 )
          goto LABEL_74;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v11,
          v23->fields._index_k__BackingField,
          v16,
          (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
        if ( PrevAiRoute_k__BackingField )
        {
          flagNow = v16->fields.flagNow;
          v24 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow);
          v56 = 2LL;
          notAction = j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v56);
          if ( !v24 )
            goto LABEL_74;
          notAction = System_Enum__HasFlag(v24, (System_Enum_o *)notAction, 0LL);
          if ( (notAction & 1) == 0 )
          {
            flagNow = v16->fields.flagNow;
            v25 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow);
            v56 = 0x10000000LL;
            notAction = j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v56);
            if ( !v25 )
              goto LABEL_74;
            notAction = System_Enum__HasFlag(v25, (System_Enum_o *)notAction, 0LL);
            if ( (notAction & 1) == 0 )
            {
              klass = PrevAiRoute_k__BackingField->klass;
              if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
              {
                v28 = 0LL;
                p_offset = (IWarBoardAIRouteWaste_c **)&klass->_1.interfaceOffsets->offset;
                while ( *(p_offset - 1) != IWarBoardAIRouteWaste_TypeInfo )
                {
                  ++v28;
                  p_offset += 2;
                  if ( v28 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                    goto LABEL_36;
                }
                v30 = (__int64)(&klass->vtable._2_GetHashCode.method + 2 * *(_DWORD *)p_offset);
              }
              else
              {
LABEL_36:
                v30 = sub_AC5258(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 2LL, v26);
              }
              flagNow = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v30)(
                          PrevAiRoute_k__BackingField,
                          *(_QWORD *)(v30 + 8));
              v31 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow);
              v56 = 2LL;
              notAction = j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v56);
              if ( !v31 )
                goto LABEL_74;
              notAction = System_Enum__HasFlag(v31, (System_Enum_o *)notAction, 0LL);
              if ( (notAction & 1) == 0 )
              {
                v33 = PrevAiRoute_k__BackingField->klass;
                if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                {
                  v34 = 0LL;
                  v35 = (IWarBoardAIRouteWaste_c **)&v33->_1.interfaceOffsets->offset;
                  while ( *(v35 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                  {
                    ++v34;
                    v35 += 2;
                    if ( v34 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                      goto LABEL_44;
                  }
                  v36 = (__int64)(&v33->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v35);
                }
                else
                {
LABEL_44:
                  v36 = sub_AC5258(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 2LL, v32);
                }
                flagNow = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v36)(
                            PrevAiRoute_k__BackingField,
                            *(_QWORD *)(v36 + 8));
                v37 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow);
                v56 = 0x10000000LL;
                notAction = j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v56);
                if ( !v37 )
                  goto LABEL_74;
                notAction = System_Enum__HasFlag(v37, (System_Enum_o *)notAction, 0LL);
                if ( (notAction & 1) == 0 )
                {
                  v39 = PrevAiRoute_k__BackingField->klass;
                  actionIndex = v16->fields.actionIndex;
                  if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                  {
                    v41 = 0LL;
                    v42 = &v39->_1.interfaceOffsets->offset;
                    while ( *((IWarBoardAIRouteWaste_c **)v42 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                    {
                      ++v41;
                      v42 += 4;
                      if ( v41 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                        goto LABEL_52;
                    }
                    v43 = (__int64)(&v39->vtable._0_Equals.method + 2 * *v42);
                  }
                  else
                  {
LABEL_52:
                    v43 = sub_AC5258(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 0LL, v38);
                  }
                  notAction = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v43)(
                                PrevAiRoute_k__BackingField,
                                *(_QWORD *)(v43 + 8));
                  if ( actionIndex == (_DWORD)notAction )
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
                      v49 = sub_AC5258(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 1LL, v44);
                    }
                    notAction = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v49)(
                                  PrevAiRoute_k__BackingField,
                                  *(_QWORD *)(v49 + 8));
                    if ( baseIndex == (_DWORD)notAction )
                    {
                      notAction = WarBoardAIRoute_RouteData__get_notAction(v16, 0LL);
                      if ( (notAction & 1) == 0 )
                      {
                        v51 = PrevAiRoute_k__BackingField->klass;
                        if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                        {
                          v52 = 0LL;
                          v53 = (IWarBoardAIRouteWaste_c **)&v51->_1.interfaceOffsets->offset;
                          while ( *(v53 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                          {
                            ++v52;
                            v53 += 2;
                            if ( v52 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                              goto LABEL_67;
                          }
                          v54 = (__int64)(&v51->vtable._3_ToString.method + 2 * *(_DWORD *)v53);
                        }
                        else
                        {
LABEL_67:
                          v54 = sub_AC5258(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 3LL, v50);
                        }
                        notAction = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v54)(
                                      PrevAiRoute_k__BackingField,
                                      *(_QWORD *)(v54 + 8));
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
    if ( (int)++v15 >= size )
      return 0;
  }
}


void __fastcall WarBoardAI__Clear(WarBoardAI_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_B2C434(0LL, method);
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

  if ( (byte_418674E & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&forceId);
    sub_B2C35C(&StringLiteral_23588/*"{0},{1},{2}"*/, v8);
    byte_418674E = 1;
  }
  v15 = forceId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v14 = groupId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v13 = index;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return System_String__Format_44306596((System_String_o *)StringLiteral_23588/*"{0},{1},{2}"*/, v9, v10, v11, 0LL);
}


bool __fastcall WarBoardAI__Execute(WarBoardAI_o *this, const MethodInfo *method)
{
  WarBoardAI_o *v2; // x19
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
  int32_t v13; // w8
  int32_t v14; // w8
  bool v15; // w22
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v17; // x22
  __int64 v18; // x24
  WarBoardAI_o *v19; // x21
  WarBoardAIRoute_RouteData_o *v20; // x8
  int32_t actionIndex; // w22
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v22; // x21
  __int64 v23; // x22
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v24; // x21
  __int64 v25; // x22
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v26; // x21
  __int64 v27; // x22
  WarBoardAIRoute_RouteData_o *v28; // x8
  int32_t v29; // w21
  WarBoardPieceData_o *Piece_22512764; // x0
  System_Int32_array *v31; // x21
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v32; // x22
  __int64 v33; // x23
  WarBoardAIRoute_RouteData_o *v34; // x8
  int32_t v35; // w8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v36; // x9

  v2 = this;
  if ( (byte_418674C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    this = (WarBoardAI_o *)sub_B2C35C(&WarBoardAIManager_TypeInfo, v5);
    byte_418674C = 1;
  }
  executeRoute = v2->fields.executeRoute;
  if ( !executeRoute )
    return 0;
  size = executeRoute->fields._size;
  routeIndex = v2->fields.routeIndex;
  if ( size <= (int)routeIndex )
    return 0;
  if ( size <= (unsigned int)routeIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v9 = executeRoute->fields._items->m_Items[routeIndex];
  if ( !v9 )
    goto LABEL_55;
  v10 = v2->fields.executeRoute;
  if ( !v10 )
    goto LABEL_55;
  v11 = v2->fields.routeIndex;
  basePiece = v9->fields.basePiece;
  if ( v10->fields._size <= (unsigned int)v11 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  this = (WarBoardAI_o *)v10->fields._items->m_Items[v11];
  if ( !this )
    goto LABEL_55;
  this = (WarBoardAI_o *)WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v13 = v2->fields.routeIndex;
    v2->fields.isEndPhase = 0;
    v14 = v13 + 1;
    v2->fields.routeIndex = v14;
    goto LABEL_52;
  }
  this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v17 = v2->fields.executeRoute;
  if ( !v17 )
    goto LABEL_55;
  v18 = v2->fields.routeIndex;
  v19 = this;
  if ( v17->fields._size <= (unsigned int)v18 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v20 = v17->fields._items->m_Items[v18];
  if ( !v20 )
    goto LABEL_55;
  actionIndex = v20->fields.actionIndex;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  this = (WarBoardAI_o *)WarBoardAIManager__GetSquare(actionIndex, method);
  if ( !v19 )
    goto LABEL_55;
  this = (WarBoardAI_o *)WarBoardManager__CheckSelectSquare(
                           (WarBoardManager_o *)v19,
                           basePiece,
                           (WarBoardSquareData_o *)this,
                           1,
                           0LL);
  v22 = v2->fields.executeRoute;
  if ( !v22 )
    goto LABEL_55;
  v23 = v2->fields.routeIndex;
  if ( v22->fields._size <= (unsigned int)v23 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  this = (WarBoardAI_o *)v22->fields._items->m_Items[v23];
  if ( !this )
    goto LABEL_55;
  this = (WarBoardAI_o *)WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)this, 2LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_34;
  v24 = v2->fields.executeRoute;
  if ( !v24 )
    goto LABEL_55;
  v25 = v2->fields.routeIndex;
  if ( v24->fields._size <= (unsigned int)v25 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  this = (WarBoardAI_o *)v24->fields._items->m_Items[v25];
  if ( !this )
LABEL_55:
    sub_B2C434(this, method);
  this = (WarBoardAI_o *)WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)this, 4LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_46;
LABEL_34:
  v26 = v2->fields.executeRoute;
  if ( !v26 )
    goto LABEL_55;
  v27 = v2->fields.routeIndex;
  if ( v26->fields._size <= (unsigned int)v27 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v28 = v26->fields._items->m_Items[v27];
  if ( !v28 )
    goto LABEL_55;
  v29 = v28->fields.actionIndex;
  this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_55;
  this = *(WarBoardAI_o **)&this[10].fields.isEndPhase;
  if ( !this )
    goto LABEL_55;
  Piece_22512764 = WarBoardData__GetPiece_22512764((WarBoardData_o *)this, v29, 0LL);
  if ( Piece_22512764 && WarBoardPieceData__get_isServant(Piece_22512764, 0LL) )
  {
    this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_55;
    this = *(WarBoardAI_o **)&this[10].fields.isEndPhase;
    if ( !this )
      goto LABEL_55;
    v31 = WarBoardData__GetInRangeSquareIndecies((WarBoardData_o *)this, v29, 1, 0, 0LL);
    this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_55;
    WarBoardManager__DispPartyBuff((WarBoardManager_o *)this, v31, 0LL);
  }
LABEL_46:
  this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v32 = v2->fields.executeRoute;
  if ( !v32 )
    goto LABEL_55;
  v33 = v2->fields.routeIndex;
  if ( v32->fields._size <= (unsigned int)v33 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v34 = v32->fields._items->m_Items[v33];
  if ( !v34 || !this )
    goto LABEL_55;
  v15 = 1;
  this = (WarBoardAI_o *)WarBoardManager__PieceAction_18213196(
                           (WarBoardManager_o *)this,
                           basePiece,
                           v34->fields.actionIndex,
                           0LL,
                           1,
                           0LL);
  v35 = v2->fields.routeIndex;
  v2->fields.isEndPhase = (unsigned __int8)this & 1;
  v14 = v35 + 1;
  v2->fields.routeIndex = v14;
  if ( ((unsigned __int8)this & 1) != 0 )
    return v15;
LABEL_52:
  v36 = v2->fields.executeRoute;
  if ( !v36 )
    goto LABEL_55;
  v15 = 1;
  if ( v36->fields._size <= v14 )
    v2->fields.isEndRoute = 1;
  return v15;
}


int32_t __fastcall WarBoardAI__GetRandomIndex(
        WarBoardAI_o *this,
        System_Collections_Generic_List_Decimal__o *weightTable,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WarBoardAI___c_c *v12; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_Decimal__Decimal__o *_9__14_0; // x20
  Il2CppObject *v15; // x21
  struct WarBoardAI___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Decimal_o v23; // kr00_16
  System_Decimal_o v24; // kr10_16
  float v25; // s0
  float v26; // s0
  System_Decimal_o v27; // kr20_16
  signed __int64 size; // x8
  __int64 v29; // x21
  __int64 v30; // x22
  __int64 v31; // x26
  unsigned __int64 v32; // x20
  char *v33; // x8
  __int64 v34; // x23
  __int64 v35; // x24
  char *v36; // x8
  __int64 v37; // x23
  __int64 v38; // x24
  System_Decimal_o v39; // kr30_16
  System_Decimal_o v41; // 0:x0.16
  System_Decimal_o v42; // 0:x0.16
  System_Decimal_o v43; // 0:x2.16
  System_Decimal_o v44; // 0:x2.16

  if ( (byte_418674D & 1) == 0 )
  {
    sub_B2C35C(&System_Decimal_TypeInfo, weightTable);
    sub_B2C35C(&Method_System_Linq_Enumerable_Sum_Decimal___, v4);
    sub_B2C35C(&Method_System_Func_Decimal__Decimal___ctor__, v5);
    sub_B2C35C(&System_Func_Decimal__Decimal__TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Decimal__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Decimal__get_Item__, v8);
    sub_B2C35C(&System_Math_TypeInfo, v9);
    sub_B2C35C(&Method_WarBoardAI___c__GetRandomIndex_b__14_0__, v10);
    sub_B2C35C(&WarBoardAI___c_TypeInfo, v11);
    byte_418674D = 1;
  }
  v12 = WarBoardAI___c_TypeInfo;
  if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v12 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__14_0 = static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = WarBoardAI___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Func_Decimal__Decimal__o *)sub_B2C42C(System_Func_Decimal__Decimal__TypeInfo);
    System_Func_Decimal__Decimal____ctor(
      _9__14_0,
      v15,
      Method_WarBoardAI___c__GetRandomIndex_b__14_0__,
      (const MethodInfo_270C5F4 *)Method_System_Func_Decimal__Decimal___ctor__);
    v16 = WarBoardAI___c_TypeInfo->static_fields;
    v16->__9__14_0 = _9__14_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v16->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = System_Linq_Enumerable__Sum_Decimal_(
          (System_Collections_Generic_IEnumerable_TSource__o *)weightTable,
          (System_Func_TSource__Decimal__o *)_9__14_0,
          (const MethodInfo_1A9A514 *)Method_System_Linq_Enumerable_Sum_Decimal___);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v24 = System_Math__Floor(v23, 0LL);
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v25 = System_Decimal__op_Explicit_44194696(v24, 0LL);
  v26 = UnityEngine_Random__Range(0.0, v25, 0LL);
  v27 = System_Decimal__op_Explicit(v26, 0LL);
  if ( !weightTable )
    sub_B2C434(*(_QWORD *)&v27.fields.flags, *(_QWORD *)&v27.fields.lo);
  LODWORD(size) = weightTable->fields._size;
  if ( (int)size < 1 )
    goto LABEL_34;
  v29 = *(_QWORD *)&v27.fields.flags;
  v30 = *(_QWORD *)&v27.fields.lo;
  v31 = 0LL;
  v32 = 0LL;
  while ( 1 )
  {
    if ( v32 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v33 = (char *)weightTable->fields._items + v31;
    v35 = *((_QWORD *)v33 + 4);
    v34 = *((_QWORD *)v33 + 5);
    if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    }
    *(_QWORD *)&v41.fields.flags = v35;
    *(_QWORD *)&v41.fields.lo = v34;
    *(_QWORD *)&v43.fields.flags = v29;
    *(_QWORD *)&v43.fields.lo = v30;
    if ( System_Decimal__op_GreaterThanOrEqual(v41, v43, 0LL) )
      break;
    if ( v32 >= (unsigned int)weightTable->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v36 = (char *)weightTable->fields._items + v31;
    v38 = *((_QWORD *)v36 + 4);
    v37 = *((_QWORD *)v36 + 5);
    if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    }
    *(_QWORD *)&v42.fields.flags = v29;
    *(_QWORD *)&v42.fields.lo = v30;
    *(_QWORD *)&v44.fields.flags = v38;
    *(_QWORD *)&v44.fields.lo = v37;
    v39 = System_Decimal__op_Subtraction(v42, v44, 0LL);
    size = weightTable->fields._size;
    ++v32;
    v30 = *(_QWORD *)&v39.fields.lo;
    v29 = *(_QWORD *)&v39.fields.flags;
    v31 += 16LL;
    if ( (__int64)v32 >= size )
      goto LABEL_34;
  }
  if ( (_DWORD)v32 == -1 )
LABEL_34:
    LODWORD(v32) = 0;
  return v32;
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

  if ( (byte_418674A & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAI__Think_d__11_TypeInfo, method);
    byte_418674A = 1;
  }
  v3 = sub_B2C42C(WarBoardAI__Think_d__11_TypeInfo);
  WarBoardAI__Think_d__11___ctor((WarBoardAI__Think_d__11_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
    sub_B2C434(0LL, aiId);
  WarBoardAIRoute__UpdatePiecePersonalityDic(routeClass, aiId, pieceIndex, method);
}


bool __fastcall WarBoardAI___Think_b__11_2(
        WarBoardAI_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *x,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct WarBoardAIRoute_o *routeClass; // x22
  WarBoardAI___c_c *v10; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__float__o *_9__11_7; // x20
  Il2CppObject *v13; // x21
  struct WarBoardAI___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x1
  float v23; // s0
  struct WarBoardStageNpcEntity_o *npcData; // x8

  if ( (byte_418674F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____67417544, x);
    sub_B2C35C(&Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__, v5);
    sub_B2C35C(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardAI___c__Think_b__11_7__, v7);
    sub_B2C35C(&WarBoardAI___c_TypeInfo, v8);
    byte_418674F = 1;
  }
  routeClass = this->fields.routeClass;
  v10 = WarBoardAI___c_TypeInfo;
  if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v10 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__11_7 = static_fields->__9__11_7;
  if ( !_9__11_7 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = WarBoardAI___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__11_7 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B2C42C(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    System_Func_WarBoardAIRoute_RouteData__float____ctor(
      _9__11_7,
      v13,
      Method_WarBoardAI___c__Think_b__11_7__,
      (const MethodInfo_2713AF8 *)Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__);
    v14 = WarBoardAI___c_TypeInfo->static_fields;
    v14->__9__11_7 = _9__11_7;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v14->__9__11_7,
      (System_Int32_array **)_9__11_7,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v23 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__27895168(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__float__o *)_9__11_7,
          (const MethodInfo_1A9A580 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____67417544);
  if ( !routeClass || (npcData = routeClass->fields.npcData) == 0LL )
    sub_B2C434(v21, v22);
  return (float)((float)npcData->fields.lowerThinkingValue / 100.0) <= v23;
}


int32_t __fastcall WarBoardAI__get_ForceId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_B2C434(this, method);
  return routeClass->fields.forceId;
}


int32_t __fastcall WarBoardAI__get_GroupId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_B2C434(this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
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
  struct WarBoardAI_o *_4__this; // x19
  WarBoardAIRoute_o *routeClass; // x20
  System_Collections_Generic_Dictionary_int__uint__o *placePieceData; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v57; // x22
  System_Collections_IEnumerator_o *RouteData; // x0
  Il2CppObject **p__2__current; // x27
  bool v60; // w20
  WarBoardAI__Think_d__11_o *availableRouteList_5__4; // x26
  struct WarBoardAIRoute_o *v62; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x1
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList_5__2; // x8
  Il2CppObject *v65; // x21
  struct WarBoardAIRoute_o *v66; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *v67; // x22
  int32_t pickValue; // w8
  BalanceConfig_c *v69; // x0
  _BOOL4 IsWarBoardAiCalcEvalSum; // w9
  WarBoardAI___c_c *v71; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_0; // x23
  Il2CppObject *v74; // x24
  struct WarBoardAI___c_StaticFields *v75; // x0
  struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o **p__9__11_0; // x0
  struct WarBoardAI___c_StaticFields *v77; // x8
  Il2CppObject *v78; // x24
  struct WarBoardAI___c_StaticFields *v79; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v81; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v82; // x24
  WarBoardAI__Think_d__11_o **p_availableRouteList_5__4; // x23
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v84; // x25
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **v85; // x24
  __int64 v86; // x8
  unsigned __int64 v87; // x20
  int32_t pickValue_5__3; // w28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **p_monitor; // x25
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v90; // x26
  __int64 v91; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v92; // x27
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v93; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v94; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v95; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v96; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *evalValueSortList_5__5; // x8
  System_Collections_Generic_List_Decimal__o *v98; // x21
  Il2CppClass *klass; // x23
  int v100; // w27
  int v101; // w19
  int namespaze; // w8
  int v103; // w24
  char v104; // w25
  char v105; // w26
  Il2CppClass *v106; // x8
  WarBoardPieceData_o *monitor; // x0
  bool isMaster; // w0
  _BOOL8 v109; // x0
  __int64 v110; // x1
  Il2CppObject *current; // x23
  int v112; // w27
  int v113; // w8
  WarBoardAI_o *v114; // x9
  struct WarBoardAIRoute_o *v115; // x8
  float v116; // s12
  float BestMagnification; // s8
  float LowestMagnification; // s0
  int value; // w21
  float ImmobilityMagnification; // s0
  _BOOL8 v121; // x0
  __int64 v122; // x1
  WarBoardTacticalTrendEntity_o *v123; // x23
  int v124; // w8
  float v125; // s8
  BalanceConfig_c *v126; // x0
  System_Decimal_o v127; // kr00_16
  Il2CppClass *v128; // x8
  WarBoardAI___c_c *v129; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v130; // x25
  struct WarBoardAI___c_StaticFields *v131; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_8; // x26
  int v133; // w21
  System_Decimal_o v134; // kr10_16
  Il2CppClass *v135; // x8
  WarBoardAI___c_c *v136; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v137; // x25
  struct WarBoardAI___c_StaticFields *v138; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_9; // x26
  int v140; // w21
  Il2CppObject *v141; // x27
  struct WarBoardAI___c_StaticFields *v142; // x0
  System_Decimal_o v143; // kr20_16
  System_Decimal_o v144; // kr30_16
  __int64 v145; // x2
  __int64 v146; // x4
  Il2CppObject *v147; // x27
  struct WarBoardAI___c_StaticFields *v148; // x0
  System_Decimal_o v149; // kr40_16
  Il2CppClass *v150; // x8
  __int64 v151; // x8
  int v152; // w21
  int32_t v153; // w27
  System_Decimal_o v154; // kr70_16
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v155; // x1
  System_Collections_Generic_IEnumerable_TSource__o *executeRoute; // x21
  WarBoardAI___c_c *v157; // x0
  struct WarBoardAI___c_StaticFields *v158; // x8
  System_Func_WarBoardAIRoute_RouteData__float__o *_9__11_3; // x22
  Il2CppObject *v160; // x23
  struct WarBoardAI___c_StaticFields *v161; // x0
  __int64 v162; // x0
  Il2CppObject **v163; // x27
  int v164; // w8
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v165; // x21
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v166; // x22
  int v167; // w19
  __int64 v168; // x23
  __int64 v169; // x22
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array **p_evalValueSortList_5__5; // x27
  __int64 v171; // x0
  __int64 v172; // x0
  __int64 v173; // x0
  __int64 v174; // x0
  __int64 v176; // x0
  WarBoardAI__Think_d__11_o *v177; // [xsp+8h] [xbp-118h]
  WarBoardAI__Think_d__11_o *v178; // [xsp+8h] [xbp-118h]
  System_Collections_Generic_List_Decimal__o *v179; // [xsp+10h] [xbp-110h]
  WarBoardAI_o *v180; // [xsp+20h] [xbp-100h]
  WarBoardAI__Think_d__11_o **v181; // [xsp+28h] [xbp-F8h]
  Il2CppObject *object; // [xsp+30h] [xbp-F0h]
  _BYTE v183[32]; // [xsp+38h] [xbp-E8h] BYREF
  int v184; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v185; // [xsp+60h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v186; // [xsp+80h] [xbp-A0h] BYREF
  System_Decimal_o v187; // 0:x1.16
  System_Decimal_o v188; // 0:x2.16
  System_Decimal_o v189; // 0:x2.16

  v2 = this;
  if ( (byte_41856E9 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, v3);
    sub_B2C35C(&bool_TypeInfo, v4);
    sub_B2C35C(&System_Decimal_TypeInfo, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____67417544, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__get_Current__, v17);
    sub_B2C35C(&Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__, v18);
    sub_B2C35C(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__, v19);
    sub_B2C35C(&Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__, v20);
    sub_B2C35C(&Method_System_Func_List_WarBoardAIRoute_RouteData___bool___ctor__, v21);
    sub_B2C35C(&Method_System_Func_List_WarBoardAIRoute_RouteData___Decimal___ctor__, v22);
    sub_B2C35C(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v23);
    sub_B2C35C(&System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo, v24);
    sub_B2C35C(&System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo, v25);
    sub_B2C35C(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v26);
    sub_B2C35C(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo, v27);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__, v28);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__, v30);
    sub_B2C35C(&System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo, v31);
    sub_B2C35C(&Method_System_Collections_Generic_List_Decimal__Add__, v32);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__, v33);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v34);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__, v35);
    sub_B2C35C(&Method_System_Collections_Generic_List_Decimal___ctor__, v36);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__, v37);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__, v38);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v39);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___get_Count__, v40);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v41);
    sub_B2C35C(&System_Collections_Generic_List_Decimal__TypeInfo, v42);
    sub_B2C35C(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo, v43);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo, v44);
    sub_B2C35C(&Method_WarBoardAI___c__Think_b__11_0__, v45);
    sub_B2C35C(&Method_WarBoardAI___c__Think_b__11_1__, v46);
    sub_B2C35C(&Method_WarBoardAI___c__Think_b__11_3__, v47);
    sub_B2C35C(&Method_WarBoardAI___c__Think_b__11_8__, v48);
    sub_B2C35C(&Method_WarBoardAI___c__Think_b__11_9__, v49);
    sub_B2C35C(&Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__, v50);
    sub_B2C35C(&WarBoardAI___c__DisplayClass11_0_TypeInfo, v51);
    sub_B2C35C(&WarBoardAI___c_TypeInfo, v52);
    this = (WarBoardAI__Think_d__11_o *)sub_B2C35C(&Method_WarBoardAI__Think_b__11_2__, v53);
    byte_41856E9 = 1;
  }
  memset(&v186, 0, sizeof(v186));
  memset(&v185, 0, sizeof(v185));
  v184 = 0;
  _4__this = v2->fields.__4__this;
  v180 = _4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_197;
      this = (WarBoardAI__Think_d__11_o *)_4__this->fields.routeClass;
      _4__this->fields.routeIndex = 0;
      _4__this->fields.isEndRoute = 0;
      if ( !this )
        goto LABEL_197;
      WarBoardAIRoute__BeforeCreateRouteData((WarBoardAIRoute_o *)this, 0LL);
      routeClass = _4__this->fields.routeClass;
      if ( !routeClass )
        goto LABEL_197;
      placePieceData = routeClass->fields.placePieceData;
      v57 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v57,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
      RouteData = WarBoardAIRoute__CreateRouteData(
                    routeClass,
                    placePieceData,
                    0,
                    (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v57,
                    0LL);
      v2->fields.__2__current = (Il2CppObject *)RouteData;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, RouteData);
      v60 = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return v60;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_197;
      v62 = _4__this->fields.routeClass;
      if ( !v62 )
        goto LABEL_197;
      allRouteList = v62->fields.allRouteList;
      v2->fields._allRouteList_5__2 = allRouteList;
      sub_B2C2F8(&v2->fields._allRouteList_5__2, allRouteList);
      allRouteList_5__2 = v2->fields._allRouteList_5__2;
      if ( !allRouteList_5__2 )
        goto LABEL_197;
      if ( !allRouteList_5__2->fields._size )
      {
        v60 = 1;
        v183[0] = 1;
        v174 = j_il2cpp_value_box_0(bool_TypeInfo, v183);
        v2->fields.__2__current = (Il2CppObject *)v174;
        v163 = &v2->fields.__2__current;
        sub_B2C2F8(v163, v174);
        v164 = 2;
        goto LABEL_202;
      }
LABEL_16:
      v65 = (Il2CppObject *)sub_B2C42C(WarBoardAI___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor(v65, 0LL);
      if ( !_4__this )
        goto LABEL_197;
      v66 = _4__this->fields.routeClass;
      if ( !v66 )
        goto LABEL_197;
      v67 = v2->fields._allRouteList_5__2;
      if ( !v67 )
        goto LABEL_197;
      pickValue = v66->fields.pickValue;
      if ( pickValue >= v67->fields._size )
        pickValue = v67->fields._size;
      v2->fields._pickValue_5__3 = pickValue;
      if ( !pickValue )
        v2->fields._pickValue_5__3 = v67->fields._size;
      v69 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v69 = BalanceConfig_TypeInfo;
        v67 = v2->fields._allRouteList_5__2;
      }
      IsWarBoardAiCalcEvalSum = v69->static_fields->IsWarBoardAiCalcEvalSum;
      v71 = WarBoardAI___c_TypeInfo;
      if ( IsWarBoardAiCalcEvalSum )
      {
        if ( (WORD1(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v71 = WarBoardAI___c_TypeInfo;
        }
        static_fields = v71->static_fields;
        _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)static_fields->__9__11_0;
        if ( !_9__11_0 )
        {
          if ( (BYTE3(v71->vtable._0_Equals.methodPtr) & 4) != 0 && !v71->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v71);
            static_fields = WarBoardAI___c_TypeInfo->static_fields;
          }
          v74 = (Il2CppObject *)static_fields->__9;
          _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B2C42C(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
          System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
            _9__11_0,
            v74,
            Method_WarBoardAI___c__Think_b__11_0__,
            (const MethodInfo_27123C8 *)Method_System_Func_List_WarBoardAIRoute_RouteData___Decimal___ctor__);
          v75 = WarBoardAI___c_TypeInfo->static_fields;
          v75->__9__11_0 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
          p__9__11_0 = &v75->__9__11_0;
LABEL_45:
          sub_B2C2F8(p__9__11_0, _9__11_0);
        }
      }
      else
      {
        if ( (WORD1(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v71 = WarBoardAI___c_TypeInfo;
        }
        v77 = v71->static_fields;
        _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)v77->__9__11_1;
        if ( !_9__11_0 )
        {
          if ( (BYTE3(v71->vtable._0_Equals.methodPtr) & 4) != 0 && !v71->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v71);
            v77 = WarBoardAI___c_TypeInfo->static_fields;
          }
          v78 = (Il2CppObject *)v77->__9;
          _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B2C42C(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
          System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
            _9__11_0,
            v78,
            Method_WarBoardAI___c__Think_b__11_1__,
            (const MethodInfo_27123C8 *)Method_System_Func_List_WarBoardAIRoute_RouteData___Decimal___ctor__);
          v79 = WarBoardAI___c_TypeInfo->static_fields;
          v79->__9__11_1 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
          p__9__11_0 = &v79->__9__11_1;
          goto LABEL_45;
        }
      }
      v80 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Decimal_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v67,
                                                                   (System_Func_TSource__TKey__o *)_9__11_0,
                                                                   (const MethodInfo_1A93990 *)Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
      v81 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
              v80,
              (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v82 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v82,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
      v2->fields._availableRouteList_5__4 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v82;
      p_availableRouteList_5__4 = (WarBoardAI__Think_d__11_o **)&v2->fields._availableRouteList_5__4;
      sub_B2C2F8(&v2->fields._availableRouteList_5__4, v82);
      v84 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
      System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
        v84,
        (const MethodInfo_2D8BA5C *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !v65 )
        goto LABEL_197;
      v65[1].klass = (Il2CppClass *)v84;
      v85 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **)&v65[1];
      v177 = v2;
      sub_B2C2F8(&v65[1], v84);
      if ( !v81 )
        goto LABEL_197;
      v86 = *(_QWORD *)&v81->max_length;
      if ( (int)v86 >= 1 )
      {
        v87 = 0LL;
        pickValue_5__3 = v2->fields._pickValue_5__3;
        v181 = (WarBoardAI__Think_d__11_o **)&v2->fields._availableRouteList_5__4;
        p_monitor = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)&v65[1].monitor;
        while ( 1 )
        {
          if ( v87 >= (unsigned int)v86 )
            goto LABEL_204;
          v90 = v81->m_Items[v87];
          this = (WarBoardAI__Think_d__11_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v90, 0LL);
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
              goto LABEL_69;
            if ( !v90 )
              goto LABEL_197;
            if ( !LODWORD(v90->fields.msgIds) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v91 = *(_QWORD *)(*(_QWORD *)&v90->fields.groupId + 32LL);
            if ( !v91 )
              goto LABEL_197;
            if ( *(_DWORD *)(v91 + 24) == *(_DWORD *)(v91 + 28) )
            {
              if ( !LODWORD(v90->fields.msgIds) )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              if ( !*v85 )
                goto LABEL_197;
              this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                                                    *v85,
                                                    *(WarBoardAIRoute_RouteData_o **)(v91 + 48),
                                                    (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
              goto LABEL_77;
            }
            v92 = *p_monitor;
            if ( !*p_monitor )
            {
              v92 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v92,
                v65,
                Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__,
                (const MethodInfo_2711C04 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
              v65[1].monitor = v92;
              p_availableRouteList_5__4 = v181;
              sub_B2C2F8(p_monitor, v92);
            }
            this = (WarBoardAI__Think_d__11_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                  (System_Collections_Generic_List_T__o *)v90,
                                                  (System_Func_T__bool__o *)v92,
                                                  (const MethodInfo_17266AC *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
            if ( ((unsigned __int8)this & 1) == 0 )
              break;
          }
LABEL_77:
          LODWORD(v86) = v81->max_length;
          if ( (__int64)++v87 >= (int)v86 )
            goto LABEL_78;
        }
        this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
LABEL_69:
        if ( (this[4].fields.__1__state & 0x4000000) != 0 && !LODWORD(this[3].monitor) )
        {
          j_il2cpp_runtime_class_init_0(this);
          this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
        }
        if ( !BYTE1(this[2].fields._allRouteList_5__2[21].fields._syncRoot)
          || (this = (WarBoardAI__Think_d__11_o *)WarBoardAI__CheckWasteRoute(
                                                    _4__this,
                                                    (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v90,
                                                    0LL),
              ((unsigned __int8)this & 1) == 0) )
        {
          this = *p_availableRouteList_5__4;
          if ( !*p_availableRouteList_5__4 )
            goto LABEL_197;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v90,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
          availableRouteList_5__4 = *p_availableRouteList_5__4;
          if ( !*p_availableRouteList_5__4 )
            goto LABEL_197;
          if ( pickValue_5__3 <= SLODWORD(availableRouteList_5__4->fields.__2__current) )
            goto LABEL_79;
        }
        goto LABEL_77;
      }
LABEL_78:
      availableRouteList_5__4 = *p_availableRouteList_5__4;
      if ( !*p_availableRouteList_5__4 )
        goto LABEL_197;
LABEL_79:
      v2 = v177;
      if ( SLODWORD(availableRouteList_5__4->fields.__2__current) <= 0 )
      {
        v60 = 1;
        v183[0] = 1;
        v173 = j_il2cpp_value_box_0(bool_TypeInfo, v183);
        v177->fields.__2__current = (Il2CppObject *)v173;
        v163 = &v177->fields.__2__current;
        sub_B2C2F8(&v177->fields.__2__current, v173);
        v164 = 3;
        goto LABEL_202;
      }
LABEL_80:
      v93 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v93,
        (Il2CppObject *)_4__this,
        Method_WarBoardAI__Think_b__11_2__,
        (const MethodInfo_2711C04 *)Method_System_Func_List_WarBoardAIRoute_RouteData___bool___ctor__);
      v94 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)availableRouteList_5__4,
              (System_Func_TSource__bool__o *)v93,
              (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
      v95 = System_Linq_Enumerable__Take_BattleData_CommandHistory_(
              v94,
              v2->fields._pickValue_5__3,
              (const MethodInfo_1A9A644 *)Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
      v96 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
              v95,
              (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v2->fields._evalValueSortList_5__5 = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)v96;
      object = (Il2CppObject *)&v2->fields._evalValueSortList_5__5;
      sub_B2C2F8(&v2->fields._evalValueSortList_5__5, v96);
      evalValueSortList_5__5 = v2->fields._evalValueSortList_5__5;
      if ( !evalValueSortList_5__5 )
        goto LABEL_197;
      if ( !*(_QWORD *)&evalValueSortList_5__5->max_length )
      {
        v60 = 1;
        v183[0] = 1;
        v172 = j_il2cpp_value_box_0(bool_TypeInfo, v183);
        v2->fields.__2__current = (Il2CppObject *)v172;
        v163 = &v2->fields.__2__current;
        sub_B2C2F8(v163, v172);
        v164 = 4;
LABEL_202:
        *((_DWORD *)v163 - 2) = v164;
        return v60;
      }
LABEL_82:
      v178 = v2;
      v98 = (System_Collections_Generic_List_Decimal__o *)sub_B2C42C(System_Collections_Generic_List_Decimal__TypeInfo);
      System_Collections_Generic_List_Decimal____ctor(
        v98,
        (const MethodInfo_2F5A214 *)Method_System_Collections_Generic_List_Decimal___ctor__);
      klass = object->klass;
      if ( !object->klass )
        goto LABEL_197;
      v100 = 0;
      v101 = 0;
      v179 = v98;
      while ( 1 )
      {
        namespaze = (int)klass->_1.namespaze;
        if ( v101 >= namespaze )
          break;
        if ( v101 >= (unsigned int)namespaze )
          goto LABEL_204;
        this = (WarBoardAI__Think_d__11_o *)*((_QWORD *)&klass->_1.byval_arg.data + v101);
        if ( !this )
          goto LABEL_197;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v183,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
        v103 = 0;
        v104 = 0;
        v105 = 0;
        v186 = *(System_Collections_Generic_List_Enumerator_T__o *)v183;
        while ( 1 )
        {
          v109 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v186,
                   (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
          if ( !v109 )
            break;
          current = v186.fields.current;
          if ( !v186.fields.current )
            sub_B2C434(v109, v110);
          v106 = v186.fields.current[1].klass;
          if ( ((unsigned __int8)v106 & 4) != 0 )
          {
            monitor = (WarBoardPieceData_o *)v186.fields.current[3].monitor;
            if ( monitor )
            {
              isMaster = WarBoardPieceData__get_isMaster(monitor, 0LL);
              v106 = current[1].klass;
              v104 |= isMaster;
            }
            v105 = 1;
          }
          v103 |= ((unsigned __int64)v106 >> 3) & 1;
        }
        *(_DWORD *)&v183[4 * v100 + 24] = 849;
        v112 = ++v184;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v186,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
        if ( v112 )
        {
          v113 = v112 - 1;
          v114 = v180;
          if ( *(_DWORD *)&v183[4 * v112 + 20] == 849 )
          {
            --v112;
            v184 = v113;
            if ( !v180 )
              goto LABEL_197;
            goto LABEL_102;
          }
        }
        else
        {
          v114 = v180;
        }
        if ( !v114 )
          goto LABEL_197;
LABEL_102:
        v115 = v114->fields.routeClass;
        if ( !v115 )
          goto LABEL_197;
        this = (WarBoardAI__Think_d__11_o *)v115->fields.tacticalTrendList;
        if ( !this )
          goto LABEL_197;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v183,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
        v116 = 0.0;
        v185 = *(System_Collections_Generic_List_Enumerator_T__o *)v183;
        while ( 1 )
        {
          v121 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v185,
                   (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
          if ( !v121 )
            break;
          v123 = (WarBoardTacticalTrendEntity_o *)v185.fields.current;
          if ( !v185.fields.current )
            sub_B2C434(v121, v122);
          switch ( HIDWORD(v185.fields.current[1].klass) )
          {
            case 0:
              if ( v101 < SLODWORD(v185.fields.current[1].monitor) )
              {
                BestMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(
                                      (WarBoardTacticalTrendEntity_o *)v185.fields.current,
                                      0LL);
                LowestMagnification = WarBoardTacticalTrendEntity__GetLowestMagnification(v123, 0LL);
                value = v123->fields.value;
                ImmobilityMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(v123, 0LL)
                                        - (float)((float)((float)(BestMagnification - LowestMagnification)
                                                        / (float)((float)value + -1.0))
                                                * (float)v101);
                goto LABEL_114;
              }
              break;
            case 1:
              if ( (v105 & 1) != 0 )
                goto LABEL_113;
              break;
            case 4:
              if ( (v104 & 1) != 0 )
                goto LABEL_113;
              break;
            case 5:
              if ( (v103 & 1) != 0 )
              {
LABEL_113:
                ImmobilityMagnification = WarBoardTacticalTrendEntity__GetImmobilityMagnification(
                                            (WarBoardTacticalTrendEntity_o *)v185.fields.current,
                                            0LL);
LABEL_114:
                v116 = v116 + ImmobilityMagnification;
              }
              break;
            default:
              continue;
          }
        }
        *(_DWORD *)&v183[4 * v112 + 24] = 1074;
        v100 = ++v184;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v185,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
        if ( v100 )
        {
          v124 = v100 - 1;
          if ( *(_DWORD *)&v183[4 * v100 + 20] == 1074 )
          {
            --v100;
            v184 = v124;
          }
        }
        if ( v116 == 0.0 )
          v125 = 1.0;
        else
          v125 = v116;
        v126 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v126 = BalanceConfig_TypeInfo;
        }
        if ( v126->static_fields->IsWarBoardAiCalcEvalSum )
        {
          if ( (WORD1(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v127 = System_Decimal__op_Explicit(v125, 0LL);
          method = *(const MethodInfo **)&v127.fields.lo;
          this = *(WarBoardAI__Think_d__11_o **)&v127.fields.flags;
          v128 = object->klass;
          if ( !object->klass )
            goto LABEL_197;
          if ( (unsigned int)v101 >= LODWORD(v128->_1.namespaze) )
            goto LABEL_204;
          v129 = WarBoardAI___c_TypeInfo;
          v130 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)&v128->_1.byval_arg.data + v101);
          if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v129 = WarBoardAI___c_TypeInfo;
          }
          v131 = v129->static_fields;
          _9__11_8 = v131->__9__11_8;
          if ( !_9__11_8 )
          {
            if ( (BYTE3(v129->vtable._0_Equals.methodPtr) & 4) != 0 )
            {
              v133 = v100;
              if ( !v129->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v129);
                v131 = WarBoardAI___c_TypeInfo->static_fields;
              }
            }
            else
            {
              v133 = v100;
            }
            v141 = (Il2CppObject *)v131->__9;
            _9__11_8 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B2C42C(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
            System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
              _9__11_8,
              v141,
              Method_WarBoardAI___c__Think_b__11_8__,
              (const MethodInfo_27123C8 *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
            v142 = WarBoardAI___c_TypeInfo->static_fields;
            v142->__9__11_8 = _9__11_8;
            sub_B2C2F8(&v142->__9__11_8, _9__11_8);
            v100 = v133;
          }
          v143 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__27895096(
                   v130,
                   (System_Func_TSource__Decimal__o *)_9__11_8,
                   (const MethodInfo_1A9A538 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
          if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v144 = System_Decimal__op_Multiply(v127, v143, 0LL);
          method = *(const MethodInfo **)&v144.fields.lo;
          v146 = *(unsigned __int128 *)&v144 >> 64;
          this = (WarBoardAI__Think_d__11_o *)*(_OWORD *)&v144;
          v145 = *(_QWORD *)&v144.fields.flags;
        }
        else
        {
          if ( (WORD1(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v134 = System_Decimal__op_Explicit(v125, 0LL);
          method = *(const MethodInfo **)&v134.fields.lo;
          this = *(WarBoardAI__Think_d__11_o **)&v134.fields.flags;
          v135 = object->klass;
          if ( !object->klass )
            goto LABEL_197;
          if ( (unsigned int)v101 >= LODWORD(v135->_1.namespaze) )
            goto LABEL_204;
          v136 = WarBoardAI___c_TypeInfo;
          v137 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)&v135->_1.byval_arg.data + v101);
          if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v136 = WarBoardAI___c_TypeInfo;
          }
          v138 = v136->static_fields;
          _9__11_9 = v138->__9__11_9;
          if ( !_9__11_9 )
          {
            if ( (BYTE3(v136->vtable._0_Equals.methodPtr) & 4) != 0 )
            {
              v140 = v100;
              if ( !v136->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v136);
                v138 = WarBoardAI___c_TypeInfo->static_fields;
              }
            }
            else
            {
              v140 = v100;
            }
            v147 = (Il2CppObject *)v138->__9;
            _9__11_9 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B2C42C(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
            System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
              _9__11_9,
              v147,
              Method_WarBoardAI___c__Think_b__11_9__,
              (const MethodInfo_27123C8 *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
            v148 = WarBoardAI___c_TypeInfo->static_fields;
            v148->__9__11_9 = _9__11_9;
            sub_B2C2F8(&v148->__9__11_9, _9__11_9);
            v100 = v140;
          }
          v149 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__27895096(
                   v137,
                   (System_Func_TSource__Decimal__o *)_9__11_9,
                   (const MethodInfo_1A9A538 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
          method = *(const MethodInfo **)&v149.fields.lo;
          this = *(WarBoardAI__Think_d__11_o **)&v149.fields.flags;
          v150 = object->klass;
          if ( !object->klass )
            goto LABEL_197;
          if ( (unsigned int)v101 >= LODWORD(v150->_1.namespaze) )
            goto LABEL_204;
          v151 = *((_QWORD *)&v150->_1.byval_arg.data + v101);
          if ( !v151 )
            goto LABEL_197;
          v152 = v100;
          v153 = *(_DWORD *)(v151 + 24);
          if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v188 = System_Decimal__op_Implicit_44194220(v153, 0LL);
          v189 = System_Decimal__op_Division(v149, v188, 0LL);
          v154 = System_Decimal__op_Multiply(v134, v189, 0LL);
          method = *(const MethodInfo **)&v154.fields.lo;
          v146 = *(unsigned __int128 *)&v154 >> 64;
          this = (WarBoardAI__Think_d__11_o *)*(_OWORD *)&v154;
          v145 = *(_QWORD *)&v154.fields.flags;
          v100 = v152;
        }
        v98 = v179;
        if ( v179 )
        {
          *(_QWORD *)&v187.fields.flags = v145;
          *(_QWORD *)&v187.fields.lo = v146;
          System_Collections_Generic_List_Decimal___Add(
            v179,
            v187,
            (const MethodInfo_2F5AF98 *)Method_System_Collections_Generic_List_Decimal__Add__);
          ++v101;
          klass = object->klass;
          if ( object->klass )
            continue;
        }
        goto LABEL_197;
      }
      _4__this = v180;
      if ( !v180 )
        goto LABEL_197;
      this = (WarBoardAI__Think_d__11_o *)WarBoardAI__GetRandomIndex(v180, v98, 0LL);
      v2 = v178;
      if ( (unsigned int)this >= LODWORD(klass->_1.namespaze) )
      {
LABEL_204:
        v176 = sub_B2C460(this);
        sub_B2C400(v176, 0LL);
      }
      v155 = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)*((_QWORD *)&klass->_1.byval_arg.data
                                                                                    + (int)this);
      v180->fields.executeRoute = v155;
      sub_B2C2F8(&v180->fields.executeRoute, v155);
      executeRoute = (System_Collections_Generic_IEnumerable_TSource__o *)v180->fields.executeRoute;
      v157 = WarBoardAI___c_TypeInfo;
      if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
        v157 = WarBoardAI___c_TypeInfo;
      }
      v158 = v157->static_fields;
      _9__11_3 = v158->__9__11_3;
      if ( !_9__11_3 )
      {
        if ( (BYTE3(v157->vtable._0_Equals.methodPtr) & 4) != 0 && !v157->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v157);
          v158 = WarBoardAI___c_TypeInfo->static_fields;
        }
        v160 = (Il2CppObject *)v158->__9;
        _9__11_3 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B2C42C(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
        System_Func_WarBoardAIRoute_RouteData__float____ctor(
          _9__11_3,
          v160,
          Method_WarBoardAI___c__Think_b__11_3__,
          (const MethodInfo_2713AF8 *)Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__);
        v161 = WarBoardAI___c_TypeInfo->static_fields;
        v161->__9__11_3 = _9__11_3;
        sub_B2C2F8(&v161->__9__11_3, _9__11_3);
        _4__this = v180;
      }
      System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__27895168(
        executeRoute,
        (System_Func_TSource__float__o *)_9__11_3,
        (const MethodInfo_1A9A580 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____67417544);
      if ( WarBoardAI__CheckWasteRoute(_4__this, _4__this->fields.executeRoute, 0LL) )
      {
        v60 = 1;
        v183[0] = 1;
        v162 = j_il2cpp_value_box_0(bool_TypeInfo, v183);
        v178->fields.__2__current = (Il2CppObject *)v162;
        v163 = &v178->fields.__2__current;
        sub_B2C2F8(&v178->fields.__2__current, v162);
        v164 = 5;
        goto LABEL_202;
      }
LABEL_182:
      v165 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
      System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
        v165,
        (const MethodInfo_2D8BA5C *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !_4__this || (v166 = _4__this->fields.executeRoute) == 0LL )
LABEL_197:
        sub_B2C434(this, method);
      v167 = v166->fields._size - 1;
      if ( v167 >= 0 )
      {
        v168 = 8LL * v167 + 32;
        while ( 1 )
        {
          if ( v166->fields._size <= (unsigned int)v167 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v169 = *(__int64 *)((char *)&v166->fields._items->obj.klass + v168);
          if ( !v169 )
            goto LABEL_197;
          method = *(const MethodInfo **)(v169 + 48);
          if ( method )
          {
            if ( !v165 )
              goto LABEL_197;
            this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
                                                  (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)v165,
                                                  (BattleBuffData_BuffData_o *)method,
                                                  (const MethodInfo_2D8C0E0 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
            if ( ((unsigned __int8)this & 1) == 0 && *(_DWORD *)(v169 + 24) != *(_DWORD *)(v169 + 28) )
            {
              System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                v165,
                *(WarBoardAIRoute_RouteData_o **)(v169 + 48),
                (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
              this = *(WarBoardAI__Think_d__11_o **)(v169 + 48);
              if ( !this )
                goto LABEL_197;
              WarBoardPieceData__SetPrevAiRoute((WarBoardPieceData_o *)this, (WarBoardAIRoute_RouteData_o *)v169, 0LL);
            }
          }
          if ( (--v167 & 0x80000000) != 0 )
            break;
          v168 -= 8LL;
          v166 = v180->fields.executeRoute;
          if ( !v166 )
            goto LABEL_197;
        }
      }
      v2->fields._availableRouteList_5__4 = 0LL;
      sub_B2C2F8(&v2->fields._availableRouteList_5__4, 0LL);
      v2->fields._evalValueSortList_5__5 = 0LL;
      p_evalValueSortList_5__5 = &v2->fields._evalValueSortList_5__5;
      sub_B2C2F8(p_evalValueSortList_5__5, 0LL);
      v183[0] = 0;
      v171 = j_il2cpp_value_box_0(bool_TypeInfo, v183);
      *(p_evalValueSortList_5__5 - 5) = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)v171;
      sub_B2C2F8(p_evalValueSortList_5__5 - 5, v171);
      *((_DWORD *)p_evalValueSortList_5__5 - 12) = 6;
      return 1;
    case 2:
      v2->fields.__1__state = -1;
      goto LABEL_16;
    case 3:
      availableRouteList_5__4 = (WarBoardAI__Think_d__11_o *)v2->fields._availableRouteList_5__4;
      v2->fields.__1__state = -1;
      goto LABEL_80;
    case 4:
      v2->fields.__1__state = -1;
      object = (Il2CppObject *)&v2->fields._evalValueSortList_5__5;
      goto LABEL_82;
    case 5:
      v2->fields.__1__state = -1;
      goto LABEL_182;
    case 6:
      v60 = 0;
      v2->fields.__1__state = -1;
      return v60;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardAI__Think_d__11_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  Il2CppObject *v2; // x19
  struct WarBoardAI___c_StaticFields *static_fields; // x0

  if ( (byte_41856E1 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAI___c_TypeInfo, v1);
    byte_41856E1 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardAI___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarBoardAI___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardAI___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardAI___c_c *v8; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_4; // x20
  Il2CppObject *v11; // x21
  struct WarBoardAI___c_StaticFields *v12; // x0
  __int64 v13; // x0 OVERLAPPED
  __int64 v14; // x1
  System_Decimal_o v15; // kr00_16
  System_Decimal_o result; // 0:x0.16

  if ( (byte_41856E2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, x);
    sub_B2C35C(&Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__, v4);
    sub_B2C35C(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v5);
    sub_B2C35C(&Method_WarBoardAI___c__Think_b__11_4__, v6);
    sub_B2C35C(&WarBoardAI___c_TypeInfo, v7);
    byte_41856E2 = 1;
  }
  v8 = WarBoardAI___c_TypeInfo;
  if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v8 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__11_4 = static_fields->__9__11_4;
  if ( !_9__11_4 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = WarBoardAI___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__11_4 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B2C42C(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
      _9__11_4,
      v11,
      Method_WarBoardAI___c__Think_b__11_4__,
      (const MethodInfo_27123C8 *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
    v12 = WarBoardAI___c_TypeInfo->static_fields;
    v12->__9__11_4 = _9__11_4;
    sub_B2C2F8(&v12->__9__11_4, _9__11_4);
  }
  v15 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__27895096(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_4,
          (const MethodInfo_1A9A538 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  v14 = *(_QWORD *)&v15.fields.lo;
  v13 = *(_QWORD *)&v15.fields.flags;
  *(_QWORD *)&result.fields.lo = v14;
  *(_QWORD *)&result.fields.flags = v13;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAI___c___Think_b__11_1(
        WarBoardAI___c_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WarBoardAI___c_c *v10; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_5; // x20
  Il2CppObject *v13; // x21
  struct WarBoardAI___c_StaticFields *v14; // x0
  System_Decimal_o v15; // kr00_16
  int32_t size; // w19
  __int64 v17; // x0 OVERLAPPED
  __int64 v18; // x1
  System_Decimal_o v19; // kr20_16
  System_Decimal_o result; // 0:x0.16
  System_Decimal_o v21; // 0:x2.16

  if ( (byte_41856E4 & 1) == 0 )
  {
    sub_B2C35C(&System_Decimal_TypeInfo, x);
    sub_B2C35C(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, v4);
    sub_B2C35C(&Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__, v5);
    sub_B2C35C(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v7);
    sub_B2C35C(&Method_WarBoardAI___c__Think_b__11_5__, v8);
    sub_B2C35C(&WarBoardAI___c_TypeInfo, v9);
    byte_41856E4 = 1;
  }
  v10 = WarBoardAI___c_TypeInfo;
  if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v10 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__11_5 = static_fields->__9__11_5;
  if ( !_9__11_5 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = WarBoardAI___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__11_5 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B2C42C(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
      _9__11_5,
      v13,
      Method_WarBoardAI___c__Think_b__11_5__,
      (const MethodInfo_27123C8 *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
    v14 = WarBoardAI___c_TypeInfo->static_fields;
    v14->__9__11_5 = _9__11_5;
    sub_B2C2F8(&v14->__9__11_5, _9__11_5);
  }
  v15 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__27895096(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_5,
          (const MethodInfo_1A9A538 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  if ( !x )
    sub_B2C434(*(_QWORD *)&v15.fields.flags, *(_QWORD *)&v15.fields.lo);
  size = x->fields._size;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v21 = System_Decimal__op_Implicit_44194220(size, 0LL);
  v19 = System_Decimal__op_Division(v15, v21, 0LL);
  v18 = *(_QWORD *)&v19.fields.lo;
  v17 = *(_QWORD *)&v19.fields.flags;
  *(_QWORD *)&result.fields.lo = v18;
  *(_QWORD *)&result.fields.flags = v17;
  return result;
}


float __fastcall WarBoardAI___c___Think_b__11_3(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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

  if ( (byte_41856E3 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_B2C35C(&System_Decimal_TypeInfo, y);
    byte_41856E3 = 1;
  }
  if ( !y )
    sub_B2C434(this, y);
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

  if ( (byte_41856E5 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_B2C35C(&System_Decimal_TypeInfo, y);
    byte_41856E5 = 1;
  }
  if ( !y )
    sub_B2C434(this, y);
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
    sub_B2C434(this, 0LL);
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

  if ( (byte_41856E6 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_B2C35C(&System_Decimal_TypeInfo, y);
    byte_41856E6 = 1;
  }
  if ( !y )
    sub_B2C434(this, y);
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

  if ( (byte_41856E7 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_B2C35C(&System_Decimal_TypeInfo, y);
    byte_41856E7 = 1;
  }
  if ( !y )
    sub_B2C434(this, y);
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
  if ( (byte_41856E8 & 1) == 0 )
  {
    this = (WarBoardAI___c__DisplayClass11_0_o *)sub_B2C35C(
                                                   &Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__,
                                                   x);
    byte_41856E8 = 1;
  }
  if ( !x || (this = (WarBoardAI___c__DisplayClass11_0_o *)v4->fields.notActionPieceHash) == 0LL )
    sub_B2C434(this, x);
  return System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
           (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)this,
           (BattleBuffData_BuffData_o *)x->fields.basePiece,
           (const MethodInfo_2D8C0E0 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
}