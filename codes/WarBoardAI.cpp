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

  if ( (byte_42AE033 & 1) == 0 )
  {
    sub_B52984(&WarBoardAIRoute_TypeInfo);
    byte_42AE033 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (WarBoardAIRoute_o *)sub_B52A54(WarBoardAIRoute_TypeInfo);
  WarBoardAIRoute___ctor(v5, npc, v6);
  this->fields.routeClass = v5;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B52A5C(0LL, aiId);
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
  System_Enum_o *v17; // x23
  System_Enum_o *v18; // x23
  __int64 v19; // x3
  WarBoardAIRoute_RouteData_c *klass; // x8
  unsigned __int64 v21; // x10
  IWarBoardAIRouteWaste_c **p_offset; // x11
  __int64 v23; // x0
  System_Enum_o *v24; // x23
  __int64 v25; // x3
  WarBoardAIRoute_RouteData_c *v26; // x8
  unsigned __int64 v27; // x10
  IWarBoardAIRouteWaste_c **v28; // x11
  __int64 v29; // x0
  System_Enum_o *v30; // x23
  __int64 v31; // x3
  WarBoardAIRoute_RouteData_c *v32; // x8
  int32_t actionIndex; // w23
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x3
  WarBoardAIRoute_RouteData_c *v38; // x8
  int32_t baseIndex; // w23
  unsigned __int64 v40; // x10
  IWarBoardAIRouteWaste_c **v41; // x11
  __int64 v42; // x0
  __int64 v43; // x3
  WarBoardAIRoute_RouteData_c *v44; // x8
  unsigned __int64 v45; // x10
  IWarBoardAIRouteWaste_c **v46; // x11
  __int64 v47; // x0
  __int64 v49; // [xsp+0h] [xbp-60h] BYREF
  int64_t flagNow; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42AE035 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
    sub_B52984(&WarBoardAIRoute_RouteData_Flag_TypeInfo);
    sub_B52984(&IWarBoardAIRouteWaste_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    byte_42AE035 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v4,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
  if ( !checkRoute )
LABEL_74:
    sub_B52A5C(notAction, v6);
  size = checkRoute->fields._size;
  if ( size < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( size <= v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
                        (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
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
          (const MethodInfo_2F27CE0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
        if ( PrevAiRoute_k__BackingField )
        {
          flagNow = v9->fields.flagNow;
          v17 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow);
          v49 = 2LL;
          notAction = j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v49);
          if ( !v17 )
            goto LABEL_74;
          notAction = System_Enum__HasFlag(v17, (System_Enum_o *)notAction, 0LL);
          if ( (notAction & 1) == 0 )
          {
            flagNow = v9->fields.flagNow;
            v18 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow);
            v49 = 0x10000000LL;
            notAction = j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v49);
            if ( !v18 )
              goto LABEL_74;
            notAction = System_Enum__HasFlag(v18, (System_Enum_o *)notAction, 0LL);
            if ( (notAction & 1) == 0 )
            {
              klass = PrevAiRoute_k__BackingField->klass;
              if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
              {
                v21 = 0LL;
                p_offset = (IWarBoardAIRouteWaste_c **)&klass->_1.interfaceOffsets->offset;
                while ( *(p_offset - 1) != IWarBoardAIRouteWaste_TypeInfo )
                {
                  ++v21;
                  p_offset += 2;
                  if ( v21 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                    goto LABEL_36;
                }
                v23 = (__int64)(&klass->vtable._2_GetHashCode.method + 2 * *(_DWORD *)p_offset);
              }
              else
              {
LABEL_36:
                v23 = sub_AEB880(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 2LL, v19);
              }
              flagNow = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v23)(
                          PrevAiRoute_k__BackingField,
                          *(_QWORD *)(v23 + 8));
              v24 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow);
              v49 = 2LL;
              notAction = j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v49);
              if ( !v24 )
                goto LABEL_74;
              notAction = System_Enum__HasFlag(v24, (System_Enum_o *)notAction, 0LL);
              if ( (notAction & 1) == 0 )
              {
                v26 = PrevAiRoute_k__BackingField->klass;
                if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                {
                  v27 = 0LL;
                  v28 = (IWarBoardAIRouteWaste_c **)&v26->_1.interfaceOffsets->offset;
                  while ( *(v28 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                  {
                    ++v27;
                    v28 += 2;
                    if ( v27 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                      goto LABEL_44;
                  }
                  v29 = (__int64)(&v26->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v28);
                }
                else
                {
LABEL_44:
                  v29 = sub_AEB880(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 2LL, v25);
                }
                flagNow = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v29)(
                            PrevAiRoute_k__BackingField,
                            *(_QWORD *)(v29 + 8));
                v30 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow);
                v49 = 0x10000000LL;
                notAction = j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v49);
                if ( !v30 )
                  goto LABEL_74;
                notAction = System_Enum__HasFlag(v30, (System_Enum_o *)notAction, 0LL);
                if ( (notAction & 1) == 0 )
                {
                  v32 = PrevAiRoute_k__BackingField->klass;
                  actionIndex = v9->fields.actionIndex;
                  if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                  {
                    v34 = 0LL;
                    v35 = &v32->_1.interfaceOffsets->offset;
                    while ( *((IWarBoardAIRouteWaste_c **)v35 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                    {
                      ++v34;
                      v35 += 4;
                      if ( v34 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                        goto LABEL_52;
                    }
                    v36 = (__int64)(&v32->vtable._0_Equals.method + 2 * *v35);
                  }
                  else
                  {
LABEL_52:
                    v36 = sub_AEB880(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 0LL, v31);
                  }
                  notAction = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v36)(
                                PrevAiRoute_k__BackingField,
                                *(_QWORD *)(v36 + 8));
                  if ( actionIndex == (_DWORD)notAction )
                  {
                    v38 = PrevAiRoute_k__BackingField->klass;
                    baseIndex = v9->fields.baseIndex;
                    if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                    {
                      v40 = 0LL;
                      v41 = (IWarBoardAIRouteWaste_c **)&v38->_1.interfaceOffsets->offset;
                      while ( *(v41 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                      {
                        ++v40;
                        v41 += 2;
                        if ( v40 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                          goto LABEL_59;
                      }
                      v42 = (__int64)(&v38->vtable._1_Finalize.method + 2 * *(_DWORD *)v41);
                    }
                    else
                    {
LABEL_59:
                      v42 = sub_AEB880(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 1LL, v37);
                    }
                    notAction = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v42)(
                                  PrevAiRoute_k__BackingField,
                                  *(_QWORD *)(v42 + 8));
                    if ( baseIndex == (_DWORD)notAction )
                    {
                      notAction = WarBoardAIRoute_RouteData__get_notAction(v9, 0LL);
                      if ( (notAction & 1) == 0 )
                      {
                        v44 = PrevAiRoute_k__BackingField->klass;
                        if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                        {
                          v45 = 0LL;
                          v46 = (IWarBoardAIRouteWaste_c **)&v44->_1.interfaceOffsets->offset;
                          while ( *(v46 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                          {
                            ++v45;
                            v46 += 2;
                            if ( v45 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                              goto LABEL_67;
                          }
                          v47 = (__int64)(&v44->vtable._3_ToString.method + 2 * *(_DWORD *)v46);
                        }
                        else
                        {
LABEL_67:
                          v47 = sub_AEB880(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 3LL, v43);
                        }
                        notAction = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v47)(
                                      PrevAiRoute_k__BackingField,
                                      *(_QWORD *)(v47 + 8));
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
    sub_B52A5C(0LL, method);
  WarBoardAIRoute__Clear(routeClass, method);
}


System_String_o *__fastcall WarBoardAI__ConvertForceGroupIndexToString(
        WarBoardAI_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *v8; // x21
  Il2CppObject *v9; // x20
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v13; // [xsp+8h] [xbp-28h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42AE038 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_23782/*"{0},{1},{2}"*/);
    byte_42AE038 = 1;
  }
  v14 = forceId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v13 = groupId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v12 = index;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return System_String__Format_44569380((System_String_o *)StringLiteral_23782/*"{0},{1},{2}"*/, v8, v9, v10, 0LL);
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
  WarBoardPieceData_o *Piece_22803728; // x0
  System_Int32_array *v28; // x21
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v29; // x22
  __int64 v30; // x23
  WarBoardAIRoute_RouteData_o *v31; // x8
  int32_t v32; // w8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v33; // x9

  v2 = this;
  if ( (byte_42AE036 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardAI_o *)sub_B52984(&WarBoardAIManager_TypeInfo);
    byte_42AE036 = 1;
  }
  executeRoute = v2->fields.executeRoute;
  if ( !executeRoute )
    return 0;
  size = executeRoute->fields._size;
  routeIndex = v2->fields.routeIndex;
  if ( size <= (int)routeIndex )
    return 0;
  if ( size <= (unsigned int)routeIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v6 = executeRoute->fields._items->m_Items[routeIndex];
  if ( !v6 )
    goto LABEL_55;
  v7 = v2->fields.executeRoute;
  if ( !v7 )
    goto LABEL_55;
  v8 = v2->fields.routeIndex;
  basePiece = v6->fields.basePiece;
  if ( v7->fields._size <= (unsigned int)v8 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
  this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v14 = v2->fields.executeRoute;
  if ( !v14 )
    goto LABEL_55;
  v15 = v2->fields.routeIndex;
  v16 = this;
  if ( v14->fields._size <= (unsigned int)v15 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  this = (WarBoardAI_o *)v21->fields._items->m_Items[v22];
  if ( !this )
LABEL_55:
    sub_B52A5C(this, method);
  this = (WarBoardAI_o *)WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)this, 4LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_46;
LABEL_34:
  v23 = v2->fields.executeRoute;
  if ( !v23 )
    goto LABEL_55;
  v24 = v2->fields.routeIndex;
  if ( v23->fields._size <= (unsigned int)v24 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v25 = v23->fields._items->m_Items[v24];
  if ( !v25 )
    goto LABEL_55;
  v26 = v25->fields.actionIndex;
  this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_55;
  this = *(WarBoardAI_o **)&this[10].fields.isEndPhase;
  if ( !this )
    goto LABEL_55;
  Piece_22803728 = WarBoardData__GetPiece_22803728((WarBoardData_o *)this, v26, 0LL);
  if ( Piece_22803728 && WarBoardPieceData__get_isServant(Piece_22803728, 0LL) )
  {
    this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_55;
    this = *(WarBoardAI_o **)&this[10].fields.isEndPhase;
    if ( !this )
      goto LABEL_55;
    v28 = WarBoardData__GetInRangeSquareIndecies((WarBoardData_o *)this, v26, 1, 0, 0LL);
    this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_55;
    WarBoardManager__DispPartyBuff((WarBoardManager_o *)this, v28, 0LL);
  }
LABEL_46:
  this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v29 = v2->fields.executeRoute;
  if ( !v29 )
    goto LABEL_55;
  v30 = v2->fields.routeIndex;
  if ( v29->fields._size <= (unsigned int)v30 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v31 = v29->fields._items->m_Items[v30];
  if ( !v31 || !this )
    goto LABEL_55;
  v12 = 1;
  this = (WarBoardAI_o *)WarBoardManager__PieceAction_18591828(
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

  if ( (byte_42AE037 & 1) == 0 )
  {
    sub_B52984(&System_Decimal_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Sum_Decimal___);
    sub_B52984(&Method_System_Func_Decimal__Decimal___ctor__);
    sub_B52984(&System_Func_Decimal__Decimal__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Decimal__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_Decimal__get_Item__);
    sub_B52984(&System_Math_TypeInfo);
    sub_B52984(&Method_WarBoardAI___c__GetRandomIndex_b__14_0__);
    sub_B52984(&WarBoardAI___c_TypeInfo);
    byte_42AE037 = 1;
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
    _9__14_0 = (System_Func_Decimal__Decimal__o *)sub_B52A54(System_Func_Decimal__Decimal__TypeInfo);
    System_Func_Decimal__Decimal____ctor(
      _9__14_0,
      v7,
      Method_WarBoardAI___c__GetRandomIndex_b__14_0__,
      (const MethodInfo_278461C *)Method_System_Func_Decimal__Decimal___ctor__);
    v8 = WarBoardAI___c_TypeInfo->static_fields;
    v8->__9__14_0 = _9__14_0;
    sub_B52920(
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
          (const MethodInfo_1B6DAD0 *)Method_System_Linq_Enumerable_Sum_Decimal___);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v16 = System_Math__Floor(v15, 0LL);
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v17 = System_Decimal__op_Explicit_44453384(v16, 0LL);
  v18 = UnityEngine_Random__Range(0.0, v17, 0LL);
  v19 = System_Decimal__op_Explicit(v18, 0LL);
  if ( !weightTable )
    sub_B52A5C(*(_QWORD *)&v19.fields.flags, *(_QWORD *)&v19.fields.lo);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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

  if ( (byte_42AE034 & 1) == 0 )
  {
    sub_B52984(&WarBoardAI__Think_d__11_TypeInfo);
    byte_42AE034 = 1;
  }
  v3 = sub_B52A54(WarBoardAI__Think_d__11_TypeInfo);
  WarBoardAI__Think_d__11___ctor((WarBoardAI__Think_d__11_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
    sub_B52A5C(0LL, aiId);
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

  if ( (byte_42AE039 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____68621168);
    sub_B52984(&Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__);
    sub_B52984(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    sub_B52984(&Method_WarBoardAI___c__Think_b__11_7__);
    sub_B52984(&WarBoardAI___c_TypeInfo);
    byte_42AE039 = 1;
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
    _9__11_7 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B52A54(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    System_Func_WarBoardAIRoute_RouteData__float____ctor(
      _9__11_7,
      v9,
      Method_WarBoardAI___c__Think_b__11_7__,
      (const MethodInfo_2BCAFB0 *)Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__);
    v10 = WarBoardAI___c_TypeInfo->static_fields;
    v10->__9__11_7 = _9__11_7;
    sub_B52920(
      (BattleServantConfConponent_o *)&v10->__9__11_7,
      (System_Int32_array **)_9__11_7,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v19 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__28760892(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__float__o *)_9__11_7,
          (const MethodInfo_1B6DB3C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____68621168);
  if ( !routeClass || (npcData = routeClass->fields.npcData) == 0LL )
    sub_B52A5C(v17, v18);
  return (float)((float)npcData->fields.lowerThinkingValue / 100.0) <= v19;
}


int32_t __fastcall WarBoardAI__get_ForceId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_B52A5C(this, method);
  return routeClass->fields.forceId;
}


int32_t __fastcall WarBoardAI__get_GroupId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_B52A5C(this, method);
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
  WarBoardAI__Think_d__11_o *v8; // x27
  struct WarBoardAI_o *_4__this; // x19
  WarBoardAIRoute_o *routeClass; // x20
  System_Collections_Generic_Dictionary_int__uint__o *placePieceData; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x22
  System_Int32_array **RouteData; // x0
  BattleServantConfConponent_o *p__2__current; // x27
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  bool v21; // w20
  WarBoardAI__Think_d__11_o *availableRouteList_5__4; // x26
  struct WarBoardAIRoute_o *v23; // x8
  System_Int32_array **allRouteList; // x1
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList_5__2; // x8
  __int64 v26; // x21
  struct WarBoardAIRoute_o *v27; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *v28; // x22
  int32_t pickValue; // w8
  BalanceConfig_c *v30; // x0
  _BOOL4 IsWarBoardAiCalcEvalSum; // w9
  WarBoardAI___c_c *v32; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_0; // x23
  Il2CppObject *v35; // x24
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct WarBoardAI___c_StaticFields *v42; // x0
  BattleServantConfConponent_o *p__9__11_0; // x0
  struct WarBoardAI___c_StaticFields *v44; // x8
  Il2CppObject *v45; // x24
  struct WarBoardAI___c_StaticFields *v46; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v48; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x24
  WarBoardAI__Think_d__11_o **p_availableRouteList_5__4; // x23
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v57; // x25
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **v64; // x24
  __int64 v65; // x8
  unsigned __int64 v66; // x20
  int32_t pickValue_5__3; // w28
  BattleServantConfConponent_o *v68; // x25
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v69; // x26
  __int64 v70; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *klass; // x27
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v78; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x0
  System_Int32_array **v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *evalValueSortList_5__5; // x8
  System_Collections_Generic_List_Decimal__o *v89; // x21
  Il2CppClass *v90; // x23
  int v91; // w27
  int v92; // w19
  int namespaze; // w8
  int v94; // w24
  char v95; // w25
  char v96; // w26
  Il2CppClass *v97; // x8
  WarBoardPieceData_o *monitor; // x0
  bool isMaster; // w0
  _BOOL8 v100; // x0
  __int64 v101; // x1
  Il2CppObject *current; // x23
  int v103; // w27
  int v104; // w8
  WarBoardAI_o *v105; // x9
  struct WarBoardAIRoute_o *v106; // x8
  float v107; // s12
  float BestMagnification; // s8
  float LowestMagnification; // s0
  int value; // w21
  float ImmobilityMagnification; // s0
  _BOOL8 v112; // x0
  __int64 v113; // x1
  WarBoardTacticalTrendEntity_o *v114; // x23
  int v115; // w8
  float v116; // s8
  BalanceConfig_c *v117; // x0
  System_Decimal_o v118; // kr00_16
  Il2CppClass *v119; // x8
  WarBoardAI___c_c *v120; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v121; // x25
  struct WarBoardAI___c_StaticFields *v122; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_8; // x26
  int v124; // w21
  System_Decimal_o v125; // kr10_16
  Il2CppClass *v126; // x8
  WarBoardAI___c_c *v127; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v128; // x25
  struct WarBoardAI___c_StaticFields *v129; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_9; // x26
  int v131; // w21
  Il2CppObject *v132; // x27
  struct WarBoardAI___c_StaticFields *v133; // x0
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  System_Decimal_o v140; // kr20_16
  System_Decimal_o v141; // kr30_16
  __int64 v142; // x2
  __int64 v143; // x4
  Il2CppObject *v144; // x27
  struct WarBoardAI___c_StaticFields *v145; // x0
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  System_Decimal_o v152; // kr40_16
  Il2CppClass *v153; // x8
  __int64 v154; // x8
  int v155; // w21
  int32_t v156; // w27
  System_Decimal_o v157; // kr70_16
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  System_Int32_array **v164; // x1
  System_Collections_Generic_IEnumerable_TSource__o *executeRoute; // x21
  WarBoardAI___c_c *v166; // x0
  struct WarBoardAI___c_StaticFields *v167; // x8
  System_Func_WarBoardAIRoute_RouteData__float__o *_9__11_3; // x22
  Il2CppObject *v169; // x23
  struct WarBoardAI___c_StaticFields *v170; // x0
  System_String_array **v171; // x2
  System_String_array **v172; // x3
  System_Boolean_array **v173; // x4
  System_Int32_array **v174; // x5
  System_Int32_array *v175; // x6
  System_Int32_array *v176; // x7
  System_Int32_array **v177; // x0
  BattleServantConfConponent_o *v178; // x27
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  int v185; // w8
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v186; // x21
  System_String_array **v187; // x2
  System_String_array **v188; // x3
  System_Boolean_array **v189; // x4
  System_Int32_array **v190; // x5
  System_Int32_array *v191; // x6
  System_Int32_array *v192; // x7
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v193; // x22
  int v194; // w19
  __int64 v195; // x23
  __int64 v196; // x22
  BattleServantConfConponent_o *p_evalValueSortList_5__5; // x27
  System_String_array **v198; // x2
  System_String_array **v199; // x3
  System_Boolean_array **v200; // x4
  System_Int32_array **v201; // x5
  System_Int32_array *v202; // x6
  System_Int32_array *v203; // x7
  System_Int32_array **v204; // x0
  System_String_array **v205; // x2
  System_String_array **v206; // x3
  System_Boolean_array **v207; // x4
  System_Int32_array **v208; // x5
  System_Int32_array *v209; // x6
  System_Int32_array *v210; // x7
  System_Int32_array **v211; // x0
  System_String_array **v212; // x2
  System_String_array **v213; // x3
  System_Boolean_array **v214; // x4
  System_Int32_array **v215; // x5
  System_Int32_array *v216; // x6
  System_Int32_array *v217; // x7
  System_Int32_array **v218; // x0
  System_String_array **v219; // x2
  System_String_array **v220; // x3
  System_Boolean_array **v221; // x4
  System_Int32_array **v222; // x5
  System_Int32_array *v223; // x6
  System_Int32_array *v224; // x7
  System_Int32_array **v225; // x0
  System_String_array **v226; // x2
  System_String_array **v227; // x3
  System_Boolean_array **v228; // x4
  System_Int32_array **v229; // x5
  System_Int32_array *v230; // x6
  System_Int32_array *v231; // x7
  __int64 v233; // x0
  WarBoardAI__Think_d__11_o *v234; // [xsp+8h] [xbp-118h]
  WarBoardAI__Think_d__11_o *v235; // [xsp+8h] [xbp-118h]
  System_Collections_Generic_List_Decimal__o *v236; // [xsp+10h] [xbp-110h]
  WarBoardAI_o *v237; // [xsp+20h] [xbp-100h]
  WarBoardAI__Think_d__11_o **v238; // [xsp+28h] [xbp-F8h]
  Il2CppObject *object; // [xsp+30h] [xbp-F0h]
  _BYTE v240[32]; // [xsp+38h] [xbp-E8h] BYREF
  int v241; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v242; // [xsp+60h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v243; // [xsp+80h] [xbp-A0h] BYREF
  System_Decimal_o v244; // 0:x1.16
  System_Decimal_o v245; // 0:x2.16
  System_Decimal_o v246; // 0:x2.16

  v8 = this;
  if ( (byte_42AE5C8 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&System_Decimal_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
    sub_B52984(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_B52984(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____68621168);
    sub_B52984(&Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
    sub_B52984(&Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__get_Current__);
    sub_B52984(&Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
    sub_B52984(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
    sub_B52984(&Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__);
    sub_B52984(&Method_System_Func_List_WarBoardAIRoute_RouteData___bool___ctor__);
    sub_B52984(&Method_System_Func_List_WarBoardAIRoute_RouteData___Decimal___ctor__);
    sub_B52984(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_B52984(&System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
    sub_B52984(&System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
    sub_B52984(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_B52984(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
    sub_B52984(&System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Decimal__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_Decimal___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    sub_B52984(&System_Collections_Generic_List_Decimal__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
    sub_B52984(&Method_WarBoardAI___c__Think_b__11_0__);
    sub_B52984(&Method_WarBoardAI___c__Think_b__11_1__);
    sub_B52984(&Method_WarBoardAI___c__Think_b__11_3__);
    sub_B52984(&Method_WarBoardAI___c__Think_b__11_8__);
    sub_B52984(&Method_WarBoardAI___c__Think_b__11_9__);
    sub_B52984(&Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__);
    sub_B52984(&WarBoardAI___c__DisplayClass11_0_TypeInfo);
    sub_B52984(&WarBoardAI___c_TypeInfo);
    this = (WarBoardAI__Think_d__11_o *)sub_B52984(&Method_WarBoardAI__Think_b__11_2__);
    byte_42AE5C8 = 1;
  }
  memset(&v243, 0, sizeof(v243));
  memset(&v242, 0, sizeof(v242));
  v241 = 0;
  _4__this = v8->fields.__4__this;
  v237 = _4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
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
      v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v12,
        (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
      RouteData = (System_Int32_array **)WarBoardAIRoute__CreateRouteData(
                                           routeClass,
                                           placePieceData,
                                           0,
                                           (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v12,
                                           0LL);
      v8->fields.__2__current = (Il2CppObject *)RouteData;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B52920(p__2__current, RouteData, v15, v16, v17, v18, v19, v20);
      v21 = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return v21;
    case 1:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_197;
      v23 = _4__this->fields.routeClass;
      if ( !v23 )
        goto LABEL_197;
      allRouteList = (System_Int32_array **)v23->fields.allRouteList;
      v8->fields._allRouteList_5__2 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)allRouteList;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields._allRouteList_5__2, allRouteList, v2, v3, v4, v5, v6, v7);
      allRouteList_5__2 = v8->fields._allRouteList_5__2;
      if ( !allRouteList_5__2 )
        goto LABEL_197;
      if ( !allRouteList_5__2->fields._size )
      {
        v21 = 1;
        v240[0] = 1;
        v225 = (System_Int32_array **)j_il2cpp_value_box_0(bool_TypeInfo, v240);
        v8->fields.__2__current = (Il2CppObject *)v225;
        v178 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B52920(v178, v225, v226, v227, v228, v229, v230, v231);
        v185 = 2;
        goto LABEL_202;
      }
LABEL_16:
      v26 = sub_B52A54(WarBoardAI___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v26, 0LL);
      if ( !_4__this )
        goto LABEL_197;
      v27 = _4__this->fields.routeClass;
      if ( !v27 )
        goto LABEL_197;
      v28 = v8->fields._allRouteList_5__2;
      if ( !v28 )
        goto LABEL_197;
      pickValue = v27->fields.pickValue;
      if ( pickValue >= v28->fields._size )
        pickValue = v28->fields._size;
      v8->fields._pickValue_5__3 = pickValue;
      if ( !pickValue )
        v8->fields._pickValue_5__3 = v28->fields._size;
      v30 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v30 = BalanceConfig_TypeInfo;
        v28 = v8->fields._allRouteList_5__2;
      }
      IsWarBoardAiCalcEvalSum = v30->static_fields->IsWarBoardAiCalcEvalSum;
      v32 = WarBoardAI___c_TypeInfo;
      if ( IsWarBoardAiCalcEvalSum )
      {
        if ( (WORD1(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v32 = WarBoardAI___c_TypeInfo;
        }
        static_fields = v32->static_fields;
        _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)static_fields->__9__11_0;
        if ( !_9__11_0 )
        {
          if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v32);
            static_fields = WarBoardAI___c_TypeInfo->static_fields;
          }
          v35 = (Il2CppObject *)static_fields->__9;
          _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B52A54(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
          System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
            _9__11_0,
            v35,
            Method_WarBoardAI___c__Think_b__11_0__,
            (const MethodInfo_2BC9880 *)Method_System_Func_List_WarBoardAIRoute_RouteData___Decimal___ctor__);
          v42 = WarBoardAI___c_TypeInfo->static_fields;
          v42->__9__11_0 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
          p__9__11_0 = (BattleServantConfConponent_o *)&v42->__9__11_0;
LABEL_45:
          sub_B52920(p__9__11_0, (System_Int32_array **)_9__11_0, v36, v37, v38, v39, v40, v41);
        }
      }
      else
      {
        if ( (WORD1(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v32 = WarBoardAI___c_TypeInfo;
        }
        v44 = v32->static_fields;
        _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)v44->__9__11_1;
        if ( !_9__11_0 )
        {
          if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v32);
            v44 = WarBoardAI___c_TypeInfo->static_fields;
          }
          v45 = (Il2CppObject *)v44->__9;
          _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B52A54(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
          System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
            _9__11_0,
            v45,
            Method_WarBoardAI___c__Think_b__11_1__,
            (const MethodInfo_2BC9880 *)Method_System_Func_List_WarBoardAIRoute_RouteData___Decimal___ctor__);
          v46 = WarBoardAI___c_TypeInfo->static_fields;
          v46->__9__11_1 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
          p__9__11_0 = (BattleServantConfConponent_o *)&v46->__9__11_1;
          goto LABEL_45;
        }
      }
      v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Decimal_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                                                                   (System_Func_TSource__TKey__o *)_9__11_0,
                                                                   (const MethodInfo_1B66668 *)Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
      v48 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
              v47,
              (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v49,
        (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
      v8->fields._availableRouteList_5__4 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v49;
      p_availableRouteList_5__4 = (WarBoardAI__Think_d__11_o **)&v8->fields._availableRouteList_5__4;
      sub_B52920(
        (BattleServantConfConponent_o *)&v8->fields._availableRouteList_5__4,
        (System_Int32_array **)v49,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
      v57 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
      System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
        v57,
        (const MethodInfo_24E0024 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !v26 )
        goto LABEL_197;
      *(_QWORD *)(v26 + 16) = v57;
      v64 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **)(v26 + 16);
      v234 = v8;
      sub_B52920((BattleServantConfConponent_o *)(v26 + 16), (System_Int32_array **)v57, v58, v59, v60, v61, v62, v63);
      if ( !v48 )
        goto LABEL_197;
      v65 = *(_QWORD *)&v48->max_length;
      if ( (int)v65 >= 1 )
      {
        v66 = 0LL;
        pickValue_5__3 = v8->fields._pickValue_5__3;
        v238 = (WarBoardAI__Think_d__11_o **)&v8->fields._availableRouteList_5__4;
        v68 = (BattleServantConfConponent_o *)(v26 + 24);
        while ( 1 )
        {
          if ( v66 >= (unsigned int)v65 )
            goto LABEL_204;
          v69 = v48->m_Items[v66];
          this = (WarBoardAI__Think_d__11_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v69, 0LL);
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
            if ( !v69 )
              goto LABEL_197;
            if ( !LODWORD(v69->fields.msgIds) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
            v70 = *(_QWORD *)(*(_QWORD *)&v69->fields.groupId + 32LL);
            if ( !v70 )
              goto LABEL_197;
            if ( *(_DWORD *)(v70 + 24) == *(_DWORD *)(v70 + 28) )
            {
              if ( !LODWORD(v69->fields.msgIds) )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
              if ( !*v64 )
                goto LABEL_197;
              this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                                                    *v64,
                                                    *(WarBoardAIRoute_RouteData_o **)(v70 + 48),
                                                    (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
              goto LABEL_77;
            }
            klass = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v68->klass;
            if ( !v68->klass )
            {
              klass = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                klass,
                (Il2CppObject *)v26,
                Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__,
                (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
              *(_QWORD *)(v26 + 24) = klass;
              p_availableRouteList_5__4 = v238;
              sub_B52920(v68, (System_Int32_array **)klass, v72, v73, v74, v75, v76, v77);
            }
            this = (WarBoardAI__Think_d__11_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                  (System_Collections_Generic_List_T__o *)v69,
                                                  (System_Func_T__bool__o *)klass,
                                                  (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
            if ( ((unsigned __int8)this & 1) == 0 )
              break;
          }
LABEL_77:
          LODWORD(v65) = v48->max_length;
          if ( (__int64)++v66 >= (int)v65 )
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
                                                    (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v69,
                                                    0LL),
              ((unsigned __int8)this & 1) == 0) )
        {
          this = *p_availableRouteList_5__4;
          if ( !*p_availableRouteList_5__4 )
            goto LABEL_197;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v69,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
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
      v8 = v234;
      if ( SLODWORD(availableRouteList_5__4->fields.__2__current) <= 0 )
      {
        v21 = 1;
        v240[0] = 1;
        v218 = (System_Int32_array **)j_il2cpp_value_box_0(bool_TypeInfo, v240);
        v234->fields.__2__current = (Il2CppObject *)v218;
        v178 = (BattleServantConfConponent_o *)&v234->fields.__2__current;
        sub_B52920((BattleServantConfConponent_o *)&v234->fields.__2__current, v218, v219, v220, v221, v222, v223, v224);
        v185 = 3;
        goto LABEL_202;
      }
LABEL_80:
      v78 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v78,
        (Il2CppObject *)_4__this,
        Method_WarBoardAI__Think_b__11_2__,
        (const MethodInfo_2BC90BC *)Method_System_Func_List_WarBoardAIRoute_RouteData___bool___ctor__);
      v79 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)availableRouteList_5__4,
              (System_Func_TSource__bool__o *)v78,
              (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
      v80 = System_Linq_Enumerable__Take_BattleData_CommandHistory_(
              v79,
              v8->fields._pickValue_5__3,
              (const MethodInfo_1B6DC00 *)Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
      v81 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                     v80,
                                     (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v8->fields._evalValueSortList_5__5 = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)v81;
      object = (Il2CppObject *)&v8->fields._evalValueSortList_5__5;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields._evalValueSortList_5__5, v81, v82, v83, v84, v85, v86, v87);
      evalValueSortList_5__5 = v8->fields._evalValueSortList_5__5;
      if ( !evalValueSortList_5__5 )
        goto LABEL_197;
      if ( !*(_QWORD *)&evalValueSortList_5__5->max_length )
      {
        v21 = 1;
        v240[0] = 1;
        v211 = (System_Int32_array **)j_il2cpp_value_box_0(bool_TypeInfo, v240);
        v8->fields.__2__current = (Il2CppObject *)v211;
        v178 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B52920(v178, v211, v212, v213, v214, v215, v216, v217);
        v185 = 4;
LABEL_202:
        *(_DWORD *)&v178[-1].fields.isOpenAfter = v185;
        return v21;
      }
LABEL_82:
      v235 = v8;
      v89 = (System_Collections_Generic_List_Decimal__o *)sub_B52A54(System_Collections_Generic_List_Decimal__TypeInfo);
      System_Collections_Generic_List_Decimal____ctor(
        v89,
        (const MethodInfo_304A1CC *)Method_System_Collections_Generic_List_Decimal___ctor__);
      v90 = object->klass;
      if ( !object->klass )
        goto LABEL_197;
      v91 = 0;
      v92 = 0;
      v236 = v89;
      while ( 1 )
      {
        namespaze = (int)v90->_1.namespaze;
        if ( v92 >= namespaze )
          break;
        if ( v92 >= (unsigned int)namespaze )
          goto LABEL_204;
        this = (WarBoardAI__Think_d__11_o *)*((_QWORD *)&v90->_1.byval_arg.data + v92);
        if ( !this )
          goto LABEL_197;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v240,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
        v94 = 0;
        v95 = 0;
        v96 = 0;
        v243 = *(System_Collections_Generic_List_Enumerator_T__o *)v240;
        while ( 1 )
        {
          v100 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v243,
                   (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
          if ( !v100 )
            break;
          current = v243.fields.current;
          if ( !v243.fields.current )
            sub_B52A5C(v100, v101);
          v97 = v243.fields.current[1].klass;
          if ( ((unsigned __int8)v97 & 4) != 0 )
          {
            monitor = (WarBoardPieceData_o *)v243.fields.current[3].monitor;
            if ( monitor )
            {
              isMaster = WarBoardPieceData__get_isMaster(monitor, 0LL);
              v97 = current[1].klass;
              v95 |= isMaster;
            }
            v96 = 1;
          }
          v94 |= ((unsigned __int64)v97 >> 3) & 1;
        }
        *(_DWORD *)&v240[4 * v91 + 24] = 849;
        v103 = ++v241;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v243,
          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
        if ( v103 )
        {
          v104 = v103 - 1;
          v105 = v237;
          if ( *(_DWORD *)&v240[4 * v103 + 20] == 849 )
          {
            --v103;
            v241 = v104;
            if ( !v237 )
              goto LABEL_197;
            goto LABEL_102;
          }
        }
        else
        {
          v105 = v237;
        }
        if ( !v105 )
          goto LABEL_197;
LABEL_102:
        v106 = v105->fields.routeClass;
        if ( !v106 )
          goto LABEL_197;
        this = (WarBoardAI__Think_d__11_o *)v106->fields.tacticalTrendList;
        if ( !this )
          goto LABEL_197;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v240,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
        v107 = 0.0;
        v242 = *(System_Collections_Generic_List_Enumerator_T__o *)v240;
        while ( 1 )
        {
          v112 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v242,
                   (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
          if ( !v112 )
            break;
          v114 = (WarBoardTacticalTrendEntity_o *)v242.fields.current;
          if ( !v242.fields.current )
            sub_B52A5C(v112, v113);
          switch ( HIDWORD(v242.fields.current[1].klass) )
          {
            case 0:
              if ( v92 < SLODWORD(v242.fields.current[1].monitor) )
              {
                BestMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(
                                      (WarBoardTacticalTrendEntity_o *)v242.fields.current,
                                      0LL);
                LowestMagnification = WarBoardTacticalTrendEntity__GetLowestMagnification(v114, 0LL);
                value = v114->fields.value;
                ImmobilityMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(v114, 0LL)
                                        - (float)((float)((float)(BestMagnification - LowestMagnification)
                                                        / (float)((float)value + -1.0))
                                                * (float)v92);
                goto LABEL_114;
              }
              break;
            case 1:
              if ( (v96 & 1) != 0 )
                goto LABEL_113;
              break;
            case 4:
              if ( (v95 & 1) != 0 )
                goto LABEL_113;
              break;
            case 5:
              if ( (v94 & 1) != 0 )
              {
LABEL_113:
                ImmobilityMagnification = WarBoardTacticalTrendEntity__GetImmobilityMagnification(
                                            (WarBoardTacticalTrendEntity_o *)v242.fields.current,
                                            0LL);
LABEL_114:
                v107 = v107 + ImmobilityMagnification;
              }
              break;
            default:
              continue;
          }
        }
        *(_DWORD *)&v240[4 * v103 + 24] = 1074;
        v91 = ++v241;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v242,
          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
        if ( v91 )
        {
          v115 = v91 - 1;
          if ( *(_DWORD *)&v240[4 * v91 + 20] == 1074 )
          {
            --v91;
            v241 = v115;
          }
        }
        if ( v107 == 0.0 )
          v116 = 1.0;
        else
          v116 = v107;
        v117 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v117 = BalanceConfig_TypeInfo;
        }
        if ( v117->static_fields->IsWarBoardAiCalcEvalSum )
        {
          if ( (WORD1(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v118 = System_Decimal__op_Explicit(v116, 0LL);
          method = *(const MethodInfo **)&v118.fields.lo;
          this = *(WarBoardAI__Think_d__11_o **)&v118.fields.flags;
          v119 = object->klass;
          if ( !object->klass )
            goto LABEL_197;
          if ( (unsigned int)v92 >= LODWORD(v119->_1.namespaze) )
            goto LABEL_204;
          v120 = WarBoardAI___c_TypeInfo;
          v121 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)&v119->_1.byval_arg.data + v92);
          if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v120 = WarBoardAI___c_TypeInfo;
          }
          v122 = v120->static_fields;
          _9__11_8 = v122->__9__11_8;
          if ( !_9__11_8 )
          {
            if ( (BYTE3(v120->vtable._0_Equals.methodPtr) & 4) != 0 )
            {
              v124 = v91;
              if ( !v120->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v120);
                v122 = WarBoardAI___c_TypeInfo->static_fields;
              }
            }
            else
            {
              v124 = v91;
            }
            v132 = (Il2CppObject *)v122->__9;
            _9__11_8 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B52A54(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
            System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
              _9__11_8,
              v132,
              Method_WarBoardAI___c__Think_b__11_8__,
              (const MethodInfo_2BC9880 *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
            v133 = WarBoardAI___c_TypeInfo->static_fields;
            v133->__9__11_8 = _9__11_8;
            sub_B52920(
              (BattleServantConfConponent_o *)&v133->__9__11_8,
              (System_Int32_array **)_9__11_8,
              v134,
              v135,
              v136,
              v137,
              v138,
              v139);
            v91 = v124;
          }
          v140 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__28760820(
                   v121,
                   (System_Func_TSource__Decimal__o *)_9__11_8,
                   (const MethodInfo_1B6DAF4 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
          if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v141 = System_Decimal__op_Multiply(v118, v140, 0LL);
          method = *(const MethodInfo **)&v141.fields.lo;
          v143 = *(unsigned __int128 *)&v141 >> 64;
          this = (WarBoardAI__Think_d__11_o *)*(_OWORD *)&v141;
          v142 = *(_QWORD *)&v141.fields.flags;
        }
        else
        {
          if ( (WORD1(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v125 = System_Decimal__op_Explicit(v116, 0LL);
          method = *(const MethodInfo **)&v125.fields.lo;
          this = *(WarBoardAI__Think_d__11_o **)&v125.fields.flags;
          v126 = object->klass;
          if ( !object->klass )
            goto LABEL_197;
          if ( (unsigned int)v92 >= LODWORD(v126->_1.namespaze) )
            goto LABEL_204;
          v127 = WarBoardAI___c_TypeInfo;
          v128 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)&v126->_1.byval_arg.data + v92);
          if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v127 = WarBoardAI___c_TypeInfo;
          }
          v129 = v127->static_fields;
          _9__11_9 = v129->__9__11_9;
          if ( !_9__11_9 )
          {
            if ( (BYTE3(v127->vtable._0_Equals.methodPtr) & 4) != 0 )
            {
              v131 = v91;
              if ( !v127->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v127);
                v129 = WarBoardAI___c_TypeInfo->static_fields;
              }
            }
            else
            {
              v131 = v91;
            }
            v144 = (Il2CppObject *)v129->__9;
            _9__11_9 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B52A54(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
            System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
              _9__11_9,
              v144,
              Method_WarBoardAI___c__Think_b__11_9__,
              (const MethodInfo_2BC9880 *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
            v145 = WarBoardAI___c_TypeInfo->static_fields;
            v145->__9__11_9 = _9__11_9;
            sub_B52920(
              (BattleServantConfConponent_o *)&v145->__9__11_9,
              (System_Int32_array **)_9__11_9,
              v146,
              v147,
              v148,
              v149,
              v150,
              v151);
            v91 = v131;
          }
          v152 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__28760820(
                   v128,
                   (System_Func_TSource__Decimal__o *)_9__11_9,
                   (const MethodInfo_1B6DAF4 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
          method = *(const MethodInfo **)&v152.fields.lo;
          this = *(WarBoardAI__Think_d__11_o **)&v152.fields.flags;
          v153 = object->klass;
          if ( !object->klass )
            goto LABEL_197;
          if ( (unsigned int)v92 >= LODWORD(v153->_1.namespaze) )
            goto LABEL_204;
          v154 = *((_QWORD *)&v153->_1.byval_arg.data + v92);
          if ( !v154 )
            goto LABEL_197;
          v155 = v91;
          v156 = *(_DWORD *)(v154 + 24);
          if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v245 = System_Decimal__op_Implicit_44452908(v156, 0LL);
          v246 = System_Decimal__op_Division(v152, v245, 0LL);
          v157 = System_Decimal__op_Multiply(v125, v246, 0LL);
          method = *(const MethodInfo **)&v157.fields.lo;
          v143 = *(unsigned __int128 *)&v157 >> 64;
          this = (WarBoardAI__Think_d__11_o *)*(_OWORD *)&v157;
          v142 = *(_QWORD *)&v157.fields.flags;
          v91 = v155;
        }
        v89 = v236;
        if ( v236 )
        {
          *(_QWORD *)&v244.fields.flags = v142;
          *(_QWORD *)&v244.fields.lo = v143;
          System_Collections_Generic_List_Decimal___Add(
            v236,
            v244,
            (const MethodInfo_304AF50 *)Method_System_Collections_Generic_List_Decimal__Add__);
          ++v92;
          v90 = object->klass;
          if ( object->klass )
            continue;
        }
        goto LABEL_197;
      }
      _4__this = v237;
      if ( !v237 )
        goto LABEL_197;
      this = (WarBoardAI__Think_d__11_o *)WarBoardAI__GetRandomIndex(v237, v89, 0LL);
      v8 = v235;
      if ( (unsigned int)this >= LODWORD(v90->_1.namespaze) )
      {
LABEL_204:
        v233 = sub_B52A88(this);
        sub_B52A28(v233, 0LL);
      }
      v164 = (System_Int32_array **)*((_QWORD *)&v90->_1.byval_arg.data + (int)this);
      v237->fields.executeRoute = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v164;
      sub_B52920((BattleServantConfConponent_o *)&v237->fields.executeRoute, v164, v158, v159, v160, v161, v162, v163);
      executeRoute = (System_Collections_Generic_IEnumerable_TSource__o *)v237->fields.executeRoute;
      v166 = WarBoardAI___c_TypeInfo;
      if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
        v166 = WarBoardAI___c_TypeInfo;
      }
      v167 = v166->static_fields;
      _9__11_3 = v167->__9__11_3;
      if ( !_9__11_3 )
      {
        if ( (BYTE3(v166->vtable._0_Equals.methodPtr) & 4) != 0 && !v166->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v166);
          v167 = WarBoardAI___c_TypeInfo->static_fields;
        }
        v169 = (Il2CppObject *)v167->__9;
        _9__11_3 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B52A54(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
        System_Func_WarBoardAIRoute_RouteData__float____ctor(
          _9__11_3,
          v169,
          Method_WarBoardAI___c__Think_b__11_3__,
          (const MethodInfo_2BCAFB0 *)Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__);
        v170 = WarBoardAI___c_TypeInfo->static_fields;
        v170->__9__11_3 = _9__11_3;
        sub_B52920(
          (BattleServantConfConponent_o *)&v170->__9__11_3,
          (System_Int32_array **)_9__11_3,
          v171,
          v172,
          v173,
          v174,
          v175,
          v176);
        _4__this = v237;
      }
      System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__28760892(
        executeRoute,
        (System_Func_TSource__float__o *)_9__11_3,
        (const MethodInfo_1B6DB3C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____68621168);
      if ( WarBoardAI__CheckWasteRoute(_4__this, _4__this->fields.executeRoute, 0LL) )
      {
        v21 = 1;
        v240[0] = 1;
        v177 = (System_Int32_array **)j_il2cpp_value_box_0(bool_TypeInfo, v240);
        v235->fields.__2__current = (Il2CppObject *)v177;
        v178 = (BattleServantConfConponent_o *)&v235->fields.__2__current;
        sub_B52920((BattleServantConfConponent_o *)&v235->fields.__2__current, v177, v179, v180, v181, v182, v183, v184);
        v185 = 5;
        goto LABEL_202;
      }
LABEL_182:
      v186 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
      System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
        v186,
        (const MethodInfo_24E0024 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !_4__this || (v193 = _4__this->fields.executeRoute) == 0LL )
LABEL_197:
        sub_B52A5C(this, method);
      v194 = v193->fields._size - 1;
      if ( v194 >= 0 )
      {
        v195 = 8LL * v194 + 32;
        while ( 1 )
        {
          if ( v193->fields._size <= (unsigned int)v194 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v196 = *(__int64 *)((char *)&v193->fields._items->obj.klass + v195);
          if ( !v196 )
            goto LABEL_197;
          method = *(const MethodInfo **)(v196 + 48);
          if ( method )
          {
            if ( !v186 )
              goto LABEL_197;
            this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
                                                  (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)v186,
                                                  (BattleBuffData_BuffData_o *)method,
                                                  (const MethodInfo_24E06A8 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
            if ( ((unsigned __int8)this & 1) == 0 && *(_DWORD *)(v196 + 24) != *(_DWORD *)(v196 + 28) )
            {
              System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                v186,
                *(WarBoardAIRoute_RouteData_o **)(v196 + 48),
                (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
              this = *(WarBoardAI__Think_d__11_o **)(v196 + 48);
              if ( !this )
                goto LABEL_197;
              WarBoardPieceData__SetPrevAiRoute((WarBoardPieceData_o *)this, (WarBoardAIRoute_RouteData_o *)v196, 0LL);
            }
          }
          if ( (--v194 & 0x80000000) != 0 )
            break;
          v195 -= 8LL;
          v193 = v237->fields.executeRoute;
          if ( !v193 )
            goto LABEL_197;
        }
      }
      v8->fields._availableRouteList_5__4 = 0LL;
      sub_B52920(
        (BattleServantConfConponent_o *)&v8->fields._availableRouteList_5__4,
        0LL,
        v187,
        v188,
        v189,
        v190,
        v191,
        v192);
      v8->fields._evalValueSortList_5__5 = 0LL;
      p_evalValueSortList_5__5 = (BattleServantConfConponent_o *)&v8->fields._evalValueSortList_5__5;
      sub_B52920(p_evalValueSortList_5__5, 0LL, v198, v199, v200, v201, v202, v203);
      v240[0] = 0;
      v204 = (System_Int32_array **)j_il2cpp_value_box_0(bool_TypeInfo, v240);
      p_evalValueSortList_5__5[-1].fields.data = (struct BattleData_o *)v204;
      sub_B52920(
        (BattleServantConfConponent_o *)((char *)p_evalValueSortList_5__5 - 40),
        v204,
        v205,
        v206,
        v207,
        v208,
        v209,
        v210);
      LODWORD(p_evalValueSortList_5__5[-1].fields.AppendSkillOffset) = 6;
      return 1;
    case 2:
      v8->fields.__1__state = -1;
      goto LABEL_16;
    case 3:
      availableRouteList_5__4 = (WarBoardAI__Think_d__11_o *)v8->fields._availableRouteList_5__4;
      v8->fields.__1__state = -1;
      goto LABEL_80;
    case 4:
      v8->fields.__1__state = -1;
      object = (Il2CppObject *)&v8->fields._evalValueSortList_5__5;
      goto LABEL_82;
    case 5:
      v8->fields.__1__state = -1;
      goto LABEL_182;
    case 6:
      v21 = 0;
      v8->fields.__1__state = -1;
      return v21;
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_WarBoardAI__Think_d__11_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AE5C0 & 1) == 0 )
  {
    sub_B52984(&WarBoardAI___c_TypeInfo);
    byte_42AE5C0 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(WarBoardAI___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAI___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x0 OVERLAPPED
  __int64 v16; // x1
  System_Decimal_o v17; // kr00_16
  System_Decimal_o result; // 0:x0.16

  if ( (byte_42AE5C1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_B52984(&Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
    sub_B52984(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_B52984(&Method_WarBoardAI___c__Think_b__11_4__);
    sub_B52984(&WarBoardAI___c_TypeInfo);
    byte_42AE5C1 = 1;
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
    _9__11_4 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B52A54(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
      _9__11_4,
      v7,
      Method_WarBoardAI___c__Think_b__11_4__,
      (const MethodInfo_2BC9880 *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
    v8 = WarBoardAI___c_TypeInfo->static_fields;
    v8->__9__11_4 = _9__11_4;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__11_4,
      (System_Int32_array **)_9__11_4,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v17 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__28760820(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_4,
          (const MethodInfo_1B6DAF4 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  v16 = *(_QWORD *)&v17.fields.lo;
  v15 = *(_QWORD *)&v17.fields.flags;
  *(_QWORD *)&result.fields.lo = v16;
  *(_QWORD *)&result.fields.flags = v15;
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Decimal_o v15; // kr00_16
  int32_t size; // w19
  __int64 v17; // x0 OVERLAPPED
  __int64 v18; // x1
  System_Decimal_o v19; // kr20_16
  System_Decimal_o result; // 0:x0.16
  System_Decimal_o v21; // 0:x2.16

  if ( (byte_42AE5C3 & 1) == 0 )
  {
    sub_B52984(&System_Decimal_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_B52984(&Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
    sub_B52984(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_B52984(&Method_WarBoardAI___c__Think_b__11_5__);
    sub_B52984(&WarBoardAI___c_TypeInfo);
    byte_42AE5C3 = 1;
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
    _9__11_5 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B52A54(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
      _9__11_5,
      v7,
      Method_WarBoardAI___c__Think_b__11_5__,
      (const MethodInfo_2BC9880 *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
    v8 = WarBoardAI___c_TypeInfo->static_fields;
    v8->__9__11_5 = _9__11_5;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__11_5,
      (System_Int32_array **)_9__11_5,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__28760820(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_5,
          (const MethodInfo_1B6DAF4 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  if ( !x )
    sub_B52A5C(*(_QWORD *)&v15.fields.flags, *(_QWORD *)&v15.fields.lo);
  size = x->fields._size;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v21 = System_Decimal__op_Implicit_44452908(size, 0LL);
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
    sub_B52A5C(this, 0LL);
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

  if ( (byte_42AE5C2 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_B52984(&System_Decimal_TypeInfo);
    byte_42AE5C2 = 1;
  }
  if ( !y )
    sub_B52A5C(this, y);
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

  if ( (byte_42AE5C4 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_B52984(&System_Decimal_TypeInfo);
    byte_42AE5C4 = 1;
  }
  if ( !y )
    sub_B52A5C(this, y);
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
    sub_B52A5C(this, 0LL);
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

  if ( (byte_42AE5C5 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_B52984(&System_Decimal_TypeInfo);
    byte_42AE5C5 = 1;
  }
  if ( !y )
    sub_B52A5C(this, y);
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

  if ( (byte_42AE5C6 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_B52984(&System_Decimal_TypeInfo);
    byte_42AE5C6 = 1;
  }
  if ( !y )
    sub_B52A5C(this, y);
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
  if ( (byte_42AE5C7 & 1) == 0 )
  {
    this = (WarBoardAI___c__DisplayClass11_0_o *)sub_B52984(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
    byte_42AE5C7 = 1;
  }
  if ( !x || (this = (WarBoardAI___c__DisplayClass11_0_o *)v4->fields.notActionPieceHash) == 0LL )
    sub_B52A5C(this, x);
  return System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
           (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)this,
           (BattleBuffData_BuffData_o *)x->fields.basePiece,
           (const MethodInfo_24E06A8 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
}