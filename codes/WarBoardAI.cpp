void __fastcall WarBoardAI___ctor(WarBoardAI_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  WarBoardAIRoute_o *v7; // x21
  const MethodInfo *v8; // x2
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4212AEF & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAIRoute_TypeInfo, npc);
    byte_4212AEF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7 = (WarBoardAIRoute_o *)sub_B0D974(WarBoardAIRoute_TypeInfo, v5, v6);
  WarBoardAIRoute___ctor(v7, npc, v8);
  this->fields.routeClass = v7;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
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
    sub_B0D97C(0LL);
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
  int32_t size; // w8
  unsigned int v14; // w24
  WarBoardAIRoute_RouteData_o *v15; // x22
  unsigned int v16; // w21
  WarBoardAIRoute_RouteData_o *PrevAiRoute_k__BackingField; // x21
  struct WarBoardPieceData_o *basePiece; // x8
  struct WarBoardPieceData_o *v19; // x9
  struct WarBoardPieceData_o *v20; // x8
  struct WarBoardPieceData_o *v21; // x8
  struct WarBoardPieceData_o *v22; // x8
  System_Enum_o *v23; // x23
  System_Enum_o *v24; // x23
  WarBoardAIRoute_RouteData_c *klass; // x8
  unsigned __int64 v26; // x10
  IWarBoardAIRouteWaste_c **p_offset; // x11
  __int64 v28; // x0
  System_Enum_o *v29; // x23
  WarBoardAIRoute_RouteData_c *v30; // x8
  unsigned __int64 v31; // x10
  IWarBoardAIRouteWaste_c **v32; // x11
  __int64 v33; // x0
  System_Enum_o *v34; // x23
  WarBoardAIRoute_RouteData_c *v35; // x8
  int32_t actionIndex; // w23
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  WarBoardAIRoute_RouteData_c *v40; // x8
  int32_t baseIndex; // w23
  unsigned __int64 v42; // x10
  IWarBoardAIRouteWaste_c **v43; // x11
  __int64 v44; // x0
  WarBoardAIRoute_RouteData_c *v45; // x8
  unsigned __int64 v46; // x10
  IWarBoardAIRouteWaste_c **v47; // x11
  __int64 v48; // x0
  __int64 v50; // [xsp+0h] [xbp-60h] BYREF
  int64_t flagNow; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4212AF1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__, checkRoute);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo, v6);
    sub_B0D8A4(&WarBoardAIRoute_RouteData_Flag_TypeInfo, v7);
    sub_B0D8A4(&IWarBoardAIRouteWaste_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v10);
    byte_4212AF1 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo,
                                                                                                   checkRoute,
                                                                                                   method);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v11,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
  if ( !checkRoute )
LABEL_74:
    sub_B0D97C(notAction);
  size = checkRoute->fields._size;
  if ( size < 1 )
    return 0;
  v14 = 0;
  while ( 1 )
  {
    if ( size <= v14 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v15 = checkRoute->fields._items->m_Items[v14];
    if ( !v15 )
      goto LABEL_74;
    if ( v15->fields.basePiece )
    {
      notAction = WarBoardAIRoute_RouteData__get_notAction(v15, 0LL);
      if ( (notAction & 1) == 0 )
      {
        v16 = v14 - 1;
        if ( (int)(v14 - 1) < 0 )
          goto LABEL_19;
        if ( checkRoute->fields._size <= v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        PrevAiRoute_k__BackingField = checkRoute->fields._items->m_Items[v16];
        if ( !PrevAiRoute_k__BackingField )
          goto LABEL_19;
        basePiece = PrevAiRoute_k__BackingField->fields.basePiece;
        if ( !basePiece )
          goto LABEL_74;
        v19 = v15->fields.basePiece;
        if ( !v19 )
          goto LABEL_74;
        if ( basePiece->fields._uniqueIndex_k__BackingField != v19->fields._uniqueIndex_k__BackingField
          || (notAction = WarBoardAIRoute_RouteData__get_notAction(PrevAiRoute_k__BackingField, 0LL),
              (notAction & 1) != 0) )
        {
LABEL_19:
          v20 = v15->fields.basePiece;
          if ( !v20 || !v11 )
            goto LABEL_74;
          notAction = System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                        (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v11,
                        v20->fields._index_k__BackingField,
                        (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
          if ( (notAction & 1) != 0 )
          {
            PrevAiRoute_k__BackingField = 0LL;
          }
          else
          {
            v21 = v15->fields.basePiece;
            if ( !v21 )
              goto LABEL_74;
            PrevAiRoute_k__BackingField = (WarBoardAIRoute_RouteData_o *)v21->fields._PrevAiRoute_k__BackingField;
          }
        }
        v22 = v15->fields.basePiece;
        if ( !v22 || !v11 )
          goto LABEL_74;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v11,
          v22->fields._index_k__BackingField,
          v15,
          (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
        if ( PrevAiRoute_k__BackingField )
        {
          flagNow = v15->fields.flagNow;
          v23 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow);
          v50 = 2LL;
          notAction = j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v50);
          if ( !v23 )
            goto LABEL_74;
          notAction = System_Enum__HasFlag(v23, (System_Enum_o *)notAction, 0LL);
          if ( (notAction & 1) == 0 )
          {
            flagNow = v15->fields.flagNow;
            v24 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow);
            v50 = 0x10000000LL;
            notAction = j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v50);
            if ( !v24 )
              goto LABEL_74;
            notAction = System_Enum__HasFlag(v24, (System_Enum_o *)notAction, 0LL);
            if ( (notAction & 1) == 0 )
            {
              klass = PrevAiRoute_k__BackingField->klass;
              if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
              {
                v26 = 0LL;
                p_offset = (IWarBoardAIRouteWaste_c **)&klass->_1.interfaceOffsets->offset;
                while ( *(p_offset - 1) != IWarBoardAIRouteWaste_TypeInfo )
                {
                  ++v26;
                  p_offset += 2;
                  if ( v26 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                    goto LABEL_36;
                }
                v28 = (__int64)(&klass->vtable._2_GetHashCode.method + 2 * *(_DWORD *)p_offset);
              }
              else
              {
LABEL_36:
                v28 = sub_AA67A0(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 2LL);
              }
              flagNow = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v28)(
                          PrevAiRoute_k__BackingField,
                          *(_QWORD *)(v28 + 8));
              v29 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow);
              v50 = 2LL;
              notAction = j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v50);
              if ( !v29 )
                goto LABEL_74;
              notAction = System_Enum__HasFlag(v29, (System_Enum_o *)notAction, 0LL);
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
                  v33 = sub_AA67A0(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 2LL);
                }
                flagNow = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v33)(
                            PrevAiRoute_k__BackingField,
                            *(_QWORD *)(v33 + 8));
                v34 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow);
                v50 = 0x10000000LL;
                notAction = j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v50);
                if ( !v34 )
                  goto LABEL_74;
                notAction = System_Enum__HasFlag(v34, (System_Enum_o *)notAction, 0LL);
                if ( (notAction & 1) == 0 )
                {
                  v35 = PrevAiRoute_k__BackingField->klass;
                  actionIndex = v15->fields.actionIndex;
                  if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                  {
                    v37 = 0LL;
                    v38 = &v35->_1.interfaceOffsets->offset;
                    while ( *((IWarBoardAIRouteWaste_c **)v38 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                    {
                      ++v37;
                      v38 += 4;
                      if ( v37 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                        goto LABEL_52;
                    }
                    v39 = (__int64)(&v35->vtable._0_Equals.method + 2 * *v38);
                  }
                  else
                  {
LABEL_52:
                    v39 = sub_AA67A0(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 0LL);
                  }
                  notAction = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v39)(
                                PrevAiRoute_k__BackingField,
                                *(_QWORD *)(v39 + 8));
                  if ( actionIndex == (_DWORD)notAction )
                  {
                    v40 = PrevAiRoute_k__BackingField->klass;
                    baseIndex = v15->fields.baseIndex;
                    if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                    {
                      v42 = 0LL;
                      v43 = (IWarBoardAIRouteWaste_c **)&v40->_1.interfaceOffsets->offset;
                      while ( *(v43 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                      {
                        ++v42;
                        v43 += 2;
                        if ( v42 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                          goto LABEL_59;
                      }
                      v44 = (__int64)(&v40->vtable._1_Finalize.method + 2 * *(_DWORD *)v43);
                    }
                    else
                    {
LABEL_59:
                      v44 = sub_AA67A0(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 1LL);
                    }
                    notAction = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v44)(
                                  PrevAiRoute_k__BackingField,
                                  *(_QWORD *)(v44 + 8));
                    if ( baseIndex == (_DWORD)notAction )
                    {
                      notAction = WarBoardAIRoute_RouteData__get_notAction(v15, 0LL);
                      if ( (notAction & 1) == 0 )
                      {
                        v45 = PrevAiRoute_k__BackingField->klass;
                        if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                        {
                          v46 = 0LL;
                          v47 = (IWarBoardAIRouteWaste_c **)&v45->_1.interfaceOffsets->offset;
                          while ( *(v47 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                          {
                            ++v46;
                            v47 += 2;
                            if ( v46 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                              goto LABEL_67;
                          }
                          v48 = (__int64)(&v45->vtable._3_ToString.method + 2 * *(_DWORD *)v47);
                        }
                        else
                        {
LABEL_67:
                          v48 = sub_AA67A0(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 3LL);
                        }
                        notAction = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v48)(
                                      PrevAiRoute_k__BackingField,
                                      *(_QWORD *)(v48 + 8));
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
    if ( (int)++v14 >= size )
      return 0;
  }
}


void __fastcall WarBoardAI__Clear(WarBoardAI_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_B0D97C(0LL);
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

  if ( (byte_4212AF4 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&forceId);
    sub_B0D8A4(&StringLiteral_23666/*"{0},{1},{2}"*/, v8);
    byte_4212AF4 = 1;
  }
  v15 = forceId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v14 = groupId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v13 = index;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return System_String__Format_43850968((System_String_o *)StringLiteral_23666/*"{0},{1},{2}"*/, v9, v10, v11, 0LL);
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
  const MethodInfo *v17; // x1
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v18; // x22
  __int64 v19; // x24
  WarBoardAI_o *v20; // x21
  WarBoardAIRoute_RouteData_o *v21; // x8
  int32_t actionIndex; // w22
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v23; // x21
  __int64 v24; // x22
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v25; // x21
  __int64 v26; // x22
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v27; // x21
  __int64 v28; // x22
  WarBoardAIRoute_RouteData_o *v29; // x8
  int32_t v30; // w21
  WarBoardPieceData_o *Piece_22073600; // x0
  System_Int32_array *v32; // x21
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v33; // x22
  __int64 v34; // x23
  WarBoardAIRoute_RouteData_o *v35; // x8
  int32_t v36; // w8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v37; // x9

  v2 = this;
  if ( (byte_4212AF2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    this = (WarBoardAI_o *)sub_B0D8A4(&WarBoardAIManager_TypeInfo, v5);
    byte_4212AF2 = 1;
  }
  executeRoute = v2->fields.executeRoute;
  if ( !executeRoute )
    return 0;
  size = executeRoute->fields._size;
  routeIndex = v2->fields.routeIndex;
  if ( size <= (int)routeIndex )
    return 0;
  if ( size <= (unsigned int)routeIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v9 = executeRoute->fields._items->m_Items[routeIndex];
  if ( !v9 )
    goto LABEL_55;
  v10 = v2->fields.executeRoute;
  if ( !v10 )
    goto LABEL_55;
  v11 = v2->fields.routeIndex;
  basePiece = v9->fields.basePiece;
  if ( v10->fields._size <= (unsigned int)v11 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v18 = v2->fields.executeRoute;
  if ( !v18 )
    goto LABEL_55;
  v19 = v2->fields.routeIndex;
  v20 = this;
  if ( v18->fields._size <= (unsigned int)v19 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v21 = v18->fields._items->m_Items[v19];
  if ( !v21 )
    goto LABEL_55;
  actionIndex = v21->fields.actionIndex;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  this = (WarBoardAI_o *)WarBoardAIManager__GetSquare(actionIndex, v17);
  if ( !v20 )
    goto LABEL_55;
  this = (WarBoardAI_o *)WarBoardManager__CheckSelectSquare(
                           (WarBoardManager_o *)v20,
                           basePiece,
                           (WarBoardSquareData_o *)this,
                           1,
                           0LL);
  v23 = v2->fields.executeRoute;
  if ( !v23 )
    goto LABEL_55;
  v24 = v2->fields.routeIndex;
  if ( v23->fields._size <= (unsigned int)v24 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  this = (WarBoardAI_o *)v23->fields._items->m_Items[v24];
  if ( !this )
    goto LABEL_55;
  this = (WarBoardAI_o *)WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)this, 2LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_34;
  v25 = v2->fields.executeRoute;
  if ( !v25 )
    goto LABEL_55;
  v26 = v2->fields.routeIndex;
  if ( v25->fields._size <= (unsigned int)v26 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  this = (WarBoardAI_o *)v25->fields._items->m_Items[v26];
  if ( !this )
LABEL_55:
    sub_B0D97C(this);
  this = (WarBoardAI_o *)WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)this, 4LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_46;
LABEL_34:
  v27 = v2->fields.executeRoute;
  if ( !v27 )
    goto LABEL_55;
  v28 = v2->fields.routeIndex;
  if ( v27->fields._size <= (unsigned int)v28 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v29 = v27->fields._items->m_Items[v28];
  if ( !v29 )
    goto LABEL_55;
  v30 = v29->fields.actionIndex;
  this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_55;
  this = *(WarBoardAI_o **)&this[10].fields.isEndPhase;
  if ( !this )
    goto LABEL_55;
  Piece_22073600 = WarBoardData__GetPiece_22073600((WarBoardData_o *)this, v30, 0LL);
  if ( Piece_22073600 && WarBoardPieceData__get_isServant(Piece_22073600, 0LL) )
  {
    this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_55;
    this = *(WarBoardAI_o **)&this[10].fields.isEndPhase;
    if ( !this )
      goto LABEL_55;
    v32 = WarBoardData__GetInRangeSquareIndecies((WarBoardData_o *)this, v30, 1, 0, 0LL);
    this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_55;
    WarBoardManager__DispPartyBuff((WarBoardManager_o *)this, v32, 0LL);
  }
LABEL_46:
  this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v33 = v2->fields.executeRoute;
  if ( !v33 )
    goto LABEL_55;
  v34 = v2->fields.routeIndex;
  if ( v33->fields._size <= (unsigned int)v34 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v35 = v33->fields._items->m_Items[v34];
  if ( !v35 || !this )
    goto LABEL_55;
  v15 = 1;
  this = (WarBoardAI_o *)WarBoardManager__PieceAction_17761952(
                           (WarBoardManager_o *)this,
                           basePiece,
                           v35->fields.actionIndex,
                           0LL,
                           1,
                           0LL);
  v36 = v2->fields.routeIndex;
  v2->fields.isEndPhase = (unsigned __int8)this & 1;
  v14 = v36 + 1;
  v2->fields.routeIndex = v14;
  if ( ((unsigned __int8)this & 1) != 0 )
    return v15;
LABEL_52:
  v37 = v2->fields.executeRoute;
  if ( !v37 )
    goto LABEL_55;
  v15 = 1;
  if ( v37->fields._size <= v14 )
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

  if ( (byte_4212AF3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Decimal_TypeInfo, weightTable);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Sum_Decimal___, v4);
    sub_B0D8A4(&Method_System_Func_Decimal__Decimal___ctor__, v5);
    sub_B0D8A4(&System_Func_Decimal__Decimal__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Decimal__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Decimal__get_Item__, v8);
    sub_B0D8A4(&System_Math_TypeInfo, v9);
    sub_B0D8A4(&Method_WarBoardAI___c__GetRandomIndex_b__14_0__, v10);
    sub_B0D8A4(&WarBoardAI___c_TypeInfo, v11);
    byte_4212AF3 = 1;
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
    _9__14_0 = (System_Func_Decimal__Decimal__o *)sub_B0D974(
                                                    System_Func_Decimal__Decimal__TypeInfo,
                                                    weightTable,
                                                    method);
    System_Func_Decimal__Decimal____ctor(
      _9__14_0,
      v15,
      Method_WarBoardAI___c__GetRandomIndex_b__14_0__,
      (const MethodInfo_26133A8 *)Method_System_Func_Decimal__Decimal___ctor__);
    v16 = WarBoardAI___c_TypeInfo->static_fields;
    v16->__9__14_0 = _9__14_0;
    sub_B0D840(
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
          (const MethodInfo_1B557E0 *)Method_System_Linq_Enumerable_Sum_Decimal___);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v24 = System_Math__Floor(v23, 0LL);
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v25 = System_Decimal__op_Explicit_43734972(v24, 0LL);
  v26 = UnityEngine_Random__Range(0.0, v25, 0LL);
  v27 = System_Decimal__op_Explicit(v26, 0LL);
  if ( !weightTable )
    sub_B0D97C(*(_QWORD *)&v27.fields.flags);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4212AF0 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAI__Think_d__11_TypeInfo, method);
    byte_4212AF0 = 1;
  }
  v4 = sub_B0D974(WarBoardAI__Think_d__11_TypeInfo, method, v2);
  WarBoardAI__Think_d__11___ctor((WarBoardAI__Think_d__11_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
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
    sub_B0D97C(0LL);
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
  float v22; // s0
  struct WarBoardStageNpcEntity_o *npcData; // x8

  if ( (byte_4212AF5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____67992152, x);
    sub_B0D8A4(&Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardAI___c__Think_b__11_7__, v7);
    sub_B0D8A4(&WarBoardAI___c_TypeInfo, v8);
    byte_4212AF5 = 1;
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
    _9__11_7 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B0D974(
                                                                    System_Func_WarBoardAIRoute_RouteData__float__TypeInfo,
                                                                    x,
                                                                    method);
    System_Func_WarBoardAIRoute_RouteData__float____ctor(
      _9__11_7,
      v13,
      Method_WarBoardAI___c__Think_b__11_7__,
      (const MethodInfo_261A8AC *)Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__);
    v14 = WarBoardAI___c_TypeInfo->static_fields;
    v14->__9__11_7 = _9__11_7;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__11_7,
      (System_Int32_array **)_9__11_7,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v22 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__28661836(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__float__o *)_9__11_7,
          (const MethodInfo_1B5584C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____67992152);
  if ( !routeClass || (npcData = routeClass->fields.npcData) == 0LL )
    sub_B0D97C(v21);
  return (float)((float)npcData->fields.lowerThinkingValue / 100.0) <= v22;
}


int32_t __fastcall WarBoardAI__get_ForceId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_B0D97C(this);
  return routeClass->fields.forceId;
}


int32_t __fastcall WarBoardAI__get_GroupId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_B0D97C(this);
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
  __int64 v2; // x2
  WarBoardAI__Think_d__11_o *v3; // x27
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
  __int64 v54; // x1
  struct WarBoardAI_o *_4__this; // x19
  __int64 v56; // x1
  __int64 v57; // x2
  WarBoardAIRoute_o *routeClass; // x20
  System_Collections_Generic_Dictionary_int__uint__o *placePieceData; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v60; // x22
  System_Collections_IEnumerator_o *RouteData; // x0
  Il2CppObject **p__2__current; // x27
  bool v63; // w20
  WarBoardAI__Think_d__11_o *availableRouteList_5__4; // x26
  struct WarBoardAIRoute_o *v65; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x1
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList_5__2; // x8
  Il2CppObject *v68; // x21
  __int64 v69; // x1
  __int64 v70; // x2
  struct WarBoardAIRoute_o *v71; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *v72; // x22
  int32_t pickValue; // w8
  BalanceConfig_c *v74; // x0
  _BOOL4 IsWarBoardAiCalcEvalSum; // w9
  WarBoardAI___c_c *v76; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_0; // x23
  Il2CppObject *v79; // x24
  struct WarBoardAI___c_StaticFields *v80; // x0
  struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o **p__9__11_0; // x0
  struct WarBoardAI___c_StaticFields *v82; // x8
  Il2CppObject *v83; // x24
  struct WarBoardAI___c_StaticFields *v84; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v86; // x22
  __int64 v87; // x1
  __int64 v88; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v89; // x24
  WarBoardAI__Think_d__11_o **p_availableRouteList_5__4; // x23
  __int64 v91; // x1
  __int64 v92; // x2
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v93; // x25
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **v94; // x24
  __int64 v95; // x8
  unsigned __int64 v96; // x20
  int32_t pickValue_5__3; // w28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **p_monitor; // x25
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v99; // x26
  __int64 v100; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v101; // x27
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v102; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v103; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v104; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v105; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *evalValueSortList_5__5; // x8
  System_Collections_Generic_List_Decimal__o *v107; // x21
  Il2CppClass *klass; // x23
  int v109; // w27
  int v110; // w19
  int namespaze; // w8
  int v112; // w24
  char v113; // w25
  char v114; // w26
  Il2CppClass *v115; // x8
  WarBoardPieceData_o *monitor; // x0
  bool isMaster; // w0
  _BOOL8 v118; // x0
  Il2CppObject *current; // x23
  int v120; // w27
  int v121; // w8
  WarBoardAI_o *v122; // x9
  struct WarBoardAIRoute_o *v123; // x8
  float v124; // s12
  float BestMagnification; // s8
  float LowestMagnification; // s0
  int value; // w21
  float ImmobilityMagnification; // s0
  _BOOL8 v129; // x0
  WarBoardTacticalTrendEntity_o *v130; // x23
  int v131; // w8
  float v132; // s8
  BalanceConfig_c *v133; // x0
  __int64 v134; // x1
  __int64 v135; // x2
  System_Decimal_o v136; // kr00_16
  Il2CppClass *v137; // x8
  WarBoardAI___c_c *v138; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v139; // x25
  struct WarBoardAI___c_StaticFields *v140; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_8; // x26
  int v142; // w21
  __int64 v143; // x1
  __int64 v144; // x2
  System_Decimal_o v145; // kr10_16
  Il2CppClass *v146; // x8
  WarBoardAI___c_c *v147; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v148; // x25
  struct WarBoardAI___c_StaticFields *v149; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_9; // x26
  int v151; // w21
  Il2CppObject *v152; // x27
  struct WarBoardAI___c_StaticFields *v153; // x0
  System_Decimal_o v154; // kr20_16
  WarBoardAI__Think_d__11_o *v155; // x2
  __int64 v156; // x4
  System_Decimal_o v157; // kr30_16
  Il2CppObject *v158; // x27
  struct WarBoardAI___c_StaticFields *v159; // x0
  System_Decimal_o v160; // kr40_16
  Il2CppClass *v161; // x8
  __int64 v162; // x8
  int v163; // w21
  int32_t v164; // w27
  System_Decimal_o v165; // kr50_16
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v166; // x1
  __int64 v167; // x1
  __int64 v168; // x2
  System_Collections_Generic_IEnumerable_TSource__o *executeRoute; // x21
  WarBoardAI___c_c *v170; // x0
  struct WarBoardAI___c_StaticFields *v171; // x8
  System_Func_WarBoardAIRoute_RouteData__float__o *_9__11_3; // x22
  Il2CppObject *v173; // x23
  struct WarBoardAI___c_StaticFields *v174; // x0
  __int64 v175; // x0
  Il2CppObject **v176; // x27
  int v177; // w8
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v178; // x21
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v179; // x22
  int v180; // w19
  __int64 v181; // x23
  __int64 v182; // x22
  BattleBuffData_BuffData_o *v183; // x1
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array **p_evalValueSortList_5__5; // x27
  __int64 v185; // x0
  __int64 v186; // x0
  __int64 v187; // x0
  __int64 v188; // x0
  __int64 v190; // x0
  WarBoardAI__Think_d__11_o *v191; // [xsp+8h] [xbp-118h]
  WarBoardAI__Think_d__11_o *v192; // [xsp+8h] [xbp-118h]
  System_Collections_Generic_List_Decimal__o *v193; // [xsp+10h] [xbp-110h]
  WarBoardAI_o *v194; // [xsp+20h] [xbp-100h]
  WarBoardAI__Think_d__11_o **v195; // [xsp+28h] [xbp-F8h]
  Il2CppObject *object; // [xsp+30h] [xbp-F0h]
  _BYTE v197[32]; // [xsp+38h] [xbp-E8h] BYREF
  int v198; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v199; // [xsp+60h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v200; // [xsp+80h] [xbp-A0h] BYREF
  System_Decimal_o v201; // 0:x1.16
  System_Decimal_o v202; // 0:x2.16
  System_Decimal_o v203; // 0:x2.16

  v3 = this;
  if ( (byte_4212660 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, v4);
    sub_B0D8A4(&bool_TypeInfo, v5);
    sub_B0D8A4(&System_Decimal_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____67992152, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__get_Current__, v18);
    sub_B0D8A4(&Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__, v19);
    sub_B0D8A4(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__, v20);
    sub_B0D8A4(&Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__, v21);
    sub_B0D8A4(&Method_System_Func_List_WarBoardAIRoute_RouteData___bool___ctor__, v22);
    sub_B0D8A4(&Method_System_Func_List_WarBoardAIRoute_RouteData___Decimal___ctor__, v23);
    sub_B0D8A4(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v24);
    sub_B0D8A4(&System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo, v25);
    sub_B0D8A4(&System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo, v26);
    sub_B0D8A4(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v27);
    sub_B0D8A4(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__, v31);
    sub_B0D8A4(&System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo, v32);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Decimal__Add__, v33);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__, v34);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v35);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__, v36);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Decimal___ctor__, v37);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__, v38);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__, v39);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v40);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___get_Count__, v41);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v42);
    sub_B0D8A4(&System_Collections_Generic_List_Decimal__TypeInfo, v43);
    sub_B0D8A4(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo, v44);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo, v45);
    sub_B0D8A4(&Method_WarBoardAI___c__Think_b__11_0__, v46);
    sub_B0D8A4(&Method_WarBoardAI___c__Think_b__11_1__, v47);
    sub_B0D8A4(&Method_WarBoardAI___c__Think_b__11_3__, v48);
    sub_B0D8A4(&Method_WarBoardAI___c__Think_b__11_8__, v49);
    sub_B0D8A4(&Method_WarBoardAI___c__Think_b__11_9__, v50);
    sub_B0D8A4(&Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__, v51);
    sub_B0D8A4(&WarBoardAI___c__DisplayClass11_0_TypeInfo, v52);
    sub_B0D8A4(&WarBoardAI___c_TypeInfo, v53);
    this = (WarBoardAI__Think_d__11_o *)sub_B0D8A4(&Method_WarBoardAI__Think_b__11_2__, v54);
    byte_4212660 = 1;
  }
  memset(&v200, 0, sizeof(v200));
  memset(&v199, 0, sizeof(v199));
  v198 = 0;
  _4__this = v3->fields.__4__this;
  v194 = _4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
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
      v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo, v56, v57);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v60,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
      RouteData = WarBoardAIRoute__CreateRouteData(
                    routeClass,
                    placePieceData,
                    0,
                    (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v60,
                    0LL);
      v3->fields.__2__current = (Il2CppObject *)RouteData;
      p__2__current = &v3->fields.__2__current;
      sub_B0D840(p__2__current, RouteData);
      v63 = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return v63;
    case 1:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_197;
      v65 = _4__this->fields.routeClass;
      if ( !v65 )
        goto LABEL_197;
      allRouteList = v65->fields.allRouteList;
      v3->fields._allRouteList_5__2 = allRouteList;
      sub_B0D840(&v3->fields._allRouteList_5__2, allRouteList);
      allRouteList_5__2 = v3->fields._allRouteList_5__2;
      if ( !allRouteList_5__2 )
        goto LABEL_197;
      if ( !allRouteList_5__2->fields._size )
      {
        v63 = 1;
        v197[0] = 1;
        v188 = j_il2cpp_value_box_0(bool_TypeInfo, v197);
        v3->fields.__2__current = (Il2CppObject *)v188;
        v176 = &v3->fields.__2__current;
        sub_B0D840(v176, v188);
        v177 = 2;
        goto LABEL_202;
      }
LABEL_16:
      v68 = (Il2CppObject *)sub_B0D974(WarBoardAI___c__DisplayClass11_0_TypeInfo, method, v2);
      System_Object___ctor(v68, 0LL);
      if ( !_4__this )
        goto LABEL_197;
      v71 = _4__this->fields.routeClass;
      if ( !v71 )
        goto LABEL_197;
      v72 = v3->fields._allRouteList_5__2;
      if ( !v72 )
        goto LABEL_197;
      pickValue = v71->fields.pickValue;
      if ( pickValue >= v72->fields._size )
        pickValue = v72->fields._size;
      v3->fields._pickValue_5__3 = pickValue;
      if ( !pickValue )
        v3->fields._pickValue_5__3 = v72->fields._size;
      v74 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v74 = BalanceConfig_TypeInfo;
        v72 = v3->fields._allRouteList_5__2;
      }
      IsWarBoardAiCalcEvalSum = v74->static_fields->IsWarBoardAiCalcEvalSum;
      v76 = WarBoardAI___c_TypeInfo;
      if ( IsWarBoardAiCalcEvalSum )
      {
        if ( (WORD1(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v76 = WarBoardAI___c_TypeInfo;
        }
        static_fields = v76->static_fields;
        _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)static_fields->__9__11_0;
        if ( !_9__11_0 )
        {
          if ( (BYTE3(v76->vtable._0_Equals.methodPtr) & 4) != 0 && !v76->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v76);
            static_fields = WarBoardAI___c_TypeInfo->static_fields;
          }
          v79 = (Il2CppObject *)static_fields->__9;
          _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B0D974(
                                                                            System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo,
                                                                            v69,
                                                                            v70);
          System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
            _9__11_0,
            v79,
            Method_WarBoardAI___c__Think_b__11_0__,
            (const MethodInfo_261917C *)Method_System_Func_List_WarBoardAIRoute_RouteData___Decimal___ctor__);
          v80 = WarBoardAI___c_TypeInfo->static_fields;
          v80->__9__11_0 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
          p__9__11_0 = &v80->__9__11_0;
LABEL_45:
          sub_B0D840(p__9__11_0, _9__11_0);
        }
      }
      else
      {
        if ( (WORD1(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v76 = WarBoardAI___c_TypeInfo;
        }
        v82 = v76->static_fields;
        _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)v82->__9__11_1;
        if ( !_9__11_0 )
        {
          if ( (BYTE3(v76->vtable._0_Equals.methodPtr) & 4) != 0 && !v76->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v76);
            v82 = WarBoardAI___c_TypeInfo->static_fields;
          }
          v83 = (Il2CppObject *)v82->__9;
          _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B0D974(
                                                                            System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo,
                                                                            v69,
                                                                            v70);
          System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
            _9__11_0,
            v83,
            Method_WarBoardAI___c__Think_b__11_1__,
            (const MethodInfo_261917C *)Method_System_Func_List_WarBoardAIRoute_RouteData___Decimal___ctor__);
          v84 = WarBoardAI___c_TypeInfo->static_fields;
          v84->__9__11_1 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
          p__9__11_0 = &v84->__9__11_1;
          goto LABEL_45;
        }
      }
      v85 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Decimal_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v72,
                                                                   (System_Func_TSource__TKey__o *)_9__11_0,
                                                                   (const MethodInfo_1B4EC5C *)Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
      v86 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
              v85,
              (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v89 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo, v87, v88);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v89,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
      v3->fields._availableRouteList_5__4 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v89;
      p_availableRouteList_5__4 = (WarBoardAI__Think_d__11_o **)&v3->fields._availableRouteList_5__4;
      sub_B0D840(&v3->fields._availableRouteList_5__4, v89);
      v93 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                                 System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo,
                                                                                 v91,
                                                                                 v92);
      System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
        v93,
        (const MethodInfo_2C7B9D8 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !v68 )
        goto LABEL_197;
      v68[1].klass = (Il2CppClass *)v93;
      v94 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **)&v68[1];
      v191 = v3;
      sub_B0D840(&v68[1], v93);
      if ( !v86 )
        goto LABEL_197;
      v95 = *(_QWORD *)&v86->max_length;
      if ( (int)v95 >= 1 )
      {
        v96 = 0LL;
        pickValue_5__3 = v3->fields._pickValue_5__3;
        v195 = (WarBoardAI__Think_d__11_o **)&v3->fields._availableRouteList_5__4;
        p_monitor = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)&v68[1].monitor;
        while ( 1 )
        {
          if ( v96 >= (unsigned int)v95 )
            goto LABEL_204;
          v99 = v86->m_Items[v96];
          this = (WarBoardAI__Think_d__11_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v99, 0LL);
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
            if ( !v99 )
              goto LABEL_197;
            if ( !LODWORD(v99->fields.msgIds) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v100 = *(_QWORD *)(*(_QWORD *)&v99->fields.groupId + 32LL);
            if ( !v100 )
              goto LABEL_197;
            if ( *(_DWORD *)(v100 + 24) == *(_DWORD *)(v100 + 28) )
            {
              if ( !LODWORD(v99->fields.msgIds) )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              if ( !*v94 )
                goto LABEL_197;
              this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                                                    *v94,
                                                    *(WarBoardAIRoute_RouteData_o **)(v100 + 48),
                                                    (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
              goto LABEL_77;
            }
            v101 = *p_monitor;
            if ( !*p_monitor )
            {
              v101 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                          System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                                                          method,
                                                                                          v2);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v101,
                v68,
                Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__,
                (const MethodInfo_26189B8 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
              v68[1].monitor = v101;
              p_availableRouteList_5__4 = v195;
              sub_B0D840(p_monitor, v101);
            }
            this = (WarBoardAI__Think_d__11_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                  (System_Collections_Generic_List_T__o *)v99,
                                                  (System_Func_T__bool__o *)v101,
                                                  (const MethodInfo_1707138 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
            if ( ((unsigned __int8)this & 1) == 0 )
              break;
          }
LABEL_77:
          LODWORD(v95) = v86->max_length;
          if ( (__int64)++v96 >= (int)v95 )
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
                                                    (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v99,
                                                    0LL),
              ((unsigned __int8)this & 1) == 0) )
        {
          this = *p_availableRouteList_5__4;
          if ( !*p_availableRouteList_5__4 )
            goto LABEL_197;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v99,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
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
      v3 = v191;
      if ( SLODWORD(availableRouteList_5__4->fields.__2__current) <= 0 )
      {
        v63 = 1;
        v197[0] = 1;
        v187 = j_il2cpp_value_box_0(bool_TypeInfo, v197);
        v191->fields.__2__current = (Il2CppObject *)v187;
        v176 = &v191->fields.__2__current;
        sub_B0D840(&v191->fields.__2__current, v187);
        v177 = 3;
        goto LABEL_202;
      }
LABEL_80:
      v102 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                  System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo,
                                                                                  method,
                                                                                  v2);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v102,
        (Il2CppObject *)_4__this,
        Method_WarBoardAI__Think_b__11_2__,
        (const MethodInfo_26189B8 *)Method_System_Func_List_WarBoardAIRoute_RouteData___bool___ctor__);
      v103 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               (System_Collections_Generic_IEnumerable_TSource__o *)availableRouteList_5__4,
               (System_Func_TSource__bool__o *)v102,
               (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
      v104 = System_Linq_Enumerable__Take_BattleData_CommandHistory_(
               v103,
               v3->fields._pickValue_5__3,
               (const MethodInfo_1B55910 *)Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
      v105 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
               v104,
               (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v3->fields._evalValueSortList_5__5 = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)v105;
      object = (Il2CppObject *)&v3->fields._evalValueSortList_5__5;
      sub_B0D840(&v3->fields._evalValueSortList_5__5, v105);
      evalValueSortList_5__5 = v3->fields._evalValueSortList_5__5;
      if ( !evalValueSortList_5__5 )
        goto LABEL_197;
      if ( !*(_QWORD *)&evalValueSortList_5__5->max_length )
      {
        v63 = 1;
        v197[0] = 1;
        v186 = j_il2cpp_value_box_0(bool_TypeInfo, v197);
        v3->fields.__2__current = (Il2CppObject *)v186;
        v176 = &v3->fields.__2__current;
        sub_B0D840(v176, v186);
        v177 = 4;
LABEL_202:
        *((_DWORD *)v176 - 2) = v177;
        return v63;
      }
LABEL_82:
      v192 = v3;
      v107 = (System_Collections_Generic_List_Decimal__o *)sub_B0D974(
                                                             System_Collections_Generic_List_Decimal__TypeInfo,
                                                             method,
                                                             v2);
      System_Collections_Generic_List_Decimal____ctor(
        v107,
        (const MethodInfo_2F6BD50 *)Method_System_Collections_Generic_List_Decimal___ctor__);
      klass = object->klass;
      if ( !object->klass )
        goto LABEL_197;
      v109 = 0;
      v110 = 0;
      v193 = v107;
      while ( 1 )
      {
        namespaze = (int)klass->_1.namespaze;
        if ( v110 >= namespaze )
          break;
        if ( v110 >= (unsigned int)namespaze )
          goto LABEL_204;
        this = (WarBoardAI__Think_d__11_o *)*((_QWORD *)&klass->_1.byval_arg.data + v110);
        if ( !this )
          goto LABEL_197;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v197,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
        v112 = 0;
        v113 = 0;
        v114 = 0;
        v200 = *(System_Collections_Generic_List_Enumerator_T__o *)v197;
        while ( 1 )
        {
          v118 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v200,
                   (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
          if ( !v118 )
            break;
          current = v200.fields.current;
          if ( !v200.fields.current )
            sub_B0D97C(v118);
          v115 = v200.fields.current[1].klass;
          if ( ((unsigned __int8)v115 & 4) != 0 )
          {
            monitor = (WarBoardPieceData_o *)v200.fields.current[3].monitor;
            if ( monitor )
            {
              isMaster = WarBoardPieceData__get_isMaster(monitor, 0LL);
              v115 = current[1].klass;
              v113 |= isMaster;
            }
            v114 = 1;
          }
          v112 |= ((unsigned __int64)v115 >> 3) & 1;
        }
        *(_DWORD *)&v197[4 * v109 + 24] = 849;
        v120 = ++v198;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v200,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
        if ( v120 )
        {
          v121 = v120 - 1;
          v122 = v194;
          if ( *(_DWORD *)&v197[4 * v120 + 20] == 849 )
          {
            --v120;
            v198 = v121;
            if ( !v194 )
              goto LABEL_197;
            goto LABEL_102;
          }
        }
        else
        {
          v122 = v194;
        }
        if ( !v122 )
          goto LABEL_197;
LABEL_102:
        v123 = v122->fields.routeClass;
        if ( !v123 )
          goto LABEL_197;
        this = (WarBoardAI__Think_d__11_o *)v123->fields.tacticalTrendList;
        if ( !this )
          goto LABEL_197;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v197,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
        v124 = 0.0;
        v199 = *(System_Collections_Generic_List_Enumerator_T__o *)v197;
        while ( 1 )
        {
          v129 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v199,
                   (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
          if ( !v129 )
            break;
          v130 = (WarBoardTacticalTrendEntity_o *)v199.fields.current;
          if ( !v199.fields.current )
            sub_B0D97C(v129);
          switch ( HIDWORD(v199.fields.current[1].klass) )
          {
            case 0:
              if ( v110 < SLODWORD(v199.fields.current[1].monitor) )
              {
                BestMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(
                                      (WarBoardTacticalTrendEntity_o *)v199.fields.current,
                                      0LL);
                LowestMagnification = WarBoardTacticalTrendEntity__GetLowestMagnification(v130, 0LL);
                value = v130->fields.value;
                ImmobilityMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(v130, 0LL)
                                        - (float)((float)((float)(BestMagnification - LowestMagnification)
                                                        / (float)((float)value + -1.0))
                                                * (float)v110);
                goto LABEL_114;
              }
              break;
            case 1:
              if ( (v114 & 1) != 0 )
                goto LABEL_113;
              break;
            case 4:
              if ( (v113 & 1) != 0 )
                goto LABEL_113;
              break;
            case 5:
              if ( (v112 & 1) != 0 )
              {
LABEL_113:
                ImmobilityMagnification = WarBoardTacticalTrendEntity__GetImmobilityMagnification(
                                            (WarBoardTacticalTrendEntity_o *)v199.fields.current,
                                            0LL);
LABEL_114:
                v124 = v124 + ImmobilityMagnification;
              }
              break;
            default:
              continue;
          }
        }
        *(_DWORD *)&v197[4 * v120 + 24] = 1074;
        v109 = ++v198;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v199,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
        if ( v109 )
        {
          v131 = v109 - 1;
          if ( *(_DWORD *)&v197[4 * v109 + 20] == 1074 )
          {
            --v109;
            v198 = v131;
          }
        }
        if ( v124 == 0.0 )
          v132 = 1.0;
        else
          v132 = v124;
        v133 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v133 = BalanceConfig_TypeInfo;
        }
        if ( v133->static_fields->IsWarBoardAiCalcEvalSum )
        {
          if ( (WORD1(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v136 = System_Decimal__op_Explicit(v132, 0LL);
          v134 = *(_QWORD *)&v136.fields.lo;
          this = *(WarBoardAI__Think_d__11_o **)&v136.fields.flags;
          v137 = object->klass;
          if ( !object->klass )
            goto LABEL_197;
          if ( (unsigned int)v110 >= LODWORD(v137->_1.namespaze) )
            goto LABEL_204;
          v138 = WarBoardAI___c_TypeInfo;
          v139 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)&v137->_1.byval_arg.data + v110);
          if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v138 = WarBoardAI___c_TypeInfo;
          }
          v140 = v138->static_fields;
          _9__11_8 = v140->__9__11_8;
          if ( !_9__11_8 )
          {
            if ( (BYTE3(v138->vtable._0_Equals.methodPtr) & 4) != 0 )
            {
              v142 = v109;
              if ( !v138->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v138);
                v140 = WarBoardAI___c_TypeInfo->static_fields;
              }
            }
            else
            {
              v142 = v109;
            }
            v152 = (Il2CppObject *)v140->__9;
            _9__11_8 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B0D974(
                                                                              System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo,
                                                                              v134,
                                                                              v135);
            System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
              _9__11_8,
              v152,
              Method_WarBoardAI___c__Think_b__11_8__,
              (const MethodInfo_261917C *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
            v153 = WarBoardAI___c_TypeInfo->static_fields;
            v153->__9__11_8 = _9__11_8;
            sub_B0D840(&v153->__9__11_8, _9__11_8);
            v109 = v142;
          }
          v154 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__28661764(
                   v139,
                   (System_Func_TSource__Decimal__o *)_9__11_8,
                   (const MethodInfo_1B55804 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
          if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v157 = System_Decimal__op_Multiply(v136, v154, 0LL);
          v156 = *(unsigned __int128 *)&v157 >> 64;
          this = (WarBoardAI__Think_d__11_o *)*(_OWORD *)&v157;
          v155 = this;
        }
        else
        {
          if ( (WORD1(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v145 = System_Decimal__op_Explicit(v132, 0LL);
          v143 = *(_QWORD *)&v145.fields.lo;
          this = *(WarBoardAI__Think_d__11_o **)&v145.fields.flags;
          v146 = object->klass;
          if ( !object->klass )
            goto LABEL_197;
          if ( (unsigned int)v110 >= LODWORD(v146->_1.namespaze) )
            goto LABEL_204;
          v147 = WarBoardAI___c_TypeInfo;
          v148 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)&v146->_1.byval_arg.data + v110);
          if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v147 = WarBoardAI___c_TypeInfo;
          }
          v149 = v147->static_fields;
          _9__11_9 = v149->__9__11_9;
          if ( !_9__11_9 )
          {
            if ( (BYTE3(v147->vtable._0_Equals.methodPtr) & 4) != 0 )
            {
              v151 = v109;
              if ( !v147->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v147);
                v149 = WarBoardAI___c_TypeInfo->static_fields;
              }
            }
            else
            {
              v151 = v109;
            }
            v158 = (Il2CppObject *)v149->__9;
            _9__11_9 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B0D974(
                                                                              System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo,
                                                                              v143,
                                                                              v144);
            System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
              _9__11_9,
              v158,
              Method_WarBoardAI___c__Think_b__11_9__,
              (const MethodInfo_261917C *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
            v159 = WarBoardAI___c_TypeInfo->static_fields;
            v159->__9__11_9 = _9__11_9;
            sub_B0D840(&v159->__9__11_9, _9__11_9);
            v109 = v151;
          }
          v160 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__28661764(
                   v148,
                   (System_Func_TSource__Decimal__o *)_9__11_9,
                   (const MethodInfo_1B55804 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
          this = *(WarBoardAI__Think_d__11_o **)&v160.fields.flags;
          v161 = object->klass;
          if ( !object->klass )
            goto LABEL_197;
          if ( (unsigned int)v110 >= LODWORD(v161->_1.namespaze) )
            goto LABEL_204;
          v162 = *((_QWORD *)&v161->_1.byval_arg.data + v110);
          if ( !v162 )
            goto LABEL_197;
          v163 = v109;
          v164 = *(_DWORD *)(v162 + 24);
          if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v202 = System_Decimal__op_Implicit_43734496(v164, 0LL);
          v203 = System_Decimal__op_Division(v160, v202, 0LL);
          v165 = System_Decimal__op_Multiply(v145, v203, 0LL);
          v156 = *(unsigned __int128 *)&v165 >> 64;
          this = (WarBoardAI__Think_d__11_o *)*(_OWORD *)&v165;
          v155 = this;
          v109 = v163;
        }
        v107 = v193;
        if ( v193 )
        {
          *(_QWORD *)&v201.fields.flags = v155;
          *(_QWORD *)&v201.fields.lo = v156;
          System_Collections_Generic_List_Decimal___Add(
            v193,
            v201,
            (const MethodInfo_2F6CAD4 *)Method_System_Collections_Generic_List_Decimal__Add__);
          ++v110;
          klass = object->klass;
          if ( object->klass )
            continue;
        }
        goto LABEL_197;
      }
      _4__this = v194;
      if ( !v194 )
        goto LABEL_197;
      this = (WarBoardAI__Think_d__11_o *)WarBoardAI__GetRandomIndex(v194, v107, 0LL);
      v3 = v192;
      if ( (unsigned int)this >= LODWORD(klass->_1.namespaze) )
      {
LABEL_204:
        v190 = sub_B0D9A8(this);
        sub_B0D948(v190, 0LL);
      }
      v166 = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)*((_QWORD *)&klass->_1.byval_arg.data
                                                                                    + (int)this);
      v194->fields.executeRoute = v166;
      sub_B0D840(&v194->fields.executeRoute, v166);
      executeRoute = (System_Collections_Generic_IEnumerable_TSource__o *)v194->fields.executeRoute;
      v170 = WarBoardAI___c_TypeInfo;
      if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
        v170 = WarBoardAI___c_TypeInfo;
      }
      v171 = v170->static_fields;
      _9__11_3 = v171->__9__11_3;
      if ( !_9__11_3 )
      {
        if ( (BYTE3(v170->vtable._0_Equals.methodPtr) & 4) != 0 && !v170->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v170);
          v171 = WarBoardAI___c_TypeInfo->static_fields;
        }
        v173 = (Il2CppObject *)v171->__9;
        _9__11_3 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B0D974(
                                                                        System_Func_WarBoardAIRoute_RouteData__float__TypeInfo,
                                                                        v167,
                                                                        v168);
        System_Func_WarBoardAIRoute_RouteData__float____ctor(
          _9__11_3,
          v173,
          Method_WarBoardAI___c__Think_b__11_3__,
          (const MethodInfo_261A8AC *)Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__);
        v174 = WarBoardAI___c_TypeInfo->static_fields;
        v174->__9__11_3 = _9__11_3;
        sub_B0D840(&v174->__9__11_3, _9__11_3);
        _4__this = v194;
      }
      System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__28661836(
        executeRoute,
        (System_Func_TSource__float__o *)_9__11_3,
        (const MethodInfo_1B5584C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____67992152);
      if ( WarBoardAI__CheckWasteRoute(_4__this, _4__this->fields.executeRoute, 0LL) )
      {
        v63 = 1;
        v197[0] = 1;
        v175 = j_il2cpp_value_box_0(bool_TypeInfo, v197);
        v192->fields.__2__current = (Il2CppObject *)v175;
        v176 = &v192->fields.__2__current;
        sub_B0D840(&v192->fields.__2__current, v175);
        v177 = 5;
        goto LABEL_202;
      }
LABEL_182:
      v178 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                                  System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo,
                                                                                  method,
                                                                                  v2);
      System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
        v178,
        (const MethodInfo_2C7B9D8 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !_4__this || (v179 = _4__this->fields.executeRoute) == 0LL )
LABEL_197:
        sub_B0D97C(this);
      v180 = v179->fields._size - 1;
      if ( v180 >= 0 )
      {
        v181 = 8LL * v180 + 32;
        while ( 1 )
        {
          if ( v179->fields._size <= (unsigned int)v180 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v182 = *(__int64 *)((char *)&v179->fields._items->obj.klass + v181);
          if ( !v182 )
            goto LABEL_197;
          v183 = *(BattleBuffData_BuffData_o **)(v182 + 48);
          if ( v183 )
          {
            if ( !v178 )
              goto LABEL_197;
            this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
                                                  (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)v178,
                                                  v183,
                                                  (const MethodInfo_2C7C05C *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
            if ( ((unsigned __int8)this & 1) == 0 && *(_DWORD *)(v182 + 24) != *(_DWORD *)(v182 + 28) )
            {
              System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                v178,
                *(WarBoardAIRoute_RouteData_o **)(v182 + 48),
                (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
              this = *(WarBoardAI__Think_d__11_o **)(v182 + 48);
              if ( !this )
                goto LABEL_197;
              WarBoardPieceData__SetPrevAiRoute((WarBoardPieceData_o *)this, (WarBoardAIRoute_RouteData_o *)v182, 0LL);
            }
          }
          if ( (--v180 & 0x80000000) != 0 )
            break;
          v181 -= 8LL;
          v179 = v194->fields.executeRoute;
          if ( !v179 )
            goto LABEL_197;
        }
      }
      v3->fields._availableRouteList_5__4 = 0LL;
      sub_B0D840(&v3->fields._availableRouteList_5__4, 0LL);
      v3->fields._evalValueSortList_5__5 = 0LL;
      p_evalValueSortList_5__5 = &v3->fields._evalValueSortList_5__5;
      sub_B0D840(p_evalValueSortList_5__5, 0LL);
      v197[0] = 0;
      v185 = j_il2cpp_value_box_0(bool_TypeInfo, v197);
      *(p_evalValueSortList_5__5 - 5) = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)v185;
      sub_B0D840(p_evalValueSortList_5__5 - 5, v185);
      *((_DWORD *)p_evalValueSortList_5__5 - 12) = 6;
      return 1;
    case 2:
      v3->fields.__1__state = -1;
      goto LABEL_16;
    case 3:
      availableRouteList_5__4 = (WarBoardAI__Think_d__11_o *)v3->fields._availableRouteList_5__4;
      v3->fields.__1__state = -1;
      goto LABEL_80;
    case 4:
      v3->fields.__1__state = -1;
      object = (Il2CppObject *)&v3->fields._evalValueSortList_5__5;
      goto LABEL_82;
    case 5:
      v3->fields.__1__state = -1;
      goto LABEL_182;
    case 6:
      v63 = 0;
      v3->fields.__1__state = -1;
      return v63;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_WarBoardAI__Think_d__11_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  Il2CppObject *v3; // x19
  struct WarBoardAI___c_StaticFields *static_fields; // x0

  if ( (byte_4212658 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAI___c_TypeInfo, v1);
    byte_4212658 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardAI___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = WarBoardAI___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardAI___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_4212659 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, x);
    sub_B0D8A4(&Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__, v4);
    sub_B0D8A4(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v5);
    sub_B0D8A4(&Method_WarBoardAI___c__Think_b__11_4__, v6);
    sub_B0D8A4(&WarBoardAI___c_TypeInfo, v7);
    byte_4212659 = 1;
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
    _9__11_4 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B0D974(
                                                                      System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo,
                                                                      x,
                                                                      method);
    System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
      _9__11_4,
      v11,
      Method_WarBoardAI___c__Think_b__11_4__,
      (const MethodInfo_261917C *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
    v12 = WarBoardAI___c_TypeInfo->static_fields;
    v12->__9__11_4 = _9__11_4;
    sub_B0D840(&v12->__9__11_4, _9__11_4);
  }
  v15 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__28661764(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_4,
          (const MethodInfo_1B55804 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
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

  if ( (byte_421265B & 1) == 0 )
  {
    sub_B0D8A4(&System_Decimal_TypeInfo, x);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, v4);
    sub_B0D8A4(&Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v7);
    sub_B0D8A4(&Method_WarBoardAI___c__Think_b__11_5__, v8);
    sub_B0D8A4(&WarBoardAI___c_TypeInfo, v9);
    byte_421265B = 1;
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
    _9__11_5 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B0D974(
                                                                      System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo,
                                                                      x,
                                                                      method);
    System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
      _9__11_5,
      v13,
      Method_WarBoardAI___c__Think_b__11_5__,
      (const MethodInfo_261917C *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
    v14 = WarBoardAI___c_TypeInfo->static_fields;
    v14->__9__11_5 = _9__11_5;
    sub_B0D840(&v14->__9__11_5, _9__11_5);
  }
  v15 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__28661764(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_5,
          (const MethodInfo_1B55804 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  if ( !x )
    sub_B0D97C(*(_QWORD *)&v15.fields.flags);
  size = x->fields._size;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v21 = System_Decimal__op_Implicit_43734496(size, 0LL);
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
    sub_B0D97C(this);
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

  if ( (byte_421265A & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_B0D8A4(&System_Decimal_TypeInfo, y);
    byte_421265A = 1;
  }
  if ( !y )
    sub_B0D97C(this);
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

  if ( (byte_421265C & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_B0D8A4(&System_Decimal_TypeInfo, y);
    byte_421265C = 1;
  }
  if ( !y )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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

  if ( (byte_421265D & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_B0D8A4(&System_Decimal_TypeInfo, y);
    byte_421265D = 1;
  }
  if ( !y )
    sub_B0D97C(this);
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

  if ( (byte_421265E & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_B0D8A4(&System_Decimal_TypeInfo, y);
    byte_421265E = 1;
  }
  if ( !y )
    sub_B0D97C(this);
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
  if ( (byte_421265F & 1) == 0 )
  {
    this = (WarBoardAI___c__DisplayClass11_0_o *)sub_B0D8A4(
                                                   &Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__,
                                                   x);
    byte_421265F = 1;
  }
  if ( !x || (this = (WarBoardAI___c__DisplayClass11_0_o *)v4->fields.notActionPieceHash) == 0LL )
    sub_B0D97C(this);
  return System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
           (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)this,
           (BattleBuffData_BuffData_o *)x->fields.basePiece,
           (const MethodInfo_2C7C05C *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
}